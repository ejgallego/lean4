// Lean compiler output
// Module: Lean.Meta.Match.MatcherApp.Transform
// Imports: public import Lean.Meta.Match.MatcherApp.Basic public import Lean.Meta.Match.MatchEqsExt public import Lean.Meta.Match.AltTelescopes public import Lean.Meta.AppBuilder import Lean.Meta.Tactic.Split import Lean.Meta.Tactic.Refl
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
lean_object* l_Subarray_empty___redArg();
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_forallBoundedTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getEquationsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* l_Lean_Meta_getMatcherInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Split_simpMatchTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unexpected type at MatcherApp.addArg"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "unexpected matcher application, insufficient number of parameters in alternative"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "unexpected matcher application, alternative must have "};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5;
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " parameters"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "failed to add argument to matcher application, argument type was not refined by `casesOn`"};
static const lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to add argument to matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "unexpected matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "failed to transfer argument through matcher application, alt type must be telescope with #"};
static const lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "failed to transfer argument through matcher application, type error when constructing the new motive"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "failed to transfer argument through matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__1_value),LEAN_SCALAR_PTR_LITERAL(231, 33, 22, 82, 100, 121, 126, 178)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Match.MatcherApp.Transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.MatcherApp.transform"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: ys.size == splitterAltInfo.numFields\n        "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: altInfo.numOverlaps = 0\n      "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "failed to transform matcher, type error when constructing splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "failed to transform matcher, type error when constructing new motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "failed to transform matcher, type error when constructing new pre-splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nfailed with"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matcher "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " has no MatchInfo found"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__6;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Cannot close goal after splitting: "};
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Type "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of alternative "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " still depends on "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__0_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__1_value;
static const lean_closure_object l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_inferMatchType___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object* v_e_19_, lean_object* v_maxFVars_20_, lean_object* v_k_21_, uint8_t v_cleanupAnnotations_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; uint8_t v___x_29_; uint8_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_28_, 0, v_k_21_);
v___x_29_ = 1;
v___x_30_ = 0;
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v_maxFVars_20_);
v___x_32_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_19_, v___x_29_, v___x_30_, v___x_29_, v___x_30_, v___x_31_, v___f_28_, v_cleanupAnnotations_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec_ref_known(v___x_31_, 1);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_40_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_40_ == 0)
{
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_a_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_40_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_38_; 
if (v_isShared_36_ == 0)
{
v___x_38_ = v___x_35_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_a_33_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
else
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_48_; 
v_a_41_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_48_ == 0)
{
v___x_43_ = v___x_32_;
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_32_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_46_; 
if (v_isShared_44_ == 0)
{
v___x_46_ = v___x_43_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_41_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object* v_e_49_, lean_object* v_maxFVars_50_, lean_object* v_k_51_, lean_object* v_cleanupAnnotations_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_58_ = lean_unbox(v_cleanupAnnotations_52_);
v_res_59_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_e_49_, v_maxFVars_50_, v_k_51_, v_cleanupAnnotations_boxed_58_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object* v_00_u03b1_60_, lean_object* v_e_61_, lean_object* v_maxFVars_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_e_61_, v_maxFVars_62_, v_k_63_, v_cleanupAnnotations_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object* v_00_u03b1_71_, lean_object* v_e_72_, lean_object* v_maxFVars_73_, lean_object* v_k_74_, lean_object* v_cleanupAnnotations_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_81_; lean_object* v_res_82_; 
v_cleanupAnnotations_boxed_81_ = lean_unbox(v_cleanupAnnotations_75_);
v_res_82_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(v_00_u03b1_71_, v_e_72_, v_maxFVars_73_, v_k_74_, v_cleanupAnnotations_boxed_81_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object* v_xs_83_, lean_object* v_alt_84_, uint8_t v___x_85_, uint8_t v_refined_86_, lean_object* v_unrefinedArgType_87_, lean_object* v_binderType_88_, lean_object* v_x_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
uint8_t v_refined_96_; 
if (v_refined_86_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Meta_isExprDefEq(v_unrefinedArgType_87_, v_binderType_88_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_a_120_; uint8_t v___x_121_; 
v_a_120_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_a_120_);
lean_dec_ref_known(v___x_119_, 1);
v___x_121_ = lean_unbox(v_a_120_);
lean_dec(v_a_120_);
if (v___x_121_ == 0)
{
v_refined_96_ = v___x_85_;
goto v___jp_95_;
}
else
{
v_refined_96_ = v_refined_86_;
goto v___jp_95_;
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec_ref(v_x_89_);
lean_dec_ref(v_alt_84_);
lean_dec_ref(v_xs_83_);
v_a_122_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_119_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_119_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
else
{
lean_dec_ref(v_binderType_88_);
lean_dec_ref(v_unrefinedArgType_87_);
v_refined_96_ = v_refined_86_;
goto v___jp_95_;
}
v___jp_95_:
{
lean_object* v___x_97_; uint8_t v___x_98_; uint8_t v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_array_push(v_xs_83_, v_x_89_);
v___x_98_ = 0;
v___x_99_ = 1;
v___x_100_ = l_Lean_Meta_mkLambdaFVars(v___x_97_, v_alt_84_, v___x_98_, v___x_85_, v___x_98_, v___x_85_, v___x_99_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec_ref(v___x_97_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_110_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_110_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_105_ = lean_box(v_refined_96_);
v___x_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_106_, 0, v_a_101_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_106_);
v___x_108_ = v___x_103_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
v_a_111_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_100_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_100_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object* v_xs_130_, lean_object* v_alt_131_, lean_object* v___x_132_, lean_object* v_refined_133_, lean_object* v_unrefinedArgType_134_, lean_object* v_binderType_135_, lean_object* v_x_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
uint8_t v___x_4151__boxed_142_; uint8_t v_refined_boxed_143_; lean_object* v_res_144_; 
v___x_4151__boxed_142_ = lean_unbox(v___x_132_);
v_refined_boxed_143_ = lean_unbox(v_refined_133_);
v_res_144_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(v_xs_130_, v_alt_131_, v___x_4151__boxed_142_, v_refined_boxed_143_, v_unrefinedArgType_134_, v_binderType_135_, v_x_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object* v_msgData_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; lean_object* v_env_152_; uint8_t v___x_153_; lean_object* v_env_154_; lean_object* v___x_155_; lean_object* v_toCold_156_; lean_object* v_mctx_157_; lean_object* v_lctx_158_; lean_object* v_options_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_151_ = lean_st_ref_get(v___y_149_);
v_env_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_ref(v_env_152_);
lean_dec(v___x_151_);
v___x_153_ = 0;
v_env_154_ = l_Lean_Environment_setRecordingDeps(v_env_152_, v___x_153_);
v___x_155_ = lean_st_ref_get(v___y_147_);
v_toCold_156_ = lean_ctor_get(v___y_148_, 0);
v_mctx_157_ = lean_ctor_get(v___x_155_, 0);
lean_inc_ref(v_mctx_157_);
lean_dec(v___x_155_);
v_lctx_158_ = lean_ctor_get(v___y_146_, 2);
v_options_159_ = lean_ctor_get(v_toCold_156_, 2);
lean_inc_ref(v_options_159_);
lean_inc_ref(v_lctx_158_);
v___x_160_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_160_, 0, v_env_154_);
lean_ctor_set(v___x_160_, 1, v_mctx_157_);
lean_ctor_set(v___x_160_, 2, v_lctx_158_);
lean_ctor_set(v___x_160_, 3, v_options_159_);
v___x_161_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v_msgData_145_);
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object* v_msgData_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msgData_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object* v_msg_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_ref_176_; lean_object* v___x_177_; lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_186_; 
v_ref_176_ = lean_ctor_get(v___y_173_, 2);
v___x_177_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msg_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
v_a_178_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_186_ == 0)
{
v___x_180_ = v___x_177_;
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_177_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_182_; lean_object* v___x_184_; 
lean_inc(v_ref_176_);
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v_ref_176_);
lean_ctor_set(v___x_182_, 1, v_a_178_);
if (v_isShared_181_ == 0)
{
lean_ctor_set_tag(v___x_180_, 1);
lean_ctor_set(v___x_180_, 0, v___x_182_);
v___x_184_ = v___x_180_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object* v_msg_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
return v_res_193_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0));
v___x_196_ = l_Lean_stringToMessageData(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2));
v___x_199_ = l_Lean_stringToMessageData(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4));
v___x_202_ = l_Lean_stringToMessageData(v___x_201_);
return v___x_202_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6));
v___x_205_ = l_Lean_stringToMessageData(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t v___x_206_, uint8_t v_refined_207_, lean_object* v_unrefinedArgType_208_, lean_object* v_binderType_209_, lean_object* v_numParams_210_, lean_object* v_xs_211_, lean_object* v_alt_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v___y_222_; lean_object* v_a_223_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_270_ = lean_array_get_size(v_xs_211_);
v___x_271_ = lean_nat_dec_eq(v___x_270_, v_numParams_210_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_272_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5);
v___x_273_ = l_Nat_reprFast(v_numParams_210_);
v___x_274_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
v___x_275_ = l_Lean_MessageData_ofFormat(v___x_274_);
v___x_276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_272_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__7);
v___x_278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_278_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_dec_ref_known(v___x_279_, 1);
goto v___jp_243_;
}
else
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_binderType_209_);
lean_dec_ref(v_unrefinedArgType_208_);
v_a_280_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_287_ == 0)
{
v___x_282_ = v___x_279_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_279_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_280_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
else
{
lean_dec(v_numParams_210_);
goto v___jp_243_;
}
v___jp_218_:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_Meta_whnfForall(v_a_223_, v___y_219_, v___y_222_, v___y_220_, v___y_221_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
if (lean_obj_tag(v_a_225_) == 7)
{
lean_object* v_binderName_226_; lean_object* v_binderType_227_; uint8_t v_binderInfo_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___f_231_; lean_object* v___x_232_; 
v_binderName_226_ = lean_ctor_get(v_a_225_, 0);
lean_inc(v_binderName_226_);
v_binderType_227_ = lean_ctor_get(v_a_225_, 1);
lean_inc_ref_n(v_binderType_227_, 2);
v_binderInfo_228_ = lean_ctor_get_uint8(v_a_225_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_225_, 3);
v___x_229_ = lean_box(v___x_206_);
v___x_230_ = lean_box(v_refined_207_);
v___f_231_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed), 12, 6);
lean_closure_set(v___f_231_, 0, v_xs_211_);
lean_closure_set(v___f_231_, 1, v_alt_212_);
lean_closure_set(v___f_231_, 2, v___x_229_);
lean_closure_set(v___f_231_, 3, v___x_230_);
lean_closure_set(v___f_231_, 4, v_unrefinedArgType_208_);
lean_closure_set(v___f_231_, 5, v_binderType_227_);
v___x_232_ = l_Lean_Meta_withLocalDeclNoLocalInstanceUpdate___redArg(v_binderName_226_, v_binderInfo_228_, v_binderType_227_, v___f_231_, v___y_219_, v___y_222_, v___y_220_, v___y_221_);
return v___x_232_;
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; 
lean_dec(v_a_225_);
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
v___x_233_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1);
v___x_234_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_233_, v___y_219_, v___y_222_, v___y_220_, v___y_221_);
return v___x_234_;
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
v_a_235_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_224_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_224_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
v___jp_243_:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Meta_instantiateForall(v_binderType_209_, v_xs_211_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v___y_219_ = v___y_213_;
v___y_220_ = v___y_215_;
v___y_221_ = v___y_216_;
v___y_222_ = v___y_214_;
v_a_223_ = v_a_245_;
goto v___jp_218_;
}
else
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_269_; 
v_a_246_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_269_ == 0)
{
v___x_248_ = v___x_244_;
v_isShared_249_ = v_isSharedCheck_269_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v___x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_269_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
uint8_t v___x_250_; 
v___x_250_ = l_Lean_Exception_isInterrupt(v_a_246_);
if (v___x_250_ == 0)
{
uint8_t v___x_251_; 
lean_inc(v_a_246_);
v___x_251_ = l_Lean_Exception_isRuntime(v_a_246_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_del_object(v___x_248_);
lean_dec(v_a_246_);
v___x_252_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3);
v___x_253_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_252_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_254_);
lean_dec_ref_known(v___x_253_, 1);
v___y_219_ = v___y_213_;
v___y_220_ = v___y_215_;
v___y_221_ = v___y_216_;
v___y_222_ = v___y_214_;
v_a_223_ = v_a_254_;
goto v___jp_218_;
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
v_a_255_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_253_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_253_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
else
{
lean_object* v___x_264_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
if (v_isShared_249_ == 0)
{
v___x_264_ = v___x_248_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_246_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
else
{
lean_object* v___x_267_; 
lean_dec_ref(v_alt_212_);
lean_dec_ref(v_xs_211_);
lean_dec_ref(v_unrefinedArgType_208_);
if (v_isShared_249_ == 0)
{
v___x_267_ = v___x_248_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_246_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object* v___x_288_, lean_object* v_refined_289_, lean_object* v_unrefinedArgType_290_, lean_object* v_binderType_291_, lean_object* v_numParams_292_, lean_object* v_xs_293_, lean_object* v_alt_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v___x_4327__boxed_300_; uint8_t v_refined_boxed_301_; lean_object* v_res_302_; 
v___x_4327__boxed_300_ = lean_unbox(v___x_288_);
v_refined_boxed_301_ = lean_unbox(v_refined_289_);
v_res_302_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(v___x_4327__boxed_300_, v_refined_boxed_301_, v_unrefinedArgType_290_, v_binderType_291_, v_numParams_292_, v_xs_293_, v_alt_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
return v_res_302_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0));
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object* v_unrefinedArgType_306_, lean_object* v_typeNew_307_, lean_object* v_altNumParams_308_, lean_object* v_alts_309_, uint8_t v_refined_310_, lean_object* v_i_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_array_get_size(v_alts_309_);
v___x_318_ = lean_nat_dec_lt(v_i_311_, v___x_317_);
if (v___x_318_ == 0)
{
lean_dec(v_i_311_);
lean_dec_ref(v_typeNew_307_);
lean_dec_ref(v_unrefinedArgType_306_);
if (v_refined_310_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec_ref(v_alts_309_);
v___x_319_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1);
v___x_320_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_319_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; 
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v_alts_309_);
return v___x_321_;
}
}
else
{
lean_object* v___x_322_; lean_object* v_alt_323_; lean_object* v_numParams_324_; lean_object* v___x_325_; 
v___x_322_ = lean_unsigned_to_nat(0u);
v_alt_323_ = lean_array_fget_borrowed(v_alts_309_, v_i_311_);
v_numParams_324_ = lean_array_get_borrowed(v___x_322_, v_altNumParams_308_, v_i_311_);
v___x_325_ = l_Lean_Meta_whnfD(v_typeNew_307_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v___x_325_, 1);
if (lean_obj_tag(v_a_326_) == 7)
{
lean_object* v_binderType_327_; lean_object* v_body_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___f_331_; uint8_t v___x_332_; lean_object* v___x_333_; 
v_binderType_327_ = lean_ctor_get(v_a_326_, 1);
lean_inc_ref(v_binderType_327_);
v_body_328_ = lean_ctor_get(v_a_326_, 2);
lean_inc_ref(v_body_328_);
lean_dec_ref_known(v_a_326_, 3);
v___x_329_ = lean_box(v___x_318_);
v___x_330_ = lean_box(v_refined_310_);
lean_inc_n(v_numParams_324_, 2);
lean_inc_ref(v_unrefinedArgType_306_);
v___f_331_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed), 12, 5);
lean_closure_set(v___f_331_, 0, v___x_329_);
lean_closure_set(v___f_331_, 1, v___x_330_);
lean_closure_set(v___f_331_, 2, v_unrefinedArgType_306_);
lean_closure_set(v___f_331_, 3, v_binderType_327_);
lean_closure_set(v___f_331_, 4, v_numParams_324_);
v___x_332_ = 0;
lean_inc(v_alt_323_);
v___x_333_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_alt_323_, v_numParams_324_, v___f_331_, v___x_332_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v_fst_335_; lean_object* v_snd_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v_fst_335_ = lean_ctor_get(v_a_334_, 0);
lean_inc(v_fst_335_);
v_snd_336_ = lean_ctor_get(v_a_334_, 1);
lean_inc(v_snd_336_);
lean_dec(v_a_334_);
v___x_337_ = lean_expr_instantiate1(v_body_328_, v_fst_335_);
lean_dec_ref(v_body_328_);
v___x_338_ = lean_array_fset(v_alts_309_, v_i_311_, v_fst_335_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v_i_311_, v___x_339_);
lean_dec(v_i_311_);
v___x_341_ = lean_unbox(v_snd_336_);
lean_dec(v_snd_336_);
v_typeNew_307_ = v___x_337_;
v_alts_309_ = v___x_338_;
v_refined_310_ = v___x_341_;
v_i_311_ = v___x_340_;
goto _start;
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v_body_328_);
lean_dec(v_i_311_);
lean_dec_ref(v_alts_309_);
lean_dec_ref(v_unrefinedArgType_306_);
v_a_343_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_333_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_333_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; 
lean_dec(v_a_326_);
lean_dec(v_i_311_);
lean_dec_ref(v_alts_309_);
lean_dec_ref(v_unrefinedArgType_306_);
v___x_351_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1);
v___x_352_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_351_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
return v___x_352_;
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec(v_i_311_);
lean_dec_ref(v_alts_309_);
lean_dec_ref(v_unrefinedArgType_306_);
v_a_353_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_325_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_325_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object* v_unrefinedArgType_361_, lean_object* v_typeNew_362_, lean_object* v_altNumParams_363_, lean_object* v_alts_364_, lean_object* v_refined_365_, lean_object* v_i_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
uint8_t v_refined_boxed_372_; lean_object* v_res_373_; 
v_refined_boxed_372_ = lean_unbox(v_refined_365_);
v_res_373_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v_unrefinedArgType_361_, v_typeNew_362_, v_altNumParams_363_, v_alts_364_, v_refined_boxed_372_, v_i_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
lean_dec_ref(v_altNumParams_363_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object* v_00_u03b1_374_, lean_object* v_msg_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object* v_00_u03b1_382_, lean_object* v_msg_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(v_00_u03b1_382_, v_msg_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object* v_e_390_, lean_object* v_k_391_, uint8_t v_cleanupAnnotations_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___f_398_; uint8_t v___x_399_; uint8_t v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___f_398_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_398_, 0, v_k_391_);
v___x_399_ = 1;
v___x_400_ = 0;
v___x_401_ = lean_box(0);
v___x_402_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_390_, v___x_399_, v___x_400_, v___x_399_, v___x_400_, v___x_401_, v___f_398_, v_cleanupAnnotations_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_402_);
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
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_418_; 
v_a_411_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_418_ == 0)
{
v___x_413_ = v___x_402_;
v_isShared_414_ = v_isSharedCheck_418_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_a_411_);
lean_dec(v___x_402_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object* v_e_419_, lean_object* v_k_420_, lean_object* v_cleanupAnnotations_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_427_; lean_object* v_res_428_; 
v_cleanupAnnotations_boxed_427_ = lean_unbox(v_cleanupAnnotations_421_);
v_res_428_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_419_, v_k_420_, v_cleanupAnnotations_boxed_427_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object* v_00_u03b1_429_, lean_object* v_e_430_, lean_object* v_k_431_, uint8_t v_cleanupAnnotations_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_430_, v_k_431_, v_cleanupAnnotations_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object* v_00_u03b1_439_, lean_object* v_e_440_, lean_object* v_k_441_, lean_object* v_cleanupAnnotations_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_448_; lean_object* v_res_449_; 
v_cleanupAnnotations_boxed_448_ = lean_unbox(v_cleanupAnnotations_442_);
v_res_449_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(v_00_u03b1_439_, v_e_440_, v_k_441_, v_cleanupAnnotations_boxed_448_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object* v___x_450_, lean_object* v_motiveArgs_451_, lean_object* v_x_452_, lean_object* v_x_453_){
_start:
{
lean_object* v_zero_454_; uint8_t v_isZero_455_; 
v_zero_454_ = lean_unsigned_to_nat(0u);
v_isZero_455_ = lean_nat_dec_eq(v_x_452_, v_zero_454_);
if (v_isZero_455_ == 1)
{
lean_dec(v_x_452_);
return v_x_453_;
}
else
{
lean_object* v_one_456_; lean_object* v_n_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v_one_456_ = lean_unsigned_to_nat(1u);
v_n_457_ = lean_nat_sub(v_x_452_, v_one_456_);
lean_dec(v_x_452_);
v___x_458_ = lean_array_fget_borrowed(v___x_450_, v_n_457_);
v___x_459_ = l_Lean_Expr_isFVar(v___x_458_);
if (v___x_459_ == 0)
{
v_x_452_ = v_n_457_;
goto _start;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = l_Lean_instInhabitedExpr;
v___x_462_ = lean_array_get_borrowed(v___x_461_, v_motiveArgs_451_, v_n_457_);
lean_inc(v___x_458_);
v___x_463_ = l_Lean_Expr_replaceFVar(v_x_453_, v___x_458_, v___x_462_);
lean_dec_ref(v_x_453_);
v_x_452_ = v_n_457_;
v_x_453_ = v___x_463_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object* v___x_465_, lean_object* v_motiveArgs_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_465_, v_motiveArgs_466_, v_x_467_, v_x_468_);
lean_dec_ref(v_motiveArgs_466_);
lean_dec_ref(v___x_465_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object* v___x_470_, lean_object* v_motiveArgs_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
lean_object* v_zero_474_; uint8_t v_isZero_475_; 
v_zero_474_ = lean_unsigned_to_nat(0u);
v_isZero_475_ = lean_nat_dec_eq(v_x_472_, v_zero_474_);
if (v_isZero_475_ == 1)
{
return v_x_473_;
}
else
{
lean_object* v_one_476_; lean_object* v_n_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_one_476_ = lean_unsigned_to_nat(1u);
v_n_477_ = lean_nat_sub(v_x_472_, v_one_476_);
v___x_478_ = lean_array_fget_borrowed(v___x_470_, v_n_477_);
v___x_479_ = l_Lean_Expr_isFVar(v___x_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
v___x_480_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_470_, v_motiveArgs_471_, v_n_477_, v_x_473_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_481_ = l_Lean_instInhabitedExpr;
v___x_482_ = lean_array_get_borrowed(v___x_481_, v_motiveArgs_471_, v_n_477_);
lean_inc(v___x_478_);
v___x_483_ = l_Lean_Expr_replaceFVar(v_x_473_, v___x_478_, v___x_482_);
lean_dec_ref(v_x_473_);
v___x_484_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_470_, v_motiveArgs_471_, v_n_477_, v___x_483_);
return v___x_484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object* v___x_485_, lean_object* v_motiveArgs_486_, lean_object* v_x_487_, lean_object* v_x_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v___x_485_, v_motiveArgs_486_, v_x_487_, v_x_488_);
lean_dec(v_x_487_);
lean_dec_ref(v_motiveArgs_486_);
lean_dec_ref(v___x_485_);
return v_res_489_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0));
v___x_492_ = l_Lean_stringToMessageData(v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2));
v___x_495_ = l_Lean_stringToMessageData(v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = ((lean_object*)(l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4));
v___x_498_ = l_Lean_stringToMessageData(v___x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object* v_matcherApp_499_, lean_object* v_e_500_, lean_object* v_discrs_501_, lean_object* v_toMatcherInfo_502_, lean_object* v_remaining_503_, lean_object* v_alts_504_, lean_object* v_params_505_, lean_object* v_matcherName_506_, lean_object* v_matcherLevels_507_, lean_object* v_motiveArgs_508_, lean_object* v_motiveBody_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; uint8_t v___y_520_; lean_object* v___y_521_; lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___y_530_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_572_; lean_object* v___y_573_; lean_object* v_matcherLevels_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_619_; lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_659_ = lean_array_get_size(v_motiveArgs_508_);
v___x_660_ = lean_array_get_size(v_discrs_501_);
v___x_661_ = lean_nat_dec_eq(v___x_659_, v___x_660_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec_ref(v_motiveBody_509_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec(v_matcherName_506_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v___x_662_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_663_ = l_Nat_reprFast(v___x_660_);
v___x_664_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
v___x_665_ = l_Lean_MessageData_ofFormat(v___x_664_);
v___x_666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_662_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_668_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
v___y_619_ = v___y_510_;
v___y_620_ = v___y_511_;
v___y_621_ = v___y_512_;
v___y_622_ = v___y_513_;
goto v___jp_618_;
}
v___jp_515_:
{
lean_object* v___x_531_; 
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
v___x_531_ = lean_infer_type(v___y_521_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_531_, 1);
v___x_533_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_499_);
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v___y_516_, v_a_532_, v___x_533_, v___y_519_, v___y_520_, v___x_534_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec_ref(v___x_533_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_548_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_548_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_540_ = lean_unsigned_to_nat(1u);
v___x_541_ = lean_mk_empty_array_with_capacity(v___x_540_);
v___x_542_ = lean_array_push(v___x_541_, v_e_500_);
v___x_543_ = l_Array_append___redArg(v___x_542_, v___y_518_);
v___x_544_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_544_, 0, v___y_517_);
lean_ctor_set(v___x_544_, 1, v___y_524_);
lean_ctor_set(v___x_544_, 2, v___y_525_);
lean_ctor_set(v___x_544_, 3, v___y_523_);
lean_ctor_set(v___x_544_, 4, v___y_526_);
lean_ctor_set(v___x_544_, 5, v___y_522_);
lean_ctor_set(v___x_544_, 6, v_a_536_);
lean_ctor_set(v___x_544_, 7, v___x_543_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_544_);
v___x_546_ = v___x_538_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec_ref(v___y_517_);
lean_dec_ref(v_e_500_);
v_a_549_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_535_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_535_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec_ref(v___y_519_);
lean_dec_ref(v___y_517_);
lean_dec_ref(v___y_516_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_557_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_531_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_531_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
v___jp_565_:
{
uint8_t v___x_579_; uint8_t v___x_580_; uint8_t v___x_581_; lean_object* v___x_582_; 
v___x_579_ = 0;
v___x_580_ = 1;
v___x_581_ = 1;
v___x_582_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_508_, v___y_573_, v___x_579_, v___x_580_, v___x_579_, v___x_580_, v___x_581_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc_n(v_a_583_, 2);
lean_dec_ref_known(v___x_582_, 1);
lean_inc_ref(v_matcherLevels_574_);
v___x_584_ = lean_array_to_list(v_matcherLevels_574_);
lean_inc(v___y_572_);
v___x_585_ = l_Lean_mkConst(v___y_572_, v___x_584_);
v___x_586_ = l_Lean_mkAppN(v___x_585_, v___y_571_);
v___x_587_ = l_Lean_Expr_app___override(v___x_586_, v_a_583_);
v___x_588_ = l_Lean_mkAppN(v___x_587_, v___y_570_);
lean_inc_ref(v___x_588_);
v___x_589_ = l_Lean_Meta_isTypeCorrect(v___x_588_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; uint8_t v___x_591_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = lean_unbox(v_a_590_);
lean_dec(v_a_590_);
if (v___x_591_ == 0)
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec_ref(v___x_588_);
lean_dec(v_a_583_);
lean_dec_ref(v_matcherLevels_574_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec_ref(v___y_566_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v___x_592_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1);
v___x_593_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_592_, v___y_575_, v___y_576_, v___y_577_, v___y_578_);
v_a_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
else
{
v___y_516_ = v___y_566_;
v___y_517_ = v___y_568_;
v___y_518_ = v___y_567_;
v___y_519_ = v___y_569_;
v___y_520_ = v___x_579_;
v___y_521_ = v___x_588_;
v___y_522_ = v___y_570_;
v___y_523_ = v___y_571_;
v___y_524_ = v___y_572_;
v___y_525_ = v_matcherLevels_574_;
v___y_526_ = v_a_583_;
v___y_527_ = v___y_575_;
v___y_528_ = v___y_576_;
v___y_529_ = v___y_577_;
v___y_530_ = v___y_578_;
goto v___jp_515_;
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec_ref(v___x_588_);
lean_dec(v_a_583_);
lean_dec_ref(v_matcherLevels_574_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec_ref(v___y_566_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_602_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_589_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_589_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref(v_matcherLevels_574_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec_ref(v___y_566_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_610_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_582_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_582_);
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
v___jp_618_:
{
lean_object* v___x_623_; 
lean_inc(v___y_622_);
lean_inc_ref(v___y_621_);
lean_inc(v___y_620_);
lean_inc_ref(v___y_619_);
lean_inc_ref(v_e_500_);
v___x_623_ = lean_infer_type(v_e_500_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
lean_inc_n(v_a_624_, 2);
lean_dec_ref_known(v___x_623_, 1);
v___x_625_ = lean_array_get_size(v_discrs_501_);
v___x_626_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v_discrs_501_, v_motiveArgs_508_, v___x_625_, v_a_624_);
v___x_627_ = l_Lean_mkArrow(v___x_626_, v_motiveBody_509_, v___y_621_, v___y_622_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_uElimPos_x3f_628_; 
v_uElimPos_x3f_628_ = lean_ctor_get(v_toMatcherInfo_502_, 3);
if (lean_obj_tag(v_uElimPos_x3f_628_) == 0)
{
lean_object* v_a_629_; 
v_a_629_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_627_, 1);
v___y_566_ = v_a_624_;
v___y_567_ = v_remaining_503_;
v___y_568_ = v_toMatcherInfo_502_;
v___y_569_ = v_alts_504_;
v___y_570_ = v_discrs_501_;
v___y_571_ = v_params_505_;
v___y_572_ = v_matcherName_506_;
v___y_573_ = v_a_629_;
v_matcherLevels_574_ = v_matcherLevels_507_;
v___y_575_ = v___y_619_;
v___y_576_ = v___y_620_;
v___y_577_ = v___y_621_;
v___y_578_ = v___y_622_;
goto v___jp_565_;
}
else
{
lean_object* v_a_630_; lean_object* v_val_631_; lean_object* v___x_632_; 
v_a_630_ = lean_ctor_get(v___x_627_, 0);
lean_inc_n(v_a_630_, 2);
lean_dec_ref_known(v___x_627_, 1);
v_val_631_ = lean_ctor_get(v_uElimPos_x3f_628_, 0);
v___x_632_ = l_Lean_Meta_getLevel(v_a_630_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_634_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_633_);
lean_dec_ref_known(v___x_632_, 1);
v___x_634_ = lean_array_set(v_matcherLevels_507_, v_val_631_, v_a_633_);
v___y_566_ = v_a_624_;
v___y_567_ = v_remaining_503_;
v___y_568_ = v_toMatcherInfo_502_;
v___y_569_ = v_alts_504_;
v___y_570_ = v_discrs_501_;
v___y_571_ = v_params_505_;
v___y_572_ = v_matcherName_506_;
v___y_573_ = v_a_630_;
v_matcherLevels_574_ = v___x_634_;
v___y_575_ = v___y_619_;
v___y_576_ = v___y_620_;
v___y_577_ = v___y_621_;
v___y_578_ = v___y_622_;
goto v___jp_565_;
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_dec(v_a_630_);
lean_dec(v_a_624_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec(v_matcherName_506_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_635_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_632_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_632_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec(v_a_624_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec(v_matcherName_506_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_643_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_627_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_627_);
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
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v_motiveBody_509_);
lean_dec_ref(v_matcherLevels_507_);
lean_dec(v_matcherName_506_);
lean_dec_ref(v_params_505_);
lean_dec_ref(v_alts_504_);
lean_dec_ref(v_toMatcherInfo_502_);
lean_dec_ref(v_discrs_501_);
lean_dec_ref(v_e_500_);
lean_dec_ref(v_matcherApp_499_);
v_a_651_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_623_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_623_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object* v_matcherApp_678_, lean_object* v_e_679_, lean_object* v_discrs_680_, lean_object* v_toMatcherInfo_681_, lean_object* v_remaining_682_, lean_object* v_alts_683_, lean_object* v_params_684_, lean_object* v_matcherName_685_, lean_object* v_matcherLevels_686_, lean_object* v_motiveArgs_687_, lean_object* v_motiveBody_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Meta_MatcherApp_addArg___lam__0(v_matcherApp_678_, v_e_679_, v_discrs_680_, v_toMatcherInfo_681_, v_remaining_682_, v_alts_683_, v_params_684_, v_matcherName_685_, v_matcherLevels_686_, v_motiveArgs_687_, v_motiveBody_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec_ref(v_motiveArgs_687_);
lean_dec_ref(v_remaining_682_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object* v_matcherApp_695_, lean_object* v_e_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_toMatcherInfo_702_; lean_object* v_matcherName_703_; lean_object* v_matcherLevels_704_; lean_object* v_params_705_; lean_object* v_motive_706_; lean_object* v_discrs_707_; lean_object* v_alts_708_; lean_object* v_remaining_709_; lean_object* v___f_710_; uint8_t v___x_711_; lean_object* v___x_712_; 
v_toMatcherInfo_702_ = lean_ctor_get(v_matcherApp_695_, 0);
lean_inc_ref(v_toMatcherInfo_702_);
v_matcherName_703_ = lean_ctor_get(v_matcherApp_695_, 1);
lean_inc(v_matcherName_703_);
v_matcherLevels_704_ = lean_ctor_get(v_matcherApp_695_, 2);
lean_inc_ref(v_matcherLevels_704_);
v_params_705_ = lean_ctor_get(v_matcherApp_695_, 3);
lean_inc_ref(v_params_705_);
v_motive_706_ = lean_ctor_get(v_matcherApp_695_, 4);
lean_inc_ref(v_motive_706_);
v_discrs_707_ = lean_ctor_get(v_matcherApp_695_, 5);
lean_inc_ref(v_discrs_707_);
v_alts_708_ = lean_ctor_get(v_matcherApp_695_, 6);
lean_inc_ref(v_alts_708_);
v_remaining_709_ = lean_ctor_get(v_matcherApp_695_, 7);
lean_inc_ref(v_remaining_709_);
v___f_710_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_710_, 0, v_matcherApp_695_);
lean_closure_set(v___f_710_, 1, v_e_696_);
lean_closure_set(v___f_710_, 2, v_discrs_707_);
lean_closure_set(v___f_710_, 3, v_toMatcherInfo_702_);
lean_closure_set(v___f_710_, 4, v_remaining_709_);
lean_closure_set(v___f_710_, 5, v_alts_708_);
lean_closure_set(v___f_710_, 6, v_params_705_);
lean_closure_set(v___f_710_, 7, v_matcherName_703_);
lean_closure_set(v___f_710_, 8, v_matcherLevels_704_);
v___x_711_ = 0;
v___x_712_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_706_, v___f_710_, v___x_711_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object* v_matcherApp_713_, lean_object* v_e_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_713_, v_e_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object* v_matcherApp_721_, lean_object* v_e_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
lean_object* v___x_728_; 
v___x_728_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_721_, v_e_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_737_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_737_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_737_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_737_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_733_, 0, v_a_729_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v___x_733_);
v___x_735_ = v___x_731_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_754_; 
v_a_738_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_754_ == 0)
{
v___x_740_ = v___x_728_;
v_isShared_741_ = v_isSharedCheck_754_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_728_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_754_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
uint8_t v___x_742_; 
v___x_742_ = l_Lean_Exception_isInterrupt(v_a_738_);
if (v___x_742_ == 0)
{
uint8_t v___x_743_; 
lean_inc(v_a_738_);
v___x_743_ = l_Lean_Exception_isRuntime(v_a_738_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v___x_746_; 
lean_dec(v_a_738_);
v___x_744_ = lean_box(0);
if (v_isShared_741_ == 0)
{
lean_ctor_set_tag(v___x_740_, 0);
lean_ctor_set(v___x_740_, 0, v___x_744_);
v___x_746_ = v___x_740_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
else
{
lean_object* v___x_749_; 
if (v_isShared_741_ == 0)
{
v___x_749_ = v___x_740_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_738_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
else
{
lean_object* v___x_752_; 
if (v_isShared_741_ == 0)
{
v___x_752_ = v___x_740_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_738_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object* v_matcherApp_755_, lean_object* v_e_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_matcherApp_755_, v_e_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(lean_object* v_type_763_, lean_object* v_maxFVars_x3f_764_, lean_object* v_k_765_, uint8_t v_cleanupAnnotations_766_, uint8_t v_whnfType_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v___f_773_; lean_object* v___x_774_; 
v___f_773_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_773_, 0, v_k_765_);
v___x_774_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_763_, v_maxFVars_x3f_764_, v___f_773_, v_cleanupAnnotations_766_, v_whnfType_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
v_a_783_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_774_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_774_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg___boxed(lean_object* v_type_791_, lean_object* v_maxFVars_x3f_792_, lean_object* v_k_793_, lean_object* v_cleanupAnnotations_794_, lean_object* v_whnfType_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_801_; uint8_t v_whnfType_boxed_802_; lean_object* v_res_803_; 
v_cleanupAnnotations_boxed_801_ = lean_unbox(v_cleanupAnnotations_794_);
v_whnfType_boxed_802_ = lean_unbox(v_whnfType_795_);
v_res_803_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_type_791_, v_maxFVars_x3f_792_, v_k_793_, v_cleanupAnnotations_boxed_801_, v_whnfType_boxed_802_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(lean_object* v_00_u03b1_804_, lean_object* v_type_805_, lean_object* v_maxFVars_x3f_806_, lean_object* v_k_807_, uint8_t v_cleanupAnnotations_808_, uint8_t v_whnfType_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_type_805_, v_maxFVars_x3f_806_, v_k_807_, v_cleanupAnnotations_808_, v_whnfType_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object* v_00_u03b1_816_, lean_object* v_type_817_, lean_object* v_maxFVars_x3f_818_, lean_object* v_k_819_, lean_object* v_cleanupAnnotations_820_, lean_object* v_whnfType_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_827_; uint8_t v_whnfType_boxed_828_; lean_object* v_res_829_; 
v_cleanupAnnotations_boxed_827_ = lean_unbox(v_cleanupAnnotations_820_);
v_whnfType_boxed_828_ = lean_unbox(v_whnfType_821_);
v_res_829_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(v_00_u03b1_816_, v_type_817_, v_maxFVars_x3f_818_, v_k_819_, v_cleanupAnnotations_boxed_827_, v_whnfType_boxed_828_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(lean_object* v_type_830_, lean_object* v_k_831_, uint8_t v_cleanupAnnotations_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v___f_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___f_838_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_838_, 0, v_k_831_);
v___x_839_ = 0;
v___x_840_ = lean_box(0);
v___x_841_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_839_, v___x_840_, v_type_830_, v___f_838_, v_cleanupAnnotations_832_, v___x_839_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_841_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_841_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg___boxed(lean_object* v_type_858_, lean_object* v_k_859_, lean_object* v_cleanupAnnotations_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_866_; lean_object* v_res_867_; 
v_cleanupAnnotations_boxed_866_ = lean_unbox(v_cleanupAnnotations_860_);
v_res_867_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(v_type_858_, v_k_859_, v_cleanupAnnotations_boxed_866_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4(lean_object* v_00_u03b1_868_, lean_object* v_type_869_, lean_object* v_k_870_, uint8_t v_cleanupAnnotations_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(v_type_869_, v_k_870_, v_cleanupAnnotations_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___boxed(lean_object* v_00_u03b1_878_, lean_object* v_type_879_, lean_object* v_k_880_, lean_object* v_cleanupAnnotations_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_887_; lean_object* v_res_888_; 
v_cleanupAnnotations_boxed_887_ = lean_unbox(v_cleanupAnnotations_881_);
v_res_888_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4(v_00_u03b1_878_, v_type_879_, v_k_880_, v_cleanupAnnotations_boxed_887_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(size_t v_sz_889_, size_t v_i_890_, lean_object* v_bs_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
uint8_t v___x_897_; 
v___x_897_ = lean_usize_dec_lt(v_i_890_, v_sz_889_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; 
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v_bs_891_);
return v___x_898_;
}
else
{
lean_object* v_v_899_; lean_object* v___x_900_; lean_object* v_bs_x27_901_; lean_object* v___x_902_; 
v_v_899_ = lean_array_uget(v_bs_891_, v_i_890_);
v___x_900_ = lean_unsigned_to_nat(0u);
v_bs_x27_901_ = lean_array_uset(v_bs_891_, v_i_890_, v___x_900_);
lean_inc(v___y_895_);
lean_inc_ref(v___y_894_);
lean_inc(v___y_893_);
lean_inc_ref(v___y_892_);
v___x_902_ = lean_infer_type(v_v_899_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; size_t v___x_904_; size_t v___x_905_; lean_object* v___x_906_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
v___x_904_ = ((size_t)1ULL);
v___x_905_ = lean_usize_add(v_i_890_, v___x_904_);
v___x_906_ = lean_array_uset(v_bs_x27_901_, v_i_890_, v_a_903_);
v_i_890_ = v___x_905_;
v_bs_891_ = v___x_906_;
goto _start;
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec_ref(v_bs_x27_901_);
v_a_908_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_902_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_902_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object* v_sz_916_, lean_object* v_i_917_, lean_object* v_bs_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
size_t v_sz_boxed_924_; size_t v_i_boxed_925_; lean_object* v_res_926_; 
v_sz_boxed_924_ = lean_unbox_usize(v_sz_916_);
lean_dec(v_sz_916_);
v_i_boxed_925_ = lean_unbox_usize(v_i_917_);
lean_dec(v_i_917_);
v_res_926_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v_sz_boxed_924_, v_i_boxed_925_, v_bs_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
return v_res_926_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1(void){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = ((lean_object*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__0));
v___x_929_ = l_Lean_stringToMessageData(v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0(uint8_t v___x_930_, uint8_t v___x_931_, uint8_t v___x_932_, lean_object* v_a_933_, lean_object* v_fvs_934_, lean_object* v_body_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = lean_array_get_size(v_fvs_934_);
v___x_950_ = lean_nat_dec_eq(v___x_949_, v_a_933_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v___x_951_ = lean_obj_once(&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1, &l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___closed__1);
v___x_952_ = l_Nat_reprFast(v_a_933_);
v___x_953_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
v___x_954_ = l_Lean_MessageData_ofFormat(v___x_953_);
v___x_955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_951_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_957_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
v_a_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
else
{
lean_dec(v_a_933_);
goto v___jp_941_;
}
v___jp_941_:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_942_ = lean_unsigned_to_nat(2u);
v___x_943_ = l_Lean_Expr_getAppNumArgs(v_body_935_);
v___x_944_ = lean_nat_sub(v___x_943_, v___x_942_);
lean_dec(v___x_943_);
v___x_945_ = lean_unsigned_to_nat(1u);
v___x_946_ = lean_nat_sub(v___x_944_, v___x_945_);
lean_dec(v___x_944_);
v___x_947_ = l_Lean_Expr_getRevArg_x21(v_body_935_, v___x_946_);
v___x_948_ = l_Lean_Meta_mkLambdaFVars(v_fvs_934_, v___x_947_, v___x_930_, v___x_931_, v___x_930_, v___x_931_, v___x_932_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
return v___x_948_;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___boxed(lean_object* v___x_967_, lean_object* v___x_968_, lean_object* v___x_969_, lean_object* v_a_970_, lean_object* v_fvs_971_, lean_object* v_body_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
uint8_t v___x_4345__boxed_978_; uint8_t v___x_4346__boxed_979_; uint8_t v___x_4347__boxed_980_; lean_object* v_res_981_; 
v___x_4345__boxed_978_ = lean_unbox(v___x_967_);
v___x_4346__boxed_979_ = lean_unbox(v___x_968_);
v___x_4347__boxed_980_ = lean_unbox(v___x_969_);
v_res_981_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0(v___x_4345__boxed_978_, v___x_4346__boxed_979_, v___x_4347__boxed_980_, v_a_970_, v_fvs_971_, v_body_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec_ref(v_body_972_);
lean_dec_ref(v_fvs_971_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object* v_as_982_, lean_object* v_bs_983_, lean_object* v_i_984_, lean_object* v_cs_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = lean_array_get_size(v_as_982_);
v___x_992_ = lean_nat_dec_lt(v_i_984_, v___x_991_);
if (v___x_992_ == 0)
{
lean_object* v___x_993_; 
lean_dec(v_i_984_);
v___x_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_993_, 0, v_cs_985_);
return v___x_993_;
}
else
{
lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_994_ = lean_array_get_size(v_bs_983_);
v___x_995_ = lean_nat_dec_lt(v_i_984_, v___x_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; 
lean_dec(v_i_984_);
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v_cs_985_);
return v___x_996_;
}
else
{
uint8_t v___x_997_; uint8_t v___x_998_; lean_object* v_a_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___f_1003_; lean_object* v_b_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_997_ = 0;
v___x_998_ = 1;
v_a_999_ = lean_array_fget_borrowed(v_as_982_, v_i_984_);
v___x_1000_ = lean_box(v___x_997_);
v___x_1001_ = lean_box(v___x_995_);
v___x_1002_ = lean_box(v___x_998_);
lean_inc_n(v_a_999_, 2);
v___f_1003_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1003_, 0, v___x_1000_);
lean_closure_set(v___f_1003_, 1, v___x_1001_);
lean_closure_set(v___f_1003_, 2, v___x_1002_);
lean_closure_set(v___f_1003_, 3, v_a_999_);
v_b_1004_ = lean_array_fget_borrowed(v_bs_983_, v_i_984_);
v___x_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1005_, 0, v_a_999_);
lean_inc(v_b_1004_);
v___x_1006_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_b_1004_, v___x_1005_, v___f_1003_, v___x_997_, v___x_997_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1008_ = lean_unsigned_to_nat(1u);
v___x_1009_ = lean_nat_add(v_i_984_, v___x_1008_);
lean_dec(v_i_984_);
v___x_1010_ = lean_array_push(v_cs_985_, v_a_1007_);
v_i_984_ = v___x_1009_;
v_cs_985_ = v___x_1010_;
goto _start;
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
lean_dec_ref(v_cs_985_);
lean_dec(v_i_984_);
v_a_1012_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_1006_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_1006_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object* v_as_1020_, lean_object* v_bs_1021_, lean_object* v_i_1022_, lean_object* v_cs_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(v_as_1020_, v_bs_1021_, v_i_1022_, v_cs_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v_bs_1021_);
lean_dec_ref(v_as_1020_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object* v_matcherApp_1032_, lean_object* v_altAuxs_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
size_t v_sz_1040_; size_t v___x_1041_; lean_object* v___x_1042_; 
v_sz_1040_ = lean_array_size(v_altAuxs_1033_);
v___x_1041_ = ((size_t)0ULL);
v___x_1042_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v_sz_1040_, v___x_1041_, v_altAuxs_1033_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1042_, 1);
v___x_1044_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_1032_);
v___x_1045_ = lean_unsigned_to_nat(0u);
v___x_1046_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_1047_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(v___x_1044_, v_a_1043_, v___x_1045_, v___x_1046_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
lean_dec(v_a_1043_);
lean_dec_ref(v___x_1044_);
return v___x_1047_;
}
else
{
lean_dec_ref(v_matcherApp_1032_);
return v___x_1042_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object* v_matcherApp_1048_, lean_object* v_altAuxs_1049_, lean_object* v_x_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_Meta_MatcherApp_refineThrough___lam__0(v_matcherApp_1048_, v_altAuxs_1049_, v_x_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec_ref(v_x_1050_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object* v_motiveArgs_1057_, lean_object* v___x_1058_, lean_object* v_i_1059_, lean_object* v_a_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_zero_1066_; uint8_t v_isZero_1067_; 
v_zero_1066_ = lean_unsigned_to_nat(0u);
v_isZero_1067_ = lean_nat_dec_eq(v_i_1059_, v_zero_1066_);
if (v_isZero_1067_ == 1)
{
lean_object* v___x_1068_; 
lean_dec(v_i_1059_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_a_1060_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; lean_object* v_one_1070_; lean_object* v_n_1071_; lean_object* v_motiveArg_1072_; lean_object* v_discr_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1069_ = l_Lean_instInhabitedExpr;
v_one_1070_ = lean_unsigned_to_nat(1u);
v_n_1071_ = lean_nat_sub(v_i_1059_, v_one_1070_);
lean_dec(v_i_1059_);
v_motiveArg_1072_ = lean_array_get_borrowed(v___x_1069_, v_motiveArgs_1057_, v_n_1071_);
v_discr_1073_ = lean_array_fget_borrowed(v___x_1058_, v_n_1071_);
v___x_1074_ = lean_box(0);
lean_inc(v_discr_1073_);
v___x_1075_ = l_Lean_Meta_kabstract(v_a_1060_, v_discr_1073_, v___x_1074_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1077_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1077_ = lean_expr_instantiate1(v_a_1076_, v_motiveArg_1072_);
lean_dec(v_a_1076_);
v_i_1059_ = v_n_1071_;
v_a_1060_ = v___x_1077_;
goto _start;
}
else
{
lean_dec(v_n_1071_);
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object* v_motiveArgs_1079_, lean_object* v___x_1080_, lean_object* v_i_1081_, lean_object* v_a_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1079_, v___x_1080_, v_i_1081_, v_a_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec_ref(v___x_1080_);
lean_dec_ref(v_motiveArgs_1079_);
return v_res_1088_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0));
v___x_1091_ = l_Lean_stringToMessageData(v___x_1090_);
return v___x_1091_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2));
v___x_1094_ = l_Lean_stringToMessageData(v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object* v___f_1095_, lean_object* v_discrs_1096_, lean_object* v_e_1097_, lean_object* v_toMatcherInfo_1098_, lean_object* v_matcherName_1099_, lean_object* v_params_1100_, lean_object* v_matcherLevels_1101_, lean_object* v_motiveArgs_1102_, lean_object* v___motiveBody_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
uint8_t v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v_matcherLevels_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1208_ = lean_array_get_size(v_motiveArgs_1102_);
v___x_1209_ = lean_array_get_size(v_discrs_1096_);
v___x_1210_ = lean_nat_dec_eq(v___x_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref(v_matcherLevels_1101_);
lean_dec(v_matcherName_1099_);
lean_dec_ref(v_e_1097_);
lean_dec_ref(v___f_1095_);
v___x_1211_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3);
v___x_1212_ = l_Nat_reprFast(v___x_1209_);
v___x_1213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
v___x_1214_ = l_Lean_MessageData_ofFormat(v___x_1213_);
v___x_1215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1211_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
v___x_1216_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_1217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1215_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1217_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1218_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1218_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
else
{
v___y_1178_ = v___y_1104_;
v___y_1179_ = v___y_1105_;
v___y_1180_ = v___y_1106_;
v___y_1181_ = v___y_1107_;
goto v___jp_1177_;
}
v___jp_1109_:
{
lean_object* v___x_1117_; 
lean_inc(v___y_1116_);
lean_inc_ref(v___y_1115_);
lean_inc(v___y_1114_);
lean_inc_ref(v___y_1113_);
v___x_1117_ = lean_infer_type(v___y_1111_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; lean_object* v___x_1119_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
lean_inc(v_a_1118_);
lean_dec_ref_known(v___x_1117_, 1);
v___x_1119_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__4___redArg(v_a_1118_, v___y_1112_, v___y_1110_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
return v___x_1119_;
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec_ref(v___y_1112_);
v_a_1120_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1117_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1117_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
v___jp_1128_:
{
uint8_t v___x_1138_; uint8_t v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; 
v___x_1138_ = 0;
v___x_1139_ = 1;
v___x_1140_ = 1;
v___x_1141_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_1102_, v___y_1129_, v___x_1138_, v___x_1139_, v___x_1138_, v___x_1139_, v___x_1140_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc(v_a_1142_);
lean_dec_ref_known(v___x_1141_, 1);
v___x_1143_ = lean_array_to_list(v_matcherLevels_1133_);
v___x_1144_ = l_Lean_mkConst(v___y_1130_, v___x_1143_);
v___x_1145_ = l_Lean_mkAppN(v___x_1144_, v___y_1132_);
v___x_1146_ = l_Lean_Expr_app___override(v___x_1145_, v_a_1142_);
v___x_1147_ = l_Lean_mkAppN(v___x_1146_, v___y_1131_);
lean_inc_ref(v___x_1147_);
v___x_1148_ = l_Lean_Meta_isTypeCorrect(v___x_1147_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; uint8_t v___x_1150_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v___x_1150_ = lean_unbox(v_a_1149_);
lean_dec(v_a_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec_ref(v___x_1147_);
lean_dec_ref(v___f_1095_);
v___x_1151_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1);
v___x_1152_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1151_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1152_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
else
{
v___y_1110_ = v___x_1138_;
v___y_1111_ = v___x_1147_;
v___y_1112_ = v___f_1095_;
v___y_1113_ = v___y_1134_;
v___y_1114_ = v___y_1135_;
v___y_1115_ = v___y_1136_;
v___y_1116_ = v___y_1137_;
goto v___jp_1109_;
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec_ref(v___x_1147_);
lean_dec_ref(v___f_1095_);
v_a_1161_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1148_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1148_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1166_; 
if (v_isShared_1164_ == 0)
{
v___x_1166_ = v___x_1163_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1161_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec_ref(v_matcherLevels_1133_);
lean_dec(v___y_1130_);
lean_dec_ref(v___f_1095_);
v_a_1169_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1141_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v___x_1141_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
v___jp_1177_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_array_get_size(v_discrs_1096_);
v___x_1183_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1102_, v_discrs_1096_, v___x_1182_, v_e_1097_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1185_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc_n(v_a_1184_, 2);
lean_dec_ref_known(v___x_1183_, 1);
v___x_1185_ = l_Lean_Meta_mkEq(v_a_1184_, v_a_1184_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_uElimPos_x3f_1186_; 
v_uElimPos_x3f_1186_ = lean_ctor_get(v_toMatcherInfo_1098_, 3);
if (lean_obj_tag(v_uElimPos_x3f_1186_) == 0)
{
lean_object* v_a_1187_; 
v_a_1187_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1187_);
lean_dec_ref_known(v___x_1185_, 1);
v___y_1129_ = v_a_1187_;
v___y_1130_ = v_matcherName_1099_;
v___y_1131_ = v_discrs_1096_;
v___y_1132_ = v_params_1100_;
v_matcherLevels_1133_ = v_matcherLevels_1101_;
v___y_1134_ = v___y_1178_;
v___y_1135_ = v___y_1179_;
v___y_1136_ = v___y_1180_;
v___y_1137_ = v___y_1181_;
goto v___jp_1128_;
}
else
{
lean_object* v_a_1188_; lean_object* v_val_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v_a_1188_ = lean_ctor_get(v___x_1185_, 0);
lean_inc(v_a_1188_);
lean_dec_ref_known(v___x_1185_, 1);
v_val_1189_ = lean_ctor_get(v_uElimPos_x3f_1186_, 0);
v___x_1190_ = lean_box(0);
v___x_1191_ = lean_array_set(v_matcherLevels_1101_, v_val_1189_, v___x_1190_);
v___y_1129_ = v_a_1188_;
v___y_1130_ = v_matcherName_1099_;
v___y_1131_ = v_discrs_1096_;
v___y_1132_ = v_params_1100_;
v_matcherLevels_1133_ = v___x_1191_;
v___y_1134_ = v___y_1178_;
v___y_1135_ = v___y_1179_;
v___y_1136_ = v___y_1180_;
v___y_1137_ = v___y_1181_;
goto v___jp_1128_;
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_matcherLevels_1101_);
lean_dec(v_matcherName_1099_);
lean_dec_ref(v___f_1095_);
v_a_1192_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1185_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1185_);
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
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref(v_matcherLevels_1101_);
lean_dec(v_matcherName_1099_);
lean_dec_ref(v___f_1095_);
v_a_1200_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1183_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1183_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object* v___f_1227_, lean_object* v_discrs_1228_, lean_object* v_e_1229_, lean_object* v_toMatcherInfo_1230_, lean_object* v_matcherName_1231_, lean_object* v_params_1232_, lean_object* v_matcherLevels_1233_, lean_object* v_motiveArgs_1234_, lean_object* v___motiveBody_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lean_Meta_MatcherApp_refineThrough___lam__1(v___f_1227_, v_discrs_1228_, v_e_1229_, v_toMatcherInfo_1230_, v_matcherName_1231_, v_params_1232_, v_matcherLevels_1233_, v_motiveArgs_1234_, v___motiveBody_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec_ref(v___motiveBody_1235_);
lean_dec_ref(v_motiveArgs_1234_);
lean_dec_ref(v_params_1232_);
lean_dec_ref(v_toMatcherInfo_1230_);
lean_dec_ref(v_discrs_1228_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object* v_matcherApp_1242_, lean_object* v_e_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_toMatcherInfo_1249_; lean_object* v_matcherName_1250_; lean_object* v_matcherLevels_1251_; lean_object* v_params_1252_; lean_object* v_motive_1253_; lean_object* v_discrs_1254_; lean_object* v___f_1255_; lean_object* v___f_1256_; uint8_t v___x_1257_; lean_object* v___x_1258_; 
v_toMatcherInfo_1249_ = lean_ctor_get(v_matcherApp_1242_, 0);
lean_inc_ref(v_toMatcherInfo_1249_);
v_matcherName_1250_ = lean_ctor_get(v_matcherApp_1242_, 1);
lean_inc(v_matcherName_1250_);
v_matcherLevels_1251_ = lean_ctor_get(v_matcherApp_1242_, 2);
lean_inc_ref(v_matcherLevels_1251_);
v_params_1252_ = lean_ctor_get(v_matcherApp_1242_, 3);
lean_inc_ref(v_params_1252_);
v_motive_1253_ = lean_ctor_get(v_matcherApp_1242_, 4);
lean_inc_ref(v_motive_1253_);
v_discrs_1254_ = lean_ctor_get(v_matcherApp_1242_, 5);
lean_inc_ref(v_discrs_1254_);
v___f_1255_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1255_, 0, v_matcherApp_1242_);
v___f_1256_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1256_, 0, v___f_1255_);
lean_closure_set(v___f_1256_, 1, v_discrs_1254_);
lean_closure_set(v___f_1256_, 2, v_e_1243_);
lean_closure_set(v___f_1256_, 3, v_toMatcherInfo_1249_);
lean_closure_set(v___f_1256_, 4, v_matcherName_1250_);
lean_closure_set(v___f_1256_, 5, v_params_1252_);
lean_closure_set(v___f_1256_, 6, v_matcherLevels_1251_);
v___x_1257_ = 0;
v___x_1258_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_1253_, v___f_1256_, v___x_1257_, v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object* v_matcherApp_1259_, lean_object* v_e_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1259_, v_e_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_);
lean_dec(v_a_1264_);
lean_dec_ref(v_a_1263_);
lean_dec(v_a_1262_);
lean_dec_ref(v_a_1261_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object* v_motiveArgs_1267_, lean_object* v___x_1268_, lean_object* v_n_1269_, lean_object* v_i_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_motiveArgs_1267_, v___x_1268_, v_i_1270_, v_a_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object* v_motiveArgs_1279_, lean_object* v___x_1280_, lean_object* v_n_1281_, lean_object* v_i_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(v_motiveArgs_1279_, v___x_1280_, v_n_1281_, v_i_1282_, v_a_1283_, v_a_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v_n_1281_);
lean_dec_ref(v___x_1280_);
lean_dec_ref(v_motiveArgs_1279_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object* v_matcherApp_1291_, lean_object* v_e_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1291_, v_e_1292_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1307_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_a_1299_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1303_);
v___x_1305_ = v___x_1301_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
else
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1324_; 
v_a_1308_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1310_ = v___x_1298_;
v_isShared_1311_ = v_isSharedCheck_1324_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1298_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1324_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
uint8_t v___x_1312_; 
v___x_1312_ = l_Lean_Exception_isInterrupt(v_a_1308_);
if (v___x_1312_ == 0)
{
uint8_t v___x_1313_; 
lean_inc(v_a_1308_);
v___x_1313_ = l_Lean_Exception_isRuntime(v_a_1308_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; lean_object* v___x_1316_; 
lean_dec(v_a_1308_);
v___x_1314_ = lean_box(0);
if (v_isShared_1311_ == 0)
{
lean_ctor_set_tag(v___x_1310_, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1314_);
v___x_1316_ = v___x_1310_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
else
{
lean_object* v___x_1319_; 
if (v_isShared_1311_ == 0)
{
v___x_1319_ = v___x_1310_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1308_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
else
{
lean_object* v___x_1322_; 
if (v_isShared_1311_ == 0)
{
v___x_1322_ = v___x_1310_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1308_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object* v_matcherApp_1325_, lean_object* v_e_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Meta_MatcherApp_refineThrough_x3f(v_matcherApp_1325_, v_e_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec_ref(v_a_1327_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object* v_lctx_1333_, lean_object* v_x_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_keyedConfig_1340_; uint8_t v_trackZetaDelta_1341_; lean_object* v_zetaDeltaSet_1342_; lean_object* v_localInstances_1343_; lean_object* v_defEqCtx_x3f_1344_; lean_object* v_synthPendingDepth_1345_; lean_object* v_customCanUnfoldPredicate_x3f_1346_; uint8_t v_univApprox_1347_; uint8_t v_inTypeClassResolution_1348_; uint8_t v_cacheInferType_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_keyedConfig_1340_ = lean_ctor_get(v___y_1335_, 0);
v_trackZetaDelta_1341_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*7);
v_zetaDeltaSet_1342_ = lean_ctor_get(v___y_1335_, 1);
v_localInstances_1343_ = lean_ctor_get(v___y_1335_, 3);
v_defEqCtx_x3f_1344_ = lean_ctor_get(v___y_1335_, 4);
v_synthPendingDepth_1345_ = lean_ctor_get(v___y_1335_, 5);
v_customCanUnfoldPredicate_x3f_1346_ = lean_ctor_get(v___y_1335_, 6);
v_univApprox_1347_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1348_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*7 + 2);
v_cacheInferType_1349_ = lean_ctor_get_uint8(v___y_1335_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_1346_);
lean_inc(v_synthPendingDepth_1345_);
lean_inc(v_defEqCtx_x3f_1344_);
lean_inc_ref(v_localInstances_1343_);
lean_inc(v_zetaDeltaSet_1342_);
lean_inc_ref(v_keyedConfig_1340_);
v___x_1350_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1350_, 0, v_keyedConfig_1340_);
lean_ctor_set(v___x_1350_, 1, v_zetaDeltaSet_1342_);
lean_ctor_set(v___x_1350_, 2, v_lctx_1333_);
lean_ctor_set(v___x_1350_, 3, v_localInstances_1343_);
lean_ctor_set(v___x_1350_, 4, v_defEqCtx_x3f_1344_);
lean_ctor_set(v___x_1350_, 5, v_synthPendingDepth_1345_);
lean_ctor_set(v___x_1350_, 6, v_customCanUnfoldPredicate_x3f_1346_);
lean_ctor_set_uint8(v___x_1350_, sizeof(void*)*7, v_trackZetaDelta_1341_);
lean_ctor_set_uint8(v___x_1350_, sizeof(void*)*7 + 1, v_univApprox_1347_);
lean_ctor_set_uint8(v___x_1350_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1348_);
lean_ctor_set_uint8(v___x_1350_, sizeof(void*)*7 + 3, v_cacheInferType_1349_);
lean_inc(v___y_1338_);
lean_inc_ref(v___y_1337_);
lean_inc(v___y_1336_);
v___x_1351_ = lean_apply_5(v_x_1334_, v___x_1350_, v___y_1336_, v___y_1337_, v___y_1338_, lean_box(0));
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object* v_lctx_1352_, lean_object* v_x_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1352_, v_x_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object* v_00_u03b1_1360_, lean_object* v_lctx_1361_, lean_object* v_x_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1361_, v_x_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object* v_00_u03b1_1369_, lean_object* v_lctx_1370_, lean_object* v_x_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(v_00_u03b1_1369_, v_lctx_1370_, v_x_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object* v_as_1378_, size_t v_i_1379_, size_t v_stop_1380_, lean_object* v_b_1381_){
_start:
{
uint8_t v___x_1382_; 
v___x_1382_ = lean_usize_dec_eq(v_i_1379_, v_stop_1380_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; lean_object* v_fst_1384_; lean_object* v_snd_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; size_t v___x_1388_; size_t v___x_1389_; 
v___x_1383_ = lean_array_uget_borrowed(v_as_1378_, v_i_1379_);
v_fst_1384_ = lean_ctor_get(v___x_1383_, 0);
v_snd_1385_ = lean_ctor_get(v___x_1383_, 1);
v___x_1386_ = l_Lean_Expr_fvarId_x21(v_fst_1384_);
lean_inc(v_snd_1385_);
v___x_1387_ = l_Lean_LocalContext_setUserName(v_b_1381_, v___x_1386_, v_snd_1385_);
v___x_1388_ = ((size_t)1ULL);
v___x_1389_ = lean_usize_add(v_i_1379_, v___x_1388_);
v_i_1379_ = v___x_1389_;
v_b_1381_ = v___x_1387_;
goto _start;
}
else
{
return v_b_1381_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object* v_as_1391_, lean_object* v_i_1392_, lean_object* v_stop_1393_, lean_object* v_b_1394_){
_start:
{
size_t v_i_boxed_1395_; size_t v_stop_boxed_1396_; lean_object* v_res_1397_; 
v_i_boxed_1395_ = lean_unbox_usize(v_i_1392_);
lean_dec(v_i_1392_);
v_stop_boxed_1396_ = lean_unbox_usize(v_stop_1393_);
lean_dec(v_stop_1393_);
v_res_1397_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v_as_1391_, v_i_boxed_1395_, v_stop_boxed_1396_, v_b_1394_);
lean_dec_ref(v_as_1391_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object* v_fvars_1398_, lean_object* v_names_1399_, lean_object* v_k_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v_lctx_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v_lctx_1406_ = lean_ctor_get(v_a_1401_, 2);
v___x_1407_ = l_Array_zip___redArg(v_fvars_1398_, v_names_1399_);
v___x_1408_ = lean_unsigned_to_nat(0u);
v___x_1409_ = lean_array_get_size(v___x_1407_);
v___x_1410_ = lean_nat_dec_lt(v___x_1408_, v___x_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; 
lean_dec_ref(v___x_1407_);
lean_inc_ref(v_lctx_1406_);
v___x_1411_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1406_, v_k_1400_, v_a_1401_, v_a_1402_, v_a_1403_, v_a_1404_);
return v___x_1411_;
}
else
{
size_t v___x_1412_; size_t v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1412_ = ((size_t)0ULL);
v___x_1413_ = lean_usize_of_nat(v___x_1409_);
lean_inc_ref(v_lctx_1406_);
v___x_1414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1407_, v___x_1412_, v___x_1413_, v_lctx_1406_);
lean_dec_ref(v___x_1407_);
v___x_1415_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1414_, v_k_1400_, v_a_1401_, v_a_1402_, v_a_1403_, v_a_1404_);
return v___x_1415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object* v_fvars_1416_, lean_object* v_names_1417_, lean_object* v_k_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1416_, v_names_1417_, v_k_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_);
lean_dec(v_a_1422_);
lean_dec_ref(v_a_1421_);
lean_dec(v_a_1420_);
lean_dec_ref(v_a_1419_);
lean_dec_ref(v_names_1417_);
lean_dec_ref(v_fvars_1416_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object* v_00_u03b1_1425_, lean_object* v_fvars_1426_, lean_object* v_names_1427_, lean_object* v_k_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1426_, v_names_1427_, v_k_1428_, v_a_1429_, v_a_1430_, v_a_1431_, v_a_1432_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object* v_00_u03b1_1435_, lean_object* v_fvars_1436_, lean_object* v_names_1437_, lean_object* v_k_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(v_00_u03b1_1435_, v_fvars_1436_, v_names_1437_, v_k_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_);
lean_dec(v_a_1442_);
lean_dec_ref(v_a_1441_);
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec_ref(v_names_1437_);
lean_dec_ref(v_fvars_1436_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object* v_k_1445_, lean_object* v_fvars_1446_, lean_object* v_names_1447_, lean_object* v_runInBase_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_apply_2(v_runInBase_1448_, lean_box(0), v_k_1445_);
v___x_1455_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1446_, v_names_1447_, v___x_1454_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object* v_k_1456_, lean_object* v_fvars_1457_, lean_object* v_names_1458_, lean_object* v_runInBase_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(v_k_1456_, v_fvars_1457_, v_names_1458_, v_runInBase_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec_ref(v_names_1458_);
lean_dec_ref(v_fvars_1457_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object* v_inst_1466_, lean_object* v_inst_1467_, lean_object* v_fvars_1468_, lean_object* v_names_1469_, lean_object* v_k_1470_){
_start:
{
lean_object* v_toBind_1471_; lean_object* v_liftWith_1472_; lean_object* v_restoreM_1473_; lean_object* v___f_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_toBind_1471_ = lean_ctor_get(v_inst_1467_, 1);
lean_inc(v_toBind_1471_);
lean_dec_ref(v_inst_1467_);
v_liftWith_1472_ = lean_ctor_get(v_inst_1466_, 0);
lean_inc(v_liftWith_1472_);
v_restoreM_1473_ = lean_ctor_get(v_inst_1466_, 1);
lean_inc(v_restoreM_1473_);
lean_dec_ref(v_inst_1466_);
v___f_1474_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1474_, 0, v_k_1470_);
lean_closure_set(v___f_1474_, 1, v_fvars_1468_);
lean_closure_set(v___f_1474_, 2, v_names_1469_);
v___x_1475_ = lean_apply_2(v_liftWith_1472_, lean_box(0), v___f_1474_);
v___x_1476_ = lean_apply_1(v_restoreM_1473_, lean_box(0));
v___x_1477_ = lean_apply_4(v_toBind_1471_, lean_box(0), lean_box(0), v___x_1475_, v___x_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object* v_n_1478_, lean_object* v_inst_1479_, lean_object* v_inst_1480_, lean_object* v_00_u03b1_1481_, lean_object* v_fvars_1482_, lean_object* v_names_1483_, lean_object* v_k_1484_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_1479_, v_inst_1480_, v_fvars_1482_, v_names_1483_, v_k_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object* v_k_1486_, lean_object* v_runInBase_1487_, lean_object* v_ys_1488_, lean_object* v_args_1489_, lean_object* v___mask_1490_, lean_object* v___bodyType_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1497_ = lean_apply_2(v_k_1486_, v_ys_1488_, v_args_1489_);
lean_inc(v___y_1495_);
lean_inc_ref(v___y_1494_);
lean_inc(v___y_1493_);
lean_inc_ref(v___y_1492_);
v___x_1498_ = lean_apply_7(v_runInBase_1487_, lean_box(0), v___x_1497_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, lean_box(0));
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object* v_k_1499_, lean_object* v_runInBase_1500_, lean_object* v_ys_1501_, lean_object* v_args_1502_, lean_object* v___mask_1503_, lean_object* v___bodyType_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(v_k_1499_, v_runInBase_1500_, v_ys_1501_, v_args_1502_, v___mask_1503_, v___bodyType_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec_ref(v___bodyType_1504_);
lean_dec_ref(v___mask_1503_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object* v_k_1511_, lean_object* v_origAltType_1512_, lean_object* v_altInfo_1513_, lean_object* v_runInBase_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___f_1520_; lean_object* v___x_1521_; 
v___f_1520_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1520_, 0, v_k_1511_);
lean_closure_set(v___f_1520_, 1, v_runInBase_1514_);
v___x_1521_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_1512_, v_altInfo_1513_, v___f_1520_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object* v_k_1522_, lean_object* v_origAltType_1523_, lean_object* v_altInfo_1524_, lean_object* v_runInBase_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(v_k_1522_, v_origAltType_1523_, v_altInfo_1524_, v_runInBase_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object* v_inst_1532_, lean_object* v_inst_1533_, lean_object* v_origAltType_1534_, lean_object* v_altInfo_1535_, lean_object* v_k_1536_){
_start:
{
lean_object* v_toBind_1537_; lean_object* v_liftWith_1538_; lean_object* v_restoreM_1539_; lean_object* v___f_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v_toBind_1537_ = lean_ctor_get(v_inst_1532_, 1);
lean_inc(v_toBind_1537_);
lean_dec_ref(v_inst_1532_);
v_liftWith_1538_ = lean_ctor_get(v_inst_1533_, 0);
lean_inc(v_liftWith_1538_);
v_restoreM_1539_ = lean_ctor_get(v_inst_1533_, 1);
lean_inc(v_restoreM_1539_);
lean_dec_ref(v_inst_1533_);
v___f_1540_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_1540_, 0, v_k_1536_);
lean_closure_set(v___f_1540_, 1, v_origAltType_1534_);
lean_closure_set(v___f_1540_, 2, v_altInfo_1535_);
v___x_1541_ = lean_apply_2(v_liftWith_1538_, lean_box(0), v___f_1540_);
v___x_1542_ = lean_apply_1(v_restoreM_1539_, lean_box(0));
v___x_1543_ = lean_apply_4(v_toBind_1537_, lean_box(0), lean_box(0), v___x_1541_, v___x_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object* v_n_1544_, lean_object* v_inst_1545_, lean_object* v_inst_1546_, lean_object* v_00_u03b1_1547_, lean_object* v_origAltType_1548_, lean_object* v_altInfo_1549_, lean_object* v_k_1550_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_1545_, v_inst_1546_, v_origAltType_1548_, v_altInfo_1549_, v_k_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object* v_fvars_1552_){
_start:
{
lean_object* v_args_1553_; lean_object* v_discrEqs_1554_; lean_object* v___x_1555_; 
v_args_1553_ = lean_ctor_get(v_fvars_1552_, 0);
lean_inc_ref(v_args_1553_);
v_discrEqs_1554_ = lean_ctor_get(v_fvars_1552_, 3);
lean_inc_ref(v_discrEqs_1554_);
lean_dec_ref(v_fvars_1552_);
v___x_1555_ = l_Array_append___redArg(v_args_1553_, v_discrEqs_1554_);
lean_dec_ref(v_discrEqs_1554_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object* v_fvars_1556_){
_start:
{
lean_object* v_fields_1557_; lean_object* v_overlaps_1558_; lean_object* v_discrEqs_1559_; lean_object* v_extraEqs_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v_fields_1557_ = lean_ctor_get(v_fvars_1556_, 1);
lean_inc_ref(v_fields_1557_);
v_overlaps_1558_ = lean_ctor_get(v_fvars_1556_, 2);
lean_inc_ref(v_overlaps_1558_);
v_discrEqs_1559_ = lean_ctor_get(v_fvars_1556_, 3);
lean_inc_ref(v_discrEqs_1559_);
v_extraEqs_1560_ = lean_ctor_get(v_fvars_1556_, 4);
lean_inc_ref(v_extraEqs_1560_);
lean_dec_ref(v_fvars_1556_);
v___x_1561_ = l_Array_append___redArg(v_fields_1557_, v_overlaps_1558_);
lean_dec_ref(v_overlaps_1558_);
v___x_1562_ = l_Array_append___redArg(v___x_1561_, v_discrEqs_1559_);
lean_dec_ref(v_discrEqs_1559_);
v___x_1563_ = l_Array_append___redArg(v___x_1562_, v_extraEqs_1560_);
lean_dec_ref(v_extraEqs_1560_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object* v_inst_1564_, lean_object* v_inst_1565_, lean_object* v_x_1566_){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3);
v___x_1568_ = l_Lean_throwError___redArg(v_inst_1564_, v_inst_1565_, v___x_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object* v_inst_1569_, lean_object* v_inst_1570_, lean_object* v_x_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__0(v_inst_1569_, v_inst_1570_, v_x_1571_);
lean_dec_ref(v_x_1571_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object* v_inst_1573_, lean_object* v_x_1574_){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1575_ = l_Lean_Expr_fvarId_x21(v_x_1574_);
v___x_1576_ = lean_alloc_closure((void*)(l_Lean_FVarId_getUserName___boxed), 6, 1);
lean_closure_set(v___x_1576_, 0, v___x_1575_);
v___x_1577_ = lean_apply_2(v_inst_1573_, lean_box(0), v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object* v_inst_1578_, lean_object* v_x_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__1(v_inst_1578_, v_x_1579_);
lean_dec_ref(v_x_1579_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object* v_inst_1581_, lean_object* v___f_1582_, lean_object* v_xs_1583_, lean_object* v_x_1584_){
_start:
{
size_t v_sz_1585_; size_t v___x_1586_; lean_object* v___x_1587_; 
v_sz_1585_ = lean_array_size(v_xs_1583_);
v___x_1586_ = ((size_t)0ULL);
v___x_1587_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1581_, v___f_1582_, v_sz_1585_, v___x_1586_, v_xs_1583_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object* v_inst_1588_, lean_object* v___f_1589_, lean_object* v_xs_1590_, lean_object* v_x_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__2(v_inst_1588_, v___f_1589_, v_xs_1590_, v_x_1591_);
lean_dec_ref(v_x_1591_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object* v_fst_1593_, lean_object* v_fst_1594_, lean_object* v___x_1595_, lean_object* v___x_1596_, lean_object* v_toPure_1597_, lean_object* v_____do__lift_1598_){
_start:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1599_ = lean_array_push(v_fst_1593_, v_____do__lift_1598_);
v___x_1600_ = lean_nat_add(v_fst_1594_, v___x_1595_);
v___x_1601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v___x_1596_);
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1599_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
v___x_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
v___x_1604_ = lean_apply_2(v_toPure_1597_, lean_box(0), v___x_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed(lean_object* v_fst_1605_, lean_object* v_fst_1606_, lean_object* v___x_1607_, lean_object* v___x_1608_, lean_object* v_toPure_1609_, lean_object* v_____do__lift_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__3(v_fst_1605_, v_fst_1606_, v___x_1607_, v___x_1608_, v_toPure_1609_, v_____do__lift_1610_);
lean_dec(v___x_1607_);
lean_dec(v_fst_1606_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(uint8_t v_val_1612_, lean_object* v_a_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
if (v_val_1612_ == 0)
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lean_Meta_mkEqRefl(v_a_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
return v___x_1619_;
}
else
{
lean_object* v___x_1620_; 
v___x_1620_ = l_Lean_Meta_mkHEqRefl(v_a_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
return v___x_1620_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed(lean_object* v_val_1621_, lean_object* v_a_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
uint8_t v_val_12702__boxed_1628_; lean_object* v_res_1629_; 
v_val_12702__boxed_1628_ = lean_unbox(v_val_1621_);
v_res_1629_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__4(v_val_12702__boxed_1628_, v_a_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object* v_toPure_1630_, lean_object* v_inst_1631_, lean_object* v_toBind_1632_, lean_object* v_a_1633_, lean_object* v_x_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v_snd_1636_; lean_object* v_snd_1637_; lean_object* v_fst_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1686_; 
v_snd_1636_ = lean_ctor_get(v___y_1635_, 1);
lean_inc(v_snd_1636_);
v_snd_1637_ = lean_ctor_get(v_snd_1636_, 1);
lean_inc(v_snd_1637_);
v_fst_1638_ = lean_ctor_get(v___y_1635_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___y_1635_);
if (v_isSharedCheck_1686_ == 0)
{
lean_object* v_unused_1687_; 
v_unused_1687_ = lean_ctor_get(v___y_1635_, 1);
lean_dec(v_unused_1687_);
v___x_1640_ = v___y_1635_;
v_isShared_1641_ = v_isSharedCheck_1686_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_fst_1638_);
lean_dec(v___y_1635_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1686_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v_fst_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1684_; 
v_fst_1642_ = lean_ctor_get(v_snd_1636_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v_snd_1636_);
if (v_isSharedCheck_1684_ == 0)
{
lean_object* v_unused_1685_; 
v_unused_1685_ = lean_ctor_get(v_snd_1636_, 1);
lean_dec(v_unused_1685_);
v___x_1644_ = v_snd_1636_;
v_isShared_1645_ = v_isSharedCheck_1684_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_fst_1642_);
lean_dec(v_snd_1636_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1684_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v_array_1646_; lean_object* v_start_1647_; lean_object* v_stop_1648_; uint8_t v___x_1649_; 
v_array_1646_ = lean_ctor_get(v_snd_1637_, 0);
v_start_1647_ = lean_ctor_get(v_snd_1637_, 1);
v_stop_1648_ = lean_ctor_get(v_snd_1637_, 2);
v___x_1649_ = lean_nat_dec_lt(v_start_1647_, v_stop_1648_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1651_; 
lean_dec_ref(v_a_1633_);
lean_dec(v_toBind_1632_);
lean_dec(v_inst_1631_);
if (v_isShared_1645_ == 0)
{
v___x_1651_ = v___x_1644_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_fst_1642_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_snd_1637_);
v___x_1651_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1653_; 
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 1, v___x_1651_);
v___x_1653_ = v___x_1640_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_fst_1638_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v___x_1651_);
v___x_1653_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
v___x_1655_ = lean_apply_2(v_toPure_1630_, lean_box(0), v___x_1654_);
return v___x_1655_;
}
}
}
else
{
lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1680_; 
lean_inc(v_stop_1648_);
lean_inc(v_start_1647_);
lean_inc_ref(v_array_1646_);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_snd_1637_);
if (v_isSharedCheck_1680_ == 0)
{
lean_object* v_unused_1681_; lean_object* v_unused_1682_; lean_object* v_unused_1683_; 
v_unused_1681_ = lean_ctor_get(v_snd_1637_, 2);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v_snd_1637_, 1);
lean_dec(v_unused_1682_);
v_unused_1683_ = lean_ctor_get(v_snd_1637_, 0);
lean_dec(v_unused_1683_);
v___x_1659_ = v_snd_1637_;
v_isShared_1660_ = v_isSharedCheck_1680_;
goto v_resetjp_1658_;
}
else
{
lean_dec(v_snd_1637_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1680_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1665_; 
v___x_1661_ = lean_array_fget(v_array_1646_, v_start_1647_);
v___x_1662_ = lean_unsigned_to_nat(1u);
v___x_1663_ = lean_nat_add(v_start_1647_, v___x_1662_);
lean_dec(v_start_1647_);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 1, v___x_1663_);
v___x_1665_ = v___x_1659_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_array_1646_);
lean_ctor_set(v_reuseFailAlloc_1679_, 1, v___x_1663_);
lean_ctor_set(v_reuseFailAlloc_1679_, 2, v_stop_1648_);
v___x_1665_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v___x_1667_; 
lean_dec_ref(v_a_1633_);
lean_dec(v_toBind_1632_);
lean_dec(v_inst_1631_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 1, v___x_1665_);
v___x_1667_ = v___x_1644_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_fst_1642_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v___x_1665_);
v___x_1667_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
lean_object* v___x_1669_; 
if (v_isShared_1641_ == 0)
{
lean_ctor_set(v___x_1640_, 1, v___x_1667_);
v___x_1669_ = v___x_1640_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_fst_1638_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v___x_1667_);
v___x_1669_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1669_);
v___x_1671_ = lean_apply_2(v_toPure_1630_, lean_box(0), v___x_1670_);
return v___x_1671_;
}
}
}
else
{
lean_object* v_val_1674_; lean_object* v___f_1675_; lean_object* v___f_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
lean_del_object(v___x_1644_);
lean_del_object(v___x_1640_);
v_val_1674_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_val_1674_);
lean_dec_ref_known(v___x_1661_, 1);
v___f_1675_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_1675_, 0, v_fst_1638_);
lean_closure_set(v___f_1675_, 1, v_fst_1642_);
lean_closure_set(v___f_1675_, 2, v___x_1662_);
lean_closure_set(v___f_1675_, 3, v___x_1665_);
lean_closure_set(v___f_1675_, 4, v_toPure_1630_);
v___f_1676_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__4___boxed), 7, 2);
lean_closure_set(v___f_1676_, 0, v_val_1674_);
lean_closure_set(v___f_1676_, 1, v_a_1633_);
v___x_1677_ = lean_apply_2(v_inst_1631_, lean_box(0), v___f_1676_);
v___x_1678_ = lean_apply_4(v_toBind_1632_, lean_box(0), lean_box(0), v___x_1677_, v___f_1675_);
return v___x_1678_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(lean_object* v_heq_1688_, lean_object* v_fst_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_mkArrow(v_heq_1688_, v_fst_1689_, v___y_1692_, v___y_1693_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object* v_heq_1696_, lean_object* v_fst_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__6(v_heq_1696_, v_fst_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object* v_heq_1706_, lean_object* v_fst_1707_, lean_object* v_fst_1708_, lean_object* v___x_1709_, lean_object* v___x_1710_, lean_object* v_toPure_1711_, lean_object* v_____x_1712_){
_start:
{
uint8_t v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1713_ = l_Lean_Expr_isHEq(v_heq_1706_);
v___x_1714_ = lean_box(v___x_1713_);
v___x_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1714_);
v___x_1716_ = lean_array_push(v_fst_1707_, v___x_1715_);
v___x_1717_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0));
v___x_1718_ = lean_array_push(v_fst_1708_, v___x_1717_);
v___x_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1709_);
lean_ctor_set(v___x_1719_, 1, v___x_1710_);
v___x_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1718_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1716_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_____x_1712_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
v___x_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
v___x_1724_ = lean_apply_2(v_toPure_1711_, lean_box(0), v___x_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed(lean_object* v_heq_1725_, lean_object* v_fst_1726_, lean_object* v_fst_1727_, lean_object* v___x_1728_, lean_object* v___x_1729_, lean_object* v_toPure_1730_, lean_object* v_____x_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__7(v_heq_1725_, v_fst_1726_, v_fst_1727_, v___x_1728_, v___x_1729_, v_toPure_1730_, v_____x_1731_);
lean_dec_ref(v_heq_1725_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object* v_fst_1733_, lean_object* v_fst_1734_, lean_object* v_fst_1735_, lean_object* v___x_1736_, lean_object* v___x_1737_, lean_object* v_toPure_1738_, lean_object* v_inst_1739_, lean_object* v_toBind_1740_, lean_object* v_heq_1741_){
_start:
{
lean_object* v___f_1742_; lean_object* v___f_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
lean_inc_ref(v_heq_1741_);
v___f_1742_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1742_, 0, v_heq_1741_);
lean_closure_set(v___f_1742_, 1, v_fst_1733_);
v___f_1743_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_1743_, 0, v_heq_1741_);
lean_closure_set(v___f_1743_, 1, v_fst_1734_);
lean_closure_set(v___f_1743_, 2, v_fst_1735_);
lean_closure_set(v___f_1743_, 3, v___x_1736_);
lean_closure_set(v___f_1743_, 4, v___x_1737_);
lean_closure_set(v___f_1743_, 5, v_toPure_1738_);
v___x_1744_ = lean_apply_2(v_inst_1739_, lean_box(0), v___f_1742_);
v___x_1745_ = lean_apply_4(v_toBind_1740_, lean_box(0), lean_box(0), v___x_1744_, v___f_1743_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object* v___x_1746_, lean_object* v_a_1747_, lean_object* v_inst_1748_, lean_object* v_toBind_1749_, lean_object* v___f_1750_, lean_object* v_fst_1751_, lean_object* v_fst_1752_, lean_object* v___x_1753_, lean_object* v___x_1754_, lean_object* v___x_1755_, lean_object* v_fst_1756_, lean_object* v_toPure_1757_, uint8_t v_____do__lift_1758_){
_start:
{
if (v_____do__lift_1758_ == 0)
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
lean_dec(v_toPure_1757_);
lean_dec(v_fst_1756_);
lean_dec_ref(v___x_1755_);
lean_dec_ref(v___x_1754_);
lean_dec(v___x_1753_);
lean_dec(v_fst_1752_);
lean_dec(v_fst_1751_);
v___x_1759_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEqHEq___boxed), 7, 2);
lean_closure_set(v___x_1759_, 0, v___x_1746_);
lean_closure_set(v___x_1759_, 1, v_a_1747_);
v___x_1760_ = lean_apply_2(v_inst_1748_, lean_box(0), v___x_1759_);
v___x_1761_ = lean_apply_4(v_toBind_1749_, lean_box(0), lean_box(0), v___x_1760_, v___f_1750_);
return v___x_1761_;
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
lean_dec(v___f_1750_);
lean_dec(v_toBind_1749_);
lean_dec(v_inst_1748_);
lean_dec_ref(v_a_1747_);
lean_dec_ref(v___x_1746_);
v___x_1762_ = lean_box(0);
v___x_1763_ = lean_array_push(v_fst_1751_, v___x_1762_);
v___x_1764_ = lean_array_push(v_fst_1752_, v___x_1753_);
v___x_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1754_);
lean_ctor_set(v___x_1765_, 1, v___x_1755_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1763_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1768_, 0, v_fst_1756_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
v___x_1770_ = lean_apply_2(v_toPure_1757_, lean_box(0), v___x_1769_);
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object* v___x_1771_, lean_object* v_a_1772_, lean_object* v_inst_1773_, lean_object* v_toBind_1774_, lean_object* v___f_1775_, lean_object* v_fst_1776_, lean_object* v_fst_1777_, lean_object* v___x_1778_, lean_object* v___x_1779_, lean_object* v___x_1780_, lean_object* v_fst_1781_, lean_object* v_toPure_1782_, lean_object* v_____do__lift_1783_){
_start:
{
uint8_t v_____do__lift_12896__boxed_1784_; lean_object* v_res_1785_; 
v_____do__lift_12896__boxed_1784_ = lean_unbox(v_____do__lift_1783_);
v_res_1785_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__9(v___x_1771_, v_a_1772_, v_inst_1773_, v_toBind_1774_, v___f_1775_, v_fst_1776_, v_fst_1777_, v___x_1778_, v___x_1779_, v___x_1780_, v_fst_1781_, v_toPure_1782_, v_____do__lift_12896__boxed_1784_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object* v_toPure_1786_, uint8_t v_addEqualities_1787_, lean_object* v_inst_1788_, lean_object* v_toBind_1789_, lean_object* v_a_1790_, lean_object* v_x_1791_, lean_object* v___y_1792_){
_start:
{
lean_object* v_snd_1793_; lean_object* v_snd_1794_; lean_object* v_snd_1795_; lean_object* v_snd_1796_; lean_object* v_fst_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1903_; 
v_snd_1793_ = lean_ctor_get(v___y_1792_, 1);
lean_inc(v_snd_1793_);
v_snd_1794_ = lean_ctor_get(v_snd_1793_, 1);
lean_inc(v_snd_1794_);
v_snd_1795_ = lean_ctor_get(v_snd_1794_, 1);
lean_inc(v_snd_1795_);
v_snd_1796_ = lean_ctor_get(v_snd_1795_, 1);
lean_inc(v_snd_1796_);
v_fst_1797_ = lean_ctor_get(v___y_1792_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___y_1792_);
if (v_isSharedCheck_1903_ == 0)
{
lean_object* v_unused_1904_; 
v_unused_1904_ = lean_ctor_get(v___y_1792_, 1);
lean_dec(v_unused_1904_);
v___x_1799_ = v___y_1792_;
v_isShared_1800_ = v_isSharedCheck_1903_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_fst_1797_);
lean_dec(v___y_1792_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1903_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v_fst_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1901_; 
v_fst_1801_ = lean_ctor_get(v_snd_1793_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v_snd_1793_);
if (v_isSharedCheck_1901_ == 0)
{
lean_object* v_unused_1902_; 
v_unused_1902_ = lean_ctor_get(v_snd_1793_, 1);
lean_dec(v_unused_1902_);
v___x_1803_ = v_snd_1793_;
v_isShared_1804_ = v_isSharedCheck_1901_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_fst_1801_);
lean_dec(v_snd_1793_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1901_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v_fst_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1899_; 
v_fst_1805_ = lean_ctor_get(v_snd_1794_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v_snd_1794_);
if (v_isSharedCheck_1899_ == 0)
{
lean_object* v_unused_1900_; 
v_unused_1900_ = lean_ctor_get(v_snd_1794_, 1);
lean_dec(v_unused_1900_);
v___x_1807_ = v_snd_1794_;
v_isShared_1808_ = v_isSharedCheck_1899_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_fst_1805_);
lean_dec(v_snd_1794_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1899_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v_fst_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1897_; 
v_fst_1809_ = lean_ctor_get(v_snd_1795_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v_snd_1795_);
if (v_isSharedCheck_1897_ == 0)
{
lean_object* v_unused_1898_; 
v_unused_1898_ = lean_ctor_get(v_snd_1795_, 1);
lean_dec(v_unused_1898_);
v___x_1811_ = v_snd_1795_;
v_isShared_1812_ = v_isSharedCheck_1897_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_fst_1809_);
lean_dec(v_snd_1795_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1897_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v_array_1813_; lean_object* v_start_1814_; lean_object* v_stop_1815_; uint8_t v___x_1816_; 
v_array_1813_ = lean_ctor_get(v_snd_1796_, 0);
v_start_1814_ = lean_ctor_get(v_snd_1796_, 1);
v_stop_1815_ = lean_ctor_get(v_snd_1796_, 2);
v___x_1816_ = lean_nat_dec_lt(v_start_1814_, v_stop_1815_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1818_; 
lean_dec_ref(v_a_1790_);
lean_dec(v_toBind_1789_);
lean_dec(v_inst_1788_);
if (v_isShared_1812_ == 0)
{
v___x_1818_ = v___x_1811_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_fst_1809_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_snd_1796_);
v___x_1818_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1820_; 
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 1, v___x_1818_);
v___x_1820_ = v___x_1807_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_fst_1805_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v___x_1818_);
v___x_1820_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1822_; 
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 1, v___x_1820_);
v___x_1822_ = v___x_1803_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_fst_1801_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
lean_object* v___x_1824_; 
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 1, v___x_1822_);
v___x_1824_ = v___x_1799_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_fst_1797_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
v___x_1826_ = lean_apply_2(v_toPure_1786_, lean_box(0), v___x_1825_);
return v___x_1826_;
}
}
}
}
}
else
{
lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1893_; 
lean_inc(v_stop_1815_);
lean_inc(v_start_1814_);
lean_inc_ref(v_array_1813_);
v_isSharedCheck_1893_ = !lean_is_exclusive(v_snd_1796_);
if (v_isSharedCheck_1893_ == 0)
{
lean_object* v_unused_1894_; lean_object* v_unused_1895_; lean_object* v_unused_1896_; 
v_unused_1894_ = lean_ctor_get(v_snd_1796_, 2);
lean_dec(v_unused_1894_);
v_unused_1895_ = lean_ctor_get(v_snd_1796_, 1);
lean_dec(v_unused_1895_);
v_unused_1896_ = lean_ctor_get(v_snd_1796_, 0);
lean_dec(v_unused_1896_);
v___x_1832_ = v_snd_1796_;
v_isShared_1833_ = v_isSharedCheck_1893_;
goto v_resetjp_1831_;
}
else
{
lean_dec(v_snd_1796_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1893_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v_array_1834_; lean_object* v_start_1835_; lean_object* v_stop_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v_array_1834_ = lean_ctor_get(v_fst_1809_, 0);
v_start_1835_ = lean_ctor_get(v_fst_1809_, 1);
v_stop_1836_ = lean_ctor_get(v_fst_1809_, 2);
v___x_1837_ = lean_array_fget(v_array_1813_, v_start_1814_);
v___x_1838_ = lean_unsigned_to_nat(1u);
v___x_1839_ = lean_nat_add(v_start_1814_, v___x_1838_);
lean_dec(v_start_1814_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 1, v___x_1839_);
v___x_1841_ = v___x_1832_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_array_1813_);
lean_ctor_set(v_reuseFailAlloc_1892_, 1, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1892_, 2, v_stop_1815_);
v___x_1841_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
uint8_t v___x_1842_; 
v___x_1842_ = lean_nat_dec_lt(v_start_1835_, v_stop_1836_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1844_; 
lean_dec(v___x_1837_);
lean_dec_ref(v_a_1790_);
lean_dec(v_toBind_1789_);
lean_dec(v_inst_1788_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 1, v___x_1841_);
v___x_1844_ = v___x_1811_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_fst_1809_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v___x_1841_);
v___x_1844_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1846_; 
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 1, v___x_1844_);
v___x_1846_ = v___x_1807_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_fst_1805_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v___x_1844_);
v___x_1846_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1848_; 
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 1, v___x_1846_);
v___x_1848_ = v___x_1803_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_fst_1801_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1850_; 
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 1, v___x_1848_);
v___x_1850_ = v___x_1799_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_fst_1797_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
v___x_1852_ = lean_apply_2(v_toPure_1786_, lean_box(0), v___x_1851_);
return v___x_1852_;
}
}
}
}
}
else
{
lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1888_; 
lean_inc(v_stop_1836_);
lean_inc(v_start_1835_);
lean_inc_ref(v_array_1834_);
v_isSharedCheck_1888_ = !lean_is_exclusive(v_fst_1809_);
if (v_isSharedCheck_1888_ == 0)
{
lean_object* v_unused_1889_; lean_object* v_unused_1890_; lean_object* v_unused_1891_; 
v_unused_1889_ = lean_ctor_get(v_fst_1809_, 2);
lean_dec(v_unused_1889_);
v_unused_1890_ = lean_ctor_get(v_fst_1809_, 1);
lean_dec(v_unused_1890_);
v_unused_1891_ = lean_ctor_get(v_fst_1809_, 0);
lean_dec(v_unused_1891_);
v___x_1858_ = v_fst_1809_;
v_isShared_1859_ = v_isSharedCheck_1888_;
goto v_resetjp_1857_;
}
else
{
lean_dec(v_fst_1809_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1888_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1863_; 
v___x_1860_ = lean_array_fget(v_array_1834_, v_start_1835_);
v___x_1861_ = lean_nat_add(v_start_1835_, v___x_1838_);
lean_dec(v_start_1835_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 1, v___x_1861_);
v___x_1863_ = v___x_1858_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_array_1834_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v___x_1861_);
lean_ctor_set(v_reuseFailAlloc_1887_, 2, v_stop_1836_);
v___x_1863_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
if (v_addEqualities_1787_ == 0)
{
lean_dec(v___x_1860_);
lean_dec_ref(v_a_1790_);
lean_dec(v_toBind_1789_);
lean_dec(v_inst_1788_);
goto v___jp_1864_;
}
else
{
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v___f_1882_; lean_object* v___f_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
lean_del_object(v___x_1811_);
lean_del_object(v___x_1807_);
lean_del_object(v___x_1803_);
lean_del_object(v___x_1799_);
lean_inc_n(v_toBind_1789_, 2);
lean_inc_n(v_inst_1788_, 2);
lean_inc(v_toPure_1786_);
lean_inc_ref(v___x_1841_);
lean_inc_ref(v___x_1863_);
lean_inc(v_fst_1805_);
lean_inc(v_fst_1801_);
lean_inc(v_fst_1797_);
v___f_1882_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__8), 9, 8);
lean_closure_set(v___f_1882_, 0, v_fst_1797_);
lean_closure_set(v___f_1882_, 1, v_fst_1801_);
lean_closure_set(v___f_1882_, 2, v_fst_1805_);
lean_closure_set(v___f_1882_, 3, v___x_1863_);
lean_closure_set(v___f_1882_, 4, v___x_1841_);
lean_closure_set(v___f_1882_, 5, v_toPure_1786_);
lean_closure_set(v___f_1882_, 6, v_inst_1788_);
lean_closure_set(v___f_1882_, 7, v_toBind_1789_);
lean_inc_ref(v_a_1790_);
v___f_1883_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed), 13, 12);
lean_closure_set(v___f_1883_, 0, v___x_1860_);
lean_closure_set(v___f_1883_, 1, v_a_1790_);
lean_closure_set(v___f_1883_, 2, v_inst_1788_);
lean_closure_set(v___f_1883_, 3, v_toBind_1789_);
lean_closure_set(v___f_1883_, 4, v___f_1882_);
lean_closure_set(v___f_1883_, 5, v_fst_1801_);
lean_closure_set(v___f_1883_, 6, v_fst_1805_);
lean_closure_set(v___f_1883_, 7, v___x_1837_);
lean_closure_set(v___f_1883_, 8, v___x_1863_);
lean_closure_set(v___f_1883_, 9, v___x_1841_);
lean_closure_set(v___f_1883_, 10, v_fst_1797_);
lean_closure_set(v___f_1883_, 11, v_toPure_1786_);
v___x_1884_ = lean_alloc_closure((void*)(l_Lean_Meta_isProof___boxed), 6, 1);
lean_closure_set(v___x_1884_, 0, v_a_1790_);
v___x_1885_ = lean_apply_2(v_inst_1788_, lean_box(0), v___x_1884_);
v___x_1886_ = lean_apply_4(v_toBind_1789_, lean_box(0), lean_box(0), v___x_1885_, v___f_1883_);
return v___x_1886_;
}
else
{
lean_dec(v___x_1860_);
lean_dec_ref(v_a_1790_);
lean_dec(v_toBind_1789_);
lean_dec(v_inst_1788_);
goto v___jp_1864_;
}
}
v___jp_1864_:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
v___x_1865_ = lean_box(0);
v___x_1866_ = lean_array_push(v_fst_1801_, v___x_1865_);
v___x_1867_ = lean_array_push(v_fst_1805_, v___x_1837_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 1, v___x_1841_);
lean_ctor_set(v___x_1811_, 0, v___x_1863_);
v___x_1869_ = v___x_1811_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1863_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v___x_1841_);
v___x_1869_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1871_; 
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 1, v___x_1869_);
lean_ctor_set(v___x_1807_, 0, v___x_1867_);
v___x_1871_ = v___x_1807_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1867_);
lean_ctor_set(v_reuseFailAlloc_1880_, 1, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
lean_object* v___x_1873_; 
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 1, v___x_1871_);
lean_ctor_set(v___x_1803_, 0, v___x_1866_);
v___x_1873_ = v___x_1803_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1866_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v___x_1871_);
v___x_1873_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1875_; 
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 1, v___x_1873_);
v___x_1875_ = v___x_1799_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_fst_1797_);
lean_ctor_set(v_reuseFailAlloc_1878_, 1, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1875_);
v___x_1877_ = lean_apply_2(v_toPure_1786_, lean_box(0), v___x_1876_);
return v___x_1877_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed(lean_object* v_toPure_1905_, lean_object* v_addEqualities_1906_, lean_object* v_inst_1907_, lean_object* v_toBind_1908_, lean_object* v_a_1909_, lean_object* v_x_1910_, lean_object* v___y_1911_){
_start:
{
uint8_t v_addEqualities_boxed_1912_; lean_object* v_res_1913_; 
v_addEqualities_boxed_1912_ = lean_unbox(v_addEqualities_1906_);
v_res_1913_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__10(v_toPure_1905_, v_addEqualities_boxed_1912_, v_inst_1907_, v_toBind_1908_, v_a_1909_, v_x_1910_, v___y_1911_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object* v_toPure_1914_, lean_object* v_____do__lift_1915_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_apply_2(v_toPure_1914_, lean_box(0), v_____do__lift_1915_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object* v_toPure_1917_, lean_object* v_____do__lift_1918_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_apply_2(v_toPure_1917_, lean_box(0), v_____do__lift_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object* v_fst_1920_, lean_object* v_fst_1921_, lean_object* v_____do__lift_1922_, lean_object* v_toPure_1923_, lean_object* v_____do__lift_1924_){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1925_, 0, v_fst_1920_);
lean_ctor_set(v___x_1925_, 1, v_fst_1921_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v_____do__lift_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_____do__lift_1922_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_apply_2(v_toPure_1923_, lean_box(0), v___x_1927_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object* v_fst_1929_, lean_object* v_fst_1930_, lean_object* v_toPure_1931_, lean_object* v_fst_1932_, lean_object* v_inst_1933_, lean_object* v_toBind_1934_, lean_object* v_____do__lift_1935_){
_start:
{
lean_object* v___f_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___f_1936_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__13), 5, 4);
lean_closure_set(v___f_1936_, 0, v_fst_1929_);
lean_closure_set(v___f_1936_, 1, v_fst_1930_);
lean_closure_set(v___f_1936_, 2, v_____do__lift_1935_);
lean_closure_set(v___f_1936_, 3, v_toPure_1931_);
v___x_1937_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1937_, 0, v_fst_1932_);
v___x_1938_ = lean_apply_2(v_inst_1933_, lean_box(0), v___x_1937_);
v___x_1939_ = lean_apply_4(v_toBind_1934_, lean_box(0), lean_box(0), v___x_1938_, v___f_1936_);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object* v_toPure_1940_, lean_object* v_inst_1941_, lean_object* v_toBind_1942_, lean_object* v_motiveArgs_1943_, lean_object* v_____s_1944_){
_start:
{
lean_object* v_snd_1945_; lean_object* v_snd_1946_; lean_object* v_fst_1947_; lean_object* v_fst_1948_; lean_object* v_fst_1949_; lean_object* v___f_1950_; uint8_t v___x_1951_; uint8_t v___x_1952_; uint8_t v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v_snd_1945_ = lean_ctor_get(v_____s_1944_, 1);
lean_inc(v_snd_1945_);
v_snd_1946_ = lean_ctor_get(v_snd_1945_, 1);
lean_inc(v_snd_1946_);
v_fst_1947_ = lean_ctor_get(v_____s_1944_, 0);
lean_inc_n(v_fst_1947_, 2);
lean_dec_ref(v_____s_1944_);
v_fst_1948_ = lean_ctor_get(v_snd_1945_, 0);
lean_inc(v_fst_1948_);
lean_dec(v_snd_1945_);
v_fst_1949_ = lean_ctor_get(v_snd_1946_, 0);
lean_inc(v_fst_1949_);
lean_dec(v_snd_1946_);
lean_inc(v_toBind_1942_);
lean_inc(v_inst_1941_);
v___f_1950_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__14), 7, 6);
lean_closure_set(v___f_1950_, 0, v_fst_1948_);
lean_closure_set(v___f_1950_, 1, v_fst_1949_);
lean_closure_set(v___f_1950_, 2, v_toPure_1940_);
lean_closure_set(v___f_1950_, 3, v_fst_1947_);
lean_closure_set(v___f_1950_, 4, v_inst_1941_);
lean_closure_set(v___f_1950_, 5, v_toBind_1942_);
v___x_1951_ = 0;
v___x_1952_ = 1;
v___x_1953_ = 1;
v___x_1954_ = lean_box(v___x_1951_);
v___x_1955_ = lean_box(v___x_1952_);
v___x_1956_ = lean_box(v___x_1951_);
v___x_1957_ = lean_box(v___x_1952_);
v___x_1958_ = lean_box(v___x_1953_);
v___x_1959_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1959_, 0, v_motiveArgs_1943_);
lean_closure_set(v___x_1959_, 1, v_fst_1947_);
lean_closure_set(v___x_1959_, 2, v___x_1954_);
lean_closure_set(v___x_1959_, 3, v___x_1955_);
lean_closure_set(v___x_1959_, 4, v___x_1956_);
lean_closure_set(v___x_1959_, 5, v___x_1957_);
lean_closure_set(v___x_1959_, 6, v___x_1958_);
v___x_1960_ = lean_apply_2(v_inst_1941_, lean_box(0), v___x_1959_);
v___x_1961_ = lean_apply_4(v_toBind_1942_, lean_box(0), lean_box(0), v___x_1960_, v___f_1950_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object* v_toMatcherInfo_1964_, lean_object* v_discrs_x27_1965_, lean_object* v_motiveArgs_1966_, lean_object* v_inst_1967_, lean_object* v___f_1968_, lean_object* v_toBind_1969_, lean_object* v___f_1970_, lean_object* v_motiveBody_x27_1971_){
_start:
{
lean_object* v_discrInfos_1972_; lean_object* v___x_1973_; lean_object* v_addHEqualities_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; size_t v_sz_1983_; size_t v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v_discrInfos_1972_ = lean_ctor_get(v_toMatcherInfo_1964_, 4);
lean_inc_ref(v_discrInfos_1972_);
lean_dec_ref(v_toMatcherInfo_1964_);
v___x_1973_ = lean_unsigned_to_nat(0u);
v_addHEqualities_1974_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_1975_ = lean_array_get_size(v_discrs_x27_1965_);
v___x_1976_ = l_Array_toSubarray___redArg(v_discrs_x27_1965_, v___x_1973_, v___x_1975_);
v___x_1977_ = lean_array_get_size(v_discrInfos_1972_);
v___x_1978_ = l_Array_toSubarray___redArg(v_discrInfos_1972_, v___x_1973_, v___x_1977_);
v___x_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1976_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_addHEqualities_1974_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1981_, 0, v_addHEqualities_1974_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_motiveBody_x27_1971_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v_sz_1983_ = lean_array_size(v_motiveArgs_1966_);
v___x_1984_ = ((size_t)0ULL);
v___x_1985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1967_, v_motiveArgs_1966_, v___f_1968_, v_sz_1983_, v___x_1984_, v___x_1982_);
v___x_1986_ = lean_apply_4(v_toBind_1969_, lean_box(0), lean_box(0), v___x_1985_, v___f_1970_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object* v_onMotive_1987_, lean_object* v_motiveArgs_1988_, lean_object* v_motiveBody_1989_, lean_object* v_toBind_1990_, lean_object* v___f_1991_, lean_object* v_____r_1992_){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = lean_apply_2(v_onMotive_1987_, v_motiveArgs_1988_, v_motiveBody_1989_);
v___x_1994_ = lean_apply_4(v_toBind_1990_, lean_box(0), lean_box(0), v___x_1993_, v___f_1991_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object* v___f_1995_, lean_object* v_____r_1996_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = lean_apply_1(v___f_1995_, v_____r_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object* v_toPure_1998_, lean_object* v_inst_1999_, lean_object* v_toBind_2000_, lean_object* v_toMatcherInfo_2001_, lean_object* v_discrs_x27_2002_, lean_object* v_inst_2003_, lean_object* v___f_2004_, lean_object* v_onMotive_2005_, lean_object* v_discrs_2006_, lean_object* v_inst_2007_, lean_object* v_motiveArgs_2008_, lean_object* v_motiveBody_2009_){
_start:
{
lean_object* v___f_2010_; lean_object* v___f_2011_; lean_object* v___f_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
lean_inc_ref_n(v_motiveArgs_2008_, 3);
lean_inc_n(v_toBind_2000_, 3);
v___f_2010_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__15), 5, 4);
lean_closure_set(v___f_2010_, 0, v_toPure_1998_);
lean_closure_set(v___f_2010_, 1, v_inst_1999_);
lean_closure_set(v___f_2010_, 2, v_toBind_2000_);
lean_closure_set(v___f_2010_, 3, v_motiveArgs_2008_);
lean_inc_ref(v_inst_2003_);
v___f_2011_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16), 8, 7);
lean_closure_set(v___f_2011_, 0, v_toMatcherInfo_2001_);
lean_closure_set(v___f_2011_, 1, v_discrs_x27_2002_);
lean_closure_set(v___f_2011_, 2, v_motiveArgs_2008_);
lean_closure_set(v___f_2011_, 3, v_inst_2003_);
lean_closure_set(v___f_2011_, 4, v___f_2004_);
lean_closure_set(v___f_2011_, 5, v_toBind_2000_);
lean_closure_set(v___f_2011_, 6, v___f_2010_);
lean_inc_ref(v___f_2011_);
lean_inc_ref(v_motiveBody_2009_);
lean_inc(v_onMotive_2005_);
v___f_2012_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__17), 6, 5);
lean_closure_set(v___f_2012_, 0, v_onMotive_2005_);
lean_closure_set(v___f_2012_, 1, v_motiveArgs_2008_);
lean_closure_set(v___f_2012_, 2, v_motiveBody_2009_);
lean_closure_set(v___f_2012_, 3, v_toBind_2000_);
lean_closure_set(v___f_2012_, 4, v___f_2011_);
v___x_2013_ = lean_array_get_size(v_motiveArgs_2008_);
v___x_2014_ = lean_array_get_size(v_discrs_2006_);
v___x_2015_ = lean_nat_dec_eq(v___x_2013_, v___x_2014_);
if (v___x_2015_ == 0)
{
lean_object* v___f_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec_ref(v___f_2011_);
lean_dec_ref(v_motiveBody_2009_);
lean_dec_ref(v_motiveArgs_2008_);
lean_dec(v_onMotive_2005_);
v___f_2016_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__18), 2, 1);
lean_closure_set(v___f_2016_, 0, v___f_2012_);
v___x_2017_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_2018_ = l_Nat_reprFast(v___x_2014_);
v___x_2019_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
v___x_2020_ = l_Lean_MessageData_ofFormat(v___x_2019_);
v___x_2021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2017_);
lean_ctor_set(v___x_2021_, 1, v___x_2020_);
v___x_2022_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2021_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = l_Lean_throwError___redArg(v_inst_2003_, v_inst_2007_, v___x_2023_);
v___x_2025_ = lean_apply_4(v_toBind_2000_, lean_box(0), lean_box(0), v___x_2024_, v___f_2016_);
return v___x_2025_;
}
else
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
lean_dec_ref(v___f_2012_);
lean_dec_ref(v_inst_2007_);
lean_dec_ref(v_inst_2003_);
v___x_2026_ = lean_box(0);
v___x_2027_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__17(v_onMotive_2005_, v_motiveArgs_2008_, v_motiveBody_2009_, v_toBind_2000_, v___f_2011_, v___x_2026_);
return v___x_2027_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object* v_toPure_2028_, lean_object* v_inst_2029_, lean_object* v_toBind_2030_, lean_object* v_toMatcherInfo_2031_, lean_object* v_discrs_x27_2032_, lean_object* v_inst_2033_, lean_object* v___f_2034_, lean_object* v_onMotive_2035_, lean_object* v_discrs_2036_, lean_object* v_inst_2037_, lean_object* v_motiveArgs_2038_, lean_object* v_motiveBody_2039_){
_start:
{
lean_object* v_res_2040_; 
v_res_2040_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__19(v_toPure_2028_, v_inst_2029_, v_toBind_2030_, v_toMatcherInfo_2031_, v_discrs_x27_2032_, v_inst_2033_, v___f_2034_, v_onMotive_2035_, v_discrs_2036_, v_inst_2037_, v_motiveArgs_2038_, v_motiveBody_2039_);
lean_dec_ref(v_discrs_2036_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object* v_fst_2041_, lean_object* v_numParams_2042_, lean_object* v_numDiscrs_2043_, lean_object* v_altInfos_2044_, lean_object* v_uElimPos_x3f_2045_, lean_object* v_snd_2046_, lean_object* v_overlaps_2047_, lean_object* v_matcherName_2048_, lean_object* v_matcherLevels_2049_, lean_object* v_params_x27_2050_, lean_object* v_fst_2051_, lean_object* v_discrs_x27_2052_, lean_object* v_fst_2053_, lean_object* v_toPure_2054_, lean_object* v_____do__lift_2055_){
_start:
{
lean_object* v_remaining_x27_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; 
v_remaining_x27_2056_ = l_Array_append___redArg(v_fst_2041_, v_____do__lift_2055_);
v___x_2057_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2057_, 0, v_numParams_2042_);
lean_ctor_set(v___x_2057_, 1, v_numDiscrs_2043_);
lean_ctor_set(v___x_2057_, 2, v_altInfos_2044_);
lean_ctor_set(v___x_2057_, 3, v_uElimPos_x3f_2045_);
lean_ctor_set(v___x_2057_, 4, v_snd_2046_);
lean_ctor_set(v___x_2057_, 5, v_overlaps_2047_);
v___x_2058_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
lean_ctor_set(v___x_2058_, 1, v_matcherName_2048_);
lean_ctor_set(v___x_2058_, 2, v_matcherLevels_2049_);
lean_ctor_set(v___x_2058_, 3, v_params_x27_2050_);
lean_ctor_set(v___x_2058_, 4, v_fst_2051_);
lean_ctor_set(v___x_2058_, 5, v_discrs_x27_2052_);
lean_ctor_set(v___x_2058_, 6, v_fst_2053_);
lean_ctor_set(v___x_2058_, 7, v_remaining_x27_2056_);
v___x_2059_ = lean_apply_2(v_toPure_2054_, lean_box(0), v___x_2058_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object* v_fst_2060_, lean_object* v_numParams_2061_, lean_object* v_numDiscrs_2062_, lean_object* v_altInfos_2063_, lean_object* v_uElimPos_x3f_2064_, lean_object* v_snd_2065_, lean_object* v_overlaps_2066_, lean_object* v_matcherName_2067_, lean_object* v_matcherLevels_2068_, lean_object* v_params_x27_2069_, lean_object* v_fst_2070_, lean_object* v_discrs_x27_2071_, lean_object* v_fst_2072_, lean_object* v_toPure_2073_, lean_object* v_____do__lift_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__20(v_fst_2060_, v_numParams_2061_, v_numDiscrs_2062_, v_altInfos_2063_, v_uElimPos_x3f_2064_, v_snd_2065_, v_overlaps_2066_, v_matcherName_2067_, v_matcherLevels_2068_, v_params_x27_2069_, v_fst_2070_, v_discrs_x27_2071_, v_fst_2072_, v_toPure_2073_, v_____do__lift_2074_);
lean_dec_ref(v_____do__lift_2074_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object* v_fst_2076_, lean_object* v_numParams_2077_, lean_object* v_numDiscrs_2078_, lean_object* v_altInfos_2079_, lean_object* v_uElimPos_x3f_2080_, lean_object* v_snd_2081_, lean_object* v_overlaps_2082_, lean_object* v_matcherName_2083_, lean_object* v_matcherLevels_2084_, lean_object* v_params_x27_2085_, lean_object* v_fst_2086_, lean_object* v_discrs_x27_2087_, lean_object* v_toPure_2088_, lean_object* v_onRemaining_2089_, lean_object* v_remaining_2090_, lean_object* v_toBind_2091_, lean_object* v_____s_2092_){
_start:
{
lean_object* v_fst_2093_; lean_object* v___f_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v_fst_2093_ = lean_ctor_get(v_____s_2092_, 0);
lean_inc(v_fst_2093_);
lean_dec_ref(v_____s_2092_);
v___f_2094_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed), 15, 14);
lean_closure_set(v___f_2094_, 0, v_fst_2076_);
lean_closure_set(v___f_2094_, 1, v_numParams_2077_);
lean_closure_set(v___f_2094_, 2, v_numDiscrs_2078_);
lean_closure_set(v___f_2094_, 3, v_altInfos_2079_);
lean_closure_set(v___f_2094_, 4, v_uElimPos_x3f_2080_);
lean_closure_set(v___f_2094_, 5, v_snd_2081_);
lean_closure_set(v___f_2094_, 6, v_overlaps_2082_);
lean_closure_set(v___f_2094_, 7, v_matcherName_2083_);
lean_closure_set(v___f_2094_, 8, v_matcherLevels_2084_);
lean_closure_set(v___f_2094_, 9, v_params_x27_2085_);
lean_closure_set(v___f_2094_, 10, v_fst_2086_);
lean_closure_set(v___f_2094_, 11, v_discrs_x27_2087_);
lean_closure_set(v___f_2094_, 12, v_fst_2093_);
lean_closure_set(v___f_2094_, 13, v_toPure_2088_);
v___x_2095_ = lean_apply_1(v_onRemaining_2089_, v_remaining_2090_);
v___x_2096_ = lean_apply_4(v_toBind_2091_, lean_box(0), lean_box(0), v___x_2095_, v___f_2094_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object** _args){
lean_object* v_fst_2097_ = _args[0];
lean_object* v_numParams_2098_ = _args[1];
lean_object* v_numDiscrs_2099_ = _args[2];
lean_object* v_altInfos_2100_ = _args[3];
lean_object* v_uElimPos_x3f_2101_ = _args[4];
lean_object* v_snd_2102_ = _args[5];
lean_object* v_overlaps_2103_ = _args[6];
lean_object* v_matcherName_2104_ = _args[7];
lean_object* v_matcherLevels_2105_ = _args[8];
lean_object* v_params_x27_2106_ = _args[9];
lean_object* v_fst_2107_ = _args[10];
lean_object* v_discrs_x27_2108_ = _args[11];
lean_object* v_toPure_2109_ = _args[12];
lean_object* v_onRemaining_2110_ = _args[13];
lean_object* v_remaining_2111_ = _args[14];
lean_object* v_toBind_2112_ = _args[15];
lean_object* v_____s_2113_ = _args[16];
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__21(v_fst_2097_, v_numParams_2098_, v_numDiscrs_2099_, v_altInfos_2100_, v_uElimPos_x3f_2101_, v_snd_2102_, v_overlaps_2103_, v_matcherName_2104_, v_matcherLevels_2105_, v_params_x27_2106_, v_fst_2107_, v_discrs_x27_2108_, v_toPure_2109_, v_onRemaining_2110_, v_remaining_2111_, v_toBind_2112_, v_____s_2113_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object* v_toPure_2115_, lean_object* v_next_2116_, lean_object* v_G_2117_, lean_object* v_____do__lift_2118_){
_start:
{
if (lean_obj_tag(v_____do__lift_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2120_; 
lean_dec(v_G_2117_);
v_a_2119_ = lean_ctor_get(v_____do__lift_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v_____do__lift_2118_, 1);
v___x_2120_ = lean_apply_2(v_toPure_2115_, lean_box(0), v_a_2119_);
return v___x_2120_;
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
lean_dec(v_toPure_2115_);
v_a_2121_ = lean_ctor_get(v_____do__lift_2118_, 0);
lean_inc(v_a_2121_);
lean_dec_ref_known(v_____do__lift_2118_, 1);
v___x_2122_ = lean_unsigned_to_nat(1u);
v___x_2123_ = lean_nat_add(v_next_2116_, v___x_2122_);
v___x_2124_ = lean_apply_4(v_G_2117_, v___x_2123_, v_a_2121_, lean_box(0), lean_box(0));
return v___x_2124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object* v_toPure_2125_, lean_object* v_next_2126_, lean_object* v_G_2127_, lean_object* v_____do__lift_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__22(v_toPure_2125_, v_next_2126_, v_G_2127_, v_____do__lift_2128_);
lean_dec(v_next_2126_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object* v_xs_2130_, lean_object* v_ys4_2131_, uint8_t v___x_2132_, uint8_t v___x_2133_, lean_object* v_inst_2134_, lean_object* v_alt_x27_2135_){
_start:
{
lean_object* v___x_2136_; uint8_t v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2136_ = l_Array_append___redArg(v_xs_2130_, v_ys4_2131_);
v___x_2137_ = 1;
v___x_2138_ = lean_box(v___x_2132_);
v___x_2139_ = lean_box(v___x_2133_);
v___x_2140_ = lean_box(v___x_2132_);
v___x_2141_ = lean_box(v___x_2133_);
v___x_2142_ = lean_box(v___x_2137_);
v___x_2143_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2143_, 0, v___x_2136_);
lean_closure_set(v___x_2143_, 1, v_alt_x27_2135_);
lean_closure_set(v___x_2143_, 2, v___x_2138_);
lean_closure_set(v___x_2143_, 3, v___x_2139_);
lean_closure_set(v___x_2143_, 4, v___x_2140_);
lean_closure_set(v___x_2143_, 5, v___x_2141_);
lean_closure_set(v___x_2143_, 6, v___x_2142_);
v___x_2144_ = lean_apply_2(v_inst_2134_, lean_box(0), v___x_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object* v_xs_2145_, lean_object* v_ys4_2146_, lean_object* v___x_2147_, lean_object* v___x_2148_, lean_object* v_inst_2149_, lean_object* v_alt_x27_2150_){
_start:
{
uint8_t v___x_13349__boxed_2151_; uint8_t v___x_13350__boxed_2152_; lean_object* v_res_2153_; 
v___x_13349__boxed_2151_ = lean_unbox(v___x_2147_);
v___x_13350__boxed_2152_ = lean_unbox(v___x_2148_);
v_res_2153_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__23(v_xs_2145_, v_ys4_2146_, v___x_13349__boxed_2151_, v___x_13350__boxed_2152_, v_inst_2149_, v_alt_x27_2150_);
lean_dec_ref(v_ys4_2146_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object* v_xs_2154_, lean_object* v_remaining_x27_2155_, lean_object* v_ys4_2156_, lean_object* v_onAlt_2157_, lean_object* v_next_2158_, lean_object* v_altType_2159_, lean_object* v_toBind_2160_, lean_object* v___f_2161_, lean_object* v_alt_2162_){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
lean_inc_ref(v_remaining_x27_2155_);
lean_inc_ref(v_xs_2154_);
v___x_2163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2163_, 0, v_xs_2154_);
lean_ctor_set(v___x_2163_, 1, v_xs_2154_);
lean_ctor_set(v___x_2163_, 2, v_remaining_x27_2155_);
lean_ctor_set(v___x_2163_, 3, v_remaining_x27_2155_);
lean_ctor_set(v___x_2163_, 4, v_ys4_2156_);
v___x_2164_ = lean_apply_4(v_onAlt_2157_, v_next_2158_, v_altType_2159_, v___x_2163_, v_alt_2162_);
v___x_2165_ = lean_apply_4(v_toBind_2160_, lean_box(0), lean_box(0), v___x_2164_, v___f_2161_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object* v___x_2166_, lean_object* v_xs_2167_, lean_object* v_inst_2168_, lean_object* v_toBind_2169_, lean_object* v___f_2170_, lean_object* v_inst_2171_, lean_object* v_inst_2172_, lean_object* v_names_2173_){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
lean_inc_ref(v_xs_2167_);
v___x_2174_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2174_, 0, v___x_2166_);
lean_closure_set(v___x_2174_, 1, v_xs_2167_);
v___x_2175_ = lean_apply_2(v_inst_2168_, lean_box(0), v___x_2174_);
v___x_2176_ = lean_apply_4(v_toBind_2169_, lean_box(0), lean_box(0), v___x_2175_, v___f_2170_);
v___x_2177_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_2171_, v_inst_2172_, v_xs_2167_, v_names_2173_, v___x_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object* v_xs_2178_, uint8_t v___x_2179_, uint8_t v___x_2180_, lean_object* v_inst_2181_, lean_object* v_remaining_x27_2182_, lean_object* v_onAlt_2183_, lean_object* v_next_2184_, lean_object* v_toBind_2185_, lean_object* v___x_2186_, lean_object* v_inst_2187_, lean_object* v_inst_2188_, lean_object* v___f_2189_, lean_object* v_ys4_2190_, lean_object* v_altType_2191_){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___f_2194_; lean_object* v___f_2195_; lean_object* v___f_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2192_ = lean_box(v___x_2179_);
v___x_2193_ = lean_box(v___x_2180_);
lean_inc(v_inst_2181_);
lean_inc_ref(v_ys4_2190_);
lean_inc_ref_n(v_xs_2178_, 2);
v___f_2194_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed), 6, 5);
lean_closure_set(v___f_2194_, 0, v_xs_2178_);
lean_closure_set(v___f_2194_, 1, v_ys4_2190_);
lean_closure_set(v___f_2194_, 2, v___x_2192_);
lean_closure_set(v___f_2194_, 3, v___x_2193_);
lean_closure_set(v___f_2194_, 4, v_inst_2181_);
lean_inc_n(v_toBind_2185_, 2);
v___f_2195_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__24), 9, 8);
lean_closure_set(v___f_2195_, 0, v_xs_2178_);
lean_closure_set(v___f_2195_, 1, v_remaining_x27_2182_);
lean_closure_set(v___f_2195_, 2, v_ys4_2190_);
lean_closure_set(v___f_2195_, 3, v_onAlt_2183_);
lean_closure_set(v___f_2195_, 4, v_next_2184_);
lean_closure_set(v___f_2195_, 5, v_altType_2191_);
lean_closure_set(v___f_2195_, 6, v_toBind_2185_);
lean_closure_set(v___f_2195_, 7, v___f_2194_);
lean_inc_ref(v_inst_2188_);
lean_inc_ref(v_inst_2187_);
lean_inc_ref(v___x_2186_);
v___f_2196_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__25), 8, 7);
lean_closure_set(v___f_2196_, 0, v___x_2186_);
lean_closure_set(v___f_2196_, 1, v_xs_2178_);
lean_closure_set(v___f_2196_, 2, v_inst_2181_);
lean_closure_set(v___f_2196_, 3, v_toBind_2185_);
lean_closure_set(v___f_2196_, 4, v___f_2195_);
lean_closure_set(v___f_2196_, 5, v_inst_2187_);
lean_closure_set(v___f_2196_, 6, v_inst_2188_);
v___x_2197_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_2187_, v_inst_2188_, v___x_2186_, v___f_2189_, v___x_2179_);
v___x_2198_ = lean_apply_4(v_toBind_2185_, lean_box(0), lean_box(0), v___x_2197_, v___f_2196_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object* v_xs_2199_, lean_object* v___x_2200_, lean_object* v___x_2201_, lean_object* v_inst_2202_, lean_object* v_remaining_x27_2203_, lean_object* v_onAlt_2204_, lean_object* v_next_2205_, lean_object* v_toBind_2206_, lean_object* v___x_2207_, lean_object* v_inst_2208_, lean_object* v_inst_2209_, lean_object* v___f_2210_, lean_object* v_ys4_2211_, lean_object* v_altType_2212_){
_start:
{
uint8_t v___x_13402__boxed_2213_; uint8_t v___x_13403__boxed_2214_; lean_object* v_res_2215_; 
v___x_13402__boxed_2213_ = lean_unbox(v___x_2200_);
v___x_13403__boxed_2214_ = lean_unbox(v___x_2201_);
v_res_2215_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__26(v_xs_2199_, v___x_13402__boxed_2213_, v___x_13403__boxed_2214_, v_inst_2202_, v_remaining_x27_2203_, v_onAlt_2204_, v_next_2205_, v_toBind_2206_, v___x_2207_, v_inst_2208_, v_inst_2209_, v___f_2210_, v_ys4_2211_, v_altType_2212_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t v___x_2216_, uint8_t v___x_2217_, lean_object* v_inst_2218_, lean_object* v_remaining_x27_2219_, lean_object* v_onAlt_2220_, lean_object* v_next_2221_, lean_object* v_toBind_2222_, lean_object* v___x_2223_, lean_object* v_inst_2224_, lean_object* v_inst_2225_, lean_object* v___f_2226_, lean_object* v_fst_2227_, lean_object* v_xs_2228_, lean_object* v_altType_2229_){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___f_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2230_ = lean_box(v___x_2216_);
v___x_2231_ = lean_box(v___x_2217_);
lean_inc_ref(v_inst_2225_);
lean_inc_ref(v_inst_2224_);
v___f_2232_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed), 14, 12);
lean_closure_set(v___f_2232_, 0, v_xs_2228_);
lean_closure_set(v___f_2232_, 1, v___x_2230_);
lean_closure_set(v___f_2232_, 2, v___x_2231_);
lean_closure_set(v___f_2232_, 3, v_inst_2218_);
lean_closure_set(v___f_2232_, 4, v_remaining_x27_2219_);
lean_closure_set(v___f_2232_, 5, v_onAlt_2220_);
lean_closure_set(v___f_2232_, 6, v_next_2221_);
lean_closure_set(v___f_2232_, 7, v_toBind_2222_);
lean_closure_set(v___f_2232_, 8, v___x_2223_);
lean_closure_set(v___f_2232_, 9, v_inst_2224_);
lean_closure_set(v___f_2232_, 10, v_inst_2225_);
lean_closure_set(v___f_2232_, 11, v___f_2226_);
v___x_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2233_, 0, v_fst_2227_);
v___x_2234_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2224_, v_inst_2225_, v_altType_2229_, v___x_2233_, v___f_2232_, v___x_2216_, v___x_2216_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object* v___x_2235_, lean_object* v___x_2236_, lean_object* v_inst_2237_, lean_object* v_remaining_x27_2238_, lean_object* v_onAlt_2239_, lean_object* v_next_2240_, lean_object* v_toBind_2241_, lean_object* v___x_2242_, lean_object* v_inst_2243_, lean_object* v_inst_2244_, lean_object* v___f_2245_, lean_object* v_fst_2246_, lean_object* v_xs_2247_, lean_object* v_altType_2248_){
_start:
{
uint8_t v___x_13437__boxed_2249_; uint8_t v___x_13438__boxed_2250_; lean_object* v_res_2251_; 
v___x_13437__boxed_2249_ = lean_unbox(v___x_2235_);
v___x_13438__boxed_2250_ = lean_unbox(v___x_2236_);
v_res_2251_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__27(v___x_13437__boxed_2249_, v___x_13438__boxed_2250_, v_inst_2237_, v_remaining_x27_2238_, v_onAlt_2239_, v_next_2240_, v_toBind_2241_, v___x_2242_, v_inst_2243_, v_inst_2244_, v___f_2245_, v_fst_2246_, v_xs_2247_, v_altType_2248_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object* v_fst_2252_, lean_object* v___x_2253_, lean_object* v___x_2254_, lean_object* v___x_2255_, lean_object* v_toPure_2256_, lean_object* v_alt_x27_2257_){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2258_ = lean_array_push(v_fst_2252_, v_alt_x27_2257_);
v___x_2259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2253_);
lean_ctor_set(v___x_2259_, 1, v___x_2254_);
v___x_2260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2255_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
v___x_2261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2258_);
lean_ctor_set(v___x_2261_, 1, v___x_2260_);
v___x_2262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2261_);
v___x_2263_ = lean_apply_2(v_toPure_2256_, lean_box(0), v___x_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object* v___x_2264_, lean_object* v_toPure_2265_, lean_object* v_toBind_2266_, lean_object* v___f_2267_, uint8_t v___x_2268_, lean_object* v_inst_2269_, lean_object* v_remaining_x27_2270_, lean_object* v_onAlt_2271_, lean_object* v_inst_2272_, lean_object* v_inst_2273_, lean_object* v___f_2274_, lean_object* v_fst_2275_, lean_object* v_next_2276_, lean_object* v_acc_2277_, lean_object* v_h_2278_, lean_object* v_G_2279_){
_start:
{
uint8_t v___x_2280_; 
v___x_2280_ = lean_nat_dec_lt(v_next_2276_, v___x_2264_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2281_; 
lean_dec(v_G_2279_);
lean_dec(v_next_2276_);
lean_dec(v_fst_2275_);
lean_dec(v___f_2274_);
lean_dec_ref(v_inst_2273_);
lean_dec_ref(v_inst_2272_);
lean_dec(v_onAlt_2271_);
lean_dec_ref(v_remaining_x27_2270_);
lean_dec(v_inst_2269_);
lean_dec(v___f_2267_);
lean_dec(v_toBind_2266_);
v___x_2281_ = lean_apply_2(v_toPure_2265_, lean_box(0), v_acc_2277_);
return v___x_2281_;
}
else
{
lean_object* v_snd_2282_; lean_object* v_snd_2283_; lean_object* v_snd_2284_; lean_object* v_fst_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2395_; 
v_snd_2282_ = lean_ctor_get(v_acc_2277_, 1);
lean_inc(v_snd_2282_);
v_snd_2283_ = lean_ctor_get(v_snd_2282_, 1);
lean_inc(v_snd_2283_);
v_snd_2284_ = lean_ctor_get(v_snd_2283_, 1);
lean_inc(v_snd_2284_);
v_fst_2285_ = lean_ctor_get(v_acc_2277_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v_acc_2277_);
if (v_isSharedCheck_2395_ == 0)
{
lean_object* v_unused_2396_; 
v_unused_2396_ = lean_ctor_get(v_acc_2277_, 1);
lean_dec(v_unused_2396_);
v___x_2287_ = v_acc_2277_;
v_isShared_2288_ = v_isSharedCheck_2395_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_fst_2285_);
lean_dec(v_acc_2277_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2395_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v_fst_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2393_; 
v_fst_2289_ = lean_ctor_get(v_snd_2282_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v_snd_2282_);
if (v_isSharedCheck_2393_ == 0)
{
lean_object* v_unused_2394_; 
v_unused_2394_ = lean_ctor_get(v_snd_2282_, 1);
lean_dec(v_unused_2394_);
v___x_2291_ = v_snd_2282_;
v_isShared_2292_ = v_isSharedCheck_2393_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_fst_2289_);
lean_dec(v_snd_2282_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2393_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v_fst_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2391_; 
v_fst_2293_ = lean_ctor_get(v_snd_2283_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v_snd_2283_);
if (v_isSharedCheck_2391_ == 0)
{
lean_object* v_unused_2392_; 
v_unused_2392_ = lean_ctor_get(v_snd_2283_, 1);
lean_dec(v_unused_2392_);
v___x_2295_ = v_snd_2283_;
v_isShared_2296_ = v_isSharedCheck_2391_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_fst_2293_);
lean_dec(v_snd_2283_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2391_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v_array_2297_; lean_object* v_start_2298_; lean_object* v_stop_2299_; lean_object* v___f_2300_; lean_object* v___y_2302_; uint8_t v___x_2305_; 
v_array_2297_ = lean_ctor_get(v_snd_2284_, 0);
v_start_2298_ = lean_ctor_get(v_snd_2284_, 1);
v_stop_2299_ = lean_ctor_get(v_snd_2284_, 2);
lean_inc(v_next_2276_);
lean_inc(v_toPure_2265_);
v___f_2300_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed), 4, 3);
lean_closure_set(v___f_2300_, 0, v_toPure_2265_);
lean_closure_set(v___f_2300_, 1, v_next_2276_);
lean_closure_set(v___f_2300_, 2, v_G_2279_);
v___x_2305_ = lean_nat_dec_lt(v_start_2298_, v_stop_2299_);
if (v___x_2305_ == 0)
{
lean_object* v___x_2307_; 
lean_dec(v_next_2276_);
lean_dec(v_fst_2275_);
lean_dec(v___f_2274_);
lean_dec_ref(v_inst_2273_);
lean_dec_ref(v_inst_2272_);
lean_dec(v_onAlt_2271_);
lean_dec_ref(v_remaining_x27_2270_);
lean_dec(v_inst_2269_);
if (v_isShared_2296_ == 0)
{
v___x_2307_ = v___x_2295_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_fst_2293_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v_snd_2284_);
v___x_2307_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2309_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 1, v___x_2307_);
v___x_2309_ = v___x_2291_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_fst_2289_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v___x_2307_);
v___x_2309_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2311_; 
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 1, v___x_2309_);
v___x_2311_ = v___x_2287_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_fst_2285_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
v___x_2313_ = lean_apply_2(v_toPure_2265_, lean_box(0), v___x_2312_);
v___y_2302_ = v___x_2313_;
goto v___jp_2301_;
}
}
}
}
else
{
lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2387_; 
lean_inc(v_stop_2299_);
lean_inc(v_start_2298_);
lean_inc_ref(v_array_2297_);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_snd_2284_);
if (v_isSharedCheck_2387_ == 0)
{
lean_object* v_unused_2388_; lean_object* v_unused_2389_; lean_object* v_unused_2390_; 
v_unused_2388_ = lean_ctor_get(v_snd_2284_, 2);
lean_dec(v_unused_2388_);
v_unused_2389_ = lean_ctor_get(v_snd_2284_, 1);
lean_dec(v_unused_2389_);
v_unused_2390_ = lean_ctor_get(v_snd_2284_, 0);
lean_dec(v_unused_2390_);
v___x_2318_ = v_snd_2284_;
v_isShared_2319_ = v_isSharedCheck_2387_;
goto v_resetjp_2317_;
}
else
{
lean_dec(v_snd_2284_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2387_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v_array_2320_; lean_object* v_start_2321_; lean_object* v_stop_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2327_; 
v_array_2320_ = lean_ctor_get(v_fst_2293_, 0);
v_start_2321_ = lean_ctor_get(v_fst_2293_, 1);
v_stop_2322_ = lean_ctor_get(v_fst_2293_, 2);
v___x_2323_ = lean_array_fget(v_array_2297_, v_start_2298_);
v___x_2324_ = lean_unsigned_to_nat(1u);
v___x_2325_ = lean_nat_add(v_start_2298_, v___x_2324_);
lean_dec(v_start_2298_);
if (v_isShared_2319_ == 0)
{
lean_ctor_set(v___x_2318_, 1, v___x_2325_);
v___x_2327_ = v___x_2318_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_array_2297_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v___x_2325_);
lean_ctor_set(v_reuseFailAlloc_2386_, 2, v_stop_2299_);
v___x_2327_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
uint8_t v___x_2328_; 
v___x_2328_ = lean_nat_dec_lt(v_start_2321_, v_stop_2322_);
if (v___x_2328_ == 0)
{
lean_object* v___x_2330_; 
lean_dec(v___x_2323_);
lean_dec(v_next_2276_);
lean_dec(v_fst_2275_);
lean_dec(v___f_2274_);
lean_dec_ref(v_inst_2273_);
lean_dec_ref(v_inst_2272_);
lean_dec(v_onAlt_2271_);
lean_dec_ref(v_remaining_x27_2270_);
lean_dec(v_inst_2269_);
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 1, v___x_2327_);
v___x_2330_ = v___x_2295_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_fst_2293_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v___x_2327_);
v___x_2330_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2332_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 1, v___x_2330_);
v___x_2332_ = v___x_2291_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_fst_2289_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v___x_2330_);
v___x_2332_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
lean_object* v___x_2334_; 
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 1, v___x_2332_);
v___x_2334_ = v___x_2287_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_fst_2285_);
lean_ctor_set(v_reuseFailAlloc_2337_, 1, v___x_2332_);
v___x_2334_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
v___x_2336_ = lean_apply_2(v_toPure_2265_, lean_box(0), v___x_2335_);
v___y_2302_ = v___x_2336_;
goto v___jp_2301_;
}
}
}
}
else
{
lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2382_; 
lean_inc(v_stop_2322_);
lean_inc(v_start_2321_);
lean_inc_ref(v_array_2320_);
v_isSharedCheck_2382_ = !lean_is_exclusive(v_fst_2293_);
if (v_isSharedCheck_2382_ == 0)
{
lean_object* v_unused_2383_; lean_object* v_unused_2384_; lean_object* v_unused_2385_; 
v_unused_2383_ = lean_ctor_get(v_fst_2293_, 2);
lean_dec(v_unused_2383_);
v_unused_2384_ = lean_ctor_get(v_fst_2293_, 1);
lean_dec(v_unused_2384_);
v_unused_2385_ = lean_ctor_get(v_fst_2293_, 0);
lean_dec(v_unused_2385_);
v___x_2341_ = v_fst_2293_;
v_isShared_2342_ = v_isSharedCheck_2382_;
goto v_resetjp_2340_;
}
else
{
lean_dec(v_fst_2293_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2382_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v_array_2343_; lean_object* v_start_2344_; lean_object* v_stop_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2349_; 
v_array_2343_ = lean_ctor_get(v_fst_2289_, 0);
v_start_2344_ = lean_ctor_get(v_fst_2289_, 1);
v_stop_2345_ = lean_ctor_get(v_fst_2289_, 2);
v___x_2346_ = lean_array_fget(v_array_2320_, v_start_2321_);
v___x_2347_ = lean_nat_add(v_start_2321_, v___x_2324_);
lean_dec(v_start_2321_);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 1, v___x_2347_);
v___x_2349_ = v___x_2341_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_array_2320_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v___x_2347_);
lean_ctor_set(v_reuseFailAlloc_2381_, 2, v_stop_2322_);
v___x_2349_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
uint8_t v___x_2350_; 
v___x_2350_ = lean_nat_dec_lt(v_start_2344_, v_stop_2345_);
if (v___x_2350_ == 0)
{
lean_object* v___x_2352_; 
lean_dec(v___x_2346_);
lean_dec(v___x_2323_);
lean_dec(v_next_2276_);
lean_dec(v_fst_2275_);
lean_dec(v___f_2274_);
lean_dec_ref(v_inst_2273_);
lean_dec_ref(v_inst_2272_);
lean_dec(v_onAlt_2271_);
lean_dec_ref(v_remaining_x27_2270_);
lean_dec(v_inst_2269_);
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 1, v___x_2327_);
lean_ctor_set(v___x_2295_, 0, v___x_2349_);
v___x_2352_ = v___x_2295_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2349_);
lean_ctor_set(v_reuseFailAlloc_2361_, 1, v___x_2327_);
v___x_2352_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2354_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 1, v___x_2352_);
v___x_2354_ = v___x_2291_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_fst_2289_);
lean_ctor_set(v_reuseFailAlloc_2360_, 1, v___x_2352_);
v___x_2354_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
lean_object* v___x_2356_; 
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 1, v___x_2354_);
v___x_2356_ = v___x_2287_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_fst_2285_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v___x_2354_);
v___x_2356_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2357_, 0, v___x_2356_);
v___x_2358_ = lean_apply_2(v_toPure_2265_, lean_box(0), v___x_2357_);
v___y_2302_ = v___x_2358_;
goto v___jp_2301_;
}
}
}
}
else
{
lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2377_; 
lean_inc(v_stop_2345_);
lean_inc(v_start_2344_);
lean_inc_ref(v_array_2343_);
lean_del_object(v___x_2295_);
lean_del_object(v___x_2291_);
lean_del_object(v___x_2287_);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_fst_2289_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; lean_object* v_unused_2379_; lean_object* v_unused_2380_; 
v_unused_2378_ = lean_ctor_get(v_fst_2289_, 2);
lean_dec(v_unused_2378_);
v_unused_2379_ = lean_ctor_get(v_fst_2289_, 1);
lean_dec(v_unused_2379_);
v_unused_2380_ = lean_ctor_get(v_fst_2289_, 0);
lean_dec(v_unused_2380_);
v___x_2363_ = v_fst_2289_;
v_isShared_2364_ = v_isSharedCheck_2377_;
goto v_resetjp_2362_;
}
else
{
lean_dec(v_fst_2289_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2377_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___f_2368_; lean_object* v___x_2369_; lean_object* v___x_2371_; 
v___x_2365_ = lean_array_fget_borrowed(v_array_2343_, v_start_2344_);
v___x_2366_ = lean_box(v___x_2268_);
v___x_2367_ = lean_box(v___x_2280_);
lean_inc_ref(v_inst_2273_);
lean_inc_ref(v_inst_2272_);
lean_inc(v___x_2365_);
lean_inc(v_toBind_2266_);
v___f_2368_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed), 14, 12);
lean_closure_set(v___f_2368_, 0, v___x_2366_);
lean_closure_set(v___f_2368_, 1, v___x_2367_);
lean_closure_set(v___f_2368_, 2, v_inst_2269_);
lean_closure_set(v___f_2368_, 3, v_remaining_x27_2270_);
lean_closure_set(v___f_2368_, 4, v_onAlt_2271_);
lean_closure_set(v___f_2368_, 5, v_next_2276_);
lean_closure_set(v___f_2368_, 6, v_toBind_2266_);
lean_closure_set(v___f_2368_, 7, v___x_2365_);
lean_closure_set(v___f_2368_, 8, v_inst_2272_);
lean_closure_set(v___f_2368_, 9, v_inst_2273_);
lean_closure_set(v___f_2368_, 10, v___f_2274_);
lean_closure_set(v___f_2368_, 11, v_fst_2275_);
v___x_2369_ = lean_nat_add(v_start_2344_, v___x_2324_);
lean_dec(v_start_2344_);
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 1, v___x_2369_);
v___x_2371_ = v___x_2363_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_array_2343_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2376_, 2, v_stop_2345_);
v___x_2371_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
lean_object* v___f_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___f_2372_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__28), 6, 5);
lean_closure_set(v___f_2372_, 0, v_fst_2285_);
lean_closure_set(v___f_2372_, 1, v___x_2349_);
lean_closure_set(v___f_2372_, 2, v___x_2327_);
lean_closure_set(v___f_2372_, 3, v___x_2371_);
lean_closure_set(v___f_2372_, 4, v_toPure_2265_);
v___x_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2346_);
v___x_2374_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2272_, v_inst_2273_, v___x_2323_, v___x_2373_, v___f_2368_, v___x_2268_, v___x_2268_);
lean_inc(v_toBind_2266_);
v___x_2375_ = lean_apply_4(v_toBind_2266_, lean_box(0), lean_box(0), v___x_2374_, v___f_2372_);
v___y_2302_ = v___x_2375_;
goto v___jp_2301_;
}
}
}
}
}
}
}
}
}
v___jp_2301_:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_inc(v_toBind_2266_);
v___x_2303_ = lean_apply_4(v_toBind_2266_, lean_box(0), lean_box(0), v___y_2302_, v___f_2267_);
v___x_2304_ = lean_apply_4(v_toBind_2266_, lean_box(0), lean_box(0), v___x_2303_, v___f_2300_);
return v___x_2304_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object* v___x_2397_, lean_object* v_toPure_2398_, lean_object* v_toBind_2399_, lean_object* v___f_2400_, lean_object* v___x_2401_, lean_object* v_inst_2402_, lean_object* v_remaining_x27_2403_, lean_object* v_onAlt_2404_, lean_object* v_inst_2405_, lean_object* v_inst_2406_, lean_object* v___f_2407_, lean_object* v_fst_2408_, lean_object* v_next_2409_, lean_object* v_acc_2410_, lean_object* v_h_2411_, lean_object* v_G_2412_){
_start:
{
uint8_t v___x_13488__boxed_2413_; lean_object* v_res_2414_; 
v___x_13488__boxed_2413_ = lean_unbox(v___x_2401_);
v_res_2414_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__29(v___x_2397_, v_toPure_2398_, v_toBind_2399_, v___f_2400_, v___x_13488__boxed_2413_, v_inst_2402_, v_remaining_x27_2403_, v_onAlt_2404_, v_inst_2405_, v_inst_2406_, v___f_2407_, v_fst_2408_, v_next_2409_, v_acc_2410_, v_h_2411_, v_G_2412_);
lean_dec(v___x_2397_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object* v_matcherApp_2415_, lean_object* v_alts_2416_, lean_object* v___x_2417_, lean_object* v___x_2418_, lean_object* v_remaining_x27_2419_, lean_object* v___f_2420_, lean_object* v_toBind_2421_, lean_object* v___f_2422_, lean_object* v_altTypes_2423_){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2424_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_2415_);
v___x_2425_ = lean_array_get_size(v___x_2424_);
v___x_2426_ = lean_array_get_size(v_altTypes_2423_);
lean_inc_n(v___x_2417_, 3);
v___x_2427_ = l_Array_toSubarray___redArg(v_alts_2416_, v___x_2417_, v___x_2418_);
v___x_2428_ = l_Array_toSubarray___redArg(v___x_2424_, v___x_2417_, v___x_2425_);
v___x_2429_ = l_Array_toSubarray___redArg(v_altTypes_2423_, v___x_2417_, v___x_2426_);
v___x_2430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2427_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v_remaining_x27_2419_);
lean_ctor_set(v___x_2432_, 1, v___x_2431_);
v___x_2433_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2420_, v___x_2417_, v___x_2432_, lean_box(0));
v___x_2434_ = lean_apply_4(v_toBind_2421_, lean_box(0), lean_box(0), v___x_2433_, v___f_2422_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object* v_alts_2435_, lean_object* v_toPure_2436_, lean_object* v_toBind_2437_, lean_object* v___f_2438_, uint8_t v___x_2439_, lean_object* v_inst_2440_, lean_object* v_remaining_x27_2441_, lean_object* v_onAlt_2442_, lean_object* v_inst_2443_, lean_object* v_inst_2444_, lean_object* v___f_2445_, lean_object* v_fst_2446_, lean_object* v_matcherApp_2447_, lean_object* v___x_2448_, lean_object* v___f_2449_, lean_object* v_aux_2450_, lean_object* v_____r_2451_){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___f_2454_; lean_object* v___f_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2452_ = lean_array_get_size(v_alts_2435_);
v___x_2453_ = lean_box(v___x_2439_);
lean_inc_ref(v_remaining_x27_2441_);
lean_inc(v_inst_2440_);
lean_inc_n(v_toBind_2437_, 2);
v___f_2454_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed), 16, 12);
lean_closure_set(v___f_2454_, 0, v___x_2452_);
lean_closure_set(v___f_2454_, 1, v_toPure_2436_);
lean_closure_set(v___f_2454_, 2, v_toBind_2437_);
lean_closure_set(v___f_2454_, 3, v___f_2438_);
lean_closure_set(v___f_2454_, 4, v___x_2453_);
lean_closure_set(v___f_2454_, 5, v_inst_2440_);
lean_closure_set(v___f_2454_, 6, v_remaining_x27_2441_);
lean_closure_set(v___f_2454_, 7, v_onAlt_2442_);
lean_closure_set(v___f_2454_, 8, v_inst_2443_);
lean_closure_set(v___f_2454_, 9, v_inst_2444_);
lean_closure_set(v___f_2454_, 10, v___f_2445_);
lean_closure_set(v___f_2454_, 11, v_fst_2446_);
v___f_2455_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__30), 9, 8);
lean_closure_set(v___f_2455_, 0, v_matcherApp_2447_);
lean_closure_set(v___f_2455_, 1, v_alts_2435_);
lean_closure_set(v___f_2455_, 2, v___x_2448_);
lean_closure_set(v___f_2455_, 3, v___x_2452_);
lean_closure_set(v___f_2455_, 4, v_remaining_x27_2441_);
lean_closure_set(v___f_2455_, 5, v___f_2454_);
lean_closure_set(v___f_2455_, 6, v_toBind_2437_);
lean_closure_set(v___f_2455_, 7, v___f_2449_);
v___x_2456_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_2456_, 0, v___x_2452_);
lean_closure_set(v___x_2456_, 1, v_aux_2450_);
v___x_2457_ = lean_apply_2(v_inst_2440_, lean_box(0), v___x_2456_);
v___x_2458_ = lean_apply_4(v_toBind_2437_, lean_box(0), lean_box(0), v___x_2457_, v___f_2455_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_alts_2459_ = _args[0];
lean_object* v_toPure_2460_ = _args[1];
lean_object* v_toBind_2461_ = _args[2];
lean_object* v___f_2462_ = _args[3];
lean_object* v___x_2463_ = _args[4];
lean_object* v_inst_2464_ = _args[5];
lean_object* v_remaining_x27_2465_ = _args[6];
lean_object* v_onAlt_2466_ = _args[7];
lean_object* v_inst_2467_ = _args[8];
lean_object* v_inst_2468_ = _args[9];
lean_object* v___f_2469_ = _args[10];
lean_object* v_fst_2470_ = _args[11];
lean_object* v_matcherApp_2471_ = _args[12];
lean_object* v___x_2472_ = _args[13];
lean_object* v___f_2473_ = _args[14];
lean_object* v_aux_2474_ = _args[15];
lean_object* v_____r_2475_ = _args[16];
_start:
{
uint8_t v___x_13742__boxed_2476_; lean_object* v_res_2477_; 
v___x_13742__boxed_2476_ = lean_unbox(v___x_2463_);
v_res_2477_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__31(v_alts_2459_, v_toPure_2460_, v_toBind_2461_, v___f_2462_, v___x_13742__boxed_2476_, v_inst_2464_, v_remaining_x27_2465_, v_onAlt_2466_, v_inst_2467_, v_inst_2468_, v___f_2469_, v_fst_2470_, v_matcherApp_2471_, v___x_2472_, v___f_2473_, v_aux_2474_, v_____r_2475_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object* v___x_2478_, lean_object* v_e_2479_){
_start:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = l_Lean_indentD(v_e_2479_);
v___x_2481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2478_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object* v___x_2482_, lean_object* v___f_2483_, lean_object* v_runInBase_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2490_ = lean_apply_2(v_runInBase_2484_, lean_box(0), v___x_2482_);
v___x_2491_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2490_, v___f_2483_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object* v___x_2492_, lean_object* v___f_2493_, lean_object* v_runInBase_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__33(v___x_2492_, v___f_2493_, v_runInBase_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object* v_toPure_2501_, lean_object* v_next_2502_, lean_object* v_G_2503_, lean_object* v_____do__lift_2504_){
_start:
{
if (lean_obj_tag(v_____do__lift_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2506_; 
lean_dec(v_G_2503_);
v_a_2505_ = lean_ctor_get(v_____do__lift_2504_, 0);
lean_inc(v_a_2505_);
lean_dec_ref_known(v_____do__lift_2504_, 1);
v___x_2506_ = lean_apply_2(v_toPure_2501_, lean_box(0), v_a_2505_);
return v___x_2506_;
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
lean_dec(v_toPure_2501_);
v_a_2507_ = lean_ctor_get(v_____do__lift_2504_, 0);
lean_inc(v_a_2507_);
lean_dec_ref_known(v_____do__lift_2504_, 1);
v___x_2508_ = lean_unsigned_to_nat(1u);
v___x_2509_ = lean_nat_add(v_next_2502_, v___x_2508_);
v___x_2510_ = lean_apply_4(v_G_2503_, v___x_2509_, v_a_2507_, lean_box(0), lean_box(0));
return v___x_2510_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object* v_toPure_2511_, lean_object* v_next_2512_, lean_object* v_G_2513_, lean_object* v_____do__lift_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__35(v_toPure_2511_, v_next_2512_, v_G_2513_, v_____do__lift_2514_);
lean_dec(v_next_2512_);
return v_res_2515_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2524_ = lean_box(0);
v___x_2525_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__4));
v___x_2526_ = l_Lean_mkConst(v___x_2525_, v___x_2524_);
return v___x_2526_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2527_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__5);
v___x_2528_ = lean_unsigned_to_nat(2u);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2528_);
v___x_2530_ = lean_array_push(v___x_2529_, v___x_2527_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object* v___x_2531_, lean_object* v_toPure_2532_, lean_object* v_inst_2533_, lean_object* v_alt_x27_2534_){
_start:
{
uint8_t v_hasUnitThunk_2535_; 
v_hasUnitThunk_2535_ = lean_ctor_get_uint8(v___x_2531_, sizeof(void*)*2);
if (v_hasUnitThunk_2535_ == 0)
{
lean_object* v___x_2536_; 
lean_dec(v_inst_2533_);
v___x_2536_ = lean_apply_2(v_toPure_2532_, lean_box(0), v_alt_x27_2534_);
return v___x_2536_;
}
else
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
lean_dec(v_toPure_2532_);
v___x_2537_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_2538_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_2539_ = lean_array_push(v___x_2538_, v_alt_x27_2534_);
v___x_2540_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___boxed), 7, 2);
lean_closure_set(v___x_2540_, 0, v___x_2537_);
lean_closure_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = lean_apply_2(v_inst_2533_, lean_box(0), v___x_2540_);
return v___x_2541_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object* v___x_2542_, lean_object* v_toPure_2543_, lean_object* v_inst_2544_, lean_object* v_alt_x27_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__34(v___x_2542_, v_toPure_2543_, v_inst_2544_, v_alt_x27_2545_);
lean_dec_ref(v___x_2542_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object* v_ys_2547_, lean_object* v_ys2_2548_, lean_object* v_ys3_2549_, lean_object* v_ys4_2550_, uint8_t v___x_2551_, uint8_t v___x_2552_, lean_object* v_inst_2553_, lean_object* v_alt_x27_2554_){
_start:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; uint8_t v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2555_ = l_Array_append___redArg(v_ys_2547_, v_ys2_2548_);
v___x_2556_ = l_Array_append___redArg(v___x_2555_, v_ys3_2549_);
v___x_2557_ = l_Array_append___redArg(v___x_2556_, v_ys4_2550_);
v___x_2558_ = 1;
v___x_2559_ = lean_box(v___x_2551_);
v___x_2560_ = lean_box(v___x_2552_);
v___x_2561_ = lean_box(v___x_2551_);
v___x_2562_ = lean_box(v___x_2552_);
v___x_2563_ = lean_box(v___x_2558_);
v___x_2564_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2564_, 0, v___x_2557_);
lean_closure_set(v___x_2564_, 1, v_alt_x27_2554_);
lean_closure_set(v___x_2564_, 2, v___x_2559_);
lean_closure_set(v___x_2564_, 3, v___x_2560_);
lean_closure_set(v___x_2564_, 4, v___x_2561_);
lean_closure_set(v___x_2564_, 5, v___x_2562_);
lean_closure_set(v___x_2564_, 6, v___x_2563_);
v___x_2565_ = lean_apply_2(v_inst_2553_, lean_box(0), v___x_2564_);
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object* v_ys_2566_, lean_object* v_ys2_2567_, lean_object* v_ys3_2568_, lean_object* v_ys4_2569_, lean_object* v___x_2570_, lean_object* v___x_2571_, lean_object* v_inst_2572_, lean_object* v_alt_x27_2573_){
_start:
{
uint8_t v___x_13891__boxed_2574_; uint8_t v___x_13892__boxed_2575_; lean_object* v_res_2576_; 
v___x_13891__boxed_2574_ = lean_unbox(v___x_2570_);
v___x_13892__boxed_2575_ = lean_unbox(v___x_2571_);
v_res_2576_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__36(v_ys_2566_, v_ys2_2567_, v_ys3_2568_, v_ys4_2569_, v___x_13891__boxed_2574_, v___x_13892__boxed_2575_, v_inst_2572_, v_alt_x27_2573_);
lean_dec_ref(v_ys4_2569_);
lean_dec_ref(v_ys3_2568_);
lean_dec_ref(v_ys2_2567_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object* v_args_2577_, lean_object* v_ys_2578_, lean_object* v_ys2_2579_, lean_object* v_ys3_2580_, lean_object* v_ys4_2581_, lean_object* v_onAlt_2582_, lean_object* v_next_2583_, lean_object* v_altType_2584_, lean_object* v_toBind_2585_, lean_object* v___f_2586_, lean_object* v_alt_2587_){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2588_, 0, v_args_2577_);
lean_ctor_set(v___x_2588_, 1, v_ys_2578_);
lean_ctor_set(v___x_2588_, 2, v_ys2_2579_);
lean_ctor_set(v___x_2588_, 3, v_ys3_2580_);
lean_ctor_set(v___x_2588_, 4, v_ys4_2581_);
v___x_2589_ = lean_apply_4(v_onAlt_2582_, v_next_2583_, v_altType_2584_, v___x_2588_, v_alt_2587_);
v___x_2590_ = lean_apply_4(v_toBind_2585_, lean_box(0), lean_box(0), v___x_2589_, v___f_2586_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object* v_toMonadExceptOf_2591_, lean_object* v_ys_2592_, lean_object* v_ys2_2593_, lean_object* v_ys3_2594_, uint8_t v___x_2595_, uint8_t v___x_2596_, lean_object* v_inst_2597_, lean_object* v_args_2598_, lean_object* v_onAlt_2599_, lean_object* v_next_2600_, lean_object* v_toBind_2601_, lean_object* v___x_2602_, lean_object* v___f_2603_, lean_object* v_ys4_2604_, lean_object* v_altType_2605_){
_start:
{
lean_object* v_tryCatch_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___f_2609_; lean_object* v___f_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_tryCatch_2606_ = lean_ctor_get(v_toMonadExceptOf_2591_, 1);
lean_inc(v_tryCatch_2606_);
lean_dec_ref(v_toMonadExceptOf_2591_);
v___x_2607_ = lean_box(v___x_2595_);
v___x_2608_ = lean_box(v___x_2596_);
lean_inc(v_inst_2597_);
lean_inc_ref(v_ys4_2604_);
lean_inc_ref_n(v_ys3_2594_, 2);
lean_inc_ref(v_ys2_2593_);
lean_inc_ref(v_ys_2592_);
v___f_2609_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed), 8, 7);
lean_closure_set(v___f_2609_, 0, v_ys_2592_);
lean_closure_set(v___f_2609_, 1, v_ys2_2593_);
lean_closure_set(v___f_2609_, 2, v_ys3_2594_);
lean_closure_set(v___f_2609_, 3, v_ys4_2604_);
lean_closure_set(v___f_2609_, 4, v___x_2607_);
lean_closure_set(v___f_2609_, 5, v___x_2608_);
lean_closure_set(v___f_2609_, 6, v_inst_2597_);
lean_inc(v_toBind_2601_);
lean_inc_ref(v_args_2598_);
v___f_2610_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__37), 11, 10);
lean_closure_set(v___f_2610_, 0, v_args_2598_);
lean_closure_set(v___f_2610_, 1, v_ys_2592_);
lean_closure_set(v___f_2610_, 2, v_ys2_2593_);
lean_closure_set(v___f_2610_, 3, v_ys3_2594_);
lean_closure_set(v___f_2610_, 4, v_ys4_2604_);
lean_closure_set(v___f_2610_, 5, v_onAlt_2599_);
lean_closure_set(v___f_2610_, 6, v_next_2600_);
lean_closure_set(v___f_2610_, 7, v_altType_2605_);
lean_closure_set(v___f_2610_, 8, v_toBind_2601_);
lean_closure_set(v___f_2610_, 9, v___f_2609_);
v___x_2611_ = l_Array_append___redArg(v_args_2598_, v_ys3_2594_);
lean_dec_ref(v_ys3_2594_);
v___x_2612_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2612_, 0, v___x_2602_);
lean_closure_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_apply_2(v_inst_2597_, lean_box(0), v___x_2612_);
v___x_2614_ = lean_apply_3(v_tryCatch_2606_, lean_box(0), v___x_2613_, v___f_2603_);
v___x_2615_ = lean_apply_4(v_toBind_2601_, lean_box(0), lean_box(0), v___x_2614_, v___f_2610_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object* v_toMonadExceptOf_2616_, lean_object* v_ys_2617_, lean_object* v_ys2_2618_, lean_object* v_ys3_2619_, lean_object* v___x_2620_, lean_object* v___x_2621_, lean_object* v_inst_2622_, lean_object* v_args_2623_, lean_object* v_onAlt_2624_, lean_object* v_next_2625_, lean_object* v_toBind_2626_, lean_object* v___x_2627_, lean_object* v___f_2628_, lean_object* v_ys4_2629_, lean_object* v_altType_2630_){
_start:
{
uint8_t v___x_13930__boxed_2631_; uint8_t v___x_13931__boxed_2632_; lean_object* v_res_2633_; 
v___x_13930__boxed_2631_ = lean_unbox(v___x_2620_);
v___x_13931__boxed_2632_ = lean_unbox(v___x_2621_);
v_res_2633_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__38(v_toMonadExceptOf_2616_, v_ys_2617_, v_ys2_2618_, v_ys3_2619_, v___x_13930__boxed_2631_, v___x_13931__boxed_2632_, v_inst_2622_, v_args_2623_, v_onAlt_2624_, v_next_2625_, v_toBind_2626_, v___x_2627_, v___f_2628_, v_ys4_2629_, v_altType_2630_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object* v_toMonadExceptOf_2634_, lean_object* v_ys_2635_, lean_object* v_ys2_2636_, uint8_t v___x_2637_, uint8_t v___x_2638_, lean_object* v_inst_2639_, lean_object* v_args_2640_, lean_object* v_onAlt_2641_, lean_object* v_next_2642_, lean_object* v_toBind_2643_, lean_object* v___x_2644_, lean_object* v___f_2645_, lean_object* v_fst_2646_, lean_object* v_inst_2647_, lean_object* v_inst_2648_, lean_object* v_ys3_2649_, lean_object* v_altType_2650_){
_start:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___f_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2651_ = lean_box(v___x_2637_);
v___x_2652_ = lean_box(v___x_2638_);
v___f_2653_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed), 15, 13);
lean_closure_set(v___f_2653_, 0, v_toMonadExceptOf_2634_);
lean_closure_set(v___f_2653_, 1, v_ys_2635_);
lean_closure_set(v___f_2653_, 2, v_ys2_2636_);
lean_closure_set(v___f_2653_, 3, v_ys3_2649_);
lean_closure_set(v___f_2653_, 4, v___x_2651_);
lean_closure_set(v___f_2653_, 5, v___x_2652_);
lean_closure_set(v___f_2653_, 6, v_inst_2639_);
lean_closure_set(v___f_2653_, 7, v_args_2640_);
lean_closure_set(v___f_2653_, 8, v_onAlt_2641_);
lean_closure_set(v___f_2653_, 9, v_next_2642_);
lean_closure_set(v___f_2653_, 10, v_toBind_2643_);
lean_closure_set(v___f_2653_, 11, v___x_2644_);
lean_closure_set(v___f_2653_, 12, v___f_2645_);
v___x_2654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2654_, 0, v_fst_2646_);
v___x_2655_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2647_, v_inst_2648_, v_altType_2650_, v___x_2654_, v___f_2653_, v___x_2637_, v___x_2637_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2656_ = _args[0];
lean_object* v_ys_2657_ = _args[1];
lean_object* v_ys2_2658_ = _args[2];
lean_object* v___x_2659_ = _args[3];
lean_object* v___x_2660_ = _args[4];
lean_object* v_inst_2661_ = _args[5];
lean_object* v_args_2662_ = _args[6];
lean_object* v_onAlt_2663_ = _args[7];
lean_object* v_next_2664_ = _args[8];
lean_object* v_toBind_2665_ = _args[9];
lean_object* v___x_2666_ = _args[10];
lean_object* v___f_2667_ = _args[11];
lean_object* v_fst_2668_ = _args[12];
lean_object* v_inst_2669_ = _args[13];
lean_object* v_inst_2670_ = _args[14];
lean_object* v_ys3_2671_ = _args[15];
lean_object* v_altType_2672_ = _args[16];
_start:
{
uint8_t v___x_13963__boxed_2673_; uint8_t v___x_13964__boxed_2674_; lean_object* v_res_2675_; 
v___x_13963__boxed_2673_ = lean_unbox(v___x_2659_);
v___x_13964__boxed_2674_ = lean_unbox(v___x_2660_);
v_res_2675_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__39(v_toMonadExceptOf_2656_, v_ys_2657_, v_ys2_2658_, v___x_13963__boxed_2673_, v___x_13964__boxed_2674_, v_inst_2661_, v_args_2662_, v_onAlt_2663_, v_next_2664_, v_toBind_2665_, v___x_2666_, v___f_2667_, v_fst_2668_, v_inst_2669_, v_inst_2670_, v_ys3_2671_, v_altType_2672_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object* v_toMonadExceptOf_2676_, lean_object* v_ys_2677_, uint8_t v___x_2678_, uint8_t v___x_2679_, lean_object* v_inst_2680_, lean_object* v_args_2681_, lean_object* v_onAlt_2682_, lean_object* v_next_2683_, lean_object* v_toBind_2684_, lean_object* v___x_2685_, lean_object* v___f_2686_, lean_object* v_fst_2687_, lean_object* v_inst_2688_, lean_object* v_inst_2689_, lean_object* v_numDiscrEqs_2690_, lean_object* v_ys2_2691_, lean_object* v_altType_2692_){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___f_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2693_ = lean_box(v___x_2678_);
v___x_2694_ = lean_box(v___x_2679_);
lean_inc_ref(v_inst_2689_);
lean_inc_ref(v_inst_2688_);
v___f_2695_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed), 17, 15);
lean_closure_set(v___f_2695_, 0, v_toMonadExceptOf_2676_);
lean_closure_set(v___f_2695_, 1, v_ys_2677_);
lean_closure_set(v___f_2695_, 2, v_ys2_2691_);
lean_closure_set(v___f_2695_, 3, v___x_2693_);
lean_closure_set(v___f_2695_, 4, v___x_2694_);
lean_closure_set(v___f_2695_, 5, v_inst_2680_);
lean_closure_set(v___f_2695_, 6, v_args_2681_);
lean_closure_set(v___f_2695_, 7, v_onAlt_2682_);
lean_closure_set(v___f_2695_, 8, v_next_2683_);
lean_closure_set(v___f_2695_, 9, v_toBind_2684_);
lean_closure_set(v___f_2695_, 10, v___x_2685_);
lean_closure_set(v___f_2695_, 11, v___f_2686_);
lean_closure_set(v___f_2695_, 12, v_fst_2687_);
lean_closure_set(v___f_2695_, 13, v_inst_2688_);
lean_closure_set(v___f_2695_, 14, v_inst_2689_);
v___x_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2696_, 0, v_numDiscrEqs_2690_);
v___x_2697_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2688_, v_inst_2689_, v_altType_2692_, v___x_2696_, v___f_2695_, v___x_2678_, v___x_2678_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object** _args){
lean_object* v_toMonadExceptOf_2698_ = _args[0];
lean_object* v_ys_2699_ = _args[1];
lean_object* v___x_2700_ = _args[2];
lean_object* v___x_2701_ = _args[3];
lean_object* v_inst_2702_ = _args[4];
lean_object* v_args_2703_ = _args[5];
lean_object* v_onAlt_2704_ = _args[6];
lean_object* v_next_2705_ = _args[7];
lean_object* v_toBind_2706_ = _args[8];
lean_object* v___x_2707_ = _args[9];
lean_object* v___f_2708_ = _args[10];
lean_object* v_fst_2709_ = _args[11];
lean_object* v_inst_2710_ = _args[12];
lean_object* v_inst_2711_ = _args[13];
lean_object* v_numDiscrEqs_2712_ = _args[14];
lean_object* v_ys2_2713_ = _args[15];
lean_object* v_altType_2714_ = _args[16];
_start:
{
uint8_t v___x_13994__boxed_2715_; uint8_t v___x_13995__boxed_2716_; lean_object* v_res_2717_; 
v___x_13994__boxed_2715_ = lean_unbox(v___x_2700_);
v___x_13995__boxed_2716_ = lean_unbox(v___x_2701_);
v_res_2717_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__40(v_toMonadExceptOf_2698_, v_ys_2699_, v___x_13994__boxed_2715_, v___x_13995__boxed_2716_, v_inst_2702_, v_args_2703_, v_onAlt_2704_, v_next_2705_, v_toBind_2706_, v___x_2707_, v___f_2708_, v_fst_2709_, v_inst_2710_, v_inst_2711_, v_numDiscrEqs_2712_, v_ys2_2713_, v_altType_2714_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object* v_numOverlaps_2718_, lean_object* v_inst_2719_, lean_object* v_inst_2720_, lean_object* v___f_2721_, uint8_t v___x_2722_, lean_object* v_toBind_2723_, lean_object* v___f_2724_, lean_object* v_altType_2725_){
_start:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2726_, 0, v_numOverlaps_2718_);
v___x_2727_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2719_, v_inst_2720_, v_altType_2725_, v___x_2726_, v___f_2721_, v___x_2722_, v___x_2722_);
v___x_2728_ = lean_apply_4(v_toBind_2723_, lean_box(0), lean_box(0), v___x_2727_, v___f_2724_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object* v_numOverlaps_2729_, lean_object* v_inst_2730_, lean_object* v_inst_2731_, lean_object* v___f_2732_, lean_object* v___x_2733_, lean_object* v_toBind_2734_, lean_object* v___f_2735_, lean_object* v_altType_2736_){
_start:
{
uint8_t v___x_14028__boxed_2737_; lean_object* v_res_2738_; 
v___x_14028__boxed_2737_ = lean_unbox(v___x_2733_);
v_res_2738_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__41(v_numOverlaps_2729_, v_inst_2730_, v_inst_2731_, v___f_2732_, v___x_14028__boxed_2737_, v_toBind_2734_, v___f_2735_, v_altType_2736_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object* v___f_2739_, lean_object* v_altType_2740_){
_start:
{
lean_object* v___x_2741_; 
v___x_2741_ = lean_apply_1(v___f_2739_, v_altType_2740_);
return v___x_2741_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2(void){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2746_ = lean_box(0);
v___x_2747_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1));
v___x_2748_ = l_Lean_mkConst(v___x_2747_, v___x_2746_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(uint8_t v_hasUnitThunk_2749_, lean_object* v_toPure_2750_, lean_object* v_toBind_2751_, lean_object* v___f_2752_, lean_object* v___x_2753_, lean_object* v_inst_2754_, lean_object* v___f_2755_, lean_object* v_altType_2756_){
_start:
{
if (v_hasUnitThunk_2749_ == 0)
{
lean_object* v___x_2757_; lean_object* v___x_2758_; 
lean_dec(v___f_2755_);
lean_dec(v_inst_2754_);
v___x_2757_ = lean_apply_2(v_toPure_2750_, lean_box(0), v_altType_2756_);
v___x_2758_ = lean_apply_4(v_toBind_2751_, lean_box(0), lean_box(0), v___x_2757_, v___f_2752_);
return v___x_2758_;
}
else
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
lean_dec(v___f_2752_);
lean_dec(v_toPure_2750_);
v___x_2759_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_2760_ = lean_mk_empty_array_with_capacity(v___x_2753_);
v___x_2761_ = lean_array_push(v___x_2760_, v___x_2759_);
v___x_2762_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2762_, 0, v_altType_2756_);
lean_closure_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = lean_apply_2(v_inst_2754_, lean_box(0), v___x_2762_);
v___x_2764_ = lean_apply_4(v_toBind_2751_, lean_box(0), lean_box(0), v___x_2763_, v___f_2755_);
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object* v_hasUnitThunk_2765_, lean_object* v_toPure_2766_, lean_object* v_toBind_2767_, lean_object* v___f_2768_, lean_object* v___x_2769_, lean_object* v_inst_2770_, lean_object* v___f_2771_, lean_object* v_altType_2772_){
_start:
{
uint8_t v_hasUnitThunk_boxed_2773_; lean_object* v_res_2774_; 
v_hasUnitThunk_boxed_2773_ = lean_unbox(v_hasUnitThunk_2765_);
v_res_2774_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__44(v_hasUnitThunk_boxed_2773_, v_toPure_2766_, v_toBind_2767_, v___f_2768_, v___x_2769_, v_inst_2770_, v___f_2771_, v_altType_2772_);
lean_dec(v___x_2769_);
return v_res_2774_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3(void){
_start:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2778_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2));
v___x_2779_ = lean_unsigned_to_nat(8u);
v___x_2780_ = lean_unsigned_to_nat(363u);
v___x_2781_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2782_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2783_ = l_mkPanicMessageWithDecl(v___x_2782_, v___x_2781_, v___x_2780_, v___x_2779_, v___x_2778_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object* v___x_2784_, lean_object* v___x_2785_, lean_object* v_toMonadExceptOf_2786_, uint8_t v___x_2787_, lean_object* v_inst_2788_, lean_object* v_onAlt_2789_, lean_object* v_next_2790_, lean_object* v_toBind_2791_, lean_object* v___x_2792_, lean_object* v___f_2793_, lean_object* v_fst_2794_, lean_object* v_inst_2795_, lean_object* v_inst_2796_, lean_object* v_numDiscrEqs_2797_, lean_object* v___f_2798_, lean_object* v_toPure_2799_, lean_object* v___x_2800_, lean_object* v___x_2801_, lean_object* v_ys_2802_, lean_object* v_args_2803_){
_start:
{
lean_object* v_numFields_2804_; lean_object* v_numOverlaps_2805_; uint8_t v_hasUnitThunk_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v_numFields_2804_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_numFields_2804_);
v_numOverlaps_2805_ = lean_ctor_get(v___x_2784_, 1);
lean_inc(v_numOverlaps_2805_);
v_hasUnitThunk_2806_ = lean_ctor_get_uint8(v___x_2784_, sizeof(void*)*2);
lean_dec_ref(v___x_2784_);
v___x_2807_ = lean_array_get_size(v_ys_2802_);
v___x_2808_ = lean_nat_dec_eq(v___x_2807_, v_numFields_2804_);
lean_dec(v_numFields_2804_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; lean_object* v___x_2810_; 
lean_dec(v_numOverlaps_2805_);
lean_dec_ref(v_args_2803_);
lean_dec_ref(v_ys_2802_);
lean_dec_ref(v___x_2801_);
lean_dec(v___x_2800_);
lean_dec(v_toPure_2799_);
lean_dec(v___f_2798_);
lean_dec(v_numDiscrEqs_2797_);
lean_dec_ref(v_inst_2796_);
lean_dec_ref(v_inst_2795_);
lean_dec(v_fst_2794_);
lean_dec(v___f_2793_);
lean_dec_ref(v___x_2792_);
lean_dec(v_toBind_2791_);
lean_dec(v_next_2790_);
lean_dec(v_onAlt_2789_);
lean_dec(v_inst_2788_);
lean_dec_ref(v_toMonadExceptOf_2786_);
v___x_2809_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_2810_ = l_panic___redArg(v___x_2785_, v___x_2809_);
return v___x_2810_;
}
else
{
lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___f_2813_; lean_object* v___x_2814_; lean_object* v___f_2815_; lean_object* v___f_2816_; lean_object* v___x_2817_; lean_object* v___f_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2811_ = lean_box(v___x_2787_);
v___x_2812_ = lean_box(v___x_2808_);
lean_inc_ref(v_inst_2796_);
lean_inc_ref(v_inst_2795_);
lean_inc_n(v_toBind_2791_, 3);
lean_inc_n(v_inst_2788_, 2);
lean_inc_ref(v_ys_2802_);
v___f_2813_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed), 17, 15);
lean_closure_set(v___f_2813_, 0, v_toMonadExceptOf_2786_);
lean_closure_set(v___f_2813_, 1, v_ys_2802_);
lean_closure_set(v___f_2813_, 2, v___x_2811_);
lean_closure_set(v___f_2813_, 3, v___x_2812_);
lean_closure_set(v___f_2813_, 4, v_inst_2788_);
lean_closure_set(v___f_2813_, 5, v_args_2803_);
lean_closure_set(v___f_2813_, 6, v_onAlt_2789_);
lean_closure_set(v___f_2813_, 7, v_next_2790_);
lean_closure_set(v___f_2813_, 8, v_toBind_2791_);
lean_closure_set(v___f_2813_, 9, v___x_2792_);
lean_closure_set(v___f_2813_, 10, v___f_2793_);
lean_closure_set(v___f_2813_, 11, v_fst_2794_);
lean_closure_set(v___f_2813_, 12, v_inst_2795_);
lean_closure_set(v___f_2813_, 13, v_inst_2796_);
lean_closure_set(v___f_2813_, 14, v_numDiscrEqs_2797_);
v___x_2814_ = lean_box(v___x_2787_);
v___f_2815_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed), 8, 7);
lean_closure_set(v___f_2815_, 0, v_numOverlaps_2805_);
lean_closure_set(v___f_2815_, 1, v_inst_2795_);
lean_closure_set(v___f_2815_, 2, v_inst_2796_);
lean_closure_set(v___f_2815_, 3, v___f_2813_);
lean_closure_set(v___f_2815_, 4, v___x_2814_);
lean_closure_set(v___f_2815_, 5, v_toBind_2791_);
lean_closure_set(v___f_2815_, 6, v___f_2798_);
v___f_2816_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__42), 2, 1);
lean_closure_set(v___f_2816_, 0, v___f_2815_);
v___x_2817_ = lean_box(v_hasUnitThunk_2806_);
lean_inc_ref(v___f_2816_);
v___f_2818_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed), 8, 7);
lean_closure_set(v___f_2818_, 0, v___x_2817_);
lean_closure_set(v___f_2818_, 1, v_toPure_2799_);
lean_closure_set(v___f_2818_, 2, v_toBind_2791_);
lean_closure_set(v___f_2818_, 3, v___f_2816_);
lean_closure_set(v___f_2818_, 4, v___x_2800_);
lean_closure_set(v___f_2818_, 5, v_inst_2788_);
lean_closure_set(v___f_2818_, 6, v___f_2816_);
v___x_2819_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2819_, 0, v___x_2801_);
lean_closure_set(v___x_2819_, 1, v_ys_2802_);
v___x_2820_ = lean_apply_2(v_inst_2788_, lean_box(0), v___x_2819_);
v___x_2821_ = lean_apply_4(v_toBind_2791_, lean_box(0), lean_box(0), v___x_2820_, v___f_2818_);
return v___x_2821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object** _args){
lean_object* v___x_2822_ = _args[0];
lean_object* v___x_2823_ = _args[1];
lean_object* v_toMonadExceptOf_2824_ = _args[2];
lean_object* v___x_2825_ = _args[3];
lean_object* v_inst_2826_ = _args[4];
lean_object* v_onAlt_2827_ = _args[5];
lean_object* v_next_2828_ = _args[6];
lean_object* v_toBind_2829_ = _args[7];
lean_object* v___x_2830_ = _args[8];
lean_object* v___f_2831_ = _args[9];
lean_object* v_fst_2832_ = _args[10];
lean_object* v_inst_2833_ = _args[11];
lean_object* v_inst_2834_ = _args[12];
lean_object* v_numDiscrEqs_2835_ = _args[13];
lean_object* v___f_2836_ = _args[14];
lean_object* v_toPure_2837_ = _args[15];
lean_object* v___x_2838_ = _args[16];
lean_object* v___x_2839_ = _args[17];
lean_object* v_ys_2840_ = _args[18];
lean_object* v_args_2841_ = _args[19];
_start:
{
uint8_t v___x_14120__boxed_2842_; lean_object* v_res_2843_; 
v___x_14120__boxed_2842_ = lean_unbox(v___x_2825_);
v_res_2843_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__43(v___x_2822_, v___x_2823_, v_toMonadExceptOf_2824_, v___x_14120__boxed_2842_, v_inst_2826_, v_onAlt_2827_, v_next_2828_, v_toBind_2829_, v___x_2830_, v___f_2831_, v_fst_2832_, v_inst_2833_, v_inst_2834_, v_numDiscrEqs_2835_, v___f_2836_, v_toPure_2837_, v___x_2838_, v___x_2839_, v_ys_2840_, v_args_2841_);
lean_dec(v___x_2823_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object* v_fst_2844_, lean_object* v___x_2845_, lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v___x_2848_, lean_object* v___x_2849_, lean_object* v_toPure_2850_, lean_object* v_alt_x27_2851_){
_start:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2852_ = lean_array_push(v_fst_2844_, v_alt_x27_2851_);
v___x_2853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2845_);
lean_ctor_set(v___x_2853_, 1, v___x_2846_);
v___x_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2847_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
v___x_2855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2848_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2849_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2852_);
lean_ctor_set(v___x_2857_, 1, v___x_2856_);
v___x_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
v___x_2859_ = lean_apply_2(v_toPure_2850_, lean_box(0), v___x_2858_);
return v___x_2859_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1(void){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2861_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0));
v___x_2862_ = lean_unsigned_to_nat(6u);
v___x_2863_ = lean_unsigned_to_nat(361u);
v___x_2864_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1));
v___x_2865_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0));
v___x_2866_ = l_mkPanicMessageWithDecl(v___x_2865_, v___x_2864_, v___x_2863_, v___x_2862_, v___x_2861_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object* v___x_2867_, lean_object* v_toPure_2868_, lean_object* v_toBind_2869_, lean_object* v___f_2870_, lean_object* v___x_2871_, lean_object* v___x_2872_, lean_object* v_inst_2873_, lean_object* v___x_2874_, lean_object* v_toMonadExceptOf_2875_, uint8_t v___x_2876_, lean_object* v_onAlt_2877_, lean_object* v___f_2878_, lean_object* v_fst_2879_, lean_object* v_inst_2880_, lean_object* v_inst_2881_, lean_object* v_numDiscrEqs_2882_, lean_object* v_next_2883_, lean_object* v_acc_2884_, lean_object* v_h_2885_, lean_object* v_G_2886_){
_start:
{
uint8_t v___x_2887_; 
v___x_2887_ = lean_nat_dec_lt(v_next_2883_, v___x_2867_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2888_; 
lean_dec(v_G_2886_);
lean_dec(v_next_2883_);
lean_dec(v_numDiscrEqs_2882_);
lean_dec_ref(v_inst_2881_);
lean_dec_ref(v_inst_2880_);
lean_dec(v_fst_2879_);
lean_dec(v___f_2878_);
lean_dec(v_onAlt_2877_);
lean_dec_ref(v_toMonadExceptOf_2875_);
lean_dec(v___x_2874_);
lean_dec(v_inst_2873_);
lean_dec(v___f_2870_);
lean_dec(v_toBind_2869_);
v___x_2888_ = lean_apply_2(v_toPure_2868_, lean_box(0), v_acc_2884_);
return v___x_2888_;
}
else
{
lean_object* v_snd_2889_; lean_object* v_snd_2890_; lean_object* v_snd_2891_; lean_object* v_snd_2892_; lean_object* v_snd_2893_; lean_object* v_fst_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_3103_; 
v_snd_2889_ = lean_ctor_get(v_acc_2884_, 1);
lean_inc(v_snd_2889_);
v_snd_2890_ = lean_ctor_get(v_snd_2889_, 1);
lean_inc(v_snd_2890_);
v_snd_2891_ = lean_ctor_get(v_snd_2890_, 1);
lean_inc(v_snd_2891_);
v_snd_2892_ = lean_ctor_get(v_snd_2891_, 1);
lean_inc(v_snd_2892_);
v_snd_2893_ = lean_ctor_get(v_snd_2892_, 1);
lean_inc(v_snd_2893_);
v_fst_2894_ = lean_ctor_get(v_acc_2884_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v_acc_2884_);
if (v_isSharedCheck_3103_ == 0)
{
lean_object* v_unused_3104_; 
v_unused_3104_ = lean_ctor_get(v_acc_2884_, 1);
lean_dec(v_unused_3104_);
v___x_2896_ = v_acc_2884_;
v_isShared_2897_ = v_isSharedCheck_3103_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_fst_2894_);
lean_dec(v_acc_2884_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_3103_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v_fst_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_3101_; 
v_fst_2898_ = lean_ctor_get(v_snd_2889_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v_snd_2889_);
if (v_isSharedCheck_3101_ == 0)
{
lean_object* v_unused_3102_; 
v_unused_3102_ = lean_ctor_get(v_snd_2889_, 1);
lean_dec(v_unused_3102_);
v___x_2900_ = v_snd_2889_;
v_isShared_2901_ = v_isSharedCheck_3101_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_fst_2898_);
lean_dec(v_snd_2889_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_3101_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v_fst_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_3099_; 
v_fst_2902_ = lean_ctor_get(v_snd_2890_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_snd_2890_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v_snd_2890_, 1);
lean_dec(v_unused_3100_);
v___x_2904_ = v_snd_2890_;
v_isShared_2905_ = v_isSharedCheck_3099_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_fst_2902_);
lean_dec(v_snd_2890_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_3099_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v_fst_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_3097_; 
v_fst_2906_ = lean_ctor_get(v_snd_2891_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_snd_2891_);
if (v_isSharedCheck_3097_ == 0)
{
lean_object* v_unused_3098_; 
v_unused_3098_ = lean_ctor_get(v_snd_2891_, 1);
lean_dec(v_unused_3098_);
v___x_2908_ = v_snd_2891_;
v_isShared_2909_ = v_isSharedCheck_3097_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_fst_2906_);
lean_dec(v_snd_2891_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_3097_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v_fst_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_3095_; 
v_fst_2910_ = lean_ctor_get(v_snd_2892_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v_snd_2892_);
if (v_isSharedCheck_3095_ == 0)
{
lean_object* v_unused_3096_; 
v_unused_3096_ = lean_ctor_get(v_snd_2892_, 1);
lean_dec(v_unused_3096_);
v___x_2912_ = v_snd_2892_;
v_isShared_2913_ = v_isSharedCheck_3095_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_fst_2910_);
lean_dec(v_snd_2892_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_3095_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v_array_2914_; lean_object* v_start_2915_; lean_object* v_stop_2916_; lean_object* v___f_2917_; lean_object* v___y_2919_; uint8_t v___x_2922_; 
v_array_2914_ = lean_ctor_get(v_snd_2893_, 0);
v_start_2915_ = lean_ctor_get(v_snd_2893_, 1);
v_stop_2916_ = lean_ctor_get(v_snd_2893_, 2);
lean_inc(v_next_2883_);
lean_inc(v_toPure_2868_);
v___f_2917_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed), 4, 3);
lean_closure_set(v___f_2917_, 0, v_toPure_2868_);
lean_closure_set(v___f_2917_, 1, v_next_2883_);
lean_closure_set(v___f_2917_, 2, v_G_2886_);
v___x_2922_ = lean_nat_dec_lt(v_start_2915_, v_stop_2916_);
if (v___x_2922_ == 0)
{
lean_object* v___x_2924_; 
lean_dec(v_next_2883_);
lean_dec(v_numDiscrEqs_2882_);
lean_dec_ref(v_inst_2881_);
lean_dec_ref(v_inst_2880_);
lean_dec(v_fst_2879_);
lean_dec(v___f_2878_);
lean_dec(v_onAlt_2877_);
lean_dec_ref(v_toMonadExceptOf_2875_);
lean_dec(v___x_2874_);
lean_dec(v_inst_2873_);
if (v_isShared_2913_ == 0)
{
v___x_2924_ = v___x_2912_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_fst_2910_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v_snd_2893_);
v___x_2924_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
lean_object* v___x_2926_; 
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 1, v___x_2924_);
v___x_2926_ = v___x_2908_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_fst_2906_);
lean_ctor_set(v_reuseFailAlloc_2938_, 1, v___x_2924_);
v___x_2926_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
lean_object* v___x_2928_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_2926_);
v___x_2928_ = v___x_2904_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_fst_2902_);
lean_ctor_set(v_reuseFailAlloc_2937_, 1, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2930_; 
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 1, v___x_2928_);
v___x_2930_ = v___x_2900_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_fst_2898_);
lean_ctor_set(v_reuseFailAlloc_2936_, 1, v___x_2928_);
v___x_2930_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2932_; 
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 1, v___x_2930_);
v___x_2932_ = v___x_2896_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_fst_2894_);
lean_ctor_set(v_reuseFailAlloc_2935_, 1, v___x_2930_);
v___x_2932_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
v___x_2934_ = lean_apply_2(v_toPure_2868_, lean_box(0), v___x_2933_);
v___y_2919_ = v___x_2934_;
goto v___jp_2918_;
}
}
}
}
}
}
else
{
lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_3091_; 
lean_inc(v_stop_2916_);
lean_inc(v_start_2915_);
lean_inc_ref(v_array_2914_);
v_isSharedCheck_3091_ = !lean_is_exclusive(v_snd_2893_);
if (v_isSharedCheck_3091_ == 0)
{
lean_object* v_unused_3092_; lean_object* v_unused_3093_; lean_object* v_unused_3094_; 
v_unused_3092_ = lean_ctor_get(v_snd_2893_, 2);
lean_dec(v_unused_3092_);
v_unused_3093_ = lean_ctor_get(v_snd_2893_, 1);
lean_dec(v_unused_3093_);
v_unused_3094_ = lean_ctor_get(v_snd_2893_, 0);
lean_dec(v_unused_3094_);
v___x_2941_ = v_snd_2893_;
v_isShared_2942_ = v_isSharedCheck_3091_;
goto v_resetjp_2940_;
}
else
{
lean_dec(v_snd_2893_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_3091_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v_array_2943_; lean_object* v_start_2944_; lean_object* v_stop_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2950_; 
v_array_2943_ = lean_ctor_get(v_fst_2910_, 0);
v_start_2944_ = lean_ctor_get(v_fst_2910_, 1);
v_stop_2945_ = lean_ctor_get(v_fst_2910_, 2);
v___x_2946_ = lean_array_fget(v_array_2914_, v_start_2915_);
v___x_2947_ = lean_unsigned_to_nat(1u);
v___x_2948_ = lean_nat_add(v_start_2915_, v___x_2947_);
lean_dec(v_start_2915_);
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 1, v___x_2948_);
v___x_2950_ = v___x_2941_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_array_2914_);
lean_ctor_set(v_reuseFailAlloc_3090_, 1, v___x_2948_);
lean_ctor_set(v_reuseFailAlloc_3090_, 2, v_stop_2916_);
v___x_2950_ = v_reuseFailAlloc_3090_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
uint8_t v___x_2951_; 
v___x_2951_ = lean_nat_dec_lt(v_start_2944_, v_stop_2945_);
if (v___x_2951_ == 0)
{
lean_object* v___x_2953_; 
lean_dec(v___x_2946_);
lean_dec(v_next_2883_);
lean_dec(v_numDiscrEqs_2882_);
lean_dec_ref(v_inst_2881_);
lean_dec_ref(v_inst_2880_);
lean_dec(v_fst_2879_);
lean_dec(v___f_2878_);
lean_dec(v_onAlt_2877_);
lean_dec_ref(v_toMonadExceptOf_2875_);
lean_dec(v___x_2874_);
lean_dec(v_inst_2873_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 1, v___x_2950_);
v___x_2953_ = v___x_2912_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_fst_2910_);
lean_ctor_set(v_reuseFailAlloc_2968_, 1, v___x_2950_);
v___x_2953_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
lean_object* v___x_2955_; 
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 1, v___x_2953_);
v___x_2955_ = v___x_2908_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_fst_2906_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v___x_2953_);
v___x_2955_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
lean_object* v___x_2957_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_2955_);
v___x_2957_ = v___x_2904_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_fst_2902_);
lean_ctor_set(v_reuseFailAlloc_2966_, 1, v___x_2955_);
v___x_2957_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
lean_object* v___x_2959_; 
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 1, v___x_2957_);
v___x_2959_ = v___x_2900_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_fst_2898_);
lean_ctor_set(v_reuseFailAlloc_2965_, 1, v___x_2957_);
v___x_2959_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
lean_object* v___x_2961_; 
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 1, v___x_2959_);
v___x_2961_ = v___x_2896_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_fst_2894_);
lean_ctor_set(v_reuseFailAlloc_2964_, 1, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
v___x_2963_ = lean_apply_2(v_toPure_2868_, lean_box(0), v___x_2962_);
v___y_2919_ = v___x_2963_;
goto v___jp_2918_;
}
}
}
}
}
}
else
{
lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_3086_; 
lean_inc(v_stop_2945_);
lean_inc(v_start_2944_);
lean_inc_ref(v_array_2943_);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_fst_2910_);
if (v_isSharedCheck_3086_ == 0)
{
lean_object* v_unused_3087_; lean_object* v_unused_3088_; lean_object* v_unused_3089_; 
v_unused_3087_ = lean_ctor_get(v_fst_2910_, 2);
lean_dec(v_unused_3087_);
v_unused_3088_ = lean_ctor_get(v_fst_2910_, 1);
lean_dec(v_unused_3088_);
v_unused_3089_ = lean_ctor_get(v_fst_2910_, 0);
lean_dec(v_unused_3089_);
v___x_2970_ = v_fst_2910_;
v_isShared_2971_ = v_isSharedCheck_3086_;
goto v_resetjp_2969_;
}
else
{
lean_dec(v_fst_2910_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_3086_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v_array_2972_; lean_object* v_start_2973_; lean_object* v_stop_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
v_array_2972_ = lean_ctor_get(v_fst_2906_, 0);
v_start_2973_ = lean_ctor_get(v_fst_2906_, 1);
v_stop_2974_ = lean_ctor_get(v_fst_2906_, 2);
v___x_2975_ = lean_array_fget(v_array_2943_, v_start_2944_);
v___x_2976_ = lean_nat_add(v_start_2944_, v___x_2947_);
lean_dec(v_start_2944_);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 1, v___x_2976_);
v___x_2978_ = v___x_2970_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_array_2943_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v___x_2976_);
lean_ctor_set(v_reuseFailAlloc_3085_, 2, v_stop_2945_);
v___x_2978_ = v_reuseFailAlloc_3085_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
uint8_t v___x_2979_; 
v___x_2979_ = lean_nat_dec_lt(v_start_2973_, v_stop_2974_);
if (v___x_2979_ == 0)
{
lean_object* v___x_2981_; 
lean_dec(v___x_2975_);
lean_dec(v___x_2946_);
lean_dec(v_next_2883_);
lean_dec(v_numDiscrEqs_2882_);
lean_dec_ref(v_inst_2881_);
lean_dec_ref(v_inst_2880_);
lean_dec(v_fst_2879_);
lean_dec(v___f_2878_);
lean_dec(v_onAlt_2877_);
lean_dec_ref(v_toMonadExceptOf_2875_);
lean_dec(v___x_2874_);
lean_dec(v_inst_2873_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 1, v___x_2950_);
lean_ctor_set(v___x_2912_, 0, v___x_2978_);
v___x_2981_ = v___x_2912_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2978_);
lean_ctor_set(v_reuseFailAlloc_2996_, 1, v___x_2950_);
v___x_2981_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
lean_object* v___x_2983_; 
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 1, v___x_2981_);
v___x_2983_ = v___x_2908_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_fst_2906_);
lean_ctor_set(v_reuseFailAlloc_2995_, 1, v___x_2981_);
v___x_2983_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
lean_object* v___x_2985_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_2983_);
v___x_2985_ = v___x_2904_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_fst_2902_);
lean_ctor_set(v_reuseFailAlloc_2994_, 1, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2987_; 
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 1, v___x_2985_);
v___x_2987_ = v___x_2900_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_fst_2898_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v___x_2985_);
v___x_2987_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2989_; 
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 1, v___x_2987_);
v___x_2989_ = v___x_2896_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_fst_2894_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v___x_2987_);
v___x_2989_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
v___x_2991_ = lean_apply_2(v_toPure_2868_, lean_box(0), v___x_2990_);
v___y_2919_ = v___x_2991_;
goto v___jp_2918_;
}
}
}
}
}
}
else
{
lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3081_; 
lean_inc(v_stop_2974_);
lean_inc(v_start_2973_);
lean_inc_ref(v_array_2972_);
v_isSharedCheck_3081_ = !lean_is_exclusive(v_fst_2906_);
if (v_isSharedCheck_3081_ == 0)
{
lean_object* v_unused_3082_; lean_object* v_unused_3083_; lean_object* v_unused_3084_; 
v_unused_3082_ = lean_ctor_get(v_fst_2906_, 2);
lean_dec(v_unused_3082_);
v_unused_3083_ = lean_ctor_get(v_fst_2906_, 1);
lean_dec(v_unused_3083_);
v_unused_3084_ = lean_ctor_get(v_fst_2906_, 0);
lean_dec(v_unused_3084_);
v___x_2998_ = v_fst_2906_;
v_isShared_2999_ = v_isSharedCheck_3081_;
goto v_resetjp_2997_;
}
else
{
lean_dec(v_fst_2906_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3081_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v_array_3000_; lean_object* v_start_3001_; lean_object* v_stop_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3006_; 
v_array_3000_ = lean_ctor_get(v_fst_2902_, 0);
v_start_3001_ = lean_ctor_get(v_fst_2902_, 1);
v_stop_3002_ = lean_ctor_get(v_fst_2902_, 2);
v___x_3003_ = lean_array_fget(v_array_2972_, v_start_2973_);
v___x_3004_ = lean_nat_add(v_start_2973_, v___x_2947_);
lean_dec(v_start_2973_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 1, v___x_3004_);
v___x_3006_ = v___x_2998_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_array_2972_);
lean_ctor_set(v_reuseFailAlloc_3080_, 1, v___x_3004_);
lean_ctor_set(v_reuseFailAlloc_3080_, 2, v_stop_2974_);
v___x_3006_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
uint8_t v___x_3007_; 
v___x_3007_ = lean_nat_dec_lt(v_start_3001_, v_stop_3002_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3009_; 
lean_dec(v___x_3003_);
lean_dec(v___x_2975_);
lean_dec(v___x_2946_);
lean_dec(v_next_2883_);
lean_dec(v_numDiscrEqs_2882_);
lean_dec_ref(v_inst_2881_);
lean_dec_ref(v_inst_2880_);
lean_dec(v_fst_2879_);
lean_dec(v___f_2878_);
lean_dec(v_onAlt_2877_);
lean_dec_ref(v_toMonadExceptOf_2875_);
lean_dec(v___x_2874_);
lean_dec(v_inst_2873_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 1, v___x_2950_);
lean_ctor_set(v___x_2912_, 0, v___x_2978_);
v___x_3009_ = v___x_2912_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_2978_);
lean_ctor_set(v_reuseFailAlloc_3024_, 1, v___x_2950_);
v___x_3009_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3011_; 
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 1, v___x_3009_);
lean_ctor_set(v___x_2908_, 0, v___x_3006_);
v___x_3011_ = v___x_2908_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3006_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v___x_3009_);
v___x_3011_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
lean_object* v___x_3013_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_3011_);
v___x_3013_ = v___x_2904_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_fst_2902_);
lean_ctor_set(v_reuseFailAlloc_3022_, 1, v___x_3011_);
v___x_3013_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
lean_object* v___x_3015_; 
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 1, v___x_3013_);
v___x_3015_ = v___x_2900_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_fst_2898_);
lean_ctor_set(v_reuseFailAlloc_3021_, 1, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
lean_object* v___x_3017_; 
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 1, v___x_3015_);
v___x_3017_ = v___x_2896_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_fst_2894_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
v___x_3019_ = lean_apply_2(v_toPure_2868_, lean_box(0), v___x_3018_);
v___y_2919_ = v___x_3019_;
goto v___jp_2918_;
}
}
}
}
}
}
else
{
lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3076_; 
lean_inc(v_stop_3002_);
lean_inc(v_start_3001_);
lean_inc_ref(v_array_3000_);
v_isSharedCheck_3076_ = !lean_is_exclusive(v_fst_2902_);
if (v_isSharedCheck_3076_ == 0)
{
lean_object* v_unused_3077_; lean_object* v_unused_3078_; lean_object* v_unused_3079_; 
v_unused_3077_ = lean_ctor_get(v_fst_2902_, 2);
lean_dec(v_unused_3077_);
v_unused_3078_ = lean_ctor_get(v_fst_2902_, 1);
lean_dec(v_unused_3078_);
v_unused_3079_ = lean_ctor_get(v_fst_2902_, 0);
lean_dec(v_unused_3079_);
v___x_3026_ = v_fst_2902_;
v_isShared_3027_ = v_isSharedCheck_3076_;
goto v_resetjp_3025_;
}
else
{
lean_dec(v_fst_2902_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3076_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v_array_3028_; lean_object* v_start_3029_; lean_object* v_stop_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3034_; 
v_array_3028_ = lean_ctor_get(v_fst_2898_, 0);
v_start_3029_ = lean_ctor_get(v_fst_2898_, 1);
v_stop_3030_ = lean_ctor_get(v_fst_2898_, 2);
v___x_3031_ = lean_array_fget(v_array_3000_, v_start_3001_);
v___x_3032_ = lean_nat_add(v_start_3001_, v___x_2947_);
lean_dec(v_start_3001_);
if (v_isShared_3027_ == 0)
{
lean_ctor_set(v___x_3026_, 1, v___x_3032_);
v___x_3034_ = v___x_3026_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_array_3000_);
lean_ctor_set(v_reuseFailAlloc_3075_, 1, v___x_3032_);
lean_ctor_set(v_reuseFailAlloc_3075_, 2, v_stop_3002_);
v___x_3034_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
uint8_t v___x_3035_; 
v___x_3035_ = lean_nat_dec_lt(v_start_3029_, v_stop_3030_);
if (v___x_3035_ == 0)
{
lean_object* v___x_3037_; 
lean_dec(v___x_3031_);
lean_dec(v___x_3003_);
lean_dec(v___x_2975_);
lean_dec(v___x_2946_);
lean_dec(v_next_2883_);
lean_dec(v_numDiscrEqs_2882_);
lean_dec_ref(v_inst_2881_);
lean_dec_ref(v_inst_2880_);
lean_dec(v_fst_2879_);
lean_dec(v___f_2878_);
lean_dec(v_onAlt_2877_);
lean_dec_ref(v_toMonadExceptOf_2875_);
lean_dec(v___x_2874_);
lean_dec(v_inst_2873_);
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 1, v___x_2950_);
lean_ctor_set(v___x_2912_, 0, v___x_2978_);
v___x_3037_ = v___x_2912_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v___x_2978_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v___x_2950_);
v___x_3037_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3039_; 
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 1, v___x_3037_);
lean_ctor_set(v___x_2908_, 0, v___x_3006_);
v___x_3039_ = v___x_2908_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3006_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v___x_3037_);
v___x_3039_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
lean_object* v___x_3041_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v___x_3039_);
lean_ctor_set(v___x_2904_, 0, v___x_3034_);
v___x_3041_ = v___x_2904_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3034_);
lean_ctor_set(v_reuseFailAlloc_3050_, 1, v___x_3039_);
v___x_3041_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
lean_object* v___x_3043_; 
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 1, v___x_3041_);
v___x_3043_ = v___x_2900_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_fst_2898_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v___x_3041_);
v___x_3043_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
lean_object* v___x_3045_; 
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 1, v___x_3043_);
v___x_3045_ = v___x_2896_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_fst_2894_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
v___x_3047_ = lean_apply_2(v_toPure_2868_, lean_box(0), v___x_3046_);
v___y_2919_ = v___x_3047_;
goto v___jp_2918_;
}
}
}
}
}
}
else
{
lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3071_; 
lean_inc(v_stop_3030_);
lean_inc(v_start_3029_);
lean_inc_ref(v_array_3028_);
lean_del_object(v___x_2912_);
lean_del_object(v___x_2908_);
lean_del_object(v___x_2904_);
lean_del_object(v___x_2900_);
lean_del_object(v___x_2896_);
v_isSharedCheck_3071_ = !lean_is_exclusive(v_fst_2898_);
if (v_isSharedCheck_3071_ == 0)
{
lean_object* v_unused_3072_; lean_object* v_unused_3073_; lean_object* v_unused_3074_; 
v_unused_3072_ = lean_ctor_get(v_fst_2898_, 2);
lean_dec(v_unused_3072_);
v_unused_3073_ = lean_ctor_get(v_fst_2898_, 1);
lean_dec(v_unused_3073_);
v_unused_3074_ = lean_ctor_get(v_fst_2898_, 0);
lean_dec(v_unused_3074_);
v___x_3054_ = v_fst_2898_;
v_isShared_3055_ = v_isSharedCheck_3071_;
goto v_resetjp_3053_;
}
else
{
lean_dec(v_fst_2898_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3071_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v_numOverlaps_3056_; uint8_t v___x_3057_; 
v_numOverlaps_3056_ = lean_ctor_get(v___x_3031_, 1);
v___x_3057_ = lean_nat_dec_eq(v_numOverlaps_3056_, v___x_2871_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
lean_del_object(v___x_3054_);
lean_dec_ref(v___x_3034_);
lean_dec(v___x_3031_);
lean_dec(v_stop_3030_);
lean_dec(v_start_3029_);
lean_dec_ref(v_array_3028_);
lean_dec_ref(v___x_3006_);
lean_dec(v___x_3003_);
lean_dec_ref(v___x_2978_);
lean_dec(v___x_2975_);
lean_dec_ref(v___x_2950_);
lean_dec(v___x_2946_);
lean_dec(v_fst_2894_);
lean_dec(v_next_2883_);
lean_dec(v_numDiscrEqs_2882_);
lean_dec_ref(v_inst_2881_);
lean_dec_ref(v_inst_2880_);
lean_dec(v_fst_2879_);
lean_dec(v___f_2878_);
lean_dec(v_onAlt_2877_);
lean_dec_ref(v_toMonadExceptOf_2875_);
lean_dec(v___x_2874_);
lean_dec(v_inst_2873_);
lean_dec(v_toPure_2868_);
v___x_3058_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_3059_ = l_panic___redArg(v___x_2872_, v___x_3058_);
v___y_2919_ = v___x_3059_;
goto v___jp_2918_;
}
else
{
lean_object* v___f_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___f_3063_; lean_object* v___x_3064_; lean_object* v___x_3066_; 
lean_inc(v_inst_2873_);
lean_inc_n(v_toPure_2868_, 2);
lean_inc(v___x_3003_);
v___f_3060_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed), 4, 3);
lean_closure_set(v___f_3060_, 0, v___x_3003_);
lean_closure_set(v___f_3060_, 1, v_toPure_2868_);
lean_closure_set(v___f_3060_, 2, v_inst_2873_);
v___x_3061_ = lean_array_fget_borrowed(v_array_3028_, v_start_3029_);
v___x_3062_ = lean_box(v___x_2876_);
lean_inc_ref(v_inst_2881_);
lean_inc_ref(v_inst_2880_);
lean_inc(v___x_3061_);
lean_inc(v_toBind_2869_);
v___f_3063_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed), 20, 18);
lean_closure_set(v___f_3063_, 0, v___x_3003_);
lean_closure_set(v___f_3063_, 1, v___x_2874_);
lean_closure_set(v___f_3063_, 2, v_toMonadExceptOf_2875_);
lean_closure_set(v___f_3063_, 3, v___x_3062_);
lean_closure_set(v___f_3063_, 4, v_inst_2873_);
lean_closure_set(v___f_3063_, 5, v_onAlt_2877_);
lean_closure_set(v___f_3063_, 6, v_next_2883_);
lean_closure_set(v___f_3063_, 7, v_toBind_2869_);
lean_closure_set(v___f_3063_, 8, v___x_3061_);
lean_closure_set(v___f_3063_, 9, v___f_2878_);
lean_closure_set(v___f_3063_, 10, v_fst_2879_);
lean_closure_set(v___f_3063_, 11, v_inst_2880_);
lean_closure_set(v___f_3063_, 12, v_inst_2881_);
lean_closure_set(v___f_3063_, 13, v_numDiscrEqs_2882_);
lean_closure_set(v___f_3063_, 14, v___f_3060_);
lean_closure_set(v___f_3063_, 15, v_toPure_2868_);
lean_closure_set(v___f_3063_, 16, v___x_2947_);
lean_closure_set(v___f_3063_, 17, v___x_2946_);
v___x_3064_ = lean_nat_add(v_start_3029_, v___x_2947_);
lean_dec(v_start_3029_);
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 1, v___x_3064_);
v___x_3066_ = v___x_3054_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_array_3028_);
lean_ctor_set(v_reuseFailAlloc_3070_, 1, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3070_, 2, v_stop_3030_);
v___x_3066_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
lean_object* v___f_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___f_3067_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__45), 8, 7);
lean_closure_set(v___f_3067_, 0, v_fst_2894_);
lean_closure_set(v___f_3067_, 1, v___x_2978_);
lean_closure_set(v___f_3067_, 2, v___x_2950_);
lean_closure_set(v___f_3067_, 3, v___x_3006_);
lean_closure_set(v___f_3067_, 4, v___x_3034_);
lean_closure_set(v___f_3067_, 5, v___x_3066_);
lean_closure_set(v___f_3067_, 6, v_toPure_2868_);
v___x_3068_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_2881_, v_inst_2880_, v___x_2975_, v___x_3031_, v___f_3063_);
lean_inc(v_toBind_2869_);
v___x_3069_ = lean_apply_4(v_toBind_2869_, lean_box(0), lean_box(0), v___x_3068_, v___f_3067_);
v___y_2919_ = v___x_3069_;
goto v___jp_2918_;
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
}
v___jp_2918_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_inc(v_toBind_2869_);
v___x_2920_ = lean_apply_4(v_toBind_2869_, lean_box(0), lean_box(0), v___y_2919_, v___f_2870_);
v___x_2921_ = lean_apply_4(v_toBind_2869_, lean_box(0), lean_box(0), v___x_2920_, v___f_2917_);
return v___x_2921_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object** _args){
lean_object* v___x_3105_ = _args[0];
lean_object* v_toPure_3106_ = _args[1];
lean_object* v_toBind_3107_ = _args[2];
lean_object* v___f_3108_ = _args[3];
lean_object* v___x_3109_ = _args[4];
lean_object* v___x_3110_ = _args[5];
lean_object* v_inst_3111_ = _args[6];
lean_object* v___x_3112_ = _args[7];
lean_object* v_toMonadExceptOf_3113_ = _args[8];
lean_object* v___x_3114_ = _args[9];
lean_object* v_onAlt_3115_ = _args[10];
lean_object* v___f_3116_ = _args[11];
lean_object* v_fst_3117_ = _args[12];
lean_object* v_inst_3118_ = _args[13];
lean_object* v_inst_3119_ = _args[14];
lean_object* v_numDiscrEqs_3120_ = _args[15];
lean_object* v_next_3121_ = _args[16];
lean_object* v_acc_3122_ = _args[17];
lean_object* v_h_3123_ = _args[18];
lean_object* v_G_3124_ = _args[19];
_start:
{
uint8_t v___x_14238__boxed_3125_; lean_object* v_res_3126_; 
v___x_14238__boxed_3125_ = lean_unbox(v___x_3114_);
v_res_3126_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__46(v___x_3105_, v_toPure_3106_, v_toBind_3107_, v___f_3108_, v___x_3109_, v___x_3110_, v_inst_3111_, v___x_3112_, v_toMonadExceptOf_3113_, v___x_14238__boxed_3125_, v_onAlt_3115_, v___f_3116_, v_fst_3117_, v_inst_3118_, v_inst_3119_, v_numDiscrEqs_3120_, v_next_3121_, v_acc_3122_, v_h_3123_, v_G_3124_);
lean_dec(v___x_3110_);
lean_dec(v___x_3109_);
lean_dec(v___x_3105_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object* v_fst_3127_, lean_object* v_numParams_3128_, lean_object* v_numDiscrs_3129_, lean_object* v_altInfos_3130_, lean_object* v_uElimPos_x3f_3131_, lean_object* v_snd_3132_, lean_object* v_overlaps_3133_, lean_object* v_splitterName_3134_, lean_object* v_matcherLevels_3135_, lean_object* v_params_x27_3136_, lean_object* v_fst_3137_, lean_object* v_discrs_x27_3138_, lean_object* v_fst_3139_, lean_object* v_toPure_3140_, lean_object* v_____do__lift_3141_){
_start:
{
lean_object* v_remaining_x27_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v_remaining_x27_3142_ = l_Array_append___redArg(v_fst_3127_, v_____do__lift_3141_);
v___x_3143_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3143_, 0, v_numParams_3128_);
lean_ctor_set(v___x_3143_, 1, v_numDiscrs_3129_);
lean_ctor_set(v___x_3143_, 2, v_altInfos_3130_);
lean_ctor_set(v___x_3143_, 3, v_uElimPos_x3f_3131_);
lean_ctor_set(v___x_3143_, 4, v_snd_3132_);
lean_ctor_set(v___x_3143_, 5, v_overlaps_3133_);
v___x_3144_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
lean_ctor_set(v___x_3144_, 1, v_splitterName_3134_);
lean_ctor_set(v___x_3144_, 2, v_matcherLevels_3135_);
lean_ctor_set(v___x_3144_, 3, v_params_x27_3136_);
lean_ctor_set(v___x_3144_, 4, v_fst_3137_);
lean_ctor_set(v___x_3144_, 5, v_discrs_x27_3138_);
lean_ctor_set(v___x_3144_, 6, v_fst_3139_);
lean_ctor_set(v___x_3144_, 7, v_remaining_x27_3142_);
v___x_3145_ = lean_apply_2(v_toPure_3140_, lean_box(0), v___x_3144_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object* v_fst_3146_, lean_object* v_numParams_3147_, lean_object* v_numDiscrs_3148_, lean_object* v_altInfos_3149_, lean_object* v_uElimPos_x3f_3150_, lean_object* v_snd_3151_, lean_object* v_overlaps_3152_, lean_object* v_splitterName_3153_, lean_object* v_matcherLevels_3154_, lean_object* v_params_x27_3155_, lean_object* v_fst_3156_, lean_object* v_discrs_x27_3157_, lean_object* v_fst_3158_, lean_object* v_toPure_3159_, lean_object* v_____do__lift_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__47(v_fst_3146_, v_numParams_3147_, v_numDiscrs_3148_, v_altInfos_3149_, v_uElimPos_x3f_3150_, v_snd_3151_, v_overlaps_3152_, v_splitterName_3153_, v_matcherLevels_3154_, v_params_x27_3155_, v_fst_3156_, v_discrs_x27_3157_, v_fst_3158_, v_toPure_3159_, v_____do__lift_3160_);
lean_dec_ref(v_____do__lift_3160_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object* v_fst_3162_, lean_object* v_numParams_3163_, lean_object* v_numDiscrs_3164_, lean_object* v_altInfos_3165_, lean_object* v_uElimPos_x3f_3166_, lean_object* v_snd_3167_, lean_object* v_overlaps_3168_, lean_object* v_splitterName_3169_, lean_object* v_matcherLevels_3170_, lean_object* v_params_x27_3171_, lean_object* v_fst_3172_, lean_object* v_discrs_x27_3173_, lean_object* v_toPure_3174_, lean_object* v_onRemaining_3175_, lean_object* v_remaining_3176_, lean_object* v_toBind_3177_, lean_object* v_____s_3178_){
_start:
{
lean_object* v_fst_3179_; lean_object* v___f_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v_fst_3179_ = lean_ctor_get(v_____s_3178_, 0);
lean_inc(v_fst_3179_);
lean_dec_ref(v_____s_3178_);
v___f_3180_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed), 15, 14);
lean_closure_set(v___f_3180_, 0, v_fst_3162_);
lean_closure_set(v___f_3180_, 1, v_numParams_3163_);
lean_closure_set(v___f_3180_, 2, v_numDiscrs_3164_);
lean_closure_set(v___f_3180_, 3, v_altInfos_3165_);
lean_closure_set(v___f_3180_, 4, v_uElimPos_x3f_3166_);
lean_closure_set(v___f_3180_, 5, v_snd_3167_);
lean_closure_set(v___f_3180_, 6, v_overlaps_3168_);
lean_closure_set(v___f_3180_, 7, v_splitterName_3169_);
lean_closure_set(v___f_3180_, 8, v_matcherLevels_3170_);
lean_closure_set(v___f_3180_, 9, v_params_x27_3171_);
lean_closure_set(v___f_3180_, 10, v_fst_3172_);
lean_closure_set(v___f_3180_, 11, v_discrs_x27_3173_);
lean_closure_set(v___f_3180_, 12, v_fst_3179_);
lean_closure_set(v___f_3180_, 13, v_toPure_3174_);
v___x_3181_ = lean_apply_1(v_onRemaining_3175_, v_remaining_3176_);
v___x_3182_ = lean_apply_4(v_toBind_3177_, lean_box(0), lean_box(0), v___x_3181_, v___f_3180_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object** _args){
lean_object* v_fst_3183_ = _args[0];
lean_object* v_numParams_3184_ = _args[1];
lean_object* v_numDiscrs_3185_ = _args[2];
lean_object* v_altInfos_3186_ = _args[3];
lean_object* v_uElimPos_x3f_3187_ = _args[4];
lean_object* v_snd_3188_ = _args[5];
lean_object* v_overlaps_3189_ = _args[6];
lean_object* v_splitterName_3190_ = _args[7];
lean_object* v_matcherLevels_3191_ = _args[8];
lean_object* v_params_x27_3192_ = _args[9];
lean_object* v_fst_3193_ = _args[10];
lean_object* v_discrs_x27_3194_ = _args[11];
lean_object* v_toPure_3195_ = _args[12];
lean_object* v_onRemaining_3196_ = _args[13];
lean_object* v_remaining_3197_ = _args[14];
lean_object* v_toBind_3198_ = _args[15];
lean_object* v_____s_3199_ = _args[16];
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__48(v_fst_3183_, v_numParams_3184_, v_numDiscrs_3185_, v_altInfos_3186_, v_uElimPos_x3f_3187_, v_snd_3188_, v_overlaps_3189_, v_splitterName_3190_, v_matcherLevels_3191_, v_params_x27_3192_, v_fst_3193_, v_discrs_x27_3194_, v_toPure_3195_, v_onRemaining_3196_, v_remaining_3197_, v_toBind_3198_, v_____s_3199_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object* v_splitterMatchInfo_3201_, lean_object* v_fst_3202_, lean_object* v_numParams_3203_, lean_object* v_numDiscrs_3204_, lean_object* v_altInfos_3205_, lean_object* v_uElimPos_x3f_3206_, lean_object* v_snd_3207_, lean_object* v_overlaps_3208_, lean_object* v_splitterName_3209_, lean_object* v_matcherLevels_3210_, lean_object* v_params_x27_3211_, lean_object* v_fst_3212_, lean_object* v_discrs_x27_3213_, lean_object* v_toPure_3214_, lean_object* v_onRemaining_3215_, lean_object* v_remaining_3216_, lean_object* v_toBind_3217_, lean_object* v_origAltTypes_3218_, lean_object* v_alts_3219_, lean_object* v___x_3220_, lean_object* v___x_3221_, lean_object* v_remaining_x27_3222_, lean_object* v___f_3223_, lean_object* v_altTypes_3224_){
_start:
{
lean_object* v_altInfos_3225_; lean_object* v___f_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v_altInfos_3225_ = lean_ctor_get(v_splitterMatchInfo_3201_, 2);
lean_inc_ref(v_altInfos_3225_);
lean_dec_ref(v_splitterMatchInfo_3201_);
lean_inc(v_toBind_3217_);
lean_inc_ref(v_altInfos_3205_);
v___f_3226_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed), 17, 16);
lean_closure_set(v___f_3226_, 0, v_fst_3202_);
lean_closure_set(v___f_3226_, 1, v_numParams_3203_);
lean_closure_set(v___f_3226_, 2, v_numDiscrs_3204_);
lean_closure_set(v___f_3226_, 3, v_altInfos_3205_);
lean_closure_set(v___f_3226_, 4, v_uElimPos_x3f_3206_);
lean_closure_set(v___f_3226_, 5, v_snd_3207_);
lean_closure_set(v___f_3226_, 6, v_overlaps_3208_);
lean_closure_set(v___f_3226_, 7, v_splitterName_3209_);
lean_closure_set(v___f_3226_, 8, v_matcherLevels_3210_);
lean_closure_set(v___f_3226_, 9, v_params_x27_3211_);
lean_closure_set(v___f_3226_, 10, v_fst_3212_);
lean_closure_set(v___f_3226_, 11, v_discrs_x27_3213_);
lean_closure_set(v___f_3226_, 12, v_toPure_3214_);
lean_closure_set(v___f_3226_, 13, v_onRemaining_3215_);
lean_closure_set(v___f_3226_, 14, v_remaining_3216_);
lean_closure_set(v___f_3226_, 15, v_toBind_3217_);
v___x_3227_ = lean_array_get_size(v_altInfos_3205_);
v___x_3228_ = lean_array_get_size(v_altInfos_3225_);
v___x_3229_ = lean_array_get_size(v_origAltTypes_3218_);
v___x_3230_ = lean_array_get_size(v_altTypes_3224_);
lean_inc_n(v___x_3220_, 5);
v___x_3231_ = l_Array_toSubarray___redArg(v_alts_3219_, v___x_3220_, v___x_3221_);
v___x_3232_ = l_Array_toSubarray___redArg(v_altInfos_3205_, v___x_3220_, v___x_3227_);
v___x_3233_ = l_Array_toSubarray___redArg(v_altInfos_3225_, v___x_3220_, v___x_3228_);
v___x_3234_ = l_Array_toSubarray___redArg(v_origAltTypes_3218_, v___x_3220_, v___x_3229_);
v___x_3235_ = l_Array_toSubarray___redArg(v_altTypes_3224_, v___x_3220_, v___x_3230_);
v___x_3236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3234_);
lean_ctor_set(v___x_3236_, 1, v___x_3235_);
v___x_3237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3233_);
lean_ctor_set(v___x_3237_, 1, v___x_3236_);
v___x_3238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3232_);
lean_ctor_set(v___x_3238_, 1, v___x_3237_);
v___x_3239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3231_);
lean_ctor_set(v___x_3239_, 1, v___x_3238_);
v___x_3240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3240_, 0, v_remaining_x27_3222_);
lean_ctor_set(v___x_3240_, 1, v___x_3239_);
v___x_3241_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3223_, v___x_3220_, v___x_3240_, lean_box(0));
v___x_3242_ = lean_apply_4(v_toBind_3217_, lean_box(0), lean_box(0), v___x_3241_, v___f_3226_);
return v___x_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object** _args){
lean_object* v_splitterMatchInfo_3243_ = _args[0];
lean_object* v_fst_3244_ = _args[1];
lean_object* v_numParams_3245_ = _args[2];
lean_object* v_numDiscrs_3246_ = _args[3];
lean_object* v_altInfos_3247_ = _args[4];
lean_object* v_uElimPos_x3f_3248_ = _args[5];
lean_object* v_snd_3249_ = _args[6];
lean_object* v_overlaps_3250_ = _args[7];
lean_object* v_splitterName_3251_ = _args[8];
lean_object* v_matcherLevels_3252_ = _args[9];
lean_object* v_params_x27_3253_ = _args[10];
lean_object* v_fst_3254_ = _args[11];
lean_object* v_discrs_x27_3255_ = _args[12];
lean_object* v_toPure_3256_ = _args[13];
lean_object* v_onRemaining_3257_ = _args[14];
lean_object* v_remaining_3258_ = _args[15];
lean_object* v_toBind_3259_ = _args[16];
lean_object* v_origAltTypes_3260_ = _args[17];
lean_object* v_alts_3261_ = _args[18];
lean_object* v___x_3262_ = _args[19];
lean_object* v___x_3263_ = _args[20];
lean_object* v_remaining_x27_3264_ = _args[21];
lean_object* v___f_3265_ = _args[22];
lean_object* v_altTypes_3266_ = _args[23];
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__49(v_splitterMatchInfo_3243_, v_fst_3244_, v_numParams_3245_, v_numDiscrs_3246_, v_altInfos_3247_, v_uElimPos_x3f_3248_, v_snd_3249_, v_overlaps_3250_, v_splitterName_3251_, v_matcherLevels_3252_, v_params_x27_3253_, v_fst_3254_, v_discrs_x27_3255_, v_toPure_3256_, v_onRemaining_3257_, v_remaining_3258_, v_toBind_3259_, v_origAltTypes_3260_, v_alts_3261_, v___x_3262_, v___x_3263_, v_remaining_x27_3264_, v___f_3265_, v_altTypes_3266_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object* v___x_3268_, lean_object* v_aux2_3269_, lean_object* v_inst_3270_, lean_object* v_toBind_3271_, lean_object* v___f_3272_, lean_object* v_____r_3273_){
_start:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3274_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3274_, 0, v___x_3268_);
lean_closure_set(v___x_3274_, 1, v_aux2_3269_);
v___x_3275_ = lean_apply_2(v_inst_3270_, lean_box(0), v___x_3274_);
v___x_3276_ = lean_apply_4(v_toBind_3271_, lean_box(0), lean_box(0), v___x_3275_, v___f_3272_);
return v___x_3276_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1(void){
_start:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3278_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0));
v___x_3279_ = l_Lean_stringToMessageData(v___x_3278_);
return v___x_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object* v___x_3280_, lean_object* v_params_x27_3281_, lean_object* v_fst_3282_, lean_object* v_discrs_x27_3283_, lean_object* v_fst_3284_, lean_object* v_numParams_3285_, lean_object* v_numDiscrs_3286_, lean_object* v_altInfos_3287_, lean_object* v_uElimPos_x3f_3288_, lean_object* v_snd_3289_, lean_object* v_overlaps_3290_, lean_object* v_matcherLevels_3291_, lean_object* v_toPure_3292_, lean_object* v_onRemaining_3293_, lean_object* v_remaining_3294_, lean_object* v_toBind_3295_, lean_object* v_origAltTypes_3296_, lean_object* v_alts_3297_, lean_object* v___x_3298_, lean_object* v___x_3299_, lean_object* v_remaining_x27_3300_, lean_object* v___f_3301_, lean_object* v_inst_3302_, lean_object* v___x_3303_, uint8_t v___x_3304_, lean_object* v_liftWith_3305_, lean_object* v_restoreM_3306_, lean_object* v_matchEqns_3307_){
_start:
{
lean_object* v_splitterName_3308_; lean_object* v_splitterMatchInfo_3309_; lean_object* v___x_3310_; lean_object* v_aux2_3311_; lean_object* v_aux2_3312_; lean_object* v_aux2_3313_; lean_object* v___x_3314_; lean_object* v___f_3315_; lean_object* v___f_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___f_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___f_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v_splitterName_3308_ = lean_ctor_get(v_matchEqns_3307_, 1);
lean_inc_n(v_splitterName_3308_, 2);
v_splitterMatchInfo_3309_ = lean_ctor_get(v_matchEqns_3307_, 2);
lean_inc_ref(v_splitterMatchInfo_3309_);
lean_dec_ref(v_matchEqns_3307_);
v___x_3310_ = l_Lean_mkConst(v_splitterName_3308_, v___x_3280_);
v_aux2_3311_ = l_Lean_mkAppN(v___x_3310_, v_params_x27_3281_);
lean_inc_ref(v_fst_3282_);
v_aux2_3312_ = l_Lean_Expr_app___override(v_aux2_3311_, v_fst_3282_);
v_aux2_3313_ = l_Lean_mkAppN(v_aux2_3312_, v_discrs_x27_3283_);
lean_inc_ref_n(v_aux2_3313_, 2);
v___x_3314_ = l_Lean_indentExpr(v_aux2_3313_);
lean_inc(v___x_3299_);
lean_inc_n(v_toBind_3295_, 3);
v___f_3315_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed), 24, 23);
lean_closure_set(v___f_3315_, 0, v_splitterMatchInfo_3309_);
lean_closure_set(v___f_3315_, 1, v_fst_3284_);
lean_closure_set(v___f_3315_, 2, v_numParams_3285_);
lean_closure_set(v___f_3315_, 3, v_numDiscrs_3286_);
lean_closure_set(v___f_3315_, 4, v_altInfos_3287_);
lean_closure_set(v___f_3315_, 5, v_uElimPos_x3f_3288_);
lean_closure_set(v___f_3315_, 6, v_snd_3289_);
lean_closure_set(v___f_3315_, 7, v_overlaps_3290_);
lean_closure_set(v___f_3315_, 8, v_splitterName_3308_);
lean_closure_set(v___f_3315_, 9, v_matcherLevels_3291_);
lean_closure_set(v___f_3315_, 10, v_params_x27_3281_);
lean_closure_set(v___f_3315_, 11, v_fst_3282_);
lean_closure_set(v___f_3315_, 12, v_discrs_x27_3283_);
lean_closure_set(v___f_3315_, 13, v_toPure_3292_);
lean_closure_set(v___f_3315_, 14, v_onRemaining_3293_);
lean_closure_set(v___f_3315_, 15, v_remaining_3294_);
lean_closure_set(v___f_3315_, 16, v_toBind_3295_);
lean_closure_set(v___f_3315_, 17, v_origAltTypes_3296_);
lean_closure_set(v___f_3315_, 18, v_alts_3297_);
lean_closure_set(v___f_3315_, 19, v___x_3298_);
lean_closure_set(v___f_3315_, 20, v___x_3299_);
lean_closure_set(v___f_3315_, 21, v_remaining_x27_3300_);
lean_closure_set(v___f_3315_, 22, v___f_3301_);
lean_inc(v_inst_3302_);
v___f_3316_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__50), 6, 5);
lean_closure_set(v___f_3316_, 0, v___x_3299_);
lean_closure_set(v___f_3316_, 1, v_aux2_3313_);
lean_closure_set(v___f_3316_, 2, v_inst_3302_);
lean_closure_set(v___f_3316_, 3, v_toBind_3295_);
lean_closure_set(v___f_3316_, 4, v___f_3315_);
v___x_3317_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
v___x_3318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
lean_ctor_set(v___x_3318_, 1, v___x_3314_);
v___x_3319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
lean_ctor_set(v___x_3319_, 1, v___x_3303_);
v___f_3320_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3320_, 0, v___x_3319_);
v___x_3321_ = lean_box(v___x_3304_);
v___x_3322_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3322_, 0, v_aux2_3313_);
lean_closure_set(v___x_3322_, 1, v___x_3321_);
v___x_3323_ = lean_apply_2(v_inst_3302_, lean_box(0), v___x_3322_);
v___f_3324_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3324_, 0, v___x_3323_);
lean_closure_set(v___f_3324_, 1, v___f_3320_);
v___x_3325_ = lean_apply_2(v_liftWith_3305_, lean_box(0), v___f_3324_);
v___x_3326_ = lean_apply_1(v_restoreM_3306_, lean_box(0));
v___x_3327_ = lean_apply_4(v_toBind_3295_, lean_box(0), lean_box(0), v___x_3325_, v___x_3326_);
v___x_3328_ = lean_apply_4(v_toBind_3295_, lean_box(0), lean_box(0), v___x_3327_, v___f_3316_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object** _args){
lean_object* v___x_3329_ = _args[0];
lean_object* v_params_x27_3330_ = _args[1];
lean_object* v_fst_3331_ = _args[2];
lean_object* v_discrs_x27_3332_ = _args[3];
lean_object* v_fst_3333_ = _args[4];
lean_object* v_numParams_3334_ = _args[5];
lean_object* v_numDiscrs_3335_ = _args[6];
lean_object* v_altInfos_3336_ = _args[7];
lean_object* v_uElimPos_x3f_3337_ = _args[8];
lean_object* v_snd_3338_ = _args[9];
lean_object* v_overlaps_3339_ = _args[10];
lean_object* v_matcherLevels_3340_ = _args[11];
lean_object* v_toPure_3341_ = _args[12];
lean_object* v_onRemaining_3342_ = _args[13];
lean_object* v_remaining_3343_ = _args[14];
lean_object* v_toBind_3344_ = _args[15];
lean_object* v_origAltTypes_3345_ = _args[16];
lean_object* v_alts_3346_ = _args[17];
lean_object* v___x_3347_ = _args[18];
lean_object* v___x_3348_ = _args[19];
lean_object* v_remaining_x27_3349_ = _args[20];
lean_object* v___f_3350_ = _args[21];
lean_object* v_inst_3351_ = _args[22];
lean_object* v___x_3352_ = _args[23];
lean_object* v___x_3353_ = _args[24];
lean_object* v_liftWith_3354_ = _args[25];
lean_object* v_restoreM_3355_ = _args[26];
lean_object* v_matchEqns_3356_ = _args[27];
_start:
{
uint8_t v___x_14760__boxed_3357_; lean_object* v_res_3358_; 
v___x_14760__boxed_3357_ = lean_unbox(v___x_3353_);
v_res_3358_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__53(v___x_3329_, v_params_x27_3330_, v_fst_3331_, v_discrs_x27_3332_, v_fst_3333_, v_numParams_3334_, v_numDiscrs_3335_, v_altInfos_3336_, v_uElimPos_x3f_3337_, v_snd_3338_, v_overlaps_3339_, v_matcherLevels_3340_, v_toPure_3341_, v_onRemaining_3342_, v_remaining_3343_, v_toBind_3344_, v_origAltTypes_3345_, v_alts_3346_, v___x_3347_, v___x_3348_, v_remaining_x27_3349_, v___f_3350_, v_inst_3351_, v___x_3352_, v___x_14760__boxed_3357_, v_liftWith_3354_, v_restoreM_3355_, v_matchEqns_3356_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object* v___x_3359_, lean_object* v_params_x27_3360_, lean_object* v_fst_3361_, lean_object* v_discrs_x27_3362_, lean_object* v_fst_3363_, lean_object* v_numParams_3364_, lean_object* v_numDiscrs_3365_, lean_object* v_altInfos_3366_, lean_object* v_uElimPos_x3f_3367_, lean_object* v_snd_3368_, lean_object* v_overlaps_3369_, lean_object* v_matcherLevels_3370_, lean_object* v_toPure_3371_, lean_object* v_onRemaining_3372_, lean_object* v_remaining_3373_, lean_object* v_toBind_3374_, lean_object* v_alts_3375_, lean_object* v___x_3376_, lean_object* v___x_3377_, lean_object* v_remaining_x27_3378_, lean_object* v___f_3379_, lean_object* v_inst_3380_, lean_object* v___x_3381_, uint8_t v___x_3382_, lean_object* v_liftWith_3383_, lean_object* v_restoreM_3384_, lean_object* v_matcherName_3385_, lean_object* v_origAltTypes_3386_){
_start:
{
lean_object* v___x_3387_; lean_object* v___f_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3387_ = lean_box(v___x_3382_);
lean_inc(v_inst_3380_);
lean_inc(v_toBind_3374_);
v___f_3388_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed), 28, 27);
lean_closure_set(v___f_3388_, 0, v___x_3359_);
lean_closure_set(v___f_3388_, 1, v_params_x27_3360_);
lean_closure_set(v___f_3388_, 2, v_fst_3361_);
lean_closure_set(v___f_3388_, 3, v_discrs_x27_3362_);
lean_closure_set(v___f_3388_, 4, v_fst_3363_);
lean_closure_set(v___f_3388_, 5, v_numParams_3364_);
lean_closure_set(v___f_3388_, 6, v_numDiscrs_3365_);
lean_closure_set(v___f_3388_, 7, v_altInfos_3366_);
lean_closure_set(v___f_3388_, 8, v_uElimPos_x3f_3367_);
lean_closure_set(v___f_3388_, 9, v_snd_3368_);
lean_closure_set(v___f_3388_, 10, v_overlaps_3369_);
lean_closure_set(v___f_3388_, 11, v_matcherLevels_3370_);
lean_closure_set(v___f_3388_, 12, v_toPure_3371_);
lean_closure_set(v___f_3388_, 13, v_onRemaining_3372_);
lean_closure_set(v___f_3388_, 14, v_remaining_3373_);
lean_closure_set(v___f_3388_, 15, v_toBind_3374_);
lean_closure_set(v___f_3388_, 16, v_origAltTypes_3386_);
lean_closure_set(v___f_3388_, 17, v_alts_3375_);
lean_closure_set(v___f_3388_, 18, v___x_3376_);
lean_closure_set(v___f_3388_, 19, v___x_3377_);
lean_closure_set(v___f_3388_, 20, v_remaining_x27_3378_);
lean_closure_set(v___f_3388_, 21, v___f_3379_);
lean_closure_set(v___f_3388_, 22, v_inst_3380_);
lean_closure_set(v___f_3388_, 23, v___x_3381_);
lean_closure_set(v___f_3388_, 24, v___x_3387_);
lean_closure_set(v___f_3388_, 25, v_liftWith_3383_);
lean_closure_set(v___f_3388_, 26, v_restoreM_3384_);
v___x_3389_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_getEquationsFor___boxed), 6, 1);
lean_closure_set(v___x_3389_, 0, v_matcherName_3385_);
v___x_3390_ = lean_apply_2(v_inst_3380_, lean_box(0), v___x_3389_);
v___x_3391_ = lean_apply_4(v_toBind_3374_, lean_box(0), lean_box(0), v___x_3390_, v___f_3388_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object** _args){
lean_object* v___x_3392_ = _args[0];
lean_object* v_params_x27_3393_ = _args[1];
lean_object* v_fst_3394_ = _args[2];
lean_object* v_discrs_x27_3395_ = _args[3];
lean_object* v_fst_3396_ = _args[4];
lean_object* v_numParams_3397_ = _args[5];
lean_object* v_numDiscrs_3398_ = _args[6];
lean_object* v_altInfos_3399_ = _args[7];
lean_object* v_uElimPos_x3f_3400_ = _args[8];
lean_object* v_snd_3401_ = _args[9];
lean_object* v_overlaps_3402_ = _args[10];
lean_object* v_matcherLevels_3403_ = _args[11];
lean_object* v_toPure_3404_ = _args[12];
lean_object* v_onRemaining_3405_ = _args[13];
lean_object* v_remaining_3406_ = _args[14];
lean_object* v_toBind_3407_ = _args[15];
lean_object* v_alts_3408_ = _args[16];
lean_object* v___x_3409_ = _args[17];
lean_object* v___x_3410_ = _args[18];
lean_object* v_remaining_x27_3411_ = _args[19];
lean_object* v___f_3412_ = _args[20];
lean_object* v_inst_3413_ = _args[21];
lean_object* v___x_3414_ = _args[22];
lean_object* v___x_3415_ = _args[23];
lean_object* v_liftWith_3416_ = _args[24];
lean_object* v_restoreM_3417_ = _args[25];
lean_object* v_matcherName_3418_ = _args[26];
lean_object* v_origAltTypes_3419_ = _args[27];
_start:
{
uint8_t v___x_14822__boxed_3420_; lean_object* v_res_3421_; 
v___x_14822__boxed_3420_ = lean_unbox(v___x_3415_);
v_res_3421_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__51(v___x_3392_, v_params_x27_3393_, v_fst_3394_, v_discrs_x27_3395_, v_fst_3396_, v_numParams_3397_, v_numDiscrs_3398_, v_altInfos_3399_, v_uElimPos_x3f_3400_, v_snd_3401_, v_overlaps_3402_, v_matcherLevels_3403_, v_toPure_3404_, v_onRemaining_3405_, v_remaining_3406_, v_toBind_3407_, v_alts_3408_, v___x_3409_, v___x_3410_, v_remaining_x27_3411_, v___f_3412_, v_inst_3413_, v___x_3414_, v___x_14822__boxed_3420_, v_liftWith_3416_, v_restoreM_3417_, v_matcherName_3418_, v_origAltTypes_3419_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object* v_alts_3422_, lean_object* v_toPure_3423_, lean_object* v_toBind_3424_, lean_object* v___f_3425_, lean_object* v___x_3426_, lean_object* v___x_3427_, lean_object* v_inst_3428_, lean_object* v___x_3429_, lean_object* v_toMonadExceptOf_3430_, uint8_t v___x_3431_, lean_object* v_onAlt_3432_, lean_object* v___f_3433_, lean_object* v_fst_3434_, lean_object* v_inst_3435_, lean_object* v_inst_3436_, lean_object* v_numDiscrEqs_3437_, lean_object* v___x_3438_, lean_object* v_params_x27_3439_, lean_object* v_fst_3440_, lean_object* v_discrs_x27_3441_, lean_object* v_fst_3442_, lean_object* v_numParams_3443_, lean_object* v_numDiscrs_3444_, lean_object* v_altInfos_3445_, lean_object* v_uElimPos_x3f_3446_, lean_object* v_snd_3447_, lean_object* v_overlaps_3448_, lean_object* v_matcherLevels_3449_, lean_object* v_onRemaining_3450_, lean_object* v_remaining_3451_, lean_object* v_remaining_x27_3452_, lean_object* v___x_3453_, uint8_t v___x_3454_, lean_object* v_liftWith_3455_, lean_object* v_restoreM_3456_, lean_object* v_matcherName_3457_, lean_object* v_aux1_3458_, lean_object* v_____r_3459_){
_start:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___f_3462_; lean_object* v___x_3463_; lean_object* v___f_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
v___x_3460_ = lean_array_get_size(v_alts_3422_);
v___x_3461_ = lean_box(v___x_3431_);
lean_inc_n(v_inst_3428_, 2);
lean_inc(v___x_3426_);
lean_inc_n(v_toBind_3424_, 2);
lean_inc(v_toPure_3423_);
v___f_3462_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed), 20, 16);
lean_closure_set(v___f_3462_, 0, v___x_3460_);
lean_closure_set(v___f_3462_, 1, v_toPure_3423_);
lean_closure_set(v___f_3462_, 2, v_toBind_3424_);
lean_closure_set(v___f_3462_, 3, v___f_3425_);
lean_closure_set(v___f_3462_, 4, v___x_3426_);
lean_closure_set(v___f_3462_, 5, v___x_3427_);
lean_closure_set(v___f_3462_, 6, v_inst_3428_);
lean_closure_set(v___f_3462_, 7, v___x_3429_);
lean_closure_set(v___f_3462_, 8, v_toMonadExceptOf_3430_);
lean_closure_set(v___f_3462_, 9, v___x_3461_);
lean_closure_set(v___f_3462_, 10, v_onAlt_3432_);
lean_closure_set(v___f_3462_, 11, v___f_3433_);
lean_closure_set(v___f_3462_, 12, v_fst_3434_);
lean_closure_set(v___f_3462_, 13, v_inst_3435_);
lean_closure_set(v___f_3462_, 14, v_inst_3436_);
lean_closure_set(v___f_3462_, 15, v_numDiscrEqs_3437_);
v___x_3463_ = lean_box(v___x_3454_);
v___f_3464_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed), 28, 27);
lean_closure_set(v___f_3464_, 0, v___x_3438_);
lean_closure_set(v___f_3464_, 1, v_params_x27_3439_);
lean_closure_set(v___f_3464_, 2, v_fst_3440_);
lean_closure_set(v___f_3464_, 3, v_discrs_x27_3441_);
lean_closure_set(v___f_3464_, 4, v_fst_3442_);
lean_closure_set(v___f_3464_, 5, v_numParams_3443_);
lean_closure_set(v___f_3464_, 6, v_numDiscrs_3444_);
lean_closure_set(v___f_3464_, 7, v_altInfos_3445_);
lean_closure_set(v___f_3464_, 8, v_uElimPos_x3f_3446_);
lean_closure_set(v___f_3464_, 9, v_snd_3447_);
lean_closure_set(v___f_3464_, 10, v_overlaps_3448_);
lean_closure_set(v___f_3464_, 11, v_matcherLevels_3449_);
lean_closure_set(v___f_3464_, 12, v_toPure_3423_);
lean_closure_set(v___f_3464_, 13, v_onRemaining_3450_);
lean_closure_set(v___f_3464_, 14, v_remaining_3451_);
lean_closure_set(v___f_3464_, 15, v_toBind_3424_);
lean_closure_set(v___f_3464_, 16, v_alts_3422_);
lean_closure_set(v___f_3464_, 17, v___x_3426_);
lean_closure_set(v___f_3464_, 18, v___x_3460_);
lean_closure_set(v___f_3464_, 19, v_remaining_x27_3452_);
lean_closure_set(v___f_3464_, 20, v___f_3462_);
lean_closure_set(v___f_3464_, 21, v_inst_3428_);
lean_closure_set(v___f_3464_, 22, v___x_3453_);
lean_closure_set(v___f_3464_, 23, v___x_3463_);
lean_closure_set(v___f_3464_, 24, v_liftWith_3455_);
lean_closure_set(v___f_3464_, 25, v_restoreM_3456_);
lean_closure_set(v___f_3464_, 26, v_matcherName_3457_);
v___x_3465_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3465_, 0, v___x_3460_);
lean_closure_set(v___x_3465_, 1, v_aux1_3458_);
v___x_3466_ = lean_apply_2(v_inst_3428_, lean_box(0), v___x_3465_);
v___x_3467_ = lean_apply_4(v_toBind_3424_, lean_box(0), lean_box(0), v___x_3466_, v___f_3464_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object** _args){
lean_object* v_alts_3468_ = _args[0];
lean_object* v_toPure_3469_ = _args[1];
lean_object* v_toBind_3470_ = _args[2];
lean_object* v___f_3471_ = _args[3];
lean_object* v___x_3472_ = _args[4];
lean_object* v___x_3473_ = _args[5];
lean_object* v_inst_3474_ = _args[6];
lean_object* v___x_3475_ = _args[7];
lean_object* v_toMonadExceptOf_3476_ = _args[8];
lean_object* v___x_3477_ = _args[9];
lean_object* v_onAlt_3478_ = _args[10];
lean_object* v___f_3479_ = _args[11];
lean_object* v_fst_3480_ = _args[12];
lean_object* v_inst_3481_ = _args[13];
lean_object* v_inst_3482_ = _args[14];
lean_object* v_numDiscrEqs_3483_ = _args[15];
lean_object* v___x_3484_ = _args[16];
lean_object* v_params_x27_3485_ = _args[17];
lean_object* v_fst_3486_ = _args[18];
lean_object* v_discrs_x27_3487_ = _args[19];
lean_object* v_fst_3488_ = _args[20];
lean_object* v_numParams_3489_ = _args[21];
lean_object* v_numDiscrs_3490_ = _args[22];
lean_object* v_altInfos_3491_ = _args[23];
lean_object* v_uElimPos_x3f_3492_ = _args[24];
lean_object* v_snd_3493_ = _args[25];
lean_object* v_overlaps_3494_ = _args[26];
lean_object* v_matcherLevels_3495_ = _args[27];
lean_object* v_onRemaining_3496_ = _args[28];
lean_object* v_remaining_3497_ = _args[29];
lean_object* v_remaining_x27_3498_ = _args[30];
lean_object* v___x_3499_ = _args[31];
lean_object* v___x_3500_ = _args[32];
lean_object* v_liftWith_3501_ = _args[33];
lean_object* v_restoreM_3502_ = _args[34];
lean_object* v_matcherName_3503_ = _args[35];
lean_object* v_aux1_3504_ = _args[36];
lean_object* v_____r_3505_ = _args[37];
_start:
{
uint8_t v___x_14856__boxed_3506_; uint8_t v___x_14864__boxed_3507_; lean_object* v_res_3508_; 
v___x_14856__boxed_3506_ = lean_unbox(v___x_3477_);
v___x_14864__boxed_3507_ = lean_unbox(v___x_3500_);
v_res_3508_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__52(v_alts_3468_, v_toPure_3469_, v_toBind_3470_, v___f_3471_, v___x_3472_, v___x_3473_, v_inst_3474_, v___x_3475_, v_toMonadExceptOf_3476_, v___x_14856__boxed_3506_, v_onAlt_3478_, v___f_3479_, v_fst_3480_, v_inst_3481_, v_inst_3482_, v_numDiscrEqs_3483_, v___x_3484_, v_params_x27_3485_, v_fst_3486_, v_discrs_x27_3487_, v_fst_3488_, v_numParams_3489_, v_numDiscrs_3490_, v_altInfos_3491_, v_uElimPos_x3f_3492_, v_snd_3493_, v_overlaps_3494_, v_matcherLevels_3495_, v_onRemaining_3496_, v_remaining_3497_, v_remaining_x27_3498_, v___x_3499_, v___x_14864__boxed_3507_, v_liftWith_3501_, v_restoreM_3502_, v_matcherName_3503_, v_aux1_3504_, v_____r_3505_);
return v_res_3508_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; 
v___x_3510_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__0));
v___x_3511_ = l_Lean_stringToMessageData(v___x_3510_);
return v___x_3511_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3513_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__2));
v___x_3514_ = l_Lean_stringToMessageData(v___x_3513_);
return v___x_3514_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5(void){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3516_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__4));
v___x_3517_ = l_Lean_stringToMessageData(v___x_3516_);
return v___x_3517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object* v_numParams_3518_, lean_object* v_numDiscrs_3519_, lean_object* v_altInfos_3520_, lean_object* v_uElimPos_x3f_3521_, lean_object* v_snd_3522_, lean_object* v_overlaps_3523_, lean_object* v_matcherName_3524_, lean_object* v_matcherLevels_3525_, lean_object* v_params_x27_3526_, lean_object* v_fst_3527_, lean_object* v_discrs_x27_3528_, lean_object* v_toPure_3529_, lean_object* v_onRemaining_3530_, lean_object* v_remaining_3531_, lean_object* v_toBind_3532_, lean_object* v_inst_3533_, lean_object* v_alts_3534_, lean_object* v___f_3535_, uint8_t v___x_3536_, lean_object* v_inst_3537_, lean_object* v_remaining_x27_3538_, lean_object* v_onAlt_3539_, lean_object* v_inst_3540_, lean_object* v___f_3541_, lean_object* v_matcherApp_3542_, lean_object* v___x_3543_, uint8_t v_useSplitter_3544_, uint8_t v_isCasesOn_3545_, lean_object* v___f_3546_, lean_object* v___x_3547_, lean_object* v___x_3548_, lean_object* v_toMonadExceptOf_3549_, lean_object* v___f_3550_, lean_object* v_numDiscrEqs_3551_, lean_object* v_____s_3552_){
_start:
{
lean_object* v_snd_3553_; lean_object* v_fst_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3617_; 
v_snd_3553_ = lean_ctor_get(v_____s_3552_, 1);
v_fst_3554_ = lean_ctor_get(v_____s_3552_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v_____s_3552_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3556_ = v_____s_3552_;
v_isShared_3557_ = v_isSharedCheck_3617_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_snd_3553_);
lean_inc(v_fst_3554_);
lean_dec(v_____s_3552_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3617_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v_fst_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3615_; 
v_fst_3558_ = lean_ctor_get(v_snd_3553_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v_snd_3553_);
if (v_isSharedCheck_3615_ == 0)
{
lean_object* v_unused_3616_; 
v_unused_3616_ = lean_ctor_get(v_snd_3553_, 1);
lean_dec(v_unused_3616_);
v___x_3560_ = v_snd_3553_;
v_isShared_3561_ = v_isSharedCheck_3615_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_fst_3558_);
lean_dec(v_snd_3553_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3615_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___f_3562_; 
lean_inc(v_toBind_3532_);
lean_inc_ref(v_remaining_3531_);
lean_inc(v_onRemaining_3530_);
lean_inc(v_toPure_3529_);
lean_inc_ref(v_discrs_x27_3528_);
lean_inc_ref(v_fst_3527_);
lean_inc_ref(v_params_x27_3526_);
lean_inc_ref(v_matcherLevels_3525_);
lean_inc(v_matcherName_3524_);
lean_inc_ref(v_overlaps_3523_);
lean_inc_ref(v_snd_3522_);
lean_inc(v_uElimPos_x3f_3521_);
lean_inc_ref(v_altInfos_3520_);
lean_inc(v_numDiscrs_3519_);
lean_inc(v_numParams_3518_);
lean_inc(v_fst_3554_);
v___f_3562_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed), 17, 16);
lean_closure_set(v___f_3562_, 0, v_fst_3554_);
lean_closure_set(v___f_3562_, 1, v_numParams_3518_);
lean_closure_set(v___f_3562_, 2, v_numDiscrs_3519_);
lean_closure_set(v___f_3562_, 3, v_altInfos_3520_);
lean_closure_set(v___f_3562_, 4, v_uElimPos_x3f_3521_);
lean_closure_set(v___f_3562_, 5, v_snd_3522_);
lean_closure_set(v___f_3562_, 6, v_overlaps_3523_);
lean_closure_set(v___f_3562_, 7, v_matcherName_3524_);
lean_closure_set(v___f_3562_, 8, v_matcherLevels_3525_);
lean_closure_set(v___f_3562_, 9, v_params_x27_3526_);
lean_closure_set(v___f_3562_, 10, v_fst_3527_);
lean_closure_set(v___f_3562_, 11, v_discrs_x27_3528_);
lean_closure_set(v___f_3562_, 12, v_toPure_3529_);
lean_closure_set(v___f_3562_, 13, v_onRemaining_3530_);
lean_closure_set(v___f_3562_, 14, v_remaining_3531_);
lean_closure_set(v___f_3562_, 15, v_toBind_3532_);
if (v_useSplitter_3544_ == 0)
{
lean_del_object(v___x_3556_);
lean_dec(v_fst_3554_);
lean_dec(v_numDiscrEqs_3551_);
lean_dec(v___f_3550_);
lean_dec_ref(v_toMonadExceptOf_3549_);
lean_dec(v___x_3548_);
lean_dec(v___x_3547_);
lean_dec(v___f_3546_);
lean_dec_ref(v_remaining_3531_);
lean_dec(v_onRemaining_3530_);
lean_dec_ref(v_overlaps_3523_);
lean_dec_ref(v_snd_3522_);
lean_dec(v_uElimPos_x3f_3521_);
lean_dec_ref(v_altInfos_3520_);
lean_dec(v_numDiscrs_3519_);
lean_dec(v_numParams_3518_);
goto v___jp_3563_;
}
else
{
if (v_isCasesOn_3545_ == 0)
{
lean_object* v_liftWith_3588_; lean_object* v_restoreM_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v_aux1_3592_; lean_object* v_aux1_3593_; lean_object* v_aux1_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3598_; 
lean_dec_ref(v___f_3562_);
lean_del_object(v___x_3560_);
lean_dec_ref(v_matcherApp_3542_);
lean_dec(v___f_3541_);
lean_dec(v___f_3535_);
v_liftWith_3588_ = lean_ctor_get(v_inst_3533_, 0);
lean_inc(v_liftWith_3588_);
v_restoreM_3589_ = lean_ctor_get(v_inst_3533_, 1);
lean_inc(v_restoreM_3589_);
lean_inc_ref(v_matcherLevels_3525_);
v___x_3590_ = lean_array_to_list(v_matcherLevels_3525_);
lean_inc(v___x_3590_);
lean_inc(v_matcherName_3524_);
v___x_3591_ = l_Lean_mkConst(v_matcherName_3524_, v___x_3590_);
v_aux1_3592_ = l_Lean_mkAppN(v___x_3591_, v_params_x27_3526_);
lean_inc_ref(v_fst_3527_);
v_aux1_3593_ = l_Lean_Expr_app___override(v_aux1_3592_, v_fst_3527_);
v_aux1_3594_ = l_Lean_mkAppN(v_aux1_3593_, v_discrs_x27_3528_);
lean_inc_ref(v_aux1_3594_);
v___x_3595_ = l_Lean_indentExpr(v_aux1_3594_);
v___x_3596_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
if (v_isShared_3557_ == 0)
{
lean_ctor_set_tag(v___x_3556_, 7);
lean_ctor_set(v___x_3556_, 1, v___x_3595_);
lean_ctor_set(v___x_3556_, 0, v___x_3596_);
v___x_3598_ = v___x_3556_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3596_);
lean_ctor_set(v_reuseFailAlloc_3614_, 1, v___x_3595_);
v___x_3598_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___f_3601_; uint8_t v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___f_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___f_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3599_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_3600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3598_);
lean_ctor_set(v___x_3600_, 1, v___x_3599_);
v___f_3601_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3601_, 0, v___x_3600_);
v___x_3602_ = 0;
v___x_3603_ = lean_box(v___x_3536_);
v___x_3604_ = lean_box(v___x_3602_);
lean_inc_ref(v_aux1_3594_);
lean_inc(v_restoreM_3589_);
lean_inc(v_liftWith_3588_);
lean_inc(v_inst_3537_);
lean_inc_n(v_toBind_3532_, 2);
v___f_3605_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed), 38, 37);
lean_closure_set(v___f_3605_, 0, v_alts_3534_);
lean_closure_set(v___f_3605_, 1, v_toPure_3529_);
lean_closure_set(v___f_3605_, 2, v_toBind_3532_);
lean_closure_set(v___f_3605_, 3, v___f_3546_);
lean_closure_set(v___f_3605_, 4, v___x_3543_);
lean_closure_set(v___f_3605_, 5, v___x_3547_);
lean_closure_set(v___f_3605_, 6, v_inst_3537_);
lean_closure_set(v___f_3605_, 7, v___x_3548_);
lean_closure_set(v___f_3605_, 8, v_toMonadExceptOf_3549_);
lean_closure_set(v___f_3605_, 9, v___x_3603_);
lean_closure_set(v___f_3605_, 10, v_onAlt_3539_);
lean_closure_set(v___f_3605_, 11, v___f_3550_);
lean_closure_set(v___f_3605_, 12, v_fst_3558_);
lean_closure_set(v___f_3605_, 13, v_inst_3533_);
lean_closure_set(v___f_3605_, 14, v_inst_3540_);
lean_closure_set(v___f_3605_, 15, v_numDiscrEqs_3551_);
lean_closure_set(v___f_3605_, 16, v___x_3590_);
lean_closure_set(v___f_3605_, 17, v_params_x27_3526_);
lean_closure_set(v___f_3605_, 18, v_fst_3527_);
lean_closure_set(v___f_3605_, 19, v_discrs_x27_3528_);
lean_closure_set(v___f_3605_, 20, v_fst_3554_);
lean_closure_set(v___f_3605_, 21, v_numParams_3518_);
lean_closure_set(v___f_3605_, 22, v_numDiscrs_3519_);
lean_closure_set(v___f_3605_, 23, v_altInfos_3520_);
lean_closure_set(v___f_3605_, 24, v_uElimPos_x3f_3521_);
lean_closure_set(v___f_3605_, 25, v_snd_3522_);
lean_closure_set(v___f_3605_, 26, v_overlaps_3523_);
lean_closure_set(v___f_3605_, 27, v_matcherLevels_3525_);
lean_closure_set(v___f_3605_, 28, v_onRemaining_3530_);
lean_closure_set(v___f_3605_, 29, v_remaining_3531_);
lean_closure_set(v___f_3605_, 30, v_remaining_x27_3538_);
lean_closure_set(v___f_3605_, 31, v___x_3599_);
lean_closure_set(v___f_3605_, 32, v___x_3604_);
lean_closure_set(v___f_3605_, 33, v_liftWith_3588_);
lean_closure_set(v___f_3605_, 34, v_restoreM_3589_);
lean_closure_set(v___f_3605_, 35, v_matcherName_3524_);
lean_closure_set(v___f_3605_, 36, v_aux1_3594_);
v___x_3606_ = lean_box(v___x_3602_);
v___x_3607_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3607_, 0, v_aux1_3594_);
lean_closure_set(v___x_3607_, 1, v___x_3606_);
v___x_3608_ = lean_apply_2(v_inst_3537_, lean_box(0), v___x_3607_);
v___f_3609_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3609_, 0, v___x_3608_);
lean_closure_set(v___f_3609_, 1, v___f_3601_);
v___x_3610_ = lean_apply_2(v_liftWith_3588_, lean_box(0), v___f_3609_);
v___x_3611_ = lean_apply_1(v_restoreM_3589_, lean_box(0));
v___x_3612_ = lean_apply_4(v_toBind_3532_, lean_box(0), lean_box(0), v___x_3610_, v___x_3611_);
v___x_3613_ = lean_apply_4(v_toBind_3532_, lean_box(0), lean_box(0), v___x_3612_, v___f_3605_);
return v___x_3613_;
}
}
else
{
lean_del_object(v___x_3556_);
lean_dec(v_fst_3554_);
lean_dec(v_numDiscrEqs_3551_);
lean_dec(v___f_3550_);
lean_dec_ref(v_toMonadExceptOf_3549_);
lean_dec(v___x_3548_);
lean_dec(v___x_3547_);
lean_dec(v___f_3546_);
lean_dec_ref(v_remaining_3531_);
lean_dec(v_onRemaining_3530_);
lean_dec_ref(v_overlaps_3523_);
lean_dec_ref(v_snd_3522_);
lean_dec(v_uElimPos_x3f_3521_);
lean_dec_ref(v_altInfos_3520_);
lean_dec(v_numDiscrs_3519_);
lean_dec(v_numParams_3518_);
goto v___jp_3563_;
}
}
v___jp_3563_:
{
lean_object* v_liftWith_3564_; lean_object* v_restoreM_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v_aux_3568_; lean_object* v_aux_3569_; lean_object* v_aux_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___f_3573_; lean_object* v___x_3574_; lean_object* v___x_3576_; 
v_liftWith_3564_ = lean_ctor_get(v_inst_3533_, 0);
lean_inc(v_liftWith_3564_);
v_restoreM_3565_ = lean_ctor_get(v_inst_3533_, 1);
lean_inc(v_restoreM_3565_);
v___x_3566_ = lean_array_to_list(v_matcherLevels_3525_);
v___x_3567_ = l_Lean_mkConst(v_matcherName_3524_, v___x_3566_);
v_aux_3568_ = l_Lean_mkAppN(v___x_3567_, v_params_x27_3526_);
lean_dec_ref(v_params_x27_3526_);
v_aux_3569_ = l_Lean_Expr_app___override(v_aux_3568_, v_fst_3527_);
v_aux_3570_ = l_Lean_mkAppN(v_aux_3569_, v_discrs_x27_3528_);
lean_dec_ref(v_discrs_x27_3528_);
lean_inc_ref_n(v_aux_3570_, 2);
v___x_3571_ = l_Lean_indentExpr(v_aux_3570_);
v___x_3572_ = lean_box(v___x_3536_);
lean_inc(v_inst_3537_);
lean_inc(v_toBind_3532_);
v___f_3573_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed), 17, 16);
lean_closure_set(v___f_3573_, 0, v_alts_3534_);
lean_closure_set(v___f_3573_, 1, v_toPure_3529_);
lean_closure_set(v___f_3573_, 2, v_toBind_3532_);
lean_closure_set(v___f_3573_, 3, v___f_3535_);
lean_closure_set(v___f_3573_, 4, v___x_3572_);
lean_closure_set(v___f_3573_, 5, v_inst_3537_);
lean_closure_set(v___f_3573_, 6, v_remaining_x27_3538_);
lean_closure_set(v___f_3573_, 7, v_onAlt_3539_);
lean_closure_set(v___f_3573_, 8, v_inst_3533_);
lean_closure_set(v___f_3573_, 9, v_inst_3540_);
lean_closure_set(v___f_3573_, 10, v___f_3541_);
lean_closure_set(v___f_3573_, 11, v_fst_3558_);
lean_closure_set(v___f_3573_, 12, v_matcherApp_3542_);
lean_closure_set(v___f_3573_, 13, v___x_3543_);
lean_closure_set(v___f_3573_, 14, v___f_3562_);
lean_closure_set(v___f_3573_, 15, v_aux_3570_);
v___x_3574_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
if (v_isShared_3561_ == 0)
{
lean_ctor_set_tag(v___x_3560_, 7);
lean_ctor_set(v___x_3560_, 1, v___x_3571_);
lean_ctor_set(v___x_3560_, 0, v___x_3574_);
v___x_3576_ = v___x_3560_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v___x_3574_);
lean_ctor_set(v_reuseFailAlloc_3587_, 1, v___x_3571_);
v___x_3576_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
lean_object* v___f_3577_; uint8_t v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___f_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___f_3577_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3577_, 0, v___x_3576_);
v___x_3578_ = 0;
v___x_3579_ = lean_box(v___x_3578_);
v___x_3580_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_3580_, 0, v_aux_3570_);
lean_closure_set(v___x_3580_, 1, v___x_3579_);
v___x_3581_ = lean_apply_2(v_inst_3537_, lean_box(0), v___x_3580_);
v___f_3582_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3582_, 0, v___x_3581_);
lean_closure_set(v___f_3582_, 1, v___f_3577_);
v___x_3583_ = lean_apply_2(v_liftWith_3564_, lean_box(0), v___f_3582_);
v___x_3584_ = lean_apply_1(v_restoreM_3565_, lean_box(0));
lean_inc(v_toBind_3532_);
v___x_3585_ = lean_apply_4(v_toBind_3532_, lean_box(0), lean_box(0), v___x_3583_, v___x_3584_);
v___x_3586_ = lean_apply_4(v_toBind_3532_, lean_box(0), lean_box(0), v___x_3585_, v___f_3573_);
return v___x_3586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed(lean_object** _args){
lean_object* v_numParams_3618_ = _args[0];
lean_object* v_numDiscrs_3619_ = _args[1];
lean_object* v_altInfos_3620_ = _args[2];
lean_object* v_uElimPos_x3f_3621_ = _args[3];
lean_object* v_snd_3622_ = _args[4];
lean_object* v_overlaps_3623_ = _args[5];
lean_object* v_matcherName_3624_ = _args[6];
lean_object* v_matcherLevels_3625_ = _args[7];
lean_object* v_params_x27_3626_ = _args[8];
lean_object* v_fst_3627_ = _args[9];
lean_object* v_discrs_x27_3628_ = _args[10];
lean_object* v_toPure_3629_ = _args[11];
lean_object* v_onRemaining_3630_ = _args[12];
lean_object* v_remaining_3631_ = _args[13];
lean_object* v_toBind_3632_ = _args[14];
lean_object* v_inst_3633_ = _args[15];
lean_object* v_alts_3634_ = _args[16];
lean_object* v___f_3635_ = _args[17];
lean_object* v___x_3636_ = _args[18];
lean_object* v_inst_3637_ = _args[19];
lean_object* v_remaining_x27_3638_ = _args[20];
lean_object* v_onAlt_3639_ = _args[21];
lean_object* v_inst_3640_ = _args[22];
lean_object* v___f_3641_ = _args[23];
lean_object* v_matcherApp_3642_ = _args[24];
lean_object* v___x_3643_ = _args[25];
lean_object* v_useSplitter_3644_ = _args[26];
lean_object* v_isCasesOn_3645_ = _args[27];
lean_object* v___f_3646_ = _args[28];
lean_object* v___x_3647_ = _args[29];
lean_object* v___x_3648_ = _args[30];
lean_object* v_toMonadExceptOf_3649_ = _args[31];
lean_object* v___f_3650_ = _args[32];
lean_object* v_numDiscrEqs_3651_ = _args[33];
lean_object* v_____s_3652_ = _args[34];
_start:
{
uint8_t v___x_14934__boxed_3653_; uint8_t v_useSplitter_boxed_3654_; uint8_t v_isCasesOn_boxed_3655_; lean_object* v_res_3656_; 
v___x_14934__boxed_3653_ = lean_unbox(v___x_3636_);
v_useSplitter_boxed_3654_ = lean_unbox(v_useSplitter_3644_);
v_isCasesOn_boxed_3655_ = lean_unbox(v_isCasesOn_3645_);
v_res_3656_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__55(v_numParams_3618_, v_numDiscrs_3619_, v_altInfos_3620_, v_uElimPos_x3f_3621_, v_snd_3622_, v_overlaps_3623_, v_matcherName_3624_, v_matcherLevels_3625_, v_params_x27_3626_, v_fst_3627_, v_discrs_x27_3628_, v_toPure_3629_, v_onRemaining_3630_, v_remaining_3631_, v_toBind_3632_, v_inst_3633_, v_alts_3634_, v___f_3635_, v___x_14934__boxed_3653_, v_inst_3637_, v_remaining_x27_3638_, v_onAlt_3639_, v_inst_3640_, v___f_3641_, v_matcherApp_3642_, v___x_3643_, v_useSplitter_boxed_3654_, v_isCasesOn_boxed_3655_, v___f_3646_, v___x_3647_, v___x_3648_, v_toMonadExceptOf_3649_, v___f_3650_, v_numDiscrEqs_3651_, v_____s_3652_);
return v_res_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object* v_numParams_3657_, lean_object* v_numDiscrs_3658_, lean_object* v_altInfos_3659_, lean_object* v_uElimPos_x3f_3660_, lean_object* v_snd_3661_, lean_object* v_overlaps_3662_, lean_object* v_matcherName_3663_, lean_object* v_params_x27_3664_, lean_object* v_fst_3665_, lean_object* v_discrs_x27_3666_, lean_object* v_toPure_3667_, lean_object* v_onRemaining_3668_, lean_object* v_remaining_3669_, lean_object* v_toBind_3670_, lean_object* v_inst_3671_, lean_object* v_alts_3672_, lean_object* v___f_3673_, uint8_t v___x_3674_, lean_object* v_inst_3675_, lean_object* v_onAlt_3676_, lean_object* v_inst_3677_, lean_object* v___f_3678_, lean_object* v_matcherApp_3679_, uint8_t v_useSplitter_3680_, uint8_t v_isCasesOn_3681_, lean_object* v___f_3682_, lean_object* v___x_3683_, lean_object* v___x_3684_, lean_object* v_toMonadExceptOf_3685_, lean_object* v___f_3686_, lean_object* v_numDiscrEqs_3687_, lean_object* v_fst_3688_, lean_object* v___f_3689_, lean_object* v_matcherLevels_3690_){
_start:
{
lean_object* v___x_3691_; lean_object* v_remaining_x27_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___f_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; size_t v_sz_3703_; size_t v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3691_ = lean_unsigned_to_nat(0u);
v_remaining_x27_3692_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_3693_ = lean_box(v___x_3674_);
v___x_3694_ = lean_box(v_useSplitter_3680_);
v___x_3695_ = lean_box(v_isCasesOn_3681_);
lean_inc_ref(v_inst_3677_);
lean_inc(v_toBind_3670_);
lean_inc_ref(v_discrs_x27_3666_);
v___f_3696_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55___boxed), 35, 34);
lean_closure_set(v___f_3696_, 0, v_numParams_3657_);
lean_closure_set(v___f_3696_, 1, v_numDiscrs_3658_);
lean_closure_set(v___f_3696_, 2, v_altInfos_3659_);
lean_closure_set(v___f_3696_, 3, v_uElimPos_x3f_3660_);
lean_closure_set(v___f_3696_, 4, v_snd_3661_);
lean_closure_set(v___f_3696_, 5, v_overlaps_3662_);
lean_closure_set(v___f_3696_, 6, v_matcherName_3663_);
lean_closure_set(v___f_3696_, 7, v_matcherLevels_3690_);
lean_closure_set(v___f_3696_, 8, v_params_x27_3664_);
lean_closure_set(v___f_3696_, 9, v_fst_3665_);
lean_closure_set(v___f_3696_, 10, v_discrs_x27_3666_);
lean_closure_set(v___f_3696_, 11, v_toPure_3667_);
lean_closure_set(v___f_3696_, 12, v_onRemaining_3668_);
lean_closure_set(v___f_3696_, 13, v_remaining_3669_);
lean_closure_set(v___f_3696_, 14, v_toBind_3670_);
lean_closure_set(v___f_3696_, 15, v_inst_3671_);
lean_closure_set(v___f_3696_, 16, v_alts_3672_);
lean_closure_set(v___f_3696_, 17, v___f_3673_);
lean_closure_set(v___f_3696_, 18, v___x_3693_);
lean_closure_set(v___f_3696_, 19, v_inst_3675_);
lean_closure_set(v___f_3696_, 20, v_remaining_x27_3692_);
lean_closure_set(v___f_3696_, 21, v_onAlt_3676_);
lean_closure_set(v___f_3696_, 22, v_inst_3677_);
lean_closure_set(v___f_3696_, 23, v___f_3678_);
lean_closure_set(v___f_3696_, 24, v_matcherApp_3679_);
lean_closure_set(v___f_3696_, 25, v___x_3691_);
lean_closure_set(v___f_3696_, 26, v___x_3694_);
lean_closure_set(v___f_3696_, 27, v___x_3695_);
lean_closure_set(v___f_3696_, 28, v___f_3682_);
lean_closure_set(v___f_3696_, 29, v___x_3683_);
lean_closure_set(v___f_3696_, 30, v___x_3684_);
lean_closure_set(v___f_3696_, 31, v_toMonadExceptOf_3685_);
lean_closure_set(v___f_3696_, 32, v___f_3686_);
lean_closure_set(v___f_3696_, 33, v_numDiscrEqs_3687_);
v___x_3697_ = l_Array_reverse___redArg(v_fst_3688_);
v___x_3698_ = lean_array_get_size(v___x_3697_);
v___x_3699_ = l_Array_toSubarray___redArg(v___x_3697_, v___x_3691_, v___x_3698_);
v___x_3700_ = l_Array_reverse___redArg(v_discrs_x27_3666_);
v___x_3701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3691_);
lean_ctor_set(v___x_3701_, 1, v___x_3699_);
v___x_3702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3702_, 0, v_remaining_x27_3692_);
lean_ctor_set(v___x_3702_, 1, v___x_3701_);
v_sz_3703_ = lean_array_size(v___x_3700_);
v___x_3704_ = ((size_t)0ULL);
v___x_3705_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3677_, v___x_3700_, v___f_3689_, v_sz_3703_, v___x_3704_, v___x_3702_);
v___x_3706_ = lean_apply_4(v_toBind_3670_, lean_box(0), lean_box(0), v___x_3705_, v___f_3696_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object** _args){
lean_object* v_numParams_3707_ = _args[0];
lean_object* v_numDiscrs_3708_ = _args[1];
lean_object* v_altInfos_3709_ = _args[2];
lean_object* v_uElimPos_x3f_3710_ = _args[3];
lean_object* v_snd_3711_ = _args[4];
lean_object* v_overlaps_3712_ = _args[5];
lean_object* v_matcherName_3713_ = _args[6];
lean_object* v_params_x27_3714_ = _args[7];
lean_object* v_fst_3715_ = _args[8];
lean_object* v_discrs_x27_3716_ = _args[9];
lean_object* v_toPure_3717_ = _args[10];
lean_object* v_onRemaining_3718_ = _args[11];
lean_object* v_remaining_3719_ = _args[12];
lean_object* v_toBind_3720_ = _args[13];
lean_object* v_inst_3721_ = _args[14];
lean_object* v_alts_3722_ = _args[15];
lean_object* v___f_3723_ = _args[16];
lean_object* v___x_3724_ = _args[17];
lean_object* v_inst_3725_ = _args[18];
lean_object* v_onAlt_3726_ = _args[19];
lean_object* v_inst_3727_ = _args[20];
lean_object* v___f_3728_ = _args[21];
lean_object* v_matcherApp_3729_ = _args[22];
lean_object* v_useSplitter_3730_ = _args[23];
lean_object* v_isCasesOn_3731_ = _args[24];
lean_object* v___f_3732_ = _args[25];
lean_object* v___x_3733_ = _args[26];
lean_object* v___x_3734_ = _args[27];
lean_object* v_toMonadExceptOf_3735_ = _args[28];
lean_object* v___f_3736_ = _args[29];
lean_object* v_numDiscrEqs_3737_ = _args[30];
lean_object* v_fst_3738_ = _args[31];
lean_object* v___f_3739_ = _args[32];
lean_object* v_matcherLevels_3740_ = _args[33];
_start:
{
uint8_t v___x_15090__boxed_3741_; uint8_t v_useSplitter_boxed_3742_; uint8_t v_isCasesOn_boxed_3743_; lean_object* v_res_3744_; 
v___x_15090__boxed_3741_ = lean_unbox(v___x_3724_);
v_useSplitter_boxed_3742_ = lean_unbox(v_useSplitter_3730_);
v_isCasesOn_boxed_3743_ = lean_unbox(v_isCasesOn_3731_);
v_res_3744_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__54(v_numParams_3707_, v_numDiscrs_3708_, v_altInfos_3709_, v_uElimPos_x3f_3710_, v_snd_3711_, v_overlaps_3712_, v_matcherName_3713_, v_params_x27_3714_, v_fst_3715_, v_discrs_x27_3716_, v_toPure_3717_, v_onRemaining_3718_, v_remaining_3719_, v_toBind_3720_, v_inst_3721_, v_alts_3722_, v___f_3723_, v___x_15090__boxed_3741_, v_inst_3725_, v_onAlt_3726_, v_inst_3727_, v___f_3728_, v_matcherApp_3729_, v_useSplitter_boxed_3742_, v_isCasesOn_boxed_3743_, v___f_3732_, v___x_3733_, v___x_3734_, v_toMonadExceptOf_3735_, v___f_3736_, v_numDiscrEqs_3737_, v_fst_3738_, v___f_3739_, v_matcherLevels_3740_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object* v___f_3745_, lean_object* v_matcherLevels_3746_){
_start:
{
lean_object* v___x_3747_; 
v___x_3747_ = lean_apply_1(v___f_3745_, v_matcherLevels_3746_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object* v_toMatcherInfo_3748_, lean_object* v_matcherName_3749_, lean_object* v_params_x27_3750_, lean_object* v_discrs_x27_3751_, lean_object* v_toPure_3752_, lean_object* v_onRemaining_3753_, lean_object* v_remaining_3754_, lean_object* v_toBind_3755_, lean_object* v_inst_3756_, lean_object* v_alts_3757_, lean_object* v___f_3758_, uint8_t v___x_3759_, lean_object* v_inst_3760_, lean_object* v_onAlt_3761_, lean_object* v_inst_3762_, lean_object* v___f_3763_, lean_object* v_matcherApp_3764_, uint8_t v_useSplitter_3765_, uint8_t v_isCasesOn_3766_, lean_object* v___f_3767_, lean_object* v___x_3768_, lean_object* v___x_3769_, lean_object* v_toMonadExceptOf_3770_, lean_object* v___f_3771_, lean_object* v_numDiscrEqs_3772_, lean_object* v___f_3773_, lean_object* v_matcherLevels_3774_, lean_object* v_____x_3775_){
_start:
{
lean_object* v_snd_3776_; lean_object* v_snd_3777_; lean_object* v_fst_3778_; lean_object* v_fst_3779_; lean_object* v_fst_3780_; lean_object* v_snd_3781_; lean_object* v_numParams_3782_; lean_object* v_numDiscrs_3783_; lean_object* v_altInfos_3784_; lean_object* v_uElimPos_x3f_3785_; lean_object* v_overlaps_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___f_3790_; 
v_snd_3776_ = lean_ctor_get(v_____x_3775_, 1);
lean_inc(v_snd_3776_);
v_snd_3777_ = lean_ctor_get(v_snd_3776_, 1);
lean_inc(v_snd_3777_);
v_fst_3778_ = lean_ctor_get(v_____x_3775_, 0);
lean_inc(v_fst_3778_);
lean_dec_ref(v_____x_3775_);
v_fst_3779_ = lean_ctor_get(v_snd_3776_, 0);
lean_inc(v_fst_3779_);
lean_dec(v_snd_3776_);
v_fst_3780_ = lean_ctor_get(v_snd_3777_, 0);
lean_inc(v_fst_3780_);
v_snd_3781_ = lean_ctor_get(v_snd_3777_, 1);
lean_inc(v_snd_3781_);
lean_dec(v_snd_3777_);
v_numParams_3782_ = lean_ctor_get(v_toMatcherInfo_3748_, 0);
lean_inc(v_numParams_3782_);
v_numDiscrs_3783_ = lean_ctor_get(v_toMatcherInfo_3748_, 1);
lean_inc(v_numDiscrs_3783_);
v_altInfos_3784_ = lean_ctor_get(v_toMatcherInfo_3748_, 2);
lean_inc_ref(v_altInfos_3784_);
v_uElimPos_x3f_3785_ = lean_ctor_get(v_toMatcherInfo_3748_, 3);
lean_inc_n(v_uElimPos_x3f_3785_, 2);
v_overlaps_3786_ = lean_ctor_get(v_toMatcherInfo_3748_, 5);
lean_inc_ref(v_overlaps_3786_);
lean_dec_ref(v_toMatcherInfo_3748_);
v___x_3787_ = lean_box(v___x_3759_);
v___x_3788_ = lean_box(v_useSplitter_3765_);
v___x_3789_ = lean_box(v_isCasesOn_3766_);
lean_inc(v_toBind_3755_);
lean_inc(v_toPure_3752_);
v___f_3790_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed), 34, 33);
lean_closure_set(v___f_3790_, 0, v_numParams_3782_);
lean_closure_set(v___f_3790_, 1, v_numDiscrs_3783_);
lean_closure_set(v___f_3790_, 2, v_altInfos_3784_);
lean_closure_set(v___f_3790_, 3, v_uElimPos_x3f_3785_);
lean_closure_set(v___f_3790_, 4, v_snd_3781_);
lean_closure_set(v___f_3790_, 5, v_overlaps_3786_);
lean_closure_set(v___f_3790_, 6, v_matcherName_3749_);
lean_closure_set(v___f_3790_, 7, v_params_x27_3750_);
lean_closure_set(v___f_3790_, 8, v_fst_3778_);
lean_closure_set(v___f_3790_, 9, v_discrs_x27_3751_);
lean_closure_set(v___f_3790_, 10, v_toPure_3752_);
lean_closure_set(v___f_3790_, 11, v_onRemaining_3753_);
lean_closure_set(v___f_3790_, 12, v_remaining_3754_);
lean_closure_set(v___f_3790_, 13, v_toBind_3755_);
lean_closure_set(v___f_3790_, 14, v_inst_3756_);
lean_closure_set(v___f_3790_, 15, v_alts_3757_);
lean_closure_set(v___f_3790_, 16, v___f_3758_);
lean_closure_set(v___f_3790_, 17, v___x_3787_);
lean_closure_set(v___f_3790_, 18, v_inst_3760_);
lean_closure_set(v___f_3790_, 19, v_onAlt_3761_);
lean_closure_set(v___f_3790_, 20, v_inst_3762_);
lean_closure_set(v___f_3790_, 21, v___f_3763_);
lean_closure_set(v___f_3790_, 22, v_matcherApp_3764_);
lean_closure_set(v___f_3790_, 23, v___x_3788_);
lean_closure_set(v___f_3790_, 24, v___x_3789_);
lean_closure_set(v___f_3790_, 25, v___f_3767_);
lean_closure_set(v___f_3790_, 26, v___x_3768_);
lean_closure_set(v___f_3790_, 27, v___x_3769_);
lean_closure_set(v___f_3790_, 28, v_toMonadExceptOf_3770_);
lean_closure_set(v___f_3790_, 29, v___f_3771_);
lean_closure_set(v___f_3790_, 30, v_numDiscrEqs_3772_);
lean_closure_set(v___f_3790_, 31, v_fst_3780_);
lean_closure_set(v___f_3790_, 32, v___f_3773_);
if (lean_obj_tag(v_uElimPos_x3f_3785_) == 0)
{
lean_object* v___f_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
lean_dec(v_fst_3779_);
v___f_3791_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3791_, 0, v___f_3790_);
v___x_3792_ = lean_apply_2(v_toPure_3752_, lean_box(0), v_matcherLevels_3774_);
v___x_3793_ = lean_apply_4(v_toBind_3755_, lean_box(0), lean_box(0), v___x_3792_, v___f_3791_);
return v___x_3793_;
}
else
{
lean_object* v_val_3794_; lean_object* v___f_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v_val_3794_ = lean_ctor_get(v_uElimPos_x3f_3785_, 0);
lean_inc(v_val_3794_);
lean_dec_ref_known(v_uElimPos_x3f_3785_, 1);
v___f_3795_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56), 2, 1);
lean_closure_set(v___f_3795_, 0, v___f_3790_);
v___x_3796_ = lean_array_set(v_matcherLevels_3774_, v_val_3794_, v_fst_3779_);
lean_dec(v_val_3794_);
v___x_3797_ = lean_apply_2(v_toPure_3752_, lean_box(0), v___x_3796_);
v___x_3798_ = lean_apply_4(v_toBind_3755_, lean_box(0), lean_box(0), v___x_3797_, v___f_3795_);
return v___x_3798_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_3799_ = _args[0];
lean_object* v_matcherName_3800_ = _args[1];
lean_object* v_params_x27_3801_ = _args[2];
lean_object* v_discrs_x27_3802_ = _args[3];
lean_object* v_toPure_3803_ = _args[4];
lean_object* v_onRemaining_3804_ = _args[5];
lean_object* v_remaining_3805_ = _args[6];
lean_object* v_toBind_3806_ = _args[7];
lean_object* v_inst_3807_ = _args[8];
lean_object* v_alts_3808_ = _args[9];
lean_object* v___f_3809_ = _args[10];
lean_object* v___x_3810_ = _args[11];
lean_object* v_inst_3811_ = _args[12];
lean_object* v_onAlt_3812_ = _args[13];
lean_object* v_inst_3813_ = _args[14];
lean_object* v___f_3814_ = _args[15];
lean_object* v_matcherApp_3815_ = _args[16];
lean_object* v_useSplitter_3816_ = _args[17];
lean_object* v_isCasesOn_3817_ = _args[18];
lean_object* v___f_3818_ = _args[19];
lean_object* v___x_3819_ = _args[20];
lean_object* v___x_3820_ = _args[21];
lean_object* v_toMonadExceptOf_3821_ = _args[22];
lean_object* v___f_3822_ = _args[23];
lean_object* v_numDiscrEqs_3823_ = _args[24];
lean_object* v___f_3824_ = _args[25];
lean_object* v_matcherLevels_3825_ = _args[26];
lean_object* v_____x_3826_ = _args[27];
_start:
{
uint8_t v___x_15162__boxed_3827_; uint8_t v_useSplitter_boxed_3828_; uint8_t v_isCasesOn_boxed_3829_; lean_object* v_res_3830_; 
v___x_15162__boxed_3827_ = lean_unbox(v___x_3810_);
v_useSplitter_boxed_3828_ = lean_unbox(v_useSplitter_3816_);
v_isCasesOn_boxed_3829_ = lean_unbox(v_isCasesOn_3817_);
v_res_3830_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__58(v_toMatcherInfo_3799_, v_matcherName_3800_, v_params_x27_3801_, v_discrs_x27_3802_, v_toPure_3803_, v_onRemaining_3804_, v_remaining_3805_, v_toBind_3806_, v_inst_3807_, v_alts_3808_, v___f_3809_, v___x_15162__boxed_3827_, v_inst_3811_, v_onAlt_3812_, v_inst_3813_, v___f_3814_, v_matcherApp_3815_, v_useSplitter_boxed_3828_, v_isCasesOn_boxed_3829_, v___f_3818_, v___x_3819_, v___x_3820_, v_toMonadExceptOf_3821_, v___f_3822_, v_numDiscrEqs_3823_, v___f_3824_, v_matcherLevels_3825_, v_____x_3826_);
return v_res_3830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object* v_toPure_3831_, lean_object* v_inst_3832_, lean_object* v_toBind_3833_, lean_object* v_toMatcherInfo_3834_, lean_object* v_inst_3835_, lean_object* v___f_3836_, lean_object* v_onMotive_3837_, lean_object* v_discrs_3838_, lean_object* v_inst_3839_, lean_object* v_matcherName_3840_, lean_object* v_params_x27_3841_, lean_object* v_onRemaining_3842_, lean_object* v_remaining_3843_, lean_object* v_inst_3844_, lean_object* v_alts_3845_, lean_object* v___f_3846_, lean_object* v_onAlt_3847_, lean_object* v___f_3848_, lean_object* v_matcherApp_3849_, uint8_t v_useSplitter_3850_, uint8_t v_isCasesOn_3851_, lean_object* v___f_3852_, lean_object* v___x_3853_, lean_object* v___x_3854_, lean_object* v_toMonadExceptOf_3855_, lean_object* v___f_3856_, lean_object* v_numDiscrEqs_3857_, lean_object* v___f_3858_, lean_object* v_matcherLevels_3859_, lean_object* v_motive_3860_, lean_object* v_discrs_x27_3861_){
_start:
{
lean_object* v___f_3862_; uint8_t v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___f_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
lean_inc_ref_n(v_inst_3835_, 2);
lean_inc_ref(v_discrs_x27_3861_);
lean_inc_ref(v_toMatcherInfo_3834_);
lean_inc_n(v_toBind_3833_, 2);
lean_inc(v_inst_3832_);
lean_inc(v_toPure_3831_);
v___f_3862_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed), 12, 10);
lean_closure_set(v___f_3862_, 0, v_toPure_3831_);
lean_closure_set(v___f_3862_, 1, v_inst_3832_);
lean_closure_set(v___f_3862_, 2, v_toBind_3833_);
lean_closure_set(v___f_3862_, 3, v_toMatcherInfo_3834_);
lean_closure_set(v___f_3862_, 4, v_discrs_x27_3861_);
lean_closure_set(v___f_3862_, 5, v_inst_3835_);
lean_closure_set(v___f_3862_, 6, v___f_3836_);
lean_closure_set(v___f_3862_, 7, v_onMotive_3837_);
lean_closure_set(v___f_3862_, 8, v_discrs_3838_);
lean_closure_set(v___f_3862_, 9, v_inst_3839_);
v___x_3863_ = 0;
v___x_3864_ = lean_box(v___x_3863_);
v___x_3865_ = lean_box(v_useSplitter_3850_);
v___x_3866_ = lean_box(v_isCasesOn_3851_);
lean_inc_ref(v_inst_3844_);
v___f_3867_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed), 28, 27);
lean_closure_set(v___f_3867_, 0, v_toMatcherInfo_3834_);
lean_closure_set(v___f_3867_, 1, v_matcherName_3840_);
lean_closure_set(v___f_3867_, 2, v_params_x27_3841_);
lean_closure_set(v___f_3867_, 3, v_discrs_x27_3861_);
lean_closure_set(v___f_3867_, 4, v_toPure_3831_);
lean_closure_set(v___f_3867_, 5, v_onRemaining_3842_);
lean_closure_set(v___f_3867_, 6, v_remaining_3843_);
lean_closure_set(v___f_3867_, 7, v_toBind_3833_);
lean_closure_set(v___f_3867_, 8, v_inst_3844_);
lean_closure_set(v___f_3867_, 9, v_alts_3845_);
lean_closure_set(v___f_3867_, 10, v___f_3846_);
lean_closure_set(v___f_3867_, 11, v___x_3864_);
lean_closure_set(v___f_3867_, 12, v_inst_3832_);
lean_closure_set(v___f_3867_, 13, v_onAlt_3847_);
lean_closure_set(v___f_3867_, 14, v_inst_3835_);
lean_closure_set(v___f_3867_, 15, v___f_3848_);
lean_closure_set(v___f_3867_, 16, v_matcherApp_3849_);
lean_closure_set(v___f_3867_, 17, v___x_3865_);
lean_closure_set(v___f_3867_, 18, v___x_3866_);
lean_closure_set(v___f_3867_, 19, v___f_3852_);
lean_closure_set(v___f_3867_, 20, v___x_3853_);
lean_closure_set(v___f_3867_, 21, v___x_3854_);
lean_closure_set(v___f_3867_, 22, v_toMonadExceptOf_3855_);
lean_closure_set(v___f_3867_, 23, v___f_3856_);
lean_closure_set(v___f_3867_, 24, v_numDiscrEqs_3857_);
lean_closure_set(v___f_3867_, 25, v___f_3858_);
lean_closure_set(v___f_3867_, 26, v_matcherLevels_3859_);
v___x_3868_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_3844_, v_inst_3835_, v_motive_3860_, v___f_3862_, v___x_3863_);
v___x_3869_ = lean_apply_4(v_toBind_3833_, lean_box(0), lean_box(0), v___x_3868_, v___f_3867_);
return v___x_3869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object** _args){
lean_object* v_toPure_3870_ = _args[0];
lean_object* v_inst_3871_ = _args[1];
lean_object* v_toBind_3872_ = _args[2];
lean_object* v_toMatcherInfo_3873_ = _args[3];
lean_object* v_inst_3874_ = _args[4];
lean_object* v___f_3875_ = _args[5];
lean_object* v_onMotive_3876_ = _args[6];
lean_object* v_discrs_3877_ = _args[7];
lean_object* v_inst_3878_ = _args[8];
lean_object* v_matcherName_3879_ = _args[9];
lean_object* v_params_x27_3880_ = _args[10];
lean_object* v_onRemaining_3881_ = _args[11];
lean_object* v_remaining_3882_ = _args[12];
lean_object* v_inst_3883_ = _args[13];
lean_object* v_alts_3884_ = _args[14];
lean_object* v___f_3885_ = _args[15];
lean_object* v_onAlt_3886_ = _args[16];
lean_object* v___f_3887_ = _args[17];
lean_object* v_matcherApp_3888_ = _args[18];
lean_object* v_useSplitter_3889_ = _args[19];
lean_object* v_isCasesOn_3890_ = _args[20];
lean_object* v___f_3891_ = _args[21];
lean_object* v___x_3892_ = _args[22];
lean_object* v___x_3893_ = _args[23];
lean_object* v_toMonadExceptOf_3894_ = _args[24];
lean_object* v___f_3895_ = _args[25];
lean_object* v_numDiscrEqs_3896_ = _args[26];
lean_object* v___f_3897_ = _args[27];
lean_object* v_matcherLevels_3898_ = _args[28];
lean_object* v_motive_3899_ = _args[29];
lean_object* v_discrs_x27_3900_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_3901_; uint8_t v_isCasesOn_boxed_3902_; lean_object* v_res_3903_; 
v_useSplitter_boxed_3901_ = lean_unbox(v_useSplitter_3889_);
v_isCasesOn_boxed_3902_ = lean_unbox(v_isCasesOn_3890_);
v_res_3903_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__57(v_toPure_3870_, v_inst_3871_, v_toBind_3872_, v_toMatcherInfo_3873_, v_inst_3874_, v___f_3875_, v_onMotive_3876_, v_discrs_3877_, v_inst_3878_, v_matcherName_3879_, v_params_x27_3880_, v_onRemaining_3881_, v_remaining_3882_, v_inst_3883_, v_alts_3884_, v___f_3885_, v_onAlt_3886_, v___f_3887_, v_matcherApp_3888_, v_useSplitter_boxed_3901_, v_isCasesOn_boxed_3902_, v___f_3891_, v___x_3892_, v___x_3893_, v_toMonadExceptOf_3894_, v___f_3895_, v_numDiscrEqs_3896_, v___f_3897_, v_matcherLevels_3898_, v_motive_3899_, v_discrs_x27_3900_);
return v_res_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object* v_toPure_3904_, lean_object* v_inst_3905_, lean_object* v_toBind_3906_, lean_object* v_toMatcherInfo_3907_, lean_object* v_inst_3908_, lean_object* v___f_3909_, lean_object* v_onMotive_3910_, lean_object* v_discrs_3911_, lean_object* v_inst_3912_, lean_object* v_matcherName_3913_, lean_object* v_onRemaining_3914_, lean_object* v_remaining_3915_, lean_object* v_inst_3916_, lean_object* v_alts_3917_, lean_object* v___f_3918_, lean_object* v_onAlt_3919_, lean_object* v___f_3920_, lean_object* v_matcherApp_3921_, uint8_t v_useSplitter_3922_, uint8_t v_isCasesOn_3923_, lean_object* v___f_3924_, lean_object* v___x_3925_, lean_object* v___x_3926_, lean_object* v_toMonadExceptOf_3927_, lean_object* v___f_3928_, lean_object* v_numDiscrEqs_3929_, lean_object* v___f_3930_, lean_object* v_matcherLevels_3931_, lean_object* v_motive_3932_, lean_object* v_onParams_3933_, lean_object* v_params_x27_3934_){
_start:
{
lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___f_3937_; size_t v_sz_3938_; size_t v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3935_ = lean_box(v_useSplitter_3922_);
v___x_3936_ = lean_box(v_isCasesOn_3923_);
lean_inc_ref(v_discrs_3911_);
lean_inc_ref(v_inst_3908_);
lean_inc(v_toBind_3906_);
v___f_3937_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed), 31, 30);
lean_closure_set(v___f_3937_, 0, v_toPure_3904_);
lean_closure_set(v___f_3937_, 1, v_inst_3905_);
lean_closure_set(v___f_3937_, 2, v_toBind_3906_);
lean_closure_set(v___f_3937_, 3, v_toMatcherInfo_3907_);
lean_closure_set(v___f_3937_, 4, v_inst_3908_);
lean_closure_set(v___f_3937_, 5, v___f_3909_);
lean_closure_set(v___f_3937_, 6, v_onMotive_3910_);
lean_closure_set(v___f_3937_, 7, v_discrs_3911_);
lean_closure_set(v___f_3937_, 8, v_inst_3912_);
lean_closure_set(v___f_3937_, 9, v_matcherName_3913_);
lean_closure_set(v___f_3937_, 10, v_params_x27_3934_);
lean_closure_set(v___f_3937_, 11, v_onRemaining_3914_);
lean_closure_set(v___f_3937_, 12, v_remaining_3915_);
lean_closure_set(v___f_3937_, 13, v_inst_3916_);
lean_closure_set(v___f_3937_, 14, v_alts_3917_);
lean_closure_set(v___f_3937_, 15, v___f_3918_);
lean_closure_set(v___f_3937_, 16, v_onAlt_3919_);
lean_closure_set(v___f_3937_, 17, v___f_3920_);
lean_closure_set(v___f_3937_, 18, v_matcherApp_3921_);
lean_closure_set(v___f_3937_, 19, v___x_3935_);
lean_closure_set(v___f_3937_, 20, v___x_3936_);
lean_closure_set(v___f_3937_, 21, v___f_3924_);
lean_closure_set(v___f_3937_, 22, v___x_3925_);
lean_closure_set(v___f_3937_, 23, v___x_3926_);
lean_closure_set(v___f_3937_, 24, v_toMonadExceptOf_3927_);
lean_closure_set(v___f_3937_, 25, v___f_3928_);
lean_closure_set(v___f_3937_, 26, v_numDiscrEqs_3929_);
lean_closure_set(v___f_3937_, 27, v___f_3930_);
lean_closure_set(v___f_3937_, 28, v_matcherLevels_3931_);
lean_closure_set(v___f_3937_, 29, v_motive_3932_);
v_sz_3938_ = lean_array_size(v_discrs_3911_);
v___x_3939_ = ((size_t)0ULL);
v___x_3940_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3908_, v_onParams_3933_, v_sz_3938_, v___x_3939_, v_discrs_3911_);
v___x_3941_ = lean_apply_4(v_toBind_3906_, lean_box(0), lean_box(0), v___x_3940_, v___f_3937_);
return v___x_3941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object** _args){
lean_object* v_toPure_3942_ = _args[0];
lean_object* v_inst_3943_ = _args[1];
lean_object* v_toBind_3944_ = _args[2];
lean_object* v_toMatcherInfo_3945_ = _args[3];
lean_object* v_inst_3946_ = _args[4];
lean_object* v___f_3947_ = _args[5];
lean_object* v_onMotive_3948_ = _args[6];
lean_object* v_discrs_3949_ = _args[7];
lean_object* v_inst_3950_ = _args[8];
lean_object* v_matcherName_3951_ = _args[9];
lean_object* v_onRemaining_3952_ = _args[10];
lean_object* v_remaining_3953_ = _args[11];
lean_object* v_inst_3954_ = _args[12];
lean_object* v_alts_3955_ = _args[13];
lean_object* v___f_3956_ = _args[14];
lean_object* v_onAlt_3957_ = _args[15];
lean_object* v___f_3958_ = _args[16];
lean_object* v_matcherApp_3959_ = _args[17];
lean_object* v_useSplitter_3960_ = _args[18];
lean_object* v_isCasesOn_3961_ = _args[19];
lean_object* v___f_3962_ = _args[20];
lean_object* v___x_3963_ = _args[21];
lean_object* v___x_3964_ = _args[22];
lean_object* v_toMonadExceptOf_3965_ = _args[23];
lean_object* v___f_3966_ = _args[24];
lean_object* v_numDiscrEqs_3967_ = _args[25];
lean_object* v___f_3968_ = _args[26];
lean_object* v_matcherLevels_3969_ = _args[27];
lean_object* v_motive_3970_ = _args[28];
lean_object* v_onParams_3971_ = _args[29];
lean_object* v_params_x27_3972_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_3973_; uint8_t v_isCasesOn_boxed_3974_; lean_object* v_res_3975_; 
v_useSplitter_boxed_3973_ = lean_unbox(v_useSplitter_3960_);
v_isCasesOn_boxed_3974_ = lean_unbox(v_isCasesOn_3961_);
v_res_3975_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__59(v_toPure_3942_, v_inst_3943_, v_toBind_3944_, v_toMatcherInfo_3945_, v_inst_3946_, v___f_3947_, v_onMotive_3948_, v_discrs_3949_, v_inst_3950_, v_matcherName_3951_, v_onRemaining_3952_, v_remaining_3953_, v_inst_3954_, v_alts_3955_, v___f_3956_, v_onAlt_3957_, v___f_3958_, v_matcherApp_3959_, v_useSplitter_boxed_3973_, v_isCasesOn_boxed_3974_, v___f_3962_, v___x_3963_, v___x_3964_, v_toMonadExceptOf_3965_, v___f_3966_, v_numDiscrEqs_3967_, v___f_3968_, v_matcherLevels_3969_, v_motive_3970_, v_onParams_3971_, v_params_x27_3972_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object* v_toPure_3976_, lean_object* v_inst_3977_, lean_object* v_toBind_3978_, lean_object* v_toMatcherInfo_3979_, lean_object* v_inst_3980_, lean_object* v___f_3981_, lean_object* v_onMotive_3982_, lean_object* v_discrs_3983_, lean_object* v_inst_3984_, lean_object* v_matcherName_3985_, lean_object* v_onRemaining_3986_, lean_object* v_remaining_3987_, lean_object* v_inst_3988_, lean_object* v_alts_3989_, lean_object* v___f_3990_, lean_object* v_onAlt_3991_, lean_object* v___f_3992_, lean_object* v_matcherApp_3993_, uint8_t v_useSplitter_3994_, uint8_t v_isCasesOn_3995_, lean_object* v___f_3996_, lean_object* v___x_3997_, lean_object* v___x_3998_, lean_object* v_toMonadExceptOf_3999_, lean_object* v___f_4000_, lean_object* v___f_4001_, lean_object* v_matcherLevels_4002_, lean_object* v_motive_4003_, lean_object* v_onParams_4004_, lean_object* v_params_4005_, lean_object* v_numDiscrEqs_4006_){
_start:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___f_4009_; size_t v_sz_4010_; size_t v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v___x_4007_ = lean_box(v_useSplitter_3994_);
v___x_4008_ = lean_box(v_isCasesOn_3995_);
lean_inc(v_onParams_4004_);
lean_inc_ref(v_inst_3980_);
lean_inc(v_toBind_3978_);
v___f_4009_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed), 31, 30);
lean_closure_set(v___f_4009_, 0, v_toPure_3976_);
lean_closure_set(v___f_4009_, 1, v_inst_3977_);
lean_closure_set(v___f_4009_, 2, v_toBind_3978_);
lean_closure_set(v___f_4009_, 3, v_toMatcherInfo_3979_);
lean_closure_set(v___f_4009_, 4, v_inst_3980_);
lean_closure_set(v___f_4009_, 5, v___f_3981_);
lean_closure_set(v___f_4009_, 6, v_onMotive_3982_);
lean_closure_set(v___f_4009_, 7, v_discrs_3983_);
lean_closure_set(v___f_4009_, 8, v_inst_3984_);
lean_closure_set(v___f_4009_, 9, v_matcherName_3985_);
lean_closure_set(v___f_4009_, 10, v_onRemaining_3986_);
lean_closure_set(v___f_4009_, 11, v_remaining_3987_);
lean_closure_set(v___f_4009_, 12, v_inst_3988_);
lean_closure_set(v___f_4009_, 13, v_alts_3989_);
lean_closure_set(v___f_4009_, 14, v___f_3990_);
lean_closure_set(v___f_4009_, 15, v_onAlt_3991_);
lean_closure_set(v___f_4009_, 16, v___f_3992_);
lean_closure_set(v___f_4009_, 17, v_matcherApp_3993_);
lean_closure_set(v___f_4009_, 18, v___x_4007_);
lean_closure_set(v___f_4009_, 19, v___x_4008_);
lean_closure_set(v___f_4009_, 20, v___f_3996_);
lean_closure_set(v___f_4009_, 21, v___x_3997_);
lean_closure_set(v___f_4009_, 22, v___x_3998_);
lean_closure_set(v___f_4009_, 23, v_toMonadExceptOf_3999_);
lean_closure_set(v___f_4009_, 24, v___f_4000_);
lean_closure_set(v___f_4009_, 25, v_numDiscrEqs_4006_);
lean_closure_set(v___f_4009_, 26, v___f_4001_);
lean_closure_set(v___f_4009_, 27, v_matcherLevels_4002_);
lean_closure_set(v___f_4009_, 28, v_motive_4003_);
lean_closure_set(v___f_4009_, 29, v_onParams_4004_);
v_sz_4010_ = lean_array_size(v_params_4005_);
v___x_4011_ = ((size_t)0ULL);
v___x_4012_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3980_, v_onParams_4004_, v_sz_4010_, v___x_4011_, v_params_4005_);
v___x_4013_ = lean_apply_4(v_toBind_3978_, lean_box(0), lean_box(0), v___x_4012_, v___f_4009_);
return v___x_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object** _args){
lean_object* v_toPure_4014_ = _args[0];
lean_object* v_inst_4015_ = _args[1];
lean_object* v_toBind_4016_ = _args[2];
lean_object* v_toMatcherInfo_4017_ = _args[3];
lean_object* v_inst_4018_ = _args[4];
lean_object* v___f_4019_ = _args[5];
lean_object* v_onMotive_4020_ = _args[6];
lean_object* v_discrs_4021_ = _args[7];
lean_object* v_inst_4022_ = _args[8];
lean_object* v_matcherName_4023_ = _args[9];
lean_object* v_onRemaining_4024_ = _args[10];
lean_object* v_remaining_4025_ = _args[11];
lean_object* v_inst_4026_ = _args[12];
lean_object* v_alts_4027_ = _args[13];
lean_object* v___f_4028_ = _args[14];
lean_object* v_onAlt_4029_ = _args[15];
lean_object* v___f_4030_ = _args[16];
lean_object* v_matcherApp_4031_ = _args[17];
lean_object* v_useSplitter_4032_ = _args[18];
lean_object* v_isCasesOn_4033_ = _args[19];
lean_object* v___f_4034_ = _args[20];
lean_object* v___x_4035_ = _args[21];
lean_object* v___x_4036_ = _args[22];
lean_object* v_toMonadExceptOf_4037_ = _args[23];
lean_object* v___f_4038_ = _args[24];
lean_object* v___f_4039_ = _args[25];
lean_object* v_matcherLevels_4040_ = _args[26];
lean_object* v_motive_4041_ = _args[27];
lean_object* v_onParams_4042_ = _args[28];
lean_object* v_params_4043_ = _args[29];
lean_object* v_numDiscrEqs_4044_ = _args[30];
_start:
{
uint8_t v_useSplitter_boxed_4045_; uint8_t v_isCasesOn_boxed_4046_; lean_object* v_res_4047_; 
v_useSplitter_boxed_4045_ = lean_unbox(v_useSplitter_4032_);
v_isCasesOn_boxed_4046_ = lean_unbox(v_isCasesOn_4033_);
v_res_4047_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__60(v_toPure_4014_, v_inst_4015_, v_toBind_4016_, v_toMatcherInfo_4017_, v_inst_4018_, v___f_4019_, v_onMotive_4020_, v_discrs_4021_, v_inst_4022_, v_matcherName_4023_, v_onRemaining_4024_, v_remaining_4025_, v_inst_4026_, v_alts_4027_, v___f_4028_, v_onAlt_4029_, v___f_4030_, v_matcherApp_4031_, v_useSplitter_boxed_4045_, v_isCasesOn_boxed_4046_, v___f_4034_, v___x_4035_, v___x_4036_, v_toMonadExceptOf_4037_, v___f_4038_, v___f_4039_, v_matcherLevels_4040_, v_motive_4041_, v_onParams_4042_, v_params_4043_, v_numDiscrEqs_4044_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object* v___f_4048_, lean_object* v_numDiscrEqs_4049_){
_start:
{
lean_object* v___x_4050_; 
v___x_4050_ = lean_apply_1(v___f_4048_, v_numDiscrEqs_4049_);
return v___x_4050_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1(void){
_start:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4052_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0));
v___x_4053_ = l_Lean_stringToMessageData(v___x_4052_);
return v___x_4053_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3(void){
_start:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4055_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2));
v___x_4056_ = l_Lean_stringToMessageData(v___x_4055_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object* v_matcherName_4057_, lean_object* v_inst_4058_, lean_object* v_inst_4059_, lean_object* v_toBind_4060_, lean_object* v___f_4061_, lean_object* v_toPure_4062_, lean_object* v___f_4063_, lean_object* v_____do__lift_4064_){
_start:
{
if (lean_obj_tag(v_____do__lift_4064_) == 0)
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
lean_dec(v___f_4063_);
lean_dec(v_toPure_4062_);
v___x_4065_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_4066_ = l_Lean_MessageData_ofName(v_matcherName_4057_);
v___x_4067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4065_);
lean_ctor_set(v___x_4067_, 1, v___x_4066_);
v___x_4068_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_4069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4067_);
lean_ctor_set(v___x_4069_, 1, v___x_4068_);
v___x_4070_ = l_Lean_throwError___redArg(v_inst_4058_, v_inst_4059_, v___x_4069_);
v___x_4071_ = lean_apply_4(v_toBind_4060_, lean_box(0), lean_box(0), v___x_4070_, v___f_4061_);
return v___x_4071_;
}
else
{
lean_object* v_val_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
lean_dec(v___f_4061_);
lean_dec_ref(v_inst_4059_);
lean_dec_ref(v_inst_4058_);
lean_dec(v_matcherName_4057_);
v_val_4072_ = lean_ctor_get(v_____do__lift_4064_, 0);
v___x_4073_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_4072_);
v___x_4074_ = lean_apply_2(v_toPure_4062_, lean_box(0), v___x_4073_);
v___x_4075_ = lean_apply_4(v_toBind_4060_, lean_box(0), lean_box(0), v___x_4074_, v___f_4063_);
return v___x_4075_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object* v_matcherName_4076_, lean_object* v_inst_4077_, lean_object* v_inst_4078_, lean_object* v_toBind_4079_, lean_object* v___f_4080_, lean_object* v_toPure_4081_, lean_object* v___f_4082_, lean_object* v_____do__lift_4083_){
_start:
{
lean_object* v_res_4084_; 
v_res_4084_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__63(v_matcherName_4076_, v_inst_4077_, v_inst_4078_, v_toBind_4079_, v___f_4080_, v_toPure_4081_, v___f_4082_, v_____do__lift_4083_);
lean_dec(v_____do__lift_4083_);
return v_res_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object* v_matcherApp_4085_, lean_object* v_toPure_4086_, lean_object* v_inst_4087_, lean_object* v_toBind_4088_, lean_object* v_inst_4089_, lean_object* v___f_4090_, lean_object* v_onMotive_4091_, lean_object* v_inst_4092_, lean_object* v_onRemaining_4093_, lean_object* v_inst_4094_, lean_object* v___f_4095_, lean_object* v_onAlt_4096_, lean_object* v___f_4097_, uint8_t v_useSplitter_4098_, lean_object* v___f_4099_, lean_object* v___x_4100_, lean_object* v___x_4101_, lean_object* v_toMonadExceptOf_4102_, lean_object* v___f_4103_, lean_object* v___f_4104_, lean_object* v_onParams_4105_, lean_object* v_inst_4106_, lean_object* v_____do__lift_4107_){
_start:
{
lean_object* v_toMatcherInfo_4108_; lean_object* v_matcherName_4109_; lean_object* v_matcherLevels_4110_; lean_object* v_params_4111_; lean_object* v_motive_4112_; lean_object* v_discrs_4113_; lean_object* v_alts_4114_; lean_object* v_remaining_4115_; uint8_t v_isCasesOn_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___f_4119_; 
v_toMatcherInfo_4108_ = lean_ctor_get(v_matcherApp_4085_, 0);
lean_inc_ref(v_toMatcherInfo_4108_);
v_matcherName_4109_ = lean_ctor_get(v_matcherApp_4085_, 1);
lean_inc_n(v_matcherName_4109_, 3);
v_matcherLevels_4110_ = lean_ctor_get(v_matcherApp_4085_, 2);
lean_inc_ref(v_matcherLevels_4110_);
v_params_4111_ = lean_ctor_get(v_matcherApp_4085_, 3);
lean_inc_ref(v_params_4111_);
v_motive_4112_ = lean_ctor_get(v_matcherApp_4085_, 4);
lean_inc_ref(v_motive_4112_);
v_discrs_4113_ = lean_ctor_get(v_matcherApp_4085_, 5);
lean_inc_ref(v_discrs_4113_);
v_alts_4114_ = lean_ctor_get(v_matcherApp_4085_, 6);
lean_inc_ref(v_alts_4114_);
v_remaining_4115_ = lean_ctor_get(v_matcherApp_4085_, 7);
lean_inc_ref(v_remaining_4115_);
v_isCasesOn_4116_ = l_Lean_isCasesOnRecursor(v_____do__lift_4107_, v_matcherName_4109_);
v___x_4117_ = lean_box(v_useSplitter_4098_);
v___x_4118_ = lean_box(v_isCasesOn_4116_);
lean_inc_ref(v_inst_4092_);
lean_inc_ref(v_inst_4089_);
lean_inc(v_toBind_4088_);
lean_inc(v_toPure_4086_);
v___f_4119_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed), 31, 30);
lean_closure_set(v___f_4119_, 0, v_toPure_4086_);
lean_closure_set(v___f_4119_, 1, v_inst_4087_);
lean_closure_set(v___f_4119_, 2, v_toBind_4088_);
lean_closure_set(v___f_4119_, 3, v_toMatcherInfo_4108_);
lean_closure_set(v___f_4119_, 4, v_inst_4089_);
lean_closure_set(v___f_4119_, 5, v___f_4090_);
lean_closure_set(v___f_4119_, 6, v_onMotive_4091_);
lean_closure_set(v___f_4119_, 7, v_discrs_4113_);
lean_closure_set(v___f_4119_, 8, v_inst_4092_);
lean_closure_set(v___f_4119_, 9, v_matcherName_4109_);
lean_closure_set(v___f_4119_, 10, v_onRemaining_4093_);
lean_closure_set(v___f_4119_, 11, v_remaining_4115_);
lean_closure_set(v___f_4119_, 12, v_inst_4094_);
lean_closure_set(v___f_4119_, 13, v_alts_4114_);
lean_closure_set(v___f_4119_, 14, v___f_4095_);
lean_closure_set(v___f_4119_, 15, v_onAlt_4096_);
lean_closure_set(v___f_4119_, 16, v___f_4097_);
lean_closure_set(v___f_4119_, 17, v_matcherApp_4085_);
lean_closure_set(v___f_4119_, 18, v___x_4117_);
lean_closure_set(v___f_4119_, 19, v___x_4118_);
lean_closure_set(v___f_4119_, 20, v___f_4099_);
lean_closure_set(v___f_4119_, 21, v___x_4100_);
lean_closure_set(v___f_4119_, 22, v___x_4101_);
lean_closure_set(v___f_4119_, 23, v_toMonadExceptOf_4102_);
lean_closure_set(v___f_4119_, 24, v___f_4103_);
lean_closure_set(v___f_4119_, 25, v___f_4104_);
lean_closure_set(v___f_4119_, 26, v_matcherLevels_4110_);
lean_closure_set(v___f_4119_, 27, v_motive_4112_);
lean_closure_set(v___f_4119_, 28, v_onParams_4105_);
lean_closure_set(v___f_4119_, 29, v_params_4111_);
if (v_isCasesOn_4116_ == 0)
{
lean_object* v___f_4120_; lean_object* v___f_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___f_4120_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4120_, 0, v___f_4119_);
lean_inc_ref(v___f_4120_);
lean_inc(v_toBind_4088_);
lean_inc_ref(v_inst_4089_);
lean_inc(v_matcherName_4109_);
v___f_4121_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed), 8, 7);
lean_closure_set(v___f_4121_, 0, v_matcherName_4109_);
lean_closure_set(v___f_4121_, 1, v_inst_4089_);
lean_closure_set(v___f_4121_, 2, v_inst_4092_);
lean_closure_set(v___f_4121_, 3, v_toBind_4088_);
lean_closure_set(v___f_4121_, 4, v___f_4120_);
lean_closure_set(v___f_4121_, 5, v_toPure_4086_);
lean_closure_set(v___f_4121_, 6, v___f_4120_);
v___x_4122_ = l_Lean_Meta_getMatcherInfo_x3f___redArg(v_inst_4089_, v_inst_4106_, v_matcherName_4109_);
v___x_4123_ = lean_apply_4(v_toBind_4088_, lean_box(0), lean_box(0), v___x_4122_, v___f_4121_);
return v___x_4123_;
}
else
{
lean_object* v___f_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; 
lean_dec(v_matcherName_4109_);
lean_dec_ref(v_inst_4106_);
lean_dec_ref(v_inst_4092_);
lean_dec_ref(v_inst_4089_);
v___f_4124_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4124_, 0, v___f_4119_);
v___x_4125_ = lean_unsigned_to_nat(0u);
v___x_4126_ = lean_apply_2(v_toPure_4086_, lean_box(0), v___x_4125_);
v___x_4127_ = lean_apply_4(v_toBind_4088_, lean_box(0), lean_box(0), v___x_4126_, v___f_4124_);
return v___x_4127_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object** _args){
lean_object* v_matcherApp_4128_ = _args[0];
lean_object* v_toPure_4129_ = _args[1];
lean_object* v_inst_4130_ = _args[2];
lean_object* v_toBind_4131_ = _args[3];
lean_object* v_inst_4132_ = _args[4];
lean_object* v___f_4133_ = _args[5];
lean_object* v_onMotive_4134_ = _args[6];
lean_object* v_inst_4135_ = _args[7];
lean_object* v_onRemaining_4136_ = _args[8];
lean_object* v_inst_4137_ = _args[9];
lean_object* v___f_4138_ = _args[10];
lean_object* v_onAlt_4139_ = _args[11];
lean_object* v___f_4140_ = _args[12];
lean_object* v_useSplitter_4141_ = _args[13];
lean_object* v___f_4142_ = _args[14];
lean_object* v___x_4143_ = _args[15];
lean_object* v___x_4144_ = _args[16];
lean_object* v_toMonadExceptOf_4145_ = _args[17];
lean_object* v___f_4146_ = _args[18];
lean_object* v___f_4147_ = _args[19];
lean_object* v_onParams_4148_ = _args[20];
lean_object* v_inst_4149_ = _args[21];
lean_object* v_____do__lift_4150_ = _args[22];
_start:
{
uint8_t v_useSplitter_boxed_4151_; lean_object* v_res_4152_; 
v_useSplitter_boxed_4151_ = lean_unbox(v_useSplitter_4141_);
v_res_4152_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__64(v_matcherApp_4128_, v_toPure_4129_, v_inst_4130_, v_toBind_4131_, v_inst_4132_, v___f_4133_, v_onMotive_4134_, v_inst_4135_, v_onRemaining_4136_, v_inst_4137_, v___f_4138_, v_onAlt_4139_, v___f_4140_, v_useSplitter_boxed_4151_, v___f_4142_, v___x_4143_, v___x_4144_, v_toMonadExceptOf_4145_, v___f_4146_, v___f_4147_, v_onParams_4148_, v_inst_4149_, v_____do__lift_4150_);
return v_res_4152_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_4153_; 
v___x_4153_ = l_Subarray_empty___redArg();
return v___x_4153_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_4154_; lean_object* v___x_4155_; 
v___x_4154_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4154_);
lean_ctor_set(v___x_4155_, 1, v___x_4154_);
return v___x_4155_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v___x_4156_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__1);
v___x_4157_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4157_);
lean_ctor_set(v___x_4158_, 1, v___x_4156_);
return v___x_4158_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3(void){
_start:
{
lean_object* v___x_4159_; 
v___x_4159_ = l_Array_instInhabited___redArg();
return v___x_4159_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4(void){
_start:
{
lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; 
v___x_4160_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__2);
v___x_4161_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4161_);
lean_ctor_set(v___x_4162_, 1, v___x_4160_);
return v___x_4162_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5(void){
_start:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; 
v___x_4163_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__4, &l_Lean_Meta_MatcherApp_transform___redArg___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__4);
v___x_4164_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__0);
v___x_4165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4165_, 0, v___x_4164_);
lean_ctor_set(v___x_4165_, 1, v___x_4163_);
return v___x_4165_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6(void){
_start:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; 
v___x_4166_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__5);
v___x_4167_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__3);
v___x_4168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4167_);
lean_ctor_set(v___x_4168_, 1, v___x_4166_);
return v___x_4168_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7(void){
_start:
{
lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4169_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__6);
v___x_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4169_);
return v___x_4170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object* v_inst_4171_, lean_object* v_inst_4172_, lean_object* v_inst_4173_, lean_object* v_inst_4174_, lean_object* v_inst_4175_, lean_object* v_matcherApp_4176_, uint8_t v_useSplitter_4177_, uint8_t v_addEqualities_4178_, lean_object* v_onParams_4179_, lean_object* v_onMotive_4180_, lean_object* v_onAlt_4181_, lean_object* v_onRemaining_4182_){
_start:
{
lean_object* v_toApplicative_4183_; lean_object* v_toBind_4184_; lean_object* v_getEnv_4185_; lean_object* v_toPure_4186_; lean_object* v_toMonadExceptOf_4187_; lean_object* v___f_4188_; lean_object* v___f_4189_; lean_object* v___f_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___f_4193_; lean_object* v___x_4194_; lean_object* v___f_4195_; lean_object* v___f_4196_; lean_object* v___f_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___f_4201_; lean_object* v___x_4202_; 
v_toApplicative_4183_ = lean_ctor_get(v_inst_4173_, 0);
v_toBind_4184_ = lean_ctor_get(v_inst_4173_, 1);
lean_inc_n(v_toBind_4184_, 4);
v_getEnv_4185_ = lean_ctor_get(v_inst_4175_, 0);
lean_inc(v_getEnv_4185_);
v_toPure_4186_ = lean_ctor_get(v_toApplicative_4183_, 1);
lean_inc_n(v_toPure_4186_, 5);
v_toMonadExceptOf_4187_ = lean_ctor_get(v_inst_4174_, 0);
lean_inc_ref(v_toMonadExceptOf_4187_);
lean_inc_ref(v_inst_4174_);
lean_inc_ref_n(v_inst_4173_, 4);
v___f_4188_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4188_, 0, v_inst_4173_);
lean_closure_set(v___f_4188_, 1, v_inst_4174_);
lean_inc_n(v_inst_4171_, 3);
v___f_4189_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4189_, 0, v_inst_4171_);
v___f_4190_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4190_, 0, v_inst_4173_);
lean_closure_set(v___f_4190_, 1, v___f_4189_);
v___x_4191_ = l_Lean_instInhabitedExpr;
v___x_4192_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
v___f_4193_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__5), 6, 3);
lean_closure_set(v___f_4193_, 0, v_toPure_4186_);
lean_closure_set(v___f_4193_, 1, v_inst_4171_);
lean_closure_set(v___f_4193_, 2, v_toBind_4184_);
v___x_4194_ = lean_box(v_addEqualities_4178_);
v___f_4195_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__10___boxed), 7, 4);
lean_closure_set(v___f_4195_, 0, v_toPure_4186_);
lean_closure_set(v___f_4195_, 1, v___x_4194_);
lean_closure_set(v___f_4195_, 2, v_inst_4171_);
lean_closure_set(v___f_4195_, 3, v_toBind_4184_);
v___f_4196_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__11), 2, 1);
lean_closure_set(v___f_4196_, 0, v_toPure_4186_);
v___f_4197_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__12), 2, 1);
lean_closure_set(v___f_4197_, 0, v_toPure_4186_);
v___x_4198_ = l_instInhabitedOfMonad___redArg(v_inst_4173_, v___x_4191_);
v___x_4199_ = l_instInhabitedOfMonad___redArg(v_inst_4173_, v___x_4192_);
v___x_4200_ = lean_box(v_useSplitter_4177_);
v___f_4201_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed), 23, 22);
lean_closure_set(v___f_4201_, 0, v_matcherApp_4176_);
lean_closure_set(v___f_4201_, 1, v_toPure_4186_);
lean_closure_set(v___f_4201_, 2, v_inst_4171_);
lean_closure_set(v___f_4201_, 3, v_toBind_4184_);
lean_closure_set(v___f_4201_, 4, v_inst_4173_);
lean_closure_set(v___f_4201_, 5, v___f_4195_);
lean_closure_set(v___f_4201_, 6, v_onMotive_4180_);
lean_closure_set(v___f_4201_, 7, v_inst_4174_);
lean_closure_set(v___f_4201_, 8, v_onRemaining_4182_);
lean_closure_set(v___f_4201_, 9, v_inst_4172_);
lean_closure_set(v___f_4201_, 10, v___f_4197_);
lean_closure_set(v___f_4201_, 11, v_onAlt_4181_);
lean_closure_set(v___f_4201_, 12, v___f_4190_);
lean_closure_set(v___f_4201_, 13, v___x_4200_);
lean_closure_set(v___f_4201_, 14, v___f_4196_);
lean_closure_set(v___f_4201_, 15, v___x_4199_);
lean_closure_set(v___f_4201_, 16, v___x_4198_);
lean_closure_set(v___f_4201_, 17, v_toMonadExceptOf_4187_);
lean_closure_set(v___f_4201_, 18, v___f_4188_);
lean_closure_set(v___f_4201_, 19, v___f_4193_);
lean_closure_set(v___f_4201_, 20, v_onParams_4179_);
lean_closure_set(v___f_4201_, 21, v_inst_4175_);
v___x_4202_ = lean_apply_4(v_toBind_4184_, lean_box(0), lean_box(0), v_getEnv_4185_, v___f_4201_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object* v_inst_4203_, lean_object* v_inst_4204_, lean_object* v_inst_4205_, lean_object* v_inst_4206_, lean_object* v_inst_4207_, lean_object* v_matcherApp_4208_, lean_object* v_useSplitter_4209_, lean_object* v_addEqualities_4210_, lean_object* v_onParams_4211_, lean_object* v_onMotive_4212_, lean_object* v_onAlt_4213_, lean_object* v_onRemaining_4214_){
_start:
{
uint8_t v_useSplitter_boxed_4215_; uint8_t v_addEqualities_boxed_4216_; lean_object* v_res_4217_; 
v_useSplitter_boxed_4215_ = lean_unbox(v_useSplitter_4209_);
v_addEqualities_boxed_4216_ = lean_unbox(v_addEqualities_4210_);
v_res_4217_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4203_, v_inst_4204_, v_inst_4205_, v_inst_4206_, v_inst_4207_, v_matcherApp_4208_, v_useSplitter_boxed_4215_, v_addEqualities_boxed_4216_, v_onParams_4211_, v_onMotive_4212_, v_onAlt_4213_, v_onRemaining_4214_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object* v_n_4218_, lean_object* v_inst_4219_, lean_object* v_inst_4220_, lean_object* v_inst_4221_, lean_object* v_inst_4222_, lean_object* v_inst_4223_, lean_object* v_inst_4224_, lean_object* v_inst_4225_, lean_object* v_inst_4226_, lean_object* v_matcherApp_4227_, uint8_t v_useSplitter_4228_, uint8_t v_addEqualities_4229_, lean_object* v_onParams_4230_, lean_object* v_onMotive_4231_, lean_object* v_onAlt_4232_, lean_object* v_onRemaining_4233_){
_start:
{
lean_object* v___x_4234_; 
v___x_4234_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4219_, v_inst_4220_, v_inst_4221_, v_inst_4222_, v_inst_4223_, v_matcherApp_4227_, v_useSplitter_4228_, v_addEqualities_4229_, v_onParams_4230_, v_onMotive_4231_, v_onAlt_4232_, v_onRemaining_4233_);
return v___x_4234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object* v_n_4235_, lean_object* v_inst_4236_, lean_object* v_inst_4237_, lean_object* v_inst_4238_, lean_object* v_inst_4239_, lean_object* v_inst_4240_, lean_object* v_inst_4241_, lean_object* v_inst_4242_, lean_object* v_inst_4243_, lean_object* v_matcherApp_4244_, lean_object* v_useSplitter_4245_, lean_object* v_addEqualities_4246_, lean_object* v_onParams_4247_, lean_object* v_onMotive_4248_, lean_object* v_onAlt_4249_, lean_object* v_onRemaining_4250_){
_start:
{
uint8_t v_useSplitter_boxed_4251_; uint8_t v_addEqualities_boxed_4252_; lean_object* v_res_4253_; 
v_useSplitter_boxed_4251_ = lean_unbox(v_useSplitter_4245_);
v_addEqualities_boxed_4252_ = lean_unbox(v_addEqualities_4246_);
v_res_4253_ = l_Lean_Meta_MatcherApp_transform(v_n_4235_, v_inst_4236_, v_inst_4237_, v_inst_4238_, v_inst_4239_, v_inst_4240_, v_inst_4241_, v_inst_4242_, v_inst_4243_, v_matcherApp_4244_, v_useSplitter_boxed_4251_, v_addEqualities_boxed_4252_, v_onParams_4247_, v_onMotive_4248_, v_onAlt_4249_, v_onRemaining_4250_);
lean_dec_ref(v_inst_4243_);
lean_dec(v_inst_4242_);
lean_dec_ref(v_inst_4241_);
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4260_, 0, v___y_4254_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_){
_start:
{
lean_object* v_res_4267_; 
v_res_4267_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__0(v___y_4261_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_);
lean_dec(v___y_4265_);
lean_dec_ref(v___y_4264_);
lean_dec(v___y_4263_);
lean_dec_ref(v___y_4262_);
return v_res_4267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4274_, 0, v___y_4268_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_){
_start:
{
lean_object* v_res_4281_; 
v_res_4281_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__1(v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
lean_dec(v___y_4279_);
lean_dec_ref(v___y_4278_);
lean_dec(v___y_4277_);
lean_dec_ref(v___y_4276_);
return v_res_4281_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object* v_opts_4282_, lean_object* v_opt_4283_){
_start:
{
lean_object* v_name_4284_; lean_object* v_defValue_4285_; lean_object* v_map_4286_; lean_object* v___x_4287_; 
v_name_4284_ = lean_ctor_get(v_opt_4283_, 0);
v_defValue_4285_ = lean_ctor_get(v_opt_4283_, 1);
v_map_4286_ = lean_ctor_get(v_opts_4282_, 0);
v___x_4287_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4286_, v_name_4284_);
if (lean_obj_tag(v___x_4287_) == 0)
{
uint8_t v___x_4288_; 
v___x_4288_ = lean_unbox(v_defValue_4285_);
return v___x_4288_;
}
else
{
lean_object* v_val_4289_; 
v_val_4289_ = lean_ctor_get(v___x_4287_, 0);
lean_inc(v_val_4289_);
lean_dec_ref_known(v___x_4287_, 1);
if (lean_obj_tag(v_val_4289_) == 1)
{
uint8_t v_v_4290_; 
v_v_4290_ = lean_ctor_get_uint8(v_val_4289_, 0);
lean_dec_ref_known(v_val_4289_, 0);
return v_v_4290_;
}
else
{
uint8_t v___x_4291_; 
lean_dec(v_val_4289_);
v___x_4291_ = lean_unbox(v_defValue_4285_);
return v___x_4291_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object* v_opts_4292_, lean_object* v_opt_4293_){
_start:
{
uint8_t v_res_4294_; lean_object* v_r_4295_; 
v_res_4294_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_opts_4292_, v_opt_4293_);
lean_dec_ref(v_opt_4293_);
lean_dec_ref(v_opts_4292_);
v_r_4295_ = lean_box(v_res_4294_);
return v_r_4295_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t v___x_4304_, lean_object* v_x_4305_){
_start:
{
if (lean_obj_tag(v_x_4305_) == 1)
{
lean_object* v_pre_4306_; 
v_pre_4306_ = lean_ctor_get(v_x_4305_, 0);
switch(lean_obj_tag(v_pre_4306_))
{
case 1:
{
lean_object* v_pre_4307_; 
v_pre_4307_ = lean_ctor_get(v_pre_4306_, 0);
switch(lean_obj_tag(v_pre_4307_))
{
case 0:
{
lean_object* v_str_4308_; lean_object* v_str_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; 
v_str_4308_ = lean_ctor_get(v_x_4305_, 1);
v_str_4309_ = lean_ctor_get(v_pre_4306_, 1);
v___x_4310_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_4311_ = lean_string_dec_eq(v_str_4309_, v___x_4310_);
if (v___x_4311_ == 0)
{
lean_object* v___x_4312_; uint8_t v___x_4313_; 
v___x_4312_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_4313_ = lean_string_dec_eq(v_str_4309_, v___x_4312_);
if (v___x_4313_ == 0)
{
return v___x_4313_;
}
else
{
lean_object* v___x_4314_; uint8_t v___x_4315_; 
v___x_4314_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_4315_ = lean_string_dec_eq(v_str_4308_, v___x_4314_);
return v___x_4315_;
}
}
else
{
lean_object* v___x_4316_; uint8_t v___x_4317_; 
v___x_4316_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_4317_ = lean_string_dec_eq(v_str_4308_, v___x_4316_);
return v___x_4317_;
}
}
case 1:
{
lean_object* v_pre_4318_; 
v_pre_4318_ = lean_ctor_get(v_pre_4307_, 0);
if (lean_obj_tag(v_pre_4318_) == 0)
{
lean_object* v_str_4319_; lean_object* v_str_4320_; lean_object* v_str_4321_; lean_object* v___x_4322_; uint8_t v___x_4323_; 
v_str_4319_ = lean_ctor_get(v_x_4305_, 1);
v_str_4320_ = lean_ctor_get(v_pre_4306_, 1);
v_str_4321_ = lean_ctor_get(v_pre_4307_, 1);
v___x_4322_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_4323_ = lean_string_dec_eq(v_str_4321_, v___x_4322_);
if (v___x_4323_ == 0)
{
return v___x_4323_;
}
else
{
lean_object* v___x_4324_; uint8_t v___x_4325_; 
v___x_4324_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_4325_ = lean_string_dec_eq(v_str_4320_, v___x_4324_);
if (v___x_4325_ == 0)
{
return v___x_4325_;
}
else
{
lean_object* v___x_4326_; uint8_t v___x_4327_; 
v___x_4326_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_4327_ = lean_string_dec_eq(v_str_4319_, v___x_4326_);
return v___x_4327_;
}
}
}
else
{
return v___x_4304_;
}
}
default: 
{
return v___x_4304_;
}
}
}
case 0:
{
lean_object* v_str_4328_; lean_object* v___x_4329_; uint8_t v___x_4330_; 
v_str_4328_ = lean_ctor_get(v_x_4305_, 1);
v___x_4329_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_4330_ = lean_string_dec_eq(v_str_4328_, v___x_4329_);
return v___x_4330_;
}
default: 
{
return v___x_4304_;
}
}
}
else
{
return v___x_4304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___x_4331_, lean_object* v_x_4332_){
_start:
{
uint8_t v___x_32135__boxed_4333_; uint8_t v_res_4334_; lean_object* v_r_4335_; 
v___x_32135__boxed_4333_ = lean_unbox(v___x_4331_);
v_res_4334_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(v___x_32135__boxed_4333_, v_x_4332_);
lean_dec(v_x_4332_);
v_r_4335_ = lean_box(v_res_4334_);
return v_r_4335_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object* v_ref_4340_, lean_object* v_msgData_4341_, uint8_t v_severity_4342_, uint8_t v_isSilent_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_){
_start:
{
uint8_t v___y_4350_; lean_object* v___y_4351_; uint8_t v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; lean_object* v___y_4355_; lean_object* v___y_4356_; lean_object* v_toCold_4357_; lean_object* v___y_4358_; lean_object* v___y_4387_; lean_object* v___y_4388_; uint8_t v___y_4389_; uint8_t v___y_4390_; uint8_t v___y_4391_; lean_object* v___y_4392_; lean_object* v___y_4393_; lean_object* v___y_4394_; uint8_t v___y_4414_; uint8_t v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; uint8_t v___y_4419_; lean_object* v___y_4420_; uint8_t v___y_4424_; uint8_t v___x_4441_; uint8_t v___x_4442_; 
v___x_4441_ = 2;
v___x_4442_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4342_, v___x_4441_);
if (v___x_4442_ == 0)
{
goto v___jp_4434_;
}
else
{
uint8_t v___x_4443_; 
lean_inc_ref(v_msgData_4341_);
v___x_4443_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4341_);
if (v___x_4443_ == 0)
{
goto v___jp_4434_;
}
else
{
lean_object* v___x_4444_; lean_object* v___x_4445_; 
lean_dec_ref(v_msgData_4341_);
v___x_4444_ = lean_box(0);
v___x_4445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4445_, 0, v___x_4444_);
return v___x_4445_;
}
}
v___jp_4349_:
{
lean_object* v_currNamespace_4359_; lean_object* v_openDecls_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v_env_4365_; lean_object* v_nextMacroScope_4366_; lean_object* v_ngen_4367_; lean_object* v_auxDeclNGen_4368_; lean_object* v_traceState_4369_; lean_object* v_cache_4370_; lean_object* v_recordedDeps_4371_; lean_object* v_messages_4372_; lean_object* v_infoState_4373_; lean_object* v_snapshotTasks_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4385_; 
v_currNamespace_4359_ = lean_ctor_get(v_toCold_4357_, 4);
v_openDecls_4360_ = lean_ctor_get(v_toCold_4357_, 5);
lean_inc(v_openDecls_4360_);
lean_inc(v_currNamespace_4359_);
v___x_4361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4361_, 0, v_currNamespace_4359_);
lean_ctor_set(v___x_4361_, 1, v_openDecls_4360_);
v___x_4362_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4362_, 0, v___x_4361_);
lean_ctor_set(v___x_4362_, 1, v___y_4356_);
lean_inc_ref(v___y_4355_);
lean_inc_ref(v___y_4354_);
v___x_4363_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4363_, 0, v___y_4354_);
lean_ctor_set(v___x_4363_, 1, v___y_4351_);
lean_ctor_set(v___x_4363_, 2, v___y_4353_);
lean_ctor_set(v___x_4363_, 3, v___y_4355_);
lean_ctor_set(v___x_4363_, 4, v___x_4362_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*5, v___y_4352_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*5 + 1, v___y_4350_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*5 + 2, v_isSilent_4343_);
v___x_4364_ = lean_st_ref_take(v___y_4358_);
v_env_4365_ = lean_ctor_get(v___x_4364_, 0);
v_nextMacroScope_4366_ = lean_ctor_get(v___x_4364_, 1);
v_ngen_4367_ = lean_ctor_get(v___x_4364_, 2);
v_auxDeclNGen_4368_ = lean_ctor_get(v___x_4364_, 3);
v_traceState_4369_ = lean_ctor_get(v___x_4364_, 4);
v_cache_4370_ = lean_ctor_get(v___x_4364_, 5);
v_recordedDeps_4371_ = lean_ctor_get(v___x_4364_, 6);
v_messages_4372_ = lean_ctor_get(v___x_4364_, 7);
v_infoState_4373_ = lean_ctor_get(v___x_4364_, 8);
v_snapshotTasks_4374_ = lean_ctor_get(v___x_4364_, 9);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4364_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4376_ = v___x_4364_;
v_isShared_4377_ = v_isSharedCheck_4385_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_snapshotTasks_4374_);
lean_inc(v_infoState_4373_);
lean_inc(v_messages_4372_);
lean_inc(v_recordedDeps_4371_);
lean_inc(v_cache_4370_);
lean_inc(v_traceState_4369_);
lean_inc(v_auxDeclNGen_4368_);
lean_inc(v_ngen_4367_);
lean_inc(v_nextMacroScope_4366_);
lean_inc(v_env_4365_);
lean_dec(v___x_4364_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4385_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4381_; 
v___x_4378_ = lean_box(0);
v___x_4379_ = l_Lean_MessageLog_add(v___x_4363_, v_messages_4372_);
if (v_isShared_4377_ == 0)
{
lean_ctor_set(v___x_4376_, 7, v___x_4379_);
v___x_4381_ = v___x_4376_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v_env_4365_);
lean_ctor_set(v_reuseFailAlloc_4384_, 1, v_nextMacroScope_4366_);
lean_ctor_set(v_reuseFailAlloc_4384_, 2, v_ngen_4367_);
lean_ctor_set(v_reuseFailAlloc_4384_, 3, v_auxDeclNGen_4368_);
lean_ctor_set(v_reuseFailAlloc_4384_, 4, v_traceState_4369_);
lean_ctor_set(v_reuseFailAlloc_4384_, 5, v_cache_4370_);
lean_ctor_set(v_reuseFailAlloc_4384_, 6, v_recordedDeps_4371_);
lean_ctor_set(v_reuseFailAlloc_4384_, 7, v___x_4379_);
lean_ctor_set(v_reuseFailAlloc_4384_, 8, v_infoState_4373_);
lean_ctor_set(v_reuseFailAlloc_4384_, 9, v_snapshotTasks_4374_);
v___x_4381_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
lean_object* v___x_4382_; lean_object* v___x_4383_; 
v___x_4382_ = lean_st_ref_put(v___y_4358_, v___x_4381_);
v___x_4383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4383_, 0, v___x_4378_);
return v___x_4383_;
}
}
}
v___jp_4386_:
{
lean_object* v_fileName_4395_; lean_object* v_fileMap_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4412_; 
v_fileName_4395_ = lean_ctor_get(v___y_4392_, 0);
v_fileMap_4396_ = lean_ctor_get(v___y_4392_, 1);
v___x_4397_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4341_);
v___x_4398_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v___x_4397_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_);
v_a_4399_ = lean_ctor_get(v___x_4398_, 0);
v_isSharedCheck_4412_ = !lean_is_exclusive(v___x_4398_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4401_ = v___x_4398_;
v_isShared_4402_ = v_isSharedCheck_4412_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4398_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4412_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; 
lean_inc_ref_n(v_fileMap_4396_, 2);
v___x_4403_ = l_Lean_FileMap_toPosition(v_fileMap_4396_, v___y_4393_);
lean_dec(v___y_4393_);
v___x_4404_ = l_Lean_FileMap_toPosition(v_fileMap_4396_, v___y_4394_);
lean_dec(v___y_4394_);
v___x_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4405_, 0, v___x_4404_);
v___x_4406_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0));
if (v___y_4390_ == 0)
{
lean_del_object(v___x_4401_);
v___y_4350_ = v___y_4389_;
v___y_4351_ = v___x_4403_;
v___y_4352_ = v___y_4391_;
v___y_4353_ = v___x_4405_;
v___y_4354_ = v_fileName_4395_;
v___y_4355_ = v___x_4406_;
v___y_4356_ = v_a_4399_;
v_toCold_4357_ = v___y_4388_;
v___y_4358_ = v___y_4347_;
goto v___jp_4349_;
}
else
{
uint8_t v___x_4407_; 
lean_inc(v_a_4399_);
lean_inc_ref(v___y_4387_);
v___x_4407_ = l_Lean_MessageData_hasTag(v___y_4387_, v_a_4399_);
if (v___x_4407_ == 0)
{
lean_object* v___x_4408_; lean_object* v___x_4410_; 
lean_dec_ref_known(v___x_4405_, 1);
lean_dec_ref(v___x_4403_);
lean_dec(v_a_4399_);
v___x_4408_ = lean_box(0);
if (v_isShared_4402_ == 0)
{
lean_ctor_set(v___x_4401_, 0, v___x_4408_);
v___x_4410_ = v___x_4401_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v___x_4408_);
v___x_4410_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
return v___x_4410_;
}
}
else
{
lean_del_object(v___x_4401_);
v___y_4350_ = v___y_4389_;
v___y_4351_ = v___x_4403_;
v___y_4352_ = v___y_4391_;
v___y_4353_ = v___x_4405_;
v___y_4354_ = v_fileName_4395_;
v___y_4355_ = v___x_4406_;
v___y_4356_ = v_a_4399_;
v_toCold_4357_ = v___y_4388_;
v___y_4358_ = v___y_4347_;
goto v___jp_4349_;
}
}
}
}
v___jp_4413_:
{
lean_object* v___x_4421_; 
v___x_4421_ = l_Lean_Syntax_getTailPos_x3f(v___y_4416_, v___y_4415_);
lean_dec(v___y_4416_);
if (lean_obj_tag(v___x_4421_) == 0)
{
lean_inc(v___y_4420_);
v___y_4387_ = v___y_4417_;
v___y_4388_ = v___y_4418_;
v___y_4389_ = v___y_4419_;
v___y_4390_ = v___y_4414_;
v___y_4391_ = v___y_4415_;
v___y_4392_ = v___y_4418_;
v___y_4393_ = v___y_4420_;
v___y_4394_ = v___y_4420_;
goto v___jp_4386_;
}
else
{
lean_object* v_val_4422_; 
v_val_4422_ = lean_ctor_get(v___x_4421_, 0);
lean_inc(v_val_4422_);
lean_dec_ref_known(v___x_4421_, 1);
v___y_4387_ = v___y_4417_;
v___y_4388_ = v___y_4418_;
v___y_4389_ = v___y_4419_;
v___y_4390_ = v___y_4414_;
v___y_4391_ = v___y_4415_;
v___y_4392_ = v___y_4418_;
v___y_4393_ = v___y_4420_;
v___y_4394_ = v_val_4422_;
goto v___jp_4386_;
}
}
v___jp_4423_:
{
lean_object* v_toCold_4425_; lean_object* v_ref_4426_; uint8_t v_suppressElabErrors_4427_; lean_object* v_ref_4428_; uint8_t v___x_4429_; lean_object* v___f_4430_; lean_object* v___x_4431_; 
v_toCold_4425_ = lean_ctor_get(v___y_4346_, 0);
v_ref_4426_ = lean_ctor_get(v___y_4346_, 2);
v_suppressElabErrors_4427_ = lean_ctor_get_uint8(v___y_4346_, sizeof(void*)*3 + 2);
v_ref_4428_ = l_Lean_replaceRef(v_ref_4340_, v_ref_4426_);
v___x_4429_ = 0;
v___f_4430_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__1));
v___x_4431_ = l_Lean_Syntax_getPos_x3f(v_ref_4428_, v___x_4429_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v___x_4432_; 
v___x_4432_ = lean_unsigned_to_nat(0u);
v___y_4414_ = v_suppressElabErrors_4427_;
v___y_4415_ = v___x_4429_;
v___y_4416_ = v_ref_4428_;
v___y_4417_ = v___f_4430_;
v___y_4418_ = v_toCold_4425_;
v___y_4419_ = v___y_4424_;
v___y_4420_ = v___x_4432_;
goto v___jp_4413_;
}
else
{
lean_object* v_val_4433_; 
v_val_4433_ = lean_ctor_get(v___x_4431_, 0);
lean_inc(v_val_4433_);
lean_dec_ref_known(v___x_4431_, 1);
v___y_4414_ = v_suppressElabErrors_4427_;
v___y_4415_ = v___x_4429_;
v___y_4416_ = v_ref_4428_;
v___y_4417_ = v___f_4430_;
v___y_4418_ = v_toCold_4425_;
v___y_4419_ = v___y_4424_;
v___y_4420_ = v_val_4433_;
goto v___jp_4413_;
}
}
v___jp_4434_:
{
uint8_t v___x_4435_; uint8_t v___x_4436_; 
v___x_4435_ = 1;
v___x_4436_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4342_, v___x_4435_);
if (v___x_4436_ == 0)
{
v___y_4424_ = v_severity_4342_;
goto v___jp_4423_;
}
else
{
lean_object* v___x_4437_; lean_object* v___x_4438_; uint8_t v___x_4439_; 
v___x_4437_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4346_);
v___x_4438_ = l_Lean_warningAsError;
v___x_4439_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v___x_4437_, v___x_4438_);
lean_dec_ref(v___x_4437_);
if (v___x_4439_ == 0)
{
v___y_4424_ = v_severity_4342_;
goto v___jp_4423_;
}
else
{
uint8_t v___x_4440_; 
v___x_4440_ = 2;
v___y_4424_ = v___x_4440_;
goto v___jp_4423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_4446_, lean_object* v_msgData_4447_, lean_object* v_severity_4448_, lean_object* v_isSilent_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_){
_start:
{
uint8_t v_severity_boxed_4455_; uint8_t v_isSilent_boxed_4456_; lean_object* v_res_4457_; 
v_severity_boxed_4455_ = lean_unbox(v_severity_4448_);
v_isSilent_boxed_4456_ = lean_unbox(v_isSilent_4449_);
v_res_4457_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4446_, v_msgData_4447_, v_severity_boxed_4455_, v_isSilent_boxed_4456_, v___y_4450_, v___y_4451_, v___y_4452_, v___y_4453_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
lean_dec(v___y_4451_);
lean_dec_ref(v___y_4450_);
lean_dec(v_ref_4446_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object* v_msgData_4458_, uint8_t v_severity_4459_, uint8_t v_isSilent_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v_ref_4466_; lean_object* v___x_4467_; 
v_ref_4466_ = lean_ctor_get(v___y_4463_, 2);
v___x_4467_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4466_, v_msgData_4458_, v_severity_4459_, v_isSilent_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_);
return v___x_4467_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object* v_msgData_4468_, lean_object* v_severity_4469_, lean_object* v_isSilent_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_){
_start:
{
uint8_t v_severity_boxed_4476_; uint8_t v_isSilent_boxed_4477_; lean_object* v_res_4478_; 
v_severity_boxed_4476_ = lean_unbox(v_severity_4469_);
v_isSilent_boxed_4477_ = lean_unbox(v_isSilent_4470_);
v_res_4478_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4468_, v_severity_boxed_4476_, v_isSilent_boxed_4477_, v___y_4471_, v___y_4472_, v___y_4473_, v___y_4474_);
lean_dec(v___y_4474_);
lean_dec_ref(v___y_4473_);
lean_dec(v___y_4472_);
lean_dec_ref(v___y_4471_);
return v_res_4478_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object* v_msgData_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_){
_start:
{
uint8_t v___x_4485_; uint8_t v___x_4486_; lean_object* v___x_4487_; 
v___x_4485_ = 0;
v___x_4486_ = 0;
v___x_4487_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4479_, v___x_4485_, v___x_4486_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object* v_msgData_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v_res_4494_; 
v_res_4494_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v_msgData_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_);
lean_dec(v___y_4492_);
lean_dec_ref(v___y_4491_);
lean_dec(v___y_4490_);
lean_dec_ref(v___y_4489_);
return v_res_4494_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1(void){
_start:
{
lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4496_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0));
v___x_4497_ = l_Lean_stringToMessageData(v___x_4496_);
return v___x_4497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t v___x_4498_, lean_object* v___altIdx_4499_, lean_object* v_expAltType_4500_, lean_object* v___altFVars_4501_, lean_object* v_alt_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_){
_start:
{
lean_object* v___x_4508_; 
lean_inc(v___y_4506_);
lean_inc_ref(v___y_4505_);
lean_inc(v___y_4504_);
lean_inc_ref(v___y_4503_);
lean_inc_ref(v_alt_4502_);
v___x_4508_ = lean_infer_type(v_alt_4502_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4508_) == 0)
{
lean_object* v_a_4509_; lean_object* v___x_4510_; 
v_a_4509_ = lean_ctor_get(v___x_4508_, 0);
lean_inc(v_a_4509_);
lean_dec_ref_known(v___x_4508_, 1);
v___x_4510_ = l_Lean_Meta_mkEq(v_expAltType_4500_, v_a_4509_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4510_) == 0)
{
lean_object* v_a_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
v_a_4511_ = lean_ctor_get(v___x_4510_, 0);
lean_inc(v_a_4511_);
lean_dec_ref_known(v___x_4510_, 1);
v___x_4512_ = lean_box(0);
v___x_4513_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4511_, v___x_4512_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4513_) == 0)
{
lean_object* v_a_4514_; lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4568_; 
v_a_4514_ = lean_ctor_get(v___x_4513_, 0);
v_isSharedCheck_4568_ = !lean_is_exclusive(v___x_4513_);
if (v_isSharedCheck_4568_ == 0)
{
v___x_4516_ = v___x_4513_;
v_isShared_4517_ = v_isSharedCheck_4568_;
goto v_resetjp_4515_;
}
else
{
lean_inc(v_a_4514_);
lean_dec(v___x_4513_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4568_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4518_ = l_Lean_Expr_mvarId_x21(v_a_4514_);
v___x_4519_ = l_Lean_Meta_Split_simpMatchTarget(v___x_4518_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4519_) == 0)
{
lean_object* v_a_4520_; lean_object* v___x_4521_; 
v_a_4520_ = lean_ctor_get(v___x_4519_, 0);
lean_inc_n(v_a_4520_, 2);
lean_dec_ref_known(v___x_4519_, 1);
v___x_4521_ = l_Lean_MVarId_refl(v_a_4520_, v___x_4498_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4521_) == 0)
{
lean_object* v___x_4522_; 
lean_dec_ref_known(v___x_4521_, 1);
lean_dec(v_a_4520_);
lean_del_object(v___x_4516_);
v___x_4522_ = l_Lean_Meta_mkEqMPR(v_a_4514_, v_alt_4502_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
return v___x_4522_;
}
else
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4559_; 
v_a_4523_ = lean_ctor_get(v___x_4521_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4521_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4525_ = v___x_4521_;
v_isShared_4526_ = v_isSharedCheck_4559_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v___x_4521_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4559_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
uint8_t v___x_4527_; 
v___x_4527_ = l_Lean_Exception_isInterrupt(v_a_4523_);
if (v___x_4527_ == 0)
{
uint8_t v___x_4528_; 
lean_inc(v_a_4523_);
v___x_4528_ = l_Lean_Exception_isRuntime(v_a_4523_);
if (v___x_4528_ == 0)
{
lean_object* v___x_4529_; lean_object* v___x_4531_; 
lean_del_object(v___x_4525_);
lean_dec(v_a_4523_);
v___x_4529_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1);
lean_inc(v_a_4520_);
if (v_isShared_4517_ == 0)
{
lean_ctor_set_tag(v___x_4516_, 1);
lean_ctor_set(v___x_4516_, 0, v_a_4520_);
v___x_4531_ = v___x_4516_;
goto v_reusejp_4530_;
}
else
{
lean_object* v_reuseFailAlloc_4552_; 
v_reuseFailAlloc_4552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4552_, 0, v_a_4520_);
v___x_4531_ = v_reuseFailAlloc_4552_;
goto v_reusejp_4530_;
}
v_reusejp_4530_:
{
lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___x_4532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4529_);
lean_ctor_set(v___x_4532_, 1, v___x_4531_);
v___x_4533_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v___x_4532_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4533_) == 0)
{
lean_object* v___x_4534_; 
lean_dec_ref_known(v___x_4533_, 1);
v___x_4534_ = l_Lean_MVarId_admit(v_a_4520_, v___x_4498_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
if (lean_obj_tag(v___x_4534_) == 0)
{
lean_object* v___x_4535_; 
lean_dec_ref_known(v___x_4534_, 1);
v___x_4535_ = l_Lean_Meta_mkEqMPR(v_a_4514_, v_alt_4502_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
return v___x_4535_;
}
else
{
lean_object* v_a_4536_; lean_object* v___x_4538_; uint8_t v_isShared_4539_; uint8_t v_isSharedCheck_4543_; 
lean_dec(v_a_4514_);
lean_dec_ref(v_alt_4502_);
v_a_4536_ = lean_ctor_get(v___x_4534_, 0);
v_isSharedCheck_4543_ = !lean_is_exclusive(v___x_4534_);
if (v_isSharedCheck_4543_ == 0)
{
v___x_4538_ = v___x_4534_;
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
else
{
lean_inc(v_a_4536_);
lean_dec(v___x_4534_);
v___x_4538_ = lean_box(0);
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
v_resetjp_4537_:
{
lean_object* v___x_4541_; 
if (v_isShared_4539_ == 0)
{
v___x_4541_ = v___x_4538_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_a_4536_);
v___x_4541_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
return v___x_4541_;
}
}
}
}
else
{
lean_object* v_a_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4551_; 
lean_dec(v_a_4520_);
lean_dec(v_a_4514_);
lean_dec_ref(v_alt_4502_);
v_a_4544_ = lean_ctor_get(v___x_4533_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4533_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4546_ = v___x_4533_;
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
else
{
lean_inc(v_a_4544_);
lean_dec(v___x_4533_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___x_4549_; 
if (v_isShared_4547_ == 0)
{
v___x_4549_ = v___x_4546_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_a_4544_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
}
}
}
else
{
lean_object* v___x_4554_; 
lean_dec(v_a_4520_);
lean_del_object(v___x_4516_);
lean_dec(v_a_4514_);
lean_dec_ref(v_alt_4502_);
if (v_isShared_4526_ == 0)
{
v___x_4554_ = v___x_4525_;
goto v_reusejp_4553_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v_a_4523_);
v___x_4554_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4553_;
}
v_reusejp_4553_:
{
return v___x_4554_;
}
}
}
else
{
lean_object* v___x_4557_; 
lean_dec(v_a_4520_);
lean_del_object(v___x_4516_);
lean_dec(v_a_4514_);
lean_dec_ref(v_alt_4502_);
if (v_isShared_4526_ == 0)
{
v___x_4557_ = v___x_4525_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4523_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
}
else
{
lean_object* v_a_4560_; lean_object* v___x_4562_; uint8_t v_isShared_4563_; uint8_t v_isSharedCheck_4567_; 
lean_del_object(v___x_4516_);
lean_dec(v_a_4514_);
lean_dec_ref(v_alt_4502_);
v_a_4560_ = lean_ctor_get(v___x_4519_, 0);
v_isSharedCheck_4567_ = !lean_is_exclusive(v___x_4519_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4562_ = v___x_4519_;
v_isShared_4563_ = v_isSharedCheck_4567_;
goto v_resetjp_4561_;
}
else
{
lean_inc(v_a_4560_);
lean_dec(v___x_4519_);
v___x_4562_ = lean_box(0);
v_isShared_4563_ = v_isSharedCheck_4567_;
goto v_resetjp_4561_;
}
v_resetjp_4561_:
{
lean_object* v___x_4565_; 
if (v_isShared_4563_ == 0)
{
v___x_4565_ = v___x_4562_;
goto v_reusejp_4564_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v_a_4560_);
v___x_4565_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4564_;
}
v_reusejp_4564_:
{
return v___x_4565_;
}
}
}
}
}
else
{
lean_dec_ref(v_alt_4502_);
return v___x_4513_;
}
}
else
{
lean_dec_ref(v_alt_4502_);
return v___x_4510_;
}
}
else
{
lean_dec_ref(v_alt_4502_);
lean_dec_ref(v_expAltType_4500_);
return v___x_4508_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object* v___x_4569_, lean_object* v___altIdx_4570_, lean_object* v_expAltType_4571_, lean_object* v___altFVars_4572_, lean_object* v_alt_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_){
_start:
{
uint8_t v___x_32433__boxed_4579_; lean_object* v_res_4580_; 
v___x_32433__boxed_4579_ = lean_unbox(v___x_4569_);
v_res_4580_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__2(v___x_32433__boxed_4579_, v___altIdx_4570_, v_expAltType_4571_, v___altFVars_4572_, v_alt_4573_, v___y_4574_, v___y_4575_, v___y_4576_, v___y_4577_);
lean_dec(v___y_4577_);
lean_dec_ref(v___y_4576_);
lean_dec(v___y_4575_);
lean_dec_ref(v___y_4574_);
lean_dec_ref(v___altFVars_4572_);
lean_dec(v___altIdx_4570_);
return v_res_4580_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object* v___x_4581_, lean_object* v_e_4582_){
_start:
{
lean_object* v_d_4584_; lean_object* v_b_4585_; uint8_t v___x_4588_; 
v___x_4588_ = l_Lean_Expr_hasFVar(v_e_4582_);
if (v___x_4588_ == 0)
{
return v___x_4588_;
}
else
{
switch(lean_obj_tag(v_e_4582_))
{
case 7:
{
lean_object* v_binderType_4589_; lean_object* v_body_4590_; 
v_binderType_4589_ = lean_ctor_get(v_e_4582_, 1);
v_body_4590_ = lean_ctor_get(v_e_4582_, 2);
v_d_4584_ = v_binderType_4589_;
v_b_4585_ = v_body_4590_;
goto v___jp_4583_;
}
case 6:
{
lean_object* v_binderType_4591_; lean_object* v_body_4592_; 
v_binderType_4591_ = lean_ctor_get(v_e_4582_, 1);
v_body_4592_ = lean_ctor_get(v_e_4582_, 2);
v_d_4584_ = v_binderType_4591_;
v_b_4585_ = v_body_4592_;
goto v___jp_4583_;
}
case 10:
{
lean_object* v_expr_4593_; 
v_expr_4593_ = lean_ctor_get(v_e_4582_, 1);
v_e_4582_ = v_expr_4593_;
goto _start;
}
case 8:
{
lean_object* v_type_4595_; lean_object* v_value_4596_; lean_object* v_body_4597_; uint8_t v___x_4598_; 
v_type_4595_ = lean_ctor_get(v_e_4582_, 1);
v_value_4596_ = lean_ctor_get(v_e_4582_, 2);
v_body_4597_ = lean_ctor_get(v_e_4582_, 3);
v___x_4598_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4581_, v_type_4595_);
if (v___x_4598_ == 0)
{
uint8_t v___x_4599_; 
v___x_4599_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4581_, v_value_4596_);
if (v___x_4599_ == 0)
{
v_e_4582_ = v_body_4597_;
goto _start;
}
else
{
return v___x_4599_;
}
}
else
{
return v___x_4598_;
}
}
case 5:
{
lean_object* v_fn_4601_; lean_object* v_arg_4602_; uint8_t v___x_4603_; 
v_fn_4601_ = lean_ctor_get(v_e_4582_, 0);
v_arg_4602_ = lean_ctor_get(v_e_4582_, 1);
v___x_4603_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4581_, v_fn_4601_);
if (v___x_4603_ == 0)
{
v_e_4582_ = v_arg_4602_;
goto _start;
}
else
{
return v___x_4603_;
}
}
case 11:
{
lean_object* v_struct_4605_; 
v_struct_4605_ = lean_ctor_get(v_e_4582_, 2);
v_e_4582_ = v_struct_4605_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_4607_; lean_object* v___x_4608_; uint8_t v___x_4609_; 
v_fvarId_4607_ = lean_ctor_get(v_e_4582_, 0);
v___x_4608_ = l_Lean_Expr_fvarId_x21(v___x_4581_);
v___x_4609_ = l_Lean_instBEqFVarId_beq(v_fvarId_4607_, v___x_4608_);
lean_dec(v___x_4608_);
return v___x_4609_;
}
default: 
{
uint8_t v___x_4610_; 
v___x_4610_ = 0;
return v___x_4610_;
}
}
}
v___jp_4583_:
{
uint8_t v___x_4586_; 
v___x_4586_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4581_, v_d_4584_);
if (v___x_4586_ == 0)
{
v_e_4582_ = v_b_4585_;
goto _start;
}
else
{
return v___x_4586_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object* v___x_4611_, lean_object* v_e_4612_){
_start:
{
uint8_t v_res_4613_; lean_object* v_r_4614_; 
v_res_4613_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4611_, v_e_4612_);
lean_dec_ref(v_e_4612_);
lean_dec_ref(v___x_4611_);
v_r_4614_ = lean_box(v_res_4613_);
return v_r_4614_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; 
v___x_4616_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0));
v___x_4617_ = l_Lean_stringToMessageData(v___x_4616_);
return v___x_4617_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4619_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2));
v___x_4620_ = l_Lean_stringToMessageData(v___x_4619_);
return v___x_4620_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_4622_; lean_object* v___x_4623_; 
v___x_4622_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4));
v___x_4623_ = l_Lean_stringToMessageData(v___x_4622_);
return v___x_4623_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object* v_a_4624_, lean_object* v_termAlt_4625_, lean_object* v_a_4626_, lean_object* v_b_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_){
_start:
{
lean_object* v_array_4633_; lean_object* v_start_4634_; lean_object* v_stop_4635_; lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4663_; 
v_array_4633_ = lean_ctor_get(v_a_4626_, 0);
v_start_4634_ = lean_ctor_get(v_a_4626_, 1);
v_stop_4635_ = lean_ctor_get(v_a_4626_, 2);
v_isSharedCheck_4663_ = !lean_is_exclusive(v_a_4626_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4637_ = v_a_4626_;
v_isShared_4638_ = v_isSharedCheck_4663_;
goto v_resetjp_4636_;
}
else
{
lean_inc(v_stop_4635_);
lean_inc(v_start_4634_);
lean_inc(v_array_4633_);
lean_dec(v_a_4626_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4663_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
uint8_t v___x_4639_; 
v___x_4639_ = lean_nat_dec_lt(v_start_4634_, v_stop_4635_);
if (v___x_4639_ == 0)
{
lean_object* v___x_4640_; 
lean_del_object(v___x_4637_);
lean_dec(v_stop_4635_);
lean_dec(v_start_4634_);
lean_dec_ref(v_array_4633_);
lean_dec_ref(v_termAlt_4625_);
lean_dec_ref(v_a_4624_);
v___x_4640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4640_, 0, v_b_4627_);
return v___x_4640_;
}
else
{
lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4645_; 
v___x_4641_ = lean_box(0);
v___x_4642_ = lean_unsigned_to_nat(1u);
v___x_4643_ = lean_nat_add(v_start_4634_, v___x_4642_);
lean_inc_ref(v_array_4633_);
if (v_isShared_4638_ == 0)
{
lean_ctor_set(v___x_4637_, 1, v___x_4643_);
v___x_4645_ = v___x_4637_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_array_4633_);
lean_ctor_set(v_reuseFailAlloc_4662_, 1, v___x_4643_);
lean_ctor_set(v_reuseFailAlloc_4662_, 2, v_stop_4635_);
v___x_4645_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
lean_object* v___x_4646_; uint8_t v___x_4647_; 
v___x_4646_ = lean_array_fget(v_array_4633_, v_start_4634_);
lean_dec(v_start_4634_);
lean_dec_ref(v_array_4633_);
v___x_4647_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4646_, v_a_4624_);
if (v___x_4647_ == 0)
{
lean_dec(v___x_4646_);
v_a_4626_ = v___x_4645_;
v_b_4627_ = v___x_4641_;
goto _start;
}
else
{
lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4649_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1);
lean_inc_ref(v_a_4624_);
v___x_4650_ = l_Lean_MessageData_ofExpr(v_a_4624_);
v___x_4651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4651_, 0, v___x_4649_);
lean_ctor_set(v___x_4651_, 1, v___x_4650_);
v___x_4652_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3);
v___x_4653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4651_);
lean_ctor_set(v___x_4653_, 1, v___x_4652_);
lean_inc_ref(v_termAlt_4625_);
v___x_4654_ = l_Lean_MessageData_ofExpr(v_termAlt_4625_);
v___x_4655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4653_);
lean_ctor_set(v___x_4655_, 1, v___x_4654_);
v___x_4656_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5);
v___x_4657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4657_, 0, v___x_4655_);
lean_ctor_set(v___x_4657_, 1, v___x_4656_);
v___x_4658_ = l_Lean_MessageData_ofExpr(v___x_4646_);
v___x_4659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4657_);
lean_ctor_set(v___x_4659_, 1, v___x_4658_);
v___x_4660_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_4659_, v___y_4628_, v___y_4629_, v___y_4630_, v___y_4631_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_dec_ref_known(v___x_4660_, 1);
v_a_4626_ = v___x_4645_;
v_b_4627_ = v___x_4641_;
goto _start;
}
else
{
lean_dec_ref(v___x_4645_);
lean_dec_ref(v_termAlt_4625_);
lean_dec_ref(v_a_4624_);
return v___x_4660_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object* v_a_4664_, lean_object* v_termAlt_4665_, lean_object* v_a_4666_, lean_object* v_b_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_){
_start:
{
lean_object* v_res_4673_; 
v_res_4673_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4664_, v_termAlt_4665_, v_a_4666_, v_b_4667_, v___y_4668_, v___y_4669_, v___y_4670_, v___y_4671_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
lean_dec(v___y_4669_);
lean_dec_ref(v___y_4668_);
return v_res_4673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object* v_nExtra_4674_, lean_object* v_v_4675_, uint8_t v___x_4676_, uint8_t v___x_4677_, uint8_t v___x_4678_, lean_object* v_xs_4679_, lean_object* v_termAltBody_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_){
_start:
{
lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4686_ = lean_array_get_size(v_xs_4679_);
v___x_4687_ = lean_nat_sub(v___x_4686_, v_nExtra_4674_);
v___x_4688_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_4687_);
lean_inc_ref(v_xs_4679_);
v___x_4689_ = l_Array_toSubarray___redArg(v_xs_4679_, v___x_4688_, v___x_4687_);
v___x_4690_ = l_Array_toSubarray___redArg(v_xs_4679_, v___x_4687_, v___x_4686_);
lean_inc(v___y_4684_);
lean_inc_ref(v___y_4683_);
lean_inc(v___y_4682_);
lean_inc_ref(v___y_4681_);
v___x_4691_ = lean_infer_type(v_termAltBody_4680_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_);
if (lean_obj_tag(v___x_4691_) == 0)
{
lean_object* v_a_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v_a_4692_ = lean_ctor_get(v___x_4691_, 0);
lean_inc_n(v_a_4692_, 2);
lean_dec_ref_known(v___x_4691_, 1);
v___x_4693_ = lean_box(0);
v___x_4694_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4692_, v_v_4675_, v___x_4690_, v___x_4693_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v___x_4695_; lean_object* v___x_4696_; 
lean_dec_ref_known(v___x_4694_, 1);
v___x_4695_ = l_Subarray_copy___redArg(v___x_4689_);
v___x_4696_ = l_Lean_Meta_mkLambdaFVars(v___x_4695_, v_a_4692_, v___x_4676_, v___x_4677_, v___x_4676_, v___x_4677_, v___x_4678_, v___y_4681_, v___y_4682_, v___y_4683_, v___y_4684_);
lean_dec_ref(v___x_4695_);
return v___x_4696_;
}
else
{
lean_object* v_a_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4704_; 
lean_dec(v_a_4692_);
lean_dec_ref(v___x_4689_);
v_a_4697_ = lean_ctor_get(v___x_4694_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4694_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4699_ = v___x_4694_;
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
else
{
lean_inc(v_a_4697_);
lean_dec(v___x_4694_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v___x_4702_; 
if (v_isShared_4700_ == 0)
{
v___x_4702_ = v___x_4699_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4697_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
else
{
lean_dec_ref(v___x_4690_);
lean_dec_ref(v___x_4689_);
lean_dec(v_v_4675_);
return v___x_4691_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object* v_nExtra_4705_, lean_object* v_v_4706_, lean_object* v___x_4707_, lean_object* v___x_4708_, lean_object* v___x_4709_, lean_object* v_xs_4710_, lean_object* v_termAltBody_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_){
_start:
{
uint8_t v___x_32749__boxed_4717_; uint8_t v___x_32750__boxed_4718_; uint8_t v___x_32751__boxed_4719_; lean_object* v_res_4720_; 
v___x_32749__boxed_4717_ = lean_unbox(v___x_4707_);
v___x_32750__boxed_4718_ = lean_unbox(v___x_4708_);
v___x_32751__boxed_4719_ = lean_unbox(v___x_4709_);
v_res_4720_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(v_nExtra_4705_, v_v_4706_, v___x_32749__boxed_4717_, v___x_32750__boxed_4718_, v___x_32751__boxed_4719_, v_xs_4710_, v_termAltBody_4711_, v___y_4712_, v___y_4713_, v___y_4714_, v___y_4715_);
lean_dec(v___y_4715_);
lean_dec_ref(v___y_4714_);
lean_dec(v___y_4713_);
lean_dec_ref(v___y_4712_);
lean_dec(v_nExtra_4705_);
return v_res_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object* v_nExtra_4721_, size_t v_sz_4722_, size_t v_i_4723_, lean_object* v_bs_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_){
_start:
{
uint8_t v___x_4730_; 
v___x_4730_ = lean_usize_dec_lt(v_i_4723_, v_sz_4722_);
if (v___x_4730_ == 0)
{
lean_object* v___x_4731_; 
lean_dec(v_nExtra_4721_);
v___x_4731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4731_, 0, v_bs_4724_);
return v___x_4731_;
}
else
{
uint8_t v___x_4732_; uint8_t v___x_4733_; lean_object* v_v_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___f_4738_; lean_object* v___x_4739_; lean_object* v_bs_x27_4740_; lean_object* v___x_4741_; 
v___x_4732_ = 0;
v___x_4733_ = 1;
v_v_4734_ = lean_array_uget(v_bs_4724_, v_i_4723_);
v___x_4735_ = lean_box(v___x_4732_);
v___x_4736_ = lean_box(v___x_4730_);
v___x_4737_ = lean_box(v___x_4733_);
lean_inc(v_v_4734_);
lean_inc(v_nExtra_4721_);
v___f_4738_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4738_, 0, v_nExtra_4721_);
lean_closure_set(v___f_4738_, 1, v_v_4734_);
lean_closure_set(v___f_4738_, 2, v___x_4735_);
lean_closure_set(v___f_4738_, 3, v___x_4736_);
lean_closure_set(v___f_4738_, 4, v___x_4737_);
v___x_4739_ = lean_unsigned_to_nat(0u);
v_bs_x27_4740_ = lean_array_uset(v_bs_4724_, v_i_4723_, v___x_4739_);
v___x_4741_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_v_4734_, v___f_4738_, v___x_4732_, v___y_4725_, v___y_4726_, v___y_4727_, v___y_4728_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v_a_4742_; size_t v___x_4743_; size_t v___x_4744_; lean_object* v___x_4745_; 
v_a_4742_ = lean_ctor_get(v___x_4741_, 0);
lean_inc(v_a_4742_);
lean_dec_ref_known(v___x_4741_, 1);
v___x_4743_ = ((size_t)1ULL);
v___x_4744_ = lean_usize_add(v_i_4723_, v___x_4743_);
v___x_4745_ = lean_array_uset(v_bs_x27_4740_, v_i_4723_, v_a_4742_);
v_i_4723_ = v___x_4744_;
v_bs_4724_ = v___x_4745_;
goto _start;
}
else
{
lean_object* v_a_4747_; lean_object* v___x_4749_; uint8_t v_isShared_4750_; uint8_t v_isSharedCheck_4754_; 
lean_dec_ref(v_bs_x27_4740_);
lean_dec(v_nExtra_4721_);
v_a_4747_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4749_ = v___x_4741_;
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
else
{
lean_inc(v_a_4747_);
lean_dec(v___x_4741_);
v___x_4749_ = lean_box(0);
v_isShared_4750_ = v_isSharedCheck_4754_;
goto v_resetjp_4748_;
}
v_resetjp_4748_:
{
lean_object* v___x_4752_; 
if (v_isShared_4750_ == 0)
{
v___x_4752_ = v___x_4749_;
goto v_reusejp_4751_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v_a_4747_);
v___x_4752_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4751_;
}
v_reusejp_4751_:
{
return v___x_4752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object* v_nExtra_4755_, lean_object* v_sz_4756_, lean_object* v_i_4757_, lean_object* v_bs_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_){
_start:
{
size_t v_sz_boxed_4764_; size_t v_i_boxed_4765_; lean_object* v_res_4766_; 
v_sz_boxed_4764_ = lean_unbox_usize(v_sz_4756_);
lean_dec(v_sz_4756_);
v_i_boxed_4765_ = lean_unbox_usize(v_i_4757_);
lean_dec(v_i_4757_);
v_res_4766_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4755_, v_sz_boxed_4764_, v_i_boxed_4765_, v_bs_4758_, v___y_4759_, v___y_4760_, v___y_4761_, v___y_4762_);
lean_dec(v___y_4762_);
lean_dec_ref(v___y_4761_);
lean_dec(v___y_4760_);
lean_dec_ref(v___y_4759_);
return v_res_4766_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0(void){
_start:
{
lean_object* v___x_4767_; lean_object* v___x_4768_; 
v___x_4767_ = lean_box(0);
v___x_4768_ = l_Lean_Expr_sort___override(v___x_4767_);
return v___x_4768_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4769_ = lean_box(0);
v___x_4770_ = l_Lean_Level_succ___override(v___x_4769_);
return v___x_4770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object* v_nExtra_4771_, uint8_t v___x_4772_, uint8_t v___x_4773_, lean_object* v_alts_4774_, lean_object* v_toMatcherInfo_4775_, lean_object* v_matcherName_4776_, lean_object* v_params_4777_, lean_object* v_matcherLevels_4778_, lean_object* v_motiveArgs_4779_, lean_object* v_body_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_){
_start:
{
lean_object* v___x_4786_; 
lean_inc(v_nExtra_4771_);
v___x_4786_ = l_Lean_Meta_arrowDomainsN(v_nExtra_4771_, v_body_4780_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_);
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_object* v_a_4787_; lean_object* v___x_4788_; uint8_t v___x_4789_; lean_object* v___x_4790_; 
v_a_4787_ = lean_ctor_get(v___x_4786_, 0);
lean_inc(v_a_4787_);
lean_dec_ref_known(v___x_4786_, 1);
v___x_4788_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0);
v___x_4789_ = 1;
v___x_4790_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_4779_, v___x_4788_, v___x_4772_, v___x_4773_, v___x_4772_, v___x_4773_, v___x_4789_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_);
if (lean_obj_tag(v___x_4790_) == 0)
{
lean_object* v_a_4791_; size_t v_sz_4792_; size_t v___x_4793_; lean_object* v___x_4794_; 
v_a_4791_ = lean_ctor_get(v___x_4790_, 0);
lean_inc(v_a_4791_);
lean_dec_ref_known(v___x_4790_, 1);
v_sz_4792_ = lean_array_size(v_alts_4774_);
v___x_4793_ = ((size_t)0ULL);
v___x_4794_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4771_, v_sz_4792_, v___x_4793_, v_alts_4774_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_);
if (lean_obj_tag(v___x_4794_) == 0)
{
lean_object* v_a_4795_; lean_object* v_matcherLevels_4797_; lean_object* v___y_4798_; lean_object* v___y_4799_; lean_object* v_uElimPos_x3f_4804_; 
v_a_4795_ = lean_ctor_get(v___x_4794_, 0);
lean_inc(v_a_4795_);
lean_dec_ref_known(v___x_4794_, 1);
v_uElimPos_x3f_4804_ = lean_ctor_get(v_toMatcherInfo_4775_, 3);
if (lean_obj_tag(v_uElimPos_x3f_4804_) == 0)
{
v_matcherLevels_4797_ = v_matcherLevels_4778_;
v___y_4798_ = v___y_4783_;
v___y_4799_ = v___y_4784_;
goto v___jp_4796_;
}
else
{
lean_object* v_val_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; 
v_val_4805_ = lean_ctor_get(v_uElimPos_x3f_4804_, 0);
v___x_4806_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1);
v___x_4807_ = lean_array_set(v_matcherLevels_4778_, v_val_4805_, v___x_4806_);
v_matcherLevels_4797_ = v___x_4807_;
v___y_4798_ = v___y_4783_;
v___y_4799_ = v___y_4784_;
goto v___jp_4796_;
}
v___jp_4796_:
{
lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; 
v___x_4800_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_4801_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4801_, 0, v_toMatcherInfo_4775_);
lean_ctor_set(v___x_4801_, 1, v_matcherName_4776_);
lean_ctor_set(v___x_4801_, 2, v_matcherLevels_4797_);
lean_ctor_set(v___x_4801_, 3, v_params_4777_);
lean_ctor_set(v___x_4801_, 4, v_a_4791_);
lean_ctor_set(v___x_4801_, 5, v_motiveArgs_4779_);
lean_ctor_set(v___x_4801_, 6, v_a_4795_);
lean_ctor_set(v___x_4801_, 7, v___x_4800_);
v___x_4802_ = l_Lean_Meta_MatcherApp_toExpr(v___x_4801_);
v___x_4803_ = l_Lean_mkArrowN(v_a_4787_, v___x_4802_, v___y_4798_, v___y_4799_);
lean_dec(v_a_4787_);
return v___x_4803_;
}
}
else
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4815_; 
lean_dec(v_a_4791_);
lean_dec(v_a_4787_);
lean_dec_ref(v_motiveArgs_4779_);
lean_dec_ref(v_matcherLevels_4778_);
lean_dec_ref(v_params_4777_);
lean_dec(v_matcherName_4776_);
lean_dec_ref(v_toMatcherInfo_4775_);
v_a_4808_ = lean_ctor_get(v___x_4794_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4794_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4810_ = v___x_4794_;
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v___x_4794_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4813_; 
if (v_isShared_4811_ == 0)
{
v___x_4813_ = v___x_4810_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4808_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
return v___x_4813_;
}
}
}
}
else
{
lean_dec(v_a_4787_);
lean_dec_ref(v_motiveArgs_4779_);
lean_dec_ref(v_matcherLevels_4778_);
lean_dec_ref(v_params_4777_);
lean_dec(v_matcherName_4776_);
lean_dec_ref(v_toMatcherInfo_4775_);
lean_dec_ref(v_alts_4774_);
lean_dec(v_nExtra_4771_);
return v___x_4790_;
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4823_; 
lean_dec_ref(v_motiveArgs_4779_);
lean_dec_ref(v_matcherLevels_4778_);
lean_dec_ref(v_params_4777_);
lean_dec(v_matcherName_4776_);
lean_dec_ref(v_toMatcherInfo_4775_);
lean_dec_ref(v_alts_4774_);
lean_dec(v_nExtra_4771_);
v_a_4816_ = lean_ctor_get(v___x_4786_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4786_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4818_ = v___x_4786_;
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v___x_4786_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4821_; 
if (v_isShared_4819_ == 0)
{
v___x_4821_ = v___x_4818_;
goto v_reusejp_4820_;
}
else
{
lean_object* v_reuseFailAlloc_4822_; 
v_reuseFailAlloc_4822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4822_, 0, v_a_4816_);
v___x_4821_ = v_reuseFailAlloc_4822_;
goto v_reusejp_4820_;
}
v_reusejp_4820_:
{
return v___x_4821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object* v_nExtra_4824_, lean_object* v___x_4825_, lean_object* v___x_4826_, lean_object* v_alts_4827_, lean_object* v_toMatcherInfo_4828_, lean_object* v_matcherName_4829_, lean_object* v_params_4830_, lean_object* v_matcherLevels_4831_, lean_object* v_motiveArgs_4832_, lean_object* v_body_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_){
_start:
{
uint8_t v___x_32884__boxed_4839_; uint8_t v___x_32885__boxed_4840_; lean_object* v_res_4841_; 
v___x_32884__boxed_4839_ = lean_unbox(v___x_4825_);
v___x_32885__boxed_4840_ = lean_unbox(v___x_4826_);
v_res_4841_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__3(v_nExtra_4824_, v___x_32884__boxed_4839_, v___x_32885__boxed_4840_, v_alts_4827_, v_toMatcherInfo_4828_, v_matcherName_4829_, v_params_4830_, v_matcherLevels_4831_, v_motiveArgs_4832_, v_body_4833_, v___y_4834_, v___y_4835_, v___y_4836_, v___y_4837_);
lean_dec(v___y_4837_);
lean_dec_ref(v___y_4836_);
lean_dec(v___y_4835_);
lean_dec_ref(v___y_4834_);
return v_res_4841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object* v_k_4842_, lean_object* v_ys_4843_, lean_object* v_args_4844_, lean_object* v___mask_4845_, lean_object* v___bodyType_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_){
_start:
{
lean_object* v___x_4852_; 
lean_inc(v___y_4850_);
lean_inc_ref(v___y_4849_);
lean_inc(v___y_4848_);
lean_inc_ref(v___y_4847_);
v___x_4852_ = lean_apply_7(v_k_4842_, v_ys_4843_, v_args_4844_, v___y_4847_, v___y_4848_, v___y_4849_, v___y_4850_, lean_box(0));
return v___x_4852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object* v_k_4853_, lean_object* v_ys_4854_, lean_object* v_args_4855_, lean_object* v___mask_4856_, lean_object* v___bodyType_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_){
_start:
{
lean_object* v_res_4863_; 
v_res_4863_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(v_k_4853_, v_ys_4854_, v_args_4855_, v___mask_4856_, v___bodyType_4857_, v___y_4858_, v___y_4859_, v___y_4860_, v___y_4861_);
lean_dec(v___y_4861_);
lean_dec_ref(v___y_4860_);
lean_dec(v___y_4859_);
lean_dec_ref(v___y_4858_);
lean_dec_ref(v___bodyType_4857_);
lean_dec_ref(v___mask_4856_);
return v_res_4863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object* v_origAltType_4864_, lean_object* v_altInfo_4865_, lean_object* v_k_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_){
_start:
{
lean_object* v___f_4872_; lean_object* v___x_4873_; 
v___f_4872_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_4872_, 0, v_k_4866_);
v___x_4873_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_4864_, v_altInfo_4865_, v___f_4872_, v___y_4867_, v___y_4868_, v___y_4869_, v___y_4870_);
if (lean_obj_tag(v___x_4873_) == 0)
{
lean_object* v_a_4874_; lean_object* v___x_4876_; uint8_t v_isShared_4877_; uint8_t v_isSharedCheck_4881_; 
v_a_4874_ = lean_ctor_get(v___x_4873_, 0);
v_isSharedCheck_4881_ = !lean_is_exclusive(v___x_4873_);
if (v_isSharedCheck_4881_ == 0)
{
v___x_4876_ = v___x_4873_;
v_isShared_4877_ = v_isSharedCheck_4881_;
goto v_resetjp_4875_;
}
else
{
lean_inc(v_a_4874_);
lean_dec(v___x_4873_);
v___x_4876_ = lean_box(0);
v_isShared_4877_ = v_isSharedCheck_4881_;
goto v_resetjp_4875_;
}
v_resetjp_4875_:
{
lean_object* v___x_4879_; 
if (v_isShared_4877_ == 0)
{
v___x_4879_ = v___x_4876_;
goto v_reusejp_4878_;
}
else
{
lean_object* v_reuseFailAlloc_4880_; 
v_reuseFailAlloc_4880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4880_, 0, v_a_4874_);
v___x_4879_ = v_reuseFailAlloc_4880_;
goto v_reusejp_4878_;
}
v_reusejp_4878_:
{
return v___x_4879_;
}
}
}
else
{
lean_object* v_a_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4889_; 
v_a_4882_ = lean_ctor_get(v___x_4873_, 0);
v_isSharedCheck_4889_ = !lean_is_exclusive(v___x_4873_);
if (v_isSharedCheck_4889_ == 0)
{
v___x_4884_ = v___x_4873_;
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_a_4882_);
lean_dec(v___x_4873_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v___x_4887_; 
if (v_isShared_4885_ == 0)
{
v___x_4887_ = v___x_4884_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4888_; 
v_reuseFailAlloc_4888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4888_, 0, v_a_4882_);
v___x_4887_ = v_reuseFailAlloc_4888_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
return v___x_4887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object* v_origAltType_4890_, lean_object* v_altInfo_4891_, lean_object* v_k_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v_res_4898_; 
v_res_4898_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_4890_, v_altInfo_4891_, v_k_4892_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_);
lean_dec(v___y_4896_);
lean_dec_ref(v___y_4895_);
lean_dec(v___y_4894_);
lean_dec_ref(v___y_4893_);
return v_res_4898_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object* v___x_4899_, lean_object* v___x_4900_, lean_object* v___f_4901_, lean_object* v_fst_4902_, lean_object* v___x_4903_, lean_object* v___x_4904_, lean_object* v___x_4905_, lean_object* v___x_4906_, lean_object* v___x_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_){
_start:
{
lean_object* v___x_4913_; 
v___x_4913_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v___x_4899_, v___x_4900_, v___f_4901_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_);
if (lean_obj_tag(v___x_4913_) == 0)
{
lean_object* v_a_4914_; lean_object* v___x_4916_; uint8_t v_isShared_4917_; uint8_t v_isSharedCheck_4928_; 
v_a_4914_ = lean_ctor_get(v___x_4913_, 0);
v_isSharedCheck_4928_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4928_ == 0)
{
v___x_4916_ = v___x_4913_;
v_isShared_4917_ = v_isSharedCheck_4928_;
goto v_resetjp_4915_;
}
else
{
lean_inc(v_a_4914_);
lean_dec(v___x_4913_);
v___x_4916_ = lean_box(0);
v_isShared_4917_ = v_isSharedCheck_4928_;
goto v_resetjp_4915_;
}
v_resetjp_4915_:
{
lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4926_; 
v___x_4918_ = lean_array_push(v_fst_4902_, v_a_4914_);
v___x_4919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4919_, 0, v___x_4903_);
lean_ctor_set(v___x_4919_, 1, v___x_4904_);
v___x_4920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4920_, 0, v___x_4905_);
lean_ctor_set(v___x_4920_, 1, v___x_4919_);
v___x_4921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4921_, 0, v___x_4906_);
lean_ctor_set(v___x_4921_, 1, v___x_4920_);
v___x_4922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4922_, 0, v___x_4907_);
lean_ctor_set(v___x_4922_, 1, v___x_4921_);
v___x_4923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4923_, 0, v___x_4918_);
lean_ctor_set(v___x_4923_, 1, v___x_4922_);
v___x_4924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4924_, 0, v___x_4923_);
if (v_isShared_4917_ == 0)
{
lean_ctor_set(v___x_4916_, 0, v___x_4924_);
v___x_4926_ = v___x_4916_;
goto v_reusejp_4925_;
}
else
{
lean_object* v_reuseFailAlloc_4927_; 
v_reuseFailAlloc_4927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4927_, 0, v___x_4924_);
v___x_4926_ = v_reuseFailAlloc_4927_;
goto v_reusejp_4925_;
}
v_reusejp_4925_:
{
return v___x_4926_;
}
}
}
else
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4936_; 
lean_dec_ref(v___x_4907_);
lean_dec_ref(v___x_4906_);
lean_dec_ref(v___x_4905_);
lean_dec_ref(v___x_4904_);
lean_dec_ref(v___x_4903_);
lean_dec(v_fst_4902_);
v_a_4929_ = lean_ctor_get(v___x_4913_, 0);
v_isSharedCheck_4936_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4931_ = v___x_4913_;
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v___x_4913_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v___x_4934_; 
if (v_isShared_4932_ == 0)
{
v___x_4934_ = v___x_4931_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v_a_4929_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
return v___x_4934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object* v___x_4937_, lean_object* v___x_4938_, lean_object* v___f_4939_, lean_object* v_fst_4940_, lean_object* v___x_4941_, lean_object* v___x_4942_, lean_object* v___x_4943_, lean_object* v___x_4944_, lean_object* v___x_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_){
_start:
{
lean_object* v_res_4951_; 
v_res_4951_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(v___x_4937_, v___x_4938_, v___f_4939_, v_fst_4940_, v___x_4941_, v___x_4942_, v___x_4943_, v___x_4944_, v___x_4945_, v___y_4946_, v___y_4947_, v___y_4948_, v___y_4949_);
lean_dec(v___y_4949_);
lean_dec_ref(v___y_4948_);
lean_dec(v___y_4947_);
lean_dec_ref(v___y_4946_);
return v_res_4951_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object* v_args_4952_, lean_object* v_ys_4953_, lean_object* v_ys2_4954_, lean_object* v_ys3_4955_, lean_object* v_onAlt_4956_, lean_object* v_a_4957_, uint8_t v___x_4958_, uint8_t v___x_4959_, lean_object* v___x_4960_, lean_object* v_ys4_4961_, lean_object* v_altType_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_){
_start:
{
lean_object* v_a_4969_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
lean_inc_ref(v_args_4952_);
v___x_4978_ = l_Array_append___redArg(v_args_4952_, v_ys3_4955_);
v___x_4979_ = l_Lean_Meta_instantiateLambda(v___x_4960_, v___x_4978_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_);
lean_dec_ref(v___x_4978_);
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_object* v_a_4980_; 
v_a_4980_ = lean_ctor_get(v___x_4979_, 0);
lean_inc(v_a_4980_);
lean_dec_ref_known(v___x_4979_, 1);
v_a_4969_ = v_a_4980_;
goto v___jp_4968_;
}
else
{
lean_object* v_a_4981_; uint8_t v___x_4982_; 
v_a_4981_ = lean_ctor_get(v___x_4979_, 0);
v___x_4982_ = l_Lean_Exception_isInterrupt(v_a_4981_);
if (v___x_4982_ == 0)
{
uint8_t v___x_4983_; 
lean_inc(v_a_4981_);
v___x_4983_ = l_Lean_Exception_isRuntime(v_a_4981_);
if (v___x_4983_ == 0)
{
lean_object* v___x_4984_; lean_object* v___x_4985_; 
lean_dec_ref_known(v___x_4979_, 1);
v___x_4984_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3);
v___x_4985_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_4984_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_);
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_object* v_a_4986_; 
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
lean_inc(v_a_4986_);
lean_dec_ref_known(v___x_4985_, 1);
v_a_4969_ = v_a_4986_;
goto v___jp_4968_;
}
else
{
lean_dec_ref(v_altType_4962_);
lean_dec_ref(v_ys4_4961_);
lean_dec(v_a_4957_);
lean_dec_ref(v_onAlt_4956_);
lean_dec_ref(v_ys3_4955_);
lean_dec_ref(v_ys2_4954_);
lean_dec_ref(v_ys_4953_);
lean_dec_ref(v_args_4952_);
return v___x_4985_;
}
}
else
{
lean_dec_ref(v_altType_4962_);
lean_dec_ref(v_ys4_4961_);
lean_dec(v_a_4957_);
lean_dec_ref(v_onAlt_4956_);
lean_dec_ref(v_ys3_4955_);
lean_dec_ref(v_ys2_4954_);
lean_dec_ref(v_ys_4953_);
lean_dec_ref(v_args_4952_);
return v___x_4979_;
}
}
else
{
lean_dec_ref(v_altType_4962_);
lean_dec_ref(v_ys4_4961_);
lean_dec(v_a_4957_);
lean_dec_ref(v_onAlt_4956_);
lean_dec_ref(v_ys3_4955_);
lean_dec_ref(v_ys2_4954_);
lean_dec_ref(v_ys_4953_);
lean_dec_ref(v_args_4952_);
return v___x_4979_;
}
}
v___jp_4968_:
{
lean_object* v___x_4970_; lean_object* v___x_4971_; 
lean_inc_ref(v_ys4_4961_);
lean_inc_ref(v_ys3_4955_);
lean_inc_ref(v_ys2_4954_);
lean_inc_ref(v_ys_4953_);
v___x_4970_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4970_, 0, v_args_4952_);
lean_ctor_set(v___x_4970_, 1, v_ys_4953_);
lean_ctor_set(v___x_4970_, 2, v_ys2_4954_);
lean_ctor_set(v___x_4970_, 3, v_ys3_4955_);
lean_ctor_set(v___x_4970_, 4, v_ys4_4961_);
lean_inc(v___y_4966_);
lean_inc_ref(v___y_4965_);
lean_inc(v___y_4964_);
lean_inc_ref(v___y_4963_);
v___x_4971_ = lean_apply_9(v_onAlt_4956_, v_a_4957_, v_altType_4962_, v___x_4970_, v_a_4969_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_, lean_box(0));
if (lean_obj_tag(v___x_4971_) == 0)
{
lean_object* v_a_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; uint8_t v___x_4976_; lean_object* v___x_4977_; 
v_a_4972_ = lean_ctor_get(v___x_4971_, 0);
lean_inc(v_a_4972_);
lean_dec_ref_known(v___x_4971_, 1);
v___x_4973_ = l_Array_append___redArg(v_ys_4953_, v_ys2_4954_);
lean_dec_ref(v_ys2_4954_);
v___x_4974_ = l_Array_append___redArg(v___x_4973_, v_ys3_4955_);
lean_dec_ref(v_ys3_4955_);
v___x_4975_ = l_Array_append___redArg(v___x_4974_, v_ys4_4961_);
lean_dec_ref(v_ys4_4961_);
v___x_4976_ = 1;
v___x_4977_ = l_Lean_Meta_mkLambdaFVars(v___x_4975_, v_a_4972_, v___x_4958_, v___x_4959_, v___x_4958_, v___x_4959_, v___x_4976_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_);
lean_dec_ref(v___x_4975_);
return v___x_4977_;
}
else
{
lean_dec_ref(v_ys4_4961_);
lean_dec_ref(v_ys3_4955_);
lean_dec_ref(v_ys2_4954_);
lean_dec_ref(v_ys_4953_);
return v___x_4971_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object* v_args_4987_, lean_object* v_ys_4988_, lean_object* v_ys2_4989_, lean_object* v_ys3_4990_, lean_object* v_onAlt_4991_, lean_object* v_a_4992_, lean_object* v___x_4993_, lean_object* v___x_4994_, lean_object* v___x_4995_, lean_object* v_ys4_4996_, lean_object* v_altType_4997_, lean_object* v___y_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_){
_start:
{
uint8_t v___x_33138__boxed_5003_; uint8_t v___x_33139__boxed_5004_; lean_object* v_res_5005_; 
v___x_33138__boxed_5003_ = lean_unbox(v___x_4993_);
v___x_33139__boxed_5004_ = lean_unbox(v___x_4994_);
v_res_5005_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(v_args_4987_, v_ys_4988_, v_ys2_4989_, v_ys3_4990_, v_onAlt_4991_, v_a_4992_, v___x_33138__boxed_5003_, v___x_33139__boxed_5004_, v___x_4995_, v_ys4_4996_, v_altType_4997_, v___y_4998_, v___y_4999_, v___y_5000_, v___y_5001_);
lean_dec(v___y_5001_);
lean_dec_ref(v___y_5000_);
lean_dec(v___y_4999_);
lean_dec_ref(v___y_4998_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object* v_args_5006_, lean_object* v_ys_5007_, lean_object* v_ys2_5008_, lean_object* v_onAlt_5009_, lean_object* v_a_5010_, uint8_t v___x_5011_, uint8_t v___x_5012_, lean_object* v___x_5013_, lean_object* v_extraEqualities_5014_, lean_object* v_ys3_5015_, lean_object* v_altType_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_){
_start:
{
lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___f_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; 
v___x_5022_ = lean_box(v___x_5011_);
v___x_5023_ = lean_box(v___x_5012_);
v___f_5024_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed), 16, 9);
lean_closure_set(v___f_5024_, 0, v_args_5006_);
lean_closure_set(v___f_5024_, 1, v_ys_5007_);
lean_closure_set(v___f_5024_, 2, v_ys2_5008_);
lean_closure_set(v___f_5024_, 3, v_ys3_5015_);
lean_closure_set(v___f_5024_, 4, v_onAlt_5009_);
lean_closure_set(v___f_5024_, 5, v_a_5010_);
lean_closure_set(v___f_5024_, 6, v___x_5022_);
lean_closure_set(v___f_5024_, 7, v___x_5023_);
lean_closure_set(v___f_5024_, 8, v___x_5013_);
v___x_5025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5025_, 0, v_extraEqualities_5014_);
v___x_5026_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_5016_, v___x_5025_, v___f_5024_, v___x_5011_, v___x_5011_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_);
return v___x_5026_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object* v_args_5027_, lean_object* v_ys_5028_, lean_object* v_ys2_5029_, lean_object* v_onAlt_5030_, lean_object* v_a_5031_, lean_object* v___x_5032_, lean_object* v___x_5033_, lean_object* v___x_5034_, lean_object* v_extraEqualities_5035_, lean_object* v_ys3_5036_, lean_object* v_altType_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_){
_start:
{
uint8_t v___x_33203__boxed_5043_; uint8_t v___x_33204__boxed_5044_; lean_object* v_res_5045_; 
v___x_33203__boxed_5043_ = lean_unbox(v___x_5032_);
v___x_33204__boxed_5044_ = lean_unbox(v___x_5033_);
v_res_5045_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(v_args_5027_, v_ys_5028_, v_ys2_5029_, v_onAlt_5030_, v_a_5031_, v___x_33203__boxed_5043_, v___x_33204__boxed_5044_, v___x_5034_, v_extraEqualities_5035_, v_ys3_5036_, v_altType_5037_, v___y_5038_, v___y_5039_, v___y_5040_, v___y_5041_);
lean_dec(v___y_5041_);
lean_dec_ref(v___y_5040_);
lean_dec(v___y_5039_);
lean_dec_ref(v___y_5038_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object* v_args_5046_, lean_object* v_ys_5047_, lean_object* v_onAlt_5048_, lean_object* v_a_5049_, uint8_t v___x_5050_, uint8_t v___x_5051_, lean_object* v___x_5052_, lean_object* v_extraEqualities_5053_, lean_object* v_numDiscrEqs_5054_, lean_object* v_ys2_5055_, lean_object* v_altType_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_){
_start:
{
lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___f_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; 
v___x_5062_ = lean_box(v___x_5050_);
v___x_5063_ = lean_box(v___x_5051_);
v___f_5064_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_5064_, 0, v_args_5046_);
lean_closure_set(v___f_5064_, 1, v_ys_5047_);
lean_closure_set(v___f_5064_, 2, v_ys2_5055_);
lean_closure_set(v___f_5064_, 3, v_onAlt_5048_);
lean_closure_set(v___f_5064_, 4, v_a_5049_);
lean_closure_set(v___f_5064_, 5, v___x_5062_);
lean_closure_set(v___f_5064_, 6, v___x_5063_);
lean_closure_set(v___f_5064_, 7, v___x_5052_);
lean_closure_set(v___f_5064_, 8, v_extraEqualities_5053_);
v___x_5065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5065_, 0, v_numDiscrEqs_5054_);
v___x_5066_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_5056_, v___x_5065_, v___f_5064_, v___x_5050_, v___x_5050_, v___y_5057_, v___y_5058_, v___y_5059_, v___y_5060_);
return v___x_5066_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object* v_args_5067_, lean_object* v_ys_5068_, lean_object* v_onAlt_5069_, lean_object* v_a_5070_, lean_object* v___x_5071_, lean_object* v___x_5072_, lean_object* v___x_5073_, lean_object* v_extraEqualities_5074_, lean_object* v_numDiscrEqs_5075_, lean_object* v_ys2_5076_, lean_object* v_altType_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_){
_start:
{
uint8_t v___x_33237__boxed_5083_; uint8_t v___x_33238__boxed_5084_; lean_object* v_res_5085_; 
v___x_33237__boxed_5083_ = lean_unbox(v___x_5071_);
v___x_33238__boxed_5084_ = lean_unbox(v___x_5072_);
v_res_5085_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(v_args_5067_, v_ys_5068_, v_onAlt_5069_, v_a_5070_, v___x_33237__boxed_5083_, v___x_33238__boxed_5084_, v___x_5073_, v_extraEqualities_5074_, v_numDiscrEqs_5075_, v_ys2_5076_, v_altType_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_);
lean_dec(v___y_5081_);
lean_dec_ref(v___y_5080_);
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
return v_res_5085_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0(void){
_start:
{
lean_object* v___x_5086_; 
v___x_5086_ = l_instMonadEIO___redArg();
return v___x_5086_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object* v_msg_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_){
_start:
{
lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v_toApplicative_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5160_; 
v___x_5097_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0);
v___x_5098_ = l_StateRefT_x27_instMonad___redArg(v___x_5097_);
v_toApplicative_5099_ = lean_ctor_get(v___x_5098_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___x_5098_);
if (v_isSharedCheck_5160_ == 0)
{
lean_object* v_unused_5161_; 
v_unused_5161_ = lean_ctor_get(v___x_5098_, 1);
lean_dec(v_unused_5161_);
v___x_5101_ = v___x_5098_;
v_isShared_5102_ = v_isSharedCheck_5160_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_toApplicative_5099_);
lean_dec(v___x_5098_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5160_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v_toFunctor_5103_; lean_object* v_toSeq_5104_; lean_object* v_toSeqLeft_5105_; lean_object* v_toSeqRight_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5158_; 
v_toFunctor_5103_ = lean_ctor_get(v_toApplicative_5099_, 0);
v_toSeq_5104_ = lean_ctor_get(v_toApplicative_5099_, 2);
v_toSeqLeft_5105_ = lean_ctor_get(v_toApplicative_5099_, 3);
v_toSeqRight_5106_ = lean_ctor_get(v_toApplicative_5099_, 4);
v_isSharedCheck_5158_ = !lean_is_exclusive(v_toApplicative_5099_);
if (v_isSharedCheck_5158_ == 0)
{
lean_object* v_unused_5159_; 
v_unused_5159_ = lean_ctor_get(v_toApplicative_5099_, 1);
lean_dec(v_unused_5159_);
v___x_5108_ = v_toApplicative_5099_;
v_isShared_5109_ = v_isSharedCheck_5158_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_toSeqRight_5106_);
lean_inc(v_toSeqLeft_5105_);
lean_inc(v_toSeq_5104_);
lean_inc(v_toFunctor_5103_);
lean_dec(v_toApplicative_5099_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5158_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v___f_5110_; lean_object* v___f_5111_; lean_object* v___f_5112_; lean_object* v___f_5113_; lean_object* v___x_5114_; lean_object* v___f_5115_; lean_object* v___f_5116_; lean_object* v___f_5117_; lean_object* v___x_5119_; 
v___f_5110_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5111_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
lean_inc_ref(v_toFunctor_5103_);
v___f_5112_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5112_, 0, v_toFunctor_5103_);
v___f_5113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5113_, 0, v_toFunctor_5103_);
v___x_5114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5114_, 0, v___f_5112_);
lean_ctor_set(v___x_5114_, 1, v___f_5113_);
v___f_5115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5115_, 0, v_toSeqRight_5106_);
v___f_5116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5116_, 0, v_toSeqLeft_5105_);
v___f_5117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5117_, 0, v_toSeq_5104_);
if (v_isShared_5109_ == 0)
{
lean_ctor_set(v___x_5108_, 4, v___f_5115_);
lean_ctor_set(v___x_5108_, 3, v___f_5116_);
lean_ctor_set(v___x_5108_, 2, v___f_5117_);
lean_ctor_set(v___x_5108_, 1, v___f_5110_);
lean_ctor_set(v___x_5108_, 0, v___x_5114_);
v___x_5119_ = v___x_5108_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5157_; 
v_reuseFailAlloc_5157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5157_, 0, v___x_5114_);
lean_ctor_set(v_reuseFailAlloc_5157_, 1, v___f_5110_);
lean_ctor_set(v_reuseFailAlloc_5157_, 2, v___f_5117_);
lean_ctor_set(v_reuseFailAlloc_5157_, 3, v___f_5116_);
lean_ctor_set(v_reuseFailAlloc_5157_, 4, v___f_5115_);
v___x_5119_ = v_reuseFailAlloc_5157_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
lean_object* v___x_5121_; 
if (v_isShared_5102_ == 0)
{
lean_ctor_set(v___x_5101_, 1, v___f_5111_);
lean_ctor_set(v___x_5101_, 0, v___x_5119_);
v___x_5121_ = v___x_5101_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5156_; 
v_reuseFailAlloc_5156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5156_, 0, v___x_5119_);
lean_ctor_set(v_reuseFailAlloc_5156_, 1, v___f_5111_);
v___x_5121_ = v_reuseFailAlloc_5156_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
lean_object* v___x_5122_; lean_object* v_toApplicative_5123_; lean_object* v___x_5125_; uint8_t v_isShared_5126_; uint8_t v_isSharedCheck_5154_; 
v___x_5122_ = l_StateRefT_x27_instMonad___redArg(v___x_5121_);
v_toApplicative_5123_ = lean_ctor_get(v___x_5122_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_5122_);
if (v_isSharedCheck_5154_ == 0)
{
lean_object* v_unused_5155_; 
v_unused_5155_ = lean_ctor_get(v___x_5122_, 1);
lean_dec(v_unused_5155_);
v___x_5125_ = v___x_5122_;
v_isShared_5126_ = v_isSharedCheck_5154_;
goto v_resetjp_5124_;
}
else
{
lean_inc(v_toApplicative_5123_);
lean_dec(v___x_5122_);
v___x_5125_ = lean_box(0);
v_isShared_5126_ = v_isSharedCheck_5154_;
goto v_resetjp_5124_;
}
v_resetjp_5124_:
{
lean_object* v_toFunctor_5127_; lean_object* v_toSeq_5128_; lean_object* v_toSeqLeft_5129_; lean_object* v_toSeqRight_5130_; lean_object* v___x_5132_; uint8_t v_isShared_5133_; uint8_t v_isSharedCheck_5152_; 
v_toFunctor_5127_ = lean_ctor_get(v_toApplicative_5123_, 0);
v_toSeq_5128_ = lean_ctor_get(v_toApplicative_5123_, 2);
v_toSeqLeft_5129_ = lean_ctor_get(v_toApplicative_5123_, 3);
v_toSeqRight_5130_ = lean_ctor_get(v_toApplicative_5123_, 4);
v_isSharedCheck_5152_ = !lean_is_exclusive(v_toApplicative_5123_);
if (v_isSharedCheck_5152_ == 0)
{
lean_object* v_unused_5153_; 
v_unused_5153_ = lean_ctor_get(v_toApplicative_5123_, 1);
lean_dec(v_unused_5153_);
v___x_5132_ = v_toApplicative_5123_;
v_isShared_5133_ = v_isSharedCheck_5152_;
goto v_resetjp_5131_;
}
else
{
lean_inc(v_toSeqRight_5130_);
lean_inc(v_toSeqLeft_5129_);
lean_inc(v_toSeq_5128_);
lean_inc(v_toFunctor_5127_);
lean_dec(v_toApplicative_5123_);
v___x_5132_ = lean_box(0);
v_isShared_5133_ = v_isSharedCheck_5152_;
goto v_resetjp_5131_;
}
v_resetjp_5131_:
{
lean_object* v___f_5134_; lean_object* v___f_5135_; lean_object* v___f_5136_; lean_object* v___f_5137_; lean_object* v___x_5138_; lean_object* v___f_5139_; lean_object* v___f_5140_; lean_object* v___f_5141_; lean_object* v___x_5143_; 
v___f_5134_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5135_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
lean_inc_ref(v_toFunctor_5127_);
v___f_5136_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5136_, 0, v_toFunctor_5127_);
v___f_5137_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5137_, 0, v_toFunctor_5127_);
v___x_5138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5138_, 0, v___f_5136_);
lean_ctor_set(v___x_5138_, 1, v___f_5137_);
v___f_5139_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5139_, 0, v_toSeqRight_5130_);
v___f_5140_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5140_, 0, v_toSeqLeft_5129_);
v___f_5141_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5141_, 0, v_toSeq_5128_);
if (v_isShared_5133_ == 0)
{
lean_ctor_set(v___x_5132_, 4, v___f_5139_);
lean_ctor_set(v___x_5132_, 3, v___f_5140_);
lean_ctor_set(v___x_5132_, 2, v___f_5141_);
lean_ctor_set(v___x_5132_, 1, v___f_5134_);
lean_ctor_set(v___x_5132_, 0, v___x_5138_);
v___x_5143_ = v___x_5132_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5151_; 
v_reuseFailAlloc_5151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5151_, 0, v___x_5138_);
lean_ctor_set(v_reuseFailAlloc_5151_, 1, v___f_5134_);
lean_ctor_set(v_reuseFailAlloc_5151_, 2, v___f_5141_);
lean_ctor_set(v_reuseFailAlloc_5151_, 3, v___f_5140_);
lean_ctor_set(v_reuseFailAlloc_5151_, 4, v___f_5139_);
v___x_5143_ = v_reuseFailAlloc_5151_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
lean_object* v___x_5145_; 
if (v_isShared_5126_ == 0)
{
lean_ctor_set(v___x_5125_, 1, v___f_5135_);
lean_ctor_set(v___x_5125_, 0, v___x_5143_);
v___x_5145_ = v___x_5125_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v___x_5143_);
lean_ctor_set(v_reuseFailAlloc_5150_, 1, v___f_5135_);
v___x_5145_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_27376__overap_5148_; lean_object* v___x_5149_; 
v___x_5146_ = l_Lean_instInhabitedExpr;
v___x_5147_ = l_instInhabitedOfMonad___redArg(v___x_5145_, v___x_5146_);
v___x_27376__overap_5148_ = lean_panic_fn_borrowed(v___x_5147_, v_msg_5091_);
lean_dec(v___x_5147_);
lean_inc(v___y_5095_);
lean_inc_ref(v___y_5094_);
lean_inc(v___y_5093_);
lean_inc_ref(v___y_5092_);
v___x_5149_ = lean_apply_5(v___x_27376__overap_5148_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_, lean_box(0));
return v___x_5149_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object* v_msg_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_){
_start:
{
lean_object* v_res_5168_; 
v_res_5168_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v_msg_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_);
lean_dec(v___y_5166_);
lean_dec_ref(v___y_5165_);
lean_dec(v___y_5164_);
lean_dec_ref(v___y_5163_);
return v_res_5168_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object* v___x_5169_, lean_object* v_onAlt_5170_, lean_object* v_a_5171_, uint8_t v___x_5172_, lean_object* v___x_5173_, lean_object* v_extraEqualities_5174_, lean_object* v_numDiscrEqs_5175_, lean_object* v___x_5176_, lean_object* v___x_5177_, lean_object* v_ys_5178_, lean_object* v_args_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v___y_5183_){
_start:
{
lean_object* v_numFields_5185_; lean_object* v_numOverlaps_5186_; uint8_t v_hasUnitThunk_5187_; lean_object* v___x_5188_; uint8_t v___x_5189_; 
v_numFields_5185_ = lean_ctor_get(v___x_5169_, 0);
v_numOverlaps_5186_ = lean_ctor_get(v___x_5169_, 1);
v_hasUnitThunk_5187_ = lean_ctor_get_uint8(v___x_5169_, sizeof(void*)*2);
v___x_5188_ = lean_array_get_size(v_ys_5178_);
v___x_5189_ = lean_nat_dec_eq(v___x_5188_, v_numFields_5185_);
if (v___x_5189_ == 0)
{
lean_object* v___x_5190_; lean_object* v___x_5191_; 
lean_dec_ref(v_args_5179_);
lean_dec_ref(v_ys_5178_);
lean_dec_ref(v___x_5176_);
lean_dec(v_numDiscrEqs_5175_);
lean_dec(v_extraEqualities_5174_);
lean_dec_ref(v___x_5173_);
lean_dec(v_a_5171_);
lean_dec_ref(v_onAlt_5170_);
v___x_5190_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_5191_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v___x_5190_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
return v___x_5191_;
}
else
{
lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___f_5194_; lean_object* v_altType_5196_; lean_object* v___y_5197_; lean_object* v___y_5198_; lean_object* v___y_5199_; lean_object* v___y_5200_; lean_object* v___x_5210_; 
v___x_5192_ = lean_box(v___x_5172_);
v___x_5193_ = lean_box(v___x_5189_);
lean_inc_ref(v_ys_5178_);
v___f_5194_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed), 16, 9);
lean_closure_set(v___f_5194_, 0, v_args_5179_);
lean_closure_set(v___f_5194_, 1, v_ys_5178_);
lean_closure_set(v___f_5194_, 2, v_onAlt_5170_);
lean_closure_set(v___f_5194_, 3, v_a_5171_);
lean_closure_set(v___f_5194_, 4, v___x_5192_);
lean_closure_set(v___f_5194_, 5, v___x_5193_);
lean_closure_set(v___f_5194_, 6, v___x_5173_);
lean_closure_set(v___f_5194_, 7, v_extraEqualities_5174_);
lean_closure_set(v___f_5194_, 8, v_numDiscrEqs_5175_);
v___x_5210_ = l_Lean_Meta_instantiateForall(v___x_5176_, v_ys_5178_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
lean_dec_ref(v_ys_5178_);
if (lean_obj_tag(v___x_5210_) == 0)
{
if (v_hasUnitThunk_5187_ == 0)
{
lean_object* v_a_5211_; 
v_a_5211_ = lean_ctor_get(v___x_5210_, 0);
lean_inc(v_a_5211_);
lean_dec_ref_known(v___x_5210_, 1);
v_altType_5196_ = v_a_5211_;
v___y_5197_ = v___y_5180_;
v___y_5198_ = v___y_5181_;
v___y_5199_ = v___y_5182_;
v___y_5200_ = v___y_5183_;
goto v___jp_5195_;
}
else
{
lean_object* v_a_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; 
v_a_5212_ = lean_ctor_get(v___x_5210_, 0);
lean_inc(v_a_5212_);
lean_dec_ref_known(v___x_5210_, 1);
v___x_5213_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_5214_ = lean_mk_empty_array_with_capacity(v___x_5177_);
v___x_5215_ = lean_array_push(v___x_5214_, v___x_5213_);
v___x_5216_ = l_Lean_Meta_instantiateForall(v_a_5212_, v___x_5215_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
lean_dec_ref(v___x_5215_);
if (lean_obj_tag(v___x_5216_) == 0)
{
lean_object* v_a_5217_; 
v_a_5217_ = lean_ctor_get(v___x_5216_, 0);
lean_inc(v_a_5217_);
lean_dec_ref_known(v___x_5216_, 1);
v_altType_5196_ = v_a_5217_;
v___y_5197_ = v___y_5180_;
v___y_5198_ = v___y_5181_;
v___y_5199_ = v___y_5182_;
v___y_5200_ = v___y_5183_;
goto v___jp_5195_;
}
else
{
lean_dec_ref(v___f_5194_);
return v___x_5216_;
}
}
}
else
{
lean_dec_ref(v___f_5194_);
return v___x_5210_;
}
v___jp_5195_:
{
lean_object* v___x_5201_; lean_object* v___x_5202_; 
lean_inc(v_numOverlaps_5186_);
v___x_5201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5201_, 0, v_numOverlaps_5186_);
v___x_5202_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_5196_, v___x_5201_, v___f_5194_, v___x_5172_, v___x_5172_, v___y_5197_, v___y_5198_, v___y_5199_, v___y_5200_);
if (lean_obj_tag(v___x_5202_) == 0)
{
if (v_hasUnitThunk_5187_ == 0)
{
return v___x_5202_;
}
else
{
lean_object* v_a_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; 
v_a_5203_ = lean_ctor_get(v___x_5202_, 0);
lean_inc(v_a_5203_);
lean_dec_ref_known(v___x_5202_, 1);
v___x_5204_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__2));
v___x_5205_ = lean_unsigned_to_nat(2u);
v___x_5206_ = lean_mk_empty_array_with_capacity(v___x_5205_);
lean_dec_ref(v___x_5206_);
v___x_5207_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__34___closed__6);
v___x_5208_ = lean_array_push(v___x_5207_, v_a_5203_);
v___x_5209_ = l_Lean_Meta_mkAppM(v___x_5204_, v___x_5208_, v___y_5197_, v___y_5198_, v___y_5199_, v___y_5200_);
return v___x_5209_;
}
}
else
{
return v___x_5202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object* v___x_5218_, lean_object* v_onAlt_5219_, lean_object* v_a_5220_, lean_object* v___x_5221_, lean_object* v___x_5222_, lean_object* v_extraEqualities_5223_, lean_object* v_numDiscrEqs_5224_, lean_object* v___x_5225_, lean_object* v___x_5226_, lean_object* v_ys_5227_, lean_object* v_args_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_){
_start:
{
uint8_t v___x_33442__boxed_5234_; lean_object* v_res_5235_; 
v___x_33442__boxed_5234_ = lean_unbox(v___x_5221_);
v_res_5235_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(v___x_5218_, v_onAlt_5219_, v_a_5220_, v___x_33442__boxed_5234_, v___x_5222_, v_extraEqualities_5223_, v_numDiscrEqs_5224_, v___x_5225_, v___x_5226_, v_ys_5227_, v_args_5228_, v___y_5229_, v___y_5230_, v___y_5231_, v___y_5232_);
lean_dec(v___y_5232_);
lean_dec_ref(v___y_5231_);
lean_dec(v___y_5230_);
lean_dec_ref(v___y_5229_);
lean_dec(v___x_5226_);
lean_dec_ref(v___x_5218_);
return v_res_5235_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object* v_msg_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_, lean_object* v___y_5240_){
_start:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v_toApplicative_5244_; lean_object* v___x_5246_; uint8_t v_isShared_5247_; uint8_t v_isSharedCheck_5305_; 
v___x_5242_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__0);
v___x_5243_ = l_StateRefT_x27_instMonad___redArg(v___x_5242_);
v_toApplicative_5244_ = lean_ctor_get(v___x_5243_, 0);
v_isSharedCheck_5305_ = !lean_is_exclusive(v___x_5243_);
if (v_isSharedCheck_5305_ == 0)
{
lean_object* v_unused_5306_; 
v_unused_5306_ = lean_ctor_get(v___x_5243_, 1);
lean_dec(v_unused_5306_);
v___x_5246_ = v___x_5243_;
v_isShared_5247_ = v_isSharedCheck_5305_;
goto v_resetjp_5245_;
}
else
{
lean_inc(v_toApplicative_5244_);
lean_dec(v___x_5243_);
v___x_5246_ = lean_box(0);
v_isShared_5247_ = v_isSharedCheck_5305_;
goto v_resetjp_5245_;
}
v_resetjp_5245_:
{
lean_object* v_toFunctor_5248_; lean_object* v_toSeq_5249_; lean_object* v_toSeqLeft_5250_; lean_object* v_toSeqRight_5251_; lean_object* v___x_5253_; uint8_t v_isShared_5254_; uint8_t v_isSharedCheck_5303_; 
v_toFunctor_5248_ = lean_ctor_get(v_toApplicative_5244_, 0);
v_toSeq_5249_ = lean_ctor_get(v_toApplicative_5244_, 2);
v_toSeqLeft_5250_ = lean_ctor_get(v_toApplicative_5244_, 3);
v_toSeqRight_5251_ = lean_ctor_get(v_toApplicative_5244_, 4);
v_isSharedCheck_5303_ = !lean_is_exclusive(v_toApplicative_5244_);
if (v_isSharedCheck_5303_ == 0)
{
lean_object* v_unused_5304_; 
v_unused_5304_ = lean_ctor_get(v_toApplicative_5244_, 1);
lean_dec(v_unused_5304_);
v___x_5253_ = v_toApplicative_5244_;
v_isShared_5254_ = v_isSharedCheck_5303_;
goto v_resetjp_5252_;
}
else
{
lean_inc(v_toSeqRight_5251_);
lean_inc(v_toSeqLeft_5250_);
lean_inc(v_toSeq_5249_);
lean_inc(v_toFunctor_5248_);
lean_dec(v_toApplicative_5244_);
v___x_5253_ = lean_box(0);
v_isShared_5254_ = v_isSharedCheck_5303_;
goto v_resetjp_5252_;
}
v_resetjp_5252_:
{
lean_object* v___f_5255_; lean_object* v___f_5256_; lean_object* v___f_5257_; lean_object* v___f_5258_; lean_object* v___x_5259_; lean_object* v___f_5260_; lean_object* v___f_5261_; lean_object* v___f_5262_; lean_object* v___x_5264_; 
v___f_5255_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__1));
v___f_5256_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__2));
lean_inc_ref(v_toFunctor_5248_);
v___f_5257_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5257_, 0, v_toFunctor_5248_);
v___f_5258_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5258_, 0, v_toFunctor_5248_);
v___x_5259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5259_, 0, v___f_5257_);
lean_ctor_set(v___x_5259_, 1, v___f_5258_);
v___f_5260_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5260_, 0, v_toSeqRight_5251_);
v___f_5261_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5261_, 0, v_toSeqLeft_5250_);
v___f_5262_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5262_, 0, v_toSeq_5249_);
if (v_isShared_5254_ == 0)
{
lean_ctor_set(v___x_5253_, 4, v___f_5260_);
lean_ctor_set(v___x_5253_, 3, v___f_5261_);
lean_ctor_set(v___x_5253_, 2, v___f_5262_);
lean_ctor_set(v___x_5253_, 1, v___f_5255_);
lean_ctor_set(v___x_5253_, 0, v___x_5259_);
v___x_5264_ = v___x_5253_;
goto v_reusejp_5263_;
}
else
{
lean_object* v_reuseFailAlloc_5302_; 
v_reuseFailAlloc_5302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5302_, 0, v___x_5259_);
lean_ctor_set(v_reuseFailAlloc_5302_, 1, v___f_5255_);
lean_ctor_set(v_reuseFailAlloc_5302_, 2, v___f_5262_);
lean_ctor_set(v_reuseFailAlloc_5302_, 3, v___f_5261_);
lean_ctor_set(v_reuseFailAlloc_5302_, 4, v___f_5260_);
v___x_5264_ = v_reuseFailAlloc_5302_;
goto v_reusejp_5263_;
}
v_reusejp_5263_:
{
lean_object* v___x_5266_; 
if (v_isShared_5247_ == 0)
{
lean_ctor_set(v___x_5246_, 1, v___f_5256_);
lean_ctor_set(v___x_5246_, 0, v___x_5264_);
v___x_5266_ = v___x_5246_;
goto v_reusejp_5265_;
}
else
{
lean_object* v_reuseFailAlloc_5301_; 
v_reuseFailAlloc_5301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5301_, 0, v___x_5264_);
lean_ctor_set(v_reuseFailAlloc_5301_, 1, v___f_5256_);
v___x_5266_ = v_reuseFailAlloc_5301_;
goto v_reusejp_5265_;
}
v_reusejp_5265_:
{
lean_object* v___x_5267_; lean_object* v_toApplicative_5268_; lean_object* v___x_5270_; uint8_t v_isShared_5271_; uint8_t v_isSharedCheck_5299_; 
v___x_5267_ = l_StateRefT_x27_instMonad___redArg(v___x_5266_);
v_toApplicative_5268_ = lean_ctor_get(v___x_5267_, 0);
v_isSharedCheck_5299_ = !lean_is_exclusive(v___x_5267_);
if (v_isSharedCheck_5299_ == 0)
{
lean_object* v_unused_5300_; 
v_unused_5300_ = lean_ctor_get(v___x_5267_, 1);
lean_dec(v_unused_5300_);
v___x_5270_ = v___x_5267_;
v_isShared_5271_ = v_isSharedCheck_5299_;
goto v_resetjp_5269_;
}
else
{
lean_inc(v_toApplicative_5268_);
lean_dec(v___x_5267_);
v___x_5270_ = lean_box(0);
v_isShared_5271_ = v_isSharedCheck_5299_;
goto v_resetjp_5269_;
}
v_resetjp_5269_:
{
lean_object* v_toFunctor_5272_; lean_object* v_toSeq_5273_; lean_object* v_toSeqLeft_5274_; lean_object* v_toSeqRight_5275_; lean_object* v___x_5277_; uint8_t v_isShared_5278_; uint8_t v_isSharedCheck_5297_; 
v_toFunctor_5272_ = lean_ctor_get(v_toApplicative_5268_, 0);
v_toSeq_5273_ = lean_ctor_get(v_toApplicative_5268_, 2);
v_toSeqLeft_5274_ = lean_ctor_get(v_toApplicative_5268_, 3);
v_toSeqRight_5275_ = lean_ctor_get(v_toApplicative_5268_, 4);
v_isSharedCheck_5297_ = !lean_is_exclusive(v_toApplicative_5268_);
if (v_isSharedCheck_5297_ == 0)
{
lean_object* v_unused_5298_; 
v_unused_5298_ = lean_ctor_get(v_toApplicative_5268_, 1);
lean_dec(v_unused_5298_);
v___x_5277_ = v_toApplicative_5268_;
v_isShared_5278_ = v_isSharedCheck_5297_;
goto v_resetjp_5276_;
}
else
{
lean_inc(v_toSeqRight_5275_);
lean_inc(v_toSeqLeft_5274_);
lean_inc(v_toSeq_5273_);
lean_inc(v_toFunctor_5272_);
lean_dec(v_toApplicative_5268_);
v___x_5277_ = lean_box(0);
v_isShared_5278_ = v_isSharedCheck_5297_;
goto v_resetjp_5276_;
}
v_resetjp_5276_:
{
lean_object* v___f_5279_; lean_object* v___f_5280_; lean_object* v___f_5281_; lean_object* v___f_5282_; lean_object* v___x_5283_; lean_object* v___f_5284_; lean_object* v___f_5285_; lean_object* v___f_5286_; lean_object* v___x_5288_; 
v___f_5279_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__3));
v___f_5280_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___closed__4));
lean_inc_ref(v_toFunctor_5272_);
v___f_5281_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5281_, 0, v_toFunctor_5272_);
v___f_5282_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5282_, 0, v_toFunctor_5272_);
v___x_5283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5283_, 0, v___f_5281_);
lean_ctor_set(v___x_5283_, 1, v___f_5282_);
v___f_5284_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5284_, 0, v_toSeqRight_5275_);
v___f_5285_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5285_, 0, v_toSeqLeft_5274_);
v___f_5286_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5286_, 0, v_toSeq_5273_);
if (v_isShared_5278_ == 0)
{
lean_ctor_set(v___x_5277_, 4, v___f_5284_);
lean_ctor_set(v___x_5277_, 3, v___f_5285_);
lean_ctor_set(v___x_5277_, 2, v___f_5286_);
lean_ctor_set(v___x_5277_, 1, v___f_5279_);
lean_ctor_set(v___x_5277_, 0, v___x_5283_);
v___x_5288_ = v___x_5277_;
goto v_reusejp_5287_;
}
else
{
lean_object* v_reuseFailAlloc_5296_; 
v_reuseFailAlloc_5296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5296_, 0, v___x_5283_);
lean_ctor_set(v_reuseFailAlloc_5296_, 1, v___f_5279_);
lean_ctor_set(v_reuseFailAlloc_5296_, 2, v___f_5286_);
lean_ctor_set(v_reuseFailAlloc_5296_, 3, v___f_5285_);
lean_ctor_set(v_reuseFailAlloc_5296_, 4, v___f_5284_);
v___x_5288_ = v_reuseFailAlloc_5296_;
goto v_reusejp_5287_;
}
v_reusejp_5287_:
{
lean_object* v___x_5290_; 
if (v_isShared_5271_ == 0)
{
lean_ctor_set(v___x_5270_, 1, v___f_5280_);
lean_ctor_set(v___x_5270_, 0, v___x_5288_);
v___x_5290_ = v___x_5270_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5295_; 
v_reuseFailAlloc_5295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5295_, 0, v___x_5288_);
lean_ctor_set(v_reuseFailAlloc_5295_, 1, v___f_5280_);
v___x_5290_ = v_reuseFailAlloc_5295_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_27396__overap_5293_; lean_object* v___x_5294_; 
v___x_5291_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___closed__7);
v___x_5292_ = l_instInhabitedOfMonad___redArg(v___x_5290_, v___x_5291_);
v___x_27396__overap_5293_ = lean_panic_fn_borrowed(v___x_5292_, v_msg_5236_);
lean_dec(v___x_5292_);
lean_inc(v___y_5240_);
lean_inc_ref(v___y_5239_);
lean_inc(v___y_5238_);
lean_inc_ref(v___y_5237_);
v___x_5294_ = lean_apply_5(v___x_27396__overap_5293_, v___y_5237_, v___y_5238_, v___y_5239_, v___y_5240_, lean_box(0));
return v___x_5294_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object* v_msg_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_){
_start:
{
lean_object* v_res_5313_; 
v_res_5313_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(v_msg_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_);
lean_dec(v___y_5311_);
lean_dec_ref(v___y_5310_);
lean_dec(v___y_5309_);
lean_dec_ref(v___y_5308_);
return v_res_5313_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object* v___x_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_){
_start:
{
lean_object* v___x_5320_; 
v___x_5320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5320_, 0, v___x_5314_);
return v___x_5320_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object* v___x_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_){
_start:
{
lean_object* v_res_5327_; 
v_res_5327_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(v___x_5321_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec(v___y_5323_);
lean_dec_ref(v___y_5322_);
return v_res_5327_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object* v_upperBound_5328_, lean_object* v_onAlt_5329_, lean_object* v_extraEqualities_5330_, lean_object* v_numDiscrEqs_5331_, lean_object* v_a_5332_, lean_object* v_b_5333_, lean_object* v___y_5334_, lean_object* v___y_5335_, lean_object* v___y_5336_, lean_object* v___y_5337_){
_start:
{
lean_object* v___y_5340_; uint8_t v___x_5363_; 
v___x_5363_ = lean_nat_dec_lt(v_a_5332_, v_upperBound_5328_);
if (v___x_5363_ == 0)
{
lean_object* v___x_5364_; 
lean_dec(v_a_5332_);
lean_dec(v_numDiscrEqs_5331_);
lean_dec(v_extraEqualities_5330_);
lean_dec_ref(v_onAlt_5329_);
v___x_5364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5364_, 0, v_b_5333_);
return v___x_5364_;
}
else
{
lean_object* v_snd_5365_; lean_object* v_snd_5366_; lean_object* v_snd_5367_; lean_object* v_snd_5368_; lean_object* v_snd_5369_; lean_object* v_fst_5370_; lean_object* v___x_5372_; uint8_t v_isShared_5373_; uint8_t v_isSharedCheck_5573_; 
v_snd_5365_ = lean_ctor_get(v_b_5333_, 1);
lean_inc(v_snd_5365_);
v_snd_5366_ = lean_ctor_get(v_snd_5365_, 1);
lean_inc(v_snd_5366_);
v_snd_5367_ = lean_ctor_get(v_snd_5366_, 1);
lean_inc(v_snd_5367_);
v_snd_5368_ = lean_ctor_get(v_snd_5367_, 1);
lean_inc(v_snd_5368_);
v_snd_5369_ = lean_ctor_get(v_snd_5368_, 1);
lean_inc(v_snd_5369_);
v_fst_5370_ = lean_ctor_get(v_b_5333_, 0);
v_isSharedCheck_5573_ = !lean_is_exclusive(v_b_5333_);
if (v_isSharedCheck_5573_ == 0)
{
lean_object* v_unused_5574_; 
v_unused_5574_ = lean_ctor_get(v_b_5333_, 1);
lean_dec(v_unused_5574_);
v___x_5372_ = v_b_5333_;
v_isShared_5373_ = v_isSharedCheck_5573_;
goto v_resetjp_5371_;
}
else
{
lean_inc(v_fst_5370_);
lean_dec(v_b_5333_);
v___x_5372_ = lean_box(0);
v_isShared_5373_ = v_isSharedCheck_5573_;
goto v_resetjp_5371_;
}
v_resetjp_5371_:
{
lean_object* v_fst_5374_; lean_object* v___x_5376_; uint8_t v_isShared_5377_; uint8_t v_isSharedCheck_5571_; 
v_fst_5374_ = lean_ctor_get(v_snd_5365_, 0);
v_isSharedCheck_5571_ = !lean_is_exclusive(v_snd_5365_);
if (v_isSharedCheck_5571_ == 0)
{
lean_object* v_unused_5572_; 
v_unused_5572_ = lean_ctor_get(v_snd_5365_, 1);
lean_dec(v_unused_5572_);
v___x_5376_ = v_snd_5365_;
v_isShared_5377_ = v_isSharedCheck_5571_;
goto v_resetjp_5375_;
}
else
{
lean_inc(v_fst_5374_);
lean_dec(v_snd_5365_);
v___x_5376_ = lean_box(0);
v_isShared_5377_ = v_isSharedCheck_5571_;
goto v_resetjp_5375_;
}
v_resetjp_5375_:
{
lean_object* v_fst_5378_; lean_object* v___x_5380_; uint8_t v_isShared_5381_; uint8_t v_isSharedCheck_5569_; 
v_fst_5378_ = lean_ctor_get(v_snd_5366_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v_snd_5366_);
if (v_isSharedCheck_5569_ == 0)
{
lean_object* v_unused_5570_; 
v_unused_5570_ = lean_ctor_get(v_snd_5366_, 1);
lean_dec(v_unused_5570_);
v___x_5380_ = v_snd_5366_;
v_isShared_5381_ = v_isSharedCheck_5569_;
goto v_resetjp_5379_;
}
else
{
lean_inc(v_fst_5378_);
lean_dec(v_snd_5366_);
v___x_5380_ = lean_box(0);
v_isShared_5381_ = v_isSharedCheck_5569_;
goto v_resetjp_5379_;
}
v_resetjp_5379_:
{
lean_object* v_fst_5382_; lean_object* v___x_5384_; uint8_t v_isShared_5385_; uint8_t v_isSharedCheck_5567_; 
v_fst_5382_ = lean_ctor_get(v_snd_5367_, 0);
v_isSharedCheck_5567_ = !lean_is_exclusive(v_snd_5367_);
if (v_isSharedCheck_5567_ == 0)
{
lean_object* v_unused_5568_; 
v_unused_5568_ = lean_ctor_get(v_snd_5367_, 1);
lean_dec(v_unused_5568_);
v___x_5384_ = v_snd_5367_;
v_isShared_5385_ = v_isSharedCheck_5567_;
goto v_resetjp_5383_;
}
else
{
lean_inc(v_fst_5382_);
lean_dec(v_snd_5367_);
v___x_5384_ = lean_box(0);
v_isShared_5385_ = v_isSharedCheck_5567_;
goto v_resetjp_5383_;
}
v_resetjp_5383_:
{
lean_object* v_fst_5386_; lean_object* v___x_5388_; uint8_t v_isShared_5389_; uint8_t v_isSharedCheck_5565_; 
v_fst_5386_ = lean_ctor_get(v_snd_5368_, 0);
v_isSharedCheck_5565_ = !lean_is_exclusive(v_snd_5368_);
if (v_isSharedCheck_5565_ == 0)
{
lean_object* v_unused_5566_; 
v_unused_5566_ = lean_ctor_get(v_snd_5368_, 1);
lean_dec(v_unused_5566_);
v___x_5388_ = v_snd_5368_;
v_isShared_5389_ = v_isSharedCheck_5565_;
goto v_resetjp_5387_;
}
else
{
lean_inc(v_fst_5386_);
lean_dec(v_snd_5368_);
v___x_5388_ = lean_box(0);
v_isShared_5389_ = v_isSharedCheck_5565_;
goto v_resetjp_5387_;
}
v_resetjp_5387_:
{
lean_object* v_array_5390_; lean_object* v_start_5391_; lean_object* v_stop_5392_; uint8_t v___x_5393_; 
v_array_5390_ = lean_ctor_get(v_snd_5369_, 0);
v_start_5391_ = lean_ctor_get(v_snd_5369_, 1);
v_stop_5392_ = lean_ctor_get(v_snd_5369_, 2);
v___x_5393_ = lean_nat_dec_lt(v_start_5391_, v_stop_5392_);
if (v___x_5393_ == 0)
{
lean_object* v___x_5395_; 
if (v_isShared_5389_ == 0)
{
v___x_5395_ = v___x_5388_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5410_; 
v_reuseFailAlloc_5410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5410_, 0, v_fst_5386_);
lean_ctor_set(v_reuseFailAlloc_5410_, 1, v_snd_5369_);
v___x_5395_ = v_reuseFailAlloc_5410_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
lean_object* v___x_5397_; 
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v___x_5395_);
v___x_5397_ = v___x_5384_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5409_; 
v_reuseFailAlloc_5409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5409_, 0, v_fst_5382_);
lean_ctor_set(v_reuseFailAlloc_5409_, 1, v___x_5395_);
v___x_5397_ = v_reuseFailAlloc_5409_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
lean_object* v___x_5399_; 
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 1, v___x_5397_);
v___x_5399_ = v___x_5380_;
goto v_reusejp_5398_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_fst_5378_);
lean_ctor_set(v_reuseFailAlloc_5408_, 1, v___x_5397_);
v___x_5399_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5398_;
}
v_reusejp_5398_:
{
lean_object* v___x_5401_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 1, v___x_5399_);
v___x_5401_ = v___x_5376_;
goto v_reusejp_5400_;
}
else
{
lean_object* v_reuseFailAlloc_5407_; 
v_reuseFailAlloc_5407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5407_, 0, v_fst_5374_);
lean_ctor_set(v_reuseFailAlloc_5407_, 1, v___x_5399_);
v___x_5401_ = v_reuseFailAlloc_5407_;
goto v_reusejp_5400_;
}
v_reusejp_5400_:
{
lean_object* v___x_5403_; 
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 1, v___x_5401_);
v___x_5403_ = v___x_5372_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5406_; 
v_reuseFailAlloc_5406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5406_, 0, v_fst_5370_);
lean_ctor_set(v_reuseFailAlloc_5406_, 1, v___x_5401_);
v___x_5403_ = v_reuseFailAlloc_5406_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
lean_object* v___x_5404_; lean_object* v___f_5405_; 
v___x_5404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5404_, 0, v___x_5403_);
v___f_5405_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5405_, 0, v___x_5404_);
v___y_5340_ = v___f_5405_;
goto v___jp_5339_;
}
}
}
}
}
}
else
{
lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5561_; 
lean_inc(v_stop_5392_);
lean_inc(v_start_5391_);
lean_inc_ref(v_array_5390_);
v_isSharedCheck_5561_ = !lean_is_exclusive(v_snd_5369_);
if (v_isSharedCheck_5561_ == 0)
{
lean_object* v_unused_5562_; lean_object* v_unused_5563_; lean_object* v_unused_5564_; 
v_unused_5562_ = lean_ctor_get(v_snd_5369_, 2);
lean_dec(v_unused_5562_);
v_unused_5563_ = lean_ctor_get(v_snd_5369_, 1);
lean_dec(v_unused_5563_);
v_unused_5564_ = lean_ctor_get(v_snd_5369_, 0);
lean_dec(v_unused_5564_);
v___x_5412_ = v_snd_5369_;
v_isShared_5413_ = v_isSharedCheck_5561_;
goto v_resetjp_5411_;
}
else
{
lean_dec(v_snd_5369_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5561_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v_array_5414_; lean_object* v_start_5415_; lean_object* v_stop_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5421_; 
v_array_5414_ = lean_ctor_get(v_fst_5386_, 0);
v_start_5415_ = lean_ctor_get(v_fst_5386_, 1);
v_stop_5416_ = lean_ctor_get(v_fst_5386_, 2);
v___x_5417_ = lean_array_fget(v_array_5390_, v_start_5391_);
v___x_5418_ = lean_unsigned_to_nat(1u);
v___x_5419_ = lean_nat_add(v_start_5391_, v___x_5418_);
lean_dec(v_start_5391_);
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 1, v___x_5419_);
v___x_5421_ = v___x_5412_;
goto v_reusejp_5420_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v_array_5390_);
lean_ctor_set(v_reuseFailAlloc_5560_, 1, v___x_5419_);
lean_ctor_set(v_reuseFailAlloc_5560_, 2, v_stop_5392_);
v___x_5421_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5420_;
}
v_reusejp_5420_:
{
uint8_t v___x_5422_; 
v___x_5422_ = lean_nat_dec_lt(v_start_5415_, v_stop_5416_);
if (v___x_5422_ == 0)
{
lean_object* v___x_5424_; 
lean_dec(v___x_5417_);
if (v_isShared_5389_ == 0)
{
lean_ctor_set(v___x_5388_, 1, v___x_5421_);
v___x_5424_ = v___x_5388_;
goto v_reusejp_5423_;
}
else
{
lean_object* v_reuseFailAlloc_5439_; 
v_reuseFailAlloc_5439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5439_, 0, v_fst_5386_);
lean_ctor_set(v_reuseFailAlloc_5439_, 1, v___x_5421_);
v___x_5424_ = v_reuseFailAlloc_5439_;
goto v_reusejp_5423_;
}
v_reusejp_5423_:
{
lean_object* v___x_5426_; 
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v___x_5424_);
v___x_5426_ = v___x_5384_;
goto v_reusejp_5425_;
}
else
{
lean_object* v_reuseFailAlloc_5438_; 
v_reuseFailAlloc_5438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5438_, 0, v_fst_5382_);
lean_ctor_set(v_reuseFailAlloc_5438_, 1, v___x_5424_);
v___x_5426_ = v_reuseFailAlloc_5438_;
goto v_reusejp_5425_;
}
v_reusejp_5425_:
{
lean_object* v___x_5428_; 
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 1, v___x_5426_);
v___x_5428_ = v___x_5380_;
goto v_reusejp_5427_;
}
else
{
lean_object* v_reuseFailAlloc_5437_; 
v_reuseFailAlloc_5437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5437_, 0, v_fst_5378_);
lean_ctor_set(v_reuseFailAlloc_5437_, 1, v___x_5426_);
v___x_5428_ = v_reuseFailAlloc_5437_;
goto v_reusejp_5427_;
}
v_reusejp_5427_:
{
lean_object* v___x_5430_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 1, v___x_5428_);
v___x_5430_ = v___x_5376_;
goto v_reusejp_5429_;
}
else
{
lean_object* v_reuseFailAlloc_5436_; 
v_reuseFailAlloc_5436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5436_, 0, v_fst_5374_);
lean_ctor_set(v_reuseFailAlloc_5436_, 1, v___x_5428_);
v___x_5430_ = v_reuseFailAlloc_5436_;
goto v_reusejp_5429_;
}
v_reusejp_5429_:
{
lean_object* v___x_5432_; 
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 1, v___x_5430_);
v___x_5432_ = v___x_5372_;
goto v_reusejp_5431_;
}
else
{
lean_object* v_reuseFailAlloc_5435_; 
v_reuseFailAlloc_5435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5435_, 0, v_fst_5370_);
lean_ctor_set(v_reuseFailAlloc_5435_, 1, v___x_5430_);
v___x_5432_ = v_reuseFailAlloc_5435_;
goto v_reusejp_5431_;
}
v_reusejp_5431_:
{
lean_object* v___x_5433_; lean_object* v___f_5434_; 
v___x_5433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5433_, 0, v___x_5432_);
v___f_5434_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5434_, 0, v___x_5433_);
v___y_5340_ = v___f_5434_;
goto v___jp_5339_;
}
}
}
}
}
}
else
{
lean_object* v___x_5441_; uint8_t v_isShared_5442_; uint8_t v_isSharedCheck_5556_; 
lean_inc(v_stop_5416_);
lean_inc(v_start_5415_);
lean_inc_ref(v_array_5414_);
v_isSharedCheck_5556_ = !lean_is_exclusive(v_fst_5386_);
if (v_isSharedCheck_5556_ == 0)
{
lean_object* v_unused_5557_; lean_object* v_unused_5558_; lean_object* v_unused_5559_; 
v_unused_5557_ = lean_ctor_get(v_fst_5386_, 2);
lean_dec(v_unused_5557_);
v_unused_5558_ = lean_ctor_get(v_fst_5386_, 1);
lean_dec(v_unused_5558_);
v_unused_5559_ = lean_ctor_get(v_fst_5386_, 0);
lean_dec(v_unused_5559_);
v___x_5441_ = v_fst_5386_;
v_isShared_5442_ = v_isSharedCheck_5556_;
goto v_resetjp_5440_;
}
else
{
lean_dec(v_fst_5386_);
v___x_5441_ = lean_box(0);
v_isShared_5442_ = v_isSharedCheck_5556_;
goto v_resetjp_5440_;
}
v_resetjp_5440_:
{
lean_object* v_array_5443_; lean_object* v_start_5444_; lean_object* v_stop_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5449_; 
v_array_5443_ = lean_ctor_get(v_fst_5382_, 0);
v_start_5444_ = lean_ctor_get(v_fst_5382_, 1);
v_stop_5445_ = lean_ctor_get(v_fst_5382_, 2);
v___x_5446_ = lean_array_fget(v_array_5414_, v_start_5415_);
v___x_5447_ = lean_nat_add(v_start_5415_, v___x_5418_);
lean_dec(v_start_5415_);
if (v_isShared_5442_ == 0)
{
lean_ctor_set(v___x_5441_, 1, v___x_5447_);
v___x_5449_ = v___x_5441_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5555_; 
v_reuseFailAlloc_5555_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5555_, 0, v_array_5414_);
lean_ctor_set(v_reuseFailAlloc_5555_, 1, v___x_5447_);
lean_ctor_set(v_reuseFailAlloc_5555_, 2, v_stop_5416_);
v___x_5449_ = v_reuseFailAlloc_5555_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
uint8_t v___x_5450_; 
v___x_5450_ = lean_nat_dec_lt(v_start_5444_, v_stop_5445_);
if (v___x_5450_ == 0)
{
lean_object* v___x_5452_; 
lean_dec(v___x_5446_);
lean_dec(v___x_5417_);
if (v_isShared_5389_ == 0)
{
lean_ctor_set(v___x_5388_, 1, v___x_5421_);
lean_ctor_set(v___x_5388_, 0, v___x_5449_);
v___x_5452_ = v___x_5388_;
goto v_reusejp_5451_;
}
else
{
lean_object* v_reuseFailAlloc_5467_; 
v_reuseFailAlloc_5467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5467_, 0, v___x_5449_);
lean_ctor_set(v_reuseFailAlloc_5467_, 1, v___x_5421_);
v___x_5452_ = v_reuseFailAlloc_5467_;
goto v_reusejp_5451_;
}
v_reusejp_5451_:
{
lean_object* v___x_5454_; 
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v___x_5452_);
v___x_5454_ = v___x_5384_;
goto v_reusejp_5453_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v_fst_5382_);
lean_ctor_set(v_reuseFailAlloc_5466_, 1, v___x_5452_);
v___x_5454_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5453_;
}
v_reusejp_5453_:
{
lean_object* v___x_5456_; 
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 1, v___x_5454_);
v___x_5456_ = v___x_5380_;
goto v_reusejp_5455_;
}
else
{
lean_object* v_reuseFailAlloc_5465_; 
v_reuseFailAlloc_5465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5465_, 0, v_fst_5378_);
lean_ctor_set(v_reuseFailAlloc_5465_, 1, v___x_5454_);
v___x_5456_ = v_reuseFailAlloc_5465_;
goto v_reusejp_5455_;
}
v_reusejp_5455_:
{
lean_object* v___x_5458_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 1, v___x_5456_);
v___x_5458_ = v___x_5376_;
goto v_reusejp_5457_;
}
else
{
lean_object* v_reuseFailAlloc_5464_; 
v_reuseFailAlloc_5464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5464_, 0, v_fst_5374_);
lean_ctor_set(v_reuseFailAlloc_5464_, 1, v___x_5456_);
v___x_5458_ = v_reuseFailAlloc_5464_;
goto v_reusejp_5457_;
}
v_reusejp_5457_:
{
lean_object* v___x_5460_; 
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 1, v___x_5458_);
v___x_5460_ = v___x_5372_;
goto v_reusejp_5459_;
}
else
{
lean_object* v_reuseFailAlloc_5463_; 
v_reuseFailAlloc_5463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5463_, 0, v_fst_5370_);
lean_ctor_set(v_reuseFailAlloc_5463_, 1, v___x_5458_);
v___x_5460_ = v_reuseFailAlloc_5463_;
goto v_reusejp_5459_;
}
v_reusejp_5459_:
{
lean_object* v___x_5461_; lean_object* v___f_5462_; 
v___x_5461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5461_, 0, v___x_5460_);
v___f_5462_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5462_, 0, v___x_5461_);
v___y_5340_ = v___f_5462_;
goto v___jp_5339_;
}
}
}
}
}
}
else
{
lean_object* v___x_5469_; uint8_t v_isShared_5470_; uint8_t v_isSharedCheck_5551_; 
lean_inc(v_stop_5445_);
lean_inc(v_start_5444_);
lean_inc_ref(v_array_5443_);
v_isSharedCheck_5551_ = !lean_is_exclusive(v_fst_5382_);
if (v_isSharedCheck_5551_ == 0)
{
lean_object* v_unused_5552_; lean_object* v_unused_5553_; lean_object* v_unused_5554_; 
v_unused_5552_ = lean_ctor_get(v_fst_5382_, 2);
lean_dec(v_unused_5552_);
v_unused_5553_ = lean_ctor_get(v_fst_5382_, 1);
lean_dec(v_unused_5553_);
v_unused_5554_ = lean_ctor_get(v_fst_5382_, 0);
lean_dec(v_unused_5554_);
v___x_5469_ = v_fst_5382_;
v_isShared_5470_ = v_isSharedCheck_5551_;
goto v_resetjp_5468_;
}
else
{
lean_dec(v_fst_5382_);
v___x_5469_ = lean_box(0);
v_isShared_5470_ = v_isSharedCheck_5551_;
goto v_resetjp_5468_;
}
v_resetjp_5468_:
{
lean_object* v_array_5471_; lean_object* v_start_5472_; lean_object* v_stop_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; lean_object* v___x_5477_; 
v_array_5471_ = lean_ctor_get(v_fst_5378_, 0);
v_start_5472_ = lean_ctor_get(v_fst_5378_, 1);
v_stop_5473_ = lean_ctor_get(v_fst_5378_, 2);
v___x_5474_ = lean_array_fget(v_array_5443_, v_start_5444_);
v___x_5475_ = lean_nat_add(v_start_5444_, v___x_5418_);
lean_dec(v_start_5444_);
if (v_isShared_5470_ == 0)
{
lean_ctor_set(v___x_5469_, 1, v___x_5475_);
v___x_5477_ = v___x_5469_;
goto v_reusejp_5476_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v_array_5443_);
lean_ctor_set(v_reuseFailAlloc_5550_, 1, v___x_5475_);
lean_ctor_set(v_reuseFailAlloc_5550_, 2, v_stop_5445_);
v___x_5477_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5476_;
}
v_reusejp_5476_:
{
uint8_t v___x_5478_; 
v___x_5478_ = lean_nat_dec_lt(v_start_5472_, v_stop_5473_);
if (v___x_5478_ == 0)
{
lean_object* v___x_5480_; 
lean_dec(v___x_5474_);
lean_dec(v___x_5446_);
lean_dec(v___x_5417_);
if (v_isShared_5389_ == 0)
{
lean_ctor_set(v___x_5388_, 1, v___x_5421_);
lean_ctor_set(v___x_5388_, 0, v___x_5449_);
v___x_5480_ = v___x_5388_;
goto v_reusejp_5479_;
}
else
{
lean_object* v_reuseFailAlloc_5495_; 
v_reuseFailAlloc_5495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5495_, 0, v___x_5449_);
lean_ctor_set(v_reuseFailAlloc_5495_, 1, v___x_5421_);
v___x_5480_ = v_reuseFailAlloc_5495_;
goto v_reusejp_5479_;
}
v_reusejp_5479_:
{
lean_object* v___x_5482_; 
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v___x_5480_);
lean_ctor_set(v___x_5384_, 0, v___x_5477_);
v___x_5482_ = v___x_5384_;
goto v_reusejp_5481_;
}
else
{
lean_object* v_reuseFailAlloc_5494_; 
v_reuseFailAlloc_5494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5494_, 0, v___x_5477_);
lean_ctor_set(v_reuseFailAlloc_5494_, 1, v___x_5480_);
v___x_5482_ = v_reuseFailAlloc_5494_;
goto v_reusejp_5481_;
}
v_reusejp_5481_:
{
lean_object* v___x_5484_; 
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 1, v___x_5482_);
v___x_5484_ = v___x_5380_;
goto v_reusejp_5483_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v_fst_5378_);
lean_ctor_set(v_reuseFailAlloc_5493_, 1, v___x_5482_);
v___x_5484_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5483_;
}
v_reusejp_5483_:
{
lean_object* v___x_5486_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 1, v___x_5484_);
v___x_5486_ = v___x_5376_;
goto v_reusejp_5485_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_fst_5374_);
lean_ctor_set(v_reuseFailAlloc_5492_, 1, v___x_5484_);
v___x_5486_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5485_;
}
v_reusejp_5485_:
{
lean_object* v___x_5488_; 
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 1, v___x_5486_);
v___x_5488_ = v___x_5372_;
goto v_reusejp_5487_;
}
else
{
lean_object* v_reuseFailAlloc_5491_; 
v_reuseFailAlloc_5491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5491_, 0, v_fst_5370_);
lean_ctor_set(v_reuseFailAlloc_5491_, 1, v___x_5486_);
v___x_5488_ = v_reuseFailAlloc_5491_;
goto v_reusejp_5487_;
}
v_reusejp_5487_:
{
lean_object* v___x_5489_; lean_object* v___f_5490_; 
v___x_5489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5489_, 0, v___x_5488_);
v___f_5490_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5490_, 0, v___x_5489_);
v___y_5340_ = v___f_5490_;
goto v___jp_5339_;
}
}
}
}
}
}
else
{
lean_object* v___x_5497_; uint8_t v_isShared_5498_; uint8_t v_isSharedCheck_5546_; 
lean_inc(v_stop_5473_);
lean_inc(v_start_5472_);
lean_inc_ref(v_array_5471_);
v_isSharedCheck_5546_ = !lean_is_exclusive(v_fst_5378_);
if (v_isSharedCheck_5546_ == 0)
{
lean_object* v_unused_5547_; lean_object* v_unused_5548_; lean_object* v_unused_5549_; 
v_unused_5547_ = lean_ctor_get(v_fst_5378_, 2);
lean_dec(v_unused_5547_);
v_unused_5548_ = lean_ctor_get(v_fst_5378_, 1);
lean_dec(v_unused_5548_);
v_unused_5549_ = lean_ctor_get(v_fst_5378_, 0);
lean_dec(v_unused_5549_);
v___x_5497_ = v_fst_5378_;
v_isShared_5498_ = v_isSharedCheck_5546_;
goto v_resetjp_5496_;
}
else
{
lean_dec(v_fst_5378_);
v___x_5497_ = lean_box(0);
v_isShared_5498_ = v_isSharedCheck_5546_;
goto v_resetjp_5496_;
}
v_resetjp_5496_:
{
lean_object* v_array_5499_; lean_object* v_start_5500_; lean_object* v_stop_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5505_; 
v_array_5499_ = lean_ctor_get(v_fst_5374_, 0);
v_start_5500_ = lean_ctor_get(v_fst_5374_, 1);
v_stop_5501_ = lean_ctor_get(v_fst_5374_, 2);
v___x_5502_ = lean_array_fget(v_array_5471_, v_start_5472_);
v___x_5503_ = lean_nat_add(v_start_5472_, v___x_5418_);
lean_dec(v_start_5472_);
if (v_isShared_5498_ == 0)
{
lean_ctor_set(v___x_5497_, 1, v___x_5503_);
v___x_5505_ = v___x_5497_;
goto v_reusejp_5504_;
}
else
{
lean_object* v_reuseFailAlloc_5545_; 
v_reuseFailAlloc_5545_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5545_, 0, v_array_5471_);
lean_ctor_set(v_reuseFailAlloc_5545_, 1, v___x_5503_);
lean_ctor_set(v_reuseFailAlloc_5545_, 2, v_stop_5473_);
v___x_5505_ = v_reuseFailAlloc_5545_;
goto v_reusejp_5504_;
}
v_reusejp_5504_:
{
uint8_t v___x_5506_; 
v___x_5506_ = lean_nat_dec_lt(v_start_5500_, v_stop_5501_);
if (v___x_5506_ == 0)
{
lean_object* v___x_5508_; 
lean_dec(v___x_5502_);
lean_dec(v___x_5474_);
lean_dec(v___x_5446_);
lean_dec(v___x_5417_);
if (v_isShared_5389_ == 0)
{
lean_ctor_set(v___x_5388_, 1, v___x_5421_);
lean_ctor_set(v___x_5388_, 0, v___x_5449_);
v___x_5508_ = v___x_5388_;
goto v_reusejp_5507_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v___x_5449_);
lean_ctor_set(v_reuseFailAlloc_5523_, 1, v___x_5421_);
v___x_5508_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5507_;
}
v_reusejp_5507_:
{
lean_object* v___x_5510_; 
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v___x_5508_);
lean_ctor_set(v___x_5384_, 0, v___x_5477_);
v___x_5510_ = v___x_5384_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v___x_5477_);
lean_ctor_set(v_reuseFailAlloc_5522_, 1, v___x_5508_);
v___x_5510_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
lean_object* v___x_5512_; 
if (v_isShared_5381_ == 0)
{
lean_ctor_set(v___x_5380_, 1, v___x_5510_);
lean_ctor_set(v___x_5380_, 0, v___x_5505_);
v___x_5512_ = v___x_5380_;
goto v_reusejp_5511_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v___x_5505_);
lean_ctor_set(v_reuseFailAlloc_5521_, 1, v___x_5510_);
v___x_5512_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5511_;
}
v_reusejp_5511_:
{
lean_object* v___x_5514_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 1, v___x_5512_);
v___x_5514_ = v___x_5376_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_fst_5374_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v___x_5512_);
v___x_5514_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
lean_object* v___x_5516_; 
if (v_isShared_5373_ == 0)
{
lean_ctor_set(v___x_5372_, 1, v___x_5514_);
v___x_5516_ = v___x_5372_;
goto v_reusejp_5515_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v_fst_5370_);
lean_ctor_set(v_reuseFailAlloc_5519_, 1, v___x_5514_);
v___x_5516_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5515_;
}
v_reusejp_5515_:
{
lean_object* v___x_5517_; lean_object* v___f_5518_; 
v___x_5517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5517_, 0, v___x_5516_);
v___f_5518_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5518_, 0, v___x_5517_);
v___y_5340_ = v___f_5518_;
goto v___jp_5339_;
}
}
}
}
}
}
else
{
lean_object* v___x_5525_; uint8_t v_isShared_5526_; uint8_t v_isSharedCheck_5541_; 
lean_inc(v_stop_5501_);
lean_inc(v_start_5500_);
lean_inc_ref(v_array_5499_);
lean_del_object(v___x_5388_);
lean_del_object(v___x_5384_);
lean_del_object(v___x_5380_);
lean_del_object(v___x_5376_);
lean_del_object(v___x_5372_);
v_isSharedCheck_5541_ = !lean_is_exclusive(v_fst_5374_);
if (v_isSharedCheck_5541_ == 0)
{
lean_object* v_unused_5542_; lean_object* v_unused_5543_; lean_object* v_unused_5544_; 
v_unused_5542_ = lean_ctor_get(v_fst_5374_, 2);
lean_dec(v_unused_5542_);
v_unused_5543_ = lean_ctor_get(v_fst_5374_, 1);
lean_dec(v_unused_5543_);
v_unused_5544_ = lean_ctor_get(v_fst_5374_, 0);
lean_dec(v_unused_5544_);
v___x_5525_ = v_fst_5374_;
v_isShared_5526_ = v_isSharedCheck_5541_;
goto v_resetjp_5524_;
}
else
{
lean_dec(v_fst_5374_);
v___x_5525_ = lean_box(0);
v_isShared_5526_ = v_isSharedCheck_5541_;
goto v_resetjp_5524_;
}
v_resetjp_5524_:
{
lean_object* v_numOverlaps_5527_; lean_object* v___x_5528_; uint8_t v___x_5529_; 
v_numOverlaps_5527_ = lean_ctor_get(v___x_5502_, 1);
v___x_5528_ = lean_unsigned_to_nat(0u);
v___x_5529_ = lean_nat_dec_eq(v_numOverlaps_5527_, v___x_5528_);
if (v___x_5529_ == 0)
{
lean_object* v___x_5530_; lean_object* v___x_5531_; 
lean_del_object(v___x_5525_);
lean_dec_ref(v___x_5505_);
lean_dec(v___x_5502_);
lean_dec(v_stop_5501_);
lean_dec(v_start_5500_);
lean_dec_ref(v_array_5499_);
lean_dec_ref(v___x_5477_);
lean_dec(v___x_5474_);
lean_dec_ref(v___x_5449_);
lean_dec(v___x_5446_);
lean_dec_ref(v___x_5421_);
lean_dec(v___x_5417_);
lean_dec(v_fst_5370_);
v___x_5530_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_5531_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed), 6, 1);
lean_closure_set(v___x_5531_, 0, v___x_5530_);
v___y_5340_ = v___x_5531_;
goto v___jp_5339_;
}
else
{
uint8_t v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___f_5535_; lean_object* v___x_5536_; lean_object* v___x_5538_; 
v___x_5532_ = 0;
v___x_5533_ = lean_array_fget_borrowed(v_array_5499_, v_start_5500_);
v___x_5534_ = lean_box(v___x_5532_);
lean_inc(v_numDiscrEqs_5331_);
lean_inc(v_extraEqualities_5330_);
lean_inc(v___x_5533_);
lean_inc(v_a_5332_);
lean_inc_ref(v_onAlt_5329_);
v___f_5535_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed), 16, 9);
lean_closure_set(v___f_5535_, 0, v___x_5474_);
lean_closure_set(v___f_5535_, 1, v_onAlt_5329_);
lean_closure_set(v___f_5535_, 2, v_a_5332_);
lean_closure_set(v___f_5535_, 3, v___x_5534_);
lean_closure_set(v___f_5535_, 4, v___x_5533_);
lean_closure_set(v___f_5535_, 5, v_extraEqualities_5330_);
lean_closure_set(v___f_5535_, 6, v_numDiscrEqs_5331_);
lean_closure_set(v___f_5535_, 7, v___x_5417_);
lean_closure_set(v___f_5535_, 8, v___x_5418_);
v___x_5536_ = lean_nat_add(v_start_5500_, v___x_5418_);
lean_dec(v_start_5500_);
if (v_isShared_5526_ == 0)
{
lean_ctor_set(v___x_5525_, 1, v___x_5536_);
v___x_5538_ = v___x_5525_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5540_; 
v_reuseFailAlloc_5540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5540_, 0, v_array_5499_);
lean_ctor_set(v_reuseFailAlloc_5540_, 1, v___x_5536_);
lean_ctor_set(v_reuseFailAlloc_5540_, 2, v_stop_5501_);
v___x_5538_ = v_reuseFailAlloc_5540_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
lean_object* v___f_5539_; 
v___f_5539_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed), 14, 9);
lean_closure_set(v___f_5539_, 0, v___x_5446_);
lean_closure_set(v___f_5539_, 1, v___x_5502_);
lean_closure_set(v___f_5539_, 2, v___f_5535_);
lean_closure_set(v___f_5539_, 3, v_fst_5370_);
lean_closure_set(v___f_5539_, 4, v___x_5449_);
lean_closure_set(v___f_5539_, 5, v___x_5421_);
lean_closure_set(v___f_5539_, 6, v___x_5477_);
lean_closure_set(v___f_5539_, 7, v___x_5505_);
lean_closure_set(v___f_5539_, 8, v___x_5538_);
v___y_5340_ = v___f_5539_;
goto v___jp_5339_;
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
}
}
}
}
}
}
}
v___jp_5339_:
{
lean_object* v___x_5341_; 
lean_inc(v___y_5337_);
lean_inc_ref(v___y_5336_);
lean_inc(v___y_5335_);
lean_inc_ref(v___y_5334_);
v___x_5341_ = lean_apply_5(v___y_5340_, v___y_5334_, v___y_5335_, v___y_5336_, v___y_5337_, lean_box(0));
if (lean_obj_tag(v___x_5341_) == 0)
{
lean_object* v_a_5342_; lean_object* v___x_5344_; uint8_t v_isShared_5345_; uint8_t v_isSharedCheck_5354_; 
v_a_5342_ = lean_ctor_get(v___x_5341_, 0);
v_isSharedCheck_5354_ = !lean_is_exclusive(v___x_5341_);
if (v_isSharedCheck_5354_ == 0)
{
v___x_5344_ = v___x_5341_;
v_isShared_5345_ = v_isSharedCheck_5354_;
goto v_resetjp_5343_;
}
else
{
lean_inc(v_a_5342_);
lean_dec(v___x_5341_);
v___x_5344_ = lean_box(0);
v_isShared_5345_ = v_isSharedCheck_5354_;
goto v_resetjp_5343_;
}
v_resetjp_5343_:
{
if (lean_obj_tag(v_a_5342_) == 0)
{
lean_object* v_a_5346_; lean_object* v___x_5348_; 
lean_dec(v_a_5332_);
lean_dec(v_numDiscrEqs_5331_);
lean_dec(v_extraEqualities_5330_);
lean_dec_ref(v_onAlt_5329_);
v_a_5346_ = lean_ctor_get(v_a_5342_, 0);
lean_inc(v_a_5346_);
lean_dec_ref_known(v_a_5342_, 1);
if (v_isShared_5345_ == 0)
{
lean_ctor_set(v___x_5344_, 0, v_a_5346_);
v___x_5348_ = v___x_5344_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5349_; 
v_reuseFailAlloc_5349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5349_, 0, v_a_5346_);
v___x_5348_ = v_reuseFailAlloc_5349_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
return v___x_5348_;
}
}
else
{
lean_object* v_a_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; 
lean_del_object(v___x_5344_);
v_a_5350_ = lean_ctor_get(v_a_5342_, 0);
lean_inc(v_a_5350_);
lean_dec_ref_known(v_a_5342_, 1);
v___x_5351_ = lean_unsigned_to_nat(1u);
v___x_5352_ = lean_nat_add(v_a_5332_, v___x_5351_);
lean_dec(v_a_5332_);
v_a_5332_ = v___x_5352_;
v_b_5333_ = v_a_5350_;
goto _start;
}
}
}
else
{
lean_object* v_a_5355_; lean_object* v___x_5357_; uint8_t v_isShared_5358_; uint8_t v_isSharedCheck_5362_; 
lean_dec(v_a_5332_);
lean_dec(v_numDiscrEqs_5331_);
lean_dec(v_extraEqualities_5330_);
lean_dec_ref(v_onAlt_5329_);
v_a_5355_ = lean_ctor_get(v___x_5341_, 0);
v_isSharedCheck_5362_ = !lean_is_exclusive(v___x_5341_);
if (v_isSharedCheck_5362_ == 0)
{
v___x_5357_ = v___x_5341_;
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
else
{
lean_inc(v_a_5355_);
lean_dec(v___x_5341_);
v___x_5357_ = lean_box(0);
v_isShared_5358_ = v_isSharedCheck_5362_;
goto v_resetjp_5356_;
}
v_resetjp_5356_:
{
lean_object* v___x_5360_; 
if (v_isShared_5358_ == 0)
{
v___x_5360_ = v___x_5357_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5361_; 
v_reuseFailAlloc_5361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5361_, 0, v_a_5355_);
v___x_5360_ = v_reuseFailAlloc_5361_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
return v___x_5360_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object* v_upperBound_5575_, lean_object* v_onAlt_5576_, lean_object* v_extraEqualities_5577_, lean_object* v_numDiscrEqs_5578_, lean_object* v_a_5579_, lean_object* v_b_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_, lean_object* v___y_5583_, lean_object* v___y_5584_, lean_object* v___y_5585_){
_start:
{
lean_object* v_res_5586_; 
v_res_5586_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_5575_, v_onAlt_5576_, v_extraEqualities_5577_, v_numDiscrEqs_5578_, v_a_5579_, v_b_5580_, v___y_5581_, v___y_5582_, v___y_5583_, v___y_5584_);
lean_dec(v___y_5584_);
lean_dec_ref(v___y_5583_);
lean_dec(v___y_5582_);
lean_dec_ref(v___y_5581_);
lean_dec(v_upperBound_5575_);
return v_res_5586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t v_addEqualities_5587_, lean_object* v_as_5588_, size_t v_sz_5589_, size_t v_i_5590_, lean_object* v_b_5591_, lean_object* v___y_5592_, lean_object* v___y_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_){
_start:
{
lean_object* v_a_5598_; uint8_t v___x_5602_; 
v___x_5602_ = lean_usize_dec_lt(v_i_5590_, v_sz_5589_);
if (v___x_5602_ == 0)
{
lean_object* v___x_5603_; 
v___x_5603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5603_, 0, v_b_5591_);
return v___x_5603_;
}
else
{
lean_object* v_snd_5604_; lean_object* v_snd_5605_; lean_object* v_snd_5606_; lean_object* v_snd_5607_; lean_object* v_fst_5608_; lean_object* v___x_5610_; uint8_t v_isShared_5611_; uint8_t v_isSharedCheck_5754_; 
v_snd_5604_ = lean_ctor_get(v_b_5591_, 1);
lean_inc(v_snd_5604_);
v_snd_5605_ = lean_ctor_get(v_snd_5604_, 1);
lean_inc(v_snd_5605_);
v_snd_5606_ = lean_ctor_get(v_snd_5605_, 1);
lean_inc(v_snd_5606_);
v_snd_5607_ = lean_ctor_get(v_snd_5606_, 1);
lean_inc(v_snd_5607_);
v_fst_5608_ = lean_ctor_get(v_b_5591_, 0);
v_isSharedCheck_5754_ = !lean_is_exclusive(v_b_5591_);
if (v_isSharedCheck_5754_ == 0)
{
lean_object* v_unused_5755_; 
v_unused_5755_ = lean_ctor_get(v_b_5591_, 1);
lean_dec(v_unused_5755_);
v___x_5610_ = v_b_5591_;
v_isShared_5611_ = v_isSharedCheck_5754_;
goto v_resetjp_5609_;
}
else
{
lean_inc(v_fst_5608_);
lean_dec(v_b_5591_);
v___x_5610_ = lean_box(0);
v_isShared_5611_ = v_isSharedCheck_5754_;
goto v_resetjp_5609_;
}
v_resetjp_5609_:
{
lean_object* v_fst_5612_; lean_object* v___x_5614_; uint8_t v_isShared_5615_; uint8_t v_isSharedCheck_5752_; 
v_fst_5612_ = lean_ctor_get(v_snd_5604_, 0);
v_isSharedCheck_5752_ = !lean_is_exclusive(v_snd_5604_);
if (v_isSharedCheck_5752_ == 0)
{
lean_object* v_unused_5753_; 
v_unused_5753_ = lean_ctor_get(v_snd_5604_, 1);
lean_dec(v_unused_5753_);
v___x_5614_ = v_snd_5604_;
v_isShared_5615_ = v_isSharedCheck_5752_;
goto v_resetjp_5613_;
}
else
{
lean_inc(v_fst_5612_);
lean_dec(v_snd_5604_);
v___x_5614_ = lean_box(0);
v_isShared_5615_ = v_isSharedCheck_5752_;
goto v_resetjp_5613_;
}
v_resetjp_5613_:
{
lean_object* v_fst_5616_; lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5750_; 
v_fst_5616_ = lean_ctor_get(v_snd_5605_, 0);
v_isSharedCheck_5750_ = !lean_is_exclusive(v_snd_5605_);
if (v_isSharedCheck_5750_ == 0)
{
lean_object* v_unused_5751_; 
v_unused_5751_ = lean_ctor_get(v_snd_5605_, 1);
lean_dec(v_unused_5751_);
v___x_5618_ = v_snd_5605_;
v_isShared_5619_ = v_isSharedCheck_5750_;
goto v_resetjp_5617_;
}
else
{
lean_inc(v_fst_5616_);
lean_dec(v_snd_5605_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5750_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
lean_object* v_fst_5620_; lean_object* v___x_5622_; uint8_t v_isShared_5623_; uint8_t v_isSharedCheck_5748_; 
v_fst_5620_ = lean_ctor_get(v_snd_5606_, 0);
v_isSharedCheck_5748_ = !lean_is_exclusive(v_snd_5606_);
if (v_isSharedCheck_5748_ == 0)
{
lean_object* v_unused_5749_; 
v_unused_5749_ = lean_ctor_get(v_snd_5606_, 1);
lean_dec(v_unused_5749_);
v___x_5622_ = v_snd_5606_;
v_isShared_5623_ = v_isSharedCheck_5748_;
goto v_resetjp_5621_;
}
else
{
lean_inc(v_fst_5620_);
lean_dec(v_snd_5606_);
v___x_5622_ = lean_box(0);
v_isShared_5623_ = v_isSharedCheck_5748_;
goto v_resetjp_5621_;
}
v_resetjp_5621_:
{
lean_object* v_array_5624_; lean_object* v_start_5625_; lean_object* v_stop_5626_; uint8_t v___x_5627_; 
v_array_5624_ = lean_ctor_get(v_snd_5607_, 0);
v_start_5625_ = lean_ctor_get(v_snd_5607_, 1);
v_stop_5626_ = lean_ctor_get(v_snd_5607_, 2);
v___x_5627_ = lean_nat_dec_lt(v_start_5625_, v_stop_5626_);
if (v___x_5627_ == 0)
{
lean_object* v___x_5629_; 
if (v_isShared_5623_ == 0)
{
v___x_5629_ = v___x_5622_;
goto v_reusejp_5628_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_fst_5620_);
lean_ctor_set(v_reuseFailAlloc_5640_, 1, v_snd_5607_);
v___x_5629_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5628_;
}
v_reusejp_5628_:
{
lean_object* v___x_5631_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 1, v___x_5629_);
v___x_5631_ = v___x_5618_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v_fst_5616_);
lean_ctor_set(v_reuseFailAlloc_5639_, 1, v___x_5629_);
v___x_5631_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5630_;
}
v_reusejp_5630_:
{
lean_object* v___x_5633_; 
if (v_isShared_5615_ == 0)
{
lean_ctor_set(v___x_5614_, 1, v___x_5631_);
v___x_5633_ = v___x_5614_;
goto v_reusejp_5632_;
}
else
{
lean_object* v_reuseFailAlloc_5638_; 
v_reuseFailAlloc_5638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5638_, 0, v_fst_5612_);
lean_ctor_set(v_reuseFailAlloc_5638_, 1, v___x_5631_);
v___x_5633_ = v_reuseFailAlloc_5638_;
goto v_reusejp_5632_;
}
v_reusejp_5632_:
{
lean_object* v___x_5635_; 
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 1, v___x_5633_);
v___x_5635_ = v___x_5610_;
goto v_reusejp_5634_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v_fst_5608_);
lean_ctor_set(v_reuseFailAlloc_5637_, 1, v___x_5633_);
v___x_5635_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5634_;
}
v_reusejp_5634_:
{
lean_object* v___x_5636_; 
v___x_5636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5636_, 0, v___x_5635_);
return v___x_5636_;
}
}
}
}
}
else
{
lean_object* v___x_5642_; uint8_t v_isShared_5643_; uint8_t v_isSharedCheck_5744_; 
lean_inc(v_stop_5626_);
lean_inc(v_start_5625_);
lean_inc_ref(v_array_5624_);
v_isSharedCheck_5744_ = !lean_is_exclusive(v_snd_5607_);
if (v_isSharedCheck_5744_ == 0)
{
lean_object* v_unused_5745_; lean_object* v_unused_5746_; lean_object* v_unused_5747_; 
v_unused_5745_ = lean_ctor_get(v_snd_5607_, 2);
lean_dec(v_unused_5745_);
v_unused_5746_ = lean_ctor_get(v_snd_5607_, 1);
lean_dec(v_unused_5746_);
v_unused_5747_ = lean_ctor_get(v_snd_5607_, 0);
lean_dec(v_unused_5747_);
v___x_5642_ = v_snd_5607_;
v_isShared_5643_ = v_isSharedCheck_5744_;
goto v_resetjp_5641_;
}
else
{
lean_dec(v_snd_5607_);
v___x_5642_ = lean_box(0);
v_isShared_5643_ = v_isSharedCheck_5744_;
goto v_resetjp_5641_;
}
v_resetjp_5641_:
{
lean_object* v_array_5644_; lean_object* v_start_5645_; lean_object* v_stop_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5651_; 
v_array_5644_ = lean_ctor_get(v_fst_5620_, 0);
v_start_5645_ = lean_ctor_get(v_fst_5620_, 1);
v_stop_5646_ = lean_ctor_get(v_fst_5620_, 2);
v___x_5647_ = lean_array_fget(v_array_5624_, v_start_5625_);
v___x_5648_ = lean_unsigned_to_nat(1u);
v___x_5649_ = lean_nat_add(v_start_5625_, v___x_5648_);
lean_dec(v_start_5625_);
if (v_isShared_5643_ == 0)
{
lean_ctor_set(v___x_5642_, 1, v___x_5649_);
v___x_5651_ = v___x_5642_;
goto v_reusejp_5650_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v_array_5624_);
lean_ctor_set(v_reuseFailAlloc_5743_, 1, v___x_5649_);
lean_ctor_set(v_reuseFailAlloc_5743_, 2, v_stop_5626_);
v___x_5651_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5650_;
}
v_reusejp_5650_:
{
uint8_t v___x_5652_; 
v___x_5652_ = lean_nat_dec_lt(v_start_5645_, v_stop_5646_);
if (v___x_5652_ == 0)
{
lean_object* v___x_5654_; 
lean_dec(v___x_5647_);
if (v_isShared_5623_ == 0)
{
lean_ctor_set(v___x_5622_, 1, v___x_5651_);
v___x_5654_ = v___x_5622_;
goto v_reusejp_5653_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v_fst_5620_);
lean_ctor_set(v_reuseFailAlloc_5665_, 1, v___x_5651_);
v___x_5654_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5653_;
}
v_reusejp_5653_:
{
lean_object* v___x_5656_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 1, v___x_5654_);
v___x_5656_ = v___x_5618_;
goto v_reusejp_5655_;
}
else
{
lean_object* v_reuseFailAlloc_5664_; 
v_reuseFailAlloc_5664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5664_, 0, v_fst_5616_);
lean_ctor_set(v_reuseFailAlloc_5664_, 1, v___x_5654_);
v___x_5656_ = v_reuseFailAlloc_5664_;
goto v_reusejp_5655_;
}
v_reusejp_5655_:
{
lean_object* v___x_5658_; 
if (v_isShared_5615_ == 0)
{
lean_ctor_set(v___x_5614_, 1, v___x_5656_);
v___x_5658_ = v___x_5614_;
goto v_reusejp_5657_;
}
else
{
lean_object* v_reuseFailAlloc_5663_; 
v_reuseFailAlloc_5663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5663_, 0, v_fst_5612_);
lean_ctor_set(v_reuseFailAlloc_5663_, 1, v___x_5656_);
v___x_5658_ = v_reuseFailAlloc_5663_;
goto v_reusejp_5657_;
}
v_reusejp_5657_:
{
lean_object* v___x_5660_; 
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 1, v___x_5658_);
v___x_5660_ = v___x_5610_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5662_; 
v_reuseFailAlloc_5662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5662_, 0, v_fst_5608_);
lean_ctor_set(v_reuseFailAlloc_5662_, 1, v___x_5658_);
v___x_5660_ = v_reuseFailAlloc_5662_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
lean_object* v___x_5661_; 
v___x_5661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5661_, 0, v___x_5660_);
return v___x_5661_;
}
}
}
}
}
else
{
lean_object* v___x_5667_; uint8_t v_isShared_5668_; uint8_t v_isSharedCheck_5739_; 
lean_inc(v_stop_5646_);
lean_inc(v_start_5645_);
lean_inc_ref(v_array_5644_);
v_isSharedCheck_5739_ = !lean_is_exclusive(v_fst_5620_);
if (v_isSharedCheck_5739_ == 0)
{
lean_object* v_unused_5740_; lean_object* v_unused_5741_; lean_object* v_unused_5742_; 
v_unused_5740_ = lean_ctor_get(v_fst_5620_, 2);
lean_dec(v_unused_5740_);
v_unused_5741_ = lean_ctor_get(v_fst_5620_, 1);
lean_dec(v_unused_5741_);
v_unused_5742_ = lean_ctor_get(v_fst_5620_, 0);
lean_dec(v_unused_5742_);
v___x_5667_ = v_fst_5620_;
v_isShared_5668_ = v_isSharedCheck_5739_;
goto v_resetjp_5666_;
}
else
{
lean_dec(v_fst_5620_);
v___x_5667_ = lean_box(0);
v_isShared_5668_ = v_isSharedCheck_5739_;
goto v_resetjp_5666_;
}
v_resetjp_5666_:
{
lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5672_; 
v___x_5669_ = lean_array_fget(v_array_5644_, v_start_5645_);
v___x_5670_ = lean_nat_add(v_start_5645_, v___x_5648_);
lean_dec(v_start_5645_);
if (v_isShared_5668_ == 0)
{
lean_ctor_set(v___x_5667_, 1, v___x_5670_);
v___x_5672_ = v___x_5667_;
goto v_reusejp_5671_;
}
else
{
lean_object* v_reuseFailAlloc_5738_; 
v_reuseFailAlloc_5738_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5738_, 0, v_array_5644_);
lean_ctor_set(v_reuseFailAlloc_5738_, 1, v___x_5670_);
lean_ctor_set(v_reuseFailAlloc_5738_, 2, v_stop_5646_);
v___x_5672_ = v_reuseFailAlloc_5738_;
goto v_reusejp_5671_;
}
v_reusejp_5671_:
{
if (v_addEqualities_5587_ == 0)
{
lean_dec(v___x_5669_);
goto v___jp_5673_;
}
else
{
if (lean_obj_tag(v___x_5647_) == 0)
{
lean_object* v_a_5689_; lean_object* v___x_5690_; 
lean_del_object(v___x_5622_);
lean_del_object(v___x_5618_);
lean_del_object(v___x_5614_);
lean_del_object(v___x_5610_);
v_a_5689_ = lean_array_uget_borrowed(v_as_5588_, v_i_5590_);
lean_inc(v_a_5689_);
v___x_5690_ = l_Lean_Meta_isProof(v_a_5689_, v___y_5592_, v___y_5593_, v___y_5594_, v___y_5595_);
if (lean_obj_tag(v___x_5690_) == 0)
{
lean_object* v_a_5691_; uint8_t v___x_5692_; 
v_a_5691_ = lean_ctor_get(v___x_5690_, 0);
lean_inc(v_a_5691_);
lean_dec_ref_known(v___x_5690_, 1);
v___x_5692_ = lean_unbox(v_a_5691_);
lean_dec(v_a_5691_);
if (v___x_5692_ == 0)
{
lean_object* v___x_5693_; 
lean_inc(v_a_5689_);
v___x_5693_ = l_Lean_Meta_mkEqHEq(v___x_5669_, v_a_5689_, v___y_5592_, v___y_5593_, v___y_5594_, v___y_5595_);
if (lean_obj_tag(v___x_5693_) == 0)
{
lean_object* v_a_5694_; lean_object* v___x_5695_; 
v_a_5694_ = lean_ctor_get(v___x_5693_, 0);
lean_inc_n(v_a_5694_, 2);
lean_dec_ref_known(v___x_5693_, 1);
v___x_5695_ = l_Lean_mkArrow(v_a_5694_, v_fst_5608_, v___y_5594_, v___y_5595_);
if (lean_obj_tag(v___x_5695_) == 0)
{
lean_object* v_a_5696_; uint8_t v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; 
v_a_5696_ = lean_ctor_get(v___x_5695_, 0);
lean_inc(v_a_5696_);
lean_dec_ref_known(v___x_5695_, 1);
v___x_5697_ = l_Lean_Expr_isHEq(v_a_5694_);
lean_dec(v_a_5694_);
v___x_5698_ = lean_box(v___x_5697_);
v___x_5699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5699_, 0, v___x_5698_);
v___x_5700_ = lean_array_push(v_fst_5612_, v___x_5699_);
v___x_5701_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7___closed__0));
v___x_5702_ = lean_array_push(v_fst_5616_, v___x_5701_);
v___x_5703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5703_, 0, v___x_5672_);
lean_ctor_set(v___x_5703_, 1, v___x_5651_);
v___x_5704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5704_, 0, v___x_5702_);
lean_ctor_set(v___x_5704_, 1, v___x_5703_);
v___x_5705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5705_, 0, v___x_5700_);
lean_ctor_set(v___x_5705_, 1, v___x_5704_);
v___x_5706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5706_, 0, v_a_5696_);
lean_ctor_set(v___x_5706_, 1, v___x_5705_);
v_a_5598_ = v___x_5706_;
goto v___jp_5597_;
}
else
{
lean_object* v_a_5707_; lean_object* v___x_5709_; uint8_t v_isShared_5710_; uint8_t v_isSharedCheck_5714_; 
lean_dec(v_a_5694_);
lean_dec_ref(v___x_5672_);
lean_dec_ref(v___x_5651_);
lean_dec(v_fst_5616_);
lean_dec(v_fst_5612_);
v_a_5707_ = lean_ctor_get(v___x_5695_, 0);
v_isSharedCheck_5714_ = !lean_is_exclusive(v___x_5695_);
if (v_isSharedCheck_5714_ == 0)
{
v___x_5709_ = v___x_5695_;
v_isShared_5710_ = v_isSharedCheck_5714_;
goto v_resetjp_5708_;
}
else
{
lean_inc(v_a_5707_);
lean_dec(v___x_5695_);
v___x_5709_ = lean_box(0);
v_isShared_5710_ = v_isSharedCheck_5714_;
goto v_resetjp_5708_;
}
v_resetjp_5708_:
{
lean_object* v___x_5712_; 
if (v_isShared_5710_ == 0)
{
v___x_5712_ = v___x_5709_;
goto v_reusejp_5711_;
}
else
{
lean_object* v_reuseFailAlloc_5713_; 
v_reuseFailAlloc_5713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5713_, 0, v_a_5707_);
v___x_5712_ = v_reuseFailAlloc_5713_;
goto v_reusejp_5711_;
}
v_reusejp_5711_:
{
return v___x_5712_;
}
}
}
}
else
{
lean_object* v_a_5715_; lean_object* v___x_5717_; uint8_t v_isShared_5718_; uint8_t v_isSharedCheck_5722_; 
lean_dec_ref(v___x_5672_);
lean_dec_ref(v___x_5651_);
lean_dec(v_fst_5616_);
lean_dec(v_fst_5612_);
lean_dec(v_fst_5608_);
v_a_5715_ = lean_ctor_get(v___x_5693_, 0);
v_isSharedCheck_5722_ = !lean_is_exclusive(v___x_5693_);
if (v_isSharedCheck_5722_ == 0)
{
v___x_5717_ = v___x_5693_;
v_isShared_5718_ = v_isSharedCheck_5722_;
goto v_resetjp_5716_;
}
else
{
lean_inc(v_a_5715_);
lean_dec(v___x_5693_);
v___x_5717_ = lean_box(0);
v_isShared_5718_ = v_isSharedCheck_5722_;
goto v_resetjp_5716_;
}
v_resetjp_5716_:
{
lean_object* v___x_5720_; 
if (v_isShared_5718_ == 0)
{
v___x_5720_ = v___x_5717_;
goto v_reusejp_5719_;
}
else
{
lean_object* v_reuseFailAlloc_5721_; 
v_reuseFailAlloc_5721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5721_, 0, v_a_5715_);
v___x_5720_ = v_reuseFailAlloc_5721_;
goto v_reusejp_5719_;
}
v_reusejp_5719_:
{
return v___x_5720_;
}
}
}
}
else
{
lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; 
lean_dec(v___x_5669_);
v___x_5723_ = lean_box(0);
v___x_5724_ = lean_array_push(v_fst_5612_, v___x_5723_);
v___x_5725_ = lean_array_push(v_fst_5616_, v___x_5647_);
v___x_5726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5726_, 0, v___x_5672_);
lean_ctor_set(v___x_5726_, 1, v___x_5651_);
v___x_5727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5727_, 0, v___x_5725_);
lean_ctor_set(v___x_5727_, 1, v___x_5726_);
v___x_5728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5728_, 0, v___x_5724_);
lean_ctor_set(v___x_5728_, 1, v___x_5727_);
v___x_5729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5729_, 0, v_fst_5608_);
lean_ctor_set(v___x_5729_, 1, v___x_5728_);
v_a_5598_ = v___x_5729_;
goto v___jp_5597_;
}
}
else
{
lean_object* v_a_5730_; lean_object* v___x_5732_; uint8_t v_isShared_5733_; uint8_t v_isSharedCheck_5737_; 
lean_dec_ref(v___x_5672_);
lean_dec(v___x_5669_);
lean_dec_ref(v___x_5651_);
lean_dec(v_fst_5616_);
lean_dec(v_fst_5612_);
lean_dec(v_fst_5608_);
v_a_5730_ = lean_ctor_get(v___x_5690_, 0);
v_isSharedCheck_5737_ = !lean_is_exclusive(v___x_5690_);
if (v_isSharedCheck_5737_ == 0)
{
v___x_5732_ = v___x_5690_;
v_isShared_5733_ = v_isSharedCheck_5737_;
goto v_resetjp_5731_;
}
else
{
lean_inc(v_a_5730_);
lean_dec(v___x_5690_);
v___x_5732_ = lean_box(0);
v_isShared_5733_ = v_isSharedCheck_5737_;
goto v_resetjp_5731_;
}
v_resetjp_5731_:
{
lean_object* v___x_5735_; 
if (v_isShared_5733_ == 0)
{
v___x_5735_ = v___x_5732_;
goto v_reusejp_5734_;
}
else
{
lean_object* v_reuseFailAlloc_5736_; 
v_reuseFailAlloc_5736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5736_, 0, v_a_5730_);
v___x_5735_ = v_reuseFailAlloc_5736_;
goto v_reusejp_5734_;
}
v_reusejp_5734_:
{
return v___x_5735_;
}
}
}
}
else
{
lean_dec(v___x_5669_);
goto v___jp_5673_;
}
}
v___jp_5673_:
{
lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5678_; 
v___x_5674_ = lean_box(0);
v___x_5675_ = lean_array_push(v_fst_5612_, v___x_5674_);
v___x_5676_ = lean_array_push(v_fst_5616_, v___x_5647_);
if (v_isShared_5623_ == 0)
{
lean_ctor_set(v___x_5622_, 1, v___x_5651_);
lean_ctor_set(v___x_5622_, 0, v___x_5672_);
v___x_5678_ = v___x_5622_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5688_; 
v_reuseFailAlloc_5688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5688_, 0, v___x_5672_);
lean_ctor_set(v_reuseFailAlloc_5688_, 1, v___x_5651_);
v___x_5678_ = v_reuseFailAlloc_5688_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
lean_object* v___x_5680_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 1, v___x_5678_);
lean_ctor_set(v___x_5618_, 0, v___x_5676_);
v___x_5680_ = v___x_5618_;
goto v_reusejp_5679_;
}
else
{
lean_object* v_reuseFailAlloc_5687_; 
v_reuseFailAlloc_5687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5687_, 0, v___x_5676_);
lean_ctor_set(v_reuseFailAlloc_5687_, 1, v___x_5678_);
v___x_5680_ = v_reuseFailAlloc_5687_;
goto v_reusejp_5679_;
}
v_reusejp_5679_:
{
lean_object* v___x_5682_; 
if (v_isShared_5615_ == 0)
{
lean_ctor_set(v___x_5614_, 1, v___x_5680_);
lean_ctor_set(v___x_5614_, 0, v___x_5675_);
v___x_5682_ = v___x_5614_;
goto v_reusejp_5681_;
}
else
{
lean_object* v_reuseFailAlloc_5686_; 
v_reuseFailAlloc_5686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5686_, 0, v___x_5675_);
lean_ctor_set(v_reuseFailAlloc_5686_, 1, v___x_5680_);
v___x_5682_ = v_reuseFailAlloc_5686_;
goto v_reusejp_5681_;
}
v_reusejp_5681_:
{
lean_object* v___x_5684_; 
if (v_isShared_5611_ == 0)
{
lean_ctor_set(v___x_5610_, 1, v___x_5682_);
v___x_5684_ = v___x_5610_;
goto v_reusejp_5683_;
}
else
{
lean_object* v_reuseFailAlloc_5685_; 
v_reuseFailAlloc_5685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5685_, 0, v_fst_5608_);
lean_ctor_set(v_reuseFailAlloc_5685_, 1, v___x_5682_);
v___x_5684_ = v_reuseFailAlloc_5685_;
goto v_reusejp_5683_;
}
v_reusejp_5683_:
{
v_a_5598_ = v___x_5684_;
goto v___jp_5597_;
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
}
v___jp_5597_:
{
size_t v___x_5599_; size_t v___x_5600_; 
v___x_5599_ = ((size_t)1ULL);
v___x_5600_ = lean_usize_add(v_i_5590_, v___x_5599_);
v_i_5590_ = v___x_5600_;
v_b_5591_ = v_a_5598_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object* v_addEqualities_5756_, lean_object* v_as_5757_, lean_object* v_sz_5758_, lean_object* v_i_5759_, lean_object* v_b_5760_, lean_object* v___y_5761_, lean_object* v___y_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_){
_start:
{
uint8_t v_addEqualities_boxed_5766_; size_t v_sz_boxed_5767_; size_t v_i_boxed_5768_; lean_object* v_res_5769_; 
v_addEqualities_boxed_5766_ = lean_unbox(v_addEqualities_5756_);
v_sz_boxed_5767_ = lean_unbox_usize(v_sz_5758_);
lean_dec(v_sz_5758_);
v_i_boxed_5768_ = lean_unbox_usize(v_i_5759_);
lean_dec(v_i_5759_);
v_res_5769_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_boxed_5766_, v_as_5757_, v_sz_boxed_5767_, v_i_boxed_5768_, v_b_5760_, v___y_5761_, v___y_5762_, v___y_5763_, v___y_5764_);
lean_dec(v___y_5764_);
lean_dec_ref(v___y_5763_);
lean_dec(v___y_5762_);
lean_dec_ref(v___y_5761_);
lean_dec_ref(v_as_5757_);
return v_res_5769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object* v_onMotive_5770_, lean_object* v_toMatcherInfo_5771_, lean_object* v_a_5772_, uint8_t v_addEqualities_5773_, size_t v___x_5774_, lean_object* v_discrs_5775_, lean_object* v_motiveArgs_5776_, lean_object* v_motiveBody_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_, lean_object* v___y_5780_, lean_object* v___y_5781_){
_start:
{
lean_object* v___x_5875_; lean_object* v___x_5876_; uint8_t v___x_5877_; 
v___x_5875_ = lean_array_get_size(v_motiveArgs_5776_);
v___x_5876_ = lean_array_get_size(v_discrs_5775_);
v___x_5877_ = lean_nat_dec_eq(v___x_5875_, v___x_5876_);
if (v___x_5877_ == 0)
{
lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v_a_5886_; lean_object* v___x_5888_; uint8_t v_isShared_5889_; uint8_t v_isSharedCheck_5893_; 
lean_dec_ref(v_motiveBody_5777_);
lean_dec_ref(v_motiveArgs_5776_);
lean_dec_ref(v_a_5772_);
lean_dec_ref(v_toMatcherInfo_5771_);
lean_dec_ref(v_onMotive_5770_);
v___x_5878_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_5879_ = l_Nat_reprFast(v___x_5876_);
v___x_5880_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5880_, 0, v___x_5879_);
v___x_5881_ = l_Lean_MessageData_ofFormat(v___x_5880_);
v___x_5882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5882_, 0, v___x_5878_);
lean_ctor_set(v___x_5882_, 1, v___x_5881_);
v___x_5883_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_5884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5884_, 0, v___x_5882_);
lean_ctor_set(v___x_5884_, 1, v___x_5883_);
v___x_5885_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5884_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_);
v_a_5886_ = lean_ctor_get(v___x_5885_, 0);
v_isSharedCheck_5893_ = !lean_is_exclusive(v___x_5885_);
if (v_isSharedCheck_5893_ == 0)
{
v___x_5888_ = v___x_5885_;
v_isShared_5889_ = v_isSharedCheck_5893_;
goto v_resetjp_5887_;
}
else
{
lean_inc(v_a_5886_);
lean_dec(v___x_5885_);
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
else
{
goto v___jp_5783_;
}
v___jp_5783_:
{
lean_object* v___x_5784_; 
lean_inc(v___y_5781_);
lean_inc_ref(v___y_5780_);
lean_inc(v___y_5779_);
lean_inc_ref(v___y_5778_);
lean_inc_ref(v_motiveArgs_5776_);
v___x_5784_ = lean_apply_7(v_onMotive_5770_, v_motiveArgs_5776_, v_motiveBody_5777_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_, lean_box(0));
if (lean_obj_tag(v___x_5784_) == 0)
{
lean_object* v_a_5785_; lean_object* v_discrInfos_5786_; lean_object* v___x_5787_; lean_object* v_addHEqualities_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; size_t v_sz_5797_; lean_object* v___x_5798_; 
v_a_5785_ = lean_ctor_get(v___x_5784_, 0);
lean_inc(v_a_5785_);
lean_dec_ref_known(v___x_5784_, 1);
v_discrInfos_5786_ = lean_ctor_get(v_toMatcherInfo_5771_, 4);
lean_inc_ref(v_discrInfos_5786_);
lean_dec_ref(v_toMatcherInfo_5771_);
v___x_5787_ = lean_unsigned_to_nat(0u);
v_addHEqualities_5788_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0));
v___x_5789_ = lean_array_get_size(v_a_5772_);
v___x_5790_ = l_Array_toSubarray___redArg(v_a_5772_, v___x_5787_, v___x_5789_);
v___x_5791_ = lean_array_get_size(v_discrInfos_5786_);
v___x_5792_ = l_Array_toSubarray___redArg(v_discrInfos_5786_, v___x_5787_, v___x_5791_);
v___x_5793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5793_, 0, v___x_5790_);
lean_ctor_set(v___x_5793_, 1, v___x_5792_);
v___x_5794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5794_, 0, v_addHEqualities_5788_);
lean_ctor_set(v___x_5794_, 1, v___x_5793_);
v___x_5795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5795_, 0, v_addHEqualities_5788_);
lean_ctor_set(v___x_5795_, 1, v___x_5794_);
v___x_5796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5796_, 0, v_a_5785_);
lean_ctor_set(v___x_5796_, 1, v___x_5795_);
v_sz_5797_ = lean_array_size(v_motiveArgs_5776_);
v___x_5798_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_5773_, v_motiveArgs_5776_, v_sz_5797_, v___x_5774_, v___x_5796_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_);
if (lean_obj_tag(v___x_5798_) == 0)
{
lean_object* v_a_5799_; lean_object* v_snd_5800_; lean_object* v_snd_5801_; lean_object* v_fst_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5857_; 
v_a_5799_ = lean_ctor_get(v___x_5798_, 0);
lean_inc(v_a_5799_);
lean_dec_ref_known(v___x_5798_, 1);
v_snd_5800_ = lean_ctor_get(v_a_5799_, 1);
lean_inc(v_snd_5800_);
v_snd_5801_ = lean_ctor_get(v_snd_5800_, 1);
lean_inc(v_snd_5801_);
v_fst_5802_ = lean_ctor_get(v_a_5799_, 0);
v_isSharedCheck_5857_ = !lean_is_exclusive(v_a_5799_);
if (v_isSharedCheck_5857_ == 0)
{
lean_object* v_unused_5858_; 
v_unused_5858_ = lean_ctor_get(v_a_5799_, 1);
lean_dec(v_unused_5858_);
v___x_5804_ = v_a_5799_;
v_isShared_5805_ = v_isSharedCheck_5857_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_fst_5802_);
lean_dec(v_a_5799_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5857_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
lean_object* v_fst_5806_; lean_object* v___x_5808_; uint8_t v_isShared_5809_; uint8_t v_isSharedCheck_5855_; 
v_fst_5806_ = lean_ctor_get(v_snd_5800_, 0);
v_isSharedCheck_5855_ = !lean_is_exclusive(v_snd_5800_);
if (v_isSharedCheck_5855_ == 0)
{
lean_object* v_unused_5856_; 
v_unused_5856_ = lean_ctor_get(v_snd_5800_, 1);
lean_dec(v_unused_5856_);
v___x_5808_ = v_snd_5800_;
v_isShared_5809_ = v_isSharedCheck_5855_;
goto v_resetjp_5807_;
}
else
{
lean_inc(v_fst_5806_);
lean_dec(v_snd_5800_);
v___x_5808_ = lean_box(0);
v_isShared_5809_ = v_isSharedCheck_5855_;
goto v_resetjp_5807_;
}
v_resetjp_5807_:
{
lean_object* v_fst_5810_; lean_object* v___x_5812_; uint8_t v_isShared_5813_; uint8_t v_isSharedCheck_5853_; 
v_fst_5810_ = lean_ctor_get(v_snd_5801_, 0);
v_isSharedCheck_5853_ = !lean_is_exclusive(v_snd_5801_);
if (v_isSharedCheck_5853_ == 0)
{
lean_object* v_unused_5854_; 
v_unused_5854_ = lean_ctor_get(v_snd_5801_, 1);
lean_dec(v_unused_5854_);
v___x_5812_ = v_snd_5801_;
v_isShared_5813_ = v_isSharedCheck_5853_;
goto v_resetjp_5811_;
}
else
{
lean_inc(v_fst_5810_);
lean_dec(v_snd_5801_);
v___x_5812_ = lean_box(0);
v_isShared_5813_ = v_isSharedCheck_5853_;
goto v_resetjp_5811_;
}
v_resetjp_5811_:
{
uint8_t v___x_5814_; uint8_t v___x_5815_; uint8_t v___x_5816_; lean_object* v___x_5817_; 
v___x_5814_ = 0;
v___x_5815_ = 1;
v___x_5816_ = 1;
lean_inc(v_fst_5802_);
v___x_5817_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_5776_, v_fst_5802_, v___x_5814_, v___x_5815_, v___x_5814_, v___x_5815_, v___x_5816_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_);
lean_dec_ref(v_motiveArgs_5776_);
if (lean_obj_tag(v___x_5817_) == 0)
{
lean_object* v_a_5818_; lean_object* v___x_5819_; 
v_a_5818_ = lean_ctor_get(v___x_5817_, 0);
lean_inc(v_a_5818_);
lean_dec_ref_known(v___x_5817_, 1);
v___x_5819_ = l_Lean_Meta_getLevel(v_fst_5802_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_);
if (lean_obj_tag(v___x_5819_) == 0)
{
lean_object* v_a_5820_; lean_object* v___x_5822_; uint8_t v_isShared_5823_; uint8_t v_isSharedCheck_5836_; 
v_a_5820_ = lean_ctor_get(v___x_5819_, 0);
v_isSharedCheck_5836_ = !lean_is_exclusive(v___x_5819_);
if (v_isSharedCheck_5836_ == 0)
{
v___x_5822_ = v___x_5819_;
v_isShared_5823_ = v_isSharedCheck_5836_;
goto v_resetjp_5821_;
}
else
{
lean_inc(v_a_5820_);
lean_dec(v___x_5819_);
v___x_5822_ = lean_box(0);
v_isShared_5823_ = v_isSharedCheck_5836_;
goto v_resetjp_5821_;
}
v_resetjp_5821_:
{
lean_object* v___x_5825_; 
if (v_isShared_5813_ == 0)
{
lean_ctor_set(v___x_5812_, 1, v_fst_5810_);
lean_ctor_set(v___x_5812_, 0, v_fst_5806_);
v___x_5825_ = v___x_5812_;
goto v_reusejp_5824_;
}
else
{
lean_object* v_reuseFailAlloc_5835_; 
v_reuseFailAlloc_5835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5835_, 0, v_fst_5806_);
lean_ctor_set(v_reuseFailAlloc_5835_, 1, v_fst_5810_);
v___x_5825_ = v_reuseFailAlloc_5835_;
goto v_reusejp_5824_;
}
v_reusejp_5824_:
{
lean_object* v___x_5827_; 
if (v_isShared_5809_ == 0)
{
lean_ctor_set(v___x_5808_, 1, v___x_5825_);
lean_ctor_set(v___x_5808_, 0, v_a_5820_);
v___x_5827_ = v___x_5808_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5834_; 
v_reuseFailAlloc_5834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5834_, 0, v_a_5820_);
lean_ctor_set(v_reuseFailAlloc_5834_, 1, v___x_5825_);
v___x_5827_ = v_reuseFailAlloc_5834_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
lean_object* v___x_5829_; 
if (v_isShared_5805_ == 0)
{
lean_ctor_set(v___x_5804_, 1, v___x_5827_);
lean_ctor_set(v___x_5804_, 0, v_a_5818_);
v___x_5829_ = v___x_5804_;
goto v_reusejp_5828_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v_a_5818_);
lean_ctor_set(v_reuseFailAlloc_5833_, 1, v___x_5827_);
v___x_5829_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5828_;
}
v_reusejp_5828_:
{
lean_object* v___x_5831_; 
if (v_isShared_5823_ == 0)
{
lean_ctor_set(v___x_5822_, 0, v___x_5829_);
v___x_5831_ = v___x_5822_;
goto v_reusejp_5830_;
}
else
{
lean_object* v_reuseFailAlloc_5832_; 
v_reuseFailAlloc_5832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5832_, 0, v___x_5829_);
v___x_5831_ = v_reuseFailAlloc_5832_;
goto v_reusejp_5830_;
}
v_reusejp_5830_:
{
return v___x_5831_;
}
}
}
}
}
}
else
{
lean_object* v_a_5837_; lean_object* v___x_5839_; uint8_t v_isShared_5840_; uint8_t v_isSharedCheck_5844_; 
lean_dec(v_a_5818_);
lean_del_object(v___x_5812_);
lean_dec(v_fst_5810_);
lean_del_object(v___x_5808_);
lean_dec(v_fst_5806_);
lean_del_object(v___x_5804_);
v_a_5837_ = lean_ctor_get(v___x_5819_, 0);
v_isSharedCheck_5844_ = !lean_is_exclusive(v___x_5819_);
if (v_isSharedCheck_5844_ == 0)
{
v___x_5839_ = v___x_5819_;
v_isShared_5840_ = v_isSharedCheck_5844_;
goto v_resetjp_5838_;
}
else
{
lean_inc(v_a_5837_);
lean_dec(v___x_5819_);
v___x_5839_ = lean_box(0);
v_isShared_5840_ = v_isSharedCheck_5844_;
goto v_resetjp_5838_;
}
v_resetjp_5838_:
{
lean_object* v___x_5842_; 
if (v_isShared_5840_ == 0)
{
v___x_5842_ = v___x_5839_;
goto v_reusejp_5841_;
}
else
{
lean_object* v_reuseFailAlloc_5843_; 
v_reuseFailAlloc_5843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5843_, 0, v_a_5837_);
v___x_5842_ = v_reuseFailAlloc_5843_;
goto v_reusejp_5841_;
}
v_reusejp_5841_:
{
return v___x_5842_;
}
}
}
}
else
{
lean_object* v_a_5845_; lean_object* v___x_5847_; uint8_t v_isShared_5848_; uint8_t v_isSharedCheck_5852_; 
lean_del_object(v___x_5812_);
lean_dec(v_fst_5810_);
lean_del_object(v___x_5808_);
lean_dec(v_fst_5806_);
lean_del_object(v___x_5804_);
lean_dec(v_fst_5802_);
v_a_5845_ = lean_ctor_get(v___x_5817_, 0);
v_isSharedCheck_5852_ = !lean_is_exclusive(v___x_5817_);
if (v_isSharedCheck_5852_ == 0)
{
v___x_5847_ = v___x_5817_;
v_isShared_5848_ = v_isSharedCheck_5852_;
goto v_resetjp_5846_;
}
else
{
lean_inc(v_a_5845_);
lean_dec(v___x_5817_);
v___x_5847_ = lean_box(0);
v_isShared_5848_ = v_isSharedCheck_5852_;
goto v_resetjp_5846_;
}
v_resetjp_5846_:
{
lean_object* v___x_5850_; 
if (v_isShared_5848_ == 0)
{
v___x_5850_ = v___x_5847_;
goto v_reusejp_5849_;
}
else
{
lean_object* v_reuseFailAlloc_5851_; 
v_reuseFailAlloc_5851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5851_, 0, v_a_5845_);
v___x_5850_ = v_reuseFailAlloc_5851_;
goto v_reusejp_5849_;
}
v_reusejp_5849_:
{
return v___x_5850_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5859_; lean_object* v___x_5861_; uint8_t v_isShared_5862_; uint8_t v_isSharedCheck_5866_; 
lean_dec_ref(v_motiveArgs_5776_);
v_a_5859_ = lean_ctor_get(v___x_5798_, 0);
v_isSharedCheck_5866_ = !lean_is_exclusive(v___x_5798_);
if (v_isSharedCheck_5866_ == 0)
{
v___x_5861_ = v___x_5798_;
v_isShared_5862_ = v_isSharedCheck_5866_;
goto v_resetjp_5860_;
}
else
{
lean_inc(v_a_5859_);
lean_dec(v___x_5798_);
v___x_5861_ = lean_box(0);
v_isShared_5862_ = v_isSharedCheck_5866_;
goto v_resetjp_5860_;
}
v_resetjp_5860_:
{
lean_object* v___x_5864_; 
if (v_isShared_5862_ == 0)
{
v___x_5864_ = v___x_5861_;
goto v_reusejp_5863_;
}
else
{
lean_object* v_reuseFailAlloc_5865_; 
v_reuseFailAlloc_5865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5865_, 0, v_a_5859_);
v___x_5864_ = v_reuseFailAlloc_5865_;
goto v_reusejp_5863_;
}
v_reusejp_5863_:
{
return v___x_5864_;
}
}
}
}
else
{
lean_object* v_a_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5874_; 
lean_dec_ref(v_motiveArgs_5776_);
lean_dec_ref(v_a_5772_);
lean_dec_ref(v_toMatcherInfo_5771_);
v_a_5867_ = lean_ctor_get(v___x_5784_, 0);
v_isSharedCheck_5874_ = !lean_is_exclusive(v___x_5784_);
if (v_isSharedCheck_5874_ == 0)
{
v___x_5869_ = v___x_5784_;
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_a_5867_);
lean_dec(v___x_5784_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5874_;
goto v_resetjp_5868_;
}
v_resetjp_5868_:
{
lean_object* v___x_5872_; 
if (v_isShared_5870_ == 0)
{
v___x_5872_ = v___x_5869_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5873_; 
v_reuseFailAlloc_5873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5873_, 0, v_a_5867_);
v___x_5872_ = v_reuseFailAlloc_5873_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
return v___x_5872_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object* v_onMotive_5894_, lean_object* v_toMatcherInfo_5895_, lean_object* v_a_5896_, lean_object* v_addEqualities_5897_, lean_object* v___x_5898_, lean_object* v_discrs_5899_, lean_object* v_motiveArgs_5900_, lean_object* v_motiveBody_5901_, lean_object* v___y_5902_, lean_object* v___y_5903_, lean_object* v___y_5904_, lean_object* v___y_5905_, lean_object* v___y_5906_){
_start:
{
uint8_t v_addEqualities_boxed_5907_; size_t v___x_34488__boxed_5908_; lean_object* v_res_5909_; 
v_addEqualities_boxed_5907_ = lean_unbox(v_addEqualities_5897_);
v___x_34488__boxed_5908_ = lean_unbox_usize(v___x_5898_);
lean_dec(v___x_5898_);
v_res_5909_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(v_onMotive_5894_, v_toMatcherInfo_5895_, v_a_5896_, v_addEqualities_boxed_5907_, v___x_34488__boxed_5908_, v_discrs_5899_, v_motiveArgs_5900_, v_motiveBody_5901_, v___y_5902_, v___y_5903_, v___y_5904_, v___y_5905_);
lean_dec(v___y_5905_);
lean_dec_ref(v___y_5904_);
lean_dec(v___y_5903_);
lean_dec_ref(v___y_5902_);
lean_dec_ref(v_discrs_5899_);
return v_res_5909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object* v_as_5910_, size_t v_sz_5911_, size_t v_i_5912_, lean_object* v_b_5913_, lean_object* v___y_5914_, lean_object* v___y_5915_, lean_object* v___y_5916_, lean_object* v___y_5917_){
_start:
{
lean_object* v_a_5920_; uint8_t v___x_5924_; 
v___x_5924_ = lean_usize_dec_lt(v_i_5912_, v_sz_5911_);
if (v___x_5924_ == 0)
{
lean_object* v___x_5925_; 
v___x_5925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5925_, 0, v_b_5913_);
return v___x_5925_;
}
else
{
lean_object* v_snd_5926_; lean_object* v_snd_5927_; lean_object* v_fst_5928_; lean_object* v___x_5930_; uint8_t v_isShared_5931_; uint8_t v_isSharedCheck_5988_; 
v_snd_5926_ = lean_ctor_get(v_b_5913_, 1);
lean_inc(v_snd_5926_);
v_snd_5927_ = lean_ctor_get(v_snd_5926_, 1);
lean_inc(v_snd_5927_);
v_fst_5928_ = lean_ctor_get(v_b_5913_, 0);
v_isSharedCheck_5988_ = !lean_is_exclusive(v_b_5913_);
if (v_isSharedCheck_5988_ == 0)
{
lean_object* v_unused_5989_; 
v_unused_5989_ = lean_ctor_get(v_b_5913_, 1);
lean_dec(v_unused_5989_);
v___x_5930_ = v_b_5913_;
v_isShared_5931_ = v_isSharedCheck_5988_;
goto v_resetjp_5929_;
}
else
{
lean_inc(v_fst_5928_);
lean_dec(v_b_5913_);
v___x_5930_ = lean_box(0);
v_isShared_5931_ = v_isSharedCheck_5988_;
goto v_resetjp_5929_;
}
v_resetjp_5929_:
{
lean_object* v_fst_5932_; lean_object* v___x_5934_; uint8_t v_isShared_5935_; uint8_t v_isSharedCheck_5986_; 
v_fst_5932_ = lean_ctor_get(v_snd_5926_, 0);
v_isSharedCheck_5986_ = !lean_is_exclusive(v_snd_5926_);
if (v_isSharedCheck_5986_ == 0)
{
lean_object* v_unused_5987_; 
v_unused_5987_ = lean_ctor_get(v_snd_5926_, 1);
lean_dec(v_unused_5987_);
v___x_5934_ = v_snd_5926_;
v_isShared_5935_ = v_isSharedCheck_5986_;
goto v_resetjp_5933_;
}
else
{
lean_inc(v_fst_5932_);
lean_dec(v_snd_5926_);
v___x_5934_ = lean_box(0);
v_isShared_5935_ = v_isSharedCheck_5986_;
goto v_resetjp_5933_;
}
v_resetjp_5933_:
{
lean_object* v_array_5936_; lean_object* v_start_5937_; lean_object* v_stop_5938_; uint8_t v___x_5939_; 
v_array_5936_ = lean_ctor_get(v_snd_5927_, 0);
v_start_5937_ = lean_ctor_get(v_snd_5927_, 1);
v_stop_5938_ = lean_ctor_get(v_snd_5927_, 2);
v___x_5939_ = lean_nat_dec_lt(v_start_5937_, v_stop_5938_);
if (v___x_5939_ == 0)
{
lean_object* v___x_5941_; 
if (v_isShared_5935_ == 0)
{
v___x_5941_ = v___x_5934_;
goto v_reusejp_5940_;
}
else
{
lean_object* v_reuseFailAlloc_5946_; 
v_reuseFailAlloc_5946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5946_, 0, v_fst_5932_);
lean_ctor_set(v_reuseFailAlloc_5946_, 1, v_snd_5927_);
v___x_5941_ = v_reuseFailAlloc_5946_;
goto v_reusejp_5940_;
}
v_reusejp_5940_:
{
lean_object* v___x_5943_; 
if (v_isShared_5931_ == 0)
{
lean_ctor_set(v___x_5930_, 1, v___x_5941_);
v___x_5943_ = v___x_5930_;
goto v_reusejp_5942_;
}
else
{
lean_object* v_reuseFailAlloc_5945_; 
v_reuseFailAlloc_5945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5945_, 0, v_fst_5928_);
lean_ctor_set(v_reuseFailAlloc_5945_, 1, v___x_5941_);
v___x_5943_ = v_reuseFailAlloc_5945_;
goto v_reusejp_5942_;
}
v_reusejp_5942_:
{
lean_object* v___x_5944_; 
v___x_5944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5944_, 0, v___x_5943_);
return v___x_5944_;
}
}
}
else
{
lean_object* v___x_5948_; uint8_t v_isShared_5949_; uint8_t v_isSharedCheck_5982_; 
lean_inc(v_stop_5938_);
lean_inc(v_start_5937_);
lean_inc_ref(v_array_5936_);
v_isSharedCheck_5982_ = !lean_is_exclusive(v_snd_5927_);
if (v_isSharedCheck_5982_ == 0)
{
lean_object* v_unused_5983_; lean_object* v_unused_5984_; lean_object* v_unused_5985_; 
v_unused_5983_ = lean_ctor_get(v_snd_5927_, 2);
lean_dec(v_unused_5983_);
v_unused_5984_ = lean_ctor_get(v_snd_5927_, 1);
lean_dec(v_unused_5984_);
v_unused_5985_ = lean_ctor_get(v_snd_5927_, 0);
lean_dec(v_unused_5985_);
v___x_5948_ = v_snd_5927_;
v_isShared_5949_ = v_isSharedCheck_5982_;
goto v_resetjp_5947_;
}
else
{
lean_dec(v_snd_5927_);
v___x_5948_ = lean_box(0);
v_isShared_5949_ = v_isSharedCheck_5982_;
goto v_resetjp_5947_;
}
v_resetjp_5947_:
{
lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5954_; 
v___x_5950_ = lean_array_fget(v_array_5936_, v_start_5937_);
v___x_5951_ = lean_unsigned_to_nat(1u);
v___x_5952_ = lean_nat_add(v_start_5937_, v___x_5951_);
lean_dec(v_start_5937_);
if (v_isShared_5949_ == 0)
{
lean_ctor_set(v___x_5948_, 1, v___x_5952_);
v___x_5954_ = v___x_5948_;
goto v_reusejp_5953_;
}
else
{
lean_object* v_reuseFailAlloc_5981_; 
v_reuseFailAlloc_5981_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5981_, 0, v_array_5936_);
lean_ctor_set(v_reuseFailAlloc_5981_, 1, v___x_5952_);
lean_ctor_set(v_reuseFailAlloc_5981_, 2, v_stop_5938_);
v___x_5954_ = v_reuseFailAlloc_5981_;
goto v_reusejp_5953_;
}
v_reusejp_5953_:
{
lean_object* v___y_5956_; 
if (lean_obj_tag(v___x_5950_) == 0)
{
lean_object* v___x_5974_; lean_object* v___x_5975_; 
lean_del_object(v___x_5934_);
lean_del_object(v___x_5930_);
v___x_5974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5974_, 0, v_fst_5932_);
lean_ctor_set(v___x_5974_, 1, v___x_5954_);
v___x_5975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5975_, 0, v_fst_5928_);
lean_ctor_set(v___x_5975_, 1, v___x_5974_);
v_a_5920_ = v___x_5975_;
goto v___jp_5919_;
}
else
{
lean_object* v_val_5976_; lean_object* v_a_5977_; uint8_t v___x_5978_; 
v_val_5976_ = lean_ctor_get(v___x_5950_, 0);
lean_inc(v_val_5976_);
lean_dec_ref_known(v___x_5950_, 1);
v_a_5977_ = lean_array_uget_borrowed(v_as_5910_, v_i_5912_);
v___x_5978_ = lean_unbox(v_val_5976_);
lean_dec(v_val_5976_);
if (v___x_5978_ == 0)
{
lean_object* v___x_5979_; 
lean_inc(v_a_5977_);
v___x_5979_ = l_Lean_Meta_mkEqRefl(v_a_5977_, v___y_5914_, v___y_5915_, v___y_5916_, v___y_5917_);
v___y_5956_ = v___x_5979_;
goto v___jp_5955_;
}
else
{
lean_object* v___x_5980_; 
lean_inc(v_a_5977_);
v___x_5980_ = l_Lean_Meta_mkHEqRefl(v_a_5977_, v___y_5914_, v___y_5915_, v___y_5916_, v___y_5917_);
v___y_5956_ = v___x_5980_;
goto v___jp_5955_;
}
}
v___jp_5955_:
{
if (lean_obj_tag(v___y_5956_) == 0)
{
lean_object* v_a_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5961_; 
v_a_5957_ = lean_ctor_get(v___y_5956_, 0);
lean_inc(v_a_5957_);
lean_dec_ref_known(v___y_5956_, 1);
v___x_5958_ = lean_array_push(v_fst_5928_, v_a_5957_);
v___x_5959_ = lean_nat_add(v_fst_5932_, v___x_5951_);
lean_dec(v_fst_5932_);
if (v_isShared_5935_ == 0)
{
lean_ctor_set(v___x_5934_, 1, v___x_5954_);
lean_ctor_set(v___x_5934_, 0, v___x_5959_);
v___x_5961_ = v___x_5934_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v___x_5959_);
lean_ctor_set(v_reuseFailAlloc_5965_, 1, v___x_5954_);
v___x_5961_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
lean_object* v___x_5963_; 
if (v_isShared_5931_ == 0)
{
lean_ctor_set(v___x_5930_, 1, v___x_5961_);
lean_ctor_set(v___x_5930_, 0, v___x_5958_);
v___x_5963_ = v___x_5930_;
goto v_reusejp_5962_;
}
else
{
lean_object* v_reuseFailAlloc_5964_; 
v_reuseFailAlloc_5964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5964_, 0, v___x_5958_);
lean_ctor_set(v_reuseFailAlloc_5964_, 1, v___x_5961_);
v___x_5963_ = v_reuseFailAlloc_5964_;
goto v_reusejp_5962_;
}
v_reusejp_5962_:
{
v_a_5920_ = v___x_5963_;
goto v___jp_5919_;
}
}
}
else
{
lean_object* v_a_5966_; lean_object* v___x_5968_; uint8_t v_isShared_5969_; uint8_t v_isSharedCheck_5973_; 
lean_dec_ref(v___x_5954_);
lean_del_object(v___x_5934_);
lean_dec(v_fst_5932_);
lean_del_object(v___x_5930_);
lean_dec(v_fst_5928_);
v_a_5966_ = lean_ctor_get(v___y_5956_, 0);
v_isSharedCheck_5973_ = !lean_is_exclusive(v___y_5956_);
if (v_isSharedCheck_5973_ == 0)
{
v___x_5968_ = v___y_5956_;
v_isShared_5969_ = v_isSharedCheck_5973_;
goto v_resetjp_5967_;
}
else
{
lean_inc(v_a_5966_);
lean_dec(v___y_5956_);
v___x_5968_ = lean_box(0);
v_isShared_5969_ = v_isSharedCheck_5973_;
goto v_resetjp_5967_;
}
v_resetjp_5967_:
{
lean_object* v___x_5971_; 
if (v_isShared_5969_ == 0)
{
v___x_5971_ = v___x_5968_;
goto v_reusejp_5970_;
}
else
{
lean_object* v_reuseFailAlloc_5972_; 
v_reuseFailAlloc_5972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5972_, 0, v_a_5966_);
v___x_5971_ = v_reuseFailAlloc_5972_;
goto v_reusejp_5970_;
}
v_reusejp_5970_:
{
return v___x_5971_;
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
v___jp_5919_:
{
size_t v___x_5921_; size_t v___x_5922_; 
v___x_5921_ = ((size_t)1ULL);
v___x_5922_ = lean_usize_add(v_i_5912_, v___x_5921_);
v_i_5912_ = v___x_5922_;
v_b_5913_ = v_a_5920_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object* v_as_5990_, lean_object* v_sz_5991_, lean_object* v_i_5992_, lean_object* v_b_5993_, lean_object* v___y_5994_, lean_object* v___y_5995_, lean_object* v___y_5996_, lean_object* v___y_5997_, lean_object* v___y_5998_){
_start:
{
size_t v_sz_boxed_5999_; size_t v_i_boxed_6000_; lean_object* v_res_6001_; 
v_sz_boxed_5999_ = lean_unbox_usize(v_sz_5991_);
lean_dec(v_sz_5991_);
v_i_boxed_6000_ = lean_unbox_usize(v_i_5992_);
lean_dec(v_i_5992_);
v_res_6001_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v_as_5990_, v_sz_boxed_5999_, v_i_boxed_6000_, v_b_5993_, v___y_5994_, v___y_5995_, v___y_5996_, v___y_5997_);
lean_dec(v___y_5997_);
lean_dec_ref(v___y_5996_);
lean_dec(v___y_5995_);
lean_dec_ref(v___y_5994_);
lean_dec_ref(v_as_5990_);
return v_res_6001_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object* v___x_6002_, lean_object* v___y_6003_, lean_object* v___y_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_){
_start:
{
lean_object* v___x_6008_; 
v___x_6008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6008_, 0, v___x_6002_);
return v___x_6008_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v___x_6009_, lean_object* v___y_6010_, lean_object* v___y_6011_, lean_object* v___y_6012_, lean_object* v___y_6013_, lean_object* v___y_6014_){
_start:
{
lean_object* v_res_6015_; 
v_res_6015_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(v___x_6009_, v___y_6010_, v___y_6011_, v___y_6012_, v___y_6013_);
lean_dec(v___y_6013_);
lean_dec_ref(v___y_6012_);
lean_dec(v___y_6011_);
lean_dec_ref(v___y_6010_);
return v_res_6015_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t v_sz_6016_, size_t v_i_6017_, lean_object* v_bs_6018_, lean_object* v___y_6019_, lean_object* v___y_6020_, lean_object* v___y_6021_){
_start:
{
uint8_t v___x_6023_; 
v___x_6023_ = lean_usize_dec_lt(v_i_6017_, v_sz_6016_);
if (v___x_6023_ == 0)
{
lean_object* v___x_6024_; 
v___x_6024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6024_, 0, v_bs_6018_);
return v___x_6024_;
}
else
{
lean_object* v_v_6025_; lean_object* v___x_6026_; lean_object* v_bs_x27_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; 
v_v_6025_ = lean_array_uget(v_bs_6018_, v_i_6017_);
v___x_6026_ = lean_unsigned_to_nat(0u);
v_bs_x27_6027_ = lean_array_uset(v_bs_6018_, v_i_6017_, v___x_6026_);
v___x_6028_ = l_Lean_Expr_fvarId_x21(v_v_6025_);
lean_dec(v_v_6025_);
v___x_6029_ = l_Lean_FVarId_getUserName___redArg(v___x_6028_, v___y_6019_, v___y_6020_, v___y_6021_);
if (lean_obj_tag(v___x_6029_) == 0)
{
lean_object* v_a_6030_; size_t v___x_6031_; size_t v___x_6032_; lean_object* v___x_6033_; 
v_a_6030_ = lean_ctor_get(v___x_6029_, 0);
lean_inc(v_a_6030_);
lean_dec_ref_known(v___x_6029_, 1);
v___x_6031_ = ((size_t)1ULL);
v___x_6032_ = lean_usize_add(v_i_6017_, v___x_6031_);
v___x_6033_ = lean_array_uset(v_bs_x27_6027_, v_i_6017_, v_a_6030_);
v_i_6017_ = v___x_6032_;
v_bs_6018_ = v___x_6033_;
goto _start;
}
else
{
lean_object* v_a_6035_; lean_object* v___x_6037_; uint8_t v_isShared_6038_; uint8_t v_isSharedCheck_6042_; 
lean_dec_ref(v_bs_x27_6027_);
v_a_6035_ = lean_ctor_get(v___x_6029_, 0);
v_isSharedCheck_6042_ = !lean_is_exclusive(v___x_6029_);
if (v_isSharedCheck_6042_ == 0)
{
v___x_6037_ = v___x_6029_;
v_isShared_6038_ = v_isSharedCheck_6042_;
goto v_resetjp_6036_;
}
else
{
lean_inc(v_a_6035_);
lean_dec(v___x_6029_);
v___x_6037_ = lean_box(0);
v_isShared_6038_ = v_isSharedCheck_6042_;
goto v_resetjp_6036_;
}
v_resetjp_6036_:
{
lean_object* v___x_6040_; 
if (v_isShared_6038_ == 0)
{
v___x_6040_ = v___x_6037_;
goto v_reusejp_6039_;
}
else
{
lean_object* v_reuseFailAlloc_6041_; 
v_reuseFailAlloc_6041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6041_, 0, v_a_6035_);
v___x_6040_ = v_reuseFailAlloc_6041_;
goto v_reusejp_6039_;
}
v_reusejp_6039_:
{
return v___x_6040_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object* v_sz_6043_, lean_object* v_i_6044_, lean_object* v_bs_6045_, lean_object* v___y_6046_, lean_object* v___y_6047_, lean_object* v___y_6048_, lean_object* v___y_6049_){
_start:
{
size_t v_sz_boxed_6050_; size_t v_i_boxed_6051_; lean_object* v_res_6052_; 
v_sz_boxed_6050_ = lean_unbox_usize(v_sz_6043_);
lean_dec(v_sz_6043_);
v_i_boxed_6051_ = lean_unbox_usize(v_i_6044_);
lean_dec(v_i_6044_);
v_res_6052_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_boxed_6050_, v_i_boxed_6051_, v_bs_6045_, v___y_6046_, v___y_6047_, v___y_6048_);
lean_dec(v___y_6048_);
lean_dec_ref(v___y_6047_);
lean_dec_ref(v___y_6046_);
return v_res_6052_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object* v_xs_6053_, lean_object* v_x_6054_, lean_object* v___y_6055_, lean_object* v___y_6056_, lean_object* v___y_6057_, lean_object* v___y_6058_){
_start:
{
size_t v_sz_6060_; size_t v___x_6061_; lean_object* v___x_6062_; 
v_sz_6060_ = lean_array_size(v_xs_6053_);
v___x_6061_ = ((size_t)0ULL);
v___x_6062_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_6060_, v___x_6061_, v_xs_6053_, v___y_6055_, v___y_6057_, v___y_6058_);
return v___x_6062_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object* v_xs_6063_, lean_object* v_x_6064_, lean_object* v___y_6065_, lean_object* v___y_6066_, lean_object* v___y_6067_, lean_object* v___y_6068_, lean_object* v___y_6069_){
_start:
{
lean_object* v_res_6070_; 
v_res_6070_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(v_xs_6063_, v_x_6064_, v___y_6065_, v___y_6066_, v___y_6067_, v___y_6068_);
lean_dec(v___y_6068_);
lean_dec_ref(v___y_6067_);
lean_dec(v___y_6066_);
lean_dec_ref(v___y_6065_);
lean_dec_ref(v_x_6064_);
return v_res_6070_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object* v___x_6071_, lean_object* v___x_6072_, lean_object* v___f_6073_, uint8_t v___x_6074_, lean_object* v_fst_6075_, lean_object* v___x_6076_, lean_object* v___x_6077_, lean_object* v___x_6078_, lean_object* v___y_6079_, lean_object* v___y_6080_, lean_object* v___y_6081_, lean_object* v___y_6082_){
_start:
{
lean_object* v___x_6084_; 
v___x_6084_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v___x_6071_, v___x_6072_, v___f_6073_, v___x_6074_, v___x_6074_, v___y_6079_, v___y_6080_, v___y_6081_, v___y_6082_);
if (lean_obj_tag(v___x_6084_) == 0)
{
lean_object* v_a_6085_; lean_object* v___x_6087_; uint8_t v_isShared_6088_; uint8_t v_isSharedCheck_6097_; 
v_a_6085_ = lean_ctor_get(v___x_6084_, 0);
v_isSharedCheck_6097_ = !lean_is_exclusive(v___x_6084_);
if (v_isSharedCheck_6097_ == 0)
{
v___x_6087_ = v___x_6084_;
v_isShared_6088_ = v_isSharedCheck_6097_;
goto v_resetjp_6086_;
}
else
{
lean_inc(v_a_6085_);
lean_dec(v___x_6084_);
v___x_6087_ = lean_box(0);
v_isShared_6088_ = v_isSharedCheck_6097_;
goto v_resetjp_6086_;
}
v_resetjp_6086_:
{
lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6095_; 
v___x_6089_ = lean_array_push(v_fst_6075_, v_a_6085_);
v___x_6090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6090_, 0, v___x_6076_);
lean_ctor_set(v___x_6090_, 1, v___x_6077_);
v___x_6091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6091_, 0, v___x_6078_);
lean_ctor_set(v___x_6091_, 1, v___x_6090_);
v___x_6092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6089_);
lean_ctor_set(v___x_6092_, 1, v___x_6091_);
v___x_6093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6093_, 0, v___x_6092_);
if (v_isShared_6088_ == 0)
{
lean_ctor_set(v___x_6087_, 0, v___x_6093_);
v___x_6095_ = v___x_6087_;
goto v_reusejp_6094_;
}
else
{
lean_object* v_reuseFailAlloc_6096_; 
v_reuseFailAlloc_6096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6096_, 0, v___x_6093_);
v___x_6095_ = v_reuseFailAlloc_6096_;
goto v_reusejp_6094_;
}
v_reusejp_6094_:
{
return v___x_6095_;
}
}
}
else
{
lean_object* v_a_6098_; lean_object* v___x_6100_; uint8_t v_isShared_6101_; uint8_t v_isSharedCheck_6105_; 
lean_dec_ref(v___x_6078_);
lean_dec_ref(v___x_6077_);
lean_dec_ref(v___x_6076_);
lean_dec(v_fst_6075_);
v_a_6098_ = lean_ctor_get(v___x_6084_, 0);
v_isSharedCheck_6105_ = !lean_is_exclusive(v___x_6084_);
if (v_isSharedCheck_6105_ == 0)
{
v___x_6100_ = v___x_6084_;
v_isShared_6101_ = v_isSharedCheck_6105_;
goto v_resetjp_6099_;
}
else
{
lean_inc(v_a_6098_);
lean_dec(v___x_6084_);
v___x_6100_ = lean_box(0);
v_isShared_6101_ = v_isSharedCheck_6105_;
goto v_resetjp_6099_;
}
v_resetjp_6099_:
{
lean_object* v___x_6103_; 
if (v_isShared_6101_ == 0)
{
v___x_6103_ = v___x_6100_;
goto v_reusejp_6102_;
}
else
{
lean_object* v_reuseFailAlloc_6104_; 
v_reuseFailAlloc_6104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6104_, 0, v_a_6098_);
v___x_6103_ = v_reuseFailAlloc_6104_;
goto v_reusejp_6102_;
}
v_reusejp_6102_:
{
return v___x_6103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object* v___x_6106_, lean_object* v___x_6107_, lean_object* v___f_6108_, lean_object* v___x_6109_, lean_object* v_fst_6110_, lean_object* v___x_6111_, lean_object* v___x_6112_, lean_object* v___x_6113_, lean_object* v___y_6114_, lean_object* v___y_6115_, lean_object* v___y_6116_, lean_object* v___y_6117_, lean_object* v___y_6118_){
_start:
{
uint8_t v___x_34951__boxed_6119_; lean_object* v_res_6120_; 
v___x_34951__boxed_6119_ = lean_unbox(v___x_6109_);
v_res_6120_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(v___x_6106_, v___x_6107_, v___f_6108_, v___x_34951__boxed_6119_, v_fst_6110_, v___x_6111_, v___x_6112_, v___x_6113_, v___y_6114_, v___y_6115_, v___y_6116_, v___y_6117_);
lean_dec(v___y_6117_);
lean_dec_ref(v___y_6116_);
lean_dec(v___y_6115_);
lean_dec_ref(v___y_6114_);
return v_res_6120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object* v_fvars_6121_, lean_object* v_names_6122_, lean_object* v_k_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_){
_start:
{
lean_object* v___x_6129_; 
v___x_6129_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_6121_, v_names_6122_, v_k_6123_, v___y_6124_, v___y_6125_, v___y_6126_, v___y_6127_);
if (lean_obj_tag(v___x_6129_) == 0)
{
lean_object* v_a_6130_; lean_object* v___x_6132_; uint8_t v_isShared_6133_; uint8_t v_isSharedCheck_6137_; 
v_a_6130_ = lean_ctor_get(v___x_6129_, 0);
v_isSharedCheck_6137_ = !lean_is_exclusive(v___x_6129_);
if (v_isSharedCheck_6137_ == 0)
{
v___x_6132_ = v___x_6129_;
v_isShared_6133_ = v_isSharedCheck_6137_;
goto v_resetjp_6131_;
}
else
{
lean_inc(v_a_6130_);
lean_dec(v___x_6129_);
v___x_6132_ = lean_box(0);
v_isShared_6133_ = v_isSharedCheck_6137_;
goto v_resetjp_6131_;
}
v_resetjp_6131_:
{
lean_object* v___x_6135_; 
if (v_isShared_6133_ == 0)
{
v___x_6135_ = v___x_6132_;
goto v_reusejp_6134_;
}
else
{
lean_object* v_reuseFailAlloc_6136_; 
v_reuseFailAlloc_6136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6136_, 0, v_a_6130_);
v___x_6135_ = v_reuseFailAlloc_6136_;
goto v_reusejp_6134_;
}
v_reusejp_6134_:
{
return v___x_6135_;
}
}
}
else
{
lean_object* v_a_6138_; lean_object* v___x_6140_; uint8_t v_isShared_6141_; uint8_t v_isSharedCheck_6145_; 
v_a_6138_ = lean_ctor_get(v___x_6129_, 0);
v_isSharedCheck_6145_ = !lean_is_exclusive(v___x_6129_);
if (v_isSharedCheck_6145_ == 0)
{
v___x_6140_ = v___x_6129_;
v_isShared_6141_ = v_isSharedCheck_6145_;
goto v_resetjp_6139_;
}
else
{
lean_inc(v_a_6138_);
lean_dec(v___x_6129_);
v___x_6140_ = lean_box(0);
v_isShared_6141_ = v_isSharedCheck_6145_;
goto v_resetjp_6139_;
}
v_resetjp_6139_:
{
lean_object* v___x_6143_; 
if (v_isShared_6141_ == 0)
{
v___x_6143_ = v___x_6140_;
goto v_reusejp_6142_;
}
else
{
lean_object* v_reuseFailAlloc_6144_; 
v_reuseFailAlloc_6144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6144_, 0, v_a_6138_);
v___x_6143_ = v_reuseFailAlloc_6144_;
goto v_reusejp_6142_;
}
v_reusejp_6142_:
{
return v___x_6143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object* v_fvars_6146_, lean_object* v_names_6147_, lean_object* v_k_6148_, lean_object* v___y_6149_, lean_object* v___y_6150_, lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_){
_start:
{
lean_object* v_res_6154_; 
v_res_6154_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_6146_, v_names_6147_, v_k_6148_, v___y_6149_, v___y_6150_, v___y_6151_, v___y_6152_);
lean_dec(v___y_6152_);
lean_dec_ref(v___y_6151_);
lean_dec(v___y_6150_);
lean_dec_ref(v___y_6149_);
lean_dec_ref(v_names_6147_);
lean_dec_ref(v_fvars_6146_);
return v_res_6154_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object* v___x_6155_, lean_object* v_xs_6156_, lean_object* v_remaining_x27_6157_, lean_object* v_ys4_6158_, lean_object* v_onAlt_6159_, lean_object* v_a_6160_, lean_object* v_altType_6161_, uint8_t v___x_6162_, uint8_t v___x_6163_, lean_object* v___y_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_, lean_object* v___y_6167_){
_start:
{
lean_object* v___x_6169_; 
v___x_6169_ = l_Lean_Meta_instantiateLambda(v___x_6155_, v_xs_6156_, v___y_6164_, v___y_6165_, v___y_6166_, v___y_6167_);
if (lean_obj_tag(v___x_6169_) == 0)
{
lean_object* v_a_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; 
v_a_6170_ = lean_ctor_get(v___x_6169_, 0);
lean_inc(v_a_6170_);
lean_dec_ref_known(v___x_6169_, 1);
lean_inc_ref(v_ys4_6158_);
lean_inc_ref(v_remaining_x27_6157_);
lean_inc_ref_n(v_xs_6156_, 2);
v___x_6171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6171_, 0, v_xs_6156_);
lean_ctor_set(v___x_6171_, 1, v_xs_6156_);
lean_ctor_set(v___x_6171_, 2, v_remaining_x27_6157_);
lean_ctor_set(v___x_6171_, 3, v_remaining_x27_6157_);
lean_ctor_set(v___x_6171_, 4, v_ys4_6158_);
lean_inc(v___y_6167_);
lean_inc_ref(v___y_6166_);
lean_inc(v___y_6165_);
lean_inc_ref(v___y_6164_);
v___x_6172_ = lean_apply_9(v_onAlt_6159_, v_a_6160_, v_altType_6161_, v___x_6171_, v_a_6170_, v___y_6164_, v___y_6165_, v___y_6166_, v___y_6167_, lean_box(0));
if (lean_obj_tag(v___x_6172_) == 0)
{
lean_object* v_a_6173_; lean_object* v___x_6174_; uint8_t v___x_6175_; lean_object* v___x_6176_; 
v_a_6173_ = lean_ctor_get(v___x_6172_, 0);
lean_inc(v_a_6173_);
lean_dec_ref_known(v___x_6172_, 1);
v___x_6174_ = l_Array_append___redArg(v_xs_6156_, v_ys4_6158_);
lean_dec_ref(v_ys4_6158_);
v___x_6175_ = 1;
v___x_6176_ = l_Lean_Meta_mkLambdaFVars(v___x_6174_, v_a_6173_, v___x_6162_, v___x_6163_, v___x_6162_, v___x_6163_, v___x_6175_, v___y_6164_, v___y_6165_, v___y_6166_, v___y_6167_);
lean_dec(v___y_6167_);
lean_dec_ref(v___y_6166_);
lean_dec(v___y_6165_);
lean_dec_ref(v___y_6164_);
lean_dec_ref(v___x_6174_);
return v___x_6176_;
}
else
{
lean_dec(v___y_6167_);
lean_dec_ref(v___y_6166_);
lean_dec(v___y_6165_);
lean_dec_ref(v___y_6164_);
lean_dec_ref(v_ys4_6158_);
lean_dec_ref(v_xs_6156_);
return v___x_6172_;
}
}
else
{
lean_dec(v___y_6167_);
lean_dec_ref(v___y_6166_);
lean_dec(v___y_6165_);
lean_dec_ref(v___y_6164_);
lean_dec_ref(v_altType_6161_);
lean_dec(v_a_6160_);
lean_dec_ref(v_onAlt_6159_);
lean_dec_ref(v_ys4_6158_);
lean_dec_ref(v_remaining_x27_6157_);
lean_dec_ref(v_xs_6156_);
return v___x_6169_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object* v___x_6177_, lean_object* v_xs_6178_, lean_object* v_remaining_x27_6179_, lean_object* v_ys4_6180_, lean_object* v_onAlt_6181_, lean_object* v_a_6182_, lean_object* v_altType_6183_, lean_object* v___x_6184_, lean_object* v___x_6185_, lean_object* v___y_6186_, lean_object* v___y_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_){
_start:
{
uint8_t v___x_35078__boxed_6191_; uint8_t v___x_35079__boxed_6192_; lean_object* v_res_6193_; 
v___x_35078__boxed_6191_ = lean_unbox(v___x_6184_);
v___x_35079__boxed_6192_ = lean_unbox(v___x_6185_);
v_res_6193_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(v___x_6177_, v_xs_6178_, v_remaining_x27_6179_, v_ys4_6180_, v_onAlt_6181_, v_a_6182_, v_altType_6183_, v___x_35078__boxed_6191_, v___x_35079__boxed_6192_, v___y_6186_, v___y_6187_, v___y_6188_, v___y_6189_);
return v_res_6193_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object* v___x_6194_, lean_object* v_xs_6195_, lean_object* v_remaining_x27_6196_, lean_object* v_onAlt_6197_, lean_object* v_a_6198_, uint8_t v___x_6199_, uint8_t v___x_6200_, lean_object* v___f_6201_, lean_object* v_ys4_6202_, lean_object* v_altType_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_){
_start:
{
lean_object* v___x_6209_; lean_object* v___x_6210_; lean_object* v___f_6211_; lean_object* v___x_6212_; 
v___x_6209_ = lean_box(v___x_6199_);
v___x_6210_ = lean_box(v___x_6200_);
lean_inc_ref(v_xs_6195_);
lean_inc_ref(v___x_6194_);
v___f_6211_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_6211_, 0, v___x_6194_);
lean_closure_set(v___f_6211_, 1, v_xs_6195_);
lean_closure_set(v___f_6211_, 2, v_remaining_x27_6196_);
lean_closure_set(v___f_6211_, 3, v_ys4_6202_);
lean_closure_set(v___f_6211_, 4, v_onAlt_6197_);
lean_closure_set(v___f_6211_, 5, v_a_6198_);
lean_closure_set(v___f_6211_, 6, v_altType_6203_);
lean_closure_set(v___f_6211_, 7, v___x_6209_);
lean_closure_set(v___f_6211_, 8, v___x_6210_);
v___x_6212_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v___x_6194_, v___f_6201_, v___x_6199_, v___y_6204_, v___y_6205_, v___y_6206_, v___y_6207_);
if (lean_obj_tag(v___x_6212_) == 0)
{
lean_object* v_a_6213_; lean_object* v___x_6214_; 
v_a_6213_ = lean_ctor_get(v___x_6212_, 0);
lean_inc(v_a_6213_);
lean_dec_ref_known(v___x_6212_, 1);
v___x_6214_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_xs_6195_, v_a_6213_, v___f_6211_, v___y_6204_, v___y_6205_, v___y_6206_, v___y_6207_);
lean_dec(v_a_6213_);
lean_dec_ref(v_xs_6195_);
return v___x_6214_;
}
else
{
lean_object* v_a_6215_; lean_object* v___x_6217_; uint8_t v_isShared_6218_; uint8_t v_isSharedCheck_6222_; 
lean_dec_ref(v___f_6211_);
lean_dec_ref(v_xs_6195_);
v_a_6215_ = lean_ctor_get(v___x_6212_, 0);
v_isSharedCheck_6222_ = !lean_is_exclusive(v___x_6212_);
if (v_isSharedCheck_6222_ == 0)
{
v___x_6217_ = v___x_6212_;
v_isShared_6218_ = v_isSharedCheck_6222_;
goto v_resetjp_6216_;
}
else
{
lean_inc(v_a_6215_);
lean_dec(v___x_6212_);
v___x_6217_ = lean_box(0);
v_isShared_6218_ = v_isSharedCheck_6222_;
goto v_resetjp_6216_;
}
v_resetjp_6216_:
{
lean_object* v___x_6220_; 
if (v_isShared_6218_ == 0)
{
v___x_6220_ = v___x_6217_;
goto v_reusejp_6219_;
}
else
{
lean_object* v_reuseFailAlloc_6221_; 
v_reuseFailAlloc_6221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6221_, 0, v_a_6215_);
v___x_6220_ = v_reuseFailAlloc_6221_;
goto v_reusejp_6219_;
}
v_reusejp_6219_:
{
return v___x_6220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object* v___x_6223_, lean_object* v_xs_6224_, lean_object* v_remaining_x27_6225_, lean_object* v_onAlt_6226_, lean_object* v_a_6227_, lean_object* v___x_6228_, lean_object* v___x_6229_, lean_object* v___f_6230_, lean_object* v_ys4_6231_, lean_object* v_altType_6232_, lean_object* v___y_6233_, lean_object* v___y_6234_, lean_object* v___y_6235_, lean_object* v___y_6236_, lean_object* v___y_6237_){
_start:
{
uint8_t v___x_35120__boxed_6238_; uint8_t v___x_35121__boxed_6239_; lean_object* v_res_6240_; 
v___x_35120__boxed_6238_ = lean_unbox(v___x_6228_);
v___x_35121__boxed_6239_ = lean_unbox(v___x_6229_);
v_res_6240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(v___x_6223_, v_xs_6224_, v_remaining_x27_6225_, v_onAlt_6226_, v_a_6227_, v___x_35120__boxed_6238_, v___x_35121__boxed_6239_, v___f_6230_, v_ys4_6231_, v_altType_6232_, v___y_6233_, v___y_6234_, v___y_6235_, v___y_6236_);
lean_dec(v___y_6236_);
lean_dec_ref(v___y_6235_);
lean_dec(v___y_6234_);
lean_dec_ref(v___y_6233_);
return v_res_6240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object* v___x_6241_, lean_object* v_remaining_x27_6242_, lean_object* v_onAlt_6243_, lean_object* v_a_6244_, uint8_t v___x_6245_, uint8_t v___x_6246_, lean_object* v___f_6247_, lean_object* v_extraEqualities_6248_, lean_object* v_xs_6249_, lean_object* v_altType_6250_, lean_object* v___y_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_, lean_object* v___y_6254_){
_start:
{
lean_object* v___x_6256_; lean_object* v___x_6257_; lean_object* v___f_6258_; lean_object* v___x_6259_; lean_object* v___x_6260_; 
v___x_6256_ = lean_box(v___x_6245_);
v___x_6257_ = lean_box(v___x_6246_);
v___f_6258_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed), 15, 8);
lean_closure_set(v___f_6258_, 0, v___x_6241_);
lean_closure_set(v___f_6258_, 1, v_xs_6249_);
lean_closure_set(v___f_6258_, 2, v_remaining_x27_6242_);
lean_closure_set(v___f_6258_, 3, v_onAlt_6243_);
lean_closure_set(v___f_6258_, 4, v_a_6244_);
lean_closure_set(v___f_6258_, 5, v___x_6256_);
lean_closure_set(v___f_6258_, 6, v___x_6257_);
lean_closure_set(v___f_6258_, 7, v___f_6247_);
v___x_6259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6259_, 0, v_extraEqualities_6248_);
v___x_6260_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___redArg(v_altType_6250_, v___x_6259_, v___f_6258_, v___x_6245_, v___x_6245_, v___y_6251_, v___y_6252_, v___y_6253_, v___y_6254_);
return v___x_6260_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object* v___x_6261_, lean_object* v_remaining_x27_6262_, lean_object* v_onAlt_6263_, lean_object* v_a_6264_, lean_object* v___x_6265_, lean_object* v___x_6266_, lean_object* v___f_6267_, lean_object* v_extraEqualities_6268_, lean_object* v_xs_6269_, lean_object* v_altType_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_){
_start:
{
uint8_t v___x_35175__boxed_6276_; uint8_t v___x_35176__boxed_6277_; lean_object* v_res_6278_; 
v___x_35175__boxed_6276_ = lean_unbox(v___x_6265_);
v___x_35176__boxed_6277_ = lean_unbox(v___x_6266_);
v_res_6278_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(v___x_6261_, v_remaining_x27_6262_, v_onAlt_6263_, v_a_6264_, v___x_35175__boxed_6276_, v___x_35176__boxed_6277_, v___f_6267_, v_extraEqualities_6268_, v_xs_6269_, v_altType_6270_, v___y_6271_, v___y_6272_, v___y_6273_, v___y_6274_);
lean_dec(v___y_6274_);
lean_dec_ref(v___y_6273_);
lean_dec(v___y_6272_);
lean_dec_ref(v___y_6271_);
return v_res_6278_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object* v_upperBound_6280_, lean_object* v_onAlt_6281_, lean_object* v_extraEqualities_6282_, lean_object* v_a_6283_, lean_object* v_b_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_){
_start:
{
lean_object* v___y_6291_; uint8_t v___x_6314_; 
v___x_6314_ = lean_nat_dec_lt(v_a_6283_, v_upperBound_6280_);
if (v___x_6314_ == 0)
{
lean_object* v___x_6315_; 
lean_dec(v_a_6283_);
lean_dec(v_extraEqualities_6282_);
lean_dec_ref(v_onAlt_6281_);
v___x_6315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6315_, 0, v_b_6284_);
return v___x_6315_;
}
else
{
lean_object* v_snd_6316_; lean_object* v_snd_6317_; lean_object* v_snd_6318_; lean_object* v_fst_6319_; lean_object* v___x_6321_; uint8_t v_isShared_6322_; uint8_t v_isSharedCheck_6426_; 
v_snd_6316_ = lean_ctor_get(v_b_6284_, 1);
lean_inc(v_snd_6316_);
v_snd_6317_ = lean_ctor_get(v_snd_6316_, 1);
lean_inc(v_snd_6317_);
v_snd_6318_ = lean_ctor_get(v_snd_6317_, 1);
lean_inc(v_snd_6318_);
v_fst_6319_ = lean_ctor_get(v_b_6284_, 0);
v_isSharedCheck_6426_ = !lean_is_exclusive(v_b_6284_);
if (v_isSharedCheck_6426_ == 0)
{
lean_object* v_unused_6427_; 
v_unused_6427_ = lean_ctor_get(v_b_6284_, 1);
lean_dec(v_unused_6427_);
v___x_6321_ = v_b_6284_;
v_isShared_6322_ = v_isSharedCheck_6426_;
goto v_resetjp_6320_;
}
else
{
lean_inc(v_fst_6319_);
lean_dec(v_b_6284_);
v___x_6321_ = lean_box(0);
v_isShared_6322_ = v_isSharedCheck_6426_;
goto v_resetjp_6320_;
}
v_resetjp_6320_:
{
lean_object* v_fst_6323_; lean_object* v___x_6325_; uint8_t v_isShared_6326_; uint8_t v_isSharedCheck_6424_; 
v_fst_6323_ = lean_ctor_get(v_snd_6316_, 0);
v_isSharedCheck_6424_ = !lean_is_exclusive(v_snd_6316_);
if (v_isSharedCheck_6424_ == 0)
{
lean_object* v_unused_6425_; 
v_unused_6425_ = lean_ctor_get(v_snd_6316_, 1);
lean_dec(v_unused_6425_);
v___x_6325_ = v_snd_6316_;
v_isShared_6326_ = v_isSharedCheck_6424_;
goto v_resetjp_6324_;
}
else
{
lean_inc(v_fst_6323_);
lean_dec(v_snd_6316_);
v___x_6325_ = lean_box(0);
v_isShared_6326_ = v_isSharedCheck_6424_;
goto v_resetjp_6324_;
}
v_resetjp_6324_:
{
lean_object* v_fst_6327_; lean_object* v___x_6329_; uint8_t v_isShared_6330_; uint8_t v_isSharedCheck_6422_; 
v_fst_6327_ = lean_ctor_get(v_snd_6317_, 0);
v_isSharedCheck_6422_ = !lean_is_exclusive(v_snd_6317_);
if (v_isSharedCheck_6422_ == 0)
{
lean_object* v_unused_6423_; 
v_unused_6423_ = lean_ctor_get(v_snd_6317_, 1);
lean_dec(v_unused_6423_);
v___x_6329_ = v_snd_6317_;
v_isShared_6330_ = v_isSharedCheck_6422_;
goto v_resetjp_6328_;
}
else
{
lean_inc(v_fst_6327_);
lean_dec(v_snd_6317_);
v___x_6329_ = lean_box(0);
v_isShared_6330_ = v_isSharedCheck_6422_;
goto v_resetjp_6328_;
}
v_resetjp_6328_:
{
lean_object* v_array_6331_; lean_object* v_start_6332_; lean_object* v_stop_6333_; uint8_t v___x_6334_; 
v_array_6331_ = lean_ctor_get(v_snd_6318_, 0);
v_start_6332_ = lean_ctor_get(v_snd_6318_, 1);
v_stop_6333_ = lean_ctor_get(v_snd_6318_, 2);
v___x_6334_ = lean_nat_dec_lt(v_start_6332_, v_stop_6333_);
if (v___x_6334_ == 0)
{
lean_object* v___x_6336_; 
if (v_isShared_6330_ == 0)
{
v___x_6336_ = v___x_6329_;
goto v_reusejp_6335_;
}
else
{
lean_object* v_reuseFailAlloc_6345_; 
v_reuseFailAlloc_6345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6345_, 0, v_fst_6327_);
lean_ctor_set(v_reuseFailAlloc_6345_, 1, v_snd_6318_);
v___x_6336_ = v_reuseFailAlloc_6345_;
goto v_reusejp_6335_;
}
v_reusejp_6335_:
{
lean_object* v___x_6338_; 
if (v_isShared_6326_ == 0)
{
lean_ctor_set(v___x_6325_, 1, v___x_6336_);
v___x_6338_ = v___x_6325_;
goto v_reusejp_6337_;
}
else
{
lean_object* v_reuseFailAlloc_6344_; 
v_reuseFailAlloc_6344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6344_, 0, v_fst_6323_);
lean_ctor_set(v_reuseFailAlloc_6344_, 1, v___x_6336_);
v___x_6338_ = v_reuseFailAlloc_6344_;
goto v_reusejp_6337_;
}
v_reusejp_6337_:
{
lean_object* v___x_6340_; 
if (v_isShared_6322_ == 0)
{
lean_ctor_set(v___x_6321_, 1, v___x_6338_);
v___x_6340_ = v___x_6321_;
goto v_reusejp_6339_;
}
else
{
lean_object* v_reuseFailAlloc_6343_; 
v_reuseFailAlloc_6343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6343_, 0, v_fst_6319_);
lean_ctor_set(v_reuseFailAlloc_6343_, 1, v___x_6338_);
v___x_6340_ = v_reuseFailAlloc_6343_;
goto v_reusejp_6339_;
}
v_reusejp_6339_:
{
lean_object* v___x_6341_; lean_object* v___f_6342_; 
v___x_6341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6341_, 0, v___x_6340_);
v___f_6342_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6342_, 0, v___x_6341_);
v___y_6291_ = v___f_6342_;
goto v___jp_6290_;
}
}
}
}
else
{
lean_object* v___x_6347_; uint8_t v_isShared_6348_; uint8_t v_isSharedCheck_6418_; 
lean_inc(v_stop_6333_);
lean_inc(v_start_6332_);
lean_inc_ref(v_array_6331_);
v_isSharedCheck_6418_ = !lean_is_exclusive(v_snd_6318_);
if (v_isSharedCheck_6418_ == 0)
{
lean_object* v_unused_6419_; lean_object* v_unused_6420_; lean_object* v_unused_6421_; 
v_unused_6419_ = lean_ctor_get(v_snd_6318_, 2);
lean_dec(v_unused_6419_);
v_unused_6420_ = lean_ctor_get(v_snd_6318_, 1);
lean_dec(v_unused_6420_);
v_unused_6421_ = lean_ctor_get(v_snd_6318_, 0);
lean_dec(v_unused_6421_);
v___x_6347_ = v_snd_6318_;
v_isShared_6348_ = v_isSharedCheck_6418_;
goto v_resetjp_6346_;
}
else
{
lean_dec(v_snd_6318_);
v___x_6347_ = lean_box(0);
v_isShared_6348_ = v_isSharedCheck_6418_;
goto v_resetjp_6346_;
}
v_resetjp_6346_:
{
lean_object* v_array_6349_; lean_object* v_start_6350_; lean_object* v_stop_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6356_; 
v_array_6349_ = lean_ctor_get(v_fst_6327_, 0);
v_start_6350_ = lean_ctor_get(v_fst_6327_, 1);
v_stop_6351_ = lean_ctor_get(v_fst_6327_, 2);
v___x_6352_ = lean_array_fget(v_array_6331_, v_start_6332_);
v___x_6353_ = lean_unsigned_to_nat(1u);
v___x_6354_ = lean_nat_add(v_start_6332_, v___x_6353_);
lean_dec(v_start_6332_);
if (v_isShared_6348_ == 0)
{
lean_ctor_set(v___x_6347_, 1, v___x_6354_);
v___x_6356_ = v___x_6347_;
goto v_reusejp_6355_;
}
else
{
lean_object* v_reuseFailAlloc_6417_; 
v_reuseFailAlloc_6417_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6417_, 0, v_array_6331_);
lean_ctor_set(v_reuseFailAlloc_6417_, 1, v___x_6354_);
lean_ctor_set(v_reuseFailAlloc_6417_, 2, v_stop_6333_);
v___x_6356_ = v_reuseFailAlloc_6417_;
goto v_reusejp_6355_;
}
v_reusejp_6355_:
{
uint8_t v___x_6357_; 
v___x_6357_ = lean_nat_dec_lt(v_start_6350_, v_stop_6351_);
if (v___x_6357_ == 0)
{
lean_object* v___x_6359_; 
lean_dec(v___x_6352_);
if (v_isShared_6330_ == 0)
{
lean_ctor_set(v___x_6329_, 1, v___x_6356_);
v___x_6359_ = v___x_6329_;
goto v_reusejp_6358_;
}
else
{
lean_object* v_reuseFailAlloc_6368_; 
v_reuseFailAlloc_6368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6368_, 0, v_fst_6327_);
lean_ctor_set(v_reuseFailAlloc_6368_, 1, v___x_6356_);
v___x_6359_ = v_reuseFailAlloc_6368_;
goto v_reusejp_6358_;
}
v_reusejp_6358_:
{
lean_object* v___x_6361_; 
if (v_isShared_6326_ == 0)
{
lean_ctor_set(v___x_6325_, 1, v___x_6359_);
v___x_6361_ = v___x_6325_;
goto v_reusejp_6360_;
}
else
{
lean_object* v_reuseFailAlloc_6367_; 
v_reuseFailAlloc_6367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6367_, 0, v_fst_6323_);
lean_ctor_set(v_reuseFailAlloc_6367_, 1, v___x_6359_);
v___x_6361_ = v_reuseFailAlloc_6367_;
goto v_reusejp_6360_;
}
v_reusejp_6360_:
{
lean_object* v___x_6363_; 
if (v_isShared_6322_ == 0)
{
lean_ctor_set(v___x_6321_, 1, v___x_6361_);
v___x_6363_ = v___x_6321_;
goto v_reusejp_6362_;
}
else
{
lean_object* v_reuseFailAlloc_6366_; 
v_reuseFailAlloc_6366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6366_, 0, v_fst_6319_);
lean_ctor_set(v_reuseFailAlloc_6366_, 1, v___x_6361_);
v___x_6363_ = v_reuseFailAlloc_6366_;
goto v_reusejp_6362_;
}
v_reusejp_6362_:
{
lean_object* v___x_6364_; lean_object* v___f_6365_; 
v___x_6364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6364_, 0, v___x_6363_);
v___f_6365_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6365_, 0, v___x_6364_);
v___y_6291_ = v___f_6365_;
goto v___jp_6290_;
}
}
}
}
else
{
lean_object* v___x_6370_; uint8_t v_isShared_6371_; uint8_t v_isSharedCheck_6413_; 
lean_inc(v_stop_6351_);
lean_inc(v_start_6350_);
lean_inc_ref(v_array_6349_);
v_isSharedCheck_6413_ = !lean_is_exclusive(v_fst_6327_);
if (v_isSharedCheck_6413_ == 0)
{
lean_object* v_unused_6414_; lean_object* v_unused_6415_; lean_object* v_unused_6416_; 
v_unused_6414_ = lean_ctor_get(v_fst_6327_, 2);
lean_dec(v_unused_6414_);
v_unused_6415_ = lean_ctor_get(v_fst_6327_, 1);
lean_dec(v_unused_6415_);
v_unused_6416_ = lean_ctor_get(v_fst_6327_, 0);
lean_dec(v_unused_6416_);
v___x_6370_ = v_fst_6327_;
v_isShared_6371_ = v_isSharedCheck_6413_;
goto v_resetjp_6369_;
}
else
{
lean_dec(v_fst_6327_);
v___x_6370_ = lean_box(0);
v_isShared_6371_ = v_isSharedCheck_6413_;
goto v_resetjp_6369_;
}
v_resetjp_6369_:
{
lean_object* v_array_6372_; lean_object* v_start_6373_; lean_object* v_stop_6374_; lean_object* v___x_6375_; lean_object* v___x_6376_; lean_object* v___x_6378_; 
v_array_6372_ = lean_ctor_get(v_fst_6323_, 0);
v_start_6373_ = lean_ctor_get(v_fst_6323_, 1);
v_stop_6374_ = lean_ctor_get(v_fst_6323_, 2);
v___x_6375_ = lean_array_fget(v_array_6349_, v_start_6350_);
v___x_6376_ = lean_nat_add(v_start_6350_, v___x_6353_);
lean_dec(v_start_6350_);
if (v_isShared_6371_ == 0)
{
lean_ctor_set(v___x_6370_, 1, v___x_6376_);
v___x_6378_ = v___x_6370_;
goto v_reusejp_6377_;
}
else
{
lean_object* v_reuseFailAlloc_6412_; 
v_reuseFailAlloc_6412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6412_, 0, v_array_6349_);
lean_ctor_set(v_reuseFailAlloc_6412_, 1, v___x_6376_);
lean_ctor_set(v_reuseFailAlloc_6412_, 2, v_stop_6351_);
v___x_6378_ = v_reuseFailAlloc_6412_;
goto v_reusejp_6377_;
}
v_reusejp_6377_:
{
uint8_t v___x_6379_; 
v___x_6379_ = lean_nat_dec_lt(v_start_6373_, v_stop_6374_);
if (v___x_6379_ == 0)
{
lean_object* v___x_6381_; 
lean_dec(v___x_6375_);
lean_dec(v___x_6352_);
if (v_isShared_6330_ == 0)
{
lean_ctor_set(v___x_6329_, 1, v___x_6356_);
lean_ctor_set(v___x_6329_, 0, v___x_6378_);
v___x_6381_ = v___x_6329_;
goto v_reusejp_6380_;
}
else
{
lean_object* v_reuseFailAlloc_6390_; 
v_reuseFailAlloc_6390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6390_, 0, v___x_6378_);
lean_ctor_set(v_reuseFailAlloc_6390_, 1, v___x_6356_);
v___x_6381_ = v_reuseFailAlloc_6390_;
goto v_reusejp_6380_;
}
v_reusejp_6380_:
{
lean_object* v___x_6383_; 
if (v_isShared_6326_ == 0)
{
lean_ctor_set(v___x_6325_, 1, v___x_6381_);
v___x_6383_ = v___x_6325_;
goto v_reusejp_6382_;
}
else
{
lean_object* v_reuseFailAlloc_6389_; 
v_reuseFailAlloc_6389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6389_, 0, v_fst_6323_);
lean_ctor_set(v_reuseFailAlloc_6389_, 1, v___x_6381_);
v___x_6383_ = v_reuseFailAlloc_6389_;
goto v_reusejp_6382_;
}
v_reusejp_6382_:
{
lean_object* v___x_6385_; 
if (v_isShared_6322_ == 0)
{
lean_ctor_set(v___x_6321_, 1, v___x_6383_);
v___x_6385_ = v___x_6321_;
goto v_reusejp_6384_;
}
else
{
lean_object* v_reuseFailAlloc_6388_; 
v_reuseFailAlloc_6388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6388_, 0, v_fst_6319_);
lean_ctor_set(v_reuseFailAlloc_6388_, 1, v___x_6383_);
v___x_6385_ = v_reuseFailAlloc_6388_;
goto v_reusejp_6384_;
}
v_reusejp_6384_:
{
lean_object* v___x_6386_; lean_object* v___f_6387_; 
v___x_6386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6386_, 0, v___x_6385_);
v___f_6387_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6387_, 0, v___x_6386_);
v___y_6291_ = v___f_6387_;
goto v___jp_6290_;
}
}
}
}
else
{
lean_object* v___x_6392_; uint8_t v_isShared_6393_; uint8_t v_isSharedCheck_6408_; 
lean_inc(v_stop_6374_);
lean_inc(v_start_6373_);
lean_inc_ref(v_array_6372_);
lean_del_object(v___x_6329_);
lean_del_object(v___x_6325_);
lean_del_object(v___x_6321_);
v_isSharedCheck_6408_ = !lean_is_exclusive(v_fst_6323_);
if (v_isSharedCheck_6408_ == 0)
{
lean_object* v_unused_6409_; lean_object* v_unused_6410_; lean_object* v_unused_6411_; 
v_unused_6409_ = lean_ctor_get(v_fst_6323_, 2);
lean_dec(v_unused_6409_);
v_unused_6410_ = lean_ctor_get(v_fst_6323_, 1);
lean_dec(v_unused_6410_);
v_unused_6411_ = lean_ctor_get(v_fst_6323_, 0);
lean_dec(v_unused_6411_);
v___x_6392_ = v_fst_6323_;
v_isShared_6393_ = v_isSharedCheck_6408_;
goto v_resetjp_6391_;
}
else
{
lean_dec(v_fst_6323_);
v___x_6392_ = lean_box(0);
v_isShared_6393_ = v_isSharedCheck_6408_;
goto v_resetjp_6391_;
}
v_resetjp_6391_:
{
lean_object* v___f_6394_; uint8_t v___x_6395_; lean_object* v_remaining_x27_6396_; lean_object* v___x_6397_; lean_object* v___x_6398_; lean_object* v___x_6399_; lean_object* v___f_6400_; lean_object* v___x_6401_; lean_object* v___x_6403_; 
v___f_6394_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0));
v___x_6395_ = 0;
v_remaining_x27_6396_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6397_ = lean_array_fget_borrowed(v_array_6372_, v_start_6373_);
v___x_6398_ = lean_box(v___x_6395_);
v___x_6399_ = lean_box(v___x_6314_);
lean_inc(v_extraEqualities_6282_);
lean_inc(v_a_6283_);
lean_inc_ref(v_onAlt_6281_);
lean_inc(v___x_6397_);
v___f_6400_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed), 15, 8);
lean_closure_set(v___f_6400_, 0, v___x_6397_);
lean_closure_set(v___f_6400_, 1, v_remaining_x27_6396_);
lean_closure_set(v___f_6400_, 2, v_onAlt_6281_);
lean_closure_set(v___f_6400_, 3, v_a_6283_);
lean_closure_set(v___f_6400_, 4, v___x_6398_);
lean_closure_set(v___f_6400_, 5, v___x_6399_);
lean_closure_set(v___f_6400_, 6, v___f_6394_);
lean_closure_set(v___f_6400_, 7, v_extraEqualities_6282_);
v___x_6401_ = lean_nat_add(v_start_6373_, v___x_6353_);
lean_dec(v_start_6373_);
if (v_isShared_6393_ == 0)
{
lean_ctor_set(v___x_6392_, 1, v___x_6401_);
v___x_6403_ = v___x_6392_;
goto v_reusejp_6402_;
}
else
{
lean_object* v_reuseFailAlloc_6407_; 
v_reuseFailAlloc_6407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6407_, 0, v_array_6372_);
lean_ctor_set(v_reuseFailAlloc_6407_, 1, v___x_6401_);
lean_ctor_set(v_reuseFailAlloc_6407_, 2, v_stop_6374_);
v___x_6403_ = v_reuseFailAlloc_6407_;
goto v_reusejp_6402_;
}
v_reusejp_6402_:
{
lean_object* v___x_6404_; lean_object* v___x_6405_; lean_object* v___f_6406_; 
v___x_6404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6404_, 0, v___x_6375_);
v___x_6405_ = lean_box(v___x_6395_);
v___f_6406_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_6406_, 0, v___x_6352_);
lean_closure_set(v___f_6406_, 1, v___x_6404_);
lean_closure_set(v___f_6406_, 2, v___f_6400_);
lean_closure_set(v___f_6406_, 3, v___x_6405_);
lean_closure_set(v___f_6406_, 4, v_fst_6319_);
lean_closure_set(v___f_6406_, 5, v___x_6378_);
lean_closure_set(v___f_6406_, 6, v___x_6356_);
lean_closure_set(v___f_6406_, 7, v___x_6403_);
v___y_6291_ = v___f_6406_;
goto v___jp_6290_;
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
v___jp_6290_:
{
lean_object* v___x_6292_; 
lean_inc(v___y_6288_);
lean_inc_ref(v___y_6287_);
lean_inc(v___y_6286_);
lean_inc_ref(v___y_6285_);
v___x_6292_ = lean_apply_5(v___y_6291_, v___y_6285_, v___y_6286_, v___y_6287_, v___y_6288_, lean_box(0));
if (lean_obj_tag(v___x_6292_) == 0)
{
lean_object* v_a_6293_; lean_object* v___x_6295_; uint8_t v_isShared_6296_; uint8_t v_isSharedCheck_6305_; 
v_a_6293_ = lean_ctor_get(v___x_6292_, 0);
v_isSharedCheck_6305_ = !lean_is_exclusive(v___x_6292_);
if (v_isSharedCheck_6305_ == 0)
{
v___x_6295_ = v___x_6292_;
v_isShared_6296_ = v_isSharedCheck_6305_;
goto v_resetjp_6294_;
}
else
{
lean_inc(v_a_6293_);
lean_dec(v___x_6292_);
v___x_6295_ = lean_box(0);
v_isShared_6296_ = v_isSharedCheck_6305_;
goto v_resetjp_6294_;
}
v_resetjp_6294_:
{
if (lean_obj_tag(v_a_6293_) == 0)
{
lean_object* v_a_6297_; lean_object* v___x_6299_; 
lean_dec(v_a_6283_);
lean_dec(v_extraEqualities_6282_);
lean_dec_ref(v_onAlt_6281_);
v_a_6297_ = lean_ctor_get(v_a_6293_, 0);
lean_inc(v_a_6297_);
lean_dec_ref_known(v_a_6293_, 1);
if (v_isShared_6296_ == 0)
{
lean_ctor_set(v___x_6295_, 0, v_a_6297_);
v___x_6299_ = v___x_6295_;
goto v_reusejp_6298_;
}
else
{
lean_object* v_reuseFailAlloc_6300_; 
v_reuseFailAlloc_6300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6300_, 0, v_a_6297_);
v___x_6299_ = v_reuseFailAlloc_6300_;
goto v_reusejp_6298_;
}
v_reusejp_6298_:
{
return v___x_6299_;
}
}
else
{
lean_object* v_a_6301_; lean_object* v___x_6302_; lean_object* v___x_6303_; 
lean_del_object(v___x_6295_);
v_a_6301_ = lean_ctor_get(v_a_6293_, 0);
lean_inc(v_a_6301_);
lean_dec_ref_known(v_a_6293_, 1);
v___x_6302_ = lean_unsigned_to_nat(1u);
v___x_6303_ = lean_nat_add(v_a_6283_, v___x_6302_);
lean_dec(v_a_6283_);
v_a_6283_ = v___x_6303_;
v_b_6284_ = v_a_6301_;
goto _start;
}
}
}
else
{
lean_object* v_a_6306_; lean_object* v___x_6308_; uint8_t v_isShared_6309_; uint8_t v_isSharedCheck_6313_; 
lean_dec(v_a_6283_);
lean_dec(v_extraEqualities_6282_);
lean_dec_ref(v_onAlt_6281_);
v_a_6306_ = lean_ctor_get(v___x_6292_, 0);
v_isSharedCheck_6313_ = !lean_is_exclusive(v___x_6292_);
if (v_isSharedCheck_6313_ == 0)
{
v___x_6308_ = v___x_6292_;
v_isShared_6309_ = v_isSharedCheck_6313_;
goto v_resetjp_6307_;
}
else
{
lean_inc(v_a_6306_);
lean_dec(v___x_6292_);
v___x_6308_ = lean_box(0);
v_isShared_6309_ = v_isSharedCheck_6313_;
goto v_resetjp_6307_;
}
v_resetjp_6307_:
{
lean_object* v___x_6311_; 
if (v_isShared_6309_ == 0)
{
v___x_6311_ = v___x_6308_;
goto v_reusejp_6310_;
}
else
{
lean_object* v_reuseFailAlloc_6312_; 
v_reuseFailAlloc_6312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6312_, 0, v_a_6306_);
v___x_6311_ = v_reuseFailAlloc_6312_;
goto v_reusejp_6310_;
}
v_reusejp_6310_:
{
return v___x_6311_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_6428_, lean_object* v_onAlt_6429_, lean_object* v_extraEqualities_6430_, lean_object* v_a_6431_, lean_object* v_b_6432_, lean_object* v___y_6433_, lean_object* v___y_6434_, lean_object* v___y_6435_, lean_object* v___y_6436_, lean_object* v___y_6437_){
_start:
{
lean_object* v_res_6438_; 
v_res_6438_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_6428_, v_onAlt_6429_, v_extraEqualities_6430_, v_a_6431_, v_b_6432_, v___y_6433_, v___y_6434_, v___y_6435_, v___y_6436_);
lean_dec(v___y_6436_);
lean_dec_ref(v___y_6435_);
lean_dec(v___y_6434_);
lean_dec_ref(v___y_6433_);
lean_dec(v_upperBound_6428_);
return v_res_6438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object* v_onParams_6439_, size_t v_sz_6440_, size_t v_i_6441_, lean_object* v_bs_6442_, lean_object* v___y_6443_, lean_object* v___y_6444_, lean_object* v___y_6445_, lean_object* v___y_6446_){
_start:
{
uint8_t v___x_6448_; 
v___x_6448_ = lean_usize_dec_lt(v_i_6441_, v_sz_6440_);
if (v___x_6448_ == 0)
{
lean_object* v___x_6449_; 
lean_dec_ref(v_onParams_6439_);
v___x_6449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6449_, 0, v_bs_6442_);
return v___x_6449_;
}
else
{
lean_object* v_v_6450_; lean_object* v___x_6451_; lean_object* v_bs_x27_6452_; lean_object* v___x_6453_; 
v_v_6450_ = lean_array_uget(v_bs_6442_, v_i_6441_);
v___x_6451_ = lean_unsigned_to_nat(0u);
v_bs_x27_6452_ = lean_array_uset(v_bs_6442_, v_i_6441_, v___x_6451_);
lean_inc_ref(v_onParams_6439_);
lean_inc(v___y_6446_);
lean_inc_ref(v___y_6445_);
lean_inc(v___y_6444_);
lean_inc_ref(v___y_6443_);
v___x_6453_ = lean_apply_6(v_onParams_6439_, v_v_6450_, v___y_6443_, v___y_6444_, v___y_6445_, v___y_6446_, lean_box(0));
if (lean_obj_tag(v___x_6453_) == 0)
{
lean_object* v_a_6454_; size_t v___x_6455_; size_t v___x_6456_; lean_object* v___x_6457_; 
v_a_6454_ = lean_ctor_get(v___x_6453_, 0);
lean_inc(v_a_6454_);
lean_dec_ref_known(v___x_6453_, 1);
v___x_6455_ = ((size_t)1ULL);
v___x_6456_ = lean_usize_add(v_i_6441_, v___x_6455_);
v___x_6457_ = lean_array_uset(v_bs_x27_6452_, v_i_6441_, v_a_6454_);
v_i_6441_ = v___x_6456_;
v_bs_6442_ = v___x_6457_;
goto _start;
}
else
{
lean_object* v_a_6459_; lean_object* v___x_6461_; uint8_t v_isShared_6462_; uint8_t v_isSharedCheck_6466_; 
lean_dec_ref(v_bs_x27_6452_);
lean_dec_ref(v_onParams_6439_);
v_a_6459_ = lean_ctor_get(v___x_6453_, 0);
v_isSharedCheck_6466_ = !lean_is_exclusive(v___x_6453_);
if (v_isSharedCheck_6466_ == 0)
{
v___x_6461_ = v___x_6453_;
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
else
{
lean_inc(v_a_6459_);
lean_dec(v___x_6453_);
v___x_6461_ = lean_box(0);
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
v_resetjp_6460_:
{
lean_object* v___x_6464_; 
if (v_isShared_6462_ == 0)
{
v___x_6464_ = v___x_6461_;
goto v_reusejp_6463_;
}
else
{
lean_object* v_reuseFailAlloc_6465_; 
v_reuseFailAlloc_6465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6465_, 0, v_a_6459_);
v___x_6464_ = v_reuseFailAlloc_6465_;
goto v_reusejp_6463_;
}
v_reusejp_6463_:
{
return v___x_6464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object* v_onParams_6467_, lean_object* v_sz_6468_, lean_object* v_i_6469_, lean_object* v_bs_6470_, lean_object* v___y_6471_, lean_object* v___y_6472_, lean_object* v___y_6473_, lean_object* v___y_6474_, lean_object* v___y_6475_){
_start:
{
size_t v_sz_boxed_6476_; size_t v_i_boxed_6477_; lean_object* v_res_6478_; 
v_sz_boxed_6476_ = lean_unbox_usize(v_sz_6468_);
lean_dec(v_sz_6468_);
v_i_boxed_6477_ = lean_unbox_usize(v_i_6469_);
lean_dec(v_i_6469_);
v_res_6478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6467_, v_sz_boxed_6476_, v_i_boxed_6477_, v_bs_6470_, v___y_6471_, v___y_6472_, v___y_6473_, v___y_6474_);
lean_dec(v___y_6474_);
lean_dec_ref(v___y_6473_);
lean_dec(v___y_6472_);
lean_dec_ref(v___y_6471_);
return v_res_6478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object* v_declName_6479_, lean_object* v___y_6480_){
_start:
{
lean_object* v___x_6482_; lean_object* v_env_6483_; lean_object* v___x_6484_; lean_object* v___x_6485_; 
v___x_6482_ = lean_st_ref_get(v___y_6480_);
v_env_6483_ = lean_ctor_get(v___x_6482_, 0);
lean_inc_ref(v_env_6483_);
lean_dec(v___x_6482_);
v___x_6484_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_6483_, v_declName_6479_);
v___x_6485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6485_, 0, v___x_6484_);
return v___x_6485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object* v_declName_6486_, lean_object* v___y_6487_, lean_object* v___y_6488_){
_start:
{
lean_object* v_res_6489_; 
v_res_6489_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_6486_, v___y_6487_);
lean_dec(v___y_6487_);
return v_res_6489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object* v_matcherApp_6492_, uint8_t v_useSplitter_6493_, uint8_t v_addEqualities_6494_, lean_object* v_onParams_6495_, lean_object* v_onMotive_6496_, lean_object* v_onAlt_6497_, lean_object* v_onRemaining_6498_, lean_object* v___y_6499_, lean_object* v___y_6500_, lean_object* v___y_6501_, lean_object* v___y_6502_){
_start:
{
lean_object* v___x_6504_; lean_object* v_env_6505_; lean_object* v_toMatcherInfo_6506_; lean_object* v_matcherName_6507_; lean_object* v_matcherLevels_6508_; lean_object* v_params_6509_; lean_object* v_motive_6510_; lean_object* v_discrs_6511_; lean_object* v_alts_6512_; lean_object* v_remaining_6513_; lean_object* v___y_6515_; lean_object* v___y_6516_; lean_object* v___y_6517_; lean_object* v___y_6518_; lean_object* v___y_6519_; lean_object* v___y_6520_; lean_object* v___y_6521_; lean_object* v___y_6522_; lean_object* v___y_6523_; lean_object* v___y_6524_; lean_object* v___y_6525_; lean_object* v___y_6526_; lean_object* v___y_6527_; uint8_t v_isCasesOn_6612_; lean_object* v___y_6614_; lean_object* v___y_6615_; lean_object* v___y_6616_; lean_object* v___y_6617_; lean_object* v___y_6618_; lean_object* v___y_6619_; size_t v___y_6620_; lean_object* v_matcherLevels_6621_; lean_object* v___y_6622_; lean_object* v___y_6623_; lean_object* v___y_6624_; lean_object* v___y_6625_; lean_object* v_numDiscrEqs_6819_; lean_object* v___y_6820_; lean_object* v___y_6821_; lean_object* v___y_6822_; lean_object* v___y_6823_; 
v___x_6504_ = lean_st_ref_get(v___y_6502_);
v_env_6505_ = lean_ctor_get(v___x_6504_, 0);
lean_inc_ref(v_env_6505_);
lean_dec(v___x_6504_);
v_toMatcherInfo_6506_ = lean_ctor_get(v_matcherApp_6492_, 0);
lean_inc_ref(v_toMatcherInfo_6506_);
v_matcherName_6507_ = lean_ctor_get(v_matcherApp_6492_, 1);
lean_inc_n(v_matcherName_6507_, 2);
v_matcherLevels_6508_ = lean_ctor_get(v_matcherApp_6492_, 2);
v_params_6509_ = lean_ctor_get(v_matcherApp_6492_, 3);
v_motive_6510_ = lean_ctor_get(v_matcherApp_6492_, 4);
v_discrs_6511_ = lean_ctor_get(v_matcherApp_6492_, 5);
v_alts_6512_ = lean_ctor_get(v_matcherApp_6492_, 6);
lean_inc_ref(v_alts_6512_);
v_remaining_6513_ = lean_ctor_get(v_matcherApp_6492_, 7);
lean_inc_ref(v_remaining_6513_);
v_isCasesOn_6612_ = l_Lean_isCasesOnRecursor(v_env_6505_, v_matcherName_6507_);
if (v_isCasesOn_6612_ == 0)
{
lean_object* v___x_6873_; lean_object* v_a_6874_; 
lean_inc(v_matcherName_6507_);
v___x_6873_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_matcherName_6507_, v___y_6502_);
v_a_6874_ = lean_ctor_get(v___x_6873_, 0);
lean_inc(v_a_6874_);
lean_dec_ref(v___x_6873_);
if (lean_obj_tag(v_a_6874_) == 0)
{
lean_object* v___x_6875_; lean_object* v___x_6876_; lean_object* v___x_6877_; lean_object* v___x_6878_; lean_object* v___x_6879_; lean_object* v___x_6880_; lean_object* v_a_6881_; lean_object* v___x_6883_; uint8_t v_isShared_6884_; uint8_t v_isSharedCheck_6888_; 
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
lean_dec_ref(v_onMotive_6496_);
lean_dec_ref(v_onParams_6495_);
lean_dec_ref(v_matcherApp_6492_);
v___x_6875_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_6876_ = l_Lean_MessageData_ofName(v_matcherName_6507_);
v___x_6877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6877_, 0, v___x_6875_);
lean_ctor_set(v___x_6877_, 1, v___x_6876_);
v___x_6878_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_6879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6879_, 0, v___x_6877_);
lean_ctor_set(v___x_6879_, 1, v___x_6878_);
v___x_6880_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_6879_, v___y_6499_, v___y_6500_, v___y_6501_, v___y_6502_);
v_a_6881_ = lean_ctor_get(v___x_6880_, 0);
v_isSharedCheck_6888_ = !lean_is_exclusive(v___x_6880_);
if (v_isSharedCheck_6888_ == 0)
{
v___x_6883_ = v___x_6880_;
v_isShared_6884_ = v_isSharedCheck_6888_;
goto v_resetjp_6882_;
}
else
{
lean_inc(v_a_6881_);
lean_dec(v___x_6880_);
v___x_6883_ = lean_box(0);
v_isShared_6884_ = v_isSharedCheck_6888_;
goto v_resetjp_6882_;
}
v_resetjp_6882_:
{
lean_object* v___x_6886_; 
if (v_isShared_6884_ == 0)
{
v___x_6886_ = v___x_6883_;
goto v_reusejp_6885_;
}
else
{
lean_object* v_reuseFailAlloc_6887_; 
v_reuseFailAlloc_6887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6887_, 0, v_a_6881_);
v___x_6886_ = v_reuseFailAlloc_6887_;
goto v_reusejp_6885_;
}
v_reusejp_6885_:
{
return v___x_6886_;
}
}
}
else
{
lean_object* v_val_6889_; lean_object* v___x_6890_; 
v_val_6889_ = lean_ctor_get(v_a_6874_, 0);
lean_inc(v_val_6889_);
lean_dec_ref_known(v_a_6874_, 1);
v___x_6890_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_6889_);
lean_dec(v_val_6889_);
v_numDiscrEqs_6819_ = v___x_6890_;
v___y_6820_ = v___y_6499_;
v___y_6821_ = v___y_6500_;
v___y_6822_ = v___y_6501_;
v___y_6823_ = v___y_6502_;
goto v___jp_6818_;
}
}
else
{
lean_object* v___x_6891_; 
v___x_6891_ = lean_unsigned_to_nat(0u);
v_numDiscrEqs_6819_ = v___x_6891_;
v___y_6820_ = v___y_6499_;
v___y_6821_ = v___y_6500_;
v___y_6822_ = v___y_6501_;
v___y_6823_ = v___y_6502_;
goto v___jp_6818_;
}
v___jp_6514_:
{
lean_object* v___x_6528_; lean_object* v___x_6529_; lean_object* v_aux_6530_; lean_object* v_aux_6531_; lean_object* v_aux_6532_; lean_object* v___x_6533_; lean_object* v___x_6534_; lean_object* v___x_6535_; lean_object* v___f_6536_; uint8_t v___x_6537_; lean_object* v___x_6538_; lean_object* v___x_6539_; lean_object* v___x_6540_; 
lean_inc_ref(v___y_6515_);
v___x_6528_ = lean_array_to_list(v___y_6515_);
lean_inc(v_matcherName_6507_);
v___x_6529_ = l_Lean_mkConst(v_matcherName_6507_, v___x_6528_);
v_aux_6530_ = l_Lean_mkAppN(v___x_6529_, v___y_6517_);
lean_inc_ref(v___y_6518_);
v_aux_6531_ = l_Lean_Expr_app___override(v_aux_6530_, v___y_6518_);
v_aux_6532_ = l_Lean_mkAppN(v_aux_6531_, v___y_6527_);
v___x_6533_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__1);
lean_inc_ref_n(v_aux_6532_, 2);
v___x_6534_ = l_Lean_indentExpr(v_aux_6532_);
v___x_6535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6535_, 0, v___x_6533_);
lean_ctor_set(v___x_6535_, 1, v___x_6534_);
v___f_6536_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6536_, 0, v___x_6535_);
v___x_6537_ = 0;
v___x_6538_ = lean_box(v___x_6537_);
v___x_6539_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6539_, 0, v_aux_6532_);
lean_closure_set(v___x_6539_, 1, v___x_6538_);
v___x_6540_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6539_, v___f_6536_, v___y_6516_, v___y_6522_, v___y_6525_, v___y_6519_);
if (lean_obj_tag(v___x_6540_) == 0)
{
lean_object* v___x_6541_; lean_object* v___x_6542_; 
lean_dec_ref_known(v___x_6540_, 1);
v___x_6541_ = lean_array_get_size(v_alts_6512_);
v___x_6542_ = l_Lean_Meta_inferArgumentTypesN(v___x_6541_, v_aux_6532_, v___y_6516_, v___y_6522_, v___y_6525_, v___y_6519_);
if (lean_obj_tag(v___x_6542_) == 0)
{
lean_object* v_a_6543_; lean_object* v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; lean_object* v___x_6552_; lean_object* v___x_6553_; 
v_a_6543_ = lean_ctor_get(v___x_6542_, 0);
lean_inc(v_a_6543_);
lean_dec_ref_known(v___x_6542_, 1);
v___x_6544_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_6492_);
v___x_6545_ = lean_array_get_size(v___x_6544_);
v___x_6546_ = lean_array_get_size(v_a_6543_);
lean_inc_n(v___y_6526_, 3);
v___x_6547_ = l_Array_toSubarray___redArg(v_alts_6512_, v___y_6526_, v___x_6541_);
v___x_6548_ = l_Array_toSubarray___redArg(v___x_6544_, v___y_6526_, v___x_6545_);
v___x_6549_ = l_Array_toSubarray___redArg(v_a_6543_, v___y_6526_, v___x_6546_);
v___x_6550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6550_, 0, v___x_6548_);
lean_ctor_set(v___x_6550_, 1, v___x_6549_);
v___x_6551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6551_, 0, v___x_6547_);
lean_ctor_set(v___x_6551_, 1, v___x_6550_);
lean_inc_ref(v___y_6520_);
v___x_6552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6552_, 0, v___y_6520_);
lean_ctor_set(v___x_6552_, 1, v___x_6551_);
v___x_6553_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v___x_6541_, v_onAlt_6497_, v___y_6523_, v___y_6526_, v___x_6552_, v___y_6516_, v___y_6522_, v___y_6525_, v___y_6519_);
if (lean_obj_tag(v___x_6553_) == 0)
{
lean_object* v_a_6554_; lean_object* v_fst_6555_; lean_object* v___x_6556_; 
v_a_6554_ = lean_ctor_get(v___x_6553_, 0);
lean_inc(v_a_6554_);
lean_dec_ref_known(v___x_6553_, 1);
v_fst_6555_ = lean_ctor_get(v_a_6554_, 0);
lean_inc(v_fst_6555_);
lean_dec(v_a_6554_);
lean_inc(v___y_6519_);
lean_inc_ref(v___y_6525_);
lean_inc(v___y_6522_);
lean_inc_ref(v___y_6516_);
v___x_6556_ = lean_apply_6(v_onRemaining_6498_, v_remaining_6513_, v___y_6516_, v___y_6522_, v___y_6525_, v___y_6519_, lean_box(0));
if (lean_obj_tag(v___x_6556_) == 0)
{
lean_object* v_a_6557_; lean_object* v___x_6559_; uint8_t v_isShared_6560_; uint8_t v_isSharedCheck_6579_; 
v_a_6557_ = lean_ctor_get(v___x_6556_, 0);
v_isSharedCheck_6579_ = !lean_is_exclusive(v___x_6556_);
if (v_isSharedCheck_6579_ == 0)
{
v___x_6559_ = v___x_6556_;
v_isShared_6560_ = v_isSharedCheck_6579_;
goto v_resetjp_6558_;
}
else
{
lean_inc(v_a_6557_);
lean_dec(v___x_6556_);
v___x_6559_ = lean_box(0);
v_isShared_6560_ = v_isSharedCheck_6579_;
goto v_resetjp_6558_;
}
v_resetjp_6558_:
{
lean_object* v_numParams_6561_; lean_object* v_numDiscrs_6562_; lean_object* v_altInfos_6563_; lean_object* v_uElimPos_x3f_6564_; lean_object* v_overlaps_6565_; lean_object* v___x_6567_; uint8_t v_isShared_6568_; uint8_t v_isSharedCheck_6577_; 
v_numParams_6561_ = lean_ctor_get(v_toMatcherInfo_6506_, 0);
v_numDiscrs_6562_ = lean_ctor_get(v_toMatcherInfo_6506_, 1);
v_altInfos_6563_ = lean_ctor_get(v_toMatcherInfo_6506_, 2);
v_uElimPos_x3f_6564_ = lean_ctor_get(v_toMatcherInfo_6506_, 3);
v_overlaps_6565_ = lean_ctor_get(v_toMatcherInfo_6506_, 5);
v_isSharedCheck_6577_ = !lean_is_exclusive(v_toMatcherInfo_6506_);
if (v_isSharedCheck_6577_ == 0)
{
lean_object* v_unused_6578_; 
v_unused_6578_ = lean_ctor_get(v_toMatcherInfo_6506_, 4);
lean_dec(v_unused_6578_);
v___x_6567_ = v_toMatcherInfo_6506_;
v_isShared_6568_ = v_isSharedCheck_6577_;
goto v_resetjp_6566_;
}
else
{
lean_inc(v_overlaps_6565_);
lean_inc(v_uElimPos_x3f_6564_);
lean_inc(v_altInfos_6563_);
lean_inc(v_numDiscrs_6562_);
lean_inc(v_numParams_6561_);
lean_dec(v_toMatcherInfo_6506_);
v___x_6567_ = lean_box(0);
v_isShared_6568_ = v_isSharedCheck_6577_;
goto v_resetjp_6566_;
}
v_resetjp_6566_:
{
lean_object* v_remaining_x27_6569_; lean_object* v___x_6571_; 
v_remaining_x27_6569_ = l_Array_append___redArg(v___y_6521_, v_a_6557_);
lean_dec(v_a_6557_);
if (v_isShared_6568_ == 0)
{
lean_ctor_set(v___x_6567_, 4, v___y_6524_);
v___x_6571_ = v___x_6567_;
goto v_reusejp_6570_;
}
else
{
lean_object* v_reuseFailAlloc_6576_; 
v_reuseFailAlloc_6576_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6576_, 0, v_numParams_6561_);
lean_ctor_set(v_reuseFailAlloc_6576_, 1, v_numDiscrs_6562_);
lean_ctor_set(v_reuseFailAlloc_6576_, 2, v_altInfos_6563_);
lean_ctor_set(v_reuseFailAlloc_6576_, 3, v_uElimPos_x3f_6564_);
lean_ctor_set(v_reuseFailAlloc_6576_, 4, v___y_6524_);
lean_ctor_set(v_reuseFailAlloc_6576_, 5, v_overlaps_6565_);
v___x_6571_ = v_reuseFailAlloc_6576_;
goto v_reusejp_6570_;
}
v_reusejp_6570_:
{
lean_object* v___x_6572_; lean_object* v___x_6574_; 
v___x_6572_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6572_, 0, v___x_6571_);
lean_ctor_set(v___x_6572_, 1, v_matcherName_6507_);
lean_ctor_set(v___x_6572_, 2, v___y_6515_);
lean_ctor_set(v___x_6572_, 3, v___y_6517_);
lean_ctor_set(v___x_6572_, 4, v___y_6518_);
lean_ctor_set(v___x_6572_, 5, v___y_6527_);
lean_ctor_set(v___x_6572_, 6, v_fst_6555_);
lean_ctor_set(v___x_6572_, 7, v_remaining_x27_6569_);
if (v_isShared_6560_ == 0)
{
lean_ctor_set(v___x_6559_, 0, v___x_6572_);
v___x_6574_ = v___x_6559_;
goto v_reusejp_6573_;
}
else
{
lean_object* v_reuseFailAlloc_6575_; 
v_reuseFailAlloc_6575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6575_, 0, v___x_6572_);
v___x_6574_ = v_reuseFailAlloc_6575_;
goto v_reusejp_6573_;
}
v_reusejp_6573_:
{
return v___x_6574_;
}
}
}
}
}
else
{
lean_object* v_a_6580_; lean_object* v___x_6582_; uint8_t v_isShared_6583_; uint8_t v_isSharedCheck_6587_; 
lean_dec(v_fst_6555_);
lean_dec_ref(v___y_6527_);
lean_dec_ref(v___y_6524_);
lean_dec(v___y_6521_);
lean_dec_ref(v___y_6518_);
lean_dec_ref(v___y_6517_);
lean_dec_ref(v___y_6515_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
v_a_6580_ = lean_ctor_get(v___x_6556_, 0);
v_isSharedCheck_6587_ = !lean_is_exclusive(v___x_6556_);
if (v_isSharedCheck_6587_ == 0)
{
v___x_6582_ = v___x_6556_;
v_isShared_6583_ = v_isSharedCheck_6587_;
goto v_resetjp_6581_;
}
else
{
lean_inc(v_a_6580_);
lean_dec(v___x_6556_);
v___x_6582_ = lean_box(0);
v_isShared_6583_ = v_isSharedCheck_6587_;
goto v_resetjp_6581_;
}
v_resetjp_6581_:
{
lean_object* v___x_6585_; 
if (v_isShared_6583_ == 0)
{
v___x_6585_ = v___x_6582_;
goto v_reusejp_6584_;
}
else
{
lean_object* v_reuseFailAlloc_6586_; 
v_reuseFailAlloc_6586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6586_, 0, v_a_6580_);
v___x_6585_ = v_reuseFailAlloc_6586_;
goto v_reusejp_6584_;
}
v_reusejp_6584_:
{
return v___x_6585_;
}
}
}
}
else
{
lean_object* v_a_6588_; lean_object* v___x_6590_; uint8_t v_isShared_6591_; uint8_t v_isSharedCheck_6595_; 
lean_dec_ref(v___y_6527_);
lean_dec_ref(v___y_6524_);
lean_dec(v___y_6521_);
lean_dec_ref(v___y_6518_);
lean_dec_ref(v___y_6517_);
lean_dec_ref(v___y_6515_);
lean_dec_ref(v_remaining_6513_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
v_a_6588_ = lean_ctor_get(v___x_6553_, 0);
v_isSharedCheck_6595_ = !lean_is_exclusive(v___x_6553_);
if (v_isSharedCheck_6595_ == 0)
{
v___x_6590_ = v___x_6553_;
v_isShared_6591_ = v_isSharedCheck_6595_;
goto v_resetjp_6589_;
}
else
{
lean_inc(v_a_6588_);
lean_dec(v___x_6553_);
v___x_6590_ = lean_box(0);
v_isShared_6591_ = v_isSharedCheck_6595_;
goto v_resetjp_6589_;
}
v_resetjp_6589_:
{
lean_object* v___x_6593_; 
if (v_isShared_6591_ == 0)
{
v___x_6593_ = v___x_6590_;
goto v_reusejp_6592_;
}
else
{
lean_object* v_reuseFailAlloc_6594_; 
v_reuseFailAlloc_6594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6594_, 0, v_a_6588_);
v___x_6593_ = v_reuseFailAlloc_6594_;
goto v_reusejp_6592_;
}
v_reusejp_6592_:
{
return v___x_6593_;
}
}
}
}
else
{
lean_object* v_a_6596_; lean_object* v___x_6598_; uint8_t v_isShared_6599_; uint8_t v_isSharedCheck_6603_; 
lean_dec_ref(v___y_6527_);
lean_dec(v___y_6526_);
lean_dec_ref(v___y_6524_);
lean_dec(v___y_6523_);
lean_dec(v___y_6521_);
lean_dec_ref(v___y_6518_);
lean_dec_ref(v___y_6517_);
lean_dec_ref(v___y_6515_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
lean_dec_ref(v_matcherApp_6492_);
v_a_6596_ = lean_ctor_get(v___x_6542_, 0);
v_isSharedCheck_6603_ = !lean_is_exclusive(v___x_6542_);
if (v_isSharedCheck_6603_ == 0)
{
v___x_6598_ = v___x_6542_;
v_isShared_6599_ = v_isSharedCheck_6603_;
goto v_resetjp_6597_;
}
else
{
lean_inc(v_a_6596_);
lean_dec(v___x_6542_);
v___x_6598_ = lean_box(0);
v_isShared_6599_ = v_isSharedCheck_6603_;
goto v_resetjp_6597_;
}
v_resetjp_6597_:
{
lean_object* v___x_6601_; 
if (v_isShared_6599_ == 0)
{
v___x_6601_ = v___x_6598_;
goto v_reusejp_6600_;
}
else
{
lean_object* v_reuseFailAlloc_6602_; 
v_reuseFailAlloc_6602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6602_, 0, v_a_6596_);
v___x_6601_ = v_reuseFailAlloc_6602_;
goto v_reusejp_6600_;
}
v_reusejp_6600_:
{
return v___x_6601_;
}
}
}
}
else
{
lean_object* v_a_6604_; lean_object* v___x_6606_; uint8_t v_isShared_6607_; uint8_t v_isSharedCheck_6611_; 
lean_dec_ref(v_aux_6532_);
lean_dec_ref(v___y_6527_);
lean_dec(v___y_6526_);
lean_dec_ref(v___y_6524_);
lean_dec(v___y_6523_);
lean_dec(v___y_6521_);
lean_dec_ref(v___y_6518_);
lean_dec_ref(v___y_6517_);
lean_dec_ref(v___y_6515_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
lean_dec_ref(v_matcherApp_6492_);
v_a_6604_ = lean_ctor_get(v___x_6540_, 0);
v_isSharedCheck_6611_ = !lean_is_exclusive(v___x_6540_);
if (v_isSharedCheck_6611_ == 0)
{
v___x_6606_ = v___x_6540_;
v_isShared_6607_ = v_isSharedCheck_6611_;
goto v_resetjp_6605_;
}
else
{
lean_inc(v_a_6604_);
lean_dec(v___x_6540_);
v___x_6606_ = lean_box(0);
v_isShared_6607_ = v_isSharedCheck_6611_;
goto v_resetjp_6605_;
}
v_resetjp_6605_:
{
lean_object* v___x_6609_; 
if (v_isShared_6607_ == 0)
{
v___x_6609_ = v___x_6606_;
goto v_reusejp_6608_;
}
else
{
lean_object* v_reuseFailAlloc_6610_; 
v_reuseFailAlloc_6610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6610_, 0, v_a_6604_);
v___x_6609_ = v_reuseFailAlloc_6610_;
goto v_reusejp_6608_;
}
v_reusejp_6608_:
{
return v___x_6609_;
}
}
}
}
v___jp_6613_:
{
lean_object* v___x_6626_; lean_object* v_remaining_x27_6627_; lean_object* v___x_6628_; lean_object* v___x_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; lean_object* v___x_6633_; size_t v_sz_6634_; lean_object* v___x_6635_; 
v___x_6626_ = lean_unsigned_to_nat(0u);
v_remaining_x27_6627_ = ((lean_object*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0));
v___x_6628_ = l_Array_reverse___redArg(v___y_6614_);
v___x_6629_ = lean_array_get_size(v___x_6628_);
v___x_6630_ = l_Array_toSubarray___redArg(v___x_6628_, v___x_6626_, v___x_6629_);
lean_inc_ref(v___y_6619_);
v___x_6631_ = l_Array_reverse___redArg(v___y_6619_);
v___x_6632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6632_, 0, v___x_6626_);
lean_ctor_set(v___x_6632_, 1, v___x_6630_);
v___x_6633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6633_, 0, v_remaining_x27_6627_);
lean_ctor_set(v___x_6633_, 1, v___x_6632_);
v_sz_6634_ = lean_array_size(v___x_6631_);
v___x_6635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v___x_6631_, v_sz_6634_, v___y_6620_, v___x_6633_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_);
lean_dec_ref(v___x_6631_);
if (lean_obj_tag(v___x_6635_) == 0)
{
lean_object* v_a_6636_; lean_object* v_snd_6637_; 
v_a_6636_ = lean_ctor_get(v___x_6635_, 0);
lean_inc(v_a_6636_);
lean_dec_ref_known(v___x_6635_, 1);
v_snd_6637_ = lean_ctor_get(v_a_6636_, 1);
lean_inc(v_snd_6637_);
if (v_useSplitter_6493_ == 0)
{
lean_object* v_fst_6638_; lean_object* v_fst_6639_; 
lean_dec(v___y_6615_);
v_fst_6638_ = lean_ctor_get(v_a_6636_, 0);
lean_inc(v_fst_6638_);
lean_dec(v_a_6636_);
v_fst_6639_ = lean_ctor_get(v_snd_6637_, 0);
lean_inc(v_fst_6639_);
lean_dec(v_snd_6637_);
v___y_6515_ = v_matcherLevels_6621_;
v___y_6516_ = v___y_6622_;
v___y_6517_ = v___y_6617_;
v___y_6518_ = v___y_6616_;
v___y_6519_ = v___y_6625_;
v___y_6520_ = v_remaining_x27_6627_;
v___y_6521_ = v_fst_6638_;
v___y_6522_ = v___y_6623_;
v___y_6523_ = v_fst_6639_;
v___y_6524_ = v___y_6618_;
v___y_6525_ = v___y_6624_;
v___y_6526_ = v___x_6626_;
v___y_6527_ = v___y_6619_;
goto v___jp_6514_;
}
else
{
if (v_isCasesOn_6612_ == 0)
{
lean_object* v___x_6641_; uint8_t v_isShared_6642_; uint8_t v_isSharedCheck_6799_; 
v_isSharedCheck_6799_ = !lean_is_exclusive(v_matcherApp_6492_);
if (v_isSharedCheck_6799_ == 0)
{
lean_object* v_unused_6800_; lean_object* v_unused_6801_; lean_object* v_unused_6802_; lean_object* v_unused_6803_; lean_object* v_unused_6804_; lean_object* v_unused_6805_; lean_object* v_unused_6806_; lean_object* v_unused_6807_; 
v_unused_6800_ = lean_ctor_get(v_matcherApp_6492_, 7);
lean_dec(v_unused_6800_);
v_unused_6801_ = lean_ctor_get(v_matcherApp_6492_, 6);
lean_dec(v_unused_6801_);
v_unused_6802_ = lean_ctor_get(v_matcherApp_6492_, 5);
lean_dec(v_unused_6802_);
v_unused_6803_ = lean_ctor_get(v_matcherApp_6492_, 4);
lean_dec(v_unused_6803_);
v_unused_6804_ = lean_ctor_get(v_matcherApp_6492_, 3);
lean_dec(v_unused_6804_);
v_unused_6805_ = lean_ctor_get(v_matcherApp_6492_, 2);
lean_dec(v_unused_6805_);
v_unused_6806_ = lean_ctor_get(v_matcherApp_6492_, 1);
lean_dec(v_unused_6806_);
v_unused_6807_ = lean_ctor_get(v_matcherApp_6492_, 0);
lean_dec(v_unused_6807_);
v___x_6641_ = v_matcherApp_6492_;
v_isShared_6642_ = v_isSharedCheck_6799_;
goto v_resetjp_6640_;
}
else
{
lean_dec(v_matcherApp_6492_);
v___x_6641_ = lean_box(0);
v_isShared_6642_ = v_isSharedCheck_6799_;
goto v_resetjp_6640_;
}
v_resetjp_6640_:
{
lean_object* v_fst_6643_; lean_object* v___x_6645_; uint8_t v_isShared_6646_; uint8_t v_isSharedCheck_6797_; 
v_fst_6643_ = lean_ctor_get(v_a_6636_, 0);
v_isSharedCheck_6797_ = !lean_is_exclusive(v_a_6636_);
if (v_isSharedCheck_6797_ == 0)
{
lean_object* v_unused_6798_; 
v_unused_6798_ = lean_ctor_get(v_a_6636_, 1);
lean_dec(v_unused_6798_);
v___x_6645_ = v_a_6636_;
v_isShared_6646_ = v_isSharedCheck_6797_;
goto v_resetjp_6644_;
}
else
{
lean_inc(v_fst_6643_);
lean_dec(v_a_6636_);
v___x_6645_ = lean_box(0);
v_isShared_6646_ = v_isSharedCheck_6797_;
goto v_resetjp_6644_;
}
v_resetjp_6644_:
{
lean_object* v_fst_6647_; lean_object* v___x_6649_; uint8_t v_isShared_6650_; uint8_t v_isSharedCheck_6795_; 
v_fst_6647_ = lean_ctor_get(v_snd_6637_, 0);
v_isSharedCheck_6795_ = !lean_is_exclusive(v_snd_6637_);
if (v_isSharedCheck_6795_ == 0)
{
lean_object* v_unused_6796_; 
v_unused_6796_ = lean_ctor_get(v_snd_6637_, 1);
lean_dec(v_unused_6796_);
v___x_6649_ = v_snd_6637_;
v_isShared_6650_ = v_isSharedCheck_6795_;
goto v_resetjp_6648_;
}
else
{
lean_inc(v_fst_6647_);
lean_dec(v_snd_6637_);
v___x_6649_ = lean_box(0);
v_isShared_6650_ = v_isSharedCheck_6795_;
goto v_resetjp_6648_;
}
v_resetjp_6648_:
{
lean_object* v___x_6651_; lean_object* v___x_6652_; lean_object* v_aux1_6653_; lean_object* v_aux1_6654_; lean_object* v_aux1_6655_; lean_object* v___x_6656_; lean_object* v___x_6657_; lean_object* v___x_6658_; lean_object* v___x_6659_; lean_object* v___x_6660_; lean_object* v___f_6661_; uint8_t v___x_6662_; lean_object* v___x_6663_; lean_object* v___x_6664_; lean_object* v___x_6665_; 
lean_inc_ref(v_matcherLevels_6621_);
v___x_6651_ = lean_array_to_list(v_matcherLevels_6621_);
lean_inc(v___x_6651_);
lean_inc(v_matcherName_6507_);
v___x_6652_ = l_Lean_mkConst(v_matcherName_6507_, v___x_6651_);
v_aux1_6653_ = l_Lean_mkAppN(v___x_6652_, v___y_6617_);
lean_inc_ref(v___y_6616_);
v_aux1_6654_ = l_Lean_Expr_app___override(v_aux1_6653_, v___y_6616_);
v_aux1_6655_ = l_Lean_mkAppN(v_aux1_6654_, v___y_6619_);
v___x_6656_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__3);
lean_inc_ref_n(v_aux1_6655_, 2);
v___x_6657_ = l_Lean_indentExpr(v_aux1_6655_);
v___x_6658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6658_, 0, v___x_6656_);
lean_ctor_set(v___x_6658_, 1, v___x_6657_);
v___x_6659_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__55___closed__5);
v___x_6660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6660_, 0, v___x_6658_);
lean_ctor_set(v___x_6660_, 1, v___x_6659_);
v___f_6661_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6661_, 0, v___x_6660_);
v___x_6662_ = 0;
v___x_6663_ = lean_box(v___x_6662_);
v___x_6664_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6664_, 0, v_aux1_6655_);
lean_closure_set(v___x_6664_, 1, v___x_6663_);
v___x_6665_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6664_, v___f_6661_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_);
if (lean_obj_tag(v___x_6665_) == 0)
{
lean_object* v___x_6666_; lean_object* v___x_6667_; 
lean_dec_ref_known(v___x_6665_, 1);
v___x_6666_ = lean_array_get_size(v_alts_6512_);
v___x_6667_ = l_Lean_Meta_inferArgumentTypesN(v___x_6666_, v_aux1_6655_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_);
if (lean_obj_tag(v___x_6667_) == 0)
{
lean_object* v_a_6668_; lean_object* v___x_6669_; 
v_a_6668_ = lean_ctor_get(v___x_6667_, 0);
lean_inc(v_a_6668_);
lean_dec_ref_known(v___x_6667_, 1);
lean_inc(v___y_6625_);
lean_inc_ref(v___y_6624_);
lean_inc(v___y_6623_);
lean_inc_ref(v___y_6622_);
v___x_6669_ = lean_get_match_equations_for(v_matcherName_6507_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_);
if (lean_obj_tag(v___x_6669_) == 0)
{
lean_object* v_a_6670_; lean_object* v_splitterName_6671_; lean_object* v_splitterMatchInfo_6672_; lean_object* v___x_6673_; lean_object* v_aux2_6674_; lean_object* v_aux2_6675_; lean_object* v_aux2_6676_; lean_object* v___x_6677_; lean_object* v___x_6678_; lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v___f_6681_; lean_object* v___x_6682_; lean_object* v___x_6683_; lean_object* v___x_6684_; 
v_a_6670_ = lean_ctor_get(v___x_6669_, 0);
lean_inc(v_a_6670_);
lean_dec_ref_known(v___x_6669_, 1);
v_splitterName_6671_ = lean_ctor_get(v_a_6670_, 1);
lean_inc_n(v_splitterName_6671_, 2);
v_splitterMatchInfo_6672_ = lean_ctor_get(v_a_6670_, 2);
lean_inc_ref(v_splitterMatchInfo_6672_);
lean_dec(v_a_6670_);
v___x_6673_ = l_Lean_mkConst(v_splitterName_6671_, v___x_6651_);
v_aux2_6674_ = l_Lean_mkAppN(v___x_6673_, v___y_6617_);
lean_inc_ref(v___y_6616_);
v_aux2_6675_ = l_Lean_Expr_app___override(v_aux2_6674_, v___y_6616_);
v_aux2_6676_ = l_Lean_mkAppN(v_aux2_6675_, v___y_6619_);
v___x_6677_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
lean_inc_ref_n(v_aux2_6676_, 2);
v___x_6678_ = l_Lean_indentExpr(v_aux2_6676_);
v___x_6679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6679_, 0, v___x_6677_);
lean_ctor_set(v___x_6679_, 1, v___x_6678_);
v___x_6680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6680_, 0, v___x_6679_);
lean_ctor_set(v___x_6680_, 1, v___x_6659_);
v___f_6681_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6681_, 0, v___x_6680_);
v___x_6682_ = lean_box(v___x_6662_);
v___x_6683_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_6683_, 0, v_aux2_6676_);
lean_closure_set(v___x_6683_, 1, v___x_6682_);
v___x_6684_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6683_, v___f_6681_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_);
if (lean_obj_tag(v___x_6684_) == 0)
{
lean_object* v___x_6685_; 
lean_dec_ref_known(v___x_6684_, 1);
v___x_6685_ = l_Lean_Meta_inferArgumentTypesN(v___x_6666_, v_aux2_6676_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_);
if (lean_obj_tag(v___x_6685_) == 0)
{
lean_object* v_a_6686_; lean_object* v_numParams_6687_; lean_object* v_numDiscrs_6688_; lean_object* v_altInfos_6689_; lean_object* v_uElimPos_x3f_6690_; lean_object* v_overlaps_6691_; lean_object* v_altInfos_6692_; lean_object* v___x_6694_; uint8_t v_isShared_6695_; uint8_t v_isSharedCheck_6749_; 
v_a_6686_ = lean_ctor_get(v___x_6685_, 0);
lean_inc(v_a_6686_);
lean_dec_ref_known(v___x_6685_, 1);
v_numParams_6687_ = lean_ctor_get(v_toMatcherInfo_6506_, 0);
lean_inc(v_numParams_6687_);
v_numDiscrs_6688_ = lean_ctor_get(v_toMatcherInfo_6506_, 1);
lean_inc(v_numDiscrs_6688_);
v_altInfos_6689_ = lean_ctor_get(v_toMatcherInfo_6506_, 2);
lean_inc_ref(v_altInfos_6689_);
v_uElimPos_x3f_6690_ = lean_ctor_get(v_toMatcherInfo_6506_, 3);
lean_inc(v_uElimPos_x3f_6690_);
v_overlaps_6691_ = lean_ctor_get(v_toMatcherInfo_6506_, 5);
lean_inc_ref(v_overlaps_6691_);
lean_dec_ref(v_toMatcherInfo_6506_);
v_altInfos_6692_ = lean_ctor_get(v_splitterMatchInfo_6672_, 2);
v_isSharedCheck_6749_ = !lean_is_exclusive(v_splitterMatchInfo_6672_);
if (v_isSharedCheck_6749_ == 0)
{
lean_object* v_unused_6750_; lean_object* v_unused_6751_; lean_object* v_unused_6752_; lean_object* v_unused_6753_; lean_object* v_unused_6754_; 
v_unused_6750_ = lean_ctor_get(v_splitterMatchInfo_6672_, 5);
lean_dec(v_unused_6750_);
v_unused_6751_ = lean_ctor_get(v_splitterMatchInfo_6672_, 4);
lean_dec(v_unused_6751_);
v_unused_6752_ = lean_ctor_get(v_splitterMatchInfo_6672_, 3);
lean_dec(v_unused_6752_);
v_unused_6753_ = lean_ctor_get(v_splitterMatchInfo_6672_, 1);
lean_dec(v_unused_6753_);
v_unused_6754_ = lean_ctor_get(v_splitterMatchInfo_6672_, 0);
lean_dec(v_unused_6754_);
v___x_6694_ = v_splitterMatchInfo_6672_;
v_isShared_6695_ = v_isSharedCheck_6749_;
goto v_resetjp_6693_;
}
else
{
lean_inc(v_altInfos_6692_);
lean_dec(v_splitterMatchInfo_6672_);
v___x_6694_ = lean_box(0);
v_isShared_6695_ = v_isSharedCheck_6749_;
goto v_resetjp_6693_;
}
v_resetjp_6693_:
{
lean_object* v___x_6696_; lean_object* v___x_6697_; lean_object* v___x_6698_; lean_object* v___x_6699_; lean_object* v___x_6700_; lean_object* v___x_6701_; lean_object* v___x_6702_; lean_object* v___x_6703_; lean_object* v___x_6704_; lean_object* v___x_6706_; 
v___x_6696_ = lean_array_get_size(v_altInfos_6689_);
v___x_6697_ = lean_array_get_size(v_altInfos_6692_);
v___x_6698_ = lean_array_get_size(v_a_6668_);
v___x_6699_ = lean_array_get_size(v_a_6686_);
v___x_6700_ = l_Array_toSubarray___redArg(v_alts_6512_, v___x_6626_, v___x_6666_);
lean_inc_ref(v_altInfos_6689_);
v___x_6701_ = l_Array_toSubarray___redArg(v_altInfos_6689_, v___x_6626_, v___x_6696_);
v___x_6702_ = l_Array_toSubarray___redArg(v_altInfos_6692_, v___x_6626_, v___x_6697_);
v___x_6703_ = l_Array_toSubarray___redArg(v_a_6668_, v___x_6626_, v___x_6698_);
v___x_6704_ = l_Array_toSubarray___redArg(v_a_6686_, v___x_6626_, v___x_6699_);
if (v_isShared_6650_ == 0)
{
lean_ctor_set(v___x_6649_, 1, v___x_6704_);
lean_ctor_set(v___x_6649_, 0, v___x_6703_);
v___x_6706_ = v___x_6649_;
goto v_reusejp_6705_;
}
else
{
lean_object* v_reuseFailAlloc_6748_; 
v_reuseFailAlloc_6748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6748_, 0, v___x_6703_);
lean_ctor_set(v_reuseFailAlloc_6748_, 1, v___x_6704_);
v___x_6706_ = v_reuseFailAlloc_6748_;
goto v_reusejp_6705_;
}
v_reusejp_6705_:
{
lean_object* v___x_6708_; 
if (v_isShared_6646_ == 0)
{
lean_ctor_set(v___x_6645_, 1, v___x_6706_);
lean_ctor_set(v___x_6645_, 0, v___x_6702_);
v___x_6708_ = v___x_6645_;
goto v_reusejp_6707_;
}
else
{
lean_object* v_reuseFailAlloc_6747_; 
v_reuseFailAlloc_6747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6747_, 0, v___x_6702_);
lean_ctor_set(v_reuseFailAlloc_6747_, 1, v___x_6706_);
v___x_6708_ = v_reuseFailAlloc_6747_;
goto v_reusejp_6707_;
}
v_reusejp_6707_:
{
lean_object* v___x_6709_; lean_object* v___x_6710_; lean_object* v___x_6711_; lean_object* v___x_6712_; 
v___x_6709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6709_, 0, v___x_6701_);
lean_ctor_set(v___x_6709_, 1, v___x_6708_);
v___x_6710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6710_, 0, v___x_6700_);
lean_ctor_set(v___x_6710_, 1, v___x_6709_);
v___x_6711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6711_, 0, v_remaining_x27_6627_);
lean_ctor_set(v___x_6711_, 1, v___x_6710_);
v___x_6712_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v___x_6666_, v_onAlt_6497_, v_fst_6647_, v___y_6615_, v___x_6626_, v___x_6711_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_);
if (lean_obj_tag(v___x_6712_) == 0)
{
lean_object* v_a_6713_; lean_object* v_fst_6714_; lean_object* v___x_6715_; 
v_a_6713_ = lean_ctor_get(v___x_6712_, 0);
lean_inc(v_a_6713_);
lean_dec_ref_known(v___x_6712_, 1);
v_fst_6714_ = lean_ctor_get(v_a_6713_, 0);
lean_inc(v_fst_6714_);
lean_dec(v_a_6713_);
lean_inc(v___y_6625_);
lean_inc_ref(v___y_6624_);
lean_inc(v___y_6623_);
lean_inc_ref(v___y_6622_);
v___x_6715_ = lean_apply_6(v_onRemaining_6498_, v_remaining_6513_, v___y_6622_, v___y_6623_, v___y_6624_, v___y_6625_, lean_box(0));
if (lean_obj_tag(v___x_6715_) == 0)
{
lean_object* v_a_6716_; lean_object* v___x_6718_; uint8_t v_isShared_6719_; uint8_t v_isSharedCheck_6730_; 
v_a_6716_ = lean_ctor_get(v___x_6715_, 0);
v_isSharedCheck_6730_ = !lean_is_exclusive(v___x_6715_);
if (v_isSharedCheck_6730_ == 0)
{
v___x_6718_ = v___x_6715_;
v_isShared_6719_ = v_isSharedCheck_6730_;
goto v_resetjp_6717_;
}
else
{
lean_inc(v_a_6716_);
lean_dec(v___x_6715_);
v___x_6718_ = lean_box(0);
v_isShared_6719_ = v_isSharedCheck_6730_;
goto v_resetjp_6717_;
}
v_resetjp_6717_:
{
lean_object* v_remaining_x27_6720_; lean_object* v___x_6722_; 
v_remaining_x27_6720_ = l_Array_append___redArg(v_fst_6643_, v_a_6716_);
lean_dec(v_a_6716_);
if (v_isShared_6695_ == 0)
{
lean_ctor_set(v___x_6694_, 5, v_overlaps_6691_);
lean_ctor_set(v___x_6694_, 4, v___y_6618_);
lean_ctor_set(v___x_6694_, 3, v_uElimPos_x3f_6690_);
lean_ctor_set(v___x_6694_, 2, v_altInfos_6689_);
lean_ctor_set(v___x_6694_, 1, v_numDiscrs_6688_);
lean_ctor_set(v___x_6694_, 0, v_numParams_6687_);
v___x_6722_ = v___x_6694_;
goto v_reusejp_6721_;
}
else
{
lean_object* v_reuseFailAlloc_6729_; 
v_reuseFailAlloc_6729_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6729_, 0, v_numParams_6687_);
lean_ctor_set(v_reuseFailAlloc_6729_, 1, v_numDiscrs_6688_);
lean_ctor_set(v_reuseFailAlloc_6729_, 2, v_altInfos_6689_);
lean_ctor_set(v_reuseFailAlloc_6729_, 3, v_uElimPos_x3f_6690_);
lean_ctor_set(v_reuseFailAlloc_6729_, 4, v___y_6618_);
lean_ctor_set(v_reuseFailAlloc_6729_, 5, v_overlaps_6691_);
v___x_6722_ = v_reuseFailAlloc_6729_;
goto v_reusejp_6721_;
}
v_reusejp_6721_:
{
lean_object* v___x_6724_; 
if (v_isShared_6642_ == 0)
{
lean_ctor_set(v___x_6641_, 7, v_remaining_x27_6720_);
lean_ctor_set(v___x_6641_, 6, v_fst_6714_);
lean_ctor_set(v___x_6641_, 5, v___y_6619_);
lean_ctor_set(v___x_6641_, 4, v___y_6616_);
lean_ctor_set(v___x_6641_, 3, v___y_6617_);
lean_ctor_set(v___x_6641_, 2, v_matcherLevels_6621_);
lean_ctor_set(v___x_6641_, 1, v_splitterName_6671_);
lean_ctor_set(v___x_6641_, 0, v___x_6722_);
v___x_6724_ = v___x_6641_;
goto v_reusejp_6723_;
}
else
{
lean_object* v_reuseFailAlloc_6728_; 
v_reuseFailAlloc_6728_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_6728_, 0, v___x_6722_);
lean_ctor_set(v_reuseFailAlloc_6728_, 1, v_splitterName_6671_);
lean_ctor_set(v_reuseFailAlloc_6728_, 2, v_matcherLevels_6621_);
lean_ctor_set(v_reuseFailAlloc_6728_, 3, v___y_6617_);
lean_ctor_set(v_reuseFailAlloc_6728_, 4, v___y_6616_);
lean_ctor_set(v_reuseFailAlloc_6728_, 5, v___y_6619_);
lean_ctor_set(v_reuseFailAlloc_6728_, 6, v_fst_6714_);
lean_ctor_set(v_reuseFailAlloc_6728_, 7, v_remaining_x27_6720_);
v___x_6724_ = v_reuseFailAlloc_6728_;
goto v_reusejp_6723_;
}
v_reusejp_6723_:
{
lean_object* v___x_6726_; 
if (v_isShared_6719_ == 0)
{
lean_ctor_set(v___x_6718_, 0, v___x_6724_);
v___x_6726_ = v___x_6718_;
goto v_reusejp_6725_;
}
else
{
lean_object* v_reuseFailAlloc_6727_; 
v_reuseFailAlloc_6727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6727_, 0, v___x_6724_);
v___x_6726_ = v_reuseFailAlloc_6727_;
goto v_reusejp_6725_;
}
v_reusejp_6725_:
{
return v___x_6726_;
}
}
}
}
}
else
{
lean_object* v_a_6731_; lean_object* v___x_6733_; uint8_t v_isShared_6734_; uint8_t v_isSharedCheck_6738_; 
lean_dec(v_fst_6714_);
lean_del_object(v___x_6694_);
lean_dec_ref(v_overlaps_6691_);
lean_dec(v_uElimPos_x3f_6690_);
lean_dec_ref(v_altInfos_6689_);
lean_dec(v_numDiscrs_6688_);
lean_dec(v_numParams_6687_);
lean_dec(v_splitterName_6671_);
lean_dec(v_fst_6643_);
lean_del_object(v___x_6641_);
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
v_a_6731_ = lean_ctor_get(v___x_6715_, 0);
v_isSharedCheck_6738_ = !lean_is_exclusive(v___x_6715_);
if (v_isSharedCheck_6738_ == 0)
{
v___x_6733_ = v___x_6715_;
v_isShared_6734_ = v_isSharedCheck_6738_;
goto v_resetjp_6732_;
}
else
{
lean_inc(v_a_6731_);
lean_dec(v___x_6715_);
v___x_6733_ = lean_box(0);
v_isShared_6734_ = v_isSharedCheck_6738_;
goto v_resetjp_6732_;
}
v_resetjp_6732_:
{
lean_object* v___x_6736_; 
if (v_isShared_6734_ == 0)
{
v___x_6736_ = v___x_6733_;
goto v_reusejp_6735_;
}
else
{
lean_object* v_reuseFailAlloc_6737_; 
v_reuseFailAlloc_6737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6737_, 0, v_a_6731_);
v___x_6736_ = v_reuseFailAlloc_6737_;
goto v_reusejp_6735_;
}
v_reusejp_6735_:
{
return v___x_6736_;
}
}
}
}
else
{
lean_object* v_a_6739_; lean_object* v___x_6741_; uint8_t v_isShared_6742_; uint8_t v_isSharedCheck_6746_; 
lean_del_object(v___x_6694_);
lean_dec_ref(v_overlaps_6691_);
lean_dec(v_uElimPos_x3f_6690_);
lean_dec_ref(v_altInfos_6689_);
lean_dec(v_numDiscrs_6688_);
lean_dec(v_numParams_6687_);
lean_dec(v_splitterName_6671_);
lean_dec(v_fst_6643_);
lean_del_object(v___x_6641_);
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_onRemaining_6498_);
v_a_6739_ = lean_ctor_get(v___x_6712_, 0);
v_isSharedCheck_6746_ = !lean_is_exclusive(v___x_6712_);
if (v_isSharedCheck_6746_ == 0)
{
v___x_6741_ = v___x_6712_;
v_isShared_6742_ = v_isSharedCheck_6746_;
goto v_resetjp_6740_;
}
else
{
lean_inc(v_a_6739_);
lean_dec(v___x_6712_);
v___x_6741_ = lean_box(0);
v_isShared_6742_ = v_isSharedCheck_6746_;
goto v_resetjp_6740_;
}
v_resetjp_6740_:
{
lean_object* v___x_6744_; 
if (v_isShared_6742_ == 0)
{
v___x_6744_ = v___x_6741_;
goto v_reusejp_6743_;
}
else
{
lean_object* v_reuseFailAlloc_6745_; 
v_reuseFailAlloc_6745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6745_, 0, v_a_6739_);
v___x_6744_ = v_reuseFailAlloc_6745_;
goto v_reusejp_6743_;
}
v_reusejp_6743_:
{
return v___x_6744_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6755_; lean_object* v___x_6757_; uint8_t v_isShared_6758_; uint8_t v_isSharedCheck_6762_; 
lean_dec_ref(v_splitterMatchInfo_6672_);
lean_dec(v_splitterName_6671_);
lean_dec(v_a_6668_);
lean_del_object(v___x_6649_);
lean_dec(v_fst_6647_);
lean_del_object(v___x_6645_);
lean_dec(v_fst_6643_);
lean_del_object(v___x_6641_);
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
lean_dec(v___y_6615_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
v_a_6755_ = lean_ctor_get(v___x_6685_, 0);
v_isSharedCheck_6762_ = !lean_is_exclusive(v___x_6685_);
if (v_isSharedCheck_6762_ == 0)
{
v___x_6757_ = v___x_6685_;
v_isShared_6758_ = v_isSharedCheck_6762_;
goto v_resetjp_6756_;
}
else
{
lean_inc(v_a_6755_);
lean_dec(v___x_6685_);
v___x_6757_ = lean_box(0);
v_isShared_6758_ = v_isSharedCheck_6762_;
goto v_resetjp_6756_;
}
v_resetjp_6756_:
{
lean_object* v___x_6760_; 
if (v_isShared_6758_ == 0)
{
v___x_6760_ = v___x_6757_;
goto v_reusejp_6759_;
}
else
{
lean_object* v_reuseFailAlloc_6761_; 
v_reuseFailAlloc_6761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6761_, 0, v_a_6755_);
v___x_6760_ = v_reuseFailAlloc_6761_;
goto v_reusejp_6759_;
}
v_reusejp_6759_:
{
return v___x_6760_;
}
}
}
}
else
{
lean_object* v_a_6763_; lean_object* v___x_6765_; uint8_t v_isShared_6766_; uint8_t v_isSharedCheck_6770_; 
lean_dec_ref(v_aux2_6676_);
lean_dec_ref(v_splitterMatchInfo_6672_);
lean_dec(v_splitterName_6671_);
lean_dec(v_a_6668_);
lean_del_object(v___x_6649_);
lean_dec(v_fst_6647_);
lean_del_object(v___x_6645_);
lean_dec(v_fst_6643_);
lean_del_object(v___x_6641_);
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
lean_dec(v___y_6615_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
v_a_6763_ = lean_ctor_get(v___x_6684_, 0);
v_isSharedCheck_6770_ = !lean_is_exclusive(v___x_6684_);
if (v_isSharedCheck_6770_ == 0)
{
v___x_6765_ = v___x_6684_;
v_isShared_6766_ = v_isSharedCheck_6770_;
goto v_resetjp_6764_;
}
else
{
lean_inc(v_a_6763_);
lean_dec(v___x_6684_);
v___x_6765_ = lean_box(0);
v_isShared_6766_ = v_isSharedCheck_6770_;
goto v_resetjp_6764_;
}
v_resetjp_6764_:
{
lean_object* v___x_6768_; 
if (v_isShared_6766_ == 0)
{
v___x_6768_ = v___x_6765_;
goto v_reusejp_6767_;
}
else
{
lean_object* v_reuseFailAlloc_6769_; 
v_reuseFailAlloc_6769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6769_, 0, v_a_6763_);
v___x_6768_ = v_reuseFailAlloc_6769_;
goto v_reusejp_6767_;
}
v_reusejp_6767_:
{
return v___x_6768_;
}
}
}
}
else
{
lean_object* v_a_6771_; lean_object* v___x_6773_; uint8_t v_isShared_6774_; uint8_t v_isSharedCheck_6778_; 
lean_dec(v_a_6668_);
lean_dec(v___x_6651_);
lean_del_object(v___x_6649_);
lean_dec(v_fst_6647_);
lean_del_object(v___x_6645_);
lean_dec(v_fst_6643_);
lean_del_object(v___x_6641_);
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
lean_dec(v___y_6615_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
v_a_6771_ = lean_ctor_get(v___x_6669_, 0);
v_isSharedCheck_6778_ = !lean_is_exclusive(v___x_6669_);
if (v_isSharedCheck_6778_ == 0)
{
v___x_6773_ = v___x_6669_;
v_isShared_6774_ = v_isSharedCheck_6778_;
goto v_resetjp_6772_;
}
else
{
lean_inc(v_a_6771_);
lean_dec(v___x_6669_);
v___x_6773_ = lean_box(0);
v_isShared_6774_ = v_isSharedCheck_6778_;
goto v_resetjp_6772_;
}
v_resetjp_6772_:
{
lean_object* v___x_6776_; 
if (v_isShared_6774_ == 0)
{
v___x_6776_ = v___x_6773_;
goto v_reusejp_6775_;
}
else
{
lean_object* v_reuseFailAlloc_6777_; 
v_reuseFailAlloc_6777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6777_, 0, v_a_6771_);
v___x_6776_ = v_reuseFailAlloc_6777_;
goto v_reusejp_6775_;
}
v_reusejp_6775_:
{
return v___x_6776_;
}
}
}
}
else
{
lean_object* v_a_6779_; lean_object* v___x_6781_; uint8_t v_isShared_6782_; uint8_t v_isSharedCheck_6786_; 
lean_dec(v___x_6651_);
lean_del_object(v___x_6649_);
lean_dec(v_fst_6647_);
lean_del_object(v___x_6645_);
lean_dec(v_fst_6643_);
lean_del_object(v___x_6641_);
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
lean_dec(v___y_6615_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
v_a_6779_ = lean_ctor_get(v___x_6667_, 0);
v_isSharedCheck_6786_ = !lean_is_exclusive(v___x_6667_);
if (v_isSharedCheck_6786_ == 0)
{
v___x_6781_ = v___x_6667_;
v_isShared_6782_ = v_isSharedCheck_6786_;
goto v_resetjp_6780_;
}
else
{
lean_inc(v_a_6779_);
lean_dec(v___x_6667_);
v___x_6781_ = lean_box(0);
v_isShared_6782_ = v_isSharedCheck_6786_;
goto v_resetjp_6780_;
}
v_resetjp_6780_:
{
lean_object* v___x_6784_; 
if (v_isShared_6782_ == 0)
{
v___x_6784_ = v___x_6781_;
goto v_reusejp_6783_;
}
else
{
lean_object* v_reuseFailAlloc_6785_; 
v_reuseFailAlloc_6785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6785_, 0, v_a_6779_);
v___x_6784_ = v_reuseFailAlloc_6785_;
goto v_reusejp_6783_;
}
v_reusejp_6783_:
{
return v___x_6784_;
}
}
}
}
else
{
lean_object* v_a_6787_; lean_object* v___x_6789_; uint8_t v_isShared_6790_; uint8_t v_isSharedCheck_6794_; 
lean_dec_ref(v_aux1_6655_);
lean_dec(v___x_6651_);
lean_del_object(v___x_6649_);
lean_dec(v_fst_6647_);
lean_del_object(v___x_6645_);
lean_dec(v_fst_6643_);
lean_del_object(v___x_6641_);
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
lean_dec(v___y_6615_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
v_a_6787_ = lean_ctor_get(v___x_6665_, 0);
v_isSharedCheck_6794_ = !lean_is_exclusive(v___x_6665_);
if (v_isSharedCheck_6794_ == 0)
{
v___x_6789_ = v___x_6665_;
v_isShared_6790_ = v_isSharedCheck_6794_;
goto v_resetjp_6788_;
}
else
{
lean_inc(v_a_6787_);
lean_dec(v___x_6665_);
v___x_6789_ = lean_box(0);
v_isShared_6790_ = v_isSharedCheck_6794_;
goto v_resetjp_6788_;
}
v_resetjp_6788_:
{
lean_object* v___x_6792_; 
if (v_isShared_6790_ == 0)
{
v___x_6792_ = v___x_6789_;
goto v_reusejp_6791_;
}
else
{
lean_object* v_reuseFailAlloc_6793_; 
v_reuseFailAlloc_6793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6793_, 0, v_a_6787_);
v___x_6792_ = v_reuseFailAlloc_6793_;
goto v_reusejp_6791_;
}
v_reusejp_6791_:
{
return v___x_6792_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_6808_; lean_object* v_fst_6809_; 
lean_dec(v___y_6615_);
v_fst_6808_ = lean_ctor_get(v_a_6636_, 0);
lean_inc(v_fst_6808_);
lean_dec(v_a_6636_);
v_fst_6809_ = lean_ctor_get(v_snd_6637_, 0);
lean_inc(v_fst_6809_);
lean_dec(v_snd_6637_);
v___y_6515_ = v_matcherLevels_6621_;
v___y_6516_ = v___y_6622_;
v___y_6517_ = v___y_6617_;
v___y_6518_ = v___y_6616_;
v___y_6519_ = v___y_6625_;
v___y_6520_ = v_remaining_x27_6627_;
v___y_6521_ = v_fst_6808_;
v___y_6522_ = v___y_6623_;
v___y_6523_ = v_fst_6809_;
v___y_6524_ = v___y_6618_;
v___y_6525_ = v___y_6624_;
v___y_6526_ = v___x_6626_;
v___y_6527_ = v___y_6619_;
goto v___jp_6514_;
}
}
}
else
{
lean_object* v_a_6810_; lean_object* v___x_6812_; uint8_t v_isShared_6813_; uint8_t v_isSharedCheck_6817_; 
lean_dec_ref(v_matcherLevels_6621_);
lean_dec_ref(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec_ref(v___y_6617_);
lean_dec_ref(v___y_6616_);
lean_dec(v___y_6615_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
lean_dec_ref(v_matcherApp_6492_);
v_a_6810_ = lean_ctor_get(v___x_6635_, 0);
v_isSharedCheck_6817_ = !lean_is_exclusive(v___x_6635_);
if (v_isSharedCheck_6817_ == 0)
{
v___x_6812_ = v___x_6635_;
v_isShared_6813_ = v_isSharedCheck_6817_;
goto v_resetjp_6811_;
}
else
{
lean_inc(v_a_6810_);
lean_dec(v___x_6635_);
v___x_6812_ = lean_box(0);
v_isShared_6813_ = v_isSharedCheck_6817_;
goto v_resetjp_6811_;
}
v_resetjp_6811_:
{
lean_object* v___x_6815_; 
if (v_isShared_6813_ == 0)
{
v___x_6815_ = v___x_6812_;
goto v_reusejp_6814_;
}
else
{
lean_object* v_reuseFailAlloc_6816_; 
v_reuseFailAlloc_6816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6816_, 0, v_a_6810_);
v___x_6815_ = v_reuseFailAlloc_6816_;
goto v_reusejp_6814_;
}
v_reusejp_6814_:
{
return v___x_6815_;
}
}
}
}
v___jp_6818_:
{
size_t v_sz_6824_; size_t v___x_6825_; lean_object* v___x_6826_; 
v_sz_6824_ = lean_array_size(v_params_6509_);
v___x_6825_ = ((size_t)0ULL);
lean_inc_ref(v_params_6509_);
lean_inc_ref(v_onParams_6495_);
v___x_6826_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6495_, v_sz_6824_, v___x_6825_, v_params_6509_, v___y_6820_, v___y_6821_, v___y_6822_, v___y_6823_);
if (lean_obj_tag(v___x_6826_) == 0)
{
lean_object* v_a_6827_; size_t v_sz_6828_; lean_object* v___x_6829_; 
v_a_6827_ = lean_ctor_get(v___x_6826_, 0);
lean_inc(v_a_6827_);
lean_dec_ref_known(v___x_6826_, 1);
v_sz_6828_ = lean_array_size(v_discrs_6511_);
lean_inc_ref(v_discrs_6511_);
v___x_6829_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6495_, v_sz_6828_, v___x_6825_, v_discrs_6511_, v___y_6820_, v___y_6821_, v___y_6822_, v___y_6823_);
if (lean_obj_tag(v___x_6829_) == 0)
{
lean_object* v_a_6830_; lean_object* v___x_6831_; lean_object* v___x_6832_; lean_object* v___f_6833_; uint8_t v___x_6834_; lean_object* v___x_6835_; 
v_a_6830_ = lean_ctor_get(v___x_6829_, 0);
lean_inc_n(v_a_6830_, 2);
lean_dec_ref_known(v___x_6829_, 1);
v___x_6831_ = lean_box(v_addEqualities_6494_);
v___x_6832_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1));
lean_inc_ref(v_discrs_6511_);
lean_inc_ref(v_toMatcherInfo_6506_);
v___f_6833_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed), 13, 6);
lean_closure_set(v___f_6833_, 0, v_onMotive_6496_);
lean_closure_set(v___f_6833_, 1, v_toMatcherInfo_6506_);
lean_closure_set(v___f_6833_, 2, v_a_6830_);
lean_closure_set(v___f_6833_, 3, v___x_6831_);
lean_closure_set(v___f_6833_, 4, v___x_6832_);
lean_closure_set(v___f_6833_, 5, v_discrs_6511_);
v___x_6834_ = 0;
lean_inc_ref(v_motive_6510_);
v___x_6835_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_6510_, v___f_6833_, v___x_6834_, v___y_6820_, v___y_6821_, v___y_6822_, v___y_6823_);
if (lean_obj_tag(v___x_6835_) == 0)
{
lean_object* v_a_6836_; lean_object* v_snd_6837_; lean_object* v_snd_6838_; lean_object* v_uElimPos_x3f_6839_; 
v_a_6836_ = lean_ctor_get(v___x_6835_, 0);
lean_inc(v_a_6836_);
lean_dec_ref_known(v___x_6835_, 1);
v_snd_6837_ = lean_ctor_get(v_a_6836_, 1);
v_snd_6838_ = lean_ctor_get(v_snd_6837_, 1);
lean_inc(v_snd_6838_);
v_uElimPos_x3f_6839_ = lean_ctor_get(v_toMatcherInfo_6506_, 3);
if (lean_obj_tag(v_uElimPos_x3f_6839_) == 0)
{
lean_object* v_fst_6840_; lean_object* v_fst_6841_; lean_object* v_snd_6842_; 
v_fst_6840_ = lean_ctor_get(v_a_6836_, 0);
lean_inc(v_fst_6840_);
lean_dec(v_a_6836_);
v_fst_6841_ = lean_ctor_get(v_snd_6838_, 0);
lean_inc(v_fst_6841_);
v_snd_6842_ = lean_ctor_get(v_snd_6838_, 1);
lean_inc(v_snd_6842_);
lean_dec(v_snd_6838_);
lean_inc_ref(v_matcherLevels_6508_);
v___y_6614_ = v_fst_6841_;
v___y_6615_ = v_numDiscrEqs_6819_;
v___y_6616_ = v_fst_6840_;
v___y_6617_ = v_a_6827_;
v___y_6618_ = v_snd_6842_;
v___y_6619_ = v_a_6830_;
v___y_6620_ = v___x_6825_;
v_matcherLevels_6621_ = v_matcherLevels_6508_;
v___y_6622_ = v___y_6820_;
v___y_6623_ = v___y_6821_;
v___y_6624_ = v___y_6822_;
v___y_6625_ = v___y_6823_;
goto v___jp_6613_;
}
else
{
lean_object* v_fst_6843_; lean_object* v_fst_6844_; lean_object* v_fst_6845_; lean_object* v_snd_6846_; lean_object* v_val_6847_; lean_object* v___x_6848_; 
lean_inc(v_snd_6837_);
v_fst_6843_ = lean_ctor_get(v_a_6836_, 0);
lean_inc(v_fst_6843_);
lean_dec(v_a_6836_);
v_fst_6844_ = lean_ctor_get(v_snd_6837_, 0);
lean_inc(v_fst_6844_);
lean_dec(v_snd_6837_);
v_fst_6845_ = lean_ctor_get(v_snd_6838_, 0);
lean_inc(v_fst_6845_);
v_snd_6846_ = lean_ctor_get(v_snd_6838_, 1);
lean_inc(v_snd_6846_);
lean_dec(v_snd_6838_);
v_val_6847_ = lean_ctor_get(v_uElimPos_x3f_6839_, 0);
lean_inc_ref(v_matcherLevels_6508_);
v___x_6848_ = lean_array_set(v_matcherLevels_6508_, v_val_6847_, v_fst_6844_);
v___y_6614_ = v_fst_6845_;
v___y_6615_ = v_numDiscrEqs_6819_;
v___y_6616_ = v_fst_6843_;
v___y_6617_ = v_a_6827_;
v___y_6618_ = v_snd_6846_;
v___y_6619_ = v_a_6830_;
v___y_6620_ = v___x_6825_;
v_matcherLevels_6621_ = v___x_6848_;
v___y_6622_ = v___y_6820_;
v___y_6623_ = v___y_6821_;
v___y_6624_ = v___y_6822_;
v___y_6625_ = v___y_6823_;
goto v___jp_6613_;
}
}
else
{
lean_object* v_a_6849_; lean_object* v___x_6851_; uint8_t v_isShared_6852_; uint8_t v_isSharedCheck_6856_; 
lean_dec(v_a_6830_);
lean_dec(v_a_6827_);
lean_dec(v_numDiscrEqs_6819_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
lean_dec_ref(v_matcherApp_6492_);
v_a_6849_ = lean_ctor_get(v___x_6835_, 0);
v_isSharedCheck_6856_ = !lean_is_exclusive(v___x_6835_);
if (v_isSharedCheck_6856_ == 0)
{
v___x_6851_ = v___x_6835_;
v_isShared_6852_ = v_isSharedCheck_6856_;
goto v_resetjp_6850_;
}
else
{
lean_inc(v_a_6849_);
lean_dec(v___x_6835_);
v___x_6851_ = lean_box(0);
v_isShared_6852_ = v_isSharedCheck_6856_;
goto v_resetjp_6850_;
}
v_resetjp_6850_:
{
lean_object* v___x_6854_; 
if (v_isShared_6852_ == 0)
{
v___x_6854_ = v___x_6851_;
goto v_reusejp_6853_;
}
else
{
lean_object* v_reuseFailAlloc_6855_; 
v_reuseFailAlloc_6855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6855_, 0, v_a_6849_);
v___x_6854_ = v_reuseFailAlloc_6855_;
goto v_reusejp_6853_;
}
v_reusejp_6853_:
{
return v___x_6854_;
}
}
}
}
else
{
lean_object* v_a_6857_; lean_object* v___x_6859_; uint8_t v_isShared_6860_; uint8_t v_isSharedCheck_6864_; 
lean_dec(v_a_6827_);
lean_dec(v_numDiscrEqs_6819_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
lean_dec_ref(v_onMotive_6496_);
lean_dec_ref(v_matcherApp_6492_);
v_a_6857_ = lean_ctor_get(v___x_6829_, 0);
v_isSharedCheck_6864_ = !lean_is_exclusive(v___x_6829_);
if (v_isSharedCheck_6864_ == 0)
{
v___x_6859_ = v___x_6829_;
v_isShared_6860_ = v_isSharedCheck_6864_;
goto v_resetjp_6858_;
}
else
{
lean_inc(v_a_6857_);
lean_dec(v___x_6829_);
v___x_6859_ = lean_box(0);
v_isShared_6860_ = v_isSharedCheck_6864_;
goto v_resetjp_6858_;
}
v_resetjp_6858_:
{
lean_object* v___x_6862_; 
if (v_isShared_6860_ == 0)
{
v___x_6862_ = v___x_6859_;
goto v_reusejp_6861_;
}
else
{
lean_object* v_reuseFailAlloc_6863_; 
v_reuseFailAlloc_6863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6863_, 0, v_a_6857_);
v___x_6862_ = v_reuseFailAlloc_6863_;
goto v_reusejp_6861_;
}
v_reusejp_6861_:
{
return v___x_6862_;
}
}
}
}
else
{
lean_object* v_a_6865_; lean_object* v___x_6867_; uint8_t v_isShared_6868_; uint8_t v_isSharedCheck_6872_; 
lean_dec(v_numDiscrEqs_6819_);
lean_dec_ref(v_remaining_6513_);
lean_dec_ref(v_alts_6512_);
lean_dec(v_matcherName_6507_);
lean_dec_ref(v_toMatcherInfo_6506_);
lean_dec_ref(v_onRemaining_6498_);
lean_dec_ref(v_onAlt_6497_);
lean_dec_ref(v_onMotive_6496_);
lean_dec_ref(v_onParams_6495_);
lean_dec_ref(v_matcherApp_6492_);
v_a_6865_ = lean_ctor_get(v___x_6826_, 0);
v_isSharedCheck_6872_ = !lean_is_exclusive(v___x_6826_);
if (v_isSharedCheck_6872_ == 0)
{
v___x_6867_ = v___x_6826_;
v_isShared_6868_ = v_isSharedCheck_6872_;
goto v_resetjp_6866_;
}
else
{
lean_inc(v_a_6865_);
lean_dec(v___x_6826_);
v___x_6867_ = lean_box(0);
v_isShared_6868_ = v_isSharedCheck_6872_;
goto v_resetjp_6866_;
}
v_resetjp_6866_:
{
lean_object* v___x_6870_; 
if (v_isShared_6868_ == 0)
{
v___x_6870_ = v___x_6867_;
goto v_reusejp_6869_;
}
else
{
lean_object* v_reuseFailAlloc_6871_; 
v_reuseFailAlloc_6871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6871_, 0, v_a_6865_);
v___x_6870_ = v_reuseFailAlloc_6871_;
goto v_reusejp_6869_;
}
v_reusejp_6869_:
{
return v___x_6870_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object* v_matcherApp_6892_, lean_object* v_useSplitter_6893_, lean_object* v_addEqualities_6894_, lean_object* v_onParams_6895_, lean_object* v_onMotive_6896_, lean_object* v_onAlt_6897_, lean_object* v_onRemaining_6898_, lean_object* v___y_6899_, lean_object* v___y_6900_, lean_object* v___y_6901_, lean_object* v___y_6902_, lean_object* v___y_6903_){
_start:
{
uint8_t v_useSplitter_boxed_6904_; uint8_t v_addEqualities_boxed_6905_; lean_object* v_res_6906_; 
v_useSplitter_boxed_6904_ = lean_unbox(v_useSplitter_6893_);
v_addEqualities_boxed_6905_ = lean_unbox(v_addEqualities_6894_);
v_res_6906_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6892_, v_useSplitter_boxed_6904_, v_addEqualities_boxed_6905_, v_onParams_6895_, v_onMotive_6896_, v_onAlt_6897_, v_onRemaining_6898_, v___y_6899_, v___y_6900_, v___y_6901_, v___y_6902_);
lean_dec(v___y_6902_);
lean_dec_ref(v___y_6901_);
lean_dec(v___y_6900_);
lean_dec_ref(v___y_6899_);
return v_res_6906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object* v_matcherApp_6912_, lean_object* v_a_6913_, lean_object* v_a_6914_, lean_object* v_a_6915_, lean_object* v_a_6916_){
_start:
{
lean_object* v_toMatcherInfo_6918_; lean_object* v_matcherName_6919_; lean_object* v_matcherLevels_6920_; lean_object* v_params_6921_; lean_object* v_alts_6922_; lean_object* v_remaining_6923_; lean_object* v___f_6924_; lean_object* v___f_6925_; lean_object* v_nExtra_6926_; uint8_t v___x_6927_; lean_object* v___f_6928_; uint8_t v___x_6929_; lean_object* v___x_6930_; lean_object* v___x_6931_; lean_object* v___f_6932_; lean_object* v___x_6933_; 
v_toMatcherInfo_6918_ = lean_ctor_get(v_matcherApp_6912_, 0);
v_matcherName_6919_ = lean_ctor_get(v_matcherApp_6912_, 1);
v_matcherLevels_6920_ = lean_ctor_get(v_matcherApp_6912_, 2);
v_params_6921_ = lean_ctor_get(v_matcherApp_6912_, 3);
v_alts_6922_ = lean_ctor_get(v_matcherApp_6912_, 6);
v_remaining_6923_ = lean_ctor_get(v_matcherApp_6912_, 7);
v___f_6924_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__0));
v___f_6925_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__1));
v_nExtra_6926_ = lean_array_get_size(v_remaining_6923_);
v___x_6927_ = 1;
v___f_6928_ = ((lean_object*)(l_Lean_Meta_MatcherApp_inferMatchType___closed__2));
v___x_6929_ = 0;
v___x_6930_ = lean_box(v___x_6929_);
v___x_6931_ = lean_box(v___x_6927_);
lean_inc_ref(v_matcherLevels_6920_);
lean_inc_ref(v_params_6921_);
lean_inc(v_matcherName_6919_);
lean_inc_ref(v_toMatcherInfo_6918_);
lean_inc_ref(v_alts_6922_);
v___f_6932_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed), 15, 8);
lean_closure_set(v___f_6932_, 0, v_nExtra_6926_);
lean_closure_set(v___f_6932_, 1, v___x_6930_);
lean_closure_set(v___f_6932_, 2, v___x_6931_);
lean_closure_set(v___f_6932_, 3, v_alts_6922_);
lean_closure_set(v___f_6932_, 4, v_toMatcherInfo_6918_);
lean_closure_set(v___f_6932_, 5, v_matcherName_6919_);
lean_closure_set(v___f_6932_, 6, v_params_6921_);
lean_closure_set(v___f_6932_, 7, v_matcherLevels_6920_);
v___x_6933_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6912_, v___x_6927_, v___x_6929_, v___f_6924_, v___f_6932_, v___f_6928_, v___f_6925_, v_a_6913_, v_a_6914_, v_a_6915_, v_a_6916_);
return v___x_6933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object* v_matcherApp_6934_, lean_object* v_a_6935_, lean_object* v_a_6936_, lean_object* v_a_6937_, lean_object* v_a_6938_, lean_object* v_a_6939_){
_start:
{
lean_object* v_res_6940_; 
v_res_6940_ = l_Lean_Meta_MatcherApp_inferMatchType(v_matcherApp_6934_, v_a_6935_, v_a_6936_, v_a_6937_, v_a_6938_);
lean_dec(v_a_6938_);
lean_dec_ref(v_a_6937_);
lean_dec(v_a_6936_);
lean_dec_ref(v_a_6935_);
return v_res_6940_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object* v_a_6941_, lean_object* v_termAlt_6942_, lean_object* v_inst_6943_, lean_object* v_R_6944_, lean_object* v_a_6945_, lean_object* v_b_6946_, lean_object* v_c_6947_, lean_object* v___y_6948_, lean_object* v___y_6949_, lean_object* v___y_6950_, lean_object* v___y_6951_){
_start:
{
lean_object* v___x_6953_; 
v___x_6953_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_6941_, v_termAlt_6942_, v_a_6945_, v_b_6946_, v___y_6948_, v___y_6949_, v___y_6950_, v___y_6951_);
return v___x_6953_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object* v_a_6954_, lean_object* v_termAlt_6955_, lean_object* v_inst_6956_, lean_object* v_R_6957_, lean_object* v_a_6958_, lean_object* v_b_6959_, lean_object* v_c_6960_, lean_object* v___y_6961_, lean_object* v___y_6962_, lean_object* v___y_6963_, lean_object* v___y_6964_, lean_object* v___y_6965_){
_start:
{
lean_object* v_res_6966_; 
v_res_6966_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(v_a_6954_, v_termAlt_6955_, v_inst_6956_, v_R_6957_, v_a_6958_, v_b_6959_, v_c_6960_, v___y_6961_, v___y_6962_, v___y_6963_, v___y_6964_);
lean_dec(v___y_6964_);
lean_dec_ref(v___y_6963_);
lean_dec(v___y_6962_);
lean_dec_ref(v___y_6961_);
return v_res_6966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object* v_00_u03b1_6967_, lean_object* v_fvars_6968_, lean_object* v_names_6969_, lean_object* v_k_6970_, lean_object* v___y_6971_, lean_object* v___y_6972_, lean_object* v___y_6973_, lean_object* v___y_6974_){
_start:
{
lean_object* v___x_6976_; 
v___x_6976_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_6968_, v_names_6969_, v_k_6970_, v___y_6971_, v___y_6972_, v___y_6973_, v___y_6974_);
return v___x_6976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object* v_00_u03b1_6977_, lean_object* v_fvars_6978_, lean_object* v_names_6979_, lean_object* v_k_6980_, lean_object* v___y_6981_, lean_object* v___y_6982_, lean_object* v___y_6983_, lean_object* v___y_6984_, lean_object* v___y_6985_){
_start:
{
lean_object* v_res_6986_; 
v_res_6986_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(v_00_u03b1_6977_, v_fvars_6978_, v_names_6979_, v_k_6980_, v___y_6981_, v___y_6982_, v___y_6983_, v___y_6984_);
lean_dec(v___y_6984_);
lean_dec_ref(v___y_6983_);
lean_dec(v___y_6982_);
lean_dec_ref(v___y_6981_);
lean_dec_ref(v_names_6979_);
lean_dec_ref(v_fvars_6978_);
return v_res_6986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object* v_00_u03b1_6987_, lean_object* v_origAltType_6988_, lean_object* v_altInfo_6989_, lean_object* v_k_6990_, lean_object* v___y_6991_, lean_object* v___y_6992_, lean_object* v___y_6993_, lean_object* v___y_6994_){
_start:
{
lean_object* v___x_6996_; 
v___x_6996_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_6988_, v_altInfo_6989_, v_k_6990_, v___y_6991_, v___y_6992_, v___y_6993_, v___y_6994_);
return v___x_6996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object* v_00_u03b1_6997_, lean_object* v_origAltType_6998_, lean_object* v_altInfo_6999_, lean_object* v_k_7000_, lean_object* v___y_7001_, lean_object* v___y_7002_, lean_object* v___y_7003_, lean_object* v___y_7004_, lean_object* v___y_7005_){
_start:
{
lean_object* v_res_7006_; 
v_res_7006_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(v_00_u03b1_6997_, v_origAltType_6998_, v_altInfo_6999_, v_k_7000_, v___y_7001_, v___y_7002_, v___y_7003_, v___y_7004_);
lean_dec(v___y_7004_);
lean_dec_ref(v___y_7003_);
lean_dec(v___y_7002_);
lean_dec_ref(v___y_7001_);
return v_res_7006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object* v_declName_7007_, lean_object* v___y_7008_, lean_object* v___y_7009_, lean_object* v___y_7010_, lean_object* v___y_7011_){
_start:
{
lean_object* v___x_7013_; 
v___x_7013_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_7007_, v___y_7011_);
return v___x_7013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object* v_declName_7014_, lean_object* v___y_7015_, lean_object* v___y_7016_, lean_object* v___y_7017_, lean_object* v___y_7018_, lean_object* v___y_7019_){
_start:
{
lean_object* v_res_7020_; 
v_res_7020_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(v_declName_7014_, v___y_7015_, v___y_7016_, v___y_7017_, v___y_7018_);
lean_dec(v___y_7018_);
lean_dec_ref(v___y_7017_);
lean_dec(v___y_7016_);
lean_dec_ref(v___y_7015_);
return v_res_7020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t v_sz_7021_, size_t v_i_7022_, lean_object* v_bs_7023_, lean_object* v___y_7024_, lean_object* v___y_7025_, lean_object* v___y_7026_, lean_object* v___y_7027_){
_start:
{
lean_object* v___x_7029_; 
v___x_7029_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_7021_, v_i_7022_, v_bs_7023_, v___y_7024_, v___y_7026_, v___y_7027_);
return v___x_7029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object* v_sz_7030_, lean_object* v_i_7031_, lean_object* v_bs_7032_, lean_object* v___y_7033_, lean_object* v___y_7034_, lean_object* v___y_7035_, lean_object* v___y_7036_, lean_object* v___y_7037_){
_start:
{
size_t v_sz_boxed_7038_; size_t v_i_boxed_7039_; lean_object* v_res_7040_; 
v_sz_boxed_7038_ = lean_unbox_usize(v_sz_7030_);
lean_dec(v_sz_7030_);
v_i_boxed_7039_ = lean_unbox_usize(v_i_7031_);
lean_dec(v_i_7031_);
v_res_7040_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(v_sz_boxed_7038_, v_i_boxed_7039_, v_bs_7032_, v___y_7033_, v___y_7034_, v___y_7035_, v___y_7036_);
lean_dec(v___y_7036_);
lean_dec_ref(v___y_7035_);
lean_dec(v___y_7034_);
lean_dec_ref(v___y_7033_);
return v_res_7040_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object* v_upperBound_7041_, lean_object* v_onAlt_7042_, lean_object* v_extraEqualities_7043_, lean_object* v_inst_7044_, lean_object* v_R_7045_, lean_object* v_a_7046_, lean_object* v_b_7047_, lean_object* v_c_7048_, lean_object* v___y_7049_, lean_object* v___y_7050_, lean_object* v___y_7051_, lean_object* v___y_7052_){
_start:
{
lean_object* v___x_7054_; 
v___x_7054_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_7041_, v_onAlt_7042_, v_extraEqualities_7043_, v_a_7046_, v_b_7047_, v___y_7049_, v___y_7050_, v___y_7051_, v___y_7052_);
return v___x_7054_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object* v_upperBound_7055_, lean_object* v_onAlt_7056_, lean_object* v_extraEqualities_7057_, lean_object* v_inst_7058_, lean_object* v_R_7059_, lean_object* v_a_7060_, lean_object* v_b_7061_, lean_object* v_c_7062_, lean_object* v___y_7063_, lean_object* v___y_7064_, lean_object* v___y_7065_, lean_object* v___y_7066_, lean_object* v___y_7067_){
_start:
{
lean_object* v_res_7068_; 
v_res_7068_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(v_upperBound_7055_, v_onAlt_7056_, v_extraEqualities_7057_, v_inst_7058_, v_R_7059_, v_a_7060_, v_b_7061_, v_c_7062_, v___y_7063_, v___y_7064_, v___y_7065_, v___y_7066_);
lean_dec(v___y_7066_);
lean_dec_ref(v___y_7065_);
lean_dec(v___y_7064_);
lean_dec_ref(v___y_7063_);
lean_dec(v_upperBound_7055_);
return v_res_7068_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object* v_upperBound_7069_, lean_object* v_onAlt_7070_, lean_object* v_extraEqualities_7071_, lean_object* v_numDiscrEqs_7072_, lean_object* v_inst_7073_, lean_object* v_R_7074_, lean_object* v_a_7075_, lean_object* v_b_7076_, lean_object* v_c_7077_, lean_object* v___y_7078_, lean_object* v___y_7079_, lean_object* v___y_7080_, lean_object* v___y_7081_){
_start:
{
lean_object* v___x_7083_; 
v___x_7083_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_7069_, v_onAlt_7070_, v_extraEqualities_7071_, v_numDiscrEqs_7072_, v_a_7075_, v_b_7076_, v___y_7078_, v___y_7079_, v___y_7080_, v___y_7081_);
return v___x_7083_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object* v_upperBound_7084_, lean_object* v_onAlt_7085_, lean_object* v_extraEqualities_7086_, lean_object* v_numDiscrEqs_7087_, lean_object* v_inst_7088_, lean_object* v_R_7089_, lean_object* v_a_7090_, lean_object* v_b_7091_, lean_object* v_c_7092_, lean_object* v___y_7093_, lean_object* v___y_7094_, lean_object* v___y_7095_, lean_object* v___y_7096_, lean_object* v___y_7097_){
_start:
{
lean_object* v_res_7098_; 
v_res_7098_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(v_upperBound_7084_, v_onAlt_7085_, v_extraEqualities_7086_, v_numDiscrEqs_7087_, v_inst_7088_, v_R_7089_, v_a_7090_, v_b_7091_, v_c_7092_, v___y_7093_, v___y_7094_, v___y_7095_, v___y_7096_);
lean_dec(v___y_7096_);
lean_dec_ref(v___y_7095_);
lean_dec(v___y_7094_);
lean_dec_ref(v___y_7093_);
lean_dec(v_upperBound_7084_);
return v_res_7098_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
}
#ifdef __cplusplus
}
#endif
