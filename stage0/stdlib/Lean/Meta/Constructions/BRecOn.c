// Lean compiler output
// Module: Lean.Meta.Constructions.BRecOn
// Imports: public import Lean.Meta.Basic import Lean.Meta.PProdN import Lean.Meta.Tactic.Cases import Lean.Meta.Tactic.Refl
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProdMk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRecName(lean_object*);
lean_object* l_Lean_mkBelowName(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_typeFormerTypeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMax(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkBRecOnName(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProdFstM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPProdSndM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Constructions.BRecOn"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Meta.Constructions.BRecOn.0.Lean.mkBelowFromRec"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "assertion violation: refArgs.size > nParams + recVal.numMotives + recVal.numMinors\n    "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "type of type of major premise "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " not a type former"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recursor "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " has no levelParams"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " not a .recInfo"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_mkBelow_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_mkBelow_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkBelow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_mkBelow___closed__0 = (const lean_object*)&l_Lean_mkBelow___closed__0_value;
static const lean_string_object l_Lean_mkBelow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkBelow"};
static const lean_object* l_Lean_mkBelow___closed__1 = (const lean_object*)&l_Lean_mkBelow___closed__1_value;
static const lean_ctor_object l_Lean_mkBelow___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkBelow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_mkBelow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkBelow___closed__2_value_aux_0),((lean_object*)&l_Lean_mkBelow___closed__1_value),LEAN_SCALAR_PTR_LITERAL(219, 145, 247, 215, 113, 151, 53, 217)}};
static const lean_object* l_Lean_mkBelow___closed__2 = (const lean_object*)&l_Lean_mkBelow___closed__2_value;
static const lean_string_object l_Lean_mkBelow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_mkBelow___closed__3 = (const lean_object*)&l_Lean_mkBelow___closed__3_value;
static const lean_string_object l_Lean_mkBelow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_mkBelow___closed__4 = (const lean_object*)&l_Lean_mkBelow___closed__4_value;
static const lean_ctor_object l_Lean_mkBelow___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkBelow___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_mkBelow___closed__5 = (const lean_object*)&l_Lean_mkBelow___closed__5_value;
static lean_once_cell_t l_Lean_mkBelow___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkBelow___closed__6;
static lean_once_cell_t l_Lean_mkBelow___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_mkBelow___closed__7;
LEAN_EXPORT lean_object* l_Lean_mkBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBelow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Did not find "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "below_"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "F_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_private.Lean.Meta.Constructions.BRecOn.0.Lean.mkBRecOnFromRec"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1;
static const lean_array_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "result type of "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " is not one of "};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "go"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1 = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkBRecOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "mkBRecOn"};
static const lean_object* l_Lean_mkBRecOn___closed__0 = (const lean_object*)&l_Lean_mkBRecOn___closed__0_value;
static const lean_ctor_object l_Lean_mkBRecOn___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkBelow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_mkBRecOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkBRecOn___closed__1_value_aux_0),((lean_object*)&l_Lean_mkBRecOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 5, 240, 19, 65, 164, 203, 201)}};
static const lean_object* l_Lean_mkBRecOn___closed__1 = (const lean_object*)&l_Lean_mkBRecOn___closed__1_value;
static lean_once_cell_t l_Lean_mkBRecOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkBRecOn___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkBRecOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkBRecOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__0_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__1_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__3_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l_Lean_mkBelow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Constructions"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__4_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(224, 107, 212, 234, 74, 49, 105, 87)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BRecOn"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__6_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 159, 21, 145, 161, 36, 75, 158)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__8_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(90, 178, 56, 13, 18, 89, 120, 145)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__9_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(251, 46, 193, 47, 94, 40, 114, 249)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__10_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__11_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 76, 193, 246, 60, 45, 42, 123)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__12_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__13_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(163, 74, 143, 206, 252, 62, 49, 170)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__14_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__2_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(238, 161, 3, 17, 172, 107, 105, 23)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__15_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l_Lean_mkBelow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 157, 106, 195, 120, 158, 168, 97)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__16_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__5_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 17, 66, 247, 186, 244, 193, 203)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__17_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__7_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 36, 236, 78, 201, 65, 143, 102)}};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; uint8_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = 0;
v___x_29_ = lean_box(0);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_28_, v___x_29_, v_type_19_, v___f_27_, v_cleanupAnnotations_21_, v___x_28_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg___boxed(lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_cleanupAnnotations_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_49_);
v_res_56_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_47_, v_k_48_, v_cleanupAnnotations_boxed_55_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1(lean_object* v_00_u03b1_57_, lean_object* v_type_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___boxed(lean_object* v_00_u03b1_67_, lean_object* v_type_68_, lean_object* v_k_69_, lean_object* v_cleanupAnnotations_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_76_; lean_object* v_res_77_; 
v_cleanupAnnotations_boxed_76_ = lean_unbox(v_cleanupAnnotations_70_);
v_res_77_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1(v_00_u03b1_67_, v_type_68_, v_k_69_, v_cleanupAnnotations_boxed_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0(lean_object* v_rlvl_78_, uint8_t v___x_79_, lean_object* v_args_80_, lean_object* v_x_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v___x_87_; uint8_t v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; 
v___x_87_ = l_Lean_Expr_sort___override(v_rlvl_78_);
v___x_88_ = 0;
v___x_89_ = 1;
v___x_90_ = l_Lean_Meta_mkForallFVars(v_args_80_, v___x_87_, v___x_88_, v___x_79_, v___x_79_, v___x_89_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0___boxed(lean_object* v_rlvl_91_, lean_object* v___x_92_, lean_object* v_args_93_, lean_object* v_x_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v___x_2002__boxed_100_; lean_object* v_res_101_; 
v___x_2002__boxed_100_ = lean_unbox(v___x_92_);
v_res_101_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0(v_rlvl_91_, v___x_2002__boxed_100_, v_args_93_, v_x_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec_ref(v_x_94_);
lean_dec_ref(v_args_93_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0(lean_object* v_k_102_, lean_object* v_b_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v___x_109_; 
lean_inc(v___y_107_);
lean_inc_ref(v___y_106_);
lean_inc(v___y_105_);
lean_inc_ref(v___y_104_);
v___x_109_ = lean_apply_6(v_k_102_, v_b_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, lean_box(0));
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v_k_110_, lean_object* v_b_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0(v_k_110_, v_b_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(lean_object* v_name_118_, uint8_t v_bi_119_, lean_object* v_type_120_, lean_object* v_k_121_, uint8_t v_kind_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v___f_128_; lean_object* v___x_129_; 
v___f_128_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_128_, 0, v_k_121_);
v___x_129_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_118_, v_bi_119_, v_type_120_, v___f_128_, v_kind_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_129_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_129_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
v_a_138_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_129_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_129_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg___boxed(lean_object* v_name_146_, lean_object* v_bi_147_, lean_object* v_type_148_, lean_object* v_k_149_, lean_object* v_kind_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
uint8_t v_bi_boxed_156_; uint8_t v_kind_boxed_157_; lean_object* v_res_158_; 
v_bi_boxed_156_ = lean_unbox(v_bi_147_);
v_kind_boxed_157_ = lean_unbox(v_kind_150_);
v_res_158_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(v_name_146_, v_bi_boxed_156_, v_type_148_, v_k_149_, v_kind_boxed_157_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(lean_object* v_name_159_, lean_object* v_type_160_, lean_object* v_k_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
uint8_t v___x_167_; uint8_t v___x_168_; lean_object* v___x_169_; 
v___x_167_ = 0;
v___x_168_ = 0;
v___x_169_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(v_name_159_, v___x_167_, v_type_160_, v_k_161_, v___x_168_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg___boxed(lean_object* v_name_170_, lean_object* v_type_171_, lean_object* v_k_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_name_170_, v_type_171_, v_k_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_178_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(lean_object* v_a_179_, lean_object* v_as_180_, size_t v_i_181_, size_t v_stop_182_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_usize_dec_eq(v_i_181_, v_stop_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = lean_array_uget_borrowed(v_as_180_, v_i_181_);
v___x_185_ = lean_expr_eqv(v_a_179_, v___x_184_);
if (v___x_185_ == 0)
{
size_t v___x_186_; size_t v___x_187_; 
v___x_186_ = ((size_t)1ULL);
v___x_187_ = lean_usize_add(v_i_181_, v___x_186_);
v_i_181_ = v___x_187_;
goto _start;
}
else
{
return v___x_185_;
}
}
else
{
uint8_t v___x_189_; 
v___x_189_ = 0;
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0___boxed(lean_object* v_a_190_, lean_object* v_as_191_, lean_object* v_i_192_, lean_object* v_stop_193_){
_start:
{
size_t v_i_boxed_194_; size_t v_stop_boxed_195_; uint8_t v_res_196_; lean_object* v_r_197_; 
v_i_boxed_194_ = lean_unbox_usize(v_i_192_);
lean_dec(v_i_192_);
v_stop_boxed_195_ = lean_unbox_usize(v_stop_193_);
lean_dec(v_stop_193_);
v_res_196_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(v_a_190_, v_as_191_, v_i_boxed_194_, v_stop_boxed_195_);
lean_dec_ref(v_as_191_);
lean_dec_ref(v_a_190_);
v_r_197_ = lean_box(v_res_196_);
return v_r_197_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(lean_object* v_as_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; 
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_array_get_size(v_as_198_);
v___x_202_ = lean_nat_dec_lt(v___x_200_, v___x_201_);
if (v___x_202_ == 0)
{
return v___x_202_;
}
else
{
size_t v___x_203_; size_t v___x_204_; uint8_t v___x_205_; 
v___x_203_ = ((size_t)0ULL);
v___x_204_ = lean_usize_of_nat(v___x_201_);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0_spec__0(v_a_199_, v_as_198_, v___x_203_, v___x_204_);
return v___x_205_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0___boxed(lean_object* v_as_206_, lean_object* v_a_207_){
_start:
{
uint8_t v_res_208_; lean_object* v_r_209_; 
v_res_208_ = l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(v_as_206_, v_a_207_);
lean_dec_ref(v_a_207_);
lean_dec_ref(v_as_206_);
v_r_209_ = lean_box(v_res_208_);
return v_r_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1(lean_object* v_arg__args_210_, lean_object* v_arg__type_211_, uint8_t v___x_212_, uint8_t v___x_213_, lean_object* v_prods_214_, lean_object* v_rlvl_215_, lean_object* v_motives_216_, lean_object* v_tail_217_, lean_object* v_arg_x27_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
lean_inc_ref(v_arg_x27_218_);
v___x_224_ = l_Lean_mkAppN(v_arg_x27_218_, v_arg__args_210_);
v___x_225_ = l_Lean_Meta_mkPProd(v_arg__type_211_, v___x_224_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; uint8_t v___x_227_; lean_object* v___x_228_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_226_);
lean_dec_ref_known(v___x_225_, 1);
v___x_227_ = 1;
v___x_228_ = l_Lean_Meta_mkForallFVars(v_arg__args_210_, v_a_226_, v___x_212_, v___x_213_, v___x_213_, v___x_227_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
v___x_230_ = lean_array_push(v_prods_214_, v_a_229_);
v___x_231_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_215_, v_motives_216_, v___x_230_, v_tail_217_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref_known(v___x_231_, 1);
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_mk_empty_array_with_capacity(v___x_233_);
v___x_235_ = lean_array_push(v___x_234_, v_arg_x27_218_);
v___x_236_ = l_Lean_Meta_mkLambdaFVars(v___x_235_, v_a_232_, v___x_212_, v___x_213_, v___x_212_, v___x_213_, v___x_227_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
lean_dec_ref(v___x_235_);
return v___x_236_;
}
else
{
lean_dec_ref(v_arg_x27_218_);
return v___x_231_;
}
}
else
{
lean_dec_ref(v_arg_x27_218_);
lean_dec(v_tail_217_);
lean_dec_ref(v_motives_216_);
lean_dec(v_rlvl_215_);
lean_dec_ref(v_prods_214_);
return v___x_228_;
}
}
else
{
lean_dec_ref(v_arg_x27_218_);
lean_dec(v_tail_217_);
lean_dec_ref(v_motives_216_);
lean_dec(v_rlvl_215_);
lean_dec_ref(v_prods_214_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1___boxed(lean_object* v_arg__args_237_, lean_object* v_arg__type_238_, lean_object* v___x_239_, lean_object* v___x_240_, lean_object* v_prods_241_, lean_object* v_rlvl_242_, lean_object* v_motives_243_, lean_object* v_tail_244_, lean_object* v_arg_x27_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
uint8_t v___x_2157__boxed_251_; uint8_t v___x_2158__boxed_252_; lean_object* v_res_253_; 
v___x_2157__boxed_251_ = lean_unbox(v___x_239_);
v___x_2158__boxed_252_ = lean_unbox(v___x_240_);
v_res_253_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1(v_arg__args_237_, v_arg__type_238_, v___x_2157__boxed_251_, v___x_2158__boxed_252_, v_prods_241_, v_rlvl_242_, v_motives_243_, v_tail_244_, v_arg_x27_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec_ref(v_arg__args_237_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2(lean_object* v_motives_254_, lean_object* v_rlvl_255_, lean_object* v_prods_256_, lean_object* v_tail_257_, lean_object* v_head_258_, lean_object* v_a_259_, lean_object* v_arg__args_260_, lean_object* v_arg__type_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = l_Lean_Expr_getAppFn(v_arg__type_261_);
v___x_268_ = l_Array_contains___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__0(v_motives_254_, v___x_267_);
lean_dec_ref(v___x_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
lean_dec_ref(v_arg__type_261_);
lean_dec_ref(v_arg__args_260_);
lean_dec_ref(v_a_259_);
v___x_269_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_255_, v_motives_254_, v_prods_256_, v_tail_257_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v_a_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; uint8_t v___x_275_; lean_object* v___x_276_; 
v_a_270_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___x_269_, 1);
v___x_271_ = lean_unsigned_to_nat(1u);
v___x_272_ = lean_mk_empty_array_with_capacity(v___x_271_);
v___x_273_ = lean_array_push(v___x_272_, v_head_258_);
v___x_274_ = 1;
v___x_275_ = 1;
v___x_276_ = l_Lean_Meta_mkLambdaFVars(v___x_273_, v_a_270_, v___x_268_, v___x_274_, v___x_268_, v___x_274_, v___x_275_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec_ref(v___x_273_);
return v___x_276_;
}
else
{
lean_dec_ref(v_head_258_);
return v___x_269_;
}
}
else
{
lean_object* v___x_277_; lean_object* v___f_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_277_ = lean_box(v___x_268_);
lean_inc(v_rlvl_255_);
v___f_278_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__0___boxed), 9, 2);
lean_closure_set(v___f_278_, 0, v_rlvl_255_);
lean_closure_set(v___f_278_, 1, v___x_277_);
v___x_279_ = l_Lean_Expr_fvarId_x21(v_head_258_);
lean_dec_ref(v_head_258_);
v___x_280_ = l_Lean_FVarId_getUserName___redArg(v___x_279_, v___y_262_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; uint8_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___f_285_; lean_object* v___x_286_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = 0;
v___x_283_ = lean_box(v___x_282_);
v___x_284_ = lean_box(v___x_268_);
v___f_285_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__1___boxed), 14, 8);
lean_closure_set(v___f_285_, 0, v_arg__args_260_);
lean_closure_set(v___f_285_, 1, v_arg__type_261_);
lean_closure_set(v___f_285_, 2, v___x_283_);
lean_closure_set(v___f_285_, 3, v___x_284_);
lean_closure_set(v___f_285_, 4, v_prods_256_);
lean_closure_set(v___f_285_, 5, v_rlvl_255_);
lean_closure_set(v___f_285_, 6, v_motives_254_);
lean_closure_set(v___f_285_, 7, v_tail_257_);
v___x_286_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_259_, v___f_278_, v___x_282_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_286_, 1);
v___x_288_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_a_281_, v_a_287_, v___f_285_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
return v___x_288_;
}
else
{
lean_dec_ref(v___f_285_);
lean_dec(v_a_281_);
return v___x_286_;
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v___f_278_);
lean_dec_ref(v_arg__type_261_);
lean_dec_ref(v_arg__args_260_);
lean_dec_ref(v_a_259_);
lean_dec(v_tail_257_);
lean_dec_ref(v_prods_256_);
lean_dec(v_rlvl_255_);
lean_dec_ref(v_motives_254_);
v_a_289_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_280_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_280_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2___boxed(lean_object* v_motives_297_, lean_object* v_rlvl_298_, lean_object* v_prods_299_, lean_object* v_tail_300_, lean_object* v_head_301_, lean_object* v_a_302_, lean_object* v_arg__args_303_, lean_object* v_arg__type_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2(v_motives_297_, v_rlvl_298_, v_prods_299_, v_tail_300_, v_head_301_, v_a_302_, v_arg__args_303_, v_arg__type_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(lean_object* v_rlvl_311_, lean_object* v_motives_312_, lean_object* v_prods_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
if (lean_obj_tag(v_a_314_) == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v_motives_312_);
v___x_320_ = l_Lean_Meta_PProdN_pack(v_rlvl_311_, v_prods_313_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
return v___x_320_;
}
else
{
lean_object* v_head_321_; lean_object* v_tail_322_; lean_object* v___x_323_; 
v_head_321_ = lean_ctor_get(v_a_314_, 0);
lean_inc_n(v_head_321_, 2);
v_tail_322_ = lean_ctor_get(v_a_314_, 1);
lean_inc(v_tail_322_);
lean_dec_ref_known(v_a_314_, 2);
lean_inc(v_a_318_);
lean_inc_ref(v_a_317_);
lean_inc(v_a_316_);
lean_inc_ref(v_a_315_);
v___x_323_ = lean_infer_type(v_head_321_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___f_325_; uint8_t v___x_326_; lean_object* v___x_327_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc_n(v_a_324_, 2);
lean_dec_ref_known(v___x_323_, 1);
v___f_325_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___lam__2___boxed), 13, 6);
lean_closure_set(v___f_325_, 0, v_motives_312_);
lean_closure_set(v___f_325_, 1, v_rlvl_311_);
lean_closure_set(v___f_325_, 2, v_prods_313_);
lean_closure_set(v___f_325_, 3, v_tail_322_);
lean_closure_set(v___f_325_, 4, v_head_321_);
lean_closure_set(v___f_325_, 5, v_a_324_);
v___x_326_ = 0;
v___x_327_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_324_, v___f_325_, v___x_326_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
return v___x_327_;
}
else
{
lean_dec(v_tail_322_);
lean_dec(v_head_321_);
lean_dec_ref(v_prods_313_);
lean_dec_ref(v_motives_312_);
lean_dec(v_rlvl_311_);
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go___boxed(lean_object* v_rlvl_328_, lean_object* v_motives_329_, lean_object* v_prods_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_328_, v_motives_329_, v_prods_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3(lean_object* v_00_u03b1_338_, lean_object* v_name_339_, uint8_t v_bi_340_, lean_object* v_type_341_, lean_object* v_k_342_, uint8_t v_kind_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___redArg(v_name_339_, v_bi_340_, v_type_341_, v_k_342_, v_kind_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___boxed(lean_object* v_00_u03b1_350_, lean_object* v_name_351_, lean_object* v_bi_352_, lean_object* v_type_353_, lean_object* v_k_354_, lean_object* v_kind_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
uint8_t v_bi_boxed_361_; uint8_t v_kind_boxed_362_; lean_object* v_res_363_; 
v_bi_boxed_361_ = lean_unbox(v_bi_352_);
v_kind_boxed_362_ = lean_unbox(v_kind_355_);
v_res_363_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3(v_00_u03b1_350_, v_name_351_, v_bi_boxed_361_, v_type_353_, v_k_354_, v_kind_boxed_362_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2(lean_object* v_00_u03b1_364_, lean_object* v_name_365_, lean_object* v_type_366_, lean_object* v_k_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_name_365_, v_type_366_, v_k_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___boxed(lean_object* v_00_u03b1_374_, lean_object* v_name_375_, lean_object* v_type_376_, lean_object* v_k_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2(v_00_u03b1_374_, v_name_375_, v_type_376_, v_k_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0(lean_object* v_rlvl_386_, lean_object* v_motives_387_, lean_object* v_minor__args_388_, lean_object* v_x_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0));
v___x_396_ = lean_array_to_list(v_minor__args_388_);
v___x_397_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go(v_rlvl_386_, v_motives_387_, v___x_395_, v___x_396_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___boxed(lean_object* v_rlvl_398_, lean_object* v_motives_399_, lean_object* v_minor__args_400_, lean_object* v_x_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0(v_rlvl_398_, v_motives_399_, v_minor__args_400_, v_x_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec_ref(v_x_401_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(lean_object* v_rlvl_408_, lean_object* v_motives_409_, lean_object* v_minorType_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___f_416_; uint8_t v___x_417_; lean_object* v___x_418_; 
v___f_416_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___boxed), 9, 2);
lean_closure_set(v___f_416_, 0, v_rlvl_408_);
lean_closure_set(v___f_416_, 1, v_motives_409_);
v___x_417_ = 0;
v___x_418_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_minorType_410_, v___f_416_, v___x_417_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___boxed(lean_object* v_rlvl_419_, lean_object* v_motives_420_, lean_object* v_minorType_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(v_rlvl_419_, v_motives_420_, v_minorType_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(lean_object* v_msg_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___f_435_; lean_object* v___x_5591__overap_436_; lean_object* v___x_437_; 
v___f_435_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0));
v___x_5591__overap_436_ = lean_panic_fn_borrowed(v___f_435_, v_msg_429_);
lean_inc(v___y_433_);
lean_inc_ref(v___y_432_);
lean_inc(v___y_431_);
lean_inc_ref(v___y_430_);
v___x_437_ = lean_apply_5(v___x_5591__overap_436_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, lean_box(0));
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___boxed(lean_object* v_msg_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(v_msg_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(lean_object* v_name_445_, lean_object* v_levelParams_446_, lean_object* v_type_447_, lean_object* v_value_448_, lean_object* v_hints_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___x_452_; uint8_t v___y_454_; lean_object* v_env_462_; uint8_t v___x_463_; 
v___x_452_ = lean_st_ref_get(v___y_450_);
v_env_462_ = lean_ctor_get(v___x_452_, 0);
lean_inc_ref_n(v_env_462_, 2);
lean_dec(v___x_452_);
v___x_463_ = l_Lean_Environment_hasUnsafe(v_env_462_, v_type_447_);
if (v___x_463_ == 0)
{
uint8_t v___x_464_; 
v___x_464_ = l_Lean_Environment_hasUnsafe(v_env_462_, v_value_448_);
if (v___x_464_ == 0)
{
uint8_t v___x_465_; 
v___x_465_ = 1;
v___y_454_ = v___x_465_;
goto v___jp_453_;
}
else
{
goto v___jp_460_;
}
}
else
{
lean_dec_ref(v_env_462_);
goto v___jp_460_;
}
v___jp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
lean_inc(v_name_445_);
v___x_455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_455_, 0, v_name_445_);
lean_ctor_set(v___x_455_, 1, v_levelParams_446_);
lean_ctor_set(v___x_455_, 2, v_type_447_);
v___x_456_ = lean_box(0);
v___x_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_457_, 0, v_name_445_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_458_, 0, v___x_455_);
lean_ctor_set(v___x_458_, 1, v_value_448_);
lean_ctor_set(v___x_458_, 2, v_hints_449_);
lean_ctor_set(v___x_458_, 3, v___x_457_);
lean_ctor_set_uint8(v___x_458_, sizeof(void*)*4, v___y_454_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
v___jp_460_:
{
uint8_t v___x_461_; 
v___x_461_ = 0;
v___y_454_ = v___x_461_;
goto v___jp_453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg___boxed(lean_object* v_name_466_, lean_object* v_levelParams_467_, lean_object* v_type_468_, lean_object* v_value_469_, lean_object* v_hints_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_name_466_, v_levelParams_467_, v_type_468_, v_value_469_, v_hints_470_, v___y_471_);
lean_dec(v___y_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5(lean_object* v_name_474_, lean_object* v_levelParams_475_, lean_object* v_type_476_, lean_object* v_value_477_, lean_object* v_hints_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_name_474_, v_levelParams_475_, v_type_476_, v_value_477_, v_hints_478_, v___y_482_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___boxed(lean_object* v_name_485_, lean_object* v_levelParams_486_, lean_object* v_type_487_, lean_object* v_value_488_, lean_object* v_hints_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5(v_name_485_, v_levelParams_486_, v_type_487_, v_value_488_, v_hints_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(lean_object* v___x_496_, lean_object* v___x_497_, lean_object* v_as_498_, size_t v_sz_499_, size_t v_i_500_, lean_object* v_b_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
uint8_t v___x_507_; 
v___x_507_ = lean_usize_dec_lt(v_i_500_, v_sz_499_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; 
lean_dec_ref(v___x_497_);
lean_dec(v___x_496_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v_b_501_);
return v___x_508_;
}
else
{
lean_object* v_a_509_; lean_object* v___x_510_; 
v_a_509_ = lean_array_uget_borrowed(v_as_498_, v_i_500_);
lean_inc(v___y_505_);
lean_inc_ref(v___y_504_);
lean_inc(v___y_503_);
lean_inc_ref(v___y_502_);
lean_inc(v_a_509_);
v___x_510_ = lean_infer_type(v_a_509_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v_a_511_; lean_object* v___x_512_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_510_, 1);
lean_inc_ref(v___x_497_);
lean_inc(v___x_496_);
v___x_512_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise(v___x_496_, v___x_497_, v_a_511_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_514_; size_t v___x_515_; size_t v___x_516_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___x_514_ = l_Lean_Expr_app___override(v_b_501_, v_a_513_);
v___x_515_ = ((size_t)1ULL);
v___x_516_ = lean_usize_add(v_i_500_, v___x_515_);
v_i_500_ = v___x_516_;
v_b_501_ = v___x_514_;
goto _start;
}
else
{
lean_dec_ref(v_b_501_);
lean_dec_ref(v___x_497_);
lean_dec(v___x_496_);
return v___x_512_;
}
}
else
{
lean_dec_ref(v_b_501_);
lean_dec_ref(v___x_497_);
lean_dec(v___x_496_);
return v___x_510_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4___boxed(lean_object* v___x_518_, lean_object* v___x_519_, lean_object* v_as_520_, lean_object* v_sz_521_, lean_object* v_i_522_, lean_object* v_b_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
size_t v_sz_boxed_529_; size_t v_i_boxed_530_; lean_object* v_res_531_; 
v_sz_boxed_529_ = lean_unbox_usize(v_sz_521_);
lean_dec(v_sz_521_);
v_i_boxed_530_ = lean_unbox_usize(v_i_522_);
lean_dec(v_i_522_);
v_res_531_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(v___x_518_, v___x_519_, v_as_520_, v_sz_boxed_529_, v_i_boxed_530_, v_b_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec_ref(v_as_520_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0(lean_object* v___x_532_, uint8_t v___x_533_, lean_object* v_targs_534_, lean_object* v_x_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v___x_541_; uint8_t v___x_542_; uint8_t v___x_543_; lean_object* v___x_544_; 
v___x_541_ = l_Lean_Expr_sort___override(v___x_532_);
v___x_542_ = 0;
v___x_543_ = 1;
v___x_544_ = l_Lean_Meta_mkLambdaFVars(v_targs_534_, v___x_541_, v___x_542_, v___x_533_, v___x_542_, v___x_533_, v___x_543_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0___boxed(lean_object* v___x_545_, lean_object* v___x_546_, lean_object* v_targs_547_, lean_object* v_x_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
uint8_t v___x_9874__boxed_554_; lean_object* v_res_555_; 
v___x_9874__boxed_554_ = lean_unbox(v___x_546_);
v_res_555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0(v___x_545_, v___x_9874__boxed_554_, v_targs_547_, v_x_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec_ref(v_x_548_);
lean_dec_ref(v_targs_547_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(lean_object* v___x_556_, lean_object* v___x_557_, lean_object* v___x_558_, lean_object* v_as_559_, size_t v_sz_560_, size_t v_i_561_, lean_object* v_b_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
uint8_t v___x_568_; 
v___x_568_ = lean_usize_dec_lt(v_i_561_, v_sz_560_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
lean_dec(v___x_556_);
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v_b_562_);
return v___x_569_;
}
else
{
uint8_t v___x_570_; lean_object* v___x_571_; lean_object* v___f_572_; lean_object* v_a_573_; lean_object* v___x_574_; 
v___x_570_ = lean_nat_dec_lt(v___x_557_, v___x_558_);
v___x_571_ = lean_box(v___x_570_);
lean_inc(v___x_556_);
v___f_572_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___lam__0___boxed), 9, 2);
lean_closure_set(v___f_572_, 0, v___x_556_);
lean_closure_set(v___f_572_, 1, v___x_571_);
v_a_573_ = lean_array_uget_borrowed(v_as_559_, v_i_561_);
lean_inc(v___y_566_);
lean_inc_ref(v___y_565_);
lean_inc(v___y_564_);
lean_inc_ref(v___y_563_);
lean_inc(v_a_573_);
v___x_574_ = lean_infer_type(v_a_573_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; uint8_t v___x_576_; lean_object* v___x_577_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
v___x_576_ = 0;
v___x_577_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_575_, v___f_572_, v___x_576_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; size_t v___x_580_; size_t v___x_581_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = l_Lean_Expr_app___override(v_b_562_, v_a_578_);
v___x_580_ = ((size_t)1ULL);
v___x_581_ = lean_usize_add(v_i_561_, v___x_580_);
v_i_561_ = v___x_581_;
v_b_562_ = v___x_579_;
goto _start;
}
else
{
lean_dec_ref(v_b_562_);
lean_dec(v___x_556_);
return v___x_577_;
}
}
else
{
lean_dec_ref(v___f_572_);
lean_dec_ref(v_b_562_);
lean_dec(v___x_556_);
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3___boxed(lean_object* v___x_583_, lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v_as_586_, lean_object* v_sz_587_, lean_object* v_i_588_, lean_object* v_b_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
size_t v_sz_boxed_595_; size_t v_i_boxed_596_; lean_object* v_res_597_; 
v_sz_boxed_595_ = lean_unbox_usize(v_sz_587_);
lean_dec(v_sz_587_);
v_i_boxed_596_ = lean_unbox_usize(v_i_588_);
lean_dec(v_i_588_);
v_res_597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(v___x_583_, v___x_584_, v___x_585_, v_as_586_, v_sz_boxed_595_, v_i_boxed_596_, v_b_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec_ref(v_as_586_);
lean_dec(v___x_585_);
lean_dec(v___x_584_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(lean_object* v_msgData_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v___x_604_; lean_object* v_env_605_; uint8_t v___x_606_; lean_object* v_env_607_; lean_object* v___x_608_; lean_object* v_toCold_609_; lean_object* v_mctx_610_; lean_object* v_lctx_611_; lean_object* v_options_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_604_ = lean_st_ref_get(v___y_602_);
v_env_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc_ref(v_env_605_);
lean_dec(v___x_604_);
v___x_606_ = 0;
v_env_607_ = l_Lean_Environment_setRecordingDeps(v_env_605_, v___x_606_);
v___x_608_ = lean_st_ref_get(v___y_600_);
v_toCold_609_ = lean_ctor_get(v___y_601_, 0);
v_mctx_610_ = lean_ctor_get(v___x_608_, 0);
lean_inc_ref(v_mctx_610_);
lean_dec(v___x_608_);
v_lctx_611_ = lean_ctor_get(v___y_599_, 2);
v_options_612_ = lean_ctor_get(v_toCold_609_, 2);
lean_inc_ref(v_options_612_);
lean_inc_ref(v_lctx_611_);
v___x_613_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_613_, 0, v_env_607_);
lean_ctor_set(v___x_613_, 1, v_mctx_610_);
lean_ctor_set(v___x_613_, 2, v_lctx_611_);
lean_ctor_set(v___x_613_, 3, v_options_612_);
v___x_614_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
lean_ctor_set(v___x_614_, 1, v_msgData_598_);
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7___boxed(lean_object* v_msgData_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(v_msgData_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(lean_object* v_msg_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_ref_629_; lean_object* v___x_630_; lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_639_; 
v_ref_629_ = lean_ctor_get(v___y_626_, 2);
v___x_630_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(v_msg_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
v_a_631_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_639_ == 0)
{
v___x_633_ = v___x_630_;
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_637_; 
lean_inc(v_ref_629_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v_ref_629_);
lean_ctor_set(v___x_635_, 1, v_a_631_);
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 1);
lean_ctor_set(v___x_633_, 0, v___x_635_);
v___x_637_ = v___x_633_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg___boxed(lean_object* v_msg_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v_msg_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
return v_res_646_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_650_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2));
v___x_651_ = lean_unsigned_to_nat(4u);
v___x_652_ = lean_unsigned_to_nat(68u);
v___x_653_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__1));
v___x_654_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0));
v___x_655_ = l_mkPanicMessageWithDecl(v___x_654_, v___x_653_, v___x_652_, v___x_651_, v___x_650_);
return v___x_655_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__4));
v___x_658_ = l_Lean_stringToMessageData(v___x_657_);
return v___x_658_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7(void){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__6));
v___x_661_ = l_Lean_stringToMessageData(v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0(lean_object* v_nParams_662_, lean_object* v_numMotives_663_, lean_object* v_numMinors_664_, lean_object* v___x_665_, lean_object* v_head_666_, lean_object* v_tail_667_, lean_object* v_recName_668_, lean_object* v_belowName_669_, lean_object* v_levelParams_670_, lean_object* v_refArgs_671_, lean_object* v_x_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_678_ = lean_nat_add(v_nParams_662_, v_numMotives_663_);
v___x_679_ = lean_nat_add(v___x_678_, v_numMinors_664_);
v___x_680_ = lean_array_get_size(v_refArgs_671_);
v___x_681_ = lean_nat_dec_lt(v___x_679_, v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; 
lean_dec(v___x_679_);
lean_dec(v___x_678_);
lean_dec_ref(v_refArgs_671_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
lean_dec(v_recName_668_);
lean_dec(v_tail_667_);
lean_dec(v_head_666_);
lean_dec(v_nParams_662_);
v___x_682_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__3);
v___x_683_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2(v___x_682_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
return v___x_683_;
}
else
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_684_ = lean_unsigned_to_nat(0u);
lean_inc(v_nParams_662_);
lean_inc_ref_n(v_refArgs_671_, 4);
v___x_685_ = l_Array_toSubarray___redArg(v_refArgs_671_, v___x_684_, v_nParams_662_);
v___x_686_ = l_Subarray_copy___redArg(v___x_685_);
lean_inc(v___x_678_);
v___x_687_ = l_Array_toSubarray___redArg(v_refArgs_671_, v_nParams_662_, v___x_678_);
v___x_688_ = l_Subarray_copy___redArg(v___x_687_);
lean_inc_n(v___x_679_, 2);
v___x_689_ = l_Array_toSubarray___redArg(v_refArgs_671_, v___x_678_, v___x_679_);
v___x_690_ = l_Subarray_copy___redArg(v___x_689_);
v___x_691_ = lean_unsigned_to_nat(1u);
v___x_692_ = lean_nat_sub(v___x_680_, v___x_691_);
lean_inc(v___x_692_);
v___x_693_ = l_Array_toSubarray___redArg(v_refArgs_671_, v___x_679_, v___x_692_);
v___x_694_ = l_Subarray_copy___redArg(v___x_693_);
v___x_695_ = lean_array_get(v___x_665_, v_refArgs_671_, v___x_692_);
lean_dec(v___x_692_);
lean_dec_ref(v_refArgs_671_);
lean_inc(v___y_676_);
lean_inc_ref(v___y_675_);
lean_inc(v___y_674_);
lean_inc_ref(v___y_673_);
lean_inc(v___x_695_);
v___x_696_ = lean_infer_type(v___x_695_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v_a_697_; lean_object* v___x_698_; 
v_a_697_ = lean_ctor_get(v___x_696_, 0);
lean_inc(v_a_697_);
lean_dec_ref_known(v___x_696_, 1);
lean_inc(v___y_676_);
lean_inc_ref(v___y_675_);
lean_inc(v___y_674_);
lean_inc_ref(v___y_673_);
v___x_698_ = lean_infer_type(v_a_697_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_700_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_a_699_);
lean_dec_ref_known(v___x_698_, 1);
v___x_700_ = l_Lean_Meta_typeFormerTypeLevel(v_a_699_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
if (lean_obj_tag(v_a_701_) == 1)
{
lean_object* v_val_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; size_t v_sz_708_; size_t v___x_709_; lean_object* v___x_710_; 
v_val_702_ = lean_ctor_get(v_a_701_, 0);
lean_inc(v_val_702_);
lean_dec_ref_known(v_a_701_, 1);
v___x_703_ = l_Lean_mkLevelMax(v_val_702_, v_head_666_);
lean_inc_n(v___x_703_, 2);
v___x_704_ = l_Lean_Level_succ___override(v___x_703_);
v___x_705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
lean_ctor_set(v___x_705_, 1, v_tail_667_);
v___x_706_ = l_Lean_Expr_const___override(v_recName_668_, v___x_705_);
v___x_707_ = l_Lean_mkAppN(v___x_706_, v___x_686_);
v_sz_708_ = lean_array_size(v___x_688_);
v___x_709_ = ((size_t)0ULL);
v___x_710_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__3(v___x_703_, v___x_679_, v___x_680_, v___x_688_, v_sz_708_, v___x_709_, v___x_707_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
lean_dec(v___x_679_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; size_t v_sz_712_; lean_object* v___x_713_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v_sz_712_ = lean_array_size(v___x_690_);
lean_inc_ref(v___x_688_);
lean_inc(v___x_703_);
v___x_713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__4(v___x_703_, v___x_688_, v___x_690_, v_sz_712_, v___x_709_, v_a_711_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
lean_dec_ref(v___x_690_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v_a_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; uint8_t v___x_723_; uint8_t v___x_724_; lean_object* v___x_725_; 
v_a_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc(v_a_714_);
lean_dec_ref_known(v___x_713_, 1);
v___x_715_ = l_Lean_mkAppN(v_a_714_, v___x_694_);
lean_inc(v___x_695_);
v___x_716_ = l_Lean_Expr_app___override(v___x_715_, v___x_695_);
v___x_717_ = l_Array_append___redArg(v___x_686_, v___x_688_);
lean_dec_ref(v___x_688_);
v___x_718_ = l_Array_append___redArg(v___x_717_, v___x_694_);
lean_dec_ref(v___x_694_);
v___x_719_ = lean_mk_empty_array_with_capacity(v___x_691_);
v___x_720_ = lean_array_push(v___x_719_, v___x_695_);
v___x_721_ = l_Array_append___redArg(v___x_718_, v___x_720_);
lean_dec_ref(v___x_720_);
v___x_722_ = l_Lean_Expr_sort___override(v___x_703_);
v___x_723_ = 0;
v___x_724_ = 1;
v___x_725_ = l_Lean_Meta_mkForallFVars(v___x_721_, v___x_722_, v___x_723_, v___x_681_, v___x_681_, v___x_724_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_727_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
v___x_727_ = l_Lean_Meta_mkLambdaFVars(v___x_721_, v___x_716_, v___x_723_, v___x_681_, v___x_723_, v___x_681_, v___x_724_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
lean_dec_ref(v___x_721_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_a_728_);
lean_dec_ref_known(v___x_727_, 1);
v___x_729_ = lean_box(1);
v___x_730_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_belowName_669_, v_levelParams_670_, v_a_726_, v_a_728_, v___x_729_, v___y_676_);
return v___x_730_;
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec(v_a_726_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
v_a_731_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_727_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_727_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec_ref(v___x_721_);
lean_dec_ref(v___x_716_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
v_a_739_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_725_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_725_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec(v___x_703_);
lean_dec(v___x_695_);
lean_dec_ref(v___x_694_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
v_a_747_ = lean_ctor_get(v___x_713_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_713_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_713_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
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
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
lean_dec(v___x_703_);
lean_dec(v___x_695_);
lean_dec_ref(v___x_694_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
v_a_755_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_710_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_710_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
else
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
lean_dec(v_a_701_);
lean_dec_ref(v___x_694_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec(v___x_679_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
lean_dec(v_recName_668_);
lean_dec(v_tail_667_);
lean_dec(v_head_666_);
v___x_763_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5);
v___x_764_ = l_Lean_MessageData_ofExpr(v___x_695_);
v___x_765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_763_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
v___x_766_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7);
v___x_767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_765_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_767_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
return v___x_768_;
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec(v___x_695_);
lean_dec_ref(v___x_694_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec(v___x_679_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
lean_dec(v_recName_668_);
lean_dec(v_tail_667_);
lean_dec(v_head_666_);
v_a_769_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_700_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_700_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec(v___x_695_);
lean_dec_ref(v___x_694_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec(v___x_679_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
lean_dec(v_recName_668_);
lean_dec(v_tail_667_);
lean_dec(v_head_666_);
v_a_777_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_698_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_698_);
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
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec(v___x_695_);
lean_dec_ref(v___x_694_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v___x_688_);
lean_dec_ref(v___x_686_);
lean_dec(v___x_679_);
lean_dec(v_levelParams_670_);
lean_dec(v_belowName_669_);
lean_dec(v_recName_668_);
lean_dec(v_tail_667_);
lean_dec(v_head_666_);
v_a_785_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_696_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_696_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___boxed(lean_object* v_nParams_793_, lean_object* v_numMotives_794_, lean_object* v_numMinors_795_, lean_object* v___x_796_, lean_object* v_head_797_, lean_object* v_tail_798_, lean_object* v_recName_799_, lean_object* v_belowName_800_, lean_object* v_levelParams_801_, lean_object* v_refArgs_802_, lean_object* v_x_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0(v_nParams_793_, v_numMotives_794_, v_numMinors_795_, v___x_796_, v_head_797_, v_tail_798_, v_recName_799_, v_belowName_800_, v_levelParams_801_, v_refArgs_802_, v_x_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec_ref(v_x_803_);
lean_dec_ref(v___x_796_);
lean_dec(v_numMinors_795_);
lean_dec(v_numMotives_794_);
return v_res_809_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_810_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0);
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg(){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__1);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___boxed(lean_object* v___dummy_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg();
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
if (lean_obj_tag(v_a_817_) == 0)
{
lean_object* v___x_819_; 
v___x_819_ = l_List_reverse___redArg(v_a_818_);
return v___x_819_;
}
else
{
lean_object* v_head_820_; lean_object* v_tail_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_830_; 
v_head_820_ = lean_ctor_get(v_a_817_, 0);
v_tail_821_ = lean_ctor_get(v_a_817_, 1);
v_isSharedCheck_830_ = !lean_is_exclusive(v_a_817_);
if (v_isSharedCheck_830_ == 0)
{
v___x_823_ = v_a_817_;
v_isShared_824_ = v_isSharedCheck_830_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_tail_821_);
lean_inc(v_head_820_);
lean_dec(v_a_817_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_830_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_825_ = l_Lean_Level_param___override(v_head_820_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v_a_818_);
lean_ctor_set(v___x_823_, 0, v___x_825_);
v___x_827_ = v___x_823_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_825_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v_a_818_);
v___x_827_ = v_reuseFailAlloc_829_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
v_a_817_ = v_tail_821_;
v_a_818_ = v___x_827_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
return v___x_834_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg();
return v___x_835_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_840_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
lean_ctor_set(v___x_840_, 2, v___x_838_);
return v___x_840_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_841_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__4);
v___x_842_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3);
v___x_843_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_844_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2);
v___x_845_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
lean_ctor_set(v___x_845_, 1, v___x_843_);
lean_ctor_set(v___x_845_, 2, v___x_842_);
lean_ctor_set(v___x_845_, 3, v___x_843_);
lean_ctor_set(v___x_845_, 4, v___x_843_);
lean_ctor_set(v___x_845_, 5, v___x_843_);
lean_ctor_set(v___x_845_, 6, v___x_843_);
lean_ctor_set(v___x_845_, 7, v___x_841_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(lean_object* v_declName_846_, uint8_t v_s_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
lean_object* v___x_851_; lean_object* v_env_852_; lean_object* v_nextMacroScope_853_; lean_object* v_ngen_854_; lean_object* v_auxDeclNGen_855_; lean_object* v_traceState_856_; lean_object* v_recordedDeps_857_; lean_object* v_messages_858_; lean_object* v_infoState_859_; lean_object* v_snapshotTasks_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_889_; 
v___x_851_ = lean_st_ref_take(v___y_849_);
v_env_852_ = lean_ctor_get(v___x_851_, 0);
v_nextMacroScope_853_ = lean_ctor_get(v___x_851_, 1);
v_ngen_854_ = lean_ctor_get(v___x_851_, 2);
v_auxDeclNGen_855_ = lean_ctor_get(v___x_851_, 3);
v_traceState_856_ = lean_ctor_get(v___x_851_, 4);
v_recordedDeps_857_ = lean_ctor_get(v___x_851_, 6);
v_messages_858_ = lean_ctor_get(v___x_851_, 7);
v_infoState_859_ = lean_ctor_get(v___x_851_, 8);
v_snapshotTasks_860_ = lean_ctor_get(v___x_851_, 9);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; 
v_unused_890_ = lean_ctor_get(v___x_851_, 5);
lean_dec(v_unused_890_);
v___x_862_ = v___x_851_;
v_isShared_863_ = v_isSharedCheck_889_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_snapshotTasks_860_);
lean_inc(v_infoState_859_);
lean_inc(v_messages_858_);
lean_inc(v_recordedDeps_857_);
lean_inc(v_traceState_856_);
lean_inc(v_auxDeclNGen_855_);
lean_inc(v_ngen_854_);
lean_inc(v_nextMacroScope_853_);
lean_inc(v_env_852_);
lean_dec(v___x_851_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_889_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
uint8_t v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_864_ = 0;
v___x_865_ = lean_box(0);
v___x_866_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_852_, v_declName_846_, v_s_847_, v___x_864_, v___x_865_);
v___x_867_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 5, v___x_867_);
lean_ctor_set(v___x_862_, 0, v___x_866_);
v___x_869_ = v___x_862_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_nextMacroScope_853_);
lean_ctor_set(v_reuseFailAlloc_888_, 2, v_ngen_854_);
lean_ctor_set(v_reuseFailAlloc_888_, 3, v_auxDeclNGen_855_);
lean_ctor_set(v_reuseFailAlloc_888_, 4, v_traceState_856_);
lean_ctor_set(v_reuseFailAlloc_888_, 5, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_888_, 6, v_recordedDeps_857_);
lean_ctor_set(v_reuseFailAlloc_888_, 7, v_messages_858_);
lean_ctor_set(v_reuseFailAlloc_888_, 8, v_infoState_859_);
lean_ctor_set(v_reuseFailAlloc_888_, 9, v_snapshotTasks_860_);
v___x_869_ = v_reuseFailAlloc_888_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v_mctx_872_; lean_object* v_zetaDeltaFVarIds_873_; lean_object* v_postponed_874_; lean_object* v_diag_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_886_; 
v___x_870_ = lean_st_ref_put(v___y_849_, v___x_869_);
v___x_871_ = lean_st_ref_take(v___y_848_);
v_mctx_872_ = lean_ctor_get(v___x_871_, 0);
v_zetaDeltaFVarIds_873_ = lean_ctor_get(v___x_871_, 2);
v_postponed_874_ = lean_ctor_get(v___x_871_, 3);
v_diag_875_ = lean_ctor_get(v___x_871_, 4);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; 
v_unused_887_ = lean_ctor_get(v___x_871_, 1);
lean_dec(v_unused_887_);
v___x_877_ = v___x_871_;
v_isShared_878_ = v_isSharedCheck_886_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_diag_875_);
lean_inc(v_postponed_874_);
lean_inc(v_zetaDeltaFVarIds_873_);
lean_inc(v_mctx_872_);
lean_dec(v___x_871_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_886_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_879_ = lean_box(0);
v___x_880_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 1, v___x_880_);
v___x_882_ = v___x_877_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_mctx_872_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v___x_880_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_zetaDeltaFVarIds_873_);
lean_ctor_set(v_reuseFailAlloc_885_, 3, v_postponed_874_);
lean_ctor_set(v_reuseFailAlloc_885_, 4, v_diag_875_);
v___x_882_ = v_reuseFailAlloc_885_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = lean_st_ref_put(v___y_848_, v___x_882_);
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_879_);
return v___x_884_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___boxed(lean_object* v_declName_891_, lean_object* v_s_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
uint8_t v_s_boxed_896_; lean_object* v_res_897_; 
v_s_boxed_896_ = lean_unbox(v_s_892_);
v_res_897_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(v_declName_891_, v_s_boxed_896_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec(v___y_893_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(lean_object* v_declName_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
uint8_t v___x_904_; lean_object* v___x_905_; 
v___x_904_ = 0;
v___x_905_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(v_declName_898_, v___x_904_, v___y_900_, v___y_902_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7___boxed(lean_object* v_declName_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_declName_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___redArg(lean_object* v_ref_913_, lean_object* v_msg_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v_toCold_920_; lean_object* v_currRecDepth_921_; lean_object* v_ref_922_; uint16_t v_optionFlags_923_; uint8_t v_suppressElabErrors_924_; uint8_t v_checkDeprecated_925_; uint8_t v_isRecordingDeps_926_; lean_object* v_ref_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v_toCold_920_ = lean_ctor_get(v___y_917_, 0);
v_currRecDepth_921_ = lean_ctor_get(v___y_917_, 1);
v_ref_922_ = lean_ctor_get(v___y_917_, 2);
v_optionFlags_923_ = lean_ctor_get_uint16(v___y_917_, sizeof(void*)*3);
v_suppressElabErrors_924_ = lean_ctor_get_uint8(v___y_917_, sizeof(void*)*3 + 2);
v_checkDeprecated_925_ = lean_ctor_get_uint8(v___y_917_, sizeof(void*)*3 + 3);
v_isRecordingDeps_926_ = lean_ctor_get_uint8(v___y_917_, sizeof(void*)*3 + 4);
v_ref_927_ = l_Lean_replaceRef(v_ref_913_, v_ref_922_);
lean_inc(v_currRecDepth_921_);
lean_inc_ref(v_toCold_920_);
v___x_928_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_928_, 0, v_toCold_920_);
lean_ctor_set(v___x_928_, 1, v_currRecDepth_921_);
lean_ctor_set(v___x_928_, 2, v_ref_927_);
lean_ctor_set_uint16(v___x_928_, sizeof(void*)*3, v_optionFlags_923_);
lean_ctor_set_uint8(v___x_928_, sizeof(void*)*3 + 2, v_suppressElabErrors_924_);
lean_ctor_set_uint8(v___x_928_, sizeof(void*)*3 + 3, v_checkDeprecated_925_);
lean_ctor_set_uint8(v___x_928_, sizeof(void*)*3 + 4, v_isRecordingDeps_926_);
v___x_929_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v_msg_914_, v___y_915_, v___y_916_, v___x_928_, v___y_918_);
lean_dec_ref_known(v___x_928_, 3);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___redArg___boxed(lean_object* v_ref_930_, lean_object* v_msg_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___redArg(v_ref_930_, v_msg_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v_ref_930_);
return v_res_937_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11___redArg___closed__0);
v___x_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
return v___x_939_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_940_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0);
v___x_941_ = lean_unsigned_to_nat(0u);
v___x_942_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
lean_ctor_set(v___x_942_, 2, v___x_941_);
lean_ctor_set(v___x_942_, 3, v___x_941_);
lean_ctor_set(v___x_942_, 4, v___x_940_);
lean_ctor_set(v___x_942_, 5, v___x_940_);
lean_ctor_set(v___x_942_, 6, v___x_940_);
lean_ctor_set(v___x_942_, 7, v___x_940_);
lean_ctor_set(v___x_942_, 8, v___x_940_);
lean_ctor_set(v___x_942_, 9, v___x_940_);
lean_ctor_set(v___x_942_, 10, v___x_940_);
return v___x_942_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__2(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_943_ = lean_unsigned_to_nat(32u);
v___x_944_ = lean_mk_empty_array_with_capacity(v___x_943_);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__3(void){
_start:
{
size_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_946_ = ((size_t)5ULL);
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_unsigned_to_nat(32u);
v___x_949_ = lean_mk_empty_array_with_capacity(v___x_948_);
v___x_950_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__2);
v___x_951_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_951_, 0, v___x_950_);
lean_ctor_set(v___x_951_, 1, v___x_949_);
lean_ctor_set(v___x_951_, 2, v___x_947_);
lean_ctor_set(v___x_951_, 3, v___x_947_);
lean_ctor_set_usize(v___x_951_, 4, v___x_946_);
return v___x_951_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__4(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_952_ = lean_box(1);
v___x_953_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__3);
v___x_954_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__0);
v___x_955_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
lean_ctor_set(v___x_955_, 1, v___x_953_);
lean_ctor_set(v___x_955_, 2, v___x_952_);
return v___x_955_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__5));
v___x_958_ = l_Lean_stringToMessageData(v___x_957_);
return v___x_958_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__8(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__7));
v___x_961_ = l_Lean_stringToMessageData(v___x_960_);
return v___x_961_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__10(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__9));
v___x_964_ = l_Lean_stringToMessageData(v___x_963_);
return v___x_964_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__12(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__11));
v___x_967_ = l_Lean_stringToMessageData(v___x_966_);
return v___x_967_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__14(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__13));
v___x_970_ = l_Lean_stringToMessageData(v___x_969_);
return v___x_970_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__16(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__15));
v___x_973_ = l_Lean_stringToMessageData(v___x_972_);
return v___x_973_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__18(void){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__17));
v___x_976_ = l_Lean_stringToMessageData(v___x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg(lean_object* v_msg_977_, lean_object* v_declHint_978_, lean_object* v___y_979_){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v_env_983_; uint8_t v___x_984_; 
v___x_981_ = lean_box(0);
v___x_982_ = lean_st_ref_get(v___y_979_);
v_env_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc_ref(v_env_983_);
lean_dec(v___x_982_);
v___x_984_ = l_Lean_Name_isAnonymous(v_declHint_978_);
if (v___x_984_ == 0)
{
uint8_t v_isExporting_985_; 
v_isExporting_985_ = lean_ctor_get_uint8(v_env_983_, sizeof(void*)*13);
if (v_isExporting_985_ == 0)
{
lean_object* v___x_986_; 
lean_dec_ref(v_env_983_);
lean_dec(v_declHint_978_);
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v_msg_977_);
return v___x_986_;
}
else
{
lean_object* v___x_987_; uint8_t v___x_988_; 
lean_inc_ref(v_env_983_);
v___x_987_ = l_Lean_Environment_setExporting(v_env_983_, v___x_984_);
lean_inc(v_declHint_978_);
lean_inc_ref(v___x_987_);
v___x_988_ = l_Lean_Environment_contains(v___x_987_, v_declHint_978_, v_isExporting_985_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
lean_dec_ref(v___x_987_);
lean_dec_ref(v_env_983_);
lean_dec(v_declHint_978_);
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v_msg_977_);
return v___x_989_;
}
else
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v_c_995_; lean_object* v___x_996_; 
v___x_990_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__1);
v___x_991_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__4);
v___x_992_ = l_Lean_Options_empty;
lean_inc_ref(v___x_987_);
v___x_993_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_993_, 0, v___x_987_);
lean_ctor_set(v___x_993_, 1, v___x_990_);
lean_ctor_set(v___x_993_, 2, v___x_991_);
lean_ctor_set(v___x_993_, 3, v___x_992_);
lean_inc(v_declHint_978_);
v___x_994_ = l_Lean_MessageData_ofConstName(v_declHint_978_, v___x_984_);
v_c_995_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_995_, 0, v___x_993_);
lean_ctor_set(v_c_995_, 1, v___x_994_);
v___x_996_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_987_, v_declHint_978_);
lean_dec_ref(v___x_987_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
lean_dec_ref(v_env_983_);
lean_dec(v_declHint_978_);
v___x_997_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6);
v___x_998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
lean_ctor_set(v___x_998_, 1, v_c_995_);
v___x_999_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__8);
v___x_1000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = l_Lean_MessageData_note(v___x_1000_);
v___x_1002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1002_, 0, v_msg_977_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
return v___x_1003_;
}
else
{
lean_object* v_val_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1038_; 
v_val_1004_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1006_ = v___x_996_;
v_isShared_1007_ = v_isSharedCheck_1038_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_val_1004_);
lean_dec(v___x_996_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1038_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v_moduleNames_1009_; lean_object* v_mod_1010_; uint8_t v___x_1011_; 
v___x_1008_ = l_Lean_Environment_header(v_env_983_);
lean_dec_ref(v_env_983_);
v_moduleNames_1009_ = lean_ctor_get(v___x_1008_, 4);
lean_inc_ref(v_moduleNames_1009_);
lean_dec_ref(v___x_1008_);
v_mod_1010_ = lean_array_get(v___x_981_, v_moduleNames_1009_, v_val_1004_);
lean_dec(v_val_1004_);
lean_dec_ref(v_moduleNames_1009_);
v___x_1011_ = l_Lean_isPrivateName(v_declHint_978_);
lean_dec(v_declHint_978_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1023_; 
v___x_1012_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__10);
v___x_1013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
lean_ctor_set(v___x_1013_, 1, v_c_995_);
v___x_1014_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__12);
v___x_1015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = l_Lean_MessageData_ofName(v_mod_1010_);
v___x_1017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
v___x_1018_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__14);
v___x_1019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1017_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = l_Lean_MessageData_note(v___x_1019_);
v___x_1021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1021_, 0, v_msg_977_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set_tag(v___x_1006_, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1021_);
v___x_1023_ = v___x_1006_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
else
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1025_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__6);
v___x_1026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
lean_ctor_set(v___x_1026_, 1, v_c_995_);
v___x_1027_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__16);
v___x_1028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1026_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = l_Lean_MessageData_ofName(v_mod_1010_);
v___x_1030_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1028_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___closed__18);
v___x_1032_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = l_Lean_MessageData_note(v___x_1032_);
v___x_1034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_msg_977_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set_tag(v___x_1006_, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1034_);
v___x_1036_ = v___x_1006_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1039_; 
lean_dec_ref(v_env_983_);
lean_dec(v_declHint_978_);
v___x_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_msg_977_);
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg___boxed(lean_object* v_msg_1040_, lean_object* v_declHint_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg(v_msg_1040_, v_declHint_1041_, v___y_1042_);
lean_dec(v___y_1042_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14(lean_object* v_msg_1045_, lean_object* v_declHint_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___x_1052_; lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1062_; 
v___x_1052_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg(v_msg_1045_, v_declHint_1046_, v___y_1050_);
v_a_1053_ = lean_ctor_get(v___x_1052_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1055_ = v___x_1052_;
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1052_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1057_ = l_Lean_unknownIdentifierMessageTag;
v___x_1058_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v_a_1053_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1058_);
v___x_1060_ = v___x_1055_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14___boxed(lean_object* v_msg_1063_, lean_object* v_declHint_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14(v_msg_1063_, v_declHint_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___redArg(lean_object* v_ref_1071_, lean_object* v_msg_1072_, lean_object* v_declHint_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v___x_1079_; lean_object* v_a_1080_; lean_object* v___x_1081_; 
v___x_1079_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14(v_msg_1072_, v_declHint_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref(v___x_1079_);
v___x_1081_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___redArg(v_ref_1071_, v_a_1080_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___redArg___boxed(lean_object* v_ref_1082_, lean_object* v_msg_1083_, lean_object* v_declHint_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___redArg(v_ref_1082_, v_msg_1083_, v_declHint_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v_ref_1082_);
return v_res_1090_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__0));
v___x_1093_ = l_Lean_stringToMessageData(v___x_1092_);
return v___x_1093_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__2));
v___x_1096_ = l_Lean_stringToMessageData(v___x_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(lean_object* v_ref_1097_, lean_object* v_constName_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v___x_1104_; uint8_t v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1104_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__1);
v___x_1105_ = 0;
lean_inc(v_constName_1098_);
v___x_1106_ = l_Lean_MessageData_ofConstName(v_constName_1098_, v___x_1105_);
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1104_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___closed__3);
v___x_1109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___redArg(v_ref_1097_, v___x_1109_, v_constName_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_ref_1111_, lean_object* v_constName_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(v_ref_1111_, v_constName_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v___y_1113_);
lean_dec(v_ref_1111_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(lean_object* v_constName_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v_ref_1125_; lean_object* v___x_1126_; 
v_ref_1125_ = lean_ctor_get(v___y_1122_, 2);
v___x_1126_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(v_ref_1125_, v_constName_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(v_constName_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(lean_object* v_constName_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v___x_1140_; lean_object* v_env_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; 
v___x_1140_ = lean_st_ref_get(v___y_1138_);
v_env_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc_ref(v_env_1141_);
lean_dec(v___x_1140_);
v___x_1142_ = 0;
lean_inc(v_constName_1134_);
v___x_1143_ = l_Lean_Environment_find_x3f(v_env_1141_, v_constName_1134_, v___x_1142_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(v_constName_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
return v___x_1144_;
}
else
{
lean_object* v_val_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec(v_constName_1134_);
v_val_1145_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1143_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_val_1145_);
lean_dec(v___x_1143_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
lean_ctor_set_tag(v___x_1147_, 0);
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_val_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0___boxed(lean_object* v_constName_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_constName_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
return v_res_1159_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__0));
v___x_1162_ = l_Lean_stringToMessageData(v___x_1161_);
return v___x_1162_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3(void){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__2));
v___x_1165_ = l_Lean_stringToMessageData(v___x_1164_);
return v___x_1165_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__4));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(lean_object* v_recName_1169_, lean_object* v_nParams_1170_, lean_object* v_belowName_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = l_Lean_instInhabitedExpr;
lean_inc(v_recName_1169_);
v___x_1178_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_recName_1169_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1179_);
lean_dec_ref_known(v___x_1178_, 1);
if (lean_obj_tag(v_a_1179_) == 7)
{
lean_object* v_val_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1297_; 
v_val_1180_ = lean_ctor_get(v_a_1179_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_a_1179_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1182_ = v_a_1179_;
v_isShared_1183_ = v_isSharedCheck_1297_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_val_1180_);
lean_dec(v_a_1179_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1297_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v_toConstantVal_1184_; lean_object* v_numMotives_1185_; lean_object* v_numMinors_1186_; lean_object* v_levelParams_1187_; lean_object* v_type_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v_toConstantVal_1184_ = lean_ctor_get(v_val_1180_, 0);
lean_inc_ref(v_toConstantVal_1184_);
v_numMotives_1185_ = lean_ctor_get(v_val_1180_, 4);
lean_inc(v_numMotives_1185_);
v_numMinors_1186_ = lean_ctor_get(v_val_1180_, 5);
lean_inc(v_numMinors_1186_);
lean_dec_ref(v_val_1180_);
v_levelParams_1187_ = lean_ctor_get(v_toConstantVal_1184_, 1);
lean_inc_n(v_levelParams_1187_, 2);
v_type_1188_ = lean_ctor_get(v_toConstantVal_1184_, 2);
lean_inc_ref(v_type_1188_);
lean_dec_ref(v_toConstantVal_1184_);
v___x_1189_ = lean_box(0);
v___x_1190_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(v_levelParams_1187_, v___x_1189_);
if (lean_obj_tag(v___x_1190_) == 1)
{
lean_object* v_head_1191_; lean_object* v_tail_1192_; lean_object* v___f_1193_; uint8_t v___x_1194_; lean_object* v___x_1195_; 
v_head_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_head_1191_);
v_tail_1192_ = lean_ctor_get(v___x_1190_, 1);
lean_inc(v_tail_1192_);
lean_dec_ref_known(v___x_1190_, 2);
v___f_1193_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___boxed), 16, 9);
lean_closure_set(v___f_1193_, 0, v_nParams_1170_);
lean_closure_set(v___f_1193_, 1, v_numMotives_1185_);
lean_closure_set(v___f_1193_, 2, v_numMinors_1186_);
lean_closure_set(v___f_1193_, 3, v___x_1177_);
lean_closure_set(v___f_1193_, 4, v_head_1191_);
lean_closure_set(v___f_1193_, 5, v_tail_1192_);
lean_closure_set(v___f_1193_, 6, v_recName_1169_);
lean_closure_set(v___f_1193_, 7, v_belowName_1171_);
lean_closure_set(v___f_1193_, 8, v_levelParams_1187_);
v___x_1194_ = 0;
v___x_1195_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_1188_, v___f_1193_, v___x_1194_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1198_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc_n(v_a_1196_, 2);
lean_dec_ref_known(v___x_1195_, 1);
if (v_isShared_1183_ == 0)
{
lean_ctor_set_tag(v___x_1182_, 1);
lean_ctor_set(v___x_1182_, 0, v_a_1196_);
v___x_1198_ = v___x_1182_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1196_);
v___x_1198_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_addDecl(v___x_1198_, v___x_1194_, v_a_1174_, v_a_1175_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_toConstantVal_1200_; lean_object* v_name_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1280_; 
lean_dec_ref_known(v___x_1199_, 1);
v_toConstantVal_1200_ = lean_ctor_get(v_a_1196_, 0);
lean_inc_ref(v_toConstantVal_1200_);
lean_dec(v_a_1196_);
v_name_1201_ = lean_ctor_get(v_toConstantVal_1200_, 0);
lean_inc_n(v_name_1201_, 2);
lean_dec_ref(v_toConstantVal_1200_);
v___x_1202_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_name_1201_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1280_ == 0)
{
lean_object* v_unused_1281_; 
v_unused_1281_ = lean_ctor_get(v___x_1202_, 0);
lean_dec(v_unused_1281_);
v___x_1204_ = v___x_1202_;
v_isShared_1205_ = v_isSharedCheck_1280_;
goto v_resetjp_1203_;
}
else
{
lean_dec(v___x_1202_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1280_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1206_; lean_object* v_env_1207_; lean_object* v_nextMacroScope_1208_; lean_object* v_ngen_1209_; lean_object* v_auxDeclNGen_1210_; lean_object* v_traceState_1211_; lean_object* v_recordedDeps_1212_; lean_object* v_messages_1213_; lean_object* v_infoState_1214_; lean_object* v_snapshotTasks_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1278_; 
v___x_1206_ = lean_st_ref_take(v_a_1175_);
v_env_1207_ = lean_ctor_get(v___x_1206_, 0);
v_nextMacroScope_1208_ = lean_ctor_get(v___x_1206_, 1);
v_ngen_1209_ = lean_ctor_get(v___x_1206_, 2);
v_auxDeclNGen_1210_ = lean_ctor_get(v___x_1206_, 3);
v_traceState_1211_ = lean_ctor_get(v___x_1206_, 4);
v_recordedDeps_1212_ = lean_ctor_get(v___x_1206_, 6);
v_messages_1213_ = lean_ctor_get(v___x_1206_, 7);
v_infoState_1214_ = lean_ctor_get(v___x_1206_, 8);
v_snapshotTasks_1215_ = lean_ctor_get(v___x_1206_, 9);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1278_ == 0)
{
lean_object* v_unused_1279_; 
v_unused_1279_ = lean_ctor_get(v___x_1206_, 5);
lean_dec(v_unused_1279_);
v___x_1217_ = v___x_1206_;
v_isShared_1218_ = v_isSharedCheck_1278_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_snapshotTasks_1215_);
lean_inc(v_infoState_1214_);
lean_inc(v_messages_1213_);
lean_inc(v_recordedDeps_1212_);
lean_inc(v_traceState_1211_);
lean_inc(v_auxDeclNGen_1210_);
lean_inc(v_ngen_1209_);
lean_inc(v_nextMacroScope_1208_);
lean_inc(v_env_1207_);
lean_dec(v___x_1206_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1278_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
lean_inc(v_name_1201_);
v___x_1219_ = l_Lean_markAuxRecursor(v_env_1207_, v_name_1201_);
v___x_1220_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 5, v___x_1220_);
lean_ctor_set(v___x_1217_, 0, v___x_1219_);
v___x_1222_ = v___x_1217_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1219_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_nextMacroScope_1208_);
lean_ctor_set(v_reuseFailAlloc_1277_, 2, v_ngen_1209_);
lean_ctor_set(v_reuseFailAlloc_1277_, 3, v_auxDeclNGen_1210_);
lean_ctor_set(v_reuseFailAlloc_1277_, 4, v_traceState_1211_);
lean_ctor_set(v_reuseFailAlloc_1277_, 5, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1277_, 6, v_recordedDeps_1212_);
lean_ctor_set(v_reuseFailAlloc_1277_, 7, v_messages_1213_);
lean_ctor_set(v_reuseFailAlloc_1277_, 8, v_infoState_1214_);
lean_ctor_set(v_reuseFailAlloc_1277_, 9, v_snapshotTasks_1215_);
v___x_1222_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v_mctx_1225_; lean_object* v_zetaDeltaFVarIds_1226_; lean_object* v_postponed_1227_; lean_object* v_diag_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1275_; 
v___x_1223_ = lean_st_ref_put(v_a_1175_, v___x_1222_);
v___x_1224_ = lean_st_ref_take(v_a_1173_);
v_mctx_1225_ = lean_ctor_get(v___x_1224_, 0);
v_zetaDeltaFVarIds_1226_ = lean_ctor_get(v___x_1224_, 2);
v_postponed_1227_ = lean_ctor_get(v___x_1224_, 3);
v_diag_1228_ = lean_ctor_get(v___x_1224_, 4);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1275_ == 0)
{
lean_object* v_unused_1276_; 
v_unused_1276_ = lean_ctor_get(v___x_1224_, 1);
lean_dec(v_unused_1276_);
v___x_1230_ = v___x_1224_;
v_isShared_1231_ = v_isSharedCheck_1275_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_diag_1228_);
lean_inc(v_postponed_1227_);
lean_inc(v_zetaDeltaFVarIds_1226_);
lean_inc(v_mctx_1225_);
lean_dec(v___x_1224_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1275_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; lean_object* v___x_1234_; 
v___x_1232_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__5);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 1, v___x_1232_);
v___x_1234_ = v___x_1230_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_mctx_1225_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1274_, 2, v_zetaDeltaFVarIds_1226_);
lean_ctor_set(v_reuseFailAlloc_1274_, 3, v_postponed_1227_);
lean_ctor_set(v_reuseFailAlloc_1274_, 4, v_diag_1228_);
v___x_1234_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v_env_1237_; lean_object* v_nextMacroScope_1238_; lean_object* v_ngen_1239_; lean_object* v_auxDeclNGen_1240_; lean_object* v_traceState_1241_; lean_object* v_recordedDeps_1242_; lean_object* v_messages_1243_; lean_object* v_infoState_1244_; lean_object* v_snapshotTasks_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1272_; 
v___x_1235_ = lean_st_ref_put(v_a_1173_, v___x_1234_);
v___x_1236_ = lean_st_ref_take(v_a_1175_);
v_env_1237_ = lean_ctor_get(v___x_1236_, 0);
v_nextMacroScope_1238_ = lean_ctor_get(v___x_1236_, 1);
v_ngen_1239_ = lean_ctor_get(v___x_1236_, 2);
v_auxDeclNGen_1240_ = lean_ctor_get(v___x_1236_, 3);
v_traceState_1241_ = lean_ctor_get(v___x_1236_, 4);
v_recordedDeps_1242_ = lean_ctor_get(v___x_1236_, 6);
v_messages_1243_ = lean_ctor_get(v___x_1236_, 7);
v_infoState_1244_ = lean_ctor_get(v___x_1236_, 8);
v_snapshotTasks_1245_ = lean_ctor_get(v___x_1236_, 9);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1272_ == 0)
{
lean_object* v_unused_1273_; 
v_unused_1273_ = lean_ctor_get(v___x_1236_, 5);
lean_dec(v_unused_1273_);
v___x_1247_ = v___x_1236_;
v_isShared_1248_ = v_isSharedCheck_1272_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_snapshotTasks_1245_);
lean_inc(v_infoState_1244_);
lean_inc(v_messages_1243_);
lean_inc(v_recordedDeps_1242_);
lean_inc(v_traceState_1241_);
lean_inc(v_auxDeclNGen_1240_);
lean_inc(v_ngen_1239_);
lean_inc(v_nextMacroScope_1238_);
lean_inc(v_env_1237_);
lean_dec(v___x_1236_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1272_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1249_; lean_object* v___x_1251_; 
v___x_1249_ = l_Lean_addProtected(v_env_1237_, v_name_1201_);
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 5, v___x_1220_);
lean_ctor_set(v___x_1247_, 0, v___x_1249_);
v___x_1251_ = v___x_1247_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1249_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v_nextMacroScope_1238_);
lean_ctor_set(v_reuseFailAlloc_1271_, 2, v_ngen_1239_);
lean_ctor_set(v_reuseFailAlloc_1271_, 3, v_auxDeclNGen_1240_);
lean_ctor_set(v_reuseFailAlloc_1271_, 4, v_traceState_1241_);
lean_ctor_set(v_reuseFailAlloc_1271_, 5, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1271_, 6, v_recordedDeps_1242_);
lean_ctor_set(v_reuseFailAlloc_1271_, 7, v_messages_1243_);
lean_ctor_set(v_reuseFailAlloc_1271_, 8, v_infoState_1244_);
lean_ctor_set(v_reuseFailAlloc_1271_, 9, v_snapshotTasks_1245_);
v___x_1251_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v_mctx_1254_; lean_object* v_zetaDeltaFVarIds_1255_; lean_object* v_postponed_1256_; lean_object* v_diag_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1269_; 
v___x_1252_ = lean_st_ref_put(v_a_1175_, v___x_1251_);
v___x_1253_ = lean_st_ref_take(v_a_1173_);
v_mctx_1254_ = lean_ctor_get(v___x_1253_, 0);
v_zetaDeltaFVarIds_1255_ = lean_ctor_get(v___x_1253_, 2);
v_postponed_1256_ = lean_ctor_get(v___x_1253_, 3);
v_diag_1257_ = lean_ctor_get(v___x_1253_, 4);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1269_ == 0)
{
lean_object* v_unused_1270_; 
v_unused_1270_ = lean_ctor_get(v___x_1253_, 1);
lean_dec(v_unused_1270_);
v___x_1259_ = v___x_1253_;
v_isShared_1260_ = v_isSharedCheck_1269_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_diag_1257_);
lean_inc(v_postponed_1256_);
lean_inc(v_zetaDeltaFVarIds_1255_);
lean_inc(v_mctx_1254_);
lean_dec(v___x_1253_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1269_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1261_ = lean_box(0);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 1, v___x_1232_);
v___x_1263_ = v___x_1259_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_mctx_1254_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v___x_1232_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_zetaDeltaFVarIds_1255_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v_postponed_1256_);
lean_ctor_set(v_reuseFailAlloc_1268_, 4, v_diag_1257_);
v___x_1263_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1264_ = lean_st_ref_put(v_a_1173_, v___x_1263_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1261_);
v___x_1266_ = v___x_1204_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1261_);
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
}
}
}
}
}
}
else
{
lean_dec(v_a_1196_);
return v___x_1199_;
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
lean_del_object(v___x_1182_);
v_a_1283_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1195_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1195_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
lean_dec(v___x_1190_);
lean_dec_ref(v_type_1188_);
lean_dec(v_levelParams_1187_);
lean_dec(v_numMinors_1186_);
lean_dec(v_numMotives_1185_);
lean_del_object(v___x_1182_);
lean_dec(v_belowName_1171_);
lean_dec(v_nParams_1170_);
v___x_1291_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1);
v___x_1292_ = l_Lean_MessageData_ofName(v_recName_1169_);
v___x_1293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1291_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
v___x_1294_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3);
v___x_1295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1293_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_1295_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
return v___x_1296_;
}
}
}
else
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_dec(v_a_1179_);
lean_dec(v_belowName_1171_);
lean_dec(v_nParams_1170_);
v___x_1298_ = l_Lean_MessageData_ofName(v_recName_1169_);
v___x_1299_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__5);
v___x_1300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1298_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_1300_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
return v___x_1301_;
}
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec(v_belowName_1171_);
lean_dec(v_nParams_1170_);
lean_dec(v_recName_1169_);
v_a_1302_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1178_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1178_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___boxed(lean_object* v_recName_1310_, lean_object* v_nParams_1311_, lean_object* v_belowName_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v_recName_1310_, v_nParams_1311_, v_belowName_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
lean_dec(v_a_1316_);
lean_dec_ref(v_a_1315_);
lean_dec(v_a_1314_);
lean_dec_ref(v_a_1313_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6(lean_object* v_00_u03b1_1319_, lean_object* v_msg_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v_msg_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___boxed(lean_object* v_00_u03b1_1327_, lean_object* v_msg_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6(v_00_u03b1_1327_, v_msg_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8_spec__11(lean_object* v_00_u03b2_1335_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8___redArg(){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8___redArg___boxed(lean_object* v___dummy_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8___redArg();
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__8(lean_object* v_00_u03b2_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0(lean_object* v_00_u03b1_1343_, lean_object* v_constName_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___redArg(v_constName_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1351_, lean_object* v_constName_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0(v_00_u03b1_1351_, v_constName_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9(lean_object* v_declName_1359_, uint8_t v_s_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; 
v___x_1366_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg(v_declName_1359_, v_s_1360_, v___y_1362_, v___y_1364_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___boxed(lean_object* v_declName_1367_, lean_object* v_s_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
uint8_t v_s_boxed_1374_; lean_object* v_res_1375_; 
v_s_boxed_1374_ = lean_unbox(v_s_1368_);
v_res_1375_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9(v_declName_1367_, v_s_boxed_1374_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
return v_res_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_1376_, lean_object* v_ref_1377_, lean_object* v_constName_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___redArg(v_ref_1377_, v_constName_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_1385_, lean_object* v_ref_1386_, lean_object* v_constName_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3(v_00_u03b1_1385_, v_ref_1386_, v_constName_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v_ref_1386_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12(lean_object* v_00_u03b1_1394_, lean_object* v_ref_1395_, lean_object* v_msg_1396_, lean_object* v_declHint_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___redArg(v_ref_1395_, v_msg_1396_, v_declHint_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12___boxed(lean_object* v_00_u03b1_1404_, lean_object* v_ref_1405_, lean_object* v_msg_1406_, lean_object* v_declHint_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12(v_00_u03b1_1404_, v_ref_1405_, v_msg_1406_, v_declHint_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v_ref_1405_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15(lean_object* v_msg_1414_, lean_object* v_declHint_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___redArg(v_msg_1414_, v_declHint_1415_, v___y_1419_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15___boxed(lean_object* v_msg_1422_, lean_object* v_declHint_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__14_spec__15(v_msg_1422_, v_declHint_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1425_);
lean_dec_ref(v___y_1424_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15(lean_object* v_00_u03b1_1430_, lean_object* v_ref_1431_, lean_object* v_msg_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___redArg(v_ref_1431_, v_msg_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15___boxed(lean_object* v_00_u03b1_1439_, lean_object* v_ref_1440_, lean_object* v_msg_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0_spec__0_spec__3_spec__12_spec__15(v_00_u03b1_1439_, v_ref_1440_, v_msg_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v_ref_1440_);
return v_res_1447_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1448_ = lean_unsigned_to_nat(32u);
v___x_1449_ = lean_mk_empty_array_with_capacity(v___x_1448_);
v___x_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
return v___x_1450_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1451_ = ((size_t)5ULL);
v___x_1452_ = lean_unsigned_to_nat(0u);
v___x_1453_ = lean_unsigned_to_nat(32u);
v___x_1454_ = lean_mk_empty_array_with_capacity(v___x_1453_);
v___x_1455_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__0);
v___x_1456_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
lean_ctor_set(v___x_1456_, 1, v___x_1454_);
lean_ctor_set(v___x_1456_, 2, v___x_1452_);
lean_ctor_set(v___x_1456_, 3, v___x_1452_);
lean_ctor_set_usize(v___x_1456_, 4, v___x_1451_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(lean_object* v___y_1457_){
_start:
{
lean_object* v___x_1459_; lean_object* v_traceState_1460_; lean_object* v_traces_1461_; lean_object* v___x_1462_; lean_object* v_traceState_1463_; lean_object* v_env_1464_; lean_object* v_nextMacroScope_1465_; lean_object* v_ngen_1466_; lean_object* v_auxDeclNGen_1467_; lean_object* v_cache_1468_; lean_object* v_recordedDeps_1469_; lean_object* v_messages_1470_; lean_object* v_infoState_1471_; lean_object* v_snapshotTasks_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1491_; 
v___x_1459_ = lean_st_ref_get(v___y_1457_);
v_traceState_1460_ = lean_ctor_get(v___x_1459_, 4);
lean_inc_ref(v_traceState_1460_);
lean_dec(v___x_1459_);
v_traces_1461_ = lean_ctor_get(v_traceState_1460_, 0);
lean_inc_ref(v_traces_1461_);
lean_dec_ref(v_traceState_1460_);
v___x_1462_ = lean_st_ref_take(v___y_1457_);
v_traceState_1463_ = lean_ctor_get(v___x_1462_, 4);
v_env_1464_ = lean_ctor_get(v___x_1462_, 0);
v_nextMacroScope_1465_ = lean_ctor_get(v___x_1462_, 1);
v_ngen_1466_ = lean_ctor_get(v___x_1462_, 2);
v_auxDeclNGen_1467_ = lean_ctor_get(v___x_1462_, 3);
v_cache_1468_ = lean_ctor_get(v___x_1462_, 5);
v_recordedDeps_1469_ = lean_ctor_get(v___x_1462_, 6);
v_messages_1470_ = lean_ctor_get(v___x_1462_, 7);
v_infoState_1471_ = lean_ctor_get(v___x_1462_, 8);
v_snapshotTasks_1472_ = lean_ctor_get(v___x_1462_, 9);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1474_ = v___x_1462_;
v_isShared_1475_ = v_isSharedCheck_1491_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_snapshotTasks_1472_);
lean_inc(v_infoState_1471_);
lean_inc(v_messages_1470_);
lean_inc(v_recordedDeps_1469_);
lean_inc(v_cache_1468_);
lean_inc(v_traceState_1463_);
lean_inc(v_auxDeclNGen_1467_);
lean_inc(v_ngen_1466_);
lean_inc(v_nextMacroScope_1465_);
lean_inc(v_env_1464_);
lean_dec(v___x_1462_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1491_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
uint64_t v_tid_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1489_; 
v_tid_1476_ = lean_ctor_get_uint64(v_traceState_1463_, sizeof(void*)*1);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_traceState_1463_);
if (v_isSharedCheck_1489_ == 0)
{
lean_object* v_unused_1490_; 
v_unused_1490_ = lean_ctor_get(v_traceState_1463_, 0);
lean_dec(v_unused_1490_);
v___x_1478_ = v_traceState_1463_;
v_isShared_1479_ = v_isSharedCheck_1489_;
goto v_resetjp_1477_;
}
else
{
lean_dec(v_traceState_1463_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1489_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1480_; lean_object* v___x_1482_; 
v___x_1480_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___closed__1);
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 0, v___x_1480_);
v___x_1482_ = v___x_1478_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1480_);
lean_ctor_set_uint64(v_reuseFailAlloc_1488_, sizeof(void*)*1, v_tid_1476_);
v___x_1482_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
lean_object* v___x_1484_; 
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 4, v___x_1482_);
v___x_1484_ = v___x_1474_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_env_1464_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_nextMacroScope_1465_);
lean_ctor_set(v_reuseFailAlloc_1487_, 2, v_ngen_1466_);
lean_ctor_set(v_reuseFailAlloc_1487_, 3, v_auxDeclNGen_1467_);
lean_ctor_set(v_reuseFailAlloc_1487_, 4, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1487_, 5, v_cache_1468_);
lean_ctor_set(v_reuseFailAlloc_1487_, 6, v_recordedDeps_1469_);
lean_ctor_set(v_reuseFailAlloc_1487_, 7, v_messages_1470_);
lean_ctor_set(v_reuseFailAlloc_1487_, 8, v_infoState_1471_);
lean_ctor_set(v_reuseFailAlloc_1487_, 9, v_snapshotTasks_1472_);
v___x_1484_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = lean_st_ref_put(v___y_1457_, v___x_1484_);
v___x_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1486_, 0, v_traces_1461_);
return v___x_1486_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg___boxed(lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v___y_1492_);
lean_dec(v___y_1492_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1(lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v___y_1498_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___boxed(lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1(v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
return v_res_1506_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_mkBelow_spec__2(lean_object* v_opts_1507_, lean_object* v_opt_1508_){
_start:
{
lean_object* v_name_1509_; lean_object* v_defValue_1510_; lean_object* v_map_1511_; lean_object* v___x_1512_; 
v_name_1509_ = lean_ctor_get(v_opt_1508_, 0);
v_defValue_1510_ = lean_ctor_get(v_opt_1508_, 1);
v_map_1511_ = lean_ctor_get(v_opts_1507_, 0);
v___x_1512_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1511_, v_name_1509_);
if (lean_obj_tag(v___x_1512_) == 0)
{
uint8_t v___x_1513_; 
v___x_1513_ = lean_unbox(v_defValue_1510_);
return v___x_1513_;
}
else
{
lean_object* v_val_1514_; 
v_val_1514_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_val_1514_);
lean_dec_ref_known(v___x_1512_, 1);
if (lean_obj_tag(v_val_1514_) == 1)
{
uint8_t v_v_1515_; 
v_v_1515_ = lean_ctor_get_uint8(v_val_1514_, 0);
lean_dec_ref_known(v_val_1514_, 0);
return v_v_1515_;
}
else
{
uint8_t v___x_1516_; 
lean_dec(v_val_1514_);
v___x_1516_ = lean_unbox(v_defValue_1510_);
return v___x_1516_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_mkBelow_spec__2___boxed(lean_object* v_opts_1517_, lean_object* v_opt_1518_){
_start:
{
uint8_t v_res_1519_; lean_object* v_r_1520_; 
v_res_1519_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_opts_1517_, v_opt_1518_);
lean_dec_ref(v_opt_1518_);
lean_dec_ref(v_opts_1517_);
v_r_1520_ = lean_box(v_res_1519_);
return v_r_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0(lean_object* v_indName_1521_, lean_object* v_x_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1528_ = l_Lean_MessageData_ofName(v_indName_1521_);
v___x_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__0___boxed(lean_object* v_indName_1530_, lean_object* v_x_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Lean_mkBelow___lam__0(v_indName_1530_, v_x_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec_ref(v_x_1531_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__1(lean_object* v_00___1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = lean_box(0);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___lam__1___boxed(lean_object* v_00___1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lean_mkBelow___lam__1(v_00___1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
return v_res_1552_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(lean_object* v_e_1553_){
_start:
{
if (lean_obj_tag(v_e_1553_) == 0)
{
uint8_t v___x_1554_; 
v___x_1554_ = 2;
return v___x_1554_;
}
else
{
uint8_t v___x_1555_; 
v___x_1555_ = 0;
return v___x_1555_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5___boxed(lean_object* v_e_1556_){
_start:
{
uint8_t v_res_1557_; lean_object* v_r_1558_; 
v_res_1557_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(v_e_1556_);
lean_dec_ref(v_e_1556_);
v_r_1558_ = lean_box(v_res_1557_);
return v_r_1558_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(lean_object* v_x_1559_){
_start:
{
if (lean_obj_tag(v_x_1559_) == 0)
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
v_a_1561_ = lean_ctor_get(v_x_1559_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_x_1559_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v_x_1559_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v_x_1559_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
lean_ctor_set_tag(v___x_1563_, 1);
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
v_a_1569_ = lean_ctor_get(v_x_1559_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v_x_1559_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v_x_1559_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v_x_1559_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
lean_ctor_set_tag(v___x_1571_, 0);
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
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
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg___boxed(lean_object* v_x_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_x_1577_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(lean_object* v_opts_1580_, lean_object* v_opt_1581_){
_start:
{
lean_object* v_name_1582_; lean_object* v_defValue_1583_; lean_object* v_map_1584_; lean_object* v___x_1585_; 
v_name_1582_ = lean_ctor_get(v_opt_1581_, 0);
v_defValue_1583_ = lean_ctor_get(v_opt_1581_, 1);
v_map_1584_ = lean_ctor_get(v_opts_1580_, 0);
v___x_1585_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1584_, v_name_1582_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_inc(v_defValue_1583_);
return v_defValue_1583_;
}
else
{
lean_object* v_val_1586_; 
v_val_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_val_1586_);
lean_dec_ref_known(v___x_1585_, 1);
if (lean_obj_tag(v_val_1586_) == 3)
{
lean_object* v_v_1587_; 
v_v_1587_ = lean_ctor_get(v_val_1586_, 0);
lean_inc(v_v_1587_);
lean_dec_ref_known(v_val_1586_, 1);
return v_v_1587_;
}
else
{
lean_dec(v_val_1586_);
lean_inc(v_defValue_1583_);
return v_defValue_1583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6___boxed(lean_object* v_opts_1588_, lean_object* v_opt_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(v_opts_1588_, v_opt_1589_);
lean_dec_ref(v_opt_1589_);
lean_dec_ref(v_opts_1588_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(size_t v_sz_1591_, size_t v_i_1592_, lean_object* v_bs_1593_){
_start:
{
uint8_t v___x_1594_; 
v___x_1594_ = lean_usize_dec_lt(v_i_1592_, v_sz_1591_);
if (v___x_1594_ == 0)
{
return v_bs_1593_;
}
else
{
lean_object* v_v_1595_; lean_object* v_msg_1596_; lean_object* v___x_1597_; lean_object* v_bs_x27_1598_; size_t v___x_1599_; size_t v___x_1600_; lean_object* v___x_1601_; 
v_v_1595_ = lean_array_uget_borrowed(v_bs_1593_, v_i_1592_);
v_msg_1596_ = lean_ctor_get(v_v_1595_, 1);
lean_inc_ref(v_msg_1596_);
v___x_1597_ = lean_unsigned_to_nat(0u);
v_bs_x27_1598_ = lean_array_uset(v_bs_1593_, v_i_1592_, v___x_1597_);
v___x_1599_ = ((size_t)1ULL);
v___x_1600_ = lean_usize_add(v_i_1592_, v___x_1599_);
v___x_1601_ = lean_array_uset(v_bs_x27_1598_, v_i_1592_, v_msg_1596_);
v_i_1592_ = v___x_1600_;
v_bs_1593_ = v___x_1601_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_1603_, lean_object* v_i_1604_, lean_object* v_bs_1605_){
_start:
{
size_t v_sz_boxed_1606_; size_t v_i_boxed_1607_; lean_object* v_res_1608_; 
v_sz_boxed_1606_ = lean_unbox_usize(v_sz_1603_);
lean_dec(v_sz_1603_);
v_i_boxed_1607_ = lean_unbox_usize(v_i_1604_);
lean_dec(v_i_1604_);
v_res_1608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(v_sz_boxed_1606_, v_i_boxed_1607_, v_bs_1605_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(lean_object* v_oldTraces_1609_, lean_object* v_data_1610_, lean_object* v_ref_1611_, lean_object* v_msg_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_toCold_1618_; lean_object* v_currRecDepth_1619_; lean_object* v_ref_1620_; uint16_t v_optionFlags_1621_; uint8_t v_suppressElabErrors_1622_; uint8_t v_checkDeprecated_1623_; uint8_t v_isRecordingDeps_1624_; lean_object* v_ref_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v_traceState_1628_; lean_object* v_traces_1629_; lean_object* v___x_1630_; size_t v_sz_1631_; size_t v___x_1632_; lean_object* v___x_1633_; lean_object* v_msg_1634_; lean_object* v___x_1635_; lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1674_; 
v_toCold_1618_ = lean_ctor_get(v___y_1615_, 0);
v_currRecDepth_1619_ = lean_ctor_get(v___y_1615_, 1);
v_ref_1620_ = lean_ctor_get(v___y_1615_, 2);
v_optionFlags_1621_ = lean_ctor_get_uint16(v___y_1615_, sizeof(void*)*3);
v_suppressElabErrors_1622_ = lean_ctor_get_uint8(v___y_1615_, sizeof(void*)*3 + 2);
v_checkDeprecated_1623_ = lean_ctor_get_uint8(v___y_1615_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1624_ = lean_ctor_get_uint8(v___y_1615_, sizeof(void*)*3 + 4);
v_ref_1625_ = l_Lean_replaceRef(v_ref_1611_, v_ref_1620_);
lean_inc(v_currRecDepth_1619_);
lean_inc_ref(v_toCold_1618_);
v___x_1626_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1626_, 0, v_toCold_1618_);
lean_ctor_set(v___x_1626_, 1, v_currRecDepth_1619_);
lean_ctor_set(v___x_1626_, 2, v_ref_1625_);
lean_ctor_set_uint16(v___x_1626_, sizeof(void*)*3, v_optionFlags_1621_);
lean_ctor_set_uint8(v___x_1626_, sizeof(void*)*3 + 2, v_suppressElabErrors_1622_);
lean_ctor_set_uint8(v___x_1626_, sizeof(void*)*3 + 3, v_checkDeprecated_1623_);
lean_ctor_set_uint8(v___x_1626_, sizeof(void*)*3 + 4, v_isRecordingDeps_1624_);
v___x_1627_ = lean_st_ref_get(v___y_1616_);
v_traceState_1628_ = lean_ctor_get(v___x_1627_, 4);
lean_inc_ref(v_traceState_1628_);
lean_dec(v___x_1627_);
v_traces_1629_ = lean_ctor_get(v_traceState_1628_, 0);
lean_inc_ref(v_traces_1629_);
lean_dec_ref(v_traceState_1628_);
v___x_1630_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1629_);
lean_dec_ref(v_traces_1629_);
v_sz_1631_ = lean_array_size(v___x_1630_);
v___x_1632_ = ((size_t)0ULL);
v___x_1633_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3_spec__4(v_sz_1631_, v___x_1632_, v___x_1630_);
v_msg_1634_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1634_, 0, v_data_1610_);
lean_ctor_set(v_msg_1634_, 1, v_msg_1612_);
lean_ctor_set(v_msg_1634_, 2, v___x_1633_);
v___x_1635_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6_spec__7(v_msg_1634_, v___y_1613_, v___y_1614_, v___x_1626_, v___y_1616_);
lean_dec_ref_known(v___x_1626_, 3);
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1674_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1674_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1640_; lean_object* v_traceState_1641_; lean_object* v_env_1642_; lean_object* v_nextMacroScope_1643_; lean_object* v_ngen_1644_; lean_object* v_auxDeclNGen_1645_; lean_object* v_cache_1646_; lean_object* v_recordedDeps_1647_; lean_object* v_messages_1648_; lean_object* v_infoState_1649_; lean_object* v_snapshotTasks_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1673_; 
v___x_1640_ = lean_st_ref_take(v___y_1616_);
v_traceState_1641_ = lean_ctor_get(v___x_1640_, 4);
v_env_1642_ = lean_ctor_get(v___x_1640_, 0);
v_nextMacroScope_1643_ = lean_ctor_get(v___x_1640_, 1);
v_ngen_1644_ = lean_ctor_get(v___x_1640_, 2);
v_auxDeclNGen_1645_ = lean_ctor_get(v___x_1640_, 3);
v_cache_1646_ = lean_ctor_get(v___x_1640_, 5);
v_recordedDeps_1647_ = lean_ctor_get(v___x_1640_, 6);
v_messages_1648_ = lean_ctor_get(v___x_1640_, 7);
v_infoState_1649_ = lean_ctor_get(v___x_1640_, 8);
v_snapshotTasks_1650_ = lean_ctor_get(v___x_1640_, 9);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1652_ = v___x_1640_;
v_isShared_1653_ = v_isSharedCheck_1673_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_snapshotTasks_1650_);
lean_inc(v_infoState_1649_);
lean_inc(v_messages_1648_);
lean_inc(v_recordedDeps_1647_);
lean_inc(v_cache_1646_);
lean_inc(v_traceState_1641_);
lean_inc(v_auxDeclNGen_1645_);
lean_inc(v_ngen_1644_);
lean_inc(v_nextMacroScope_1643_);
lean_inc(v_env_1642_);
lean_dec(v___x_1640_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1673_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
uint64_t v_tid_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1671_; 
v_tid_1654_ = lean_ctor_get_uint64(v_traceState_1641_, sizeof(void*)*1);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_traceState_1641_);
if (v_isSharedCheck_1671_ == 0)
{
lean_object* v_unused_1672_; 
v_unused_1672_ = lean_ctor_get(v_traceState_1641_, 0);
lean_dec(v_unused_1672_);
v___x_1656_ = v_traceState_1641_;
v_isShared_1657_ = v_isSharedCheck_1671_;
goto v_resetjp_1655_;
}
else
{
lean_dec(v_traceState_1641_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1671_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1658_ = lean_box(0);
v___x_1659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1659_, 0, v_ref_1611_);
lean_ctor_set(v___x_1659_, 1, v_a_1636_);
v___x_1660_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1609_, v___x_1659_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v___x_1660_);
v___x_1662_ = v___x_1656_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1660_);
lean_ctor_set_uint64(v_reuseFailAlloc_1670_, sizeof(void*)*1, v_tid_1654_);
v___x_1662_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
lean_object* v___x_1664_; 
if (v_isShared_1653_ == 0)
{
lean_ctor_set(v___x_1652_, 4, v___x_1662_);
v___x_1664_ = v___x_1652_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_env_1642_);
lean_ctor_set(v_reuseFailAlloc_1669_, 1, v_nextMacroScope_1643_);
lean_ctor_set(v_reuseFailAlloc_1669_, 2, v_ngen_1644_);
lean_ctor_set(v_reuseFailAlloc_1669_, 3, v_auxDeclNGen_1645_);
lean_ctor_set(v_reuseFailAlloc_1669_, 4, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1669_, 5, v_cache_1646_);
lean_ctor_set(v_reuseFailAlloc_1669_, 6, v_recordedDeps_1647_);
lean_ctor_set(v_reuseFailAlloc_1669_, 7, v_messages_1648_);
lean_ctor_set(v_reuseFailAlloc_1669_, 8, v_infoState_1649_);
lean_ctor_set(v_reuseFailAlloc_1669_, 9, v_snapshotTasks_1650_);
v___x_1664_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
lean_object* v___x_1665_; lean_object* v___x_1667_; 
v___x_1665_ = lean_st_ref_put(v___y_1616_, v___x_1664_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1658_);
v___x_1667_ = v___x_1638_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1658_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3___boxed(lean_object* v_oldTraces_1675_, lean_object* v_data_1676_, lean_object* v_ref_1677_, lean_object* v_msg_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(v_oldTraces_1675_, v_data_1676_, v_ref_1677_, v_msg_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
return v_res_1684_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1685_; double v___x_1686_; 
v___x_1685_ = lean_unsigned_to_nat(0u);
v___x_1686_ = lean_float_of_nat(v___x_1685_);
return v___x_1686_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1688_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__1));
v___x_1689_ = l_Lean_stringToMessageData(v___x_1688_);
return v___x_1689_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1690_; double v___x_1691_; 
v___x_1690_ = lean_unsigned_to_nat(1000u);
v___x_1691_ = lean_float_of_nat(v___x_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(lean_object* v_cls_1692_, uint8_t v_collapsed_1693_, lean_object* v_tag_1694_, lean_object* v_opts_1695_, uint8_t v_clsEnabled_1696_, lean_object* v_oldTraces_1697_, lean_object* v_msg_1698_, lean_object* v_resStartStop_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v_fst_1705_; lean_object* v_snd_1706_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v_data_1710_; lean_object* v_fst_1713_; lean_object* v_snd_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; lean_object* v___y_1718_; lean_object* v_a_1719_; uint8_t v___y_1734_; double v___y_1766_; 
v_fst_1705_ = lean_ctor_get(v_resStartStop_1699_, 0);
lean_inc(v_fst_1705_);
v_snd_1706_ = lean_ctor_get(v_resStartStop_1699_, 1);
lean_inc(v_snd_1706_);
lean_dec_ref(v_resStartStop_1699_);
v_fst_1713_ = lean_ctor_get(v_snd_1706_, 0);
lean_inc(v_fst_1713_);
v_snd_1714_ = lean_ctor_get(v_snd_1706_, 1);
lean_inc(v_snd_1714_);
lean_dec(v_snd_1706_);
v___x_1715_ = l_Lean_trace_profiler;
v___x_1716_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_opts_1695_, v___x_1715_);
if (v___x_1716_ == 0)
{
v___y_1734_ = v___x_1716_;
goto v___jp_1733_;
}
else
{
lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1772_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_opts_1695_, v___x_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; lean_object* v___x_1774_; double v___x_1775_; double v___x_1776_; double v___x_1777_; 
v___x_1773_ = l_Lean_trace_profiler_threshold;
v___x_1774_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(v_opts_1695_, v___x_1773_);
v___x_1775_ = lean_float_of_nat(v___x_1774_);
v___x_1776_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__3);
v___x_1777_ = lean_float_div(v___x_1775_, v___x_1776_);
v___y_1766_ = v___x_1777_;
goto v___jp_1765_;
}
else
{
lean_object* v___x_1778_; lean_object* v___x_1779_; double v___x_1780_; 
v___x_1778_ = l_Lean_trace_profiler_threshold;
v___x_1779_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__6(v_opts_1695_, v___x_1778_);
v___x_1780_ = lean_float_of_nat(v___x_1779_);
v___y_1766_ = v___x_1780_;
goto v___jp_1765_;
}
}
v___jp_1707_:
{
lean_object* v___x_1711_; 
lean_inc(v___y_1709_);
v___x_1711_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__3(v_oldTraces_1697_, v_data_1710_, v___y_1709_, v___y_1708_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v___x_1712_; 
lean_dec_ref_known(v___x_1711_, 1);
v___x_1712_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_fst_1705_);
return v___x_1712_;
}
else
{
lean_dec(v_fst_1705_);
return v___x_1711_;
}
}
v___jp_1717_:
{
uint8_t v_result_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; double v___x_1723_; lean_object* v_data_1724_; 
v_result_1720_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__5(v_fst_1705_);
v___x_1721_ = lean_box(v_result_1720_);
v___x_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
v___x_1723_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__0);
lean_inc_ref(v_tag_1694_);
lean_inc_ref(v___x_1722_);
lean_inc(v_cls_1692_);
v_data_1724_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1724_, 0, v_cls_1692_);
lean_ctor_set(v_data_1724_, 1, v___x_1722_);
lean_ctor_set(v_data_1724_, 2, v_tag_1694_);
lean_ctor_set_float(v_data_1724_, sizeof(void*)*3, v___x_1723_);
lean_ctor_set_float(v_data_1724_, sizeof(void*)*3 + 8, v___x_1723_);
lean_ctor_set_uint8(v_data_1724_, sizeof(void*)*3 + 16, v_collapsed_1693_);
if (v___x_1716_ == 0)
{
lean_dec_ref_known(v___x_1722_, 1);
lean_dec(v_snd_1714_);
lean_dec(v_fst_1713_);
lean_dec_ref(v_tag_1694_);
lean_dec(v_cls_1692_);
v___y_1708_ = v_a_1719_;
v___y_1709_ = v___y_1718_;
v_data_1710_ = v_data_1724_;
goto v___jp_1707_;
}
else
{
lean_object* v_data_1725_; double v___x_1726_; double v___x_1727_; 
lean_dec_ref_known(v_data_1724_, 3);
v_data_1725_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1725_, 0, v_cls_1692_);
lean_ctor_set(v_data_1725_, 1, v___x_1722_);
lean_ctor_set(v_data_1725_, 2, v_tag_1694_);
v___x_1726_ = lean_unbox_float(v_fst_1713_);
lean_dec(v_fst_1713_);
lean_ctor_set_float(v_data_1725_, sizeof(void*)*3, v___x_1726_);
v___x_1727_ = lean_unbox_float(v_snd_1714_);
lean_dec(v_snd_1714_);
lean_ctor_set_float(v_data_1725_, sizeof(void*)*3 + 8, v___x_1727_);
lean_ctor_set_uint8(v_data_1725_, sizeof(void*)*3 + 16, v_collapsed_1693_);
v___y_1708_ = v_a_1719_;
v___y_1709_ = v___y_1718_;
v_data_1710_ = v_data_1725_;
goto v___jp_1707_;
}
}
v___jp_1728_:
{
lean_object* v_ref_1729_; lean_object* v___x_1730_; 
v_ref_1729_ = lean_ctor_get(v___y_1702_, 2);
lean_inc(v___y_1703_);
lean_inc_ref(v___y_1702_);
lean_inc(v___y_1701_);
lean_inc_ref(v___y_1700_);
lean_inc(v_fst_1705_);
v___x_1730_ = lean_apply_6(v_msg_1698_, v_fst_1705_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, lean_box(0));
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_a_1731_);
lean_dec_ref_known(v___x_1730_, 1);
v___y_1718_ = v_ref_1729_;
v_a_1719_ = v_a_1731_;
goto v___jp_1717_;
}
else
{
lean_object* v___x_1732_; 
lean_dec_ref_known(v___x_1730_, 1);
v___x_1732_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___closed__2);
v___y_1718_ = v_ref_1729_;
v_a_1719_ = v___x_1732_;
goto v___jp_1717_;
}
}
v___jp_1733_:
{
if (v_clsEnabled_1696_ == 0)
{
if (v___y_1734_ == 0)
{
lean_object* v___x_1735_; lean_object* v_traceState_1736_; lean_object* v_env_1737_; lean_object* v_nextMacroScope_1738_; lean_object* v_ngen_1739_; lean_object* v_auxDeclNGen_1740_; lean_object* v_cache_1741_; lean_object* v_recordedDeps_1742_; lean_object* v_messages_1743_; lean_object* v_infoState_1744_; lean_object* v_snapshotTasks_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1764_; 
lean_dec(v_snd_1714_);
lean_dec(v_fst_1713_);
lean_dec_ref(v_msg_1698_);
lean_dec_ref(v_tag_1694_);
lean_dec(v_cls_1692_);
v___x_1735_ = lean_st_ref_take(v___y_1703_);
v_traceState_1736_ = lean_ctor_get(v___x_1735_, 4);
v_env_1737_ = lean_ctor_get(v___x_1735_, 0);
v_nextMacroScope_1738_ = lean_ctor_get(v___x_1735_, 1);
v_ngen_1739_ = lean_ctor_get(v___x_1735_, 2);
v_auxDeclNGen_1740_ = lean_ctor_get(v___x_1735_, 3);
v_cache_1741_ = lean_ctor_get(v___x_1735_, 5);
v_recordedDeps_1742_ = lean_ctor_get(v___x_1735_, 6);
v_messages_1743_ = lean_ctor_get(v___x_1735_, 7);
v_infoState_1744_ = lean_ctor_get(v___x_1735_, 8);
v_snapshotTasks_1745_ = lean_ctor_get(v___x_1735_, 9);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1747_ = v___x_1735_;
v_isShared_1748_ = v_isSharedCheck_1764_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_snapshotTasks_1745_);
lean_inc(v_infoState_1744_);
lean_inc(v_messages_1743_);
lean_inc(v_recordedDeps_1742_);
lean_inc(v_cache_1741_);
lean_inc(v_traceState_1736_);
lean_inc(v_auxDeclNGen_1740_);
lean_inc(v_ngen_1739_);
lean_inc(v_nextMacroScope_1738_);
lean_inc(v_env_1737_);
lean_dec(v___x_1735_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1764_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
uint64_t v_tid_1749_; lean_object* v_traces_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1763_; 
v_tid_1749_ = lean_ctor_get_uint64(v_traceState_1736_, sizeof(void*)*1);
v_traces_1750_ = lean_ctor_get(v_traceState_1736_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_traceState_1736_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1752_ = v_traceState_1736_;
v_isShared_1753_ = v_isSharedCheck_1763_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_traces_1750_);
lean_dec(v_traceState_1736_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1763_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1754_; lean_object* v___x_1756_; 
v___x_1754_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1697_, v_traces_1750_);
lean_dec_ref(v_traces_1750_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 0, v___x_1754_);
v___x_1756_ = v___x_1752_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1754_);
lean_ctor_set_uint64(v_reuseFailAlloc_1762_, sizeof(void*)*1, v_tid_1749_);
v___x_1756_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v___x_1758_; 
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 4, v___x_1756_);
v___x_1758_ = v___x_1747_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_env_1737_);
lean_ctor_set(v_reuseFailAlloc_1761_, 1, v_nextMacroScope_1738_);
lean_ctor_set(v_reuseFailAlloc_1761_, 2, v_ngen_1739_);
lean_ctor_set(v_reuseFailAlloc_1761_, 3, v_auxDeclNGen_1740_);
lean_ctor_set(v_reuseFailAlloc_1761_, 4, v___x_1756_);
lean_ctor_set(v_reuseFailAlloc_1761_, 5, v_cache_1741_);
lean_ctor_set(v_reuseFailAlloc_1761_, 6, v_recordedDeps_1742_);
lean_ctor_set(v_reuseFailAlloc_1761_, 7, v_messages_1743_);
lean_ctor_set(v_reuseFailAlloc_1761_, 8, v_infoState_1744_);
lean_ctor_set(v_reuseFailAlloc_1761_, 9, v_snapshotTasks_1745_);
v___x_1758_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1759_ = lean_st_ref_put(v___y_1703_, v___x_1758_);
v___x_1760_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_fst_1705_);
return v___x_1760_;
}
}
}
}
}
else
{
goto v___jp_1728_;
}
}
else
{
goto v___jp_1728_;
}
}
v___jp_1765_:
{
double v___x_1767_; double v___x_1768_; double v___x_1769_; uint8_t v___x_1770_; 
v___x_1767_ = lean_unbox_float(v_snd_1714_);
v___x_1768_ = lean_unbox_float(v_fst_1713_);
v___x_1769_ = lean_float_sub(v___x_1767_, v___x_1768_);
v___x_1770_ = lean_float_decLt(v___y_1766_, v___x_1769_);
v___y_1734_ = v___x_1770_;
goto v___jp_1733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3___boxed(lean_object* v_cls_1781_, lean_object* v_collapsed_1782_, lean_object* v_tag_1783_, lean_object* v_opts_1784_, lean_object* v_clsEnabled_1785_, lean_object* v_oldTraces_1786_, lean_object* v_msg_1787_, lean_object* v_resStartStop_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
uint8_t v_collapsed_boxed_1794_; uint8_t v_clsEnabled_boxed_1795_; lean_object* v_res_1796_; 
v_collapsed_boxed_1794_ = lean_unbox(v_collapsed_1782_);
v_clsEnabled_boxed_1795_ = lean_unbox(v_clsEnabled_1785_);
v_res_1796_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v_cls_1781_, v_collapsed_boxed_1794_, v_tag_1783_, v_opts_1784_, v_clsEnabled_boxed_1795_, v_oldTraces_1786_, v_msg_1787_, v_resStartStop_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec_ref(v_opts_1784_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(lean_object* v_upperBound_1797_, lean_object* v___x_1798_, lean_object* v___x_1799_, lean_object* v___x_1800_, lean_object* v_a_1801_, lean_object* v_b_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_){
_start:
{
uint8_t v___x_1808_; 
v___x_1808_ = lean_nat_dec_lt(v_a_1801_, v_upperBound_1797_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; 
lean_dec(v_a_1801_);
lean_dec(v___x_1800_);
lean_dec(v___x_1799_);
lean_dec(v___x_1798_);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v_b_1802_);
return v___x_1809_;
}
else
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1810_ = lean_box(0);
v___x_1811_ = lean_unsigned_to_nat(1u);
v___x_1812_ = lean_nat_add(v_a_1801_, v___x_1811_);
lean_dec(v_a_1801_);
lean_inc_n(v___x_1812_, 2);
lean_inc(v___x_1798_);
v___x_1813_ = lean_name_append_index_after(v___x_1798_, v___x_1812_);
lean_inc(v___x_1799_);
v___x_1814_ = lean_name_append_index_after(v___x_1799_, v___x_1812_);
lean_inc(v___x_1800_);
v___x_1815_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_1813_, v___x_1800_, v___x_1814_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_dec_ref_known(v___x_1815_, 1);
v_a_1801_ = v___x_1812_;
v_b_1802_ = v___x_1810_;
goto _start;
}
else
{
lean_dec(v___x_1812_);
lean_dec(v___x_1800_);
lean_dec(v___x_1799_);
lean_dec(v___x_1798_);
return v___x_1815_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg___boxed(lean_object* v_upperBound_1817_, lean_object* v___x_1818_, lean_object* v___x_1819_, lean_object* v___x_1820_, lean_object* v_a_1821_, lean_object* v_b_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_upperBound_1817_, v___x_1818_, v___x_1819_, v___x_1820_, v_a_1821_, v_b_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v_upperBound_1817_);
return v_res_1828_;
}
}
static lean_object* _init_l_Lean_mkBelow___closed__6(void){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1838_ = ((lean_object*)(l_Lean_mkBelow___closed__2));
v___x_1839_ = ((lean_object*)(l_Lean_mkBelow___closed__5));
v___x_1840_ = l_Lean_Name_append(v___x_1839_, v___x_1838_);
return v___x_1840_;
}
}
static double _init_l_Lean_mkBelow___closed__7(void){
_start:
{
lean_object* v___x_1841_; double v___x_1842_; 
v___x_1841_ = lean_unsigned_to_nat(1000000000u);
v___x_1842_ = lean_float_of_nat(v___x_1841_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow(lean_object* v_indName_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_toCold_1855_; lean_object* v_options_1856_; lean_object* v_inheritedTraceOptions_1857_; uint8_t v_hasTrace_1858_; lean_object* v___x_1859_; 
v_toCold_1855_ = lean_ctor_get(v_a_1846_, 0);
v_options_1856_ = lean_ctor_get(v_toCold_1855_, 2);
v_inheritedTraceOptions_1857_ = lean_ctor_get(v_toCold_1855_, 11);
v_hasTrace_1858_ = lean_ctor_get_uint8(v_options_1856_, sizeof(void*)*1);
v___x_1859_ = lean_box(0);
if (v_hasTrace_1858_ == 0)
{
lean_object* v___x_1860_; 
lean_inc(v_indName_1843_);
v___x_1860_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1907_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1907_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1907_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
if (lean_obj_tag(v_a_1861_) == 5)
{
lean_object* v_val_1865_; uint8_t v_isRec_1866_; 
v_val_1865_ = lean_ctor_get(v_a_1861_, 0);
lean_inc_ref(v_val_1865_);
lean_dec_ref_known(v_a_1861_, 1);
v_isRec_1866_ = lean_ctor_get_uint8(v_val_1865_, sizeof(void*)*6);
if (v_isRec_1866_ == 0)
{
lean_object* v___x_1867_; lean_object* v___x_1869_; 
lean_dec_ref(v_val_1865_);
lean_dec(v_indName_1843_);
v___x_1867_ = lean_box(0);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1867_);
v___x_1869_ = v___x_1863_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
else
{
lean_object* v_toConstantVal_1871_; lean_object* v_numParams_1872_; lean_object* v_all_1873_; lean_object* v_numNested_1874_; lean_object* v_type_1875_; lean_object* v___x_1876_; 
lean_del_object(v___x_1863_);
v_toConstantVal_1871_ = lean_ctor_get(v_val_1865_, 0);
lean_inc_ref(v_toConstantVal_1871_);
v_numParams_1872_ = lean_ctor_get(v_val_1865_, 1);
lean_inc(v_numParams_1872_);
v_all_1873_ = lean_ctor_get(v_val_1865_, 3);
lean_inc(v_all_1873_);
v_numNested_1874_ = lean_ctor_get(v_val_1865_, 5);
lean_inc(v_numNested_1874_);
lean_dec_ref(v_val_1865_);
v_type_1875_ = lean_ctor_get(v_toConstantVal_1871_, 2);
lean_inc_ref(v_type_1875_);
lean_dec_ref(v_toConstantVal_1871_);
v___x_1876_ = l_Lean_Meta_isPropFormerType(v_type_1875_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; uint8_t v___x_1878_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v___x_1876_, 1);
v___x_1878_ = lean_unbox(v_a_1877_);
lean_dec(v_a_1877_);
if (v___x_1878_ == 0)
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
lean_inc_n(v_indName_1843_, 2);
v___x_1879_ = l_Lean_mkRecName(v_indName_1843_);
v___x_1880_ = l_Lean_mkBelowName(v_indName_1843_);
lean_inc(v___x_1880_);
lean_inc(v_numParams_1872_);
lean_inc(v___x_1879_);
v___x_1881_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_1879_, v_numParams_1872_, v___x_1880_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
lean_dec_ref_known(v___x_1881_, 1);
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = l_List_get_x21Internal___redArg(v___x_1859_, v_all_1873_, v___x_1882_);
lean_dec(v_all_1873_);
v___x_1884_ = lean_name_eq(v___x_1883_, v_indName_1843_);
lean_dec(v_indName_1843_);
lean_dec(v___x_1883_);
if (v___x_1884_ == 0)
{
lean_dec(v___x_1880_);
lean_dec(v___x_1879_);
lean_dec(v_numNested_1874_);
lean_dec(v_numParams_1872_);
goto v___jp_1852_;
}
else
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = lean_box(0);
v___x_1886_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_1874_, v___x_1879_, v___x_1880_, v_numParams_1872_, v___x_1882_, v___x_1885_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_numNested_1874_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1893_ == 0)
{
lean_object* v_unused_1894_; 
v_unused_1894_ = lean_ctor_get(v___x_1886_, 0);
lean_dec(v_unused_1894_);
v___x_1888_ = v___x_1886_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_dec(v___x_1886_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 0, v___x_1885_);
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v___x_1885_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
else
{
return v___x_1886_;
}
}
}
else
{
lean_dec(v___x_1880_);
lean_dec(v___x_1879_);
lean_dec(v_numNested_1874_);
lean_dec(v_all_1873_);
lean_dec(v_numParams_1872_);
lean_dec(v_indName_1843_);
return v___x_1881_;
}
}
else
{
lean_dec(v_numNested_1874_);
lean_dec(v_all_1873_);
lean_dec(v_numParams_1872_);
lean_dec(v_indName_1843_);
goto v___jp_1852_;
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec(v_numNested_1874_);
lean_dec(v_all_1873_);
lean_dec(v_numParams_1872_);
lean_dec(v_indName_1843_);
v_a_1895_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1876_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1876_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
}
else
{
lean_object* v___x_1903_; lean_object* v___x_1905_; 
lean_dec(v_a_1861_);
lean_dec(v_indName_1843_);
v___x_1903_ = lean_box(0);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1903_);
v___x_1905_ = v___x_1863_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1903_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_dec(v_indName_1843_);
v_a_1908_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1860_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1860_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
else
{
lean_object* v___f_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; uint8_t v___x_1920_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v_a_1924_; lean_object* v___y_1937_; lean_object* v___y_1938_; lean_object* v_a_1939_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v_a_1944_; lean_object* v___y_1947_; lean_object* v___y_1948_; lean_object* v___y_1949_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v_a_1954_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v_a_1966_; lean_object* v___y_1969_; lean_object* v___y_1970_; lean_object* v_a_1971_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; 
lean_inc(v_indName_1843_);
v___f_1916_ = lean_alloc_closure((void*)(l_Lean_mkBelow___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1916_, 0, v_indName_1843_);
v___x_1917_ = ((lean_object*)(l_Lean_mkBelow___closed__2));
v___x_1918_ = ((lean_object*)(l_Lean_mkBelow___closed__3));
v___x_1919_ = lean_obj_once(&l_Lean_mkBelow___closed__6, &l_Lean_mkBelow___closed__6_once, _init_l_Lean_mkBelow___closed__6);
v___x_1920_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1857_, v_options_1856_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_object* v___x_2045_; uint8_t v___x_2046_; 
v___x_2045_ = l_Lean_trace_profiler;
v___x_2046_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_1856_, v___x_2045_);
if (v___x_2046_ == 0)
{
lean_object* v___x_2047_; 
lean_dec_ref(v___f_1916_);
lean_inc(v_indName_1843_);
v___x_2047_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2094_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2050_ = v___x_2047_;
v_isShared_2051_ = v_isSharedCheck_2094_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2047_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2094_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
if (lean_obj_tag(v_a_2048_) == 5)
{
lean_object* v_val_2052_; uint8_t v_isRec_2053_; 
v_val_2052_ = lean_ctor_get(v_a_2048_, 0);
lean_inc_ref(v_val_2052_);
lean_dec_ref_known(v_a_2048_, 1);
v_isRec_2053_ = lean_ctor_get_uint8(v_val_2052_, sizeof(void*)*6);
if (v_isRec_2053_ == 0)
{
lean_object* v___x_2054_; lean_object* v___x_2056_; 
lean_dec_ref(v_val_2052_);
lean_dec(v_indName_1843_);
v___x_2054_ = lean_box(0);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2054_);
v___x_2056_ = v___x_2050_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2054_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
else
{
lean_object* v_toConstantVal_2058_; lean_object* v_numParams_2059_; lean_object* v_all_2060_; lean_object* v_numNested_2061_; lean_object* v_type_2062_; lean_object* v___x_2063_; 
lean_del_object(v___x_2050_);
v_toConstantVal_2058_ = lean_ctor_get(v_val_2052_, 0);
lean_inc_ref(v_toConstantVal_2058_);
v_numParams_2059_ = lean_ctor_get(v_val_2052_, 1);
lean_inc(v_numParams_2059_);
v_all_2060_ = lean_ctor_get(v_val_2052_, 3);
lean_inc(v_all_2060_);
v_numNested_2061_ = lean_ctor_get(v_val_2052_, 5);
lean_inc(v_numNested_2061_);
lean_dec_ref(v_val_2052_);
v_type_2062_ = lean_ctor_get(v_toConstantVal_2058_, 2);
lean_inc_ref(v_type_2062_);
lean_dec_ref(v_toConstantVal_2058_);
v___x_2063_ = l_Lean_Meta_isPropFormerType(v_type_2062_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v_a_2064_; uint8_t v___x_2065_; 
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc(v_a_2064_);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = lean_unbox(v_a_2064_);
lean_dec(v_a_2064_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
lean_inc_n(v_indName_1843_, 2);
v___x_2066_ = l_Lean_mkRecName(v_indName_1843_);
v___x_2067_ = l_Lean_mkBelowName(v_indName_1843_);
lean_inc(v___x_2067_);
lean_inc(v_numParams_2059_);
lean_inc(v___x_2066_);
v___x_2068_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_2066_, v_numParams_2059_, v___x_2067_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_2068_) == 0)
{
lean_object* v___x_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; 
lean_dec_ref_known(v___x_2068_, 1);
v___x_2069_ = lean_unsigned_to_nat(0u);
v___x_2070_ = l_List_get_x21Internal___redArg(v___x_1859_, v_all_2060_, v___x_2069_);
lean_dec(v_all_2060_);
v___x_2071_ = lean_name_eq(v___x_2070_, v_indName_1843_);
lean_dec(v_indName_1843_);
lean_dec(v___x_2070_);
if (v___x_2071_ == 0)
{
lean_dec(v___x_2067_);
lean_dec(v___x_2066_);
lean_dec(v_numNested_2061_);
lean_dec(v_numParams_2059_);
goto v___jp_1849_;
}
else
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = lean_box(0);
v___x_2073_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_2061_, v___x_2066_, v___x_2067_, v_numParams_2059_, v___x_2069_, v___x_2072_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_numNested_2061_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2073_);
if (v_isSharedCheck_2080_ == 0)
{
lean_object* v_unused_2081_; 
v_unused_2081_ = lean_ctor_get(v___x_2073_, 0);
lean_dec(v_unused_2081_);
v___x_2075_ = v___x_2073_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_dec(v___x_2073_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 0, v___x_2072_);
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2072_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
else
{
return v___x_2073_;
}
}
}
else
{
lean_dec(v___x_2067_);
lean_dec(v___x_2066_);
lean_dec(v_numNested_2061_);
lean_dec(v_all_2060_);
lean_dec(v_numParams_2059_);
lean_dec(v_indName_1843_);
return v___x_2068_;
}
}
else
{
lean_dec(v_numNested_2061_);
lean_dec(v_all_2060_);
lean_dec(v_numParams_2059_);
lean_dec(v_indName_1843_);
goto v___jp_1849_;
}
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
lean_dec(v_numNested_2061_);
lean_dec(v_all_2060_);
lean_dec(v_numParams_2059_);
lean_dec(v_indName_1843_);
v_a_2082_ = lean_ctor_get(v___x_2063_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_2063_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2063_);
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
else
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
lean_dec(v_a_2048_);
lean_dec(v_indName_1843_);
v___x_2090_ = lean_box(0);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2090_);
v___x_2092_ = v___x_2050_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2090_);
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
else
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
lean_dec(v_indName_1843_);
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
goto v___jp_1978_;
}
}
else
{
goto v___jp_1978_;
}
v___jp_1921_:
{
lean_object* v___x_1925_; double v___x_1926_; double v___x_1927_; double v___x_1928_; double v___x_1929_; double v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1925_ = lean_io_mono_nanos_now();
v___x_1926_ = lean_float_of_nat(v___y_1922_);
v___x_1927_ = lean_float_once(&l_Lean_mkBelow___closed__7, &l_Lean_mkBelow___closed__7_once, _init_l_Lean_mkBelow___closed__7);
v___x_1928_ = lean_float_div(v___x_1926_, v___x_1927_);
v___x_1929_ = lean_float_of_nat(v___x_1925_);
v___x_1930_ = lean_float_div(v___x_1929_, v___x_1927_);
v___x_1931_ = lean_box_float(v___x_1928_);
v___x_1932_ = lean_box_float(v___x_1930_);
v___x_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1931_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v___x_1934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1934_, 0, v_a_1924_);
lean_ctor_set(v___x_1934_, 1, v___x_1933_);
v___x_1935_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_1917_, v_hasTrace_1858_, v___x_1918_, v_options_1856_, v___x_1920_, v___y_1923_, v___f_1916_, v___x_1934_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
return v___x_1935_;
}
v___jp_1936_:
{
lean_object* v___x_1940_; 
v___x_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1940_, 0, v_a_1939_);
v___y_1922_ = v___y_1937_;
v___y_1923_ = v___y_1938_;
v_a_1924_ = v___x_1940_;
goto v___jp_1921_;
}
v___jp_1941_:
{
lean_object* v___x_1945_; 
v___x_1945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_a_1944_);
v___y_1922_ = v___y_1942_;
v___y_1923_ = v___y_1943_;
v_a_1924_ = v___x_1945_;
goto v___jp_1921_;
}
v___jp_1946_:
{
lean_object* v_a_1950_; 
v_a_1950_ = lean_ctor_get(v___y_1949_, 0);
lean_inc(v_a_1950_);
lean_dec_ref(v___y_1949_);
v___y_1937_ = v___y_1947_;
v___y_1938_ = v___y_1948_;
v_a_1939_ = v_a_1950_;
goto v___jp_1936_;
}
v___jp_1951_:
{
lean_object* v___x_1955_; double v___x_1956_; double v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1955_ = lean_io_get_num_heartbeats();
v___x_1956_ = lean_float_of_nat(v___y_1952_);
v___x_1957_ = lean_float_of_nat(v___x_1955_);
v___x_1958_ = lean_box_float(v___x_1956_);
v___x_1959_ = lean_box_float(v___x_1957_);
v___x_1960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1960_, 0, v___x_1958_);
lean_ctor_set(v___x_1960_, 1, v___x_1959_);
v___x_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1961_, 0, v_a_1954_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_1917_, v_hasTrace_1858_, v___x_1918_, v_options_1856_, v___x_1920_, v___y_1953_, v___f_1916_, v___x_1961_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
return v___x_1962_;
}
v___jp_1963_:
{
lean_object* v___x_1967_; 
v___x_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1967_, 0, v_a_1966_);
v___y_1952_ = v___y_1964_;
v___y_1953_ = v___y_1965_;
v_a_1954_ = v___x_1967_;
goto v___jp_1951_;
}
v___jp_1968_:
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1972_, 0, v_a_1971_);
v___y_1952_ = v___y_1969_;
v___y_1953_ = v___y_1970_;
v_a_1954_ = v___x_1972_;
goto v___jp_1951_;
}
v___jp_1973_:
{
lean_object* v_a_1977_; 
v_a_1977_ = lean_ctor_get(v___y_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref(v___y_1976_);
v___y_1964_ = v___y_1974_;
v___y_1965_ = v___y_1975_;
v_a_1966_ = v_a_1977_;
goto v___jp_1963_;
}
v___jp_1978_:
{
lean_object* v___x_1979_; lean_object* v_a_1980_; lean_object* v___x_1981_; uint8_t v___x_1982_; 
v___x_1979_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v_a_1847_);
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_1980_);
lean_dec_ref(v___x_1979_);
v___x_1981_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1982_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_1856_, v___x_1981_);
if (v___x_1982_ == 0)
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1983_ = lean_io_mono_nanos_now();
lean_inc(v_indName_1843_);
v___x_1984_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
lean_inc(v_a_1985_);
lean_dec_ref_known(v___x_1984_, 1);
if (lean_obj_tag(v_a_1985_) == 5)
{
lean_object* v_val_1986_; uint8_t v_isRec_1987_; 
v_val_1986_ = lean_ctor_get(v_a_1985_, 0);
lean_inc_ref(v_val_1986_);
lean_dec_ref_known(v_a_1985_, 1);
v_isRec_1987_ = lean_ctor_get_uint8(v_val_1986_, sizeof(void*)*6);
if (v_isRec_1987_ == 0)
{
lean_object* v___x_1988_; 
lean_dec_ref(v_val_1986_);
lean_dec(v_indName_1843_);
v___x_1988_ = lean_box(0);
v___y_1937_ = v___x_1983_;
v___y_1938_ = v_a_1980_;
v_a_1939_ = v___x_1988_;
goto v___jp_1936_;
}
else
{
lean_object* v_toConstantVal_1989_; lean_object* v_numParams_1990_; lean_object* v_all_1991_; lean_object* v_numNested_1992_; lean_object* v_type_1993_; lean_object* v___x_1994_; 
v_toConstantVal_1989_ = lean_ctor_get(v_val_1986_, 0);
lean_inc_ref(v_toConstantVal_1989_);
v_numParams_1990_ = lean_ctor_get(v_val_1986_, 1);
lean_inc(v_numParams_1990_);
v_all_1991_ = lean_ctor_get(v_val_1986_, 3);
lean_inc(v_all_1991_);
v_numNested_1992_ = lean_ctor_get(v_val_1986_, 5);
lean_inc(v_numNested_1992_);
lean_dec_ref(v_val_1986_);
v_type_1993_ = lean_ctor_get(v_toConstantVal_1989_, 2);
lean_inc_ref(v_type_1993_);
lean_dec_ref(v_toConstantVal_1989_);
v___x_1994_ = l_Lean_Meta_isPropFormerType(v_type_1993_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; uint8_t v___x_1996_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = lean_unbox(v_a_1995_);
lean_dec(v_a_1995_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
lean_inc_n(v_indName_1843_, 2);
v___x_1997_ = l_Lean_mkRecName(v_indName_1843_);
v___x_1998_ = l_Lean_mkBelowName(v_indName_1843_);
lean_inc(v___x_1998_);
lean_inc(v_numParams_1990_);
lean_inc(v___x_1997_);
v___x_1999_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_1997_, v_numParams_1990_, v___x_1998_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v___x_2000_; lean_object* v___x_2001_; uint8_t v___x_2002_; 
lean_dec_ref_known(v___x_1999_, 1);
v___x_2000_ = lean_unsigned_to_nat(0u);
v___x_2001_ = l_List_get_x21Internal___redArg(v___x_1859_, v_all_1991_, v___x_2000_);
lean_dec(v_all_1991_);
v___x_2002_ = lean_name_eq(v___x_2001_, v_indName_1843_);
lean_dec(v_indName_1843_);
lean_dec(v___x_2001_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
lean_dec(v___x_1998_);
lean_dec(v___x_1997_);
lean_dec(v_numNested_1992_);
lean_dec(v_numParams_1990_);
v___x_2003_ = lean_box(0);
v___x_2004_ = l_Lean_mkBelow___lam__1(v___x_2003_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
v___y_1947_ = v___x_1983_;
v___y_1948_ = v_a_1980_;
v___y_1949_ = v___x_2004_;
goto v___jp_1946_;
}
else
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = lean_box(0);
v___x_2006_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_1992_, v___x_1997_, v___x_1998_, v_numParams_1990_, v___x_2000_, v___x_2005_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_numNested_1992_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_dec_ref_known(v___x_2006_, 1);
v___y_1937_ = v___x_1983_;
v___y_1938_ = v_a_1980_;
v_a_1939_ = v___x_2005_;
goto v___jp_1936_;
}
else
{
lean_object* v_a_2007_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_2006_, 1);
v___y_1942_ = v___x_1983_;
v___y_1943_ = v_a_1980_;
v_a_1944_ = v_a_2007_;
goto v___jp_1941_;
}
}
}
else
{
lean_object* v_a_2008_; 
lean_dec(v___x_1998_);
lean_dec(v___x_1997_);
lean_dec(v_numNested_1992_);
lean_dec(v_all_1991_);
lean_dec(v_numParams_1990_);
lean_dec(v_indName_1843_);
v_a_2008_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v___x_1999_, 1);
v___y_1942_ = v___x_1983_;
v___y_1943_ = v_a_1980_;
v_a_1944_ = v_a_2008_;
goto v___jp_1941_;
}
}
else
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
lean_dec(v_numNested_1992_);
lean_dec(v_all_1991_);
lean_dec(v_numParams_1990_);
lean_dec(v_indName_1843_);
v___x_2009_ = lean_box(0);
v___x_2010_ = l_Lean_mkBelow___lam__1(v___x_2009_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
v___y_1947_ = v___x_1983_;
v___y_1948_ = v_a_1980_;
v___y_1949_ = v___x_2010_;
goto v___jp_1946_;
}
}
else
{
lean_object* v_a_2011_; 
lean_dec(v_numNested_1992_);
lean_dec(v_all_1991_);
lean_dec(v_numParams_1990_);
lean_dec(v_indName_1843_);
v_a_2011_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_2011_);
lean_dec_ref_known(v___x_1994_, 1);
v___y_1942_ = v___x_1983_;
v___y_1943_ = v_a_1980_;
v_a_1944_ = v_a_2011_;
goto v___jp_1941_;
}
}
}
else
{
lean_object* v___x_2012_; 
lean_dec(v_a_1985_);
lean_dec(v_indName_1843_);
v___x_2012_ = lean_box(0);
v___y_1937_ = v___x_1983_;
v___y_1938_ = v_a_1980_;
v_a_1939_ = v___x_2012_;
goto v___jp_1936_;
}
}
else
{
lean_object* v_a_2013_; 
lean_dec(v_indName_1843_);
v_a_2013_ = lean_ctor_get(v___x_1984_, 0);
lean_inc(v_a_2013_);
lean_dec_ref_known(v___x_1984_, 1);
v___y_1942_ = v___x_1983_;
v___y_1943_ = v_a_1980_;
v_a_1944_ = v_a_2013_;
goto v___jp_1941_;
}
}
else
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = lean_io_get_num_heartbeats();
lean_inc(v_indName_1843_);
v___x_2015_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
if (lean_obj_tag(v_a_2016_) == 5)
{
lean_object* v_val_2017_; uint8_t v_isRec_2018_; 
v_val_2017_ = lean_ctor_get(v_a_2016_, 0);
lean_inc_ref(v_val_2017_);
lean_dec_ref_known(v_a_2016_, 1);
v_isRec_2018_ = lean_ctor_get_uint8(v_val_2017_, sizeof(void*)*6);
if (v_isRec_2018_ == 0)
{
lean_object* v___x_2019_; 
lean_dec_ref(v_val_2017_);
lean_dec(v_indName_1843_);
v___x_2019_ = lean_box(0);
v___y_1964_ = v___x_2014_;
v___y_1965_ = v_a_1980_;
v_a_1966_ = v___x_2019_;
goto v___jp_1963_;
}
else
{
lean_object* v_toConstantVal_2020_; lean_object* v_numParams_2021_; lean_object* v_all_2022_; lean_object* v_numNested_2023_; lean_object* v_type_2024_; lean_object* v___x_2025_; 
v_toConstantVal_2020_ = lean_ctor_get(v_val_2017_, 0);
lean_inc_ref(v_toConstantVal_2020_);
v_numParams_2021_ = lean_ctor_get(v_val_2017_, 1);
lean_inc(v_numParams_2021_);
v_all_2022_ = lean_ctor_get(v_val_2017_, 3);
lean_inc(v_all_2022_);
v_numNested_2023_ = lean_ctor_get(v_val_2017_, 5);
lean_inc(v_numNested_2023_);
lean_dec_ref(v_val_2017_);
v_type_2024_ = lean_ctor_get(v_toConstantVal_2020_, 2);
lean_inc_ref(v_type_2024_);
lean_dec_ref(v_toConstantVal_2020_);
v___x_2025_ = l_Lean_Meta_isPropFormerType(v_type_2024_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; uint8_t v___x_2027_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
v___x_2027_ = lean_unbox(v_a_2026_);
lean_dec(v_a_2026_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
lean_inc_n(v_indName_1843_, 2);
v___x_2028_ = l_Lean_mkRecName(v_indName_1843_);
v___x_2029_ = l_Lean_mkBelowName(v_indName_1843_);
lean_inc(v___x_2029_);
lean_inc(v_numParams_2021_);
lean_inc(v___x_2028_);
v___x_2030_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec(v___x_2028_, v_numParams_2021_, v___x_2029_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; 
lean_dec_ref_known(v___x_2030_, 1);
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = l_List_get_x21Internal___redArg(v___x_1859_, v_all_2022_, v___x_2031_);
lean_dec(v_all_2022_);
v___x_2033_ = lean_name_eq(v___x_2032_, v_indName_1843_);
lean_dec(v_indName_1843_);
lean_dec(v___x_2032_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
lean_dec(v___x_2029_);
lean_dec(v___x_2028_);
lean_dec(v_numNested_2023_);
lean_dec(v_numParams_2021_);
v___x_2034_ = lean_box(0);
v___x_2035_ = l_Lean_mkBelow___lam__1(v___x_2034_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
v___y_1974_ = v___x_2014_;
v___y_1975_ = v_a_1980_;
v___y_1976_ = v___x_2035_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2036_ = lean_box(0);
v___x_2037_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_numNested_2023_, v___x_2028_, v___x_2029_, v_numParams_2021_, v___x_2031_, v___x_2036_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
lean_dec(v_numNested_2023_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_dec_ref_known(v___x_2037_, 1);
v___y_1964_ = v___x_2014_;
v___y_1965_ = v_a_1980_;
v_a_1966_ = v___x_2036_;
goto v___jp_1963_;
}
else
{
lean_object* v_a_2038_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
v___y_1969_ = v___x_2014_;
v___y_1970_ = v_a_1980_;
v_a_1971_ = v_a_2038_;
goto v___jp_1968_;
}
}
}
else
{
lean_object* v_a_2039_; 
lean_dec(v___x_2029_);
lean_dec(v___x_2028_);
lean_dec(v_numNested_2023_);
lean_dec(v_all_2022_);
lean_dec(v_numParams_2021_);
lean_dec(v_indName_1843_);
v_a_2039_ = lean_ctor_get(v___x_2030_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2030_, 1);
v___y_1969_ = v___x_2014_;
v___y_1970_ = v_a_1980_;
v_a_1971_ = v_a_2039_;
goto v___jp_1968_;
}
}
else
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_dec(v_numNested_2023_);
lean_dec(v_all_2022_);
lean_dec(v_numParams_2021_);
lean_dec(v_indName_1843_);
v___x_2040_ = lean_box(0);
v___x_2041_ = l_Lean_mkBelow___lam__1(v___x_2040_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_);
v___y_1974_ = v___x_2014_;
v___y_1975_ = v_a_1980_;
v___y_1976_ = v___x_2041_;
goto v___jp_1973_;
}
}
else
{
lean_object* v_a_2042_; 
lean_dec(v_numNested_2023_);
lean_dec(v_all_2022_);
lean_dec(v_numParams_2021_);
lean_dec(v_indName_1843_);
v_a_2042_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2025_, 1);
v___y_1969_ = v___x_2014_;
v___y_1970_ = v_a_1980_;
v_a_1971_ = v_a_2042_;
goto v___jp_1968_;
}
}
}
else
{
lean_object* v___x_2043_; 
lean_dec(v_a_2016_);
lean_dec(v_indName_1843_);
v___x_2043_ = lean_box(0);
v___y_1964_ = v___x_2014_;
v___y_1965_ = v_a_1980_;
v_a_1966_ = v___x_2043_;
goto v___jp_1963_;
}
}
else
{
lean_object* v_a_2044_; 
lean_dec(v_indName_1843_);
v_a_2044_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2015_, 1);
v___y_1969_ = v___x_2014_;
v___y_1970_ = v_a_1980_;
v_a_1971_ = v_a_2044_;
goto v___jp_1968_;
}
}
}
}
v___jp_1849_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1850_ = lean_box(0);
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
return v___x_1851_;
}
v___jp_1852_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = lean_box(0);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkBelow___boxed(lean_object* v_indName_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_Lean_mkBelow(v_indName_2103_, v_a_2104_, v_a_2105_, v_a_2106_, v_a_2107_);
lean_dec(v_a_2107_);
lean_dec_ref(v_a_2106_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0(lean_object* v_upperBound_2110_, lean_object* v___x_2111_, lean_object* v___x_2112_, lean_object* v___x_2113_, lean_object* v_inst_2114_, lean_object* v_R_2115_, lean_object* v_a_2116_, lean_object* v_b_2117_, lean_object* v_c_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___redArg(v_upperBound_2110_, v___x_2111_, v___x_2112_, v___x_2113_, v_a_2116_, v_b_2117_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0___boxed(lean_object* v_upperBound_2125_, lean_object* v___x_2126_, lean_object* v___x_2127_, lean_object* v___x_2128_, lean_object* v_inst_2129_, lean_object* v_R_2130_, lean_object* v_a_2131_, lean_object* v_b_2132_, lean_object* v_c_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBelow_spec__0(v_upperBound_2125_, v___x_2126_, v___x_2127_, v___x_2128_, v_inst_2129_, v_R_2130_, v_a_2131_, v_b_2132_, v_c_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v_upperBound_2125_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4(lean_object* v_00_u03b1_2140_, lean_object* v_x_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v___x_2147_; 
v___x_2147_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___redArg(v_x_2141_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2148_, lean_object* v_x_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3_spec__4(v_00_u03b1_2148_, v_x_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_);
lean_dec(v___y_2153_);
lean_dec_ref(v___y_2152_);
lean_dec(v___y_2151_);
lean_dec_ref(v___y_2150_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(lean_object* v_a_2156_, lean_object* v_a_2157_){
_start:
{
if (lean_obj_tag(v_a_2156_) == 0)
{
lean_object* v___x_2158_; 
v___x_2158_ = l_List_reverse___redArg(v_a_2157_);
return v___x_2158_;
}
else
{
lean_object* v_head_2159_; lean_object* v_tail_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2169_; 
v_head_2159_ = lean_ctor_get(v_a_2156_, 0);
v_tail_2160_ = lean_ctor_get(v_a_2156_, 1);
v_isSharedCheck_2169_ = !lean_is_exclusive(v_a_2156_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2162_ = v_a_2156_;
v_isShared_2163_ = v_isSharedCheck_2169_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_tail_2160_);
lean_inc(v_head_2159_);
lean_dec(v_a_2156_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2169_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2164_ = l_Lean_MessageData_ofExpr(v_head_2159_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 1, v_a_2157_);
lean_ctor_set(v___x_2162_, 0, v___x_2164_);
v___x_2166_ = v___x_2162_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v_a_2157_);
v___x_2166_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
v_a_2156_ = v_tail_2160_;
v_a_2157_ = v___x_2166_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(lean_object* v_xs_2170_, lean_object* v_v_2171_, lean_object* v_i_2172_){
_start:
{
lean_object* v___x_2173_; uint8_t v___x_2174_; 
v___x_2173_ = lean_array_get_size(v_xs_2170_);
v___x_2174_ = lean_nat_dec_lt(v_i_2172_, v___x_2173_);
if (v___x_2174_ == 0)
{
lean_object* v___x_2175_; 
lean_dec(v_i_2172_);
v___x_2175_ = lean_box(0);
return v___x_2175_;
}
else
{
lean_object* v___x_2176_; uint8_t v___x_2177_; 
v___x_2176_ = lean_array_fget_borrowed(v_xs_2170_, v_i_2172_);
v___x_2177_ = lean_expr_eqv(v___x_2176_, v_v_2171_);
if (v___x_2177_ == 0)
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2178_ = lean_unsigned_to_nat(1u);
v___x_2179_ = lean_nat_add(v_i_2172_, v___x_2178_);
lean_dec(v_i_2172_);
v_i_2172_ = v___x_2179_;
goto _start;
}
else
{
lean_object* v___x_2181_; 
v___x_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2181_, 0, v_i_2172_);
return v___x_2181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_2182_, lean_object* v_v_2183_, lean_object* v_i_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(v_xs_2182_, v_v_2183_, v_i_2184_);
lean_dec_ref(v_v_2183_);
lean_dec_ref(v_xs_2182_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(lean_object* v_xs_2186_, lean_object* v_v_2187_){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = lean_unsigned_to_nat(0u);
v___x_2189_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0_spec__1(v_xs_2186_, v_v_2187_, v___x_2188_);
return v___x_2189_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0___boxed(lean_object* v_xs_2190_, lean_object* v_v_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(v_xs_2190_, v_v_2191_);
lean_dec_ref(v_v_2191_);
lean_dec_ref(v_xs_2190_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(lean_object* v_xs_2193_, lean_object* v_v_2194_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0_spec__0(v_xs_2193_, v_v_2194_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v___x_2196_; 
v___x_2196_ = lean_box(0);
return v___x_2196_;
}
else
{
lean_object* v_val_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
v_val_2197_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2195_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_val_2197_);
lean_dec(v___x_2195_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_val_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0___boxed(lean_object* v_xs_2205_, lean_object* v_v_2206_){
_start:
{
lean_object* v_res_2207_; 
v_res_2207_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v_xs_2205_, v_v_2206_);
lean_dec_ref(v_v_2206_);
lean_dec_ref(v_xs_2205_);
return v_res_2207_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__0));
v___x_2210_ = l_Lean_stringToMessageData(v___x_2209_);
return v___x_2210_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__2));
v___x_2213_ = l_Lean_stringToMessageData(v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(lean_object* v_rlvl_2214_, lean_object* v_prods_2215_, lean_object* v_motives_2216_, lean_object* v_fs_2217_, lean_object* v_minor__type_2218_, lean_object* v_x_2219_, lean_object* v_x_2220_, lean_object* v_x_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
if (lean_obj_tag(v_x_2219_) == 5)
{
lean_object* v_fn_2227_; lean_object* v_arg_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v_fn_2227_ = lean_ctor_get(v_x_2219_, 0);
lean_inc_ref(v_fn_2227_);
v_arg_2228_ = lean_ctor_get(v_x_2219_, 1);
lean_inc_ref(v_arg_2228_);
lean_dec_ref_known(v_x_2219_, 2);
v___x_2229_ = lean_array_set(v_x_2220_, v_x_2221_, v_arg_2228_);
v___x_2230_ = lean_unsigned_to_nat(1u);
v___x_2231_ = lean_nat_sub(v_x_2221_, v___x_2230_);
lean_dec(v_x_2221_);
v_x_2219_ = v_fn_2227_;
v_x_2220_ = v___x_2229_;
v_x_2221_ = v___x_2231_;
goto _start;
}
else
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
lean_dec(v_x_2221_);
v___x_2233_ = l_Lean_instInhabitedExpr;
v___x_2234_ = l_Lean_Meta_PProdN_mk(v_rlvl_2214_, v_prods_2215_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v___x_2236_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref_known(v___x_2234_, 1);
v___x_2236_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v_motives_2216_, v_x_2219_);
lean_dec_ref(v_x_2219_);
if (lean_obj_tag(v___x_2236_) == 1)
{
lean_object* v_val_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
lean_dec_ref(v_minor__type_2218_);
lean_dec_ref(v_motives_2216_);
v_val_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_val_2237_);
lean_dec_ref_known(v___x_2236_, 1);
v___x_2238_ = lean_array_get_borrowed(v___x_2233_, v_fs_2217_, v_val_2237_);
lean_dec(v_val_2237_);
lean_inc(v_a_2235_);
v___x_2239_ = lean_array_push(v_x_2220_, v_a_2235_);
lean_inc(v___x_2238_);
v___x_2240_ = l_Lean_mkAppN(v___x_2238_, v___x_2239_);
lean_dec_ref(v___x_2239_);
v___x_2241_ = l_Lean_Meta_mkPProdMk(v___x_2240_, v_a_2235_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
return v___x_2241_;
}
else
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_dec(v___x_2236_);
lean_dec(v_a_2235_);
lean_dec_ref(v_x_2220_);
v___x_2242_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__1);
v___x_2243_ = l_Lean_MessageData_ofExpr(v_minor__type_2218_);
v___x_2244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2242_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___closed__3);
v___x_2246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2244_);
lean_ctor_set(v___x_2246_, 1, v___x_2245_);
v___x_2247_ = lean_array_to_list(v_motives_2216_);
v___x_2248_ = lean_box(0);
v___x_2249_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(v___x_2247_, v___x_2248_);
v___x_2250_ = l_Lean_MessageData_ofList(v___x_2249_);
v___x_2251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2246_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
v___x_2252_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_2251_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
return v___x_2252_;
}
}
else
{
lean_dec_ref(v_x_2220_);
lean_dec_ref(v_x_2219_);
lean_dec_ref(v_minor__type_2218_);
lean_dec_ref(v_motives_2216_);
return v___x_2234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2___boxed(lean_object* v_rlvl_2253_, lean_object* v_prods_2254_, lean_object* v_motives_2255_, lean_object* v_fs_2256_, lean_object* v_minor__type_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_, lean_object* v_x_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(v_rlvl_2253_, v_prods_2254_, v_motives_2255_, v_fs_2256_, v_minor__type_2257_, v_x_2258_, v_x_2259_, v_x_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec_ref(v_fs_2256_);
return v_res_2266_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2267_; lean_object* v_dummy_2268_; 
v___x_2267_ = lean_box(0);
v_dummy_2268_ = l_Lean_Expr_sort___override(v___x_2267_);
return v_dummy_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___boxed(lean_object* v_motives_2269_, lean_object* v_head_2270_, lean_object* v_belows_2271_, lean_object* v_prods_2272_, lean_object* v_rlvl_2273_, lean_object* v_fs_2274_, lean_object* v_minor__type_2275_, lean_object* v_tail_2276_, lean_object* v_arg__args_2277_, lean_object* v_arg__type_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0(v_motives_2269_, v_head_2270_, v_belows_2271_, v_prods_2272_, v_rlvl_2273_, v_fs_2274_, v_minor__type_2275_, v_tail_2276_, v_arg__args_2277_, v_arg__type_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec_ref(v_arg__args_2277_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(lean_object* v_rlvl_2285_, lean_object* v_motives_2286_, lean_object* v_belows_2287_, lean_object* v_fs_2288_, lean_object* v_minor__type_2289_, lean_object* v_prods_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_){
_start:
{
if (lean_obj_tag(v_a_2291_) == 0)
{
lean_object* v_dummy_2297_; lean_object* v_nargs_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec_ref(v_belows_2287_);
v_dummy_2297_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0);
v_nargs_2298_ = l_Lean_Expr_getAppNumArgs(v_minor__type_2289_);
lean_inc(v_nargs_2298_);
v___x_2299_ = lean_mk_array(v_nargs_2298_, v_dummy_2297_);
v___x_2300_ = lean_unsigned_to_nat(1u);
v___x_2301_ = lean_nat_sub(v_nargs_2298_, v___x_2300_);
lean_dec(v_nargs_2298_);
lean_inc_ref(v_minor__type_2289_);
v___x_2302_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__2(v_rlvl_2285_, v_prods_2290_, v_motives_2286_, v_fs_2288_, v_minor__type_2289_, v_minor__type_2289_, v___x_2299_, v___x_2301_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_);
lean_dec_ref(v_fs_2288_);
return v___x_2302_;
}
else
{
lean_object* v_head_2303_; lean_object* v_tail_2304_; lean_object* v___f_2305_; lean_object* v___x_2306_; 
v_head_2303_ = lean_ctor_get(v_a_2291_, 0);
lean_inc_n(v_head_2303_, 2);
v_tail_2304_ = lean_ctor_get(v_a_2291_, 1);
lean_inc(v_tail_2304_);
lean_dec_ref_known(v_a_2291_, 2);
v___f_2305_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___boxed), 15, 8);
lean_closure_set(v___f_2305_, 0, v_motives_2286_);
lean_closure_set(v___f_2305_, 1, v_head_2303_);
lean_closure_set(v___f_2305_, 2, v_belows_2287_);
lean_closure_set(v___f_2305_, 3, v_prods_2290_);
lean_closure_set(v___f_2305_, 4, v_rlvl_2285_);
lean_closure_set(v___f_2305_, 5, v_fs_2288_);
lean_closure_set(v___f_2305_, 6, v_minor__type_2289_);
lean_closure_set(v___f_2305_, 7, v_tail_2304_);
lean_inc(v_a_2295_);
lean_inc_ref(v_a_2294_);
lean_inc(v_a_2293_);
lean_inc_ref(v_a_2292_);
v___x_2306_ = lean_infer_type(v_head_2303_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; uint8_t v___x_2308_; lean_object* v___x_2309_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref_known(v___x_2306_, 1);
v___x_2308_ = 0;
v___x_2309_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_2307_, v___f_2305_, v___x_2308_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_);
return v___x_2309_;
}
else
{
lean_dec_ref(v___f_2305_);
return v___x_2306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0(lean_object* v_prods_2310_, lean_object* v_rlvl_2311_, lean_object* v_motives_2312_, lean_object* v_belows_2313_, lean_object* v_fs_2314_, lean_object* v_minor__type_2315_, lean_object* v_tail_2316_, uint8_t v___x_2317_, uint8_t v___x_2318_, uint8_t v___x_2319_, lean_object* v_arg_x27_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
lean_inc_ref(v_arg_x27_2320_);
v___x_2326_ = lean_array_push(v_prods_2310_, v_arg_x27_2320_);
v___x_2327_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2311_, v_motives_2312_, v_belows_2313_, v_fs_2314_, v_minor__type_2315_, v___x_2326_, v_tail_2316_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref_known(v___x_2327_, 1);
v___x_2329_ = lean_unsigned_to_nat(1u);
v___x_2330_ = lean_mk_empty_array_with_capacity(v___x_2329_);
v___x_2331_ = lean_array_push(v___x_2330_, v_arg_x27_2320_);
v___x_2332_ = l_Lean_Meta_mkLambdaFVars(v___x_2331_, v_a_2328_, v___x_2317_, v___x_2318_, v___x_2317_, v___x_2318_, v___x_2319_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
lean_dec_ref(v___x_2331_);
return v___x_2332_;
}
else
{
lean_dec_ref(v_arg_x27_2320_);
return v___x_2327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0___boxed(lean_object* v_prods_2333_, lean_object* v_rlvl_2334_, lean_object* v_motives_2335_, lean_object* v_belows_2336_, lean_object* v_fs_2337_, lean_object* v_minor__type_2338_, lean_object* v_tail_2339_, lean_object* v___x_2340_, lean_object* v___x_2341_, lean_object* v___x_2342_, lean_object* v_arg_x27_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
uint8_t v___x_1689__boxed_2349_; uint8_t v___x_1690__boxed_2350_; uint8_t v___x_1691__boxed_2351_; lean_object* v_res_2352_; 
v___x_1689__boxed_2349_ = lean_unbox(v___x_2340_);
v___x_1690__boxed_2350_ = lean_unbox(v___x_2341_);
v___x_1691__boxed_2351_ = lean_unbox(v___x_2342_);
v_res_2352_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0(v_prods_2333_, v_rlvl_2334_, v_motives_2335_, v_belows_2336_, v_fs_2337_, v_minor__type_2338_, v_tail_2339_, v___x_1689__boxed_2349_, v___x_1690__boxed_2350_, v___x_1691__boxed_2351_, v_arg_x27_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(lean_object* v_motives_2353_, lean_object* v_head_2354_, lean_object* v_belows_2355_, lean_object* v_arg__type_2356_, lean_object* v_prods_2357_, lean_object* v_rlvl_2358_, lean_object* v_fs_2359_, lean_object* v_minor__type_2360_, lean_object* v_tail_2361_, lean_object* v_arg__args_2362_, lean_object* v_x_2363_, lean_object* v_x_2364_, lean_object* v_x_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
if (lean_obj_tag(v_x_2363_) == 5)
{
lean_object* v_fn_2371_; lean_object* v_arg_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v_fn_2371_ = lean_ctor_get(v_x_2363_, 0);
lean_inc_ref(v_fn_2371_);
v_arg_2372_ = lean_ctor_get(v_x_2363_, 1);
lean_inc_ref(v_arg_2372_);
lean_dec_ref_known(v_x_2363_, 2);
v___x_2373_ = lean_array_set(v_x_2364_, v_x_2365_, v_arg_2372_);
v___x_2374_ = lean_unsigned_to_nat(1u);
v___x_2375_ = lean_nat_sub(v_x_2365_, v___x_2374_);
lean_dec(v_x_2365_);
v_x_2363_ = v_fn_2371_;
v_x_2364_ = v___x_2373_;
v_x_2365_ = v___x_2375_;
goto _start;
}
else
{
lean_object* v___x_2377_; 
lean_dec(v_x_2365_);
v___x_2377_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v_motives_2353_, v_x_2363_);
lean_dec_ref(v_x_2363_);
if (lean_obj_tag(v___x_2377_) == 1)
{
lean_object* v_val_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v_val_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_val_2378_);
lean_dec_ref_known(v___x_2377_, 1);
v___x_2379_ = l_Lean_instInhabitedExpr;
v___x_2380_ = l_Lean_Expr_fvarId_x21(v_head_2354_);
lean_dec_ref(v_head_2354_);
v___x_2381_ = l_Lean_FVarId_getUserName___redArg(v___x_2380_, v___y_2366_, v___y_2368_, v___y_2369_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2382_);
lean_dec_ref_known(v___x_2381_, 1);
v___x_2383_ = lean_array_get_borrowed(v___x_2379_, v_belows_2355_, v_val_2378_);
lean_dec(v_val_2378_);
lean_inc(v___x_2383_);
v___x_2384_ = l_Lean_mkAppN(v___x_2383_, v_x_2364_);
lean_dec_ref(v_x_2364_);
v___x_2385_ = l_Lean_Meta_mkPProd(v_arg__type_2356_, v___x_2384_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; uint8_t v___x_2387_; uint8_t v___x_2388_; uint8_t v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___f_2393_; lean_object* v___x_2394_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2386_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2387_ = 0;
v___x_2388_ = 1;
v___x_2389_ = 1;
v___x_2390_ = lean_box(v___x_2387_);
v___x_2391_ = lean_box(v___x_2388_);
v___x_2392_ = lean_box(v___x_2389_);
v___f_2393_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___lam__0___boxed), 16, 10);
lean_closure_set(v___f_2393_, 0, v_prods_2357_);
lean_closure_set(v___f_2393_, 1, v_rlvl_2358_);
lean_closure_set(v___f_2393_, 2, v_motives_2353_);
lean_closure_set(v___f_2393_, 3, v_belows_2355_);
lean_closure_set(v___f_2393_, 4, v_fs_2359_);
lean_closure_set(v___f_2393_, 5, v_minor__type_2360_);
lean_closure_set(v___f_2393_, 6, v_tail_2361_);
lean_closure_set(v___f_2393_, 7, v___x_2390_);
lean_closure_set(v___f_2393_, 8, v___x_2391_);
lean_closure_set(v___f_2393_, 9, v___x_2392_);
v___x_2394_ = l_Lean_Meta_mkForallFVars(v_arg__args_2362_, v_a_2386_, v___x_2387_, v___x_2388_, v___x_2388_, v___x_2389_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2396_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2396_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v_a_2382_, v_a_2395_, v___f_2393_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
return v___x_2396_;
}
else
{
lean_dec_ref(v___f_2393_);
lean_dec(v_a_2382_);
return v___x_2394_;
}
}
else
{
lean_dec(v_a_2382_);
lean_dec(v_tail_2361_);
lean_dec_ref(v_minor__type_2360_);
lean_dec_ref(v_fs_2359_);
lean_dec(v_rlvl_2358_);
lean_dec_ref(v_prods_2357_);
lean_dec_ref(v_belows_2355_);
lean_dec_ref(v_motives_2353_);
return v___x_2385_;
}
}
else
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2404_; 
lean_dec(v_val_2378_);
lean_dec_ref(v_x_2364_);
lean_dec(v_tail_2361_);
lean_dec_ref(v_minor__type_2360_);
lean_dec_ref(v_fs_2359_);
lean_dec(v_rlvl_2358_);
lean_dec_ref(v_prods_2357_);
lean_dec_ref(v_arg__type_2356_);
lean_dec_ref(v_belows_2355_);
lean_dec_ref(v_motives_2353_);
v_a_2397_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2399_ = v___x_2381_;
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2381_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2402_; 
if (v_isShared_2400_ == 0)
{
v___x_2402_ = v___x_2399_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_a_2397_);
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
lean_object* v___x_2405_; 
lean_dec(v___x_2377_);
lean_dec_ref(v_x_2364_);
lean_dec_ref(v_arg__type_2356_);
v___x_2405_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2358_, v_motives_2353_, v_belows_2355_, v_fs_2359_, v_minor__type_2360_, v_prods_2357_, v_tail_2361_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; uint8_t v___x_2410_; uint8_t v___x_2411_; uint8_t v___x_2412_; lean_object* v___x_2413_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2406_);
lean_dec_ref_known(v___x_2405_, 1);
v___x_2407_ = lean_unsigned_to_nat(1u);
v___x_2408_ = lean_mk_empty_array_with_capacity(v___x_2407_);
v___x_2409_ = lean_array_push(v___x_2408_, v_head_2354_);
v___x_2410_ = 0;
v___x_2411_ = 1;
v___x_2412_ = 1;
v___x_2413_ = l_Lean_Meta_mkLambdaFVars(v___x_2409_, v_a_2406_, v___x_2410_, v___x_2411_, v___x_2410_, v___x_2411_, v___x_2412_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
lean_dec_ref(v___x_2409_);
return v___x_2413_;
}
else
{
lean_dec_ref(v_head_2354_);
return v___x_2405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0(lean_object* v_motives_2414_, lean_object* v_head_2415_, lean_object* v_belows_2416_, lean_object* v_prods_2417_, lean_object* v_rlvl_2418_, lean_object* v_fs_2419_, lean_object* v_minor__type_2420_, lean_object* v_tail_2421_, lean_object* v_arg__args_2422_, lean_object* v_arg__type_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_dummy_2429_; lean_object* v_nargs_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_dummy_2429_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___lam__0___closed__0);
v_nargs_2430_ = l_Lean_Expr_getAppNumArgs(v_arg__type_2423_);
lean_inc(v_nargs_2430_);
v___x_2431_ = lean_mk_array(v_nargs_2430_, v_dummy_2429_);
v___x_2432_ = lean_unsigned_to_nat(1u);
v___x_2433_ = lean_nat_sub(v_nargs_2430_, v___x_2432_);
lean_dec(v_nargs_2430_);
lean_inc_ref(v_arg__type_2423_);
v___x_2434_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(v_motives_2414_, v_head_2415_, v_belows_2416_, v_arg__type_2423_, v_prods_2417_, v_rlvl_2418_, v_fs_2419_, v_minor__type_2420_, v_tail_2421_, v_arg__args_2422_, v_arg__type_2423_, v___x_2431_, v___x_2433_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go___boxed(lean_object* v_rlvl_2435_, lean_object* v_motives_2436_, lean_object* v_belows_2437_, lean_object* v_fs_2438_, lean_object* v_minor__type_2439_, lean_object* v_prods_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2435_, v_motives_2436_, v_belows_2437_, v_fs_2438_, v_minor__type_2439_, v_prods_2440_, v_a_2441_, v_a_2442_, v_a_2443_, v_a_2444_, v_a_2445_);
lean_dec(v_a_2445_);
lean_dec_ref(v_a_2444_);
lean_dec(v_a_2443_);
lean_dec_ref(v_a_2442_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3___boxed(lean_object** _args){
lean_object* v_motives_2448_ = _args[0];
lean_object* v_head_2449_ = _args[1];
lean_object* v_belows_2450_ = _args[2];
lean_object* v_arg__type_2451_ = _args[3];
lean_object* v_prods_2452_ = _args[4];
lean_object* v_rlvl_2453_ = _args[5];
lean_object* v_fs_2454_ = _args[6];
lean_object* v_minor__type_2455_ = _args[7];
lean_object* v_tail_2456_ = _args[8];
lean_object* v_arg__args_2457_ = _args[9];
lean_object* v_x_2458_ = _args[10];
lean_object* v_x_2459_ = _args[11];
lean_object* v_x_2460_ = _args[12];
lean_object* v___y_2461_ = _args[13];
lean_object* v___y_2462_ = _args[14];
lean_object* v___y_2463_ = _args[15];
lean_object* v___y_2464_ = _args[16];
lean_object* v___y_2465_ = _args[17];
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__3(v_motives_2448_, v_head_2449_, v_belows_2450_, v_arg__type_2451_, v_prods_2452_, v_rlvl_2453_, v_fs_2454_, v_minor__type_2455_, v_tail_2456_, v_arg__args_2457_, v_x_2458_, v_x_2459_, v_x_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec_ref(v_arg__args_2457_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0(lean_object* v_rlvl_2467_, lean_object* v_motives_2468_, lean_object* v_belows_2469_, lean_object* v_fs_2470_, lean_object* v_minor__args_2471_, lean_object* v_minor__type_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2478_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0));
v___x_2479_ = lean_array_to_list(v_minor__args_2471_);
v___x_2480_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go(v_rlvl_2467_, v_motives_2468_, v_belows_2469_, v_fs_2470_, v_minor__type_2472_, v___x_2478_, v___x_2479_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0___boxed(lean_object* v_rlvl_2481_, lean_object* v_motives_2482_, lean_object* v_belows_2483_, lean_object* v_fs_2484_, lean_object* v_minor__args_2485_, lean_object* v_minor__type_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0(v_rlvl_2481_, v_motives_2482_, v_belows_2483_, v_fs_2484_, v_minor__args_2485_, v_minor__type_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(lean_object* v_rlvl_2493_, lean_object* v_motives_2494_, lean_object* v_belows_2495_, lean_object* v_fs_2496_, lean_object* v_minorType_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_){
_start:
{
lean_object* v___f_2503_; uint8_t v___x_2504_; lean_object* v___x_2505_; 
v___f_2503_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2503_, 0, v_rlvl_2493_);
lean_closure_set(v___f_2503_, 1, v_motives_2494_);
lean_closure_set(v___f_2503_, 2, v_belows_2495_);
lean_closure_set(v___f_2503_, 3, v_fs_2496_);
v___x_2504_ = 0;
v___x_2505_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_minorType_2497_, v___f_2503_, v___x_2504_, v_a_2498_, v_a_2499_, v_a_2500_, v_a_2501_);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise___boxed(lean_object* v_rlvl_2506_, lean_object* v_motives_2507_, lean_object* v_belows_2508_, lean_object* v_fs_2509_, lean_object* v_minorType_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(v_rlvl_2506_, v_motives_2507_, v_belows_2508_, v_fs_2509_, v_minorType_2510_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_);
lean_dec(v_a_2514_);
lean_dec_ref(v_a_2513_);
lean_dec(v_a_2512_);
lean_dec_ref(v_a_2511_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(lean_object* v_msg_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v___f_2523_; lean_object* v___x_31005__overap_2524_; lean_object* v___x_2525_; 
v___f_2523_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__2___closed__0));
v___x_31005__overap_2524_ = lean_panic_fn_borrowed(v___f_2523_, v_msg_2517_);
lean_inc(v___y_2521_);
lean_inc_ref(v___y_2520_);
lean_inc(v___y_2519_);
lean_inc_ref(v___y_2518_);
v___x_2525_ = lean_apply_5(v___x_31005__overap_2524_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, lean_box(0));
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0___boxed(lean_object* v_msg_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(v_msg_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(lean_object* v_e_2533_, lean_object* v___y_2534_){
_start:
{
uint8_t v___x_2536_; 
v___x_2536_ = l_Lean_Expr_hasMVar(v_e_2533_);
if (v___x_2536_ == 0)
{
lean_object* v___x_2537_; 
v___x_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2537_, 0, v_e_2533_);
return v___x_2537_;
}
else
{
lean_object* v___x_2538_; lean_object* v_mctx_2539_; lean_object* v___x_2540_; lean_object* v_fst_2541_; lean_object* v_snd_2542_; lean_object* v___x_2543_; lean_object* v_cache_2544_; lean_object* v_zetaDeltaFVarIds_2545_; lean_object* v_postponed_2546_; lean_object* v_diag_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2556_; 
v___x_2538_ = lean_st_ref_get(v___y_2534_);
v_mctx_2539_ = lean_ctor_get(v___x_2538_, 0);
lean_inc_ref(v_mctx_2539_);
lean_dec(v___x_2538_);
v___x_2540_ = l_Lean_instantiateMVarsCore(v_mctx_2539_, v_e_2533_);
v_fst_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_fst_2541_);
v_snd_2542_ = lean_ctor_get(v___x_2540_, 1);
lean_inc(v_snd_2542_);
lean_dec_ref(v___x_2540_);
v___x_2543_ = lean_st_ref_take(v___y_2534_);
v_cache_2544_ = lean_ctor_get(v___x_2543_, 1);
v_zetaDeltaFVarIds_2545_ = lean_ctor_get(v___x_2543_, 2);
v_postponed_2546_ = lean_ctor_get(v___x_2543_, 3);
v_diag_2547_ = lean_ctor_get(v___x_2543_, 4);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2556_ == 0)
{
lean_object* v_unused_2557_; 
v_unused_2557_ = lean_ctor_get(v___x_2543_, 0);
lean_dec(v_unused_2557_);
v___x_2549_ = v___x_2543_;
v_isShared_2550_ = v_isSharedCheck_2556_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_diag_2547_);
lean_inc(v_postponed_2546_);
lean_inc(v_zetaDeltaFVarIds_2545_);
lean_inc(v_cache_2544_);
lean_dec(v___x_2543_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2556_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 0, v_snd_2542_);
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_snd_2542_);
lean_ctor_set(v_reuseFailAlloc_2555_, 1, v_cache_2544_);
lean_ctor_set(v_reuseFailAlloc_2555_, 2, v_zetaDeltaFVarIds_2545_);
lean_ctor_set(v_reuseFailAlloc_2555_, 3, v_postponed_2546_);
lean_ctor_set(v_reuseFailAlloc_2555_, 4, v_diag_2547_);
v___x_2552_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = lean_st_ref_put(v___y_2534_, v___x_2552_);
v___x_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2554_, 0, v_fst_2541_);
return v___x_2554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg___boxed(lean_object* v_e_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(v_e_2558_, v___y_2559_);
lean_dec(v___y_2559_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4(lean_object* v_e_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v___x_2568_; 
v___x_2568_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(v_e_2562_, v___y_2564_);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___boxed(lean_object* v_e_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4(v_e_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(lean_object* v_thm_2576_, lean_object* v___y_2577_){
_start:
{
lean_object* v___x_2579_; lean_object* v_env_2580_; lean_object* v_toConstantVal_2581_; lean_object* v_value_2582_; lean_object* v_all_2583_; lean_object* v_type_2590_; uint8_t v___x_2591_; 
v___x_2579_ = lean_st_ref_get(v___y_2577_);
v_env_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc_ref_n(v_env_2580_, 2);
lean_dec(v___x_2579_);
v_toConstantVal_2581_ = lean_ctor_get(v_thm_2576_, 0);
v_value_2582_ = lean_ctor_get(v_thm_2576_, 1);
v_all_2583_ = lean_ctor_get(v_thm_2576_, 2);
v_type_2590_ = lean_ctor_get(v_toConstantVal_2581_, 2);
v___x_2591_ = l_Lean_Environment_hasUnsafe(v_env_2580_, v_type_2590_);
if (v___x_2591_ == 0)
{
uint8_t v___x_2592_; 
v___x_2592_ = l_Lean_Environment_hasUnsafe(v_env_2580_, v_value_2582_);
if (v___x_2592_ == 0)
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2593_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2593_, 0, v_thm_2576_);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
else
{
lean_inc(v_all_2583_);
lean_inc_ref(v_value_2582_);
lean_inc_ref(v_toConstantVal_2581_);
lean_dec_ref(v_thm_2576_);
goto v___jp_2584_;
}
}
else
{
lean_inc(v_all_2583_);
lean_inc_ref(v_value_2582_);
lean_inc_ref(v_toConstantVal_2581_);
lean_dec_ref(v_env_2580_);
lean_dec_ref(v_thm_2576_);
goto v___jp_2584_;
}
v___jp_2584_:
{
lean_object* v___x_2585_; uint8_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2585_ = lean_box(0);
v___x_2586_ = 0;
v___x_2587_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2587_, 0, v_toConstantVal_2581_);
lean_ctor_set(v___x_2587_, 1, v_value_2582_);
lean_ctor_set(v___x_2587_, 2, v___x_2585_);
lean_ctor_set(v___x_2587_, 3, v_all_2583_);
lean_ctor_set_uint8(v___x_2587_, sizeof(void*)*4, v___x_2586_);
v___x_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
v___x_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
return v___x_2589_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg___boxed(lean_object* v_thm_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(v_thm_2595_, v___y_2596_);
lean_dec(v___y_2596_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5(lean_object* v_thm_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(v_thm_2599_, v___y_2603_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___boxed(lean_object* v_thm_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5(v_thm_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec(v___y_2610_);
lean_dec_ref(v___y_2609_);
lean_dec(v___y_2608_);
lean_dec_ref(v___y_2607_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0(lean_object* v___x_2614_, lean_object* v___x_2615_, lean_object* v___x_2616_, lean_object* v_all_2617_, lean_object* v___x_2618_, lean_object* v___x_2619_, lean_object* v___x_2620_, lean_object* v_x_2621_){
_start:
{
lean_object* v___y_2623_; lean_object* v___x_2627_; uint8_t v___x_2628_; 
v___x_2627_ = lean_array_get_size(v_all_2617_);
v___x_2628_ = lean_nat_dec_lt(v_x_2621_, v___x_2627_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2629_ = lean_array_get_borrowed(v___x_2618_, v_all_2617_, v___x_2619_);
v___x_2630_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___closed__0));
v___x_2631_ = lean_nat_sub(v_x_2621_, v___x_2627_);
v___x_2632_ = lean_nat_add(v___x_2631_, v___x_2620_);
lean_dec(v___x_2631_);
v___x_2633_ = l_Nat_reprFast(v___x_2632_);
v___x_2634_ = lean_string_append(v___x_2630_, v___x_2633_);
lean_dec_ref(v___x_2633_);
lean_inc(v___x_2629_);
v___x_2635_ = l_Lean_Name_str___override(v___x_2629_, v___x_2634_);
v___y_2623_ = v___x_2635_;
goto v___jp_2622_;
}
else
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2636_ = lean_array_fget_borrowed(v_all_2617_, v_x_2621_);
lean_inc(v___x_2636_);
v___x_2637_ = l_Lean_mkBelowName(v___x_2636_);
v___y_2623_ = v___x_2637_;
goto v___jp_2622_;
}
v___jp_2622_:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2624_ = l_Lean_Expr_const___override(v___y_2623_, v___x_2614_);
v___x_2625_ = l_Array_append___redArg(v___x_2615_, v___x_2616_);
v___x_2626_ = l_Lean_mkAppN(v___x_2624_, v___x_2625_);
lean_dec_ref(v___x_2625_);
return v___x_2626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___boxed(lean_object* v___x_2638_, lean_object* v___x_2639_, lean_object* v___x_2640_, lean_object* v_all_2641_, lean_object* v___x_2642_, lean_object* v___x_2643_, lean_object* v___x_2644_, lean_object* v_x_2645_){
_start:
{
lean_object* v_res_2646_; 
v_res_2646_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0(v___x_2638_, v___x_2639_, v___x_2640_, v_all_2641_, v___x_2642_, v___x_2643_, v___x_2644_, v_x_2645_);
lean_dec(v_x_2645_);
lean_dec(v___x_2644_);
lean_dec(v___x_2643_);
lean_dec(v___x_2642_);
lean_dec_ref(v_all_2641_);
lean_dec_ref(v___x_2640_);
return v_res_2646_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(lean_object* v___x_2647_, lean_object* v___x_2648_, lean_object* v___x_2649_, lean_object* v_fs_2650_, lean_object* v_as_2651_, size_t v_sz_2652_, size_t v_i_2653_, lean_object* v_b_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
uint8_t v___x_2660_; 
v___x_2660_ = lean_usize_dec_lt(v_i_2653_, v_sz_2652_);
if (v___x_2660_ == 0)
{
lean_object* v___x_2661_; 
lean_dec_ref(v_fs_2650_);
lean_dec_ref(v___x_2649_);
lean_dec_ref(v___x_2648_);
lean_dec(v___x_2647_);
v___x_2661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2661_, 0, v_b_2654_);
return v___x_2661_;
}
else
{
lean_object* v_a_2662_; lean_object* v___x_2663_; 
v_a_2662_ = lean_array_uget_borrowed(v_as_2651_, v_i_2653_);
lean_inc(v___y_2658_);
lean_inc_ref(v___y_2657_);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v_a_2662_);
v___x_2663_ = lean_infer_type(v_a_2662_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2665_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
lean_inc_ref(v_fs_2650_);
lean_inc_ref(v___x_2649_);
lean_inc_ref(v___x_2648_);
lean_inc(v___x_2647_);
v___x_2665_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise(v___x_2647_, v___x_2648_, v___x_2649_, v_fs_2650_, v_a_2664_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; lean_object* v___x_2667_; size_t v___x_2668_; size_t v___x_2669_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2666_);
lean_dec_ref_known(v___x_2665_, 1);
v___x_2667_ = l_Lean_Expr_app___override(v_b_2654_, v_a_2666_);
v___x_2668_ = ((size_t)1ULL);
v___x_2669_ = lean_usize_add(v_i_2653_, v___x_2668_);
v_i_2653_ = v___x_2669_;
v_b_2654_ = v___x_2667_;
goto _start;
}
else
{
lean_dec_ref(v_b_2654_);
lean_dec_ref(v_fs_2650_);
lean_dec_ref(v___x_2649_);
lean_dec_ref(v___x_2648_);
lean_dec(v___x_2647_);
return v___x_2665_;
}
}
else
{
lean_dec_ref(v_b_2654_);
lean_dec_ref(v_fs_2650_);
lean_dec_ref(v___x_2649_);
lean_dec_ref(v___x_2648_);
lean_dec(v___x_2647_);
return v___x_2663_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2___boxed(lean_object* v___x_2671_, lean_object* v___x_2672_, lean_object* v___x_2673_, lean_object* v_fs_2674_, lean_object* v_as_2675_, lean_object* v_sz_2676_, lean_object* v_i_2677_, lean_object* v_b_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_){
_start:
{
size_t v_sz_boxed_2684_; size_t v_i_boxed_2685_; lean_object* v_res_2686_; 
v_sz_boxed_2684_ = lean_unbox_usize(v_sz_2676_);
lean_dec(v_sz_2676_);
v_i_boxed_2685_ = lean_unbox_usize(v_i_2677_);
lean_dec(v_i_2677_);
v_res_2686_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(v___x_2671_, v___x_2672_, v___x_2673_, v_fs_2674_, v_as_2675_, v_sz_boxed_2684_, v_i_boxed_2685_, v_b_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec_ref(v_as_2675_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0(lean_object* v_a_2687_, lean_object* v___x_2688_, uint8_t v___x_2689_, lean_object* v_targs_2690_, lean_object* v_x_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2697_ = l_Lean_mkAppN(v_a_2687_, v_targs_2690_);
v___x_2698_ = l_Lean_mkAppN(v___x_2688_, v_targs_2690_);
v___x_2699_ = l_Lean_Meta_mkPProd(v___x_2697_, v___x_2698_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; uint8_t v___x_2701_; uint8_t v___x_2702_; lean_object* v___x_2703_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2701_ = 0;
v___x_2702_ = 1;
v___x_2703_ = l_Lean_Meta_mkLambdaFVars(v_targs_2690_, v_a_2700_, v___x_2701_, v___x_2689_, v___x_2701_, v___x_2689_, v___x_2702_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
return v___x_2703_;
}
else
{
return v___x_2699_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0___boxed(lean_object* v_a_2704_, lean_object* v___x_2705_, lean_object* v___x_2706_, lean_object* v_targs_2707_, lean_object* v_x_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
uint8_t v___x_34246__boxed_2714_; lean_object* v_res_2715_; 
v___x_34246__boxed_2714_ = lean_unbox(v___x_2706_);
v_res_2715_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0(v_a_2704_, v___x_2705_, v___x_34246__boxed_2714_, v_targs_2707_, v_x_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec_ref(v_x_2708_);
lean_dec_ref(v_targs_2707_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(lean_object* v___x_2716_, lean_object* v___x_2717_, lean_object* v_as_2718_, size_t v_sz_2719_, size_t v_i_2720_, lean_object* v_b_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
uint8_t v___x_2727_; 
v___x_2727_ = lean_usize_dec_lt(v_i_2720_, v_sz_2719_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; 
v___x_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2728_, 0, v_b_2721_);
return v___x_2728_;
}
else
{
lean_object* v_snd_2729_; lean_object* v_fst_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2787_; 
v_snd_2729_ = lean_ctor_get(v_b_2721_, 1);
v_fst_2730_ = lean_ctor_get(v_b_2721_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v_b_2721_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2732_ = v_b_2721_;
v_isShared_2733_ = v_isSharedCheck_2787_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_snd_2729_);
lean_inc(v_fst_2730_);
lean_dec(v_b_2721_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2787_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
lean_object* v_array_2734_; lean_object* v_start_2735_; lean_object* v_stop_2736_; uint8_t v___x_2737_; 
v_array_2734_ = lean_ctor_get(v_snd_2729_, 0);
v_start_2735_ = lean_ctor_get(v_snd_2729_, 1);
v_stop_2736_ = lean_ctor_get(v_snd_2729_, 2);
v___x_2737_ = lean_nat_dec_lt(v_start_2735_, v_stop_2736_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2739_; 
if (v_isShared_2733_ == 0)
{
v___x_2739_ = v___x_2732_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_fst_2730_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v_snd_2729_);
v___x_2739_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
lean_object* v___x_2740_; 
v___x_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2739_);
return v___x_2740_;
}
}
else
{
lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2783_; 
lean_inc(v_stop_2736_);
lean_inc(v_start_2735_);
lean_inc_ref(v_array_2734_);
v_isSharedCheck_2783_ = !lean_is_exclusive(v_snd_2729_);
if (v_isSharedCheck_2783_ == 0)
{
lean_object* v_unused_2784_; lean_object* v_unused_2785_; lean_object* v_unused_2786_; 
v_unused_2784_ = lean_ctor_get(v_snd_2729_, 2);
lean_dec(v_unused_2784_);
v_unused_2785_ = lean_ctor_get(v_snd_2729_, 1);
lean_dec(v_unused_2785_);
v_unused_2786_ = lean_ctor_get(v_snd_2729_, 0);
lean_dec(v_unused_2786_);
v___x_2743_ = v_snd_2729_;
v_isShared_2744_ = v_isSharedCheck_2783_;
goto v_resetjp_2742_;
}
else
{
lean_dec(v_snd_2729_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2783_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
uint8_t v___x_2745_; lean_object* v_a_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___f_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2753_; 
v___x_2745_ = lean_nat_dec_lt(v___x_2716_, v___x_2717_);
v_a_2746_ = lean_array_uget_borrowed(v_as_2718_, v_i_2720_);
v___x_2747_ = lean_array_fget_borrowed(v_array_2734_, v_start_2735_);
v___x_2748_ = lean_box(v___x_2745_);
lean_inc(v___x_2747_);
lean_inc(v_a_2746_);
v___f_2749_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___lam__0___boxed), 10, 3);
lean_closure_set(v___f_2749_, 0, v_a_2746_);
lean_closure_set(v___f_2749_, 1, v___x_2747_);
lean_closure_set(v___f_2749_, 2, v___x_2748_);
v___x_2750_ = lean_unsigned_to_nat(1u);
v___x_2751_ = lean_nat_add(v_start_2735_, v___x_2750_);
lean_dec(v_start_2735_);
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 1, v___x_2751_);
v___x_2753_ = v___x_2743_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_array_2734_);
lean_ctor_set(v_reuseFailAlloc_2782_, 1, v___x_2751_);
lean_ctor_set(v_reuseFailAlloc_2782_, 2, v_stop_2736_);
v___x_2753_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
lean_object* v___x_2754_; 
lean_inc(v___y_2725_);
lean_inc_ref(v___y_2724_);
lean_inc(v___y_2723_);
lean_inc_ref(v___y_2722_);
lean_inc(v_a_2746_);
v___x_2754_ = lean_infer_type(v_a_2746_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2754_, 1);
v___x_2756_ = 0;
v___x_2757_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_2755_, v___f_2749_, v___x_2756_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2757_) == 0)
{
lean_object* v_a_2758_; lean_object* v___x_2759_; lean_object* v___x_2761_; 
v_a_2758_ = lean_ctor_get(v___x_2757_, 0);
lean_inc(v_a_2758_);
lean_dec_ref_known(v___x_2757_, 1);
v___x_2759_ = l_Lean_Expr_app___override(v_fst_2730_, v_a_2758_);
if (v_isShared_2733_ == 0)
{
lean_ctor_set(v___x_2732_, 1, v___x_2753_);
lean_ctor_set(v___x_2732_, 0, v___x_2759_);
v___x_2761_ = v___x_2732_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v___x_2759_);
lean_ctor_set(v_reuseFailAlloc_2765_, 1, v___x_2753_);
v___x_2761_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
size_t v___x_2762_; size_t v___x_2763_; 
v___x_2762_ = ((size_t)1ULL);
v___x_2763_ = lean_usize_add(v_i_2720_, v___x_2762_);
v_i_2720_ = v___x_2763_;
v_b_2721_ = v___x_2761_;
goto _start;
}
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
lean_dec_ref(v___x_2753_);
lean_del_object(v___x_2732_);
lean_dec(v_fst_2730_);
v_a_2766_ = lean_ctor_get(v___x_2757_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2757_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2757_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec_ref(v___x_2753_);
lean_dec_ref(v___f_2749_);
lean_del_object(v___x_2732_);
lean_dec(v_fst_2730_);
v_a_2774_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2754_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2754_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1___boxed(lean_object* v___x_2788_, lean_object* v___x_2789_, lean_object* v_as_2790_, lean_object* v_sz_2791_, lean_object* v_i_2792_, lean_object* v_b_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
size_t v_sz_boxed_2799_; size_t v_i_boxed_2800_; lean_object* v_res_2801_; 
v_sz_boxed_2799_ = lean_unbox_usize(v_sz_2791_);
lean_dec(v_sz_2791_);
v_i_boxed_2800_ = lean_unbox_usize(v_i_2792_);
lean_dec(v_i_2792_);
v_res_2801_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(v___x_2788_, v___x_2789_, v_as_2790_, v_sz_boxed_2799_, v_i_boxed_2800_, v_b_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_);
lean_dec(v___y_2797_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
lean_dec_ref(v___y_2794_);
lean_dec_ref(v_as_2790_);
lean_dec(v___x_2789_);
lean_dec(v___x_2788_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(lean_object* v_as_2802_, size_t v_sz_2803_, size_t v_i_2804_, lean_object* v_b_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
uint8_t v___x_2811_; 
v___x_2811_ = lean_usize_dec_lt(v_i_2804_, v_sz_2803_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; 
v___x_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2812_, 0, v_b_2805_);
return v___x_2812_;
}
else
{
lean_object* v_a_2813_; lean_object* v_toInductionSubgoal_2814_; lean_object* v_mvarId_2815_; uint8_t v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; 
v_a_2813_ = lean_array_uget_borrowed(v_as_2802_, v_i_2804_);
v_toInductionSubgoal_2814_ = lean_ctor_get(v_a_2813_, 0);
v_mvarId_2815_ = lean_ctor_get(v_toInductionSubgoal_2814_, 0);
v___x_2816_ = 0;
v___x_2817_ = lean_box(0);
lean_inc(v_mvarId_2815_);
v___x_2818_ = l_Lean_MVarId_refl(v_mvarId_2815_, v___x_2816_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
if (lean_obj_tag(v___x_2818_) == 0)
{
size_t v___x_2819_; size_t v___x_2820_; 
lean_dec_ref_known(v___x_2818_, 1);
v___x_2819_ = ((size_t)1ULL);
v___x_2820_ = lean_usize_add(v_i_2804_, v___x_2819_);
v_i_2804_ = v___x_2820_;
v_b_2805_ = v___x_2817_;
goto _start;
}
else
{
return v___x_2818_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3___boxed(lean_object* v_as_2822_, lean_object* v_sz_2823_, lean_object* v_i_2824_, lean_object* v_b_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
size_t v_sz_boxed_2831_; size_t v_i_boxed_2832_; lean_object* v_res_2833_; 
v_sz_boxed_2831_ = lean_unbox_usize(v_sz_2823_);
lean_dec(v_sz_2823_);
v_i_boxed_2832_ = lean_unbox_usize(v_i_2824_);
lean_dec(v_i_2824_);
v_res_2833_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(v_as_2822_, v_sz_boxed_2831_, v_i_boxed_2832_, v_b_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v_as_2822_);
return v_res_2833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1(lean_object* v___x_2834_, lean_object* v_tail_2835_, lean_object* v_recName_2836_, lean_object* v___x_2837_, lean_object* v___x_2838_, lean_object* v___x_2839_, lean_object* v___x_2840_, lean_object* v___x_2841_, lean_object* v___x_2842_, lean_object* v___x_2843_, lean_object* v___x_2844_, lean_object* v___x_2845_, lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v_val_2848_, uint8_t v___x_2849_, lean_object* v_brecOnGoName_2850_, lean_object* v_levelParams_2851_, lean_object* v___x_2852_, lean_object* v___x_2853_, lean_object* v_brecOnName_2854_, lean_object* v_brecOnEqName_2855_, lean_object* v_fs_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; size_t v_sz_2866_; size_t v___x_2867_; lean_object* v___x_2868_; 
lean_inc(v___x_2834_);
v___x_2862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2834_);
lean_ctor_set(v___x_2862_, 1, v_tail_2835_);
v___x_2863_ = l_Lean_Expr_const___override(v_recName_2836_, v___x_2862_);
v___x_2864_ = l_Lean_mkAppN(v___x_2863_, v___x_2837_);
v___x_2865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2865_, 0, v___x_2864_);
lean_ctor_set(v___x_2865_, 1, v___x_2838_);
v_sz_2866_ = lean_array_size(v___x_2839_);
v___x_2867_ = ((size_t)0ULL);
v___x_2868_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__1(v___x_2840_, v___x_2841_, v___x_2839_, v_sz_2866_, v___x_2867_, v___x_2865_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_a_2869_; lean_object* v_fst_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_3239_; 
v_a_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc(v_a_2869_);
lean_dec_ref_known(v___x_2868_, 1);
v_fst_2870_ = lean_ctor_get(v_a_2869_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_a_2869_);
if (v_isSharedCheck_3239_ == 0)
{
lean_object* v_unused_3240_; 
v_unused_3240_ = lean_ctor_get(v_a_2869_, 1);
lean_dec(v_unused_3240_);
v___x_2872_ = v_a_2869_;
v_isShared_2873_ = v_isSharedCheck_3239_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_fst_2870_);
lean_dec(v_a_2869_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_3239_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
size_t v_sz_2874_; lean_object* v___x_2875_; 
v_sz_2874_ = lean_array_size(v___x_2842_);
lean_inc_ref(v_fs_2856_);
lean_inc_ref(v___x_2843_);
lean_inc_ref(v___x_2839_);
v___x_2875_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__2(v___x_2834_, v___x_2839_, v___x_2843_, v_fs_2856_, v___x_2842_, v_sz_2874_, v___x_2867_, v_fst_2870_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2876_);
lean_dec_ref_known(v___x_2875_, 1);
v___x_2877_ = l_Lean_mkAppN(v_a_2876_, v___x_2844_);
lean_inc_ref_n(v___x_2845_, 3);
v___x_2878_ = l_Lean_Expr_app___override(v___x_2877_, v___x_2845_);
v___x_2879_ = l_Array_append___redArg(v___x_2837_, v___x_2839_);
v___x_2880_ = l_Array_append___redArg(v___x_2879_, v___x_2844_);
v___x_2881_ = lean_mk_empty_array_with_capacity(v___x_2846_);
v___x_2882_ = lean_array_push(v___x_2881_, v___x_2845_);
v___x_2883_ = l_Array_append___redArg(v___x_2880_, v___x_2882_);
lean_dec_ref(v___x_2882_);
v___x_2884_ = l_Array_append___redArg(v___x_2883_, v_fs_2856_);
v___x_2885_ = lean_array_get(v___x_2847_, v___x_2839_, v_val_2848_);
lean_dec_ref(v___x_2839_);
v___x_2886_ = lean_array_push(v___x_2844_, v___x_2845_);
v___x_2887_ = l_Lean_mkAppN(v___x_2885_, v___x_2886_);
v___x_2888_ = lean_array_get(v___x_2847_, v___x_2843_, v_val_2848_);
lean_dec_ref(v___x_2843_);
v___x_2889_ = l_Lean_mkAppN(v___x_2888_, v___x_2886_);
lean_inc_ref(v___x_2887_);
v___x_2890_ = l_Lean_Meta_mkPProd(v___x_2887_, v___x_2889_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; uint8_t v___x_2892_; uint8_t v___x_2893_; lean_object* v___x_2894_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2891_);
lean_dec_ref_known(v___x_2890_, 1);
v___x_2892_ = 0;
v___x_2893_ = 1;
v___x_2894_ = l_Lean_Meta_mkForallFVars(v___x_2884_, v_a_2891_, v___x_2892_, v___x_2849_, v___x_2849_, v___x_2893_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_object* v_a_2895_; lean_object* v___x_2896_; 
v_a_2895_ = lean_ctor_get(v___x_2894_, 0);
lean_inc(v_a_2895_);
lean_dec_ref_known(v___x_2894_, 1);
v___x_2896_ = l_Lean_Meta_mkLambdaFVars(v___x_2884_, v___x_2878_, v___x_2892_, v___x_2849_, v___x_2892_, v___x_2849_, v___x_2893_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_3206_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___x_2896_, 1);
v___x_2898_ = lean_box(1);
lean_inc(v_levelParams_2851_);
lean_inc(v_brecOnGoName_2850_);
v___x_2899_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_brecOnGoName_2850_, v_levelParams_2851_, v_a_2895_, v_a_2897_, v___x_2898_, v___y_2860_);
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_2902_ = v___x_2899_;
v_isShared_2903_ = v_isSharedCheck_3206_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2899_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_3206_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
lean_inc(v_a_2900_);
if (v_isShared_2903_ == 0)
{
lean_ctor_set_tag(v___x_2902_, 1);
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_3205_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; 
v___x_2906_ = l_Lean_addDecl(v___x_2905_, v___x_2892_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_toConstantVal_2907_; lean_object* v_name_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_3202_; 
lean_dec_ref_known(v___x_2906_, 1);
v_toConstantVal_2907_ = lean_ctor_get(v_a_2900_, 0);
lean_inc_ref(v_toConstantVal_2907_);
lean_dec(v_a_2900_);
v_name_2908_ = lean_ctor_get(v_toConstantVal_2907_, 0);
v_isSharedCheck_3202_ = !lean_is_exclusive(v_toConstantVal_2907_);
if (v_isSharedCheck_3202_ == 0)
{
lean_object* v_unused_3203_; lean_object* v_unused_3204_; 
v_unused_3203_ = lean_ctor_get(v_toConstantVal_2907_, 2);
lean_dec(v_unused_3203_);
v_unused_3204_ = lean_ctor_get(v_toConstantVal_2907_, 1);
lean_dec(v_unused_3204_);
v___x_2910_ = v_toConstantVal_2907_;
v_isShared_2911_ = v_isSharedCheck_3202_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_name_2908_);
lean_dec(v_toConstantVal_2907_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_3202_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v_env_2914_; lean_object* v_nextMacroScope_2915_; lean_object* v_ngen_2916_; lean_object* v_auxDeclNGen_2917_; lean_object* v_traceState_2918_; lean_object* v_recordedDeps_2919_; lean_object* v_messages_2920_; lean_object* v_infoState_2921_; lean_object* v_snapshotTasks_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_3200_; 
lean_inc(v_name_2908_);
v___x_2912_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_name_2908_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec_ref(v___x_2912_);
v___x_2913_ = lean_st_ref_take(v___y_2860_);
v_env_2914_ = lean_ctor_get(v___x_2913_, 0);
v_nextMacroScope_2915_ = lean_ctor_get(v___x_2913_, 1);
v_ngen_2916_ = lean_ctor_get(v___x_2913_, 2);
v_auxDeclNGen_2917_ = lean_ctor_get(v___x_2913_, 3);
v_traceState_2918_ = lean_ctor_get(v___x_2913_, 4);
v_recordedDeps_2919_ = lean_ctor_get(v___x_2913_, 6);
v_messages_2920_ = lean_ctor_get(v___x_2913_, 7);
v_infoState_2921_ = lean_ctor_get(v___x_2913_, 8);
v_snapshotTasks_2922_ = lean_ctor_get(v___x_2913_, 9);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_2913_);
if (v_isSharedCheck_3200_ == 0)
{
lean_object* v_unused_3201_; 
v_unused_3201_ = lean_ctor_get(v___x_2913_, 5);
lean_dec(v_unused_3201_);
v___x_2924_ = v___x_2913_;
v_isShared_2925_ = v_isSharedCheck_3200_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_snapshotTasks_2922_);
lean_inc(v_infoState_2921_);
lean_inc(v_messages_2920_);
lean_inc(v_recordedDeps_2919_);
lean_inc(v_traceState_2918_);
lean_inc(v_auxDeclNGen_2917_);
lean_inc(v_ngen_2916_);
lean_inc(v_nextMacroScope_2915_);
lean_inc(v_env_2914_);
lean_dec(v___x_2913_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_3200_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2930_; 
v___x_2926_ = l_Lean_addProtected(v_env_2914_, v_name_2908_);
v___x_2927_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__0);
v___x_2928_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__1);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 5, v___x_2928_);
lean_ctor_set(v___x_2924_, 0, v___x_2926_);
v___x_2930_ = v___x_2924_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v___x_2926_);
lean_ctor_set(v_reuseFailAlloc_3199_, 1, v_nextMacroScope_2915_);
lean_ctor_set(v_reuseFailAlloc_3199_, 2, v_ngen_2916_);
lean_ctor_set(v_reuseFailAlloc_3199_, 3, v_auxDeclNGen_2917_);
lean_ctor_set(v_reuseFailAlloc_3199_, 4, v_traceState_2918_);
lean_ctor_set(v_reuseFailAlloc_3199_, 5, v___x_2928_);
lean_ctor_set(v_reuseFailAlloc_3199_, 6, v_recordedDeps_2919_);
lean_ctor_set(v_reuseFailAlloc_3199_, 7, v_messages_2920_);
lean_ctor_set(v_reuseFailAlloc_3199_, 8, v_infoState_2921_);
lean_ctor_set(v_reuseFailAlloc_3199_, 9, v_snapshotTasks_2922_);
v___x_2930_ = v_reuseFailAlloc_3199_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v_mctx_2933_; lean_object* v_zetaDeltaFVarIds_2934_; lean_object* v_postponed_2935_; lean_object* v_diag_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_3197_; 
v___x_2931_ = lean_st_ref_put(v___y_2860_, v___x_2930_);
v___x_2932_ = lean_st_ref_take(v___y_2858_);
v_mctx_2933_ = lean_ctor_get(v___x_2932_, 0);
v_zetaDeltaFVarIds_2934_ = lean_ctor_get(v___x_2932_, 2);
v_postponed_2935_ = lean_ctor_get(v___x_2932_, 3);
v_diag_2936_ = lean_ctor_get(v___x_2932_, 4);
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_2932_);
if (v_isSharedCheck_3197_ == 0)
{
lean_object* v_unused_3198_; 
v_unused_3198_ = lean_ctor_get(v___x_2932_, 1);
lean_dec(v_unused_3198_);
v___x_2938_ = v___x_2932_;
v_isShared_2939_ = v_isSharedCheck_3197_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_diag_2936_);
lean_inc(v_postponed_2935_);
lean_inc(v_zetaDeltaFVarIds_2934_);
lean_inc(v_mctx_2933_);
lean_dec(v___x_2932_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_3197_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2943_; 
v___x_2940_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__2);
v___x_2941_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7_spec__9___redArg___closed__3);
lean_inc(v___x_2852_);
if (v_isShared_2911_ == 0)
{
lean_ctor_set(v___x_2910_, 2, v___x_2852_);
lean_ctor_set(v___x_2910_, 1, v___x_2927_);
lean_ctor_set(v___x_2910_, 0, v___x_2927_);
v___x_2943_ = v___x_2910_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_3196_, 1, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_3196_, 2, v___x_2852_);
v___x_2943_ = v_reuseFailAlloc_3196_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2944_; lean_object* v___x_2946_; 
v___x_2944_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2940_);
lean_ctor_set(v___x_2944_, 1, v___x_2927_);
lean_ctor_set(v___x_2944_, 2, v___x_2941_);
lean_ctor_set(v___x_2944_, 3, v___x_2927_);
lean_ctor_set(v___x_2944_, 4, v___x_2927_);
lean_ctor_set(v___x_2944_, 5, v___x_2927_);
lean_ctor_set(v___x_2944_, 6, v___x_2927_);
lean_ctor_set(v___x_2944_, 7, v___x_2943_);
lean_inc_ref(v___x_2944_);
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 1, v___x_2944_);
v___x_2946_ = v___x_2938_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_mctx_2933_);
lean_ctor_set(v_reuseFailAlloc_3195_, 1, v___x_2944_);
lean_ctor_set(v_reuseFailAlloc_3195_, 2, v_zetaDeltaFVarIds_2934_);
lean_ctor_set(v_reuseFailAlloc_3195_, 3, v_postponed_2935_);
lean_ctor_set(v_reuseFailAlloc_3195_, 4, v_diag_2936_);
v___x_2946_ = v_reuseFailAlloc_3195_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2947_ = lean_st_ref_put(v___y_2858_, v___x_2946_);
lean_inc(v___x_2853_);
v___x_2948_ = l_Lean_Expr_const___override(v_brecOnGoName_2850_, v___x_2853_);
v___x_2949_ = l_Lean_mkAppN(v___x_2948_, v___x_2884_);
lean_inc_ref(v___x_2949_);
v___x_2950_ = l_Lean_Meta_mkPProdFstM(v___x_2949_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2952_; 
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_a_2951_);
lean_dec_ref_known(v___x_2950_, 1);
v___x_2952_ = l_Lean_Meta_mkLambdaFVars(v___x_2884_, v_a_2951_, v___x_2892_, v___x_2849_, v___x_2892_, v___x_2849_, v___x_2893_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2954_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2953_);
lean_dec_ref_known(v___x_2952_, 1);
v___x_2954_ = l_Lean_Meta_mkForallFVars(v___x_2884_, v___x_2887_, v___x_2892_, v___x_2849_, v___x_2849_, v___x_2893_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; lean_object* v___x_2956_; lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_3170_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
lean_inc(v_levelParams_2851_);
v___x_2956_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__5___redArg(v_brecOnName_2854_, v_levelParams_2851_, v_a_2955_, v_a_2953_, v___x_2898_, v___y_2860_);
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_2959_ = v___x_2956_;
v_isShared_2960_ = v_isSharedCheck_3170_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2956_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_3170_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
lean_inc(v_a_2957_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set_tag(v___x_2959_, 1);
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_3169_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2963_; 
v___x_2963_ = l_Lean_addDecl(v___x_2962_, v___x_2892_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_toConstantVal_2964_; lean_object* v_name_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_3166_; 
lean_dec_ref_known(v___x_2963_, 1);
v_toConstantVal_2964_ = lean_ctor_get(v_a_2957_, 0);
lean_inc_ref(v_toConstantVal_2964_);
lean_dec(v_a_2957_);
v_name_2965_ = lean_ctor_get(v_toConstantVal_2964_, 0);
v_isSharedCheck_3166_ = !lean_is_exclusive(v_toConstantVal_2964_);
if (v_isSharedCheck_3166_ == 0)
{
lean_object* v_unused_3167_; lean_object* v_unused_3168_; 
v_unused_3167_ = lean_ctor_get(v_toConstantVal_2964_, 2);
lean_dec(v_unused_3167_);
v_unused_3168_ = lean_ctor_get(v_toConstantVal_2964_, 1);
lean_dec(v_unused_3168_);
v___x_2967_ = v_toConstantVal_2964_;
v_isShared_2968_ = v_isSharedCheck_3166_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_name_2965_);
lean_dec(v_toConstantVal_2964_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_3166_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v_env_2971_; lean_object* v_nextMacroScope_2972_; lean_object* v_ngen_2973_; lean_object* v_auxDeclNGen_2974_; lean_object* v_traceState_2975_; lean_object* v_recordedDeps_2976_; lean_object* v_messages_2977_; lean_object* v_infoState_2978_; lean_object* v_snapshotTasks_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_3164_; 
lean_inc(v_name_2965_);
v___x_2969_ = l_Lean_setReducibleAttribute___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__7(v_name_2965_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec_ref(v___x_2969_);
v___x_2970_ = lean_st_ref_take(v___y_2860_);
v_env_2971_ = lean_ctor_get(v___x_2970_, 0);
v_nextMacroScope_2972_ = lean_ctor_get(v___x_2970_, 1);
v_ngen_2973_ = lean_ctor_get(v___x_2970_, 2);
v_auxDeclNGen_2974_ = lean_ctor_get(v___x_2970_, 3);
v_traceState_2975_ = lean_ctor_get(v___x_2970_, 4);
v_recordedDeps_2976_ = lean_ctor_get(v___x_2970_, 6);
v_messages_2977_ = lean_ctor_get(v___x_2970_, 7);
v_infoState_2978_ = lean_ctor_get(v___x_2970_, 8);
v_snapshotTasks_2979_ = lean_ctor_get(v___x_2970_, 9);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_3164_ == 0)
{
lean_object* v_unused_3165_; 
v_unused_3165_ = lean_ctor_get(v___x_2970_, 5);
lean_dec(v_unused_3165_);
v___x_2981_ = v___x_2970_;
v_isShared_2982_ = v_isSharedCheck_3164_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_snapshotTasks_2979_);
lean_inc(v_infoState_2978_);
lean_inc(v_messages_2977_);
lean_inc(v_recordedDeps_2976_);
lean_inc(v_traceState_2975_);
lean_inc(v_auxDeclNGen_2974_);
lean_inc(v_ngen_2973_);
lean_inc(v_nextMacroScope_2972_);
lean_inc(v_env_2971_);
lean_dec(v___x_2970_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_3164_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2983_; lean_object* v___x_2985_; 
lean_inc(v_name_2965_);
v___x_2983_ = l_Lean_markAuxRecursor(v_env_2971_, v_name_2965_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set(v___x_2981_, 5, v___x_2928_);
lean_ctor_set(v___x_2981_, 0, v___x_2983_);
v___x_2985_ = v___x_2981_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v___x_2983_);
lean_ctor_set(v_reuseFailAlloc_3163_, 1, v_nextMacroScope_2972_);
lean_ctor_set(v_reuseFailAlloc_3163_, 2, v_ngen_2973_);
lean_ctor_set(v_reuseFailAlloc_3163_, 3, v_auxDeclNGen_2974_);
lean_ctor_set(v_reuseFailAlloc_3163_, 4, v_traceState_2975_);
lean_ctor_set(v_reuseFailAlloc_3163_, 5, v___x_2928_);
lean_ctor_set(v_reuseFailAlloc_3163_, 6, v_recordedDeps_2976_);
lean_ctor_set(v_reuseFailAlloc_3163_, 7, v_messages_2977_);
lean_ctor_set(v_reuseFailAlloc_3163_, 8, v_infoState_2978_);
lean_ctor_set(v_reuseFailAlloc_3163_, 9, v_snapshotTasks_2979_);
v___x_2985_ = v_reuseFailAlloc_3163_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v_mctx_2988_; lean_object* v_zetaDeltaFVarIds_2989_; lean_object* v_postponed_2990_; lean_object* v_diag_2991_; lean_object* v___x_2993_; uint8_t v_isShared_2994_; uint8_t v_isSharedCheck_3161_; 
v___x_2986_ = lean_st_ref_put(v___y_2860_, v___x_2985_);
v___x_2987_ = lean_st_ref_take(v___y_2858_);
v_mctx_2988_ = lean_ctor_get(v___x_2987_, 0);
v_zetaDeltaFVarIds_2989_ = lean_ctor_get(v___x_2987_, 2);
v_postponed_2990_ = lean_ctor_get(v___x_2987_, 3);
v_diag_2991_ = lean_ctor_get(v___x_2987_, 4);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3161_ == 0)
{
lean_object* v_unused_3162_; 
v_unused_3162_ = lean_ctor_get(v___x_2987_, 1);
lean_dec(v_unused_3162_);
v___x_2993_ = v___x_2987_;
v_isShared_2994_ = v_isSharedCheck_3161_;
goto v_resetjp_2992_;
}
else
{
lean_inc(v_diag_2991_);
lean_inc(v_postponed_2990_);
lean_inc(v_zetaDeltaFVarIds_2989_);
lean_inc(v_mctx_2988_);
lean_dec(v___x_2987_);
v___x_2993_ = lean_box(0);
v_isShared_2994_ = v_isSharedCheck_3161_;
goto v_resetjp_2992_;
}
v_resetjp_2992_:
{
lean_object* v___x_2996_; 
lean_inc_ref(v___x_2944_);
if (v_isShared_2994_ == 0)
{
lean_ctor_set(v___x_2993_, 1, v___x_2944_);
v___x_2996_ = v___x_2993_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_mctx_2988_);
lean_ctor_set(v_reuseFailAlloc_3160_, 1, v___x_2944_);
lean_ctor_set(v_reuseFailAlloc_3160_, 2, v_zetaDeltaFVarIds_2989_);
lean_ctor_set(v_reuseFailAlloc_3160_, 3, v_postponed_2990_);
lean_ctor_set(v_reuseFailAlloc_3160_, 4, v_diag_2991_);
v___x_2996_ = v_reuseFailAlloc_3160_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v_env_2999_; lean_object* v_nextMacroScope_3000_; lean_object* v_ngen_3001_; lean_object* v_auxDeclNGen_3002_; lean_object* v_traceState_3003_; lean_object* v_recordedDeps_3004_; lean_object* v_messages_3005_; lean_object* v_infoState_3006_; lean_object* v_snapshotTasks_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3158_; 
v___x_2997_ = lean_st_ref_put(v___y_2858_, v___x_2996_);
v___x_2998_ = lean_st_ref_take(v___y_2860_);
v_env_2999_ = lean_ctor_get(v___x_2998_, 0);
v_nextMacroScope_3000_ = lean_ctor_get(v___x_2998_, 1);
v_ngen_3001_ = lean_ctor_get(v___x_2998_, 2);
v_auxDeclNGen_3002_ = lean_ctor_get(v___x_2998_, 3);
v_traceState_3003_ = lean_ctor_get(v___x_2998_, 4);
v_recordedDeps_3004_ = lean_ctor_get(v___x_2998_, 6);
v_messages_3005_ = lean_ctor_get(v___x_2998_, 7);
v_infoState_3006_ = lean_ctor_get(v___x_2998_, 8);
v_snapshotTasks_3007_ = lean_ctor_get(v___x_2998_, 9);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3158_ == 0)
{
lean_object* v_unused_3159_; 
v_unused_3159_ = lean_ctor_get(v___x_2998_, 5);
lean_dec(v_unused_3159_);
v___x_3009_ = v___x_2998_;
v_isShared_3010_ = v_isSharedCheck_3158_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_snapshotTasks_3007_);
lean_inc(v_infoState_3006_);
lean_inc(v_messages_3005_);
lean_inc(v_recordedDeps_3004_);
lean_inc(v_traceState_3003_);
lean_inc(v_auxDeclNGen_3002_);
lean_inc(v_ngen_3001_);
lean_inc(v_nextMacroScope_3000_);
lean_inc(v_env_2999_);
lean_dec(v___x_2998_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3158_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3011_; lean_object* v___x_3013_; 
lean_inc(v_name_2965_);
v___x_3011_ = l_Lean_addProtected(v_env_2999_, v_name_2965_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 5, v___x_2928_);
lean_ctor_set(v___x_3009_, 0, v___x_3011_);
v___x_3013_ = v___x_3009_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v___x_3011_);
lean_ctor_set(v_reuseFailAlloc_3157_, 1, v_nextMacroScope_3000_);
lean_ctor_set(v_reuseFailAlloc_3157_, 2, v_ngen_3001_);
lean_ctor_set(v_reuseFailAlloc_3157_, 3, v_auxDeclNGen_3002_);
lean_ctor_set(v_reuseFailAlloc_3157_, 4, v_traceState_3003_);
lean_ctor_set(v_reuseFailAlloc_3157_, 5, v___x_2928_);
lean_ctor_set(v_reuseFailAlloc_3157_, 6, v_recordedDeps_3004_);
lean_ctor_set(v_reuseFailAlloc_3157_, 7, v_messages_3005_);
lean_ctor_set(v_reuseFailAlloc_3157_, 8, v_infoState_3006_);
lean_ctor_set(v_reuseFailAlloc_3157_, 9, v_snapshotTasks_3007_);
v___x_3013_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v_mctx_3016_; lean_object* v_zetaDeltaFVarIds_3017_; lean_object* v_postponed_3018_; lean_object* v_diag_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3155_; 
v___x_3014_ = lean_st_ref_put(v___y_2860_, v___x_3013_);
v___x_3015_ = lean_st_ref_take(v___y_2858_);
v_mctx_3016_ = lean_ctor_get(v___x_3015_, 0);
v_zetaDeltaFVarIds_3017_ = lean_ctor_get(v___x_3015_, 2);
v_postponed_3018_ = lean_ctor_get(v___x_3015_, 3);
v_diag_3019_ = lean_ctor_get(v___x_3015_, 4);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3155_ == 0)
{
lean_object* v_unused_3156_; 
v_unused_3156_ = lean_ctor_get(v___x_3015_, 1);
lean_dec(v_unused_3156_);
v___x_3021_ = v___x_3015_;
v_isShared_3022_ = v_isSharedCheck_3155_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_diag_3019_);
lean_inc(v_postponed_3018_);
lean_inc(v_zetaDeltaFVarIds_3017_);
lean_inc(v_mctx_3016_);
lean_dec(v___x_3015_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3155_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
lean_inc_ref(v___x_2944_);
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 1, v___x_2944_);
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_mctx_3016_);
lean_ctor_set(v_reuseFailAlloc_3154_, 1, v___x_2944_);
lean_ctor_set(v_reuseFailAlloc_3154_, 2, v_zetaDeltaFVarIds_3017_);
lean_ctor_set(v_reuseFailAlloc_3154_, 3, v_postponed_3018_);
lean_ctor_set(v_reuseFailAlloc_3154_, 4, v_diag_3019_);
v___x_3024_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3025_ = lean_st_ref_put(v___y_2858_, v___x_3024_);
v___x_3026_ = l_Lean_Expr_const___override(v_name_2965_, v___x_2853_);
v___x_3027_ = l_Lean_mkAppN(v___x_3026_, v___x_2884_);
v___x_3028_ = lean_array_get(v___x_2847_, v_fs_2856_, v_val_2848_);
lean_dec_ref(v_fs_2856_);
v___x_3029_ = l_Lean_mkAppN(v___x_3028_, v___x_2886_);
lean_dec_ref(v___x_2886_);
v___x_3030_ = l_Lean_Meta_mkPProdSndM(v___x_2949_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3030_) == 0)
{
lean_object* v_a_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v_a_3031_ = lean_ctor_get(v___x_3030_, 0);
lean_inc(v_a_3031_);
lean_dec_ref_known(v___x_3030_, 1);
v___x_3032_ = l_Lean_Expr_app___override(v___x_3029_, v_a_3031_);
v___x_3033_ = l_Lean_Meta_mkEq(v___x_3027_, v___x_3032_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_object* v_a_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; 
v_a_3034_ = lean_ctor_get(v___x_3033_, 0);
lean_inc_n(v_a_3034_, 2);
lean_dec_ref_known(v___x_3033_, 1);
v___x_3035_ = lean_box(0);
v___x_3036_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_3034_, v___x_3035_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
lean_inc(v_a_3037_);
lean_dec_ref_known(v___x_3036_, 1);
v___x_3038_ = l_Lean_Expr_mvarId_x21(v_a_3037_);
v___x_3039_ = l_Lean_Expr_fvarId_x21(v___x_2845_);
lean_dec_ref(v___x_2845_);
v___x_3040_ = lean_mk_empty_array_with_capacity(v___x_2852_);
lean_dec(v___x_2852_);
v___x_3041_ = lean_box(0);
v___x_3042_ = l_Lean_MVarId_cases(v___x_3038_, v___x_3039_, v___x_3040_, v___x_2892_, v___x_3041_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3044_; size_t v_sz_3045_; lean_object* v___x_3046_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3042_, 1);
v___x_3044_ = lean_box(0);
v_sz_3045_ = lean_array_size(v_a_3043_);
v___x_3046_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__3(v_a_3043_, v_sz_3045_, v___x_2867_, v___x_3044_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v_a_3043_);
if (lean_obj_tag(v___x_3046_) == 0)
{
lean_object* v___x_3047_; lean_object* v_a_3048_; lean_object* v___x_3049_; 
lean_dec_ref_known(v___x_3046_, 1);
v___x_3047_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__4___redArg(v_a_3037_, v___y_2858_);
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_a_3048_);
lean_dec_ref(v___x_3047_);
v___x_3049_ = l_Lean_Meta_mkForallFVars(v___x_2884_, v_a_3034_, v___x_2892_, v___x_2849_, v___x_2849_, v___x_2893_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v___x_3051_ = l_Lean_Meta_mkLambdaFVars(v___x_2884_, v_a_3048_, v___x_2892_, v___x_2849_, v___x_2892_, v___x_2849_, v___x_2893_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec_ref(v___x_2884_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3054_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
lean_inc(v_brecOnEqName_2855_);
if (v_isShared_2968_ == 0)
{
lean_ctor_set(v___x_2967_, 2, v_a_3050_);
lean_ctor_set(v___x_2967_, 1, v_levelParams_2851_);
lean_ctor_set(v___x_2967_, 0, v_brecOnEqName_2855_);
v___x_3054_ = v___x_2967_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_brecOnEqName_2855_);
lean_ctor_set(v_reuseFailAlloc_3105_, 1, v_levelParams_2851_);
lean_ctor_set(v_reuseFailAlloc_3105_, 2, v_a_3050_);
v___x_3054_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
lean_object* v___x_3055_; lean_object* v___x_3057_; 
v___x_3055_ = lean_box(0);
lean_inc(v_brecOnEqName_2855_);
if (v_isShared_2873_ == 0)
{
lean_ctor_set_tag(v___x_2872_, 1);
lean_ctor_set(v___x_2872_, 1, v___x_3055_);
lean_ctor_set(v___x_2872_, 0, v_brecOnEqName_2855_);
v___x_3057_ = v___x_2872_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_brecOnEqName_2855_);
lean_ctor_set(v_reuseFailAlloc_3104_, 1, v___x_3055_);
v___x_3057_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v_a_3060_; lean_object* v___x_3061_; 
v___x_3058_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3054_);
lean_ctor_set(v___x_3058_, 1, v_a_3052_);
lean_ctor_set(v___x_3058_, 2, v___x_3057_);
v___x_3059_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__5___redArg(v___x_3058_, v___y_2860_);
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_a_3060_);
lean_dec_ref(v___x_3059_);
v___x_3061_ = l_Lean_addDecl(v_a_3060_, v___x_2892_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3102_; 
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3061_);
if (v_isSharedCheck_3102_ == 0)
{
lean_object* v_unused_3103_; 
v_unused_3103_ = lean_ctor_get(v___x_3061_, 0);
lean_dec(v_unused_3103_);
v___x_3063_ = v___x_3061_;
v_isShared_3064_ = v_isSharedCheck_3102_;
goto v_resetjp_3062_;
}
else
{
lean_dec(v___x_3061_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3102_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3065_; lean_object* v_env_3066_; lean_object* v_nextMacroScope_3067_; lean_object* v_ngen_3068_; lean_object* v_auxDeclNGen_3069_; lean_object* v_traceState_3070_; lean_object* v_recordedDeps_3071_; lean_object* v_messages_3072_; lean_object* v_infoState_3073_; lean_object* v_snapshotTasks_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3100_; 
v___x_3065_ = lean_st_ref_take(v___y_2860_);
v_env_3066_ = lean_ctor_get(v___x_3065_, 0);
v_nextMacroScope_3067_ = lean_ctor_get(v___x_3065_, 1);
v_ngen_3068_ = lean_ctor_get(v___x_3065_, 2);
v_auxDeclNGen_3069_ = lean_ctor_get(v___x_3065_, 3);
v_traceState_3070_ = lean_ctor_get(v___x_3065_, 4);
v_recordedDeps_3071_ = lean_ctor_get(v___x_3065_, 6);
v_messages_3072_ = lean_ctor_get(v___x_3065_, 7);
v_infoState_3073_ = lean_ctor_get(v___x_3065_, 8);
v_snapshotTasks_3074_ = lean_ctor_get(v___x_3065_, 9);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3100_ == 0)
{
lean_object* v_unused_3101_; 
v_unused_3101_ = lean_ctor_get(v___x_3065_, 5);
lean_dec(v_unused_3101_);
v___x_3076_ = v___x_3065_;
v_isShared_3077_ = v_isSharedCheck_3100_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_snapshotTasks_3074_);
lean_inc(v_infoState_3073_);
lean_inc(v_messages_3072_);
lean_inc(v_recordedDeps_3071_);
lean_inc(v_traceState_3070_);
lean_inc(v_auxDeclNGen_3069_);
lean_inc(v_ngen_3068_);
lean_inc(v_nextMacroScope_3067_);
lean_inc(v_env_3066_);
lean_dec(v___x_3065_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3100_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3078_ = l_Lean_addProtected(v_env_3066_, v_brecOnEqName_2855_);
if (v_isShared_3077_ == 0)
{
lean_ctor_set(v___x_3076_, 5, v___x_2928_);
lean_ctor_set(v___x_3076_, 0, v___x_3078_);
v___x_3080_ = v___x_3076_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3078_);
lean_ctor_set(v_reuseFailAlloc_3099_, 1, v_nextMacroScope_3067_);
lean_ctor_set(v_reuseFailAlloc_3099_, 2, v_ngen_3068_);
lean_ctor_set(v_reuseFailAlloc_3099_, 3, v_auxDeclNGen_3069_);
lean_ctor_set(v_reuseFailAlloc_3099_, 4, v_traceState_3070_);
lean_ctor_set(v_reuseFailAlloc_3099_, 5, v___x_2928_);
lean_ctor_set(v_reuseFailAlloc_3099_, 6, v_recordedDeps_3071_);
lean_ctor_set(v_reuseFailAlloc_3099_, 7, v_messages_3072_);
lean_ctor_set(v_reuseFailAlloc_3099_, 8, v_infoState_3073_);
lean_ctor_set(v_reuseFailAlloc_3099_, 9, v_snapshotTasks_3074_);
v___x_3080_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v_mctx_3083_; lean_object* v_zetaDeltaFVarIds_3084_; lean_object* v_postponed_3085_; lean_object* v_diag_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3097_; 
v___x_3081_ = lean_st_ref_put(v___y_2860_, v___x_3080_);
v___x_3082_ = lean_st_ref_take(v___y_2858_);
v_mctx_3083_ = lean_ctor_get(v___x_3082_, 0);
v_zetaDeltaFVarIds_3084_ = lean_ctor_get(v___x_3082_, 2);
v_postponed_3085_ = lean_ctor_get(v___x_3082_, 3);
v_diag_3086_ = lean_ctor_get(v___x_3082_, 4);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3097_ == 0)
{
lean_object* v_unused_3098_; 
v_unused_3098_ = lean_ctor_get(v___x_3082_, 1);
lean_dec(v_unused_3098_);
v___x_3088_ = v___x_3082_;
v_isShared_3089_ = v_isSharedCheck_3097_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_diag_3086_);
lean_inc(v_postponed_3085_);
lean_inc(v_zetaDeltaFVarIds_3084_);
lean_inc(v_mctx_3083_);
lean_dec(v___x_3082_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3097_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 1, v___x_2944_);
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_mctx_3083_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v___x_2944_);
lean_ctor_set(v_reuseFailAlloc_3096_, 2, v_zetaDeltaFVarIds_3084_);
lean_ctor_set(v_reuseFailAlloc_3096_, 3, v_postponed_3085_);
lean_ctor_set(v_reuseFailAlloc_3096_, 4, v_diag_3086_);
v___x_3091_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
lean_object* v___x_3092_; lean_object* v___x_3094_; 
v___x_3092_ = lean_st_ref_put(v___y_2858_, v___x_3091_);
if (v_isShared_3064_ == 0)
{
lean_ctor_set(v___x_3063_, 0, v___x_3044_);
v___x_3094_ = v___x_3063_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3044_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2944_, 8);
lean_dec(v_brecOnEqName_2855_);
return v___x_3061_;
}
}
}
}
else
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_dec(v_a_3050_);
lean_del_object(v___x_2967_);
lean_dec_ref_known(v___x_2944_, 8);
lean_del_object(v___x_2872_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_levelParams_2851_);
v_a_3106_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3051_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3051_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
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
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
lean_dec(v_a_3048_);
lean_del_object(v___x_2967_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_levelParams_2851_);
v_a_3114_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3049_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3049_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
}
else
{
lean_dec(v_a_3037_);
lean_dec(v_a_3034_);
lean_del_object(v___x_2967_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_levelParams_2851_);
return v___x_3046_;
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3129_; 
lean_dec(v_a_3037_);
lean_dec(v_a_3034_);
lean_del_object(v___x_2967_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_levelParams_2851_);
v_a_3122_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3129_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3129_ == 0)
{
v___x_3124_ = v___x_3042_;
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3042_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3129_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___x_3127_; 
if (v_isShared_3125_ == 0)
{
v___x_3127_ = v___x_3124_;
goto v_reusejp_3126_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v_a_3122_);
v___x_3127_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3126_;
}
v_reusejp_3126_:
{
return v___x_3127_;
}
}
}
}
else
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3137_; 
lean_dec(v_a_3034_);
lean_del_object(v___x_2967_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec_ref(v___x_2845_);
v_a_3130_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3137_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3132_ = v___x_3036_;
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v___x_3036_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3137_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
return v___x_3135_;
}
}
}
}
else
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
lean_del_object(v___x_2967_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec_ref(v___x_2845_);
v_a_3138_ = lean_ctor_get(v___x_3033_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3140_ = v___x_3033_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_3033_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
else
{
lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec_ref(v___x_3029_);
lean_dec_ref(v___x_3027_);
lean_del_object(v___x_2967_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec_ref(v___x_2845_);
v_a_3146_ = lean_ctor_get(v___x_3030_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3030_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3030_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3030_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3146_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
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
else
{
lean_dec(v_a_2957_);
lean_dec_ref(v___x_2949_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec_ref(v___x_2845_);
return v___x_2963_;
}
}
}
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
lean_dec(v_a_2953_);
lean_dec_ref(v___x_2949_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec_ref(v___x_2845_);
v_a_3171_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_2954_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_2954_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
else
{
lean_object* v_a_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3186_; 
lean_dec_ref(v___x_2949_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2887_);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec_ref(v___x_2845_);
v_a_3179_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3181_ = v___x_2952_;
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_a_3179_);
lean_dec(v___x_2952_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3184_; 
if (v_isShared_3182_ == 0)
{
v___x_3184_ = v___x_3181_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_a_3179_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
return v___x_3184_;
}
}
}
}
else
{
lean_object* v_a_3187_; lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3194_; 
lean_dec_ref(v___x_2949_);
lean_dec_ref_known(v___x_2944_, 8);
lean_dec_ref(v___x_2887_);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec_ref(v___x_2845_);
v_a_3187_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_3194_ == 0)
{
v___x_3189_ = v___x_2950_;
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
else
{
lean_inc(v_a_3187_);
lean_dec(v___x_2950_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3194_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v_a_3187_);
v___x_3192_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
return v___x_3192_;
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
lean_dec(v_a_2900_);
lean_dec_ref(v___x_2887_);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec(v_brecOnGoName_2850_);
lean_dec_ref(v___x_2845_);
return v___x_2906_;
}
}
}
}
else
{
lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3214_; 
lean_dec(v_a_2895_);
lean_dec_ref(v___x_2887_);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec(v_brecOnGoName_2850_);
lean_dec_ref(v___x_2845_);
v_a_3207_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3209_ = v___x_2896_;
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_dec(v___x_2896_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3212_; 
if (v_isShared_3210_ == 0)
{
v___x_3212_ = v___x_3209_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v_a_3207_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
return v___x_3212_;
}
}
}
}
else
{
lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3222_; 
lean_dec_ref(v___x_2887_);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_dec_ref(v___x_2878_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec(v_brecOnGoName_2850_);
lean_dec_ref(v___x_2845_);
v_a_3215_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3217_ = v___x_2894_;
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_dec(v___x_2894_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v___x_3220_; 
if (v_isShared_3218_ == 0)
{
v___x_3220_ = v___x_3217_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_a_3215_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
else
{
lean_object* v_a_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3230_; 
lean_dec_ref(v___x_2887_);
lean_dec_ref(v___x_2886_);
lean_dec_ref(v___x_2884_);
lean_dec_ref(v___x_2878_);
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec(v_brecOnGoName_2850_);
lean_dec_ref(v___x_2845_);
v_a_3223_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3225_ = v___x_2890_;
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_a_3223_);
lean_dec(v___x_2890_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3230_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3228_; 
if (v_isShared_3226_ == 0)
{
v___x_3228_ = v___x_3225_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v_a_3223_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3238_; 
lean_del_object(v___x_2872_);
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec(v_brecOnGoName_2850_);
lean_dec_ref(v___x_2845_);
lean_dec_ref(v___x_2844_);
lean_dec_ref(v___x_2843_);
lean_dec_ref(v___x_2839_);
lean_dec_ref(v___x_2837_);
v_a_3231_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3233_ = v___x_2875_;
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_2875_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3236_; 
if (v_isShared_3234_ == 0)
{
v___x_3236_ = v___x_3233_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3231_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3248_; 
lean_dec_ref(v_fs_2856_);
lean_dec(v_brecOnEqName_2855_);
lean_dec(v_brecOnName_2854_);
lean_dec(v___x_2853_);
lean_dec(v___x_2852_);
lean_dec(v_levelParams_2851_);
lean_dec(v_brecOnGoName_2850_);
lean_dec_ref(v___x_2845_);
lean_dec_ref(v___x_2844_);
lean_dec_ref(v___x_2843_);
lean_dec_ref(v___x_2839_);
lean_dec_ref(v___x_2837_);
lean_dec(v___x_2834_);
v_a_3241_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_3248_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3243_ = v___x_2868_;
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_2868_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3248_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3246_; 
if (v_isShared_3244_ == 0)
{
v___x_3246_ = v___x_3243_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3241_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1___boxed(lean_object** _args){
lean_object* v___x_3249_ = _args[0];
lean_object* v_tail_3250_ = _args[1];
lean_object* v_recName_3251_ = _args[2];
lean_object* v___x_3252_ = _args[3];
lean_object* v___x_3253_ = _args[4];
lean_object* v___x_3254_ = _args[5];
lean_object* v___x_3255_ = _args[6];
lean_object* v___x_3256_ = _args[7];
lean_object* v___x_3257_ = _args[8];
lean_object* v___x_3258_ = _args[9];
lean_object* v___x_3259_ = _args[10];
lean_object* v___x_3260_ = _args[11];
lean_object* v___x_3261_ = _args[12];
lean_object* v___x_3262_ = _args[13];
lean_object* v_val_3263_ = _args[14];
lean_object* v___x_3264_ = _args[15];
lean_object* v_brecOnGoName_3265_ = _args[16];
lean_object* v_levelParams_3266_ = _args[17];
lean_object* v___x_3267_ = _args[18];
lean_object* v___x_3268_ = _args[19];
lean_object* v_brecOnName_3269_ = _args[20];
lean_object* v_brecOnEqName_3270_ = _args[21];
lean_object* v_fs_3271_ = _args[22];
lean_object* v___y_3272_ = _args[23];
lean_object* v___y_3273_ = _args[24];
lean_object* v___y_3274_ = _args[25];
lean_object* v___y_3275_ = _args[26];
lean_object* v___y_3276_ = _args[27];
_start:
{
uint8_t v___x_34472__boxed_3277_; lean_object* v_res_3278_; 
v___x_34472__boxed_3277_ = lean_unbox(v___x_3264_);
v_res_3278_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1(v___x_3249_, v_tail_3250_, v_recName_3251_, v___x_3252_, v___x_3253_, v___x_3254_, v___x_3255_, v___x_3256_, v___x_3257_, v___x_3258_, v___x_3259_, v___x_3260_, v___x_3261_, v___x_3262_, v_val_3263_, v___x_34472__boxed_3277_, v_brecOnGoName_3265_, v_levelParams_3266_, v___x_3267_, v___x_3268_, v_brecOnName_3269_, v_brecOnEqName_3270_, v_fs_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v_val_3263_);
lean_dec_ref(v___x_3262_);
lean_dec(v___x_3261_);
lean_dec_ref(v___x_3257_);
lean_dec(v___x_3256_);
lean_dec(v___x_3255_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0(lean_object* v_targs_3279_, lean_object* v_a_3280_, uint8_t v___x_3281_, lean_object* v_f_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; uint8_t v___x_3290_; uint8_t v___x_3291_; lean_object* v___x_3292_; 
lean_inc_ref(v_targs_3279_);
v___x_3288_ = lean_array_push(v_targs_3279_, v_f_3282_);
v___x_3289_ = l_Lean_mkAppN(v_a_3280_, v_targs_3279_);
lean_dec_ref(v_targs_3279_);
v___x_3290_ = 0;
v___x_3291_ = 1;
v___x_3292_ = l_Lean_Meta_mkForallFVars(v___x_3288_, v___x_3289_, v___x_3290_, v___x_3281_, v___x_3281_, v___x_3291_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_);
lean_dec_ref(v___x_3288_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0___boxed(lean_object* v_targs_3293_, lean_object* v_a_3294_, lean_object* v___x_3295_, lean_object* v_f_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_){
_start:
{
uint8_t v___x_35193__boxed_3302_; lean_object* v_res_3303_; 
v___x_35193__boxed_3302_ = lean_unbox(v___x_3295_);
v_res_3303_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0(v_targs_3293_, v_a_3294_, v___x_35193__boxed_3302_, v_f_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_);
lean_dec(v___y_3300_);
lean_dec_ref(v___y_3299_);
lean_dec(v___y_3298_);
lean_dec_ref(v___y_3297_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1(lean_object* v_a_3307_, uint8_t v___x_3308_, lean_object* v___x_3309_, lean_object* v_targs_3310_, lean_object* v_x_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_){
_start:
{
lean_object* v___x_3317_; lean_object* v___f_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3317_ = lean_box(v___x_3308_);
lean_inc_ref(v_targs_3310_);
v___f_3318_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3318_, 0, v_targs_3310_);
lean_closure_set(v___f_3318_, 1, v_a_3307_);
lean_closure_set(v___f_3318_, 2, v___x_3317_);
v___x_3319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___closed__1));
v___x_3320_ = l_Lean_mkAppN(v___x_3309_, v_targs_3310_);
lean_dec_ref(v_targs_3310_);
v___x_3321_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2___redArg(v___x_3319_, v___x_3320_, v___f_3318_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_);
return v___x_3321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___boxed(lean_object* v_a_3322_, lean_object* v___x_3323_, lean_object* v___x_3324_, lean_object* v_targs_3325_, lean_object* v_x_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
uint8_t v___x_35227__boxed_3332_; lean_object* v_res_3333_; 
v___x_35227__boxed_3332_ = lean_unbox(v___x_3323_);
v_res_3333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1(v_a_3322_, v___x_35227__boxed_3332_, v___x_3324_, v_targs_3325_, v_x_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_);
lean_dec(v___y_3330_);
lean_dec_ref(v___y_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___y_3327_);
lean_dec_ref(v_x_3326_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2(lean_object* v_a_3334_, lean_object* v_x_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_){
_start:
{
lean_object* v___x_3341_; 
v___x_3341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3341_, 0, v_a_3334_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2___boxed(lean_object* v_a_3342_, lean_object* v_x_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2(v_a_3342_, v_x_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec_ref(v_x_3343_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(lean_object* v___x_3351_, lean_object* v___x_3352_, lean_object* v_as_3353_, size_t v_sz_3354_, size_t v_i_3355_, lean_object* v_b_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_){
_start:
{
uint8_t v___x_3362_; 
v___x_3362_ = lean_usize_dec_lt(v_i_3355_, v_sz_3354_);
if (v___x_3362_ == 0)
{
lean_object* v___x_3363_; 
v___x_3363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3363_, 0, v_b_3356_);
return v___x_3363_;
}
else
{
lean_object* v_snd_3364_; lean_object* v_fst_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3462_; 
v_snd_3364_ = lean_ctor_get(v_b_3356_, 1);
v_fst_3365_ = lean_ctor_get(v_b_3356_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v_b_3356_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3367_ = v_b_3356_;
v_isShared_3368_ = v_isSharedCheck_3462_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_snd_3364_);
lean_inc(v_fst_3365_);
lean_dec(v_b_3356_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3462_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v_fst_3369_; lean_object* v_snd_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3461_; 
v_fst_3369_ = lean_ctor_get(v_snd_3364_, 0);
v_snd_3370_ = lean_ctor_get(v_snd_3364_, 1);
v_isSharedCheck_3461_ = !lean_is_exclusive(v_snd_3364_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3372_ = v_snd_3364_;
v_isShared_3373_ = v_isSharedCheck_3461_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_snd_3370_);
lean_inc(v_fst_3369_);
lean_dec(v_snd_3364_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3461_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v_next_3382_; 
v_next_3382_ = lean_ctor_get(v_snd_3370_, 0);
lean_inc(v_next_3382_);
if (lean_obj_tag(v_next_3382_) == 0)
{
goto v___jp_3374_;
}
else
{
lean_object* v_upperBound_3383_; lean_object* v_val_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3460_; 
v_upperBound_3383_ = lean_ctor_get(v_snd_3370_, 1);
v_val_3384_ = lean_ctor_get(v_next_3382_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v_next_3382_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3386_ = v_next_3382_;
v_isShared_3387_ = v_isSharedCheck_3460_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_val_3384_);
lean_dec(v_next_3382_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3460_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
uint8_t v___x_3388_; 
v___x_3388_ = lean_nat_dec_lt(v_val_3384_, v_upperBound_3383_);
if (v___x_3388_ == 0)
{
lean_del_object(v___x_3386_);
lean_dec(v_val_3384_);
goto v___jp_3374_;
}
else
{
lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3457_; 
lean_inc(v_upperBound_3383_);
lean_del_object(v___x_3372_);
lean_del_object(v___x_3367_);
v_isSharedCheck_3457_ = !lean_is_exclusive(v_snd_3370_);
if (v_isSharedCheck_3457_ == 0)
{
lean_object* v_unused_3458_; lean_object* v_unused_3459_; 
v_unused_3458_ = lean_ctor_get(v_snd_3370_, 1);
lean_dec(v_unused_3458_);
v_unused_3459_ = lean_ctor_get(v_snd_3370_, 0);
lean_dec(v_unused_3459_);
v___x_3390_ = v_snd_3370_;
v_isShared_3391_ = v_isSharedCheck_3457_;
goto v_resetjp_3389_;
}
else
{
lean_dec(v_snd_3370_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3457_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v_array_3392_; lean_object* v_start_3393_; lean_object* v_stop_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3398_; 
v_array_3392_ = lean_ctor_get(v_fst_3369_, 0);
v_start_3393_ = lean_ctor_get(v_fst_3369_, 1);
v_stop_3394_ = lean_ctor_get(v_fst_3369_, 2);
v___x_3395_ = lean_unsigned_to_nat(1u);
v___x_3396_ = lean_nat_add(v_val_3384_, v___x_3395_);
lean_dec(v_val_3384_);
lean_inc(v___x_3396_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3396_);
v___x_3398_ = v___x_3386_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v___x_3396_);
v___x_3398_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
lean_object* v___x_3400_; 
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 0, v___x_3398_);
v___x_3400_ = v___x_3390_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3398_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v_upperBound_3383_);
v___x_3400_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
uint8_t v___x_3401_; 
v___x_3401_ = lean_nat_dec_lt(v_start_3393_, v_stop_3394_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
lean_dec(v___x_3396_);
v___x_3402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3402_, 0, v_fst_3369_);
lean_ctor_set(v___x_3402_, 1, v___x_3400_);
v___x_3403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3403_, 0, v_fst_3365_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
v___x_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
return v___x_3404_;
}
else
{
lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3451_; 
lean_inc(v_stop_3394_);
lean_inc(v_start_3393_);
lean_inc_ref(v_array_3392_);
v_isSharedCheck_3451_ = !lean_is_exclusive(v_fst_3369_);
if (v_isSharedCheck_3451_ == 0)
{
lean_object* v_unused_3452_; lean_object* v_unused_3453_; lean_object* v_unused_3454_; 
v_unused_3452_ = lean_ctor_get(v_fst_3369_, 2);
lean_dec(v_unused_3452_);
v_unused_3453_ = lean_ctor_get(v_fst_3369_, 1);
lean_dec(v_unused_3453_);
v_unused_3454_ = lean_ctor_get(v_fst_3369_, 0);
lean_dec(v_unused_3454_);
v___x_3406_ = v_fst_3369_;
v_isShared_3407_ = v_isSharedCheck_3451_;
goto v_resetjp_3405_;
}
else
{
lean_dec(v_fst_3369_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3451_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
uint8_t v___x_3408_; lean_object* v_a_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___f_3412_; lean_object* v___x_3413_; lean_object* v___x_3415_; 
v___x_3408_ = lean_nat_dec_lt(v___x_3351_, v___x_3352_);
v_a_3409_ = lean_array_uget_borrowed(v_as_3353_, v_i_3355_);
v___x_3410_ = lean_array_fget_borrowed(v_array_3392_, v_start_3393_);
v___x_3411_ = lean_box(v___x_3408_);
lean_inc(v___x_3410_);
lean_inc(v_a_3409_);
v___f_3412_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__1___boxed), 10, 3);
lean_closure_set(v___f_3412_, 0, v_a_3409_);
lean_closure_set(v___f_3412_, 1, v___x_3411_);
lean_closure_set(v___f_3412_, 2, v___x_3410_);
v___x_3413_ = lean_nat_add(v_start_3393_, v___x_3395_);
lean_dec(v_start_3393_);
if (v_isShared_3407_ == 0)
{
lean_ctor_set(v___x_3406_, 1, v___x_3413_);
v___x_3415_ = v___x_3406_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_array_3392_);
lean_ctor_set(v_reuseFailAlloc_3450_, 1, v___x_3413_);
lean_ctor_set(v_reuseFailAlloc_3450_, 2, v_stop_3394_);
v___x_3415_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
lean_object* v___x_3416_; 
lean_inc(v___y_3360_);
lean_inc_ref(v___y_3359_);
lean_inc(v___y_3358_);
lean_inc_ref(v___y_3357_);
lean_inc(v_a_3409_);
v___x_3416_ = lean_infer_type(v_a_3409_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; uint8_t v___x_3418_; lean_object* v___x_3419_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
v___x_3418_ = 0;
v___x_3419_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_a_3417_, v___f_3412_, v___x_3418_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v___f_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; size_t v___x_3431_; size_t v___x_3432_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc(v_a_3420_);
lean_dec_ref_known(v___x_3419_, 1);
v___f_3421_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___lam__2___boxed), 7, 1);
lean_closure_set(v___f_3421_, 0, v_a_3420_);
v___x_3422_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___closed__0));
v___x_3423_ = l_Nat_reprFast(v___x_3396_);
v___x_3424_ = lean_string_append(v___x_3422_, v___x_3423_);
lean_dec_ref(v___x_3423_);
v___x_3425_ = lean_box(0);
v___x_3426_ = l_Lean_Name_str___override(v___x_3425_, v___x_3424_);
v___x_3427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3426_);
lean_ctor_set(v___x_3427_, 1, v___f_3421_);
v___x_3428_ = lean_array_push(v_fst_3365_, v___x_3427_);
v___x_3429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3415_);
lean_ctor_set(v___x_3429_, 1, v___x_3400_);
v___x_3430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3428_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = ((size_t)1ULL);
v___x_3432_ = lean_usize_add(v_i_3355_, v___x_3431_);
v_i_3355_ = v___x_3432_;
v_b_3356_ = v___x_3430_;
goto _start;
}
else
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3441_; 
lean_dec_ref(v___x_3415_);
lean_dec_ref(v___x_3400_);
lean_dec(v___x_3396_);
lean_dec(v_fst_3365_);
v_a_3434_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3436_ = v___x_3419_;
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3419_);
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
else
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3449_; 
lean_dec_ref(v___x_3415_);
lean_dec_ref(v___f_3412_);
lean_dec_ref(v___x_3400_);
lean_dec(v___x_3396_);
lean_dec(v_fst_3365_);
v_a_3442_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3449_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3444_ = v___x_3416_;
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3416_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3447_; 
if (v_isShared_3445_ == 0)
{
v___x_3447_ = v___x_3444_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_a_3442_);
v___x_3447_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
return v___x_3447_;
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
v___jp_3374_:
{
lean_object* v___x_3376_; 
if (v_isShared_3373_ == 0)
{
v___x_3376_ = v___x_3372_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_fst_3369_);
lean_ctor_set(v_reuseFailAlloc_3381_, 1, v_snd_3370_);
v___x_3376_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
lean_object* v___x_3378_; 
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 1, v___x_3376_);
v___x_3378_ = v___x_3367_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_fst_3365_);
lean_ctor_set(v_reuseFailAlloc_3380_, 1, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
return v___x_3379_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6___boxed(lean_object* v___x_3463_, lean_object* v___x_3464_, lean_object* v_as_3465_, lean_object* v_sz_3466_, lean_object* v_i_3467_, lean_object* v_b_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
size_t v_sz_boxed_3474_; size_t v_i_boxed_3475_; lean_object* v_res_3476_; 
v_sz_boxed_3474_ = lean_unbox_usize(v_sz_3466_);
lean_dec(v_sz_3466_);
v_i_boxed_3475_ = lean_unbox_usize(v_i_3467_);
lean_dec(v_i_3467_);
v_res_3476_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(v___x_3463_, v___x_3464_, v_as_3465_, v_sz_boxed_3474_, v_i_boxed_3475_, v_b_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec_ref(v_as_3465_);
lean_dec(v___x_3464_);
lean_dec(v___x_3463_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(size_t v_sz_3477_, size_t v_i_3478_, lean_object* v_bs_3479_){
_start:
{
uint8_t v___x_3480_; 
v___x_3480_ = lean_usize_dec_lt(v_i_3478_, v_sz_3477_);
if (v___x_3480_ == 0)
{
return v_bs_3479_;
}
else
{
lean_object* v_v_3481_; lean_object* v_fst_3482_; lean_object* v_snd_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3499_; 
v_v_3481_ = lean_array_uget(v_bs_3479_, v_i_3478_);
v_fst_3482_ = lean_ctor_get(v_v_3481_, 0);
v_snd_3483_ = lean_ctor_get(v_v_3481_, 1);
v_isSharedCheck_3499_ = !lean_is_exclusive(v_v_3481_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3485_ = v_v_3481_;
v_isShared_3486_ = v_isSharedCheck_3499_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_snd_3483_);
lean_inc(v_fst_3482_);
lean_dec(v_v_3481_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3499_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3487_; lean_object* v_bs_x27_3488_; uint8_t v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3492_; 
v___x_3487_ = lean_unsigned_to_nat(0u);
v_bs_x27_3488_ = lean_array_uset(v_bs_3479_, v_i_3478_, v___x_3487_);
v___x_3489_ = 0;
v___x_3490_ = lean_box(v___x_3489_);
if (v_isShared_3486_ == 0)
{
lean_ctor_set(v___x_3485_, 0, v___x_3490_);
v___x_3492_ = v___x_3485_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3490_);
lean_ctor_set(v_reuseFailAlloc_3498_, 1, v_snd_3483_);
v___x_3492_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
lean_object* v___x_3493_; size_t v___x_3494_; size_t v___x_3495_; lean_object* v___x_3496_; 
v___x_3493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3493_, 0, v_fst_3482_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = ((size_t)1ULL);
v___x_3495_ = lean_usize_add(v_i_3478_, v___x_3494_);
v___x_3496_ = lean_array_uset(v_bs_x27_3488_, v_i_3478_, v___x_3493_);
v_i_3478_ = v___x_3495_;
v_bs_3479_ = v___x_3496_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7___boxed(lean_object* v_sz_3500_, lean_object* v_i_3501_, lean_object* v_bs_3502_){
_start:
{
size_t v_sz_boxed_3503_; size_t v_i_boxed_3504_; lean_object* v_res_3505_; 
v_sz_boxed_3503_ = lean_unbox_usize(v_sz_3500_);
lean_dec(v_sz_3500_);
v_i_boxed_3504_ = lean_unbox_usize(v_i_3501_);
lean_dec(v_i_3501_);
v_res_3505_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(v_sz_boxed_3503_, v_i_boxed_3504_, v_bs_3502_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0(lean_object* v___x_3506_, lean_object* v___x_3507_, lean_object* v_a_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_){
_start:
{
lean_object* v___x_34020__overap_3514_; lean_object* v___x_3515_; 
v___x_34020__overap_3514_ = l_instInhabitedOfMonad___redArg(v___x_3506_, v___x_3507_);
lean_inc(v___y_3512_);
lean_inc_ref(v___y_3511_);
lean_inc(v___y_3510_);
lean_inc_ref(v___y_3509_);
v___x_3515_ = lean_apply_5(v___x_34020__overap_3514_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, lean_box(0));
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0___boxed(lean_object* v___x_3516_, lean_object* v___x_3517_, lean_object* v_a_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_){
_start:
{
lean_object* v_res_3524_; 
v_res_3524_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0(v___x_3516_, v___x_3517_, v_a_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_);
lean_dec(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v_a_3518_);
return v_res_3524_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0(void){
_start:
{
lean_object* v___x_3525_; 
v___x_3525_ = l_instMonadEIO___redArg();
return v___x_3525_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1(void){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3526_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__0);
v___x_3527_ = l_StateRefT_x27_instMonad___redArg(v___x_3526_);
return v___x_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0___boxed(lean_object* v_acc_3532_, lean_object* v_declInfos_3533_, lean_object* v_k_3534_, lean_object* v_kind_3535_, lean_object* v_b_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_){
_start:
{
uint8_t v_kind_boxed_3542_; lean_object* v_res_3543_; 
v_kind_boxed_3542_ = lean_unbox(v_kind_3535_);
v_res_3543_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0(v_acc_3532_, v_declInfos_3533_, v_k_3534_, v_kind_boxed_3542_, v_b_3536_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_);
lean_dec(v___y_3540_);
lean_dec_ref(v___y_3539_);
lean_dec(v___y_3538_);
lean_dec_ref(v___y_3537_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(lean_object* v_acc_3544_, lean_object* v_declInfos_3545_, lean_object* v_k_3546_, uint8_t v_kind_3547_, lean_object* v_name_3548_, uint8_t v_bi_3549_, lean_object* v_type_3550_, uint8_t v_kind_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
lean_object* v___x_3557_; lean_object* v___f_3558_; lean_object* v___x_3559_; 
v___x_3557_ = lean_box(v_kind_3547_);
v___f_3558_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3558_, 0, v_acc_3544_);
lean_closure_set(v___f_3558_, 1, v_declInfos_3545_);
lean_closure_set(v___f_3558_, 2, v_k_3546_);
lean_closure_set(v___f_3558_, 3, v___x_3557_);
v___x_3559_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3548_, v_bi_3549_, v_type_3550_, v___f_3558_, v_kind_3551_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3559_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3559_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
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
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
v_a_3568_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3559_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3559_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(lean_object* v_declInfos_3576_, lean_object* v_k_3577_, uint8_t v_kind_3578_, lean_object* v_acc_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_){
_start:
{
lean_object* v___x_3585_; lean_object* v_toApplicative_3586_; lean_object* v_toFunctor_3587_; lean_object* v_toSeq_3588_; lean_object* v_toSeqLeft_3589_; lean_object* v_toSeqRight_3590_; lean_object* v___f_3591_; lean_object* v___f_3592_; lean_object* v___f_3593_; lean_object* v___f_3594_; lean_object* v___x_3595_; lean_object* v___f_3596_; lean_object* v___f_3597_; lean_object* v___f_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v_toApplicative_3602_; lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3658_; 
v___x_3585_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__1);
v_toApplicative_3586_ = lean_ctor_get(v___x_3585_, 0);
v_toFunctor_3587_ = lean_ctor_get(v_toApplicative_3586_, 0);
v_toSeq_3588_ = lean_ctor_get(v_toApplicative_3586_, 2);
v_toSeqLeft_3589_ = lean_ctor_get(v_toApplicative_3586_, 3);
v_toSeqRight_3590_ = lean_ctor_get(v_toApplicative_3586_, 4);
v___f_3591_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__2));
v___f_3592_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__3));
lean_inc_ref_n(v_toFunctor_3587_, 2);
v___f_3593_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3593_, 0, v_toFunctor_3587_);
v___f_3594_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3594_, 0, v_toFunctor_3587_);
v___x_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3595_, 0, v___f_3593_);
lean_ctor_set(v___x_3595_, 1, v___f_3594_);
lean_inc(v_toSeqRight_3590_);
v___f_3596_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3596_, 0, v_toSeqRight_3590_);
lean_inc(v_toSeqLeft_3589_);
v___f_3597_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3597_, 0, v_toSeqLeft_3589_);
lean_inc(v_toSeq_3588_);
v___f_3598_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3598_, 0, v_toSeq_3588_);
v___x_3599_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3595_);
lean_ctor_set(v___x_3599_, 1, v___f_3591_);
lean_ctor_set(v___x_3599_, 2, v___f_3598_);
lean_ctor_set(v___x_3599_, 3, v___f_3597_);
lean_ctor_set(v___x_3599_, 4, v___f_3596_);
v___x_3600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3599_);
lean_ctor_set(v___x_3600_, 1, v___f_3592_);
v___x_3601_ = l_StateRefT_x27_instMonad___redArg(v___x_3600_);
v_toApplicative_3602_ = lean_ctor_get(v___x_3601_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3601_);
if (v_isSharedCheck_3658_ == 0)
{
lean_object* v_unused_3659_; 
v_unused_3659_ = lean_ctor_get(v___x_3601_, 1);
lean_dec(v_unused_3659_);
v___x_3604_ = v___x_3601_;
v_isShared_3605_ = v_isSharedCheck_3658_;
goto v_resetjp_3603_;
}
else
{
lean_inc(v_toApplicative_3602_);
lean_dec(v___x_3601_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3658_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v_toFunctor_3606_; lean_object* v_toSeq_3607_; lean_object* v_toSeqLeft_3608_; lean_object* v_toSeqRight_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3656_; 
v_toFunctor_3606_ = lean_ctor_get(v_toApplicative_3602_, 0);
v_toSeq_3607_ = lean_ctor_get(v_toApplicative_3602_, 2);
v_toSeqLeft_3608_ = lean_ctor_get(v_toApplicative_3602_, 3);
v_toSeqRight_3609_ = lean_ctor_get(v_toApplicative_3602_, 4);
v_isSharedCheck_3656_ = !lean_is_exclusive(v_toApplicative_3602_);
if (v_isSharedCheck_3656_ == 0)
{
lean_object* v_unused_3657_; 
v_unused_3657_ = lean_ctor_get(v_toApplicative_3602_, 1);
lean_dec(v_unused_3657_);
v___x_3611_ = v_toApplicative_3602_;
v_isShared_3612_ = v_isSharedCheck_3656_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_toSeqRight_3609_);
lean_inc(v_toSeqLeft_3608_);
lean_inc(v_toSeq_3607_);
lean_inc(v_toFunctor_3606_);
lean_dec(v_toApplicative_3602_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3656_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___f_3613_; lean_object* v___f_3614_; lean_object* v___f_3615_; lean_object* v___f_3616_; lean_object* v___x_3617_; lean_object* v___f_3618_; lean_object* v___f_3619_; lean_object* v___f_3620_; lean_object* v___x_3622_; 
v___f_3613_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__4));
v___f_3614_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___closed__5));
lean_inc_ref(v_toFunctor_3606_);
v___f_3615_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3615_, 0, v_toFunctor_3606_);
v___f_3616_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3616_, 0, v_toFunctor_3606_);
v___x_3617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3617_, 0, v___f_3615_);
lean_ctor_set(v___x_3617_, 1, v___f_3616_);
v___f_3618_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3618_, 0, v_toSeqRight_3609_);
v___f_3619_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3619_, 0, v_toSeqLeft_3608_);
v___f_3620_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3620_, 0, v_toSeq_3607_);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 4, v___f_3618_);
lean_ctor_set(v___x_3611_, 3, v___f_3619_);
lean_ctor_set(v___x_3611_, 2, v___f_3620_);
lean_ctor_set(v___x_3611_, 1, v___f_3613_);
lean_ctor_set(v___x_3611_, 0, v___x_3617_);
v___x_3622_ = v___x_3611_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3617_);
lean_ctor_set(v_reuseFailAlloc_3655_, 1, v___f_3613_);
lean_ctor_set(v_reuseFailAlloc_3655_, 2, v___f_3620_);
lean_ctor_set(v_reuseFailAlloc_3655_, 3, v___f_3619_);
lean_ctor_set(v_reuseFailAlloc_3655_, 4, v___f_3618_);
v___x_3622_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
lean_object* v___x_3624_; 
if (v_isShared_3605_ == 0)
{
lean_ctor_set(v___x_3604_, 1, v___f_3614_);
lean_ctor_set(v___x_3604_, 0, v___x_3622_);
v___x_3624_ = v___x_3604_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v___x_3622_);
lean_ctor_set(v_reuseFailAlloc_3654_, 1, v___f_3614_);
v___x_3624_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; uint8_t v___x_3627_; 
v___x_3625_ = lean_array_get_size(v_acc_3579_);
v___x_3626_ = lean_array_get_size(v_declInfos_3576_);
v___x_3627_ = lean_nat_dec_lt(v___x_3625_, v___x_3626_);
if (v___x_3627_ == 0)
{
lean_object* v___x_3628_; 
lean_dec_ref(v___x_3624_);
lean_dec_ref(v_declInfos_3576_);
lean_inc(v___y_3583_);
lean_inc_ref(v___y_3582_);
lean_inc(v___y_3581_);
lean_inc_ref(v___y_3580_);
v___x_3628_ = lean_apply_6(v_k_3577_, v_acc_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, lean_box(0));
return v___x_3628_;
}
else
{
lean_object* v___x_3629_; uint8_t v___x_3630_; lean_object* v___x_3631_; lean_object* v___f_3632_; lean_object* v___f_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v_snd_3638_; lean_object* v_fst_3639_; lean_object* v_fst_3640_; lean_object* v_snd_3641_; lean_object* v___x_3642_; 
v___x_3629_ = lean_box(0);
v___x_3630_ = 0;
v___x_3631_ = l_Lean_instInhabitedExpr;
v___f_3632_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3632_, 0, v___x_3624_);
lean_closure_set(v___f_3632_, 1, v___x_3631_);
v___f_3633_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3633_, 0, v___f_3632_);
v___x_3634_ = lean_box(v___x_3630_);
v___x_3635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3634_);
lean_ctor_set(v___x_3635_, 1, v___f_3633_);
v___x_3636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3629_);
lean_ctor_set(v___x_3636_, 1, v___x_3635_);
v___x_3637_ = lean_array_get(v___x_3636_, v_declInfos_3576_, v___x_3625_);
lean_dec_ref_known(v___x_3636_, 2);
v_snd_3638_ = lean_ctor_get(v___x_3637_, 1);
lean_inc(v_snd_3638_);
v_fst_3639_ = lean_ctor_get(v___x_3637_, 0);
lean_inc(v_fst_3639_);
lean_dec(v___x_3637_);
v_fst_3640_ = lean_ctor_get(v_snd_3638_, 0);
lean_inc(v_fst_3640_);
v_snd_3641_ = lean_ctor_get(v_snd_3638_, 1);
lean_inc(v_snd_3641_);
lean_dec(v_snd_3638_);
lean_inc(v___y_3583_);
lean_inc_ref(v___y_3582_);
lean_inc(v___y_3581_);
lean_inc_ref(v___y_3580_);
lean_inc_ref(v_acc_3579_);
v___x_3642_ = lean_apply_6(v_snd_3641_, v_acc_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_, lean_box(0));
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v_a_3643_; uint8_t v___x_3644_; lean_object* v___x_3645_; 
v_a_3643_ = lean_ctor_get(v___x_3642_, 0);
lean_inc(v_a_3643_);
lean_dec_ref_known(v___x_3642_, 1);
v___x_3644_ = lean_unbox(v_fst_3640_);
lean_dec(v_fst_3640_);
v___x_3645_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(v_acc_3579_, v_declInfos_3576_, v_k_3577_, v_kind_3578_, v_fst_3639_, v___x_3644_, v_a_3643_, v_kind_3578_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_);
return v___x_3645_;
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
lean_dec(v_fst_3640_);
lean_dec(v_fst_3639_);
lean_dec_ref(v_acc_3579_);
lean_dec_ref(v_k_3577_);
lean_dec_ref(v_declInfos_3576_);
v_a_3646_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3642_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3642_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___lam__0(lean_object* v_acc_3660_, lean_object* v_declInfos_3661_, lean_object* v_k_3662_, uint8_t v_kind_3663_, lean_object* v_b_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_){
_start:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3670_ = lean_array_push(v_acc_3660_, v_b_3664_);
v___x_3671_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(v_declInfos_3661_, v_k_3662_, v_kind_3663_, v___x_3670_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_);
return v___x_3671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11___boxed(lean_object* v_acc_3672_, lean_object* v_declInfos_3673_, lean_object* v_k_3674_, lean_object* v_kind_3675_, lean_object* v_name_3676_, lean_object* v_bi_3677_, lean_object* v_type_3678_, lean_object* v_kind_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
uint8_t v_kind_boxed_3685_; uint8_t v_bi_boxed_3686_; uint8_t v_kind_boxed_3687_; lean_object* v_res_3688_; 
v_kind_boxed_3685_ = lean_unbox(v_kind_3675_);
v_bi_boxed_3686_ = lean_unbox(v_bi_3677_);
v_kind_boxed_3687_ = lean_unbox(v_kind_3679_);
v_res_3688_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__2_spec__3___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9_spec__11(v_acc_3672_, v_declInfos_3673_, v_k_3674_, v_kind_boxed_3685_, v_name_3676_, v_bi_boxed_3686_, v_type_3678_, v_kind_boxed_3687_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
return v_res_3688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9___boxed(lean_object* v_declInfos_3689_, lean_object* v_k_3690_, lean_object* v_kind_3691_, lean_object* v_acc_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_){
_start:
{
uint8_t v_kind_boxed_3698_; lean_object* v_res_3699_; 
v_kind_boxed_3698_ = lean_unbox(v_kind_3691_);
v_res_3699_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(v_declInfos_3689_, v_k_3690_, v_kind_boxed_3698_, v_acc_3692_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_);
lean_dec(v___y_3696_);
lean_dec_ref(v___y_3695_);
lean_dec(v___y_3694_);
lean_dec_ref(v___y_3693_);
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(lean_object* v_declInfos_3700_, lean_object* v_k_3701_, uint8_t v_kind_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3708_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise___lam__0___closed__0));
v___x_3709_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8_spec__9(v_declInfos_3700_, v_k_3701_, v_kind_3702_, v___x_3708_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_);
return v___x_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8___boxed(lean_object* v_declInfos_3710_, lean_object* v_k_3711_, lean_object* v_kind_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_){
_start:
{
uint8_t v_kind_boxed_3718_; lean_object* v_res_3719_; 
v_kind_boxed_3718_ = lean_unbox(v_kind_3712_);
v_res_3719_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(v_declInfos_3710_, v_k_3711_, v_kind_boxed_3718_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v___y_3714_);
lean_dec_ref(v___y_3713_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(lean_object* v_declInfos_3720_, lean_object* v_k_3721_, uint8_t v_kind_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_){
_start:
{
size_t v_sz_3728_; size_t v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v_sz_3728_ = lean_array_size(v_declInfos_3720_);
v___x_3729_ = ((size_t)0ULL);
v___x_3730_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__7(v_sz_3728_, v___x_3729_, v_declInfos_3720_);
v___x_3731_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7_spec__8(v___x_3730_, v_k_3721_, v_kind_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
return v___x_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7___boxed(lean_object* v_declInfos_3732_, lean_object* v_k_3733_, lean_object* v_kind_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_){
_start:
{
uint8_t v_kind_boxed_3740_; lean_object* v_res_3741_; 
v_kind_boxed_3740_ = lean_unbox(v_kind_3734_);
v_res_3741_ = l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(v_declInfos_3732_, v_k_3733_, v_kind_boxed_3740_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_);
lean_dec(v___y_3738_);
lean_dec_ref(v___y_3737_);
lean_dec(v___y_3736_);
lean_dec_ref(v___y_3735_);
return v_res_3741_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3743_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__2));
v___x_3744_ = lean_unsigned_to_nat(4u);
v___x_3745_ = lean_unsigned_to_nat(202u);
v___x_3746_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__0));
v___x_3747_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__0));
v___x_3748_ = l_mkPanicMessageWithDecl(v___x_3747_, v___x_3746_, v___x_3745_, v___x_3744_, v___x_3743_);
return v___x_3748_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5(void){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3754_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__4));
v___x_3755_ = l_Lean_stringToMessageData(v___x_3754_);
return v___x_3755_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7(void){
_start:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3757_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__6));
v___x_3758_ = l_Lean_stringToMessageData(v___x_3757_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2(lean_object* v_nParams_3759_, lean_object* v_numMotives_3760_, lean_object* v_numMinors_3761_, lean_object* v___x_3762_, lean_object* v_all_3763_, lean_object* v___x_3764_, lean_object* v___x_3765_, lean_object* v_head_3766_, lean_object* v_tail_3767_, lean_object* v_recName_3768_, lean_object* v_brecOnGoName_3769_, lean_object* v_levelParams_3770_, lean_object* v_brecOnName_3771_, lean_object* v_brecOnEqName_3772_, lean_object* v_type_3773_, lean_object* v_refArgs_3774_, lean_object* v_refBody_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_){
_start:
{
lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; uint8_t v___x_3784_; 
v___x_3781_ = lean_nat_add(v_nParams_3759_, v_numMotives_3760_);
v___x_3782_ = lean_nat_add(v___x_3781_, v_numMinors_3761_);
v___x_3783_ = lean_array_get_size(v_refArgs_3774_);
v___x_3784_ = lean_nat_dec_lt(v___x_3782_, v___x_3783_);
if (v___x_3784_ == 0)
{
lean_object* v___x_3785_; lean_object* v___x_3786_; 
lean_dec(v___x_3782_);
lean_dec(v___x_3781_);
lean_dec_ref(v_refArgs_3774_);
lean_dec_ref(v_type_3773_);
lean_dec(v_brecOnEqName_3772_);
lean_dec(v_brecOnName_3771_);
lean_dec(v_levelParams_3770_);
lean_dec(v_brecOnGoName_3769_);
lean_dec(v_recName_3768_);
lean_dec(v_tail_3767_);
lean_dec(v_head_3766_);
lean_dec_ref(v___x_3765_);
lean_dec(v___x_3764_);
lean_dec_ref(v_all_3763_);
lean_dec(v___x_3762_);
lean_dec(v_nParams_3759_);
v___x_3785_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__1);
v___x_3786_ = l_panic___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__0(v___x_3785_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
return v___x_3786_;
}
else
{
lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; 
v___x_3787_ = lean_unsigned_to_nat(0u);
lean_inc(v_nParams_3759_);
lean_inc_ref_n(v_refArgs_3774_, 2);
v___x_3788_ = l_Array_toSubarray___redArg(v_refArgs_3774_, v___x_3787_, v_nParams_3759_);
lean_inc(v___x_3781_);
v___x_3789_ = l_Array_toSubarray___redArg(v_refArgs_3774_, v_nParams_3759_, v___x_3781_);
v___x_3790_ = l_Subarray_copy___redArg(v___x_3789_);
v___x_3791_ = l_Lean_Expr_getAppFn(v_refBody_3775_);
v___x_3792_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__0(v___x_3790_, v___x_3791_);
lean_dec_ref(v___x_3791_);
if (lean_obj_tag(v___x_3792_) == 1)
{
lean_object* v_val_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___f_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
lean_dec_ref(v_type_3773_);
v_val_3793_ = lean_ctor_get(v___x_3792_, 0);
lean_inc(v_val_3793_);
lean_dec_ref_known(v___x_3792_, 1);
lean_inc_n(v___x_3782_, 2);
lean_inc_ref_n(v_refArgs_3774_, 2);
v___x_3794_ = l_Array_toSubarray___redArg(v_refArgs_3774_, v___x_3781_, v___x_3782_);
v___x_3795_ = l_Subarray_copy___redArg(v___x_3788_);
v___x_3796_ = l_Subarray_copy___redArg(v___x_3794_);
v___x_3797_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v___x_3790_);
lean_inc_ref(v___x_3795_);
lean_inc(v___x_3762_);
v___f_3798_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__0___boxed), 8, 7);
lean_closure_set(v___f_3798_, 0, v___x_3762_);
lean_closure_set(v___f_3798_, 1, v___x_3795_);
lean_closure_set(v___f_3798_, 2, v___x_3790_);
lean_closure_set(v___f_3798_, 3, v_all_3763_);
lean_closure_set(v___f_3798_, 4, v___x_3764_);
lean_closure_set(v___f_3798_, 5, v___x_3787_);
lean_closure_set(v___f_3798_, 6, v___x_3797_);
v___x_3799_ = lean_nat_sub(v___x_3783_, v___x_3797_);
lean_inc(v___x_3799_);
v___x_3800_ = l_Array_toSubarray___redArg(v_refArgs_3774_, v___x_3782_, v___x_3799_);
v___x_3801_ = l_Subarray_copy___redArg(v___x_3800_);
v___x_3802_ = lean_array_get(v___x_3765_, v_refArgs_3774_, v___x_3799_);
lean_dec(v___x_3799_);
lean_dec_ref(v_refArgs_3774_);
lean_inc(v___y_3779_);
lean_inc_ref(v___y_3778_);
lean_inc(v___y_3777_);
lean_inc_ref(v___y_3776_);
lean_inc(v___x_3802_);
v___x_3803_ = lean_infer_type(v___x_3802_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
if (lean_obj_tag(v___x_3803_) == 0)
{
lean_object* v_a_3804_; lean_object* v___x_3805_; 
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
lean_inc(v_a_3804_);
lean_dec_ref_known(v___x_3803_, 1);
lean_inc(v___y_3779_);
lean_inc_ref(v___y_3778_);
lean_inc(v___y_3777_);
lean_inc_ref(v___y_3776_);
v___x_3805_ = lean_infer_type(v_a_3804_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v___x_3807_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v___x_3805_, 1);
v___x_3807_ = l_Lean_Meta_typeFormerTypeLevel(v_a_3806_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; 
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_a_3808_);
lean_dec_ref_known(v___x_3807_, 1);
if (lean_obj_tag(v_a_3808_) == 1)
{
lean_object* v_val_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___f_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; size_t v_sz_3822_; size_t v___x_3823_; lean_object* v___x_3824_; 
v_val_3809_ = lean_ctor_get(v_a_3808_, 0);
lean_inc(v_val_3809_);
lean_dec_ref_known(v_a_3808_, 1);
v___x_3810_ = l_Lean_mkLevelMax(v_val_3809_, v_head_3766_);
v___x_3811_ = lean_array_get_size(v___x_3790_);
v___x_3812_ = l_Array_ofFn___redArg(v___x_3811_, v___f_3798_);
v___x_3813_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__2));
v___x_3814_ = lean_array_get_size(v___x_3812_);
lean_inc_ref(v___x_3812_);
v___x_3815_ = l_Array_toSubarray___redArg(v___x_3812_, v___x_3787_, v___x_3814_);
v___x_3816_ = lean_box(v___x_3784_);
lean_inc(v___x_3782_);
lean_inc_ref(v___x_3790_);
lean_inc_ref(v___x_3815_);
v___f_3817_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__1___boxed), 28, 22);
lean_closure_set(v___f_3817_, 0, v___x_3810_);
lean_closure_set(v___f_3817_, 1, v_tail_3767_);
lean_closure_set(v___f_3817_, 2, v_recName_3768_);
lean_closure_set(v___f_3817_, 3, v___x_3795_);
lean_closure_set(v___f_3817_, 4, v___x_3815_);
lean_closure_set(v___f_3817_, 5, v___x_3790_);
lean_closure_set(v___f_3817_, 6, v___x_3782_);
lean_closure_set(v___f_3817_, 7, v___x_3783_);
lean_closure_set(v___f_3817_, 8, v___x_3796_);
lean_closure_set(v___f_3817_, 9, v___x_3812_);
lean_closure_set(v___f_3817_, 10, v___x_3801_);
lean_closure_set(v___f_3817_, 11, v___x_3802_);
lean_closure_set(v___f_3817_, 12, v___x_3797_);
lean_closure_set(v___f_3817_, 13, v___x_3765_);
lean_closure_set(v___f_3817_, 14, v_val_3793_);
lean_closure_set(v___f_3817_, 15, v___x_3816_);
lean_closure_set(v___f_3817_, 16, v_brecOnGoName_3769_);
lean_closure_set(v___f_3817_, 17, v_levelParams_3770_);
lean_closure_set(v___f_3817_, 18, v___x_3787_);
lean_closure_set(v___f_3817_, 19, v___x_3762_);
lean_closure_set(v___f_3817_, 20, v_brecOnName_3771_);
lean_closure_set(v___f_3817_, 21, v_brecOnEqName_3772_);
v___x_3818_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__3));
v___x_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3818_);
lean_ctor_set(v___x_3819_, 1, v___x_3811_);
v___x_3820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3820_, 0, v___x_3815_);
lean_ctor_set(v___x_3820_, 1, v___x_3819_);
v___x_3821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3813_);
lean_ctor_set(v___x_3821_, 1, v___x_3820_);
v_sz_3822_ = lean_array_size(v___x_3790_);
v___x_3823_ = ((size_t)0ULL);
v___x_3824_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__6(v___x_3782_, v___x_3783_, v___x_3790_, v_sz_3822_, v___x_3823_, v___x_3821_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
lean_dec_ref(v___x_3790_);
lean_dec(v___x_3782_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v_fst_3826_; uint8_t v___x_3827_; lean_object* v___x_3828_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3825_);
lean_dec_ref_known(v___x_3824_, 1);
v_fst_3826_ = lean_ctor_get(v_a_3825_, 0);
lean_inc(v_fst_3826_);
lean_dec(v_a_3825_);
v___x_3827_ = 0;
v___x_3828_ = l_Lean_Meta_withLocalDeclsD___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec_spec__7(v_fst_3826_, v___f_3817_, v___x_3827_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
return v___x_3828_;
}
else
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3836_; 
lean_dec_ref(v___f_3817_);
v_a_3829_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3831_ = v___x_3824_;
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3824_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3836_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3834_; 
if (v_isShared_3832_ == 0)
{
v___x_3834_ = v___x_3831_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_a_3829_);
v___x_3834_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
return v___x_3834_;
}
}
}
}
else
{
lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; 
lean_dec(v_a_3808_);
lean_dec_ref(v___x_3801_);
lean_dec_ref(v___f_3798_);
lean_dec_ref(v___x_3796_);
lean_dec_ref(v___x_3795_);
lean_dec(v_val_3793_);
lean_dec_ref(v___x_3790_);
lean_dec(v___x_3782_);
lean_dec(v_brecOnEqName_3772_);
lean_dec(v_brecOnName_3771_);
lean_dec(v_levelParams_3770_);
lean_dec(v_brecOnGoName_3769_);
lean_dec(v_recName_3768_);
lean_dec(v_tail_3767_);
lean_dec(v_head_3766_);
lean_dec_ref(v___x_3765_);
lean_dec(v___x_3762_);
v___x_3837_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__5);
v___x_3838_ = l_Lean_MessageData_ofExpr(v___x_3802_);
v___x_3839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3839_, 0, v___x_3837_);
lean_ctor_set(v___x_3839_, 1, v___x_3838_);
v___x_3840_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___lam__0___closed__7);
v___x_3841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3839_);
lean_ctor_set(v___x_3841_, 1, v___x_3840_);
v___x_3842_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_3841_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
return v___x_3842_;
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
lean_dec(v___x_3802_);
lean_dec_ref(v___x_3801_);
lean_dec_ref(v___f_3798_);
lean_dec_ref(v___x_3796_);
lean_dec_ref(v___x_3795_);
lean_dec(v_val_3793_);
lean_dec_ref(v___x_3790_);
lean_dec(v___x_3782_);
lean_dec(v_brecOnEqName_3772_);
lean_dec(v_brecOnName_3771_);
lean_dec(v_levelParams_3770_);
lean_dec(v_brecOnGoName_3769_);
lean_dec(v_recName_3768_);
lean_dec(v_tail_3767_);
lean_dec(v_head_3766_);
lean_dec_ref(v___x_3765_);
lean_dec(v___x_3762_);
v_a_3843_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3807_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3807_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
else
{
lean_object* v_a_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3858_; 
lean_dec(v___x_3802_);
lean_dec_ref(v___x_3801_);
lean_dec_ref(v___f_3798_);
lean_dec_ref(v___x_3796_);
lean_dec_ref(v___x_3795_);
lean_dec(v_val_3793_);
lean_dec_ref(v___x_3790_);
lean_dec(v___x_3782_);
lean_dec(v_brecOnEqName_3772_);
lean_dec(v_brecOnName_3771_);
lean_dec(v_levelParams_3770_);
lean_dec(v_brecOnGoName_3769_);
lean_dec(v_recName_3768_);
lean_dec(v_tail_3767_);
lean_dec(v_head_3766_);
lean_dec_ref(v___x_3765_);
lean_dec(v___x_3762_);
v_a_3851_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3853_ = v___x_3805_;
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_a_3851_);
lean_dec(v___x_3805_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
lean_object* v___x_3856_; 
if (v_isShared_3854_ == 0)
{
v___x_3856_ = v___x_3853_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v_a_3851_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
}
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
lean_dec(v___x_3802_);
lean_dec_ref(v___x_3801_);
lean_dec_ref(v___f_3798_);
lean_dec_ref(v___x_3796_);
lean_dec_ref(v___x_3795_);
lean_dec(v_val_3793_);
lean_dec_ref(v___x_3790_);
lean_dec(v___x_3782_);
lean_dec(v_brecOnEqName_3772_);
lean_dec(v_brecOnName_3771_);
lean_dec(v_levelParams_3770_);
lean_dec(v_brecOnGoName_3769_);
lean_dec(v_recName_3768_);
lean_dec(v_tail_3767_);
lean_dec(v_head_3766_);
lean_dec_ref(v___x_3765_);
lean_dec(v___x_3762_);
v_a_3859_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3803_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3803_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
else
{
lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
lean_dec(v___x_3792_);
lean_dec_ref(v___x_3788_);
lean_dec(v___x_3782_);
lean_dec(v___x_3781_);
lean_dec_ref(v_refArgs_3774_);
lean_dec(v_brecOnEqName_3772_);
lean_dec(v_brecOnName_3771_);
lean_dec(v_levelParams_3770_);
lean_dec(v_brecOnGoName_3769_);
lean_dec(v_recName_3768_);
lean_dec(v_tail_3767_);
lean_dec(v_head_3766_);
lean_dec_ref(v___x_3765_);
lean_dec(v___x_3764_);
lean_dec_ref(v_all_3763_);
lean_dec(v___x_3762_);
v___x_3867_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__5);
v___x_3868_ = l_Lean_MessageData_ofExpr(v_type_3773_);
v___x_3869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3869_, 0, v___x_3867_);
lean_ctor_set(v___x_3869_, 1, v___x_3868_);
v___x_3870_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___closed__7);
v___x_3871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3869_);
lean_ctor_set(v___x_3871_, 1, v___x_3870_);
v___x_3872_ = lean_array_to_list(v___x_3790_);
v___x_3873_ = lean_box(0);
v___x_3874_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBRecOnMinorPremise_go_spec__1(v___x_3872_, v___x_3873_);
v___x_3875_ = l_Lean_MessageData_ofList(v___x_3874_);
v___x_3876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3871_);
lean_ctor_set(v___x_3876_, 1, v___x_3875_);
v___x_3877_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_3876_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
return v___x_3877_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___boxed(lean_object** _args){
lean_object* v_nParams_3878_ = _args[0];
lean_object* v_numMotives_3879_ = _args[1];
lean_object* v_numMinors_3880_ = _args[2];
lean_object* v___x_3881_ = _args[3];
lean_object* v_all_3882_ = _args[4];
lean_object* v___x_3883_ = _args[5];
lean_object* v___x_3884_ = _args[6];
lean_object* v_head_3885_ = _args[7];
lean_object* v_tail_3886_ = _args[8];
lean_object* v_recName_3887_ = _args[9];
lean_object* v_brecOnGoName_3888_ = _args[10];
lean_object* v_levelParams_3889_ = _args[11];
lean_object* v_brecOnName_3890_ = _args[12];
lean_object* v_brecOnEqName_3891_ = _args[13];
lean_object* v_type_3892_ = _args[14];
lean_object* v_refArgs_3893_ = _args[15];
lean_object* v_refBody_3894_ = _args[16];
lean_object* v___y_3895_ = _args[17];
lean_object* v___y_3896_ = _args[18];
lean_object* v___y_3897_ = _args[19];
lean_object* v___y_3898_ = _args[20];
lean_object* v___y_3899_ = _args[21];
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2(v_nParams_3878_, v_numMotives_3879_, v_numMinors_3880_, v___x_3881_, v_all_3882_, v___x_3883_, v___x_3884_, v_head_3885_, v_tail_3886_, v_recName_3887_, v_brecOnGoName_3888_, v_levelParams_3889_, v_brecOnName_3890_, v_brecOnEqName_3891_, v_type_3892_, v_refArgs_3893_, v_refBody_3894_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_);
lean_dec(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec_ref(v_refBody_3894_);
lean_dec(v_numMinors_3880_);
lean_dec(v_numMotives_3879_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(lean_object* v_recName_3903_, lean_object* v_nParams_3904_, lean_object* v_all_3905_, lean_object* v_brecOnName_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_){
_start:
{
lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v_brecOnGoName_3915_; lean_object* v___x_3916_; lean_object* v_brecOnEqName_3917_; lean_object* v___x_3918_; 
v___x_3912_ = l_Lean_instInhabitedExpr;
v___x_3913_ = lean_box(0);
v___x_3914_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__0));
lean_inc_n(v_brecOnName_3906_, 2);
v_brecOnGoName_3915_ = l_Lean_Name_str___override(v_brecOnName_3906_, v___x_3914_);
v___x_3916_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___closed__1));
v_brecOnEqName_3917_ = l_Lean_Name_str___override(v_brecOnName_3906_, v___x_3916_);
lean_inc(v_recName_3903_);
v___x_3918_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_recName_3903_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3946_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3921_ = v___x_3918_;
v_isShared_3922_ = v_isSharedCheck_3946_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3918_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3946_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
if (lean_obj_tag(v_a_3919_) == 7)
{
lean_object* v_val_3923_; lean_object* v_toConstantVal_3924_; lean_object* v_numMotives_3925_; lean_object* v_numMinors_3926_; lean_object* v_levelParams_3927_; lean_object* v_type_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
lean_del_object(v___x_3921_);
v_val_3923_ = lean_ctor_get(v_a_3919_, 0);
lean_inc_ref(v_val_3923_);
lean_dec_ref_known(v_a_3919_, 1);
v_toConstantVal_3924_ = lean_ctor_get(v_val_3923_, 0);
lean_inc_ref(v_toConstantVal_3924_);
v_numMotives_3925_ = lean_ctor_get(v_val_3923_, 4);
lean_inc(v_numMotives_3925_);
v_numMinors_3926_ = lean_ctor_get(v_val_3923_, 5);
lean_inc(v_numMinors_3926_);
lean_dec_ref(v_val_3923_);
v_levelParams_3927_ = lean_ctor_get(v_toConstantVal_3924_, 1);
lean_inc_n(v_levelParams_3927_, 2);
v_type_3928_ = lean_ctor_get(v_toConstantVal_3924_, 2);
lean_inc_ref(v_type_3928_);
lean_dec_ref(v_toConstantVal_3924_);
v___x_3929_ = lean_box(0);
v___x_3930_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__1(v_levelParams_3927_, v___x_3929_);
if (lean_obj_tag(v___x_3930_) == 1)
{
lean_object* v_head_3931_; lean_object* v_tail_3932_; lean_object* v___f_3933_; uint8_t v___x_3934_; lean_object* v___x_3935_; 
v_head_3931_ = lean_ctor_get(v___x_3930_, 0);
lean_inc(v_head_3931_);
v_tail_3932_ = lean_ctor_get(v___x_3930_, 1);
lean_inc(v_tail_3932_);
lean_inc_ref(v_type_3928_);
v___f_3933_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___lam__2___boxed), 22, 15);
lean_closure_set(v___f_3933_, 0, v_nParams_3904_);
lean_closure_set(v___f_3933_, 1, v_numMotives_3925_);
lean_closure_set(v___f_3933_, 2, v_numMinors_3926_);
lean_closure_set(v___f_3933_, 3, v___x_3930_);
lean_closure_set(v___f_3933_, 4, v_all_3905_);
lean_closure_set(v___f_3933_, 5, v___x_3913_);
lean_closure_set(v___f_3933_, 6, v___x_3912_);
lean_closure_set(v___f_3933_, 7, v_head_3931_);
lean_closure_set(v___f_3933_, 8, v_tail_3932_);
lean_closure_set(v___f_3933_, 9, v_recName_3903_);
lean_closure_set(v___f_3933_, 10, v_brecOnGoName_3915_);
lean_closure_set(v___f_3933_, 11, v_levelParams_3927_);
lean_closure_set(v___f_3933_, 12, v_brecOnName_3906_);
lean_closure_set(v___f_3933_, 13, v_brecOnEqName_3917_);
lean_closure_set(v___f_3933_, 14, v_type_3928_);
v___x_3934_ = 0;
v___x_3935_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_buildBelowMinorPremise_go_spec__1___redArg(v_type_3928_, v___f_3933_, v___x_3934_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
return v___x_3935_;
}
else
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
lean_dec(v___x_3930_);
lean_dec_ref(v_type_3928_);
lean_dec(v_levelParams_3927_);
lean_dec(v_numMinors_3926_);
lean_dec(v_numMotives_3925_);
lean_dec(v_brecOnEqName_3917_);
lean_dec(v_brecOnGoName_3915_);
lean_dec(v_brecOnName_3906_);
lean_dec_ref(v_all_3905_);
lean_dec(v_nParams_3904_);
v___x_3936_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__1);
v___x_3937_ = l_Lean_MessageData_ofName(v_recName_3903_);
v___x_3938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3936_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3_once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec___closed__3);
v___x_3940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3938_);
lean_ctor_set(v___x_3940_, 1, v___x_3939_);
v___x_3941_ = l_Lean_throwError___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__6___redArg(v___x_3940_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
return v___x_3941_;
}
}
else
{
lean_object* v___x_3942_; lean_object* v___x_3944_; 
lean_dec(v_a_3919_);
lean_dec(v_brecOnEqName_3917_);
lean_dec(v_brecOnGoName_3915_);
lean_dec(v_brecOnName_3906_);
lean_dec_ref(v_all_3905_);
lean_dec(v_nParams_3904_);
lean_dec(v_recName_3903_);
v___x_3942_ = lean_box(0);
if (v_isShared_3922_ == 0)
{
lean_ctor_set(v___x_3921_, 0, v___x_3942_);
v___x_3944_ = v___x_3921_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
}
else
{
lean_object* v_a_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3954_; 
lean_dec(v_brecOnEqName_3917_);
lean_dec(v_brecOnGoName_3915_);
lean_dec(v_brecOnName_3906_);
lean_dec_ref(v_all_3905_);
lean_dec(v_nParams_3904_);
lean_dec(v_recName_3903_);
v_a_3947_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3949_ = v___x_3918_;
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_a_3947_);
lean_dec(v___x_3918_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3952_; 
if (v_isShared_3950_ == 0)
{
v___x_3952_ = v___x_3949_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v_a_3947_);
v___x_3952_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
return v___x_3952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec___boxed(lean_object* v_recName_3955_, lean_object* v_nParams_3956_, lean_object* v_all_3957_, lean_object* v_brecOnName_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v_recName_3955_, v_nParams_3956_, v_all_3957_, v_brecOnName_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_);
lean_dec(v_a_3962_);
lean_dec_ref(v_a_3961_);
lean_dec(v_a_3960_);
lean_dec_ref(v_a_3959_);
return v_res_3964_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(lean_object* v_upperBound_3965_, lean_object* v___x_3966_, lean_object* v___x_3967_, lean_object* v___x_3968_, lean_object* v___x_3969_, lean_object* v_a_3970_, lean_object* v_b_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
uint8_t v___x_3977_; 
v___x_3977_ = lean_nat_dec_lt(v_a_3970_, v_upperBound_3965_);
if (v___x_3977_ == 0)
{
lean_object* v___x_3978_; 
lean_dec(v_a_3970_);
lean_dec_ref(v___x_3969_);
lean_dec(v___x_3968_);
lean_dec(v___x_3967_);
lean_dec(v___x_3966_);
v___x_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3978_, 0, v_b_3971_);
return v___x_3978_;
}
else
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3979_ = lean_box(0);
v___x_3980_ = lean_unsigned_to_nat(1u);
v___x_3981_ = lean_nat_add(v_a_3970_, v___x_3980_);
lean_dec(v_a_3970_);
lean_inc_n(v___x_3981_, 2);
lean_inc(v___x_3966_);
v___x_3982_ = lean_name_append_index_after(v___x_3966_, v___x_3981_);
lean_inc(v___x_3967_);
v___x_3983_ = lean_name_append_index_after(v___x_3967_, v___x_3981_);
lean_inc_ref(v___x_3969_);
lean_inc(v___x_3968_);
v___x_3984_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_3982_, v___x_3968_, v___x_3969_, v___x_3983_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_dec_ref_known(v___x_3984_, 1);
v_a_3970_ = v___x_3981_;
v_b_3971_ = v___x_3979_;
goto _start;
}
else
{
lean_dec(v___x_3981_);
lean_dec_ref(v___x_3969_);
lean_dec(v___x_3968_);
lean_dec(v___x_3967_);
lean_dec(v___x_3966_);
return v___x_3984_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg___boxed(lean_object* v_upperBound_3986_, lean_object* v___x_3987_, lean_object* v___x_3988_, lean_object* v___x_3989_, lean_object* v___x_3990_, lean_object* v_a_3991_, lean_object* v_b_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_upperBound_3986_, v___x_3987_, v___x_3988_, v___x_3989_, v___x_3990_, v_a_3991_, v_b_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
lean_dec(v_upperBound_3986_);
return v_res_3998_;
}
}
static lean_object* _init_l_Lean_mkBRecOn___closed__2(void){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4003_ = ((lean_object*)(l_Lean_mkBRecOn___closed__1));
v___x_4004_ = ((lean_object*)(l_Lean_mkBelow___closed__5));
v___x_4005_ = l_Lean_Name_append(v___x_4004_, v___x_4003_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkBRecOn(lean_object* v_indName_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_){
_start:
{
lean_object* v_toCold_4018_; lean_object* v_options_4019_; lean_object* v_inheritedTraceOptions_4020_; uint8_t v_hasTrace_4021_; lean_object* v___x_4022_; 
v_toCold_4018_ = lean_ctor_get(v_a_4009_, 0);
v_options_4019_ = lean_ctor_get(v_toCold_4018_, 2);
v_inheritedTraceOptions_4020_ = lean_ctor_get(v_toCold_4018_, 11);
v_hasTrace_4021_ = lean_ctor_get_uint8(v_options_4019_, sizeof(void*)*1);
v___x_4022_ = lean_box(0);
if (v_hasTrace_4021_ == 0)
{
lean_object* v___x_4023_; 
lean_inc(v_indName_4006_);
v___x_4023_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4023_) == 0)
{
lean_object* v_a_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4071_; 
v_a_4024_ = lean_ctor_get(v___x_4023_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v___x_4023_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4026_ = v___x_4023_;
v_isShared_4027_ = v_isSharedCheck_4071_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_a_4024_);
lean_dec(v___x_4023_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4071_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
if (lean_obj_tag(v_a_4024_) == 5)
{
lean_object* v_val_4028_; uint8_t v_isRec_4029_; 
v_val_4028_ = lean_ctor_get(v_a_4024_, 0);
lean_inc_ref(v_val_4028_);
lean_dec_ref_known(v_a_4024_, 1);
v_isRec_4029_ = lean_ctor_get_uint8(v_val_4028_, sizeof(void*)*6);
if (v_isRec_4029_ == 0)
{
lean_object* v___x_4030_; lean_object* v___x_4032_; 
lean_dec_ref(v_val_4028_);
lean_dec(v_indName_4006_);
v___x_4030_ = lean_box(0);
if (v_isShared_4027_ == 0)
{
lean_ctor_set(v___x_4026_, 0, v___x_4030_);
v___x_4032_ = v___x_4026_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v___x_4030_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
return v___x_4032_;
}
}
else
{
lean_object* v_toConstantVal_4034_; lean_object* v_numParams_4035_; lean_object* v_all_4036_; lean_object* v_numNested_4037_; lean_object* v_type_4038_; lean_object* v___x_4039_; 
lean_del_object(v___x_4026_);
v_toConstantVal_4034_ = lean_ctor_get(v_val_4028_, 0);
lean_inc_ref(v_toConstantVal_4034_);
v_numParams_4035_ = lean_ctor_get(v_val_4028_, 1);
lean_inc(v_numParams_4035_);
v_all_4036_ = lean_ctor_get(v_val_4028_, 3);
lean_inc(v_all_4036_);
v_numNested_4037_ = lean_ctor_get(v_val_4028_, 5);
lean_inc(v_numNested_4037_);
lean_dec_ref(v_val_4028_);
v_type_4038_ = lean_ctor_get(v_toConstantVal_4034_, 2);
lean_inc_ref(v_type_4038_);
lean_dec_ref(v_toConstantVal_4034_);
v___x_4039_ = l_Lean_Meta_isPropFormerType(v_type_4038_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v_a_4040_; uint8_t v___x_4041_; 
v_a_4040_ = lean_ctor_get(v___x_4039_, 0);
lean_inc(v_a_4040_);
lean_dec_ref_known(v___x_4039_, 1);
v___x_4041_ = lean_unbox(v_a_4040_);
lean_dec(v_a_4040_);
if (v___x_4041_ == 0)
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
lean_inc_n(v_indName_4006_, 2);
v___x_4042_ = l_Lean_mkRecName(v_indName_4006_);
v___x_4043_ = l_Lean_mkBRecOnName(v_indName_4006_);
lean_inc(v_all_4036_);
v___x_4044_ = lean_array_mk(v_all_4036_);
lean_inc(v___x_4043_);
lean_inc_ref(v___x_4044_);
lean_inc(v_numParams_4035_);
lean_inc(v___x_4042_);
v___x_4045_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4042_, v_numParams_4035_, v___x_4044_, v___x_4043_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4045_) == 0)
{
lean_object* v___x_4046_; lean_object* v___x_4047_; uint8_t v___x_4048_; 
lean_dec_ref_known(v___x_4045_, 1);
v___x_4046_ = lean_unsigned_to_nat(0u);
v___x_4047_ = l_List_get_x21Internal___redArg(v___x_4022_, v_all_4036_, v___x_4046_);
lean_dec(v_all_4036_);
v___x_4048_ = lean_name_eq(v___x_4047_, v_indName_4006_);
lean_dec(v_indName_4006_);
lean_dec(v___x_4047_);
if (v___x_4048_ == 0)
{
lean_dec_ref(v___x_4044_);
lean_dec(v___x_4043_);
lean_dec(v___x_4042_);
lean_dec(v_numNested_4037_);
lean_dec(v_numParams_4035_);
goto v___jp_4015_;
}
else
{
lean_object* v___x_4049_; lean_object* v___x_4050_; 
v___x_4049_ = lean_box(0);
v___x_4050_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4037_, v___x_4042_, v___x_4043_, v_numParams_4035_, v___x_4044_, v___x_4046_, v___x_4049_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
lean_dec(v_numNested_4037_);
if (lean_obj_tag(v___x_4050_) == 0)
{
lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4057_; 
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4057_ == 0)
{
lean_object* v_unused_4058_; 
v_unused_4058_ = lean_ctor_get(v___x_4050_, 0);
lean_dec(v_unused_4058_);
v___x_4052_ = v___x_4050_;
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
else
{
lean_dec(v___x_4050_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4055_; 
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 0, v___x_4049_);
v___x_4055_ = v___x_4052_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v___x_4049_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
}
else
{
return v___x_4050_;
}
}
}
else
{
lean_dec_ref(v___x_4044_);
lean_dec(v___x_4043_);
lean_dec(v___x_4042_);
lean_dec(v_numNested_4037_);
lean_dec(v_all_4036_);
lean_dec(v_numParams_4035_);
lean_dec(v_indName_4006_);
return v___x_4045_;
}
}
else
{
lean_dec(v_numNested_4037_);
lean_dec(v_all_4036_);
lean_dec(v_numParams_4035_);
lean_dec(v_indName_4006_);
goto v___jp_4015_;
}
}
else
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
lean_dec(v_numNested_4037_);
lean_dec(v_all_4036_);
lean_dec(v_numParams_4035_);
lean_dec(v_indName_4006_);
v_a_4059_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4039_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4039_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4064_; 
if (v_isShared_4062_ == 0)
{
v___x_4064_ = v___x_4061_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v_a_4059_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
return v___x_4064_;
}
}
}
}
}
else
{
lean_object* v___x_4067_; lean_object* v___x_4069_; 
lean_dec(v_a_4024_);
lean_dec(v_indName_4006_);
v___x_4067_ = lean_box(0);
if (v_isShared_4027_ == 0)
{
lean_ctor_set(v___x_4026_, 0, v___x_4067_);
v___x_4069_ = v___x_4026_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v___x_4067_);
v___x_4069_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
return v___x_4069_;
}
}
}
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4079_; 
lean_dec(v_indName_4006_);
v_a_4072_ = lean_ctor_get(v___x_4023_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4023_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4074_ = v___x_4023_;
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v___x_4023_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_a_4072_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
}
}
}
}
else
{
lean_object* v___f_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; uint8_t v___x_4084_; lean_object* v___y_4086_; lean_object* v___y_4087_; lean_object* v_a_4088_; lean_object* v___y_4101_; lean_object* v___y_4102_; lean_object* v_a_4103_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v_a_4108_; lean_object* v___y_4111_; lean_object* v___y_4112_; lean_object* v___y_4113_; lean_object* v___y_4116_; lean_object* v___y_4117_; lean_object* v_a_4118_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v_a_4130_; lean_object* v___y_4133_; lean_object* v___y_4134_; lean_object* v_a_4135_; lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v___y_4140_; 
lean_inc(v_indName_4006_);
v___f_4080_ = lean_alloc_closure((void*)(l_Lean_mkBelow___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4080_, 0, v_indName_4006_);
v___x_4081_ = ((lean_object*)(l_Lean_mkBRecOn___closed__1));
v___x_4082_ = ((lean_object*)(l_Lean_mkBelow___closed__3));
v___x_4083_ = lean_obj_once(&l_Lean_mkBRecOn___closed__2, &l_Lean_mkBRecOn___closed__2_once, _init_l_Lean_mkBRecOn___closed__2);
v___x_4084_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4020_, v_options_4019_, v___x_4083_);
if (v___x_4084_ == 0)
{
lean_object* v___x_4211_; uint8_t v___x_4212_; 
v___x_4211_ = l_Lean_trace_profiler;
v___x_4212_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_4019_, v___x_4211_);
if (v___x_4212_ == 0)
{
lean_object* v___x_4213_; 
lean_dec_ref(v___f_4080_);
lean_inc(v_indName_4006_);
v___x_4213_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4213_) == 0)
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4261_; 
v_a_4214_ = lean_ctor_get(v___x_4213_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4213_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4216_ = v___x_4213_;
v_isShared_4217_ = v_isSharedCheck_4261_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v___x_4213_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4261_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
if (lean_obj_tag(v_a_4214_) == 5)
{
lean_object* v_val_4218_; uint8_t v_isRec_4219_; 
v_val_4218_ = lean_ctor_get(v_a_4214_, 0);
lean_inc_ref(v_val_4218_);
lean_dec_ref_known(v_a_4214_, 1);
v_isRec_4219_ = lean_ctor_get_uint8(v_val_4218_, sizeof(void*)*6);
if (v_isRec_4219_ == 0)
{
lean_object* v___x_4220_; lean_object* v___x_4222_; 
lean_dec_ref(v_val_4218_);
lean_dec(v_indName_4006_);
v___x_4220_ = lean_box(0);
if (v_isShared_4217_ == 0)
{
lean_ctor_set(v___x_4216_, 0, v___x_4220_);
v___x_4222_ = v___x_4216_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v___x_4220_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
else
{
lean_object* v_toConstantVal_4224_; lean_object* v_numParams_4225_; lean_object* v_all_4226_; lean_object* v_numNested_4227_; lean_object* v_type_4228_; lean_object* v___x_4229_; 
lean_del_object(v___x_4216_);
v_toConstantVal_4224_ = lean_ctor_get(v_val_4218_, 0);
lean_inc_ref(v_toConstantVal_4224_);
v_numParams_4225_ = lean_ctor_get(v_val_4218_, 1);
lean_inc(v_numParams_4225_);
v_all_4226_ = lean_ctor_get(v_val_4218_, 3);
lean_inc(v_all_4226_);
v_numNested_4227_ = lean_ctor_get(v_val_4218_, 5);
lean_inc(v_numNested_4227_);
lean_dec_ref(v_val_4218_);
v_type_4228_ = lean_ctor_get(v_toConstantVal_4224_, 2);
lean_inc_ref(v_type_4228_);
lean_dec_ref(v_toConstantVal_4224_);
v___x_4229_ = l_Lean_Meta_isPropFormerType(v_type_4228_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v_a_4230_; uint8_t v___x_4231_; 
v_a_4230_ = lean_ctor_get(v___x_4229_, 0);
lean_inc(v_a_4230_);
lean_dec_ref_known(v___x_4229_, 1);
v___x_4231_ = lean_unbox(v_a_4230_);
lean_dec(v_a_4230_);
if (v___x_4231_ == 0)
{
lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
lean_inc_n(v_indName_4006_, 2);
v___x_4232_ = l_Lean_mkRecName(v_indName_4006_);
v___x_4233_ = l_Lean_mkBRecOnName(v_indName_4006_);
lean_inc(v_all_4226_);
v___x_4234_ = lean_array_mk(v_all_4226_);
lean_inc(v___x_4233_);
lean_inc_ref(v___x_4234_);
lean_inc(v_numParams_4225_);
lean_inc(v___x_4232_);
v___x_4235_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4232_, v_numParams_4225_, v___x_4234_, v___x_4233_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4235_) == 0)
{
lean_object* v___x_4236_; lean_object* v___x_4237_; uint8_t v___x_4238_; 
lean_dec_ref_known(v___x_4235_, 1);
v___x_4236_ = lean_unsigned_to_nat(0u);
v___x_4237_ = l_List_get_x21Internal___redArg(v___x_4022_, v_all_4226_, v___x_4236_);
lean_dec(v_all_4226_);
v___x_4238_ = lean_name_eq(v___x_4237_, v_indName_4006_);
lean_dec(v_indName_4006_);
lean_dec(v___x_4237_);
if (v___x_4238_ == 0)
{
lean_dec_ref(v___x_4234_);
lean_dec(v___x_4233_);
lean_dec(v___x_4232_);
lean_dec(v_numNested_4227_);
lean_dec(v_numParams_4225_);
goto v___jp_4012_;
}
else
{
lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4239_ = lean_box(0);
v___x_4240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4227_, v___x_4232_, v___x_4233_, v_numParams_4225_, v___x_4234_, v___x_4236_, v___x_4239_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
lean_dec(v_numNested_4227_);
if (lean_obj_tag(v___x_4240_) == 0)
{
lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4247_; 
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4240_);
if (v_isSharedCheck_4247_ == 0)
{
lean_object* v_unused_4248_; 
v_unused_4248_ = lean_ctor_get(v___x_4240_, 0);
lean_dec(v_unused_4248_);
v___x_4242_ = v___x_4240_;
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
else
{
lean_dec(v___x_4240_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
lean_ctor_set(v___x_4242_, 0, v___x_4239_);
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v___x_4239_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
}
else
{
return v___x_4240_;
}
}
}
else
{
lean_dec_ref(v___x_4234_);
lean_dec(v___x_4233_);
lean_dec(v___x_4232_);
lean_dec(v_numNested_4227_);
lean_dec(v_all_4226_);
lean_dec(v_numParams_4225_);
lean_dec(v_indName_4006_);
return v___x_4235_;
}
}
else
{
lean_dec(v_numNested_4227_);
lean_dec(v_all_4226_);
lean_dec(v_numParams_4225_);
lean_dec(v_indName_4006_);
goto v___jp_4012_;
}
}
else
{
lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4256_; 
lean_dec(v_numNested_4227_);
lean_dec(v_all_4226_);
lean_dec(v_numParams_4225_);
lean_dec(v_indName_4006_);
v_a_4249_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4256_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4256_ == 0)
{
v___x_4251_ = v___x_4229_;
v_isShared_4252_ = v_isSharedCheck_4256_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v___x_4229_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4256_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
lean_object* v___x_4254_; 
if (v_isShared_4252_ == 0)
{
v___x_4254_ = v___x_4251_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v_a_4249_);
v___x_4254_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
return v___x_4254_;
}
}
}
}
}
else
{
lean_object* v___x_4257_; lean_object* v___x_4259_; 
lean_dec(v_a_4214_);
lean_dec(v_indName_4006_);
v___x_4257_ = lean_box(0);
if (v_isShared_4217_ == 0)
{
lean_ctor_set(v___x_4216_, 0, v___x_4257_);
v___x_4259_ = v___x_4216_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v___x_4257_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
}
else
{
lean_object* v_a_4262_; lean_object* v___x_4264_; uint8_t v_isShared_4265_; uint8_t v_isSharedCheck_4269_; 
lean_dec(v_indName_4006_);
v_a_4262_ = lean_ctor_get(v___x_4213_, 0);
v_isSharedCheck_4269_ = !lean_is_exclusive(v___x_4213_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4264_ = v___x_4213_;
v_isShared_4265_ = v_isSharedCheck_4269_;
goto v_resetjp_4263_;
}
else
{
lean_inc(v_a_4262_);
lean_dec(v___x_4213_);
v___x_4264_ = lean_box(0);
v_isShared_4265_ = v_isSharedCheck_4269_;
goto v_resetjp_4263_;
}
v_resetjp_4263_:
{
lean_object* v___x_4267_; 
if (v_isShared_4265_ == 0)
{
v___x_4267_ = v___x_4264_;
goto v_reusejp_4266_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v_a_4262_);
v___x_4267_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4266_;
}
v_reusejp_4266_:
{
return v___x_4267_;
}
}
}
}
else
{
goto v___jp_4142_;
}
}
else
{
goto v___jp_4142_;
}
v___jp_4085_:
{
lean_object* v___x_4089_; double v___x_4090_; double v___x_4091_; double v___x_4092_; double v___x_4093_; double v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; 
v___x_4089_ = lean_io_mono_nanos_now();
v___x_4090_ = lean_float_of_nat(v___y_4086_);
v___x_4091_ = lean_float_once(&l_Lean_mkBelow___closed__7, &l_Lean_mkBelow___closed__7_once, _init_l_Lean_mkBelow___closed__7);
v___x_4092_ = lean_float_div(v___x_4090_, v___x_4091_);
v___x_4093_ = lean_float_of_nat(v___x_4089_);
v___x_4094_ = lean_float_div(v___x_4093_, v___x_4091_);
v___x_4095_ = lean_box_float(v___x_4092_);
v___x_4096_ = lean_box_float(v___x_4094_);
v___x_4097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4095_);
lean_ctor_set(v___x_4097_, 1, v___x_4096_);
v___x_4098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4098_, 0, v_a_4088_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
v___x_4099_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_4081_, v_hasTrace_4021_, v___x_4082_, v_options_4019_, v___x_4084_, v___y_4087_, v___f_4080_, v___x_4098_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
return v___x_4099_;
}
v___jp_4100_:
{
lean_object* v___x_4104_; 
v___x_4104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4104_, 0, v_a_4103_);
v___y_4086_ = v___y_4101_;
v___y_4087_ = v___y_4102_;
v_a_4088_ = v___x_4104_;
goto v___jp_4085_;
}
v___jp_4105_:
{
lean_object* v___x_4109_; 
v___x_4109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4109_, 0, v_a_4108_);
v___y_4086_ = v___y_4106_;
v___y_4087_ = v___y_4107_;
v_a_4088_ = v___x_4109_;
goto v___jp_4085_;
}
v___jp_4110_:
{
lean_object* v_a_4114_; 
v_a_4114_ = lean_ctor_get(v___y_4113_, 0);
lean_inc(v_a_4114_);
lean_dec_ref(v___y_4113_);
v___y_4101_ = v___y_4111_;
v___y_4102_ = v___y_4112_;
v_a_4103_ = v_a_4114_;
goto v___jp_4100_;
}
v___jp_4115_:
{
lean_object* v___x_4119_; double v___x_4120_; double v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
v___x_4119_ = lean_io_get_num_heartbeats();
v___x_4120_ = lean_float_of_nat(v___y_4117_);
v___x_4121_ = lean_float_of_nat(v___x_4119_);
v___x_4122_ = lean_box_float(v___x_4120_);
v___x_4123_ = lean_box_float(v___x_4121_);
v___x_4124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4124_, 0, v___x_4122_);
lean_ctor_set(v___x_4124_, 1, v___x_4123_);
v___x_4125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4125_, 0, v_a_4118_);
lean_ctor_set(v___x_4125_, 1, v___x_4124_);
v___x_4126_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_mkBelow_spec__3(v___x_4081_, v_hasTrace_4021_, v___x_4082_, v_options_4019_, v___x_4084_, v___y_4116_, v___f_4080_, v___x_4125_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
return v___x_4126_;
}
v___jp_4127_:
{
lean_object* v___x_4131_; 
v___x_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4131_, 0, v_a_4130_);
v___y_4116_ = v___y_4128_;
v___y_4117_ = v___y_4129_;
v_a_4118_ = v___x_4131_;
goto v___jp_4115_;
}
v___jp_4132_:
{
lean_object* v___x_4136_; 
v___x_4136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4136_, 0, v_a_4135_);
v___y_4116_ = v___y_4133_;
v___y_4117_ = v___y_4134_;
v_a_4118_ = v___x_4136_;
goto v___jp_4115_;
}
v___jp_4137_:
{
lean_object* v_a_4141_; 
v_a_4141_ = lean_ctor_get(v___y_4140_, 0);
lean_inc(v_a_4141_);
lean_dec_ref(v___y_4140_);
v___y_4128_ = v___y_4138_;
v___y_4129_ = v___y_4139_;
v_a_4130_ = v_a_4141_;
goto v___jp_4127_;
}
v___jp_4142_:
{
lean_object* v___x_4143_; lean_object* v_a_4144_; lean_object* v___x_4145_; uint8_t v___x_4146_; 
v___x_4143_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_mkBelow_spec__1___redArg(v_a_4010_);
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
lean_dec_ref(v___x_4143_);
v___x_4145_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4146_ = l_Lean_Option_get___at___00Lean_mkBelow_spec__2(v_options_4019_, v___x_4145_);
if (v___x_4146_ == 0)
{
lean_object* v___x_4147_; lean_object* v___x_4148_; 
v___x_4147_ = lean_io_mono_nanos_now();
lean_inc(v_indName_4006_);
v___x_4148_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4148_) == 0)
{
lean_object* v_a_4149_; 
v_a_4149_ = lean_ctor_get(v___x_4148_, 0);
lean_inc(v_a_4149_);
lean_dec_ref_known(v___x_4148_, 1);
if (lean_obj_tag(v_a_4149_) == 5)
{
lean_object* v_val_4150_; uint8_t v_isRec_4151_; 
v_val_4150_ = lean_ctor_get(v_a_4149_, 0);
lean_inc_ref(v_val_4150_);
lean_dec_ref_known(v_a_4149_, 1);
v_isRec_4151_ = lean_ctor_get_uint8(v_val_4150_, sizeof(void*)*6);
if (v_isRec_4151_ == 0)
{
lean_object* v___x_4152_; 
lean_dec_ref(v_val_4150_);
lean_dec(v_indName_4006_);
v___x_4152_ = lean_box(0);
v___y_4101_ = v___x_4147_;
v___y_4102_ = v_a_4144_;
v_a_4103_ = v___x_4152_;
goto v___jp_4100_;
}
else
{
lean_object* v_toConstantVal_4153_; lean_object* v_numParams_4154_; lean_object* v_all_4155_; lean_object* v_numNested_4156_; lean_object* v_type_4157_; lean_object* v___x_4158_; 
v_toConstantVal_4153_ = lean_ctor_get(v_val_4150_, 0);
lean_inc_ref(v_toConstantVal_4153_);
v_numParams_4154_ = lean_ctor_get(v_val_4150_, 1);
lean_inc(v_numParams_4154_);
v_all_4155_ = lean_ctor_get(v_val_4150_, 3);
lean_inc(v_all_4155_);
v_numNested_4156_ = lean_ctor_get(v_val_4150_, 5);
lean_inc(v_numNested_4156_);
lean_dec_ref(v_val_4150_);
v_type_4157_ = lean_ctor_get(v_toConstantVal_4153_, 2);
lean_inc_ref(v_type_4157_);
lean_dec_ref(v_toConstantVal_4153_);
v___x_4158_ = l_Lean_Meta_isPropFormerType(v_type_4157_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; uint8_t v___x_4160_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
v___x_4160_ = lean_unbox(v_a_4159_);
lean_dec(v_a_4159_);
if (v___x_4160_ == 0)
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; 
lean_inc_n(v_indName_4006_, 2);
v___x_4161_ = l_Lean_mkRecName(v_indName_4006_);
v___x_4162_ = l_Lean_mkBRecOnName(v_indName_4006_);
lean_inc(v_all_4155_);
v___x_4163_ = lean_array_mk(v_all_4155_);
lean_inc(v___x_4162_);
lean_inc_ref(v___x_4163_);
lean_inc(v_numParams_4154_);
lean_inc(v___x_4161_);
v___x_4164_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4161_, v_numParams_4154_, v___x_4163_, v___x_4162_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v___x_4165_; lean_object* v___x_4166_; uint8_t v___x_4167_; 
lean_dec_ref_known(v___x_4164_, 1);
v___x_4165_ = lean_unsigned_to_nat(0u);
v___x_4166_ = l_List_get_x21Internal___redArg(v___x_4022_, v_all_4155_, v___x_4165_);
lean_dec(v_all_4155_);
v___x_4167_ = lean_name_eq(v___x_4166_, v_indName_4006_);
lean_dec(v_indName_4006_);
lean_dec(v___x_4166_);
if (v___x_4167_ == 0)
{
lean_object* v___x_4168_; lean_object* v___x_4169_; 
lean_dec_ref(v___x_4163_);
lean_dec(v___x_4162_);
lean_dec(v___x_4161_);
lean_dec(v_numNested_4156_);
lean_dec(v_numParams_4154_);
v___x_4168_ = lean_box(0);
v___x_4169_ = l_Lean_mkBelow___lam__1(v___x_4168_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
v___y_4111_ = v___x_4147_;
v___y_4112_ = v_a_4144_;
v___y_4113_ = v___x_4169_;
goto v___jp_4110_;
}
else
{
lean_object* v___x_4170_; lean_object* v___x_4171_; 
v___x_4170_ = lean_box(0);
v___x_4171_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4156_, v___x_4161_, v___x_4162_, v_numParams_4154_, v___x_4163_, v___x_4165_, v___x_4170_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
lean_dec(v_numNested_4156_);
if (lean_obj_tag(v___x_4171_) == 0)
{
lean_dec_ref_known(v___x_4171_, 1);
v___y_4101_ = v___x_4147_;
v___y_4102_ = v_a_4144_;
v_a_4103_ = v___x_4170_;
goto v___jp_4100_;
}
else
{
lean_object* v_a_4172_; 
v_a_4172_ = lean_ctor_get(v___x_4171_, 0);
lean_inc(v_a_4172_);
lean_dec_ref_known(v___x_4171_, 1);
v___y_4106_ = v___x_4147_;
v___y_4107_ = v_a_4144_;
v_a_4108_ = v_a_4172_;
goto v___jp_4105_;
}
}
}
else
{
lean_object* v_a_4173_; 
lean_dec_ref(v___x_4163_);
lean_dec(v___x_4162_);
lean_dec(v___x_4161_);
lean_dec(v_numNested_4156_);
lean_dec(v_all_4155_);
lean_dec(v_numParams_4154_);
lean_dec(v_indName_4006_);
v_a_4173_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4173_);
lean_dec_ref_known(v___x_4164_, 1);
v___y_4106_ = v___x_4147_;
v___y_4107_ = v_a_4144_;
v_a_4108_ = v_a_4173_;
goto v___jp_4105_;
}
}
else
{
lean_object* v___x_4174_; lean_object* v___x_4175_; 
lean_dec(v_numNested_4156_);
lean_dec(v_all_4155_);
lean_dec(v_numParams_4154_);
lean_dec(v_indName_4006_);
v___x_4174_ = lean_box(0);
v___x_4175_ = l_Lean_mkBelow___lam__1(v___x_4174_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
v___y_4111_ = v___x_4147_;
v___y_4112_ = v_a_4144_;
v___y_4113_ = v___x_4175_;
goto v___jp_4110_;
}
}
else
{
lean_object* v_a_4176_; 
lean_dec(v_numNested_4156_);
lean_dec(v_all_4155_);
lean_dec(v_numParams_4154_);
lean_dec(v_indName_4006_);
v_a_4176_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4176_);
lean_dec_ref_known(v___x_4158_, 1);
v___y_4106_ = v___x_4147_;
v___y_4107_ = v_a_4144_;
v_a_4108_ = v_a_4176_;
goto v___jp_4105_;
}
}
}
else
{
lean_object* v___x_4177_; 
lean_dec(v_a_4149_);
lean_dec(v_indName_4006_);
v___x_4177_ = lean_box(0);
v___y_4101_ = v___x_4147_;
v___y_4102_ = v_a_4144_;
v_a_4103_ = v___x_4177_;
goto v___jp_4100_;
}
}
else
{
lean_object* v_a_4178_; 
lean_dec(v_indName_4006_);
v_a_4178_ = lean_ctor_get(v___x_4148_, 0);
lean_inc(v_a_4178_);
lean_dec_ref_known(v___x_4148_, 1);
v___y_4106_ = v___x_4147_;
v___y_4107_ = v_a_4144_;
v_a_4108_ = v_a_4178_;
goto v___jp_4105_;
}
}
else
{
lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4179_ = lean_io_get_num_heartbeats();
lean_inc(v_indName_4006_);
v___x_4180_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBelowFromRec_spec__0(v_indName_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4180_) == 0)
{
lean_object* v_a_4181_; 
v_a_4181_ = lean_ctor_get(v___x_4180_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___x_4180_, 1);
if (lean_obj_tag(v_a_4181_) == 5)
{
lean_object* v_val_4182_; uint8_t v_isRec_4183_; 
v_val_4182_ = lean_ctor_get(v_a_4181_, 0);
lean_inc_ref(v_val_4182_);
lean_dec_ref_known(v_a_4181_, 1);
v_isRec_4183_ = lean_ctor_get_uint8(v_val_4182_, sizeof(void*)*6);
if (v_isRec_4183_ == 0)
{
lean_object* v___x_4184_; 
lean_dec_ref(v_val_4182_);
lean_dec(v_indName_4006_);
v___x_4184_ = lean_box(0);
v___y_4128_ = v_a_4144_;
v___y_4129_ = v___x_4179_;
v_a_4130_ = v___x_4184_;
goto v___jp_4127_;
}
else
{
lean_object* v_toConstantVal_4185_; lean_object* v_numParams_4186_; lean_object* v_all_4187_; lean_object* v_numNested_4188_; lean_object* v_type_4189_; lean_object* v___x_4190_; 
v_toConstantVal_4185_ = lean_ctor_get(v_val_4182_, 0);
lean_inc_ref(v_toConstantVal_4185_);
v_numParams_4186_ = lean_ctor_get(v_val_4182_, 1);
lean_inc(v_numParams_4186_);
v_all_4187_ = lean_ctor_get(v_val_4182_, 3);
lean_inc(v_all_4187_);
v_numNested_4188_ = lean_ctor_get(v_val_4182_, 5);
lean_inc(v_numNested_4188_);
lean_dec_ref(v_val_4182_);
v_type_4189_ = lean_ctor_get(v_toConstantVal_4185_, 2);
lean_inc_ref(v_type_4189_);
lean_dec_ref(v_toConstantVal_4185_);
v___x_4190_ = l_Lean_Meta_isPropFormerType(v_type_4189_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_object* v_a_4191_; uint8_t v___x_4192_; 
v_a_4191_ = lean_ctor_get(v___x_4190_, 0);
lean_inc(v_a_4191_);
lean_dec_ref_known(v___x_4190_, 1);
v___x_4192_ = lean_unbox(v_a_4191_);
lean_dec(v_a_4191_);
if (v___x_4192_ == 0)
{
lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
lean_inc_n(v_indName_4006_, 2);
v___x_4193_ = l_Lean_mkRecName(v_indName_4006_);
v___x_4194_ = l_Lean_mkBRecOnName(v_indName_4006_);
lean_inc(v_all_4187_);
v___x_4195_ = lean_array_mk(v_all_4187_);
lean_inc(v___x_4194_);
lean_inc_ref(v___x_4195_);
lean_inc(v_numParams_4186_);
lean_inc(v___x_4193_);
v___x_4196_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_mkBRecOnFromRec(v___x_4193_, v_numParams_4186_, v___x_4195_, v___x_4194_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v___x_4197_; lean_object* v___x_4198_; uint8_t v___x_4199_; 
lean_dec_ref_known(v___x_4196_, 1);
v___x_4197_ = lean_unsigned_to_nat(0u);
v___x_4198_ = l_List_get_x21Internal___redArg(v___x_4022_, v_all_4187_, v___x_4197_);
lean_dec(v_all_4187_);
v___x_4199_ = lean_name_eq(v___x_4198_, v_indName_4006_);
lean_dec(v_indName_4006_);
lean_dec(v___x_4198_);
if (v___x_4199_ == 0)
{
lean_object* v___x_4200_; lean_object* v___x_4201_; 
lean_dec_ref(v___x_4195_);
lean_dec(v___x_4194_);
lean_dec(v___x_4193_);
lean_dec(v_numNested_4188_);
lean_dec(v_numParams_4186_);
v___x_4200_ = lean_box(0);
v___x_4201_ = l_Lean_mkBelow___lam__1(v___x_4200_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
v___y_4138_ = v_a_4144_;
v___y_4139_ = v___x_4179_;
v___y_4140_ = v___x_4201_;
goto v___jp_4137_;
}
else
{
lean_object* v___x_4202_; lean_object* v___x_4203_; 
v___x_4202_ = lean_box(0);
v___x_4203_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_numNested_4188_, v___x_4193_, v___x_4194_, v_numParams_4186_, v___x_4195_, v___x_4197_, v___x_4202_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
lean_dec(v_numNested_4188_);
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_dec_ref_known(v___x_4203_, 1);
v___y_4128_ = v_a_4144_;
v___y_4129_ = v___x_4179_;
v_a_4130_ = v___x_4202_;
goto v___jp_4127_;
}
else
{
lean_object* v_a_4204_; 
v_a_4204_ = lean_ctor_get(v___x_4203_, 0);
lean_inc(v_a_4204_);
lean_dec_ref_known(v___x_4203_, 1);
v___y_4133_ = v_a_4144_;
v___y_4134_ = v___x_4179_;
v_a_4135_ = v_a_4204_;
goto v___jp_4132_;
}
}
}
else
{
lean_object* v_a_4205_; 
lean_dec_ref(v___x_4195_);
lean_dec(v___x_4194_);
lean_dec(v___x_4193_);
lean_dec(v_numNested_4188_);
lean_dec(v_all_4187_);
lean_dec(v_numParams_4186_);
lean_dec(v_indName_4006_);
v_a_4205_ = lean_ctor_get(v___x_4196_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v___x_4196_, 1);
v___y_4133_ = v_a_4144_;
v___y_4134_ = v___x_4179_;
v_a_4135_ = v_a_4205_;
goto v___jp_4132_;
}
}
else
{
lean_object* v___x_4206_; lean_object* v___x_4207_; 
lean_dec(v_numNested_4188_);
lean_dec(v_all_4187_);
lean_dec(v_numParams_4186_);
lean_dec(v_indName_4006_);
v___x_4206_ = lean_box(0);
v___x_4207_ = l_Lean_mkBelow___lam__1(v___x_4206_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
v___y_4138_ = v_a_4144_;
v___y_4139_ = v___x_4179_;
v___y_4140_ = v___x_4207_;
goto v___jp_4137_;
}
}
else
{
lean_object* v_a_4208_; 
lean_dec(v_numNested_4188_);
lean_dec(v_all_4187_);
lean_dec(v_numParams_4186_);
lean_dec(v_indName_4006_);
v_a_4208_ = lean_ctor_get(v___x_4190_, 0);
lean_inc(v_a_4208_);
lean_dec_ref_known(v___x_4190_, 1);
v___y_4133_ = v_a_4144_;
v___y_4134_ = v___x_4179_;
v_a_4135_ = v_a_4208_;
goto v___jp_4132_;
}
}
}
else
{
lean_object* v___x_4209_; 
lean_dec(v_a_4181_);
lean_dec(v_indName_4006_);
v___x_4209_ = lean_box(0);
v___y_4128_ = v_a_4144_;
v___y_4129_ = v___x_4179_;
v_a_4130_ = v___x_4209_;
goto v___jp_4127_;
}
}
else
{
lean_object* v_a_4210_; 
lean_dec(v_indName_4006_);
v_a_4210_ = lean_ctor_get(v___x_4180_, 0);
lean_inc(v_a_4210_);
lean_dec_ref_known(v___x_4180_, 1);
v___y_4133_ = v_a_4144_;
v___y_4134_ = v___x_4179_;
v_a_4135_ = v_a_4210_;
goto v___jp_4132_;
}
}
}
}
v___jp_4012_:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4013_ = lean_box(0);
v___x_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4013_);
return v___x_4014_;
}
v___jp_4015_:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4016_ = lean_box(0);
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
return v___x_4017_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkBRecOn___boxed(lean_object* v_indName_4270_, lean_object* v_a_4271_, lean_object* v_a_4272_, lean_object* v_a_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_){
_start:
{
lean_object* v_res_4276_; 
v_res_4276_ = l_Lean_mkBRecOn(v_indName_4270_, v_a_4271_, v_a_4272_, v_a_4273_, v_a_4274_);
lean_dec(v_a_4274_);
lean_dec_ref(v_a_4273_);
lean_dec(v_a_4272_);
lean_dec_ref(v_a_4271_);
return v_res_4276_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0(lean_object* v_upperBound_4277_, lean_object* v___x_4278_, lean_object* v___x_4279_, lean_object* v___x_4280_, lean_object* v___x_4281_, lean_object* v_inst_4282_, lean_object* v_R_4283_, lean_object* v_a_4284_, lean_object* v_b_4285_, lean_object* v_c_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_){
_start:
{
lean_object* v___x_4292_; 
v___x_4292_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___redArg(v_upperBound_4277_, v___x_4278_, v___x_4279_, v___x_4280_, v___x_4281_, v_a_4284_, v_b_4285_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0___boxed(lean_object* v_upperBound_4293_, lean_object* v___x_4294_, lean_object* v___x_4295_, lean_object* v___x_4296_, lean_object* v___x_4297_, lean_object* v_inst_4298_, lean_object* v_R_4299_, lean_object* v_a_4300_, lean_object* v_b_4301_, lean_object* v_c_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l_WellFounded_opaqueFix_u2083___at___00Lean_mkBRecOn_spec__0(v_upperBound_4293_, v___x_4294_, v___x_4295_, v___x_4296_, v___x_4297_, v_inst_4298_, v_R_4299_, v_a_4300_, v_b_4301_, v_c_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
lean_dec(v___y_4306_);
lean_dec_ref(v___y_4305_);
lean_dec(v___y_4304_);
lean_dec_ref(v___y_4303_);
lean_dec(v_upperBound_4293_);
return v_res_4308_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v___x_4354_ = lean_unsigned_to_nat(2304625798u);
v___x_4355_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__18_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4356_ = l_Lean_Name_num___override(v___x_4355_, v___x_4354_);
return v___x_4356_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4358_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__20_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4359_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__19_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4360_ = l_Lean_Name_str___override(v___x_4359_, v___x_4358_);
return v___x_4360_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4362_ = ((lean_object*)(l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__22_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_));
v___x_4363_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__21_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4364_ = l_Lean_Name_str___override(v___x_4363_, v___x_4362_);
return v___x_4364_;
}
}
static lean_object* _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; 
v___x_4365_ = lean_unsigned_to_nat(2u);
v___x_4366_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__23_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4367_ = l_Lean_Name_num___override(v___x_4366_, v___x_4365_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4369_; uint8_t v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4369_ = ((lean_object*)(l_Lean_mkBRecOn___closed__1));
v___x_4370_ = 0;
v___x_4371_ = lean_obj_once(&l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_, &l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn___closed__24_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_);
v___x_4372_ = l_Lean_registerTraceClass(v___x_4369_, v___x_4370_, v___x_4371_);
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2____boxed(lean_object* v_a_4373_){
_start:
{
lean_object* v_res_4374_; 
v_res_4374_ = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_();
return v_res_4374_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Constructions_BRecOn_0__Lean_initFn_00___x40_Lean_Meta_Constructions_BRecOn_2304625798____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_BRecOn(builtin);
}
#ifdef __cplusplus
}
#endif
