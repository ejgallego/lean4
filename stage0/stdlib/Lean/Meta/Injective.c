// Lean compiler output
// Module: Lean.Meta.Injective
// Imports: public import Lean.Meta.Basic import Lean.Meta.Tactic.Refl import Lean.Meta.Tactic.Assumption import Lean.Meta.SameCtorUtils import Init.Omega import Lean.Meta.Tactic.Injection import Lean.Meta.Tactic.Simp.Attr
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
lean_object* lean_st_ref_take(lean_object*);
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_occursOrInType(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_updateAppN(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_injection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_splitAndCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
extern lean_object* l_Lean_Meta_simpExtension;
lean_object* l_Lean_Meta_addSimpTheorem(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_elimOptParam___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optParam"};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_elimOptParam___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 160, 223, 165, 16, 51, 54, 209)}};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_elimOptParam___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_elimOptParam___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_elimOptParam___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_elimOptParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_elimOptParam___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_elimOptParam___closed__0 = (const lean_object*)&l_Lean_Meta_elimOptParam___closed__0_value;
static const lean_closure_object l_Lean_Meta_elimOptParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_elimOptParam___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_elimOptParam___closed__1 = (const lean_object*)&l_Lean_Meta_elimOptParam___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unexpected constructor type for `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "failed to prove injectivity theorem for constructor `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "`, use 'set_option genInjectivity false' to disable the generation"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "_private.Lean.Meta.Injective.0.Lean.Meta.solveEqOfCtorEq"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__5_value),LEAN_SCALAR_PTR_LITERAL(39, 126, 11, 127, 131, 182, 22, 10)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "solving injectivity goal for "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " with hypothesis "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " at\n"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 11, 58, 56, 192, 58, 162, 195)}};
static const lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "generating `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "type: "};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "injEq"};
static const lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0 = (const lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 235, 155, 31, 77, 126, 235, 172)}};
static const lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1 = (const lean_object*)&l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "unexpected number of goals after applying `Lean.and_imp`"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "injEq_helper"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(167, 111, 180, 146, 132, 58, 155, 57)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "unexpected number of subgoals when proving injective theorem for constructor `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "propIntro"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(189, 136, 38, 165, 207, 169, 133, 34)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "genInjectivity"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(56, 68, 112, 222, 169, 79, 62, 37)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "generate injectivity theorems for inductive datatype constructors. Temporarily (for bootstrapping reasons) also controls the generation of the\n    `ctorIdx` definition."};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 17, 232, 138, 187, 170, 36, 13)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_genInjectivity;
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__0;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__1;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__2;
static lean_once_cell_t l_Lean_Meta_mkInjectiveTheorems___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__3;
static const lean_array_object l_Lean_Meta_mkInjectiveTheorems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkInjectiveTheorems___closed__4 = (const lean_object*)&l_Lean_Meta_mkInjectiveTheorems___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Injective"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 101, 109, 194, 24, 99, 201, 78)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(74, 76, 255, 124, 31, 108, 47, 16)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 106, 16, 37, 3, 60, 11, 157)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(3, 239, 173, 245, 77, 160, 209, 24)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(98, 239, 175, 71, 176, 92, 247, 26)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(235, 126, 32, 109, 177, 184, 17, 126)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(214, 151, 10, 103, 183, 199, 62, 165)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(242, 157, 244, 230, 219, 101, 50, 39)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(67, 105, 167, 47, 98, 73, 248, 220)}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "failed to generate heterogeneous injectivity theorem for `"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "noConfusion"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hinj"};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0 = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkHInjectiveTheoremNameFor(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_6_ = l_Lean_mkConst(v___x_5_, v___x_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(lean_object* v_a_7_, lean_object* v_b_8_){
_start:
{
lean_object* v_array_9_; lean_object* v_start_10_; lean_object* v_stop_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_25_; 
v_array_9_ = lean_ctor_get(v_a_7_, 0);
v_start_10_ = lean_ctor_get(v_a_7_, 1);
v_stop_11_ = lean_ctor_get(v_a_7_, 2);
v_isSharedCheck_25_ = !lean_is_exclusive(v_a_7_);
if (v_isSharedCheck_25_ == 0)
{
v___x_13_ = v_a_7_;
v_isShared_14_ = v_isSharedCheck_25_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_stop_11_);
lean_inc(v_start_10_);
lean_inc(v_array_9_);
lean_dec(v_a_7_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_25_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
uint8_t v___x_15_; 
v___x_15_ = lean_nat_dec_lt(v_start_10_, v_stop_11_);
if (v___x_15_ == 0)
{
lean_del_object(v___x_13_);
lean_dec(v_stop_11_);
lean_dec(v_start_10_);
lean_dec_ref(v_array_9_);
return v_b_8_;
}
else
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_19_; 
v___x_16_ = lean_unsigned_to_nat(1u);
v___x_17_ = lean_nat_add(v_start_10_, v___x_16_);
lean_inc_ref(v_array_9_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v___x_17_);
v___x_19_ = v___x_13_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_array_9_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v___x_17_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v_stop_11_);
v___x_19_ = v_reuseFailAlloc_24_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_array_fget(v_array_9_, v_start_10_);
lean_dec(v_start_10_);
lean_dec_ref(v_array_9_);
v___x_21_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__2);
v___x_22_ = l_Lean_mkAppB(v___x_21_, v___x_20_, v_b_8_);
v_a_7_ = v___x_19_;
v_b_8_ = v___x_22_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(lean_object* v_args_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_27_ = lean_array_get_size(v_args_26_);
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_nat_dec_eq(v___x_27_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v_result_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_30_ = l_Lean_instInhabitedExpr;
v___x_31_ = lean_unsigned_to_nat(1u);
v___x_32_ = lean_nat_sub(v___x_27_, v___x_31_);
v_result_33_ = lean_array_get(v___x_30_, v_args_26_, v___x_32_);
lean_dec(v___x_32_);
v___x_34_ = l_Array_reverse___redArg(v_args_26_);
v___x_35_ = lean_array_get_size(v___x_34_);
v___x_36_ = l_Array_toSubarray___redArg(v___x_34_, v___x_31_, v___x_35_);
v___x_37_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(v___x_36_, v_result_33_);
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
else
{
lean_object* v___x_39_; 
lean_dec_ref(v_args_26_);
v___x_39_ = lean_box(0);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0(lean_object* v_inst_40_, lean_object* v_R_41_, lean_object* v_a_42_, lean_object* v_b_43_, lean_object* v_c_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg(v_a_42_, v_b_43_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0(lean_object* v_e_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_55_ = ((lean_object*)(l_Lean_Meta_elimOptParam___lam__0___closed__1));
v___x_56_ = lean_unsigned_to_nat(2u);
v___x_57_ = l_Lean_Expr_isAppOfArity(v_e_51_, v___x_55_, v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_Meta_elimOptParam___lam__0___closed__2));
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_60_ = l_Lean_Expr_getAppNumArgs(v_e_51_);
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_sub(v___x_60_, v___x_61_);
lean_dec(v___x_60_);
v___x_63_ = l_Lean_Expr_getRevArg_x21(v_e_51_, v___x_62_);
v___x_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__0___boxed(lean_object* v_e_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_Meta_elimOptParam___lam__0(v_e_66_, v___y_67_, v___y_68_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
lean_dec_ref(v_e_66_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1(lean_object* v_e_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v_e_71_);
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___lam__1___boxed(lean_object* v_e_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Meta_elimOptParam___lam__1(v_e_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
return v_x_82_;
}
else
{
lean_object* v_key_84_; lean_object* v_value_85_; lean_object* v_tail_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_109_; 
v_key_84_ = lean_ctor_get(v_x_83_, 0);
v_value_85_ = lean_ctor_get(v_x_83_, 1);
v_tail_86_ = lean_ctor_get(v_x_83_, 2);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_83_);
if (v_isSharedCheck_109_ == 0)
{
v___x_88_ = v_x_83_;
v_isShared_89_ = v_isSharedCheck_109_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_tail_86_);
lean_inc(v_value_85_);
lean_inc(v_key_84_);
lean_dec(v_x_83_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_109_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; uint64_t v___x_91_; uint64_t v___x_92_; uint64_t v___x_93_; uint64_t v_fold_94_; uint64_t v___x_95_; uint64_t v___x_96_; uint64_t v___x_97_; size_t v___x_98_; size_t v___x_99_; size_t v___x_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_90_ = lean_array_get_size(v_x_82_);
v___x_91_ = l_Lean_ExprStructEq_hash(v_key_84_);
v___x_92_ = 32ULL;
v___x_93_ = lean_uint64_shift_right(v___x_91_, v___x_92_);
v_fold_94_ = lean_uint64_xor(v___x_91_, v___x_93_);
v___x_95_ = 16ULL;
v___x_96_ = lean_uint64_shift_right(v_fold_94_, v___x_95_);
v___x_97_ = lean_uint64_xor(v_fold_94_, v___x_96_);
v___x_98_ = lean_uint64_to_usize(v___x_97_);
v___x_99_ = lean_usize_of_nat(v___x_90_);
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_sub(v___x_99_, v___x_100_);
v___x_102_ = lean_usize_land(v___x_98_, v___x_101_);
v___x_103_ = lean_array_uget_borrowed(v_x_82_, v___x_102_);
lean_inc(v___x_103_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 2, v___x_103_);
v___x_105_ = v___x_88_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_key_84_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_value_85_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v___x_103_);
v___x_105_ = v_reuseFailAlloc_108_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
lean_object* v___x_106_; 
v___x_106_ = lean_array_uset(v_x_82_, v___x_102_, v___x_105_);
v_x_82_ = v___x_106_;
v_x_83_ = v_tail_86_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_110_, lean_object* v_source_111_, lean_object* v_target_112_){
_start:
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = lean_array_get_size(v_source_111_);
v___x_114_ = lean_nat_dec_lt(v_i_110_, v___x_113_);
if (v___x_114_ == 0)
{
lean_dec_ref(v_source_111_);
lean_dec(v_i_110_);
return v_target_112_;
}
else
{
lean_object* v_es_115_; lean_object* v___x_116_; lean_object* v_source_117_; lean_object* v_target_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_es_115_ = lean_array_fget(v_source_111_, v_i_110_);
v___x_116_ = lean_box(0);
v_source_117_ = lean_array_fset(v_source_111_, v_i_110_, v___x_116_);
v_target_118_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_112_, v_es_115_);
v___x_119_ = lean_unsigned_to_nat(1u);
v___x_120_ = lean_nat_add(v_i_110_, v___x_119_);
lean_dec(v_i_110_);
v_i_110_ = v___x_120_;
v_source_111_ = v_source_117_;
v_target_112_ = v_target_118_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v_nbuckets_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_123_ = lean_array_get_size(v_data_122_);
v___x_124_ = lean_unsigned_to_nat(2u);
v_nbuckets_125_ = lean_nat_mul(v___x_123_, v___x_124_);
v___x_126_ = lean_unsigned_to_nat(0u);
v___x_127_ = lean_box(0);
v___x_128_ = lean_mk_array(v_nbuckets_125_, v___x_127_);
v___x_129_ = lean_array_propagate_mark(v_data_122_, v___x_128_);
v___x_130_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_126_, v_data_122_, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_131_, lean_object* v_b_132_, lean_object* v_x_133_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
lean_dec(v_b_132_);
lean_dec_ref(v_a_131_);
return v_x_133_;
}
else
{
lean_object* v_key_134_; lean_object* v_value_135_; lean_object* v_tail_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_148_; 
v_key_134_ = lean_ctor_get(v_x_133_, 0);
v_value_135_ = lean_ctor_get(v_x_133_, 1);
v_tail_136_ = lean_ctor_get(v_x_133_, 2);
v_isSharedCheck_148_ = !lean_is_exclusive(v_x_133_);
if (v_isSharedCheck_148_ == 0)
{
v___x_138_ = v_x_133_;
v_isShared_139_ = v_isSharedCheck_148_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_tail_136_);
lean_inc(v_value_135_);
lean_inc(v_key_134_);
lean_dec(v_x_133_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_148_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
uint8_t v___x_140_; 
v___x_140_ = l_Lean_ExprStructEq_beq(v_key_134_, v_a_131_);
if (v___x_140_ == 0)
{
lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_141_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(v_a_131_, v_b_132_, v_tail_136_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 2, v___x_141_);
v___x_143_ = v___x_138_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_key_134_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v_value_135_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
else
{
lean_object* v___x_146_; 
lean_dec(v_value_135_);
lean_dec(v_key_134_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 1, v_b_132_);
lean_ctor_set(v___x_138_, 0, v_a_131_);
v___x_146_ = v___x_138_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_131_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v_b_132_);
lean_ctor_set(v_reuseFailAlloc_147_, 2, v_tail_136_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_149_, lean_object* v_x_150_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
uint8_t v___x_151_; 
v___x_151_ = 0;
return v___x_151_;
}
else
{
lean_object* v_key_152_; lean_object* v_tail_153_; uint8_t v___x_154_; 
v_key_152_ = lean_ctor_get(v_x_150_, 0);
v_tail_153_ = lean_ctor_get(v_x_150_, 2);
v___x_154_ = l_Lean_ExprStructEq_beq(v_key_152_, v_a_149_);
if (v___x_154_ == 0)
{
v_x_150_ = v_tail_153_;
goto _start;
}
else
{
return v___x_154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_156_, lean_object* v_x_157_){
_start:
{
uint8_t v_res_158_; lean_object* v_r_159_; 
v_res_158_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_a_156_, v_x_157_);
lean_dec(v_x_157_);
lean_dec_ref(v_a_156_);
v_r_159_ = lean_box(v_res_158_);
return v_r_159_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(lean_object* v_m_160_, lean_object* v_a_161_, lean_object* v_b_162_){
_start:
{
lean_object* v_size_163_; lean_object* v_buckets_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_207_; 
v_size_163_ = lean_ctor_get(v_m_160_, 0);
v_buckets_164_ = lean_ctor_get(v_m_160_, 1);
v_isSharedCheck_207_ = !lean_is_exclusive(v_m_160_);
if (v_isSharedCheck_207_ == 0)
{
v___x_166_ = v_m_160_;
v_isShared_167_ = v_isSharedCheck_207_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_buckets_164_);
lean_inc(v_size_163_);
lean_dec(v_m_160_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_207_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_168_; uint64_t v___x_169_; uint64_t v___x_170_; uint64_t v___x_171_; uint64_t v_fold_172_; uint64_t v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; size_t v___x_176_; size_t v___x_177_; size_t v___x_178_; size_t v___x_179_; size_t v___x_180_; lean_object* v_bkt_181_; uint8_t v___x_182_; 
v___x_168_ = lean_array_get_size(v_buckets_164_);
v___x_169_ = l_Lean_ExprStructEq_hash(v_a_161_);
v___x_170_ = 32ULL;
v___x_171_ = lean_uint64_shift_right(v___x_169_, v___x_170_);
v_fold_172_ = lean_uint64_xor(v___x_169_, v___x_171_);
v___x_173_ = 16ULL;
v___x_174_ = lean_uint64_shift_right(v_fold_172_, v___x_173_);
v___x_175_ = lean_uint64_xor(v_fold_172_, v___x_174_);
v___x_176_ = lean_uint64_to_usize(v___x_175_);
v___x_177_ = lean_usize_of_nat(v___x_168_);
v___x_178_ = ((size_t)1ULL);
v___x_179_ = lean_usize_sub(v___x_177_, v___x_178_);
v___x_180_ = lean_usize_land(v___x_176_, v___x_179_);
v_bkt_181_ = lean_array_uget_borrowed(v_buckets_164_, v___x_180_);
v___x_182_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_a_161_, v_bkt_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v_size_x27_184_; lean_object* v___x_185_; lean_object* v_buckets_x27_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_183_ = lean_unsigned_to_nat(1u);
v_size_x27_184_ = lean_nat_add(v_size_163_, v___x_183_);
lean_dec(v_size_163_);
lean_inc(v_bkt_181_);
v___x_185_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_185_, 0, v_a_161_);
lean_ctor_set(v___x_185_, 1, v_b_162_);
lean_ctor_set(v___x_185_, 2, v_bkt_181_);
v_buckets_x27_186_ = lean_array_uset(v_buckets_164_, v___x_180_, v___x_185_);
v___x_187_ = lean_unsigned_to_nat(4u);
v___x_188_ = lean_nat_mul(v_size_x27_184_, v___x_187_);
v___x_189_ = lean_unsigned_to_nat(3u);
v___x_190_ = lean_nat_div(v___x_188_, v___x_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_array_get_size(v_buckets_x27_186_);
v___x_192_ = lean_nat_dec_le(v___x_190_, v___x_191_);
lean_dec(v___x_190_);
if (v___x_192_ == 0)
{
lean_object* v_val_193_; lean_object* v___x_195_; 
v_val_193_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_186_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v_val_193_);
lean_ctor_set(v___x_166_, 0, v_size_x27_184_);
v___x_195_ = v___x_166_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_size_x27_184_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v_val_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
else
{
lean_object* v___x_198_; 
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v_buckets_x27_186_);
lean_ctor_set(v___x_166_, 0, v_size_x27_184_);
v___x_198_ = v___x_166_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_size_x27_184_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_buckets_x27_186_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
else
{
lean_object* v___x_200_; lean_object* v_buckets_x27_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
lean_inc(v_bkt_181_);
v___x_200_ = lean_box(0);
v_buckets_x27_201_ = lean_array_uset(v_buckets_164_, v___x_180_, v___x_200_);
v___x_202_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(v_a_161_, v_b_162_, v_bkt_181_);
v___x_203_ = lean_array_uset(v_buckets_x27_201_, v___x_180_, v___x_202_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 1, v___x_203_);
v___x_205_ = v___x_166_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_size_163_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(lean_object* v_a_208_, lean_object* v_e_209_, lean_object* v_a_210_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_212_ = lean_st_ref_take(v_a_208_);
v___x_213_ = lean_box(0);
v___x_214_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(v___x_212_, v_e_209_, v_a_210_);
v___x_215_ = lean_st_ref_put(v_a_208_, v___x_214_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed(lean_object* v_a_216_, lean_object* v_e_217_, lean_object* v_a_218_, lean_object* v___y_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2(v_a_216_, v_e_217_, v_a_218_);
lean_dec(v_a_216_);
return v_res_220_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_box(0);
v___x_222_ = l_Lean_interruptExceptionId;
v___x_223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_228_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = l_Lean_maxRecDepthErrorMessage;
v___x_235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
return v___x_235_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_237_ = l_Lean_MessageData_ofFormat(v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_239_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_240_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v___x_238_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_241_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_ref_241_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(lean_object* v_x_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v___y_255_; uint16_t v___y_265_; uint8_t v___y_266_; lean_object* v___y_267_; uint8_t v___y_268_; lean_object* v___y_269_; lean_object* v___y_270_; uint8_t v___y_271_; lean_object* v_toCold_276_; lean_object* v_currRecDepth_277_; lean_object* v_ref_278_; uint16_t v_optionFlags_279_; uint8_t v_suppressElabErrors_280_; uint8_t v_checkDeprecated_281_; uint8_t v_isRecordingDeps_282_; lean_object* v_maxRecDepth_283_; lean_object* v_cancelTk_x3f_284_; 
v_toCold_276_ = lean_ctor_get(v___y_251_, 0);
v_currRecDepth_277_ = lean_ctor_get(v___y_251_, 1);
v_ref_278_ = lean_ctor_get(v___y_251_, 2);
v_optionFlags_279_ = lean_ctor_get_uint16(v___y_251_, sizeof(void*)*3);
v_suppressElabErrors_280_ = lean_ctor_get_uint8(v___y_251_, sizeof(void*)*3 + 2);
v_checkDeprecated_281_ = lean_ctor_get_uint8(v___y_251_, sizeof(void*)*3 + 3);
v_isRecordingDeps_282_ = lean_ctor_get_uint8(v___y_251_, sizeof(void*)*3 + 4);
v_maxRecDepth_283_ = lean_ctor_get(v_toCold_276_, 3);
v_cancelTk_x3f_284_ = lean_ctor_get(v_toCold_276_, 10);
if (lean_obj_tag(v_cancelTk_x3f_284_) == 1)
{
lean_object* v_val_290_; uint8_t v___x_291_; 
v_val_290_ = lean_ctor_get(v_cancelTk_x3f_284_, 0);
v___x_291_ = l_IO_CancelToken_isSet(v_val_290_);
if (v___x_291_ == 0)
{
goto v___jp_285_;
}
else
{
lean_object* v___x_292_; lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
lean_dec_ref(v_x_249_);
v___x_292_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_293_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_292_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_292_);
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
goto v___jp_285_;
}
v___jp_254_:
{
if (lean_obj_tag(v___y_255_) == 0)
{
return v___y_255_;
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
v_a_256_ = lean_ctor_get(v___y_255_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___y_255_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___y_255_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___y_255_);
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
v___jp_264_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = lean_nat_add(v___y_269_, v___x_272_);
lean_inc_ref(v___y_267_);
v___x_274_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_274_, 0, v___y_267_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
lean_ctor_set(v___x_274_, 2, v___y_270_);
lean_ctor_set_uint16(v___x_274_, sizeof(void*)*3, v___y_265_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*3 + 2, v___y_268_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*3 + 3, v___y_271_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*3 + 4, v___y_266_);
lean_inc(v___y_252_);
lean_inc(v___y_250_);
v___x_275_ = lean_apply_4(v_x_249_, v___y_250_, v___x_274_, v___y_252_, lean_box(0));
v___y_255_ = v___x_275_;
goto v___jp_254_;
}
v___jp_285_:
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = lean_nat_dec_eq(v_maxRecDepth_283_, v___x_286_);
if (v___x_287_ == 0)
{
uint8_t v___x_288_; 
v___x_288_ = lean_nat_dec_eq(v_currRecDepth_277_, v_maxRecDepth_283_);
if (v___x_288_ == 0)
{
lean_inc(v_ref_278_);
v___y_265_ = v_optionFlags_279_;
v___y_266_ = v_isRecordingDeps_282_;
v___y_267_ = v_toCold_276_;
v___y_268_ = v_suppressElabErrors_280_;
v___y_269_ = v_currRecDepth_277_;
v___y_270_ = v_ref_278_;
v___y_271_ = v_checkDeprecated_281_;
goto v___jp_264_;
}
else
{
lean_object* v___x_289_; 
lean_dec_ref(v_x_249_);
lean_inc(v_ref_278_);
v___x_289_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_278_);
v___y_255_ = v___x_289_;
goto v___jp_254_;
}
}
else
{
lean_inc(v_ref_278_);
v___y_265_ = v_optionFlags_279_;
v___y_266_ = v_isRecordingDeps_282_;
v___y_267_ = v_toCold_276_;
v___y_268_ = v_suppressElabErrors_280_;
v___y_269_ = v_currRecDepth_277_;
v___y_270_ = v_ref_278_;
v___y_271_ = v_checkDeprecated_281_;
goto v___jp_264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v_x_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_307_, lean_object* v_x_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_apply_1(v_x_308_, lean_box(0));
v___x_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_314_, lean_object* v_x_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(v_00_u03b1_314_, v_x_315_, v___y_316_, v___y_317_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_a_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_object* v___x_322_; 
v___x_322_ = lean_box(0);
return v___x_322_;
}
else
{
lean_object* v_key_323_; lean_object* v_value_324_; lean_object* v_tail_325_; uint8_t v___x_326_; 
v_key_323_ = lean_ctor_get(v_x_321_, 0);
v_value_324_ = lean_ctor_get(v_x_321_, 1);
v_tail_325_ = lean_ctor_get(v_x_321_, 2);
v___x_326_ = l_Lean_ExprStructEq_beq(v_key_323_, v_a_320_);
if (v___x_326_ == 0)
{
v_x_321_ = v_tail_325_;
goto _start;
}
else
{
lean_object* v___x_328_; 
lean_inc(v_value_324_);
v___x_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_328_, 0, v_value_324_);
return v___x_328_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_a_329_, lean_object* v_x_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___redArg(v_a_329_, v_x_330_);
lean_dec(v_x_330_);
lean_dec_ref(v_a_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___redArg(lean_object* v_m_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_buckets_334_; lean_object* v___x_335_; uint64_t v___x_336_; uint64_t v___x_337_; uint64_t v___x_338_; uint64_t v_fold_339_; uint64_t v___x_340_; uint64_t v___x_341_; uint64_t v___x_342_; size_t v___x_343_; size_t v___x_344_; size_t v___x_345_; size_t v___x_346_; size_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_buckets_334_ = lean_ctor_get(v_m_332_, 1);
v___x_335_ = lean_array_get_size(v_buckets_334_);
v___x_336_ = l_Lean_ExprStructEq_hash(v_a_333_);
v___x_337_ = 32ULL;
v___x_338_ = lean_uint64_shift_right(v___x_336_, v___x_337_);
v_fold_339_ = lean_uint64_xor(v___x_336_, v___x_338_);
v___x_340_ = 16ULL;
v___x_341_ = lean_uint64_shift_right(v_fold_339_, v___x_340_);
v___x_342_ = lean_uint64_xor(v_fold_339_, v___x_341_);
v___x_343_ = lean_uint64_to_usize(v___x_342_);
v___x_344_ = lean_usize_of_nat(v___x_335_);
v___x_345_ = ((size_t)1ULL);
v___x_346_ = lean_usize_sub(v___x_344_, v___x_345_);
v___x_347_ = lean_usize_land(v___x_343_, v___x_346_);
v___x_348_ = lean_array_uget_borrowed(v_buckets_334_, v___x_347_);
v___x_349_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___redArg(v_a_333_, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_m_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___redArg(v_m_350_, v_a_351_);
lean_dec_ref(v_a_351_);
lean_dec_ref(v_m_350_);
return v_res_352_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_354_; lean_object* v_dummy_355_; 
v___x_354_ = lean_box(0);
v_dummy_355_ = l_Lean_Expr_sort___override(v___x_354_);
return v_dummy_355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(lean_object* v_pre_356_, lean_object* v_post_357_, size_t v_sz_358_, size_t v_i_359_, lean_object* v_bs_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
uint8_t v___x_365_; 
v___x_365_ = lean_usize_dec_lt(v_i_359_, v_sz_358_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; 
lean_dec_ref(v_post_357_);
lean_dec_ref(v_pre_356_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v_bs_360_);
return v___x_366_;
}
else
{
lean_object* v_v_367_; lean_object* v___x_368_; lean_object* v_bs_x27_369_; lean_object* v___x_370_; 
v_v_367_ = lean_array_uget(v_bs_360_, v_i_359_);
v___x_368_ = lean_unsigned_to_nat(0u);
v_bs_x27_369_ = lean_array_uset(v_bs_360_, v_i_359_, v___x_368_);
lean_inc_ref(v_post_357_);
lean_inc_ref(v_pre_356_);
v___x_370_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_356_, v_post_357_, v_v_367_, v___y_361_, v___y_362_, v___y_363_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; size_t v___x_372_; size_t v___x_373_; lean_object* v___x_374_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v___x_372_ = ((size_t)1ULL);
v___x_373_ = lean_usize_add(v_i_359_, v___x_372_);
v___x_374_ = lean_array_uset(v_bs_x27_369_, v_i_359_, v_a_371_);
v_i_359_ = v___x_373_;
v_bs_360_ = v___x_374_;
goto _start;
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec_ref(v_bs_x27_369_);
lean_dec_ref(v_post_357_);
lean_dec_ref(v_pre_356_);
v_a_376_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_370_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_370_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(lean_object* v_pre_384_, lean_object* v_post_385_, lean_object* v___y_386_, lean_object* v_x_387_, lean_object* v_x_388_, lean_object* v_x_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
if (lean_obj_tag(v_x_387_) == 5)
{
lean_object* v_fn_394_; lean_object* v_arg_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_fn_394_ = lean_ctor_get(v_x_387_, 0);
lean_inc_ref(v_fn_394_);
v_arg_395_ = lean_ctor_get(v_x_387_, 1);
lean_inc_ref(v_arg_395_);
lean_dec_ref_known(v_x_387_, 2);
v___x_396_ = lean_array_set(v_x_388_, v_x_389_, v_arg_395_);
v___x_397_ = lean_unsigned_to_nat(1u);
v___x_398_ = lean_nat_sub(v_x_389_, v___x_397_);
lean_dec(v_x_389_);
v_x_387_ = v_fn_394_;
v_x_388_ = v___x_396_;
v_x_389_ = v___x_398_;
goto _start;
}
else
{
lean_object* v___x_400_; 
lean_dec(v_x_389_);
lean_inc_ref(v_post_385_);
lean_inc_ref(v_pre_384_);
v___x_400_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_384_, v_post_385_, v_x_387_, v___y_390_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; size_t v_sz_402_; size_t v___x_403_; lean_object* v___x_404_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_a_401_);
lean_dec_ref_known(v___x_400_, 1);
v_sz_402_ = lean_array_size(v_x_388_);
v___x_403_ = ((size_t)0ULL);
v___x_404_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_384_, v_post_385_, v_sz_402_, v___x_403_, v_x_388_, v___y_390_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_413_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_413_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = l_Lean_Expr_updateAppN(v___y_386_, v_a_401_, v_a_405_);
lean_dec(v_a_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec(v_a_401_);
v_a_414_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_404_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_404_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
else
{
lean_dec_ref(v_x_388_);
lean_dec_ref(v_post_385_);
lean_dec_ref(v_pre_384_);
return v___x_400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(lean_object* v___x_422_, lean_object* v_pre_423_, lean_object* v_e_424_, lean_object* v_post_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Core_checkSystem(v___x_422_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_431_; 
lean_dec_ref_known(v___x_430_, 1);
lean_inc_ref(v_pre_423_);
lean_inc(v___y_428_);
lean_inc_ref(v___y_427_);
lean_inc_ref(v_e_424_);
v___x_431_ = lean_apply_4(v_pre_423_, v_e_424_, v___y_427_, v___y_428_, lean_box(0));
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_549_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_549_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_549_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_549_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___y_437_; 
switch(lean_obj_tag(v_a_432_))
{
case 0:
{
lean_object* v_e_539_; lean_object* v___x_541_; 
lean_dec_ref(v_post_425_);
lean_dec_ref(v_e_424_);
lean_dec_ref(v_pre_423_);
v_e_539_ = lean_ctor_get(v_a_432_, 0);
lean_inc_ref(v_e_539_);
lean_dec_ref_known(v_a_432_, 1);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v_e_539_);
v___x_541_ = v___x_434_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_e_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
case 1:
{
lean_object* v_e_543_; lean_object* v___x_544_; 
lean_del_object(v___x_434_);
lean_dec_ref(v_e_424_);
v_e_543_ = lean_ctor_get(v_a_432_, 0);
lean_inc_ref(v_e_543_);
lean_dec_ref_known(v_a_432_, 1);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_544_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_e_543_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v_a_545_, v___y_426_, v___y_427_, v___y_428_);
return v___x_546_;
}
else
{
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_544_;
}
}
default: 
{
lean_object* v_e_x3f_547_; 
lean_del_object(v___x_434_);
v_e_x3f_547_ = lean_ctor_get(v_a_432_, 0);
lean_inc(v_e_x3f_547_);
lean_dec_ref_known(v_a_432_, 1);
if (lean_obj_tag(v_e_x3f_547_) == 0)
{
v___y_437_ = v_e_424_;
goto v___jp_436_;
}
else
{
lean_object* v_val_548_; 
lean_dec_ref(v_e_424_);
v_val_548_ = lean_ctor_get(v_e_x3f_547_, 0);
lean_inc(v_val_548_);
lean_dec_ref_known(v_e_x3f_547_, 1);
v___y_437_ = v_val_548_;
goto v___jp_436_;
}
}
}
v___jp_436_:
{
switch(lean_obj_tag(v___y_437_))
{
case 7:
{
lean_object* v_binderName_438_; lean_object* v_binderType_439_; lean_object* v_body_440_; uint8_t v_binderInfo_441_; lean_object* v___x_442_; 
v_binderName_438_ = lean_ctor_get(v___y_437_, 0);
v_binderType_439_ = lean_ctor_get(v___y_437_, 1);
v_body_440_ = lean_ctor_get(v___y_437_, 2);
v_binderInfo_441_ = lean_ctor_get_uint8(v___y_437_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_439_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_442_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_binderType_439_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_444_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
lean_inc_ref(v_body_440_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_444_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_body_440_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; size_t v___x_446_; size_t v___x_447_; uint8_t v___x_448_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_445_);
lean_dec_ref_known(v___x_444_, 1);
v___x_446_ = lean_ptr_addr(v_binderType_439_);
v___x_447_ = lean_ptr_addr(v_a_443_);
v___x_448_ = lean_usize_dec_eq(v___x_446_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_inc(v_binderName_438_);
lean_dec_ref_known(v___y_437_, 3);
v___x_449_ = l_Lean_Expr_forallE___override(v_binderName_438_, v_a_443_, v_a_445_, v_binderInfo_441_);
v___x_450_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_449_, v___y_426_, v___y_427_, v___y_428_);
return v___x_450_;
}
else
{
size_t v___x_451_; size_t v___x_452_; uint8_t v___x_453_; 
v___x_451_ = lean_ptr_addr(v_body_440_);
v___x_452_ = lean_ptr_addr(v_a_445_);
v___x_453_ = lean_usize_dec_eq(v___x_451_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; lean_object* v___x_455_; 
lean_inc(v_binderName_438_);
lean_dec_ref_known(v___y_437_, 3);
v___x_454_ = l_Lean_Expr_forallE___override(v_binderName_438_, v_a_443_, v_a_445_, v_binderInfo_441_);
v___x_455_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_454_, v___y_426_, v___y_427_, v___y_428_);
return v___x_455_;
}
else
{
uint8_t v___x_456_; 
v___x_456_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_441_, v_binderInfo_441_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
lean_inc(v_binderName_438_);
lean_dec_ref_known(v___y_437_, 3);
v___x_457_ = l_Lean_Expr_forallE___override(v_binderName_438_, v_a_443_, v_a_445_, v_binderInfo_441_);
v___x_458_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_457_, v___y_426_, v___y_427_, v___y_428_);
return v___x_458_;
}
else
{
lean_object* v___x_459_; 
lean_dec(v_a_445_);
lean_dec(v_a_443_);
v___x_459_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___y_437_, v___y_426_, v___y_427_, v___y_428_);
return v___x_459_;
}
}
}
}
else
{
lean_dec(v_a_443_);
lean_dec_ref_known(v___y_437_, 3);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_444_;
}
}
else
{
lean_dec_ref_known(v___y_437_, 3);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_442_;
}
}
case 6:
{
lean_object* v_binderName_460_; lean_object* v_binderType_461_; lean_object* v_body_462_; uint8_t v_binderInfo_463_; lean_object* v___x_464_; 
v_binderName_460_ = lean_ctor_get(v___y_437_, 0);
v_binderType_461_ = lean_ctor_get(v___y_437_, 1);
v_body_462_ = lean_ctor_get(v___y_437_, 2);
v_binderInfo_463_ = lean_ctor_get_uint8(v___y_437_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_461_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_464_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_binderType_461_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_466_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_464_, 1);
lean_inc_ref(v_body_462_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_466_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_body_462_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; size_t v___x_468_; size_t v___x_469_; uint8_t v___x_470_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_466_, 1);
v___x_468_ = lean_ptr_addr(v_binderType_461_);
v___x_469_ = lean_ptr_addr(v_a_465_);
v___x_470_ = lean_usize_dec_eq(v___x_468_, v___x_469_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; 
lean_inc(v_binderName_460_);
lean_dec_ref_known(v___y_437_, 3);
v___x_471_ = l_Lean_Expr_lam___override(v_binderName_460_, v_a_465_, v_a_467_, v_binderInfo_463_);
v___x_472_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_471_, v___y_426_, v___y_427_, v___y_428_);
return v___x_472_;
}
else
{
size_t v___x_473_; size_t v___x_474_; uint8_t v___x_475_; 
v___x_473_ = lean_ptr_addr(v_body_462_);
v___x_474_ = lean_ptr_addr(v_a_467_);
v___x_475_ = lean_usize_dec_eq(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; 
lean_inc(v_binderName_460_);
lean_dec_ref_known(v___y_437_, 3);
v___x_476_ = l_Lean_Expr_lam___override(v_binderName_460_, v_a_465_, v_a_467_, v_binderInfo_463_);
v___x_477_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_476_, v___y_426_, v___y_427_, v___y_428_);
return v___x_477_;
}
else
{
uint8_t v___x_478_; 
v___x_478_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_463_, v_binderInfo_463_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_inc(v_binderName_460_);
lean_dec_ref_known(v___y_437_, 3);
v___x_479_ = l_Lean_Expr_lam___override(v_binderName_460_, v_a_465_, v_a_467_, v_binderInfo_463_);
v___x_480_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_479_, v___y_426_, v___y_427_, v___y_428_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; 
lean_dec(v_a_467_);
lean_dec(v_a_465_);
v___x_481_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___y_437_, v___y_426_, v___y_427_, v___y_428_);
return v___x_481_;
}
}
}
}
else
{
lean_dec(v_a_465_);
lean_dec_ref_known(v___y_437_, 3);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_466_;
}
}
else
{
lean_dec_ref_known(v___y_437_, 3);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_464_;
}
}
case 8:
{
lean_object* v_declName_482_; lean_object* v_type_483_; lean_object* v_value_484_; lean_object* v_body_485_; uint8_t v_nondep_486_; lean_object* v___x_487_; 
v_declName_482_ = lean_ctor_get(v___y_437_, 0);
v_type_483_ = lean_ctor_get(v___y_437_, 1);
v_value_484_ = lean_ctor_get(v___y_437_, 2);
v_body_485_ = lean_ctor_get(v___y_437_, 3);
v_nondep_486_ = lean_ctor_get_uint8(v___y_437_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_483_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_487_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_type_483_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_489_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
lean_dec_ref_known(v___x_487_, 1);
lean_inc_ref(v_value_484_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_489_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_value_484_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_object* v_a_490_; lean_object* v___x_491_; 
v_a_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_489_, 1);
lean_inc_ref(v_body_485_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_491_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_body_485_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; size_t v___x_493_; size_t v___x_494_; uint8_t v___x_495_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_a_492_);
lean_dec_ref_known(v___x_491_, 1);
v___x_493_ = lean_ptr_addr(v_type_483_);
v___x_494_ = lean_ptr_addr(v_a_488_);
v___x_495_ = lean_usize_dec_eq(v___x_493_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; lean_object* v___x_497_; 
lean_inc(v_declName_482_);
lean_dec_ref_known(v___y_437_, 4);
v___x_496_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_488_, v_a_490_, v_a_492_, v_nondep_486_);
v___x_497_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_496_, v___y_426_, v___y_427_, v___y_428_);
return v___x_497_;
}
else
{
size_t v___x_498_; size_t v___x_499_; uint8_t v___x_500_; 
v___x_498_ = lean_ptr_addr(v_value_484_);
v___x_499_ = lean_ptr_addr(v_a_490_);
v___x_500_ = lean_usize_dec_eq(v___x_498_, v___x_499_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; 
lean_inc(v_declName_482_);
lean_dec_ref_known(v___y_437_, 4);
v___x_501_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_488_, v_a_490_, v_a_492_, v_nondep_486_);
v___x_502_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_501_, v___y_426_, v___y_427_, v___y_428_);
return v___x_502_;
}
else
{
size_t v___x_503_; size_t v___x_504_; uint8_t v___x_505_; 
v___x_503_ = lean_ptr_addr(v_body_485_);
v___x_504_ = lean_ptr_addr(v_a_492_);
v___x_505_ = lean_usize_dec_eq(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; lean_object* v___x_507_; 
lean_inc(v_declName_482_);
lean_dec_ref_known(v___y_437_, 4);
v___x_506_ = l_Lean_Expr_letE___override(v_declName_482_, v_a_488_, v_a_490_, v_a_492_, v_nondep_486_);
v___x_507_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_506_, v___y_426_, v___y_427_, v___y_428_);
return v___x_507_;
}
else
{
lean_object* v___x_508_; 
lean_dec(v_a_492_);
lean_dec(v_a_490_);
lean_dec(v_a_488_);
v___x_508_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___y_437_, v___y_426_, v___y_427_, v___y_428_);
return v___x_508_;
}
}
}
}
else
{
lean_dec(v_a_490_);
lean_dec(v_a_488_);
lean_dec_ref_known(v___y_437_, 4);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_491_;
}
}
else
{
lean_dec(v_a_488_);
lean_dec_ref_known(v___y_437_, 4);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_489_;
}
}
else
{
lean_dec_ref_known(v___y_437_, 4);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_487_;
}
}
case 5:
{
lean_object* v_dummy_509_; lean_object* v_nargs_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_dummy_509_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0);
v_nargs_510_ = l_Lean_Expr_getAppNumArgs(v___y_437_);
lean_inc(v_nargs_510_);
v___x_511_ = lean_mk_array(v_nargs_510_, v_dummy_509_);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_nat_sub(v_nargs_510_, v___x_512_);
lean_dec(v_nargs_510_);
lean_inc_ref(v___y_437_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_514_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(v_pre_423_, v_post_425_, v___y_437_, v___y_437_, v___x_511_, v___x_513_, v___y_426_, v___y_427_, v___y_428_);
lean_dec_ref_known(v___y_437_, 2);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_516_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_514_, 1);
v___x_516_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v_a_515_, v___y_426_, v___y_427_, v___y_428_);
return v___x_516_;
}
else
{
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_514_;
}
}
case 10:
{
lean_object* v_data_517_; lean_object* v_expr_518_; lean_object* v___x_519_; 
v_data_517_ = lean_ctor_get(v___y_437_, 0);
v_expr_518_ = lean_ctor_get(v___y_437_, 1);
lean_inc_ref(v_expr_518_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_519_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_expr_518_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; size_t v___x_521_; size_t v___x_522_; uint8_t v___x_523_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_519_, 1);
v___x_521_ = lean_ptr_addr(v_expr_518_);
v___x_522_ = lean_ptr_addr(v_a_520_);
v___x_523_ = lean_usize_dec_eq(v___x_521_, v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_inc(v_data_517_);
lean_dec_ref_known(v___y_437_, 2);
v___x_524_ = l_Lean_Expr_mdata___override(v_data_517_, v_a_520_);
v___x_525_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_524_, v___y_426_, v___y_427_, v___y_428_);
return v___x_525_;
}
else
{
lean_object* v___x_526_; 
lean_dec(v_a_520_);
v___x_526_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___y_437_, v___y_426_, v___y_427_, v___y_428_);
return v___x_526_;
}
}
else
{
lean_dec_ref_known(v___y_437_, 2);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_519_;
}
}
case 11:
{
lean_object* v_typeName_527_; lean_object* v_idx_528_; lean_object* v_struct_529_; lean_object* v___x_530_; 
v_typeName_527_ = lean_ctor_get(v___y_437_, 0);
v_idx_528_ = lean_ctor_get(v___y_437_, 1);
v_struct_529_ = lean_ctor_get(v___y_437_, 2);
lean_inc_ref(v_struct_529_);
lean_inc_ref(v_post_425_);
lean_inc_ref(v_pre_423_);
v___x_530_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_423_, v_post_425_, v_struct_529_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; size_t v___x_532_; size_t v___x_533_; uint8_t v___x_534_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_530_, 1);
v___x_532_ = lean_ptr_addr(v_struct_529_);
v___x_533_ = lean_ptr_addr(v_a_531_);
v___x_534_ = lean_usize_dec_eq(v___x_532_, v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; 
lean_inc(v_idx_528_);
lean_inc(v_typeName_527_);
lean_dec_ref_known(v___y_437_, 3);
v___x_535_ = l_Lean_Expr_proj___override(v_typeName_527_, v_idx_528_, v_a_531_);
v___x_536_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___x_535_, v___y_426_, v___y_427_, v___y_428_);
return v___x_536_;
}
else
{
lean_object* v___x_537_; 
lean_dec(v_a_531_);
v___x_537_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___y_437_, v___y_426_, v___y_427_, v___y_428_);
return v___x_537_;
}
}
else
{
lean_dec_ref_known(v___y_437_, 3);
lean_dec_ref(v_post_425_);
lean_dec_ref(v_pre_423_);
return v___x_530_;
}
}
default: 
{
lean_object* v___x_538_; 
v___x_538_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_423_, v_post_425_, v___y_437_, v___y_426_, v___y_427_, v___y_428_);
return v___x_538_;
}
}
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref(v_post_425_);
lean_dec_ref(v_e_424_);
lean_dec_ref(v_pre_423_);
v_a_550_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_431_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_431_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
lean_dec_ref(v_post_425_);
lean_dec_ref(v_e_424_);
lean_dec_ref(v_pre_423_);
v_a_558_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_430_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_430_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed(lean_object* v___x_566_, lean_object* v_pre_567_, lean_object* v_e_568_, lean_object* v_post_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1(v___x_566_, v_pre_567_, v_e_568_, v_post_569_, v___y_570_, v___y_571_, v___y_572_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(lean_object* v_pre_575_, lean_object* v_post_576_, lean_object* v_e_577_, lean_object* v_a_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
lean_inc(v_a_578_);
v___x_582_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_582_, 0, lean_box(0));
lean_closure_set(v___x_582_, 1, lean_box(0));
lean_closure_set(v___x_582_, 2, v_a_578_);
v___x_583_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_box(0), v___x_582_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_615_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_615_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_615_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_615_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; 
v___x_588_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___redArg(v_a_584_, v_e_577_);
lean_dec(v_a_584_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v___x_589_; lean_object* v___f_590_; lean_object* v___x_591_; 
lean_del_object(v___x_586_);
v___x_589_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___closed__0));
lean_inc_ref(v_e_577_);
v___f_590_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_590_, 0, v___x_589_);
lean_closure_set(v___f_590_, 1, v_pre_575_);
lean_closure_set(v___f_590_, 2, v_e_577_);
lean_closure_set(v___f_590_, 3, v_post_576_);
v___x_591_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v___f_590_, v_a_578_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v___f_593_; lean_object* v___x_594_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc_n(v_a_592_, 2);
lean_dec_ref_known(v___x_591_, 1);
lean_inc(v_a_578_);
v___f_593_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_593_, 0, v_a_578_);
lean_closure_set(v___f_593_, 1, v_e_577_);
lean_closure_set(v___f_593_, 2, v_a_592_);
v___x_594_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__0(lean_box(0), v___f_593_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_601_ == 0)
{
lean_object* v_unused_602_; 
v_unused_602_ = lean_ctor_get(v___x_594_, 0);
lean_dec(v_unused_602_);
v___x_596_ = v___x_594_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_dec(v___x_594_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v_a_592_);
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_592_);
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
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
lean_dec(v_a_592_);
v_a_603_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_594_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_594_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
else
{
lean_dec_ref(v_e_577_);
return v___x_591_;
}
}
else
{
lean_object* v_val_611_; lean_object* v___x_613_; 
lean_dec_ref(v_e_577_);
lean_dec_ref(v_post_576_);
lean_dec_ref(v_pre_575_);
v_val_611_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_val_611_);
lean_dec_ref_known(v___x_588_, 1);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v_val_611_);
v___x_613_ = v___x_586_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_val_611_);
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
lean_dec_ref(v_e_577_);
lean_dec_ref(v_post_576_);
lean_dec_ref(v_pre_575_);
v_a_616_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_583_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_583_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(lean_object* v_pre_624_, lean_object* v_post_625_, lean_object* v_e_626_, lean_object* v_a_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
lean_object* v___x_631_; 
lean_inc_ref(v_post_625_);
lean_inc(v___y_629_);
lean_inc_ref(v___y_628_);
lean_inc_ref(v_e_626_);
v___x_631_ = lean_apply_4(v_post_625_, v_e_626_, v___y_628_, v___y_629_, lean_box(0));
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_650_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_650_ == 0)
{
v___x_634_ = v___x_631_;
v_isShared_635_ = v_isSharedCheck_650_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_650_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
switch(lean_obj_tag(v_a_632_))
{
case 0:
{
lean_object* v_e_636_; lean_object* v___x_638_; 
lean_dec_ref(v_e_626_);
lean_dec_ref(v_post_625_);
lean_dec_ref(v_pre_624_);
v_e_636_ = lean_ctor_get(v_a_632_, 0);
lean_inc_ref(v_e_636_);
lean_dec_ref_known(v_a_632_, 1);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v_e_636_);
v___x_638_ = v___x_634_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_e_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
case 1:
{
lean_object* v_e_640_; lean_object* v___x_641_; 
lean_del_object(v___x_634_);
lean_dec_ref(v_e_626_);
v_e_640_ = lean_ctor_get(v_a_632_, 0);
lean_inc_ref(v_e_640_);
lean_dec_ref_known(v_a_632_, 1);
v___x_641_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_624_, v_post_625_, v_e_640_, v_a_627_, v___y_628_, v___y_629_);
return v___x_641_;
}
default: 
{
lean_object* v_e_x3f_642_; 
lean_dec_ref(v_post_625_);
lean_dec_ref(v_pre_624_);
v_e_x3f_642_ = lean_ctor_get(v_a_632_, 0);
lean_inc(v_e_x3f_642_);
lean_dec_ref_known(v_a_632_, 1);
if (lean_obj_tag(v_e_x3f_642_) == 0)
{
lean_object* v___x_644_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v_e_626_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_e_626_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
else
{
lean_object* v_val_646_; lean_object* v___x_648_; 
lean_dec_ref(v_e_626_);
v_val_646_ = lean_ctor_get(v_e_x3f_642_, 0);
lean_inc(v_val_646_);
lean_dec_ref_known(v_e_x3f_642_, 1);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v_val_646_);
v___x_648_ = v___x_634_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_val_646_);
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
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v_e_626_);
lean_dec_ref(v_post_625_);
lean_dec_ref(v_pre_624_);
v_a_651_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_631_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_631_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3___boxed(lean_object* v_pre_659_, lean_object* v_post_660_, lean_object* v_e_661_, lean_object* v_a_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__3(v_pre_659_, v_post_660_, v_e_661_, v_a_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v_a_662_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_667_, lean_object* v_post_668_, lean_object* v_sz_669_, lean_object* v_i_670_, lean_object* v_bs_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
size_t v_sz_boxed_676_; size_t v_i_boxed_677_; lean_object* v_res_678_; 
v_sz_boxed_676_ = lean_unbox_usize(v_sz_669_);
lean_dec(v_sz_669_);
v_i_boxed_677_ = lean_unbox_usize(v_i_670_);
lean_dec(v_i_670_);
v_res_678_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__2(v_pre_667_, v_post_668_, v_sz_boxed_676_, v_i_boxed_677_, v_bs_671_, v___y_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_679_, lean_object* v_post_680_, lean_object* v___y_681_, lean_object* v_x_682_, lean_object* v_x_683_, lean_object* v_x_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__4(v_pre_679_, v_post_680_, v___y_681_, v_x_682_, v_x_683_, v_x_684_, v___y_685_, v___y_686_, v___y_687_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_681_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___boxed(lean_object* v_pre_690_, lean_object* v_post_691_, lean_object* v_e_692_, lean_object* v_a_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_690_, v_post_691_, v_e_692_, v_a_693_, v___y_694_, v___y_695_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v_a_693_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_object* v_00_u03b1_698_, lean_object* v_x_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_apply_1(v_x_699_, lean_box(0));
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0___boxed(lean_object* v_00_u03b1_705_, lean_object* v_x_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(v_00_u03b1_705_, v_x_706_, v___y_707_, v___y_708_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
return v_res_710_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = lean_box(0);
v___x_712_ = lean_unsigned_to_nat(16u);
v___x_713_ = lean_mk_array(v___x_712_, v___x_711_);
return v___x_713_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__0);
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
lean_ctor_set(v___x_716_, 1, v___x_714_);
return v___x_716_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2(void){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__1);
v___x_718_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_718_, 0, lean_box(0));
lean_closure_set(v___x_718_, 1, lean_box(0));
lean_closure_set(v___x_718_, 2, v___x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(lean_object* v_input_719_, lean_object* v_pre_720_, lean_object* v_post_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v_a_727_; lean_object* v___x_728_; 
v___x_725_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___closed__2);
v___x_726_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_box(0), v___x_725_, v___y_722_, v___y_723_);
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref(v___x_726_);
v___x_728_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0(v_pre_720_, v_post_721_, v_input_719_, v_a_727_, v___y_722_, v___y_723_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_728_, 1);
v___x_730_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_730_, 0, lean_box(0));
lean_closure_set(v___x_730_, 1, lean_box(0));
lean_closure_set(v___x_730_, 2, v_a_727_);
v___x_731_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___lam__0(lean_box(0), v___x_730_, v___y_722_, v___y_723_);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v___x_731_, 0);
lean_dec(v_unused_739_);
v___x_733_ = v___x_731_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_dec(v___x_731_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v_a_729_);
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_729_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
else
{
lean_dec(v_a_727_);
return v___x_728_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0___boxed(lean_object* v_input_740_, lean_object* v_pre_741_, lean_object* v_post_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(v_input_740_, v_pre_741_, v_post_742_, v___y_743_, v___y_744_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam(lean_object* v_type_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v___f_753_; lean_object* v___f_754_; lean_object* v___x_755_; 
v___f_753_ = ((lean_object*)(l_Lean_Meta_elimOptParam___closed__0));
v___f_754_ = ((lean_object*)(l_Lean_Meta_elimOptParam___closed__1));
v___x_755_ = l_Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0(v_type_749_, v___f_753_, v___f_754_, v_a_750_, v_a_751_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_elimOptParam___boxed(lean_object* v_type_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_Lean_Meta_elimOptParam(v_type_756_, v_a_757_, v_a_758_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_761_, lean_object* v_m_762_, lean_object* v_a_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___redArg(v_m_762_, v_a_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_765_, lean_object* v_m_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1(v_00_u03b2_765_, v_m_766_, v_a_767_);
lean_dec_ref(v_a_767_);
lean_dec_ref(v_m_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_769_, lean_object* v_ref_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_770_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_775_, lean_object* v_ref_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_775_, v_ref_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_781_, lean_object* v___y_782_, lean_object* v___y_783_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_791_, lean_object* v_x_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___redArg(v_x_792_, v___y_793_, v___y_794_, v___y_795_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_798_, lean_object* v_x_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__5(v_00_u03b1_798_, v_x_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_805_, lean_object* v_m_806_, lean_object* v_a_807_, lean_object* v_b_808_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6___redArg(v_m_806_, v_a_807_, v_b_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_810_, lean_object* v_a_811_, lean_object* v_x_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___redArg(v_a_811_, v_x_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_814_, lean_object* v_a_815_, lean_object* v_x_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_814_, v_a_815_, v_x_816_);
lean_dec(v_x_816_);
lean_dec_ref(v_a_815_);
return v_res_817_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_818_, lean_object* v_a_819_, lean_object* v_x_820_){
_start:
{
uint8_t v___x_821_; 
v___x_821_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___redArg(v_a_819_, v_x_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_822_, lean_object* v_a_823_, lean_object* v_x_824_){
_start:
{
uint8_t v_res_825_; lean_object* v_r_826_; 
v_res_825_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_822_, v_a_823_, v_x_824_);
lean_dec(v_x_824_);
lean_dec_ref(v_a_823_);
v_r_826_ = lean_box(v_res_825_);
return v_r_826_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_827_, lean_object* v_data_828_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11___redArg(v_data_828_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_830_, lean_object* v_a_831_, lean_object* v_b_832_, lean_object* v_x_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__12___redArg(v_a_831_, v_b_832_, v_x_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_835_, lean_object* v_i_836_, lean_object* v_source_837_, lean_object* v_target_838_){
_start:
{
lean_object* v___x_839_; 
v___x_839_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_836_, v_source_837_, v_target_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_840_, lean_object* v_x_841_, lean_object* v_x_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_841_, v_x_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(uint8_t v_skipIfPropOrEq_844_, lean_object* v_as_845_, size_t v_sz_846_, size_t v_i_847_, lean_object* v_b_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_a_855_; uint8_t v___x_859_; 
v___x_859_ = lean_usize_dec_lt(v_i_847_, v_sz_846_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; 
v___x_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_860_, 0, v_b_848_);
return v___x_860_;
}
else
{
lean_object* v_snd_861_; lean_object* v_fst_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_931_; 
v_snd_861_ = lean_ctor_get(v_b_848_, 1);
v_fst_862_ = lean_ctor_get(v_b_848_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v_b_848_);
if (v_isSharedCheck_931_ == 0)
{
v___x_864_ = v_b_848_;
v_isShared_865_ = v_isSharedCheck_931_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_snd_861_);
lean_inc(v_fst_862_);
lean_dec(v_b_848_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_931_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v_array_866_; lean_object* v_start_867_; lean_object* v_stop_868_; uint8_t v___x_869_; 
v_array_866_ = lean_ctor_get(v_snd_861_, 0);
v_start_867_ = lean_ctor_get(v_snd_861_, 1);
v_stop_868_ = lean_ctor_get(v_snd_861_, 2);
v___x_869_ = lean_nat_dec_lt(v_start_867_, v_stop_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_871_; 
if (v_isShared_865_ == 0)
{
v___x_871_ = v___x_864_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_fst_862_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_snd_861_);
v___x_871_ = v_reuseFailAlloc_873_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; 
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v___x_871_);
return v___x_872_;
}
}
else
{
lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_927_; 
lean_inc(v_stop_868_);
lean_inc(v_start_867_);
lean_inc_ref(v_array_866_);
v_isSharedCheck_927_ = !lean_is_exclusive(v_snd_861_);
if (v_isSharedCheck_927_ == 0)
{
lean_object* v_unused_928_; lean_object* v_unused_929_; lean_object* v_unused_930_; 
v_unused_928_ = lean_ctor_get(v_snd_861_, 2);
lean_dec(v_unused_928_);
v_unused_929_ = lean_ctor_get(v_snd_861_, 1);
lean_dec(v_unused_929_);
v_unused_930_ = lean_ctor_get(v_snd_861_, 0);
lean_dec(v_unused_930_);
v___x_875_ = v_snd_861_;
v_isShared_876_ = v_isSharedCheck_927_;
goto v_resetjp_874_;
}
else
{
lean_dec(v_snd_861_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_927_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v_a_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
v_a_877_ = lean_array_uget_borrowed(v_as_845_, v_i_847_);
v___x_878_ = lean_array_fget(v_array_866_, v_start_867_);
v___x_879_ = lean_unsigned_to_nat(1u);
v___x_880_ = lean_nat_add(v_start_867_, v___x_879_);
lean_dec(v_start_867_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 1, v___x_880_);
v___x_882_ = v___x_875_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_array_866_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v___x_880_);
lean_ctor_set(v_reuseFailAlloc_926_, 2, v_stop_868_);
v___x_882_ = v_reuseFailAlloc_926_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___x_902_; 
lean_inc(v___y_852_);
lean_inc_ref(v___y_851_);
lean_inc(v___y_850_);
lean_inc_ref(v___y_849_);
lean_inc(v_a_877_);
v___x_902_ = lean_infer_type(v_a_877_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
if (lean_obj_tag(v___x_902_) == 0)
{
if (v_skipIfPropOrEq_844_ == 0)
{
lean_dec_ref_known(v___x_902_, 1);
v___y_884_ = v___y_849_;
v___y_885_ = v___y_850_;
v___y_886_ = v___y_851_;
v___y_887_ = v___y_852_;
goto v___jp_883_;
}
else
{
lean_object* v_a_903_; lean_object* v___x_904_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
v___x_904_ = l_Lean_Meta_isProp(v_a_903_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; uint8_t v___x_908_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_908_ = lean_unbox(v_a_905_);
lean_dec(v_a_905_);
if (v___x_908_ == 0)
{
uint8_t v___x_909_; 
v___x_909_ = lean_expr_eqv(v_a_877_, v___x_878_);
if (v___x_909_ == 0)
{
v___y_884_ = v___y_849_;
v___y_885_ = v___y_850_;
v___y_886_ = v___y_851_;
v___y_887_ = v___y_852_;
goto v___jp_883_;
}
else
{
lean_dec(v___x_878_);
lean_del_object(v___x_864_);
goto v___jp_906_;
}
}
else
{
lean_dec(v___x_878_);
lean_del_object(v___x_864_);
goto v___jp_906_;
}
v___jp_906_:
{
lean_object* v___x_907_; 
v___x_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_907_, 0, v_fst_862_);
lean_ctor_set(v___x_907_, 1, v___x_882_);
v_a_855_ = v___x_907_;
goto v___jp_854_;
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec_ref(v___x_882_);
lean_dec(v___x_878_);
lean_del_object(v___x_864_);
lean_dec(v_fst_862_);
v_a_910_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_904_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_904_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v___x_882_);
lean_dec(v___x_878_);
lean_del_object(v___x_864_);
lean_dec(v_fst_862_);
v_a_918_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_902_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_902_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
v___jp_883_:
{
lean_object* v___x_888_; 
lean_inc(v_a_877_);
v___x_888_ = l_Lean_Meta_mkEqHEq(v_a_877_, v___x_878_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_892_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
v___x_890_ = lean_array_push(v_fst_862_, v_a_889_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 1, v___x_882_);
lean_ctor_set(v___x_864_, 0, v___x_890_);
v___x_892_ = v___x_864_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v___x_882_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
v_a_855_ = v___x_892_;
goto v___jp_854_;
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec_ref(v___x_882_);
lean_del_object(v___x_864_);
lean_dec(v_fst_862_);
v_a_894_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_888_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_888_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
}
}
}
}
}
v___jp_854_:
{
size_t v___x_856_; size_t v___x_857_; 
v___x_856_ = ((size_t)1ULL);
v___x_857_ = lean_usize_add(v_i_847_, v___x_856_);
v_i_847_ = v___x_857_;
v_b_848_ = v_a_855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0___boxed(lean_object* v_skipIfPropOrEq_932_, lean_object* v_as_933_, lean_object* v_sz_934_, lean_object* v_i_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
uint8_t v_skipIfPropOrEq_boxed_942_; size_t v_sz_boxed_943_; size_t v_i_boxed_944_; lean_object* v_res_945_; 
v_skipIfPropOrEq_boxed_942_ = lean_unbox(v_skipIfPropOrEq_932_);
v_sz_boxed_943_ = lean_unbox_usize(v_sz_934_);
lean_dec(v_sz_934_);
v_i_boxed_944_ = lean_unbox_usize(v_i_935_);
lean_dec(v_i_935_);
v_res_945_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(v_skipIfPropOrEq_boxed_942_, v_as_933_, v_sz_boxed_943_, v_i_boxed_944_, v_b_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec_ref(v_as_933_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(lean_object* v_args1_948_, lean_object* v_args2_949_, uint8_t v_skipIfPropOrEq_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_){
_start:
{
lean_object* v___x_956_; lean_object* v_eqs_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; size_t v_sz_961_; size_t v___x_962_; lean_object* v___x_963_; 
v___x_956_ = lean_unsigned_to_nat(0u);
v_eqs_957_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_958_ = lean_array_get_size(v_args2_949_);
v___x_959_ = l_Array_toSubarray___redArg(v_args2_949_, v___x_956_, v___x_958_);
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v_eqs_957_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
v_sz_961_ = lean_array_size(v_args1_948_);
v___x_962_ = ((size_t)0ULL);
v___x_963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkEqs_spec__0(v_skipIfPropOrEq_950_, v_args1_948_, v_sz_961_, v___x_962_, v___x_960_, v_a_951_, v_a_952_, v_a_953_, v_a_954_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_972_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_972_ == 0)
{
v___x_966_ = v___x_963_;
v_isShared_967_ = v_isSharedCheck_972_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_963_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_972_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v_fst_968_; lean_object* v___x_970_; 
v_fst_968_ = lean_ctor_get(v_a_964_, 0);
lean_inc(v_fst_968_);
lean_dec(v_a_964_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v_fst_968_);
v___x_970_ = v___x_966_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_fst_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_a_973_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_963_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_963_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___boxed(lean_object* v_args1_981_, lean_object* v_args2_982_, lean_object* v_skipIfPropOrEq_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
uint8_t v_skipIfPropOrEq_boxed_989_; lean_object* v_res_990_; 
v_skipIfPropOrEq_boxed_989_ = lean_unbox(v_skipIfPropOrEq_983_);
v_res_990_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_981_, v_args2_982_, v_skipIfPropOrEq_boxed_989_, v_a_984_, v_a_985_, v_a_986_, v_a_987_);
lean_dec(v_a_987_);
lean_dec_ref(v_a_986_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
lean_dec_ref(v_args1_981_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(lean_object* v_k_991_, lean_object* v_b_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___x_998_; 
lean_inc(v___y_996_);
lean_inc_ref(v___y_995_);
lean_inc(v___y_994_);
lean_inc_ref(v___y_993_);
v___x_998_ = lean_apply_6(v_k_991_, v_b_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, lean_box(0));
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed(lean_object* v_k_999_, lean_object* v_b_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0(v_k_999_, v_b_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(lean_object* v_name_1007_, uint8_t v_bi_1008_, lean_object* v_type_1009_, lean_object* v_k_1010_, uint8_t v_kind_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v___f_1017_; lean_object* v___x_1018_; 
v___f_1017_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1017_, 0, v_k_1010_);
v___x_1018_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1007_, v_bi_1008_, v_type_1009_, v___f_1017_, v_kind_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
v_a_1027_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1018_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1018_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg___boxed(lean_object* v_name_1035_, lean_object* v_bi_1036_, lean_object* v_type_1037_, lean_object* v_k_1038_, lean_object* v_kind_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
uint8_t v_bi_boxed_1045_; uint8_t v_kind_boxed_1046_; lean_object* v_res_1047_; 
v_bi_boxed_1045_ = lean_unbox(v_bi_1036_);
v_kind_boxed_1046_ = lean_unbox(v_kind_1039_);
v_res_1047_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_name_1035_, v_bi_boxed_1045_, v_type_1037_, v_k_1038_, v_kind_boxed_1046_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(lean_object* v_00_u03b1_1048_, lean_object* v_name_1049_, uint8_t v_bi_1050_, lean_object* v_type_1051_, lean_object* v_k_1052_, uint8_t v_kind_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_name_1049_, v_bi_1050_, v_type_1051_, v_k_1052_, v_kind_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___boxed(lean_object* v_00_u03b1_1060_, lean_object* v_name_1061_, lean_object* v_bi_1062_, lean_object* v_type_1063_, lean_object* v_k_1064_, lean_object* v_kind_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
uint8_t v_bi_boxed_1071_; uint8_t v_kind_boxed_1072_; lean_object* v_res_1073_; 
v_bi_boxed_1071_ = lean_unbox(v_bi_1062_);
v_kind_boxed_1072_ = lean_unbox(v_kind_1065_);
v_res_1073_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0(v_00_u03b1_1060_, v_name_1061_, v_bi_boxed_1071_, v_type_1063_, v_k_1064_, v_kind_boxed_1072_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(lean_object* v_msgData_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v___x_1080_; lean_object* v_env_1081_; uint8_t v___x_1082_; lean_object* v_env_1083_; lean_object* v___x_1084_; lean_object* v_toCold_1085_; lean_object* v_mctx_1086_; lean_object* v_lctx_1087_; lean_object* v_options_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1080_ = lean_st_ref_get(v___y_1078_);
v_env_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc_ref(v_env_1081_);
lean_dec(v___x_1080_);
v___x_1082_ = 0;
v_env_1083_ = l_Lean_Environment_setRecordingDeps(v_env_1081_, v___x_1082_);
v___x_1084_ = lean_st_ref_get(v___y_1076_);
v_toCold_1085_ = lean_ctor_get(v___y_1077_, 0);
v_mctx_1086_ = lean_ctor_get(v___x_1084_, 0);
lean_inc_ref(v_mctx_1086_);
lean_dec(v___x_1084_);
v_lctx_1087_ = lean_ctor_get(v___y_1075_, 2);
v_options_1088_ = lean_ctor_get(v_toCold_1085_, 2);
lean_inc_ref(v_options_1088_);
lean_inc_ref(v_lctx_1087_);
v___x_1089_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1089_, 0, v_env_1083_);
lean_ctor_set(v___x_1089_, 1, v_mctx_1086_);
lean_ctor_set(v___x_1089_, 2, v_lctx_1087_);
lean_ctor_set(v___x_1089_, 3, v_options_1088_);
v___x_1090_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v_msgData_1074_);
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1___boxed(lean_object* v_msgData_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msgData_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(lean_object* v_msg_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_ref_1105_; lean_object* v___x_1106_; lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1115_; 
v_ref_1105_ = lean_ctor_get(v___y_1102_, 2);
v___x_1106_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1109_ = v___x_1106_;
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1106_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1111_; lean_object* v___x_1113_; 
lean_inc(v_ref_1105_);
v___x_1111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1111_, 0, v_ref_1105_);
lean_ctor_set(v___x_1111_, 1, v_a_1107_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 1);
lean_ctor_set(v___x_1109_, 0, v___x_1111_);
v___x_1113_ = v___x_1109_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg___boxed(lean_object* v_msg_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed(lean_object* v_i_1123_, lean_object* v_body_1124_, lean_object* v_args2_1125_, lean_object* v_args2New_1126_, lean_object* v_ctorVal_1127_, lean_object* v_useEq_1128_, lean_object* v_args1_1129_, lean_object* v_resultType_1130_, lean_object* v_k_1131_, lean_object* v_arg2_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
uint8_t v_useEq_boxed_1138_; lean_object* v_res_1139_; 
v_useEq_boxed_1138_ = lean_unbox(v_useEq_1128_);
v_res_1139_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(v_i_1123_, v_body_1124_, v_args2_1125_, v_args2New_1126_, v_ctorVal_1127_, v_useEq_boxed_1138_, v_args1_1129_, v_resultType_1130_, v_k_1131_, v_arg2_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec_ref(v_body_1124_);
lean_dec(v_i_1123_);
return v_res_1139_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__0));
v___x_1142_ = l_Lean_stringToMessageData(v___x_1141_);
return v___x_1142_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__2));
v___x_1145_ = l_Lean_stringToMessageData(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(lean_object* v_ctorVal_1146_, uint8_t v_useEq_1147_, lean_object* v_args1_1148_, lean_object* v_resultType_1149_, lean_object* v_k_1150_, lean_object* v_i_1151_, lean_object* v_type_1152_, lean_object* v_args2_1153_, lean_object* v_args2New_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = lean_array_get_size(v_args1_1148_);
v___x_1161_ = lean_nat_dec_lt(v_i_1151_, v___x_1160_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; 
lean_dec_ref(v_type_1152_);
lean_dec(v_i_1151_);
lean_dec_ref(v_resultType_1149_);
lean_dec_ref(v_args1_1148_);
lean_dec_ref(v_ctorVal_1146_);
lean_inc(v_a_1158_);
lean_inc_ref(v_a_1157_);
lean_inc(v_a_1156_);
lean_inc_ref(v_a_1155_);
v___x_1162_ = lean_apply_7(v_k_1150_, v_args2_1153_, v_args2New_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, lean_box(0));
return v___x_1162_;
}
else
{
lean_object* v___x_1163_; 
lean_inc(v_a_1158_);
lean_inc_ref(v_a_1157_);
lean_inc(v_a_1156_);
lean_inc_ref(v_a_1155_);
v___x_1163_ = lean_whnf(v_type_1152_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; 
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v___x_1163_, 1);
if (lean_obj_tag(v_a_1164_) == 7)
{
lean_object* v_binderName_1165_; lean_object* v_binderType_1166_; lean_object* v_body_1167_; lean_object* v_lctx_1168_; lean_object* v___x_1169_; uint8_t v___x_1170_; 
v_binderName_1165_ = lean_ctor_get(v_a_1164_, 0);
lean_inc(v_binderName_1165_);
v_binderType_1166_ = lean_ctor_get(v_a_1164_, 1);
lean_inc_ref(v_binderType_1166_);
v_body_1167_ = lean_ctor_get(v_a_1164_, 2);
lean_inc_ref(v_body_1167_);
lean_dec_ref_known(v_a_1164_, 3);
v_lctx_1168_ = lean_ctor_get(v_a_1155_, 2);
v___x_1169_ = lean_array_fget_borrowed(v_args1_1148_, v_i_1151_);
lean_inc(v___x_1169_);
lean_inc_ref(v_lctx_1168_);
v___x_1170_ = l_Lean_Meta_occursOrInType(v_lctx_1168_, v___x_1169_, v_resultType_1149_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; lean_object* v___f_1172_; uint8_t v___y_1174_; 
v___x_1171_ = lean_box(v_useEq_1147_);
v___f_1172_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1172_, 0, v_i_1151_);
lean_closure_set(v___f_1172_, 1, v_body_1167_);
lean_closure_set(v___f_1172_, 2, v_args2_1153_);
lean_closure_set(v___f_1172_, 3, v_args2New_1154_);
lean_closure_set(v___f_1172_, 4, v_ctorVal_1146_);
lean_closure_set(v___f_1172_, 5, v___x_1171_);
lean_closure_set(v___f_1172_, 6, v_args1_1148_);
lean_closure_set(v___f_1172_, 7, v_resultType_1149_);
lean_closure_set(v___f_1172_, 8, v_k_1150_);
if (v_useEq_1147_ == 0)
{
uint8_t v___x_1177_; 
v___x_1177_ = 1;
v___y_1174_ = v___x_1177_;
goto v___jp_1173_;
}
else
{
uint8_t v___x_1178_; 
v___x_1178_ = 0;
v___y_1174_ = v___x_1178_;
goto v___jp_1173_;
}
v___jp_1173_:
{
uint8_t v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = 0;
v___x_1176_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_binderName_1165_, v___y_1174_, v_binderType_1166_, v___f_1172_, v___x_1175_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
return v___x_1176_;
}
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
lean_dec_ref(v_binderType_1166_);
lean_dec(v_binderName_1165_);
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = lean_nat_add(v_i_1151_, v___x_1179_);
lean_dec(v_i_1151_);
v___x_1181_ = lean_expr_instantiate1(v_body_1167_, v___x_1169_);
lean_dec_ref(v_body_1167_);
lean_inc(v___x_1169_);
v___x_1182_ = lean_array_push(v_args2_1153_, v___x_1169_);
v_i_1151_ = v___x_1180_;
v_type_1152_ = v___x_1181_;
v_args2_1153_ = v___x_1182_;
goto _start;
}
}
else
{
lean_object* v_toConstantVal_1184_; lean_object* v_name_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
lean_dec(v_a_1164_);
lean_dec_ref(v_args2New_1154_);
lean_dec_ref(v_args2_1153_);
lean_dec(v_i_1151_);
lean_dec_ref(v_k_1150_);
lean_dec_ref(v_resultType_1149_);
lean_dec_ref(v_args1_1148_);
v_toConstantVal_1184_ = lean_ctor_get(v_ctorVal_1146_, 0);
lean_inc_ref(v_toConstantVal_1184_);
lean_dec_ref(v_ctorVal_1146_);
v_name_1185_ = lean_ctor_get(v_toConstantVal_1184_, 0);
lean_inc(v_name_1185_);
lean_dec_ref(v_toConstantVal_1184_);
v___x_1186_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1);
v___x_1187_ = l_Lean_MessageData_ofName(v_name_1185_);
v___x_1188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
v___x_1189_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_1190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1188_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
v___x_1191_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_1190_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
return v___x_1191_;
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_args2New_1154_);
lean_dec_ref(v_args2_1153_);
lean_dec(v_i_1151_);
lean_dec_ref(v_k_1150_);
lean_dec_ref(v_resultType_1149_);
lean_dec_ref(v_args1_1148_);
lean_dec_ref(v_ctorVal_1146_);
v_a_1192_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1163_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1163_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___lam__0(lean_object* v_i_1200_, lean_object* v_body_1201_, lean_object* v_args2_1202_, lean_object* v_args2New_1203_, lean_object* v_ctorVal_1204_, uint8_t v_useEq_1205_, lean_object* v_args1_1206_, lean_object* v_resultType_1207_, lean_object* v_k_1208_, lean_object* v_arg2_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1215_ = lean_unsigned_to_nat(1u);
v___x_1216_ = lean_nat_add(v_i_1200_, v___x_1215_);
v___x_1217_ = lean_expr_instantiate1(v_body_1201_, v_arg2_1209_);
lean_inc_ref(v_arg2_1209_);
v___x_1218_ = lean_array_push(v_args2_1202_, v_arg2_1209_);
v___x_1219_ = lean_array_push(v_args2New_1203_, v_arg2_1209_);
v___x_1220_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1204_, v_useEq_1205_, v_args1_1206_, v_resultType_1207_, v_k_1208_, v___x_1216_, v___x_1217_, v___x_1218_, v___x_1219_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed(lean_object* v_ctorVal_1221_, lean_object* v_useEq_1222_, lean_object* v_args1_1223_, lean_object* v_resultType_1224_, lean_object* v_k_1225_, lean_object* v_i_1226_, lean_object* v_type_1227_, lean_object* v_args2_1228_, lean_object* v_args2New_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
uint8_t v_useEq_boxed_1235_; lean_object* v_res_1236_; 
v_useEq_boxed_1235_ = lean_unbox(v_useEq_1222_);
v_res_1236_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1221_, v_useEq_boxed_1235_, v_args1_1223_, v_resultType_1224_, v_k_1225_, v_i_1226_, v_type_1227_, v_args2_1228_, v_args2New_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_);
lean_dec(v_a_1233_);
lean_dec_ref(v_a_1232_);
lean_dec(v_a_1231_);
lean_dec_ref(v_a_1230_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(lean_object* v_00_u03b1_1237_, lean_object* v_msg_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___boxed(lean_object* v_00_u03b1_1245_, lean_object* v_msg_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1(v_00_u03b1_1245_, v_msg_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter___redArg(lean_object* v_____x_1253_, lean_object* v_h__1_1254_, lean_object* v_h__2_1255_){
_start:
{
if (lean_obj_tag(v_____x_1253_) == 7)
{
lean_object* v_binderName_1256_; lean_object* v_binderType_1257_; lean_object* v_body_1258_; uint8_t v_binderInfo_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
lean_dec(v_h__2_1255_);
v_binderName_1256_ = lean_ctor_get(v_____x_1253_, 0);
lean_inc(v_binderName_1256_);
v_binderType_1257_ = lean_ctor_get(v_____x_1253_, 1);
lean_inc_ref(v_binderType_1257_);
v_body_1258_ = lean_ctor_get(v_____x_1253_, 2);
lean_inc_ref(v_body_1258_);
v_binderInfo_1259_ = lean_ctor_get_uint8(v_____x_1253_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_____x_1253_, 3);
v___x_1260_ = lean_box(v_binderInfo_1259_);
v___x_1261_ = lean_apply_4(v_h__1_1254_, v_binderName_1256_, v_binderType_1257_, v_body_1258_, v___x_1260_);
return v___x_1261_;
}
else
{
lean_object* v___x_1262_; 
lean_dec(v_h__1_1254_);
v___x_1262_ = lean_apply_2(v_h__2_1255_, v_____x_1253_, lean_box(0));
return v___x_1262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_match__1_splitter(lean_object* v_motive_1263_, lean_object* v_____x_1264_, lean_object* v_h__1_1265_, lean_object* v_h__2_1266_){
_start:
{
if (lean_obj_tag(v_____x_1264_) == 7)
{
lean_object* v_binderName_1267_; lean_object* v_binderType_1268_; lean_object* v_body_1269_; uint8_t v_binderInfo_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_dec(v_h__2_1266_);
v_binderName_1267_ = lean_ctor_get(v_____x_1264_, 0);
lean_inc(v_binderName_1267_);
v_binderType_1268_ = lean_ctor_get(v_____x_1264_, 1);
lean_inc_ref(v_binderType_1268_);
v_body_1269_ = lean_ctor_get(v_____x_1264_, 2);
lean_inc_ref(v_body_1269_);
v_binderInfo_1270_ = lean_ctor_get_uint8(v_____x_1264_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_____x_1264_, 3);
v___x_1271_ = lean_box(v_binderInfo_1270_);
v___x_1272_ = lean_apply_4(v_h__1_1265_, v_binderName_1267_, v_binderType_1268_, v_body_1269_, v___x_1271_);
return v___x_1272_;
}
else
{
lean_object* v___x_1273_; 
lean_dec(v_h__1_1265_);
v___x_1273_ = lean_apply_2(v_h__2_1266_, v_____x_1264_, lean_box(0));
return v___x_1273_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(lean_object* v_k_1274_, lean_object* v_b_1275_, lean_object* v_c_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
lean_object* v___x_1282_; 
lean_inc(v___y_1280_);
lean_inc_ref(v___y_1279_);
lean_inc(v___y_1278_);
lean_inc_ref(v___y_1277_);
v___x_1282_ = lean_apply_7(v_k_1274_, v_b_1275_, v_c_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, lean_box(0));
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed(lean_object* v_k_1283_, lean_object* v_b_1284_, lean_object* v_c_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0(v_k_1283_, v_b_1284_, v_c_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(lean_object* v_type_1292_, lean_object* v_k_1293_, uint8_t v_cleanupAnnotations_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v___f_1300_; uint8_t v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___f_1300_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1300_, 0, v_k_1293_);
v___x_1301_ = 0;
v___x_1302_ = lean_box(0);
v___x_1303_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1301_, v___x_1302_, v_type_1292_, v___f_1300_, v_cleanupAnnotations_1294_, v___x_1301_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_a_1304_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
v_a_1312_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1303_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1303_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___boxed(lean_object* v_type_1320_, lean_object* v_k_1321_, lean_object* v_cleanupAnnotations_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1328_; lean_object* v_res_1329_; 
v_cleanupAnnotations_boxed_1328_ = lean_unbox(v_cleanupAnnotations_1322_);
v_res_1329_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1320_, v_k_1321_, v_cleanupAnnotations_boxed_1328_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(lean_object* v_00_u03b1_1330_, lean_object* v_type_1331_, lean_object* v_k_1332_, uint8_t v_cleanupAnnotations_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1331_, v_k_1332_, v_cleanupAnnotations_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___boxed(lean_object* v_00_u03b1_1340_, lean_object* v_type_1341_, lean_object* v_k_1342_, lean_object* v_cleanupAnnotations_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1349_; lean_object* v_res_1350_; 
v_cleanupAnnotations_boxed_1349_ = lean_unbox(v_cleanupAnnotations_1343_);
v_res_1350_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2(v_00_u03b1_1340_, v_type_1341_, v_k_1342_, v_cleanupAnnotations_boxed_1349_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(lean_object* v_type_1351_, lean_object* v_maxFVars_x3f_1352_, lean_object* v_k_1353_, uint8_t v_cleanupAnnotations_1354_, uint8_t v_whnfType_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v___f_1361_; lean_object* v___x_1362_; 
v___f_1361_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1361_, 0, v_k_1353_);
v___x_1362_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1351_, v_maxFVars_x3f_1352_, v___f_1361_, v_cleanupAnnotations_1354_, v_whnfType_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
v_a_1371_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1362_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1362_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg___boxed(lean_object* v_type_1379_, lean_object* v_maxFVars_x3f_1380_, lean_object* v_k_1381_, lean_object* v_cleanupAnnotations_1382_, lean_object* v_whnfType_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1389_; uint8_t v_whnfType_boxed_1390_; lean_object* v_res_1391_; 
v_cleanupAnnotations_boxed_1389_ = lean_unbox(v_cleanupAnnotations_1382_);
v_whnfType_boxed_1390_ = lean_unbox(v_whnfType_1383_);
v_res_1391_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_type_1379_, v_maxFVars_x3f_1380_, v_k_1381_, v_cleanupAnnotations_boxed_1389_, v_whnfType_boxed_1390_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(lean_object* v_00_u03b1_1392_, lean_object* v_type_1393_, lean_object* v_maxFVars_x3f_1394_, lean_object* v_k_1395_, uint8_t v_cleanupAnnotations_1396_, uint8_t v_whnfType_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_type_1393_, v_maxFVars_x3f_1394_, v_k_1395_, v_cleanupAnnotations_1396_, v_whnfType_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___boxed(lean_object* v_00_u03b1_1404_, lean_object* v_type_1405_, lean_object* v_maxFVars_x3f_1406_, lean_object* v_k_1407_, lean_object* v_cleanupAnnotations_1408_, lean_object* v_whnfType_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1415_; uint8_t v_whnfType_boxed_1416_; lean_object* v_res_1417_; 
v_cleanupAnnotations_boxed_1415_ = lean_unbox(v_cleanupAnnotations_1408_);
v_whnfType_boxed_1416_ = lean_unbox(v_whnfType_1409_);
v_res_1417_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3(v_00_u03b1_1404_, v_type_1405_, v_maxFVars_x3f_1406_, v_k_1407_, v_cleanupAnnotations_boxed_1415_, v_whnfType_boxed_1416_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(lean_object* v_name_1418_, lean_object* v_us_1419_, lean_object* v_params_1420_, lean_object* v_args1_1421_, uint8_t v_useEq_1422_, lean_object* v_args2_1423_, lean_object* v_args2New_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1430_ = l_Lean_mkConst(v_name_1418_, v_us_1419_);
v___x_1431_ = l_Lean_mkAppN(v___x_1430_, v_params_1420_);
lean_inc_ref(v___x_1431_);
v___x_1432_ = l_Lean_mkAppN(v___x_1431_, v_args1_1421_);
v___x_1433_ = l_Lean_mkAppN(v___x_1431_, v_args2_1423_);
v___x_1434_ = l_Lean_Meta_mkEq(v___x_1432_, v___x_1433_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; uint8_t v___x_1436_; lean_object* v_result_1438_; lean_object* v___y_1439_; lean_object* v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___x_1483_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v___x_1434_, 1);
v___x_1436_ = 1;
v___x_1483_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_1421_, v_args2_1423_, v___x_1436_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1515_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1486_ = v___x_1483_;
v_isShared_1487_ = v_isSharedCheck_1515_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1483_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1515_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1488_; 
v___x_1488_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(v_a_1484_);
if (lean_obj_tag(v___x_1488_) == 1)
{
lean_del_object(v___x_1486_);
if (v_useEq_1422_ == 0)
{
lean_object* v_val_1489_; lean_object* v___x_1490_; 
v_val_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_val_1489_);
lean_dec_ref_known(v___x_1488_, 1);
v___x_1490_ = l_Lean_mkArrow(v_a_1435_, v_val_1489_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_a_1491_);
lean_dec_ref_known(v___x_1490_, 1);
v_result_1438_ = v_a_1491_;
v___y_1439_ = v___y_1425_;
v___y_1440_ = v___y_1426_;
v___y_1441_ = v___y_1427_;
v___y_1442_ = v___y_1428_;
goto v___jp_1437_;
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
v_a_1492_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1490_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1490_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
else
{
lean_object* v_val_1500_; lean_object* v___x_1501_; 
v_val_1500_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_val_1500_);
lean_dec_ref_known(v___x_1488_, 1);
v___x_1501_ = l_Lean_Meta_mkEq(v_a_1435_, v_val_1500_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v_result_1438_ = v_a_1502_;
v___y_1439_ = v___y_1425_;
v___y_1440_ = v___y_1426_;
v___y_1441_ = v___y_1427_;
v___y_1442_ = v___y_1428_;
goto v___jp_1437_;
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_a_1503_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1501_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1501_);
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
else
{
lean_object* v___x_1511_; lean_object* v___x_1513_; 
lean_dec(v___x_1488_);
lean_dec(v_a_1435_);
v___x_1511_ = lean_box(0);
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 0, v___x_1511_);
v___x_1513_ = v___x_1486_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_dec(v_a_1435_);
v_a_1516_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1483_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1483_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
v___jp_1437_:
{
uint8_t v___x_1443_; uint8_t v___x_1444_; lean_object* v___x_1445_; 
v___x_1443_ = 0;
v___x_1444_ = 1;
v___x_1445_ = l_Lean_Meta_mkForallFVars(v_args2New_1424_, v_result_1438_, v___x_1443_, v___x_1436_, v___x_1436_, v___x_1444_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1447_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_a_1446_);
lean_dec_ref_known(v___x_1445_, 1);
v___x_1447_ = l_Lean_Meta_mkForallFVars(v_args1_1421_, v_a_1446_, v___x_1443_, v___x_1436_, v___x_1436_, v___x_1444_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v_a_1448_; lean_object* v___x_1449_; 
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_a_1448_);
lean_dec_ref_known(v___x_1447_, 1);
v___x_1449_ = l_Lean_Meta_mkForallFVars(v_params_1420_, v_a_1448_, v___x_1443_, v___x_1436_, v___x_1436_, v___x_1444_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1458_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1452_ = v___x_1449_;
v_isShared_1453_ = v_isSharedCheck_1458_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1449_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1458_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1454_; lean_object* v___x_1456_; 
v___x_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_a_1450_);
if (v_isShared_1453_ == 0)
{
lean_ctor_set(v___x_1452_, 0, v___x_1454_);
v___x_1456_ = v___x_1452_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v___x_1454_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
v_a_1459_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1449_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1449_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
v_a_1467_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1447_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1447_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
v_a_1475_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1445_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1445_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
lean_dec_ref(v_args2_1423_);
v_a_1524_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1434_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1434_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed(lean_object* v_name_1532_, lean_object* v_us_1533_, lean_object* v_params_1534_, lean_object* v_args1_1535_, lean_object* v_useEq_1536_, lean_object* v_args2_1537_, lean_object* v_args2New_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
uint8_t v_useEq_boxed_1544_; lean_object* v_res_1545_; 
v_useEq_boxed_1544_ = lean_unbox(v_useEq_1536_);
v_res_1545_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0(v_name_1532_, v_us_1533_, v_params_1534_, v_args1_1535_, v_useEq_boxed_1544_, v_args2_1537_, v_args2New_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec_ref(v_args2New_1538_);
lean_dec_ref(v_args1_1535_);
lean_dec_ref(v_params_1534_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(size_t v_sz_1546_, size_t v_i_1547_, lean_object* v_bs_1548_){
_start:
{
uint8_t v___x_1549_; 
v___x_1549_ = lean_usize_dec_lt(v_i_1547_, v_sz_1546_);
if (v___x_1549_ == 0)
{
return v_bs_1548_;
}
else
{
lean_object* v_v_1550_; lean_object* v___x_1551_; lean_object* v_bs_x27_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; size_t v___x_1557_; size_t v___x_1558_; lean_object* v___x_1559_; 
v_v_1550_ = lean_array_uget(v_bs_1548_, v_i_1547_);
v___x_1551_ = lean_unsigned_to_nat(0u);
v_bs_x27_1552_ = lean_array_uset(v_bs_1548_, v_i_1547_, v___x_1551_);
v___x_1553_ = l_Lean_Expr_fvarId_x21(v_v_1550_);
lean_dec(v_v_1550_);
v___x_1554_ = 1;
v___x_1555_ = lean_box(v___x_1554_);
v___x_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1553_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = ((size_t)1ULL);
v___x_1558_ = lean_usize_add(v_i_1547_, v___x_1557_);
v___x_1559_ = lean_array_uset(v_bs_x27_1552_, v_i_1547_, v___x_1556_);
v_i_1547_ = v___x_1558_;
v_bs_1548_ = v___x_1559_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1___boxed(lean_object* v_sz_1561_, lean_object* v_i_1562_, lean_object* v_bs_1563_){
_start:
{
size_t v_sz_boxed_1564_; size_t v_i_boxed_1565_; lean_object* v_res_1566_; 
v_sz_boxed_1564_ = lean_unbox_usize(v_sz_1561_);
lean_dec(v_sz_1561_);
v_i_boxed_1565_ = lean_unbox_usize(v_i_1562_);
lean_dec(v_i_1562_);
v_res_1566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(v_sz_boxed_1564_, v_i_boxed_1565_, v_bs_1563_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(lean_object* v_bs_1567_, lean_object* v_k_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_1567_, v_k_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
v_a_1583_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1574_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1574_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_bs_1591_, lean_object* v_k_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v_bs_1591_, v_k_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec_ref(v_bs_1591_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(lean_object* v_bs_1599_, lean_object* v_k_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
size_t v_sz_1606_; size_t v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v_sz_1606_ = lean_array_size(v_bs_1599_);
v___x_1607_ = ((size_t)0ULL);
v___x_1608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__1(v_sz_1606_, v___x_1607_, v_bs_1599_);
v___x_1609_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v___x_1608_, v_k_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
lean_dec_ref(v___x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg___boxed(lean_object* v_bs_1610_, lean_object* v_k_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_bs_1610_, v_k_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(lean_object* v_name_1618_, lean_object* v_us_1619_, lean_object* v_params_1620_, uint8_t v_useEq_1621_, lean_object* v_ctorVal_1622_, lean_object* v_type_1623_, lean_object* v_args1_1624_, lean_object* v_resultType_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v___x_1631_; lean_object* v___f_1632_; 
v___x_1631_ = lean_box(v_useEq_1621_);
lean_inc_ref(v_args1_1624_);
lean_inc_ref(v_params_1620_);
v___f_1632_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1632_, 0, v_name_1618_);
lean_closure_set(v___f_1632_, 1, v_us_1619_);
lean_closure_set(v___f_1632_, 2, v_params_1620_);
lean_closure_set(v___f_1632_, 3, v_args1_1624_);
lean_closure_set(v___f_1632_, 4, v___x_1631_);
if (v_useEq_1621_ == 0)
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1633_ = l_Array_append___redArg(v_params_1620_, v_args1_1624_);
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1635_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_1636_ = lean_box(v_useEq_1621_);
v___x_1637_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___boxed), 14, 9);
lean_closure_set(v___x_1637_, 0, v_ctorVal_1622_);
lean_closure_set(v___x_1637_, 1, v___x_1636_);
lean_closure_set(v___x_1637_, 2, v_args1_1624_);
lean_closure_set(v___x_1637_, 3, v_resultType_1625_);
lean_closure_set(v___x_1637_, 4, v___f_1632_);
lean_closure_set(v___x_1637_, 5, v___x_1634_);
lean_closure_set(v___x_1637_, 6, v_type_1623_);
lean_closure_set(v___x_1637_, 7, v___x_1635_);
lean_closure_set(v___x_1637_, 8, v___x_1635_);
v___x_1638_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v___x_1633_, v___x_1637_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
lean_dec_ref(v_params_1620_);
v___x_1639_ = lean_unsigned_to_nat(0u);
v___x_1640_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_1641_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2(v_ctorVal_1622_, v_useEq_1621_, v_args1_1624_, v_resultType_1625_, v___f_1632_, v___x_1639_, v_type_1623_, v___x_1640_, v___x_1640_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed(lean_object* v_name_1642_, lean_object* v_us_1643_, lean_object* v_params_1644_, lean_object* v_useEq_1645_, lean_object* v_ctorVal_1646_, lean_object* v_type_1647_, lean_object* v_args1_1648_, lean_object* v_resultType_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
uint8_t v_useEq_boxed_1655_; lean_object* v_res_1656_; 
v_useEq_boxed_1655_ = lean_unbox(v_useEq_1645_);
v_res_1656_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1(v_name_1642_, v_us_1643_, v_params_1644_, v_useEq_boxed_1655_, v_ctorVal_1646_, v_type_1647_, v_args1_1648_, v_resultType_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v___y_1651_);
lean_dec_ref(v___y_1650_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(lean_object* v_name_1657_, lean_object* v_us_1658_, uint8_t v_useEq_1659_, lean_object* v_ctorVal_1660_, lean_object* v_params_1661_, lean_object* v_type_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
lean_object* v___x_1668_; lean_object* v___f_1669_; uint8_t v___x_1670_; lean_object* v___x_1671_; 
v___x_1668_ = lean_box(v_useEq_1659_);
lean_inc_ref(v_type_1662_);
v___f_1669_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__1___boxed), 13, 6);
lean_closure_set(v___f_1669_, 0, v_name_1657_);
lean_closure_set(v___f_1669_, 1, v_us_1658_);
lean_closure_set(v___f_1669_, 2, v_params_1661_);
lean_closure_set(v___f_1669_, 3, v___x_1668_);
lean_closure_set(v___f_1669_, 4, v_ctorVal_1660_);
lean_closure_set(v___f_1669_, 5, v_type_1662_);
v___x_1670_ = 0;
v___x_1671_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_type_1662_, v___f_1669_, v___x_1670_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed(lean_object* v_name_1672_, lean_object* v_us_1673_, lean_object* v_useEq_1674_, lean_object* v_ctorVal_1675_, lean_object* v_params_1676_, lean_object* v_type_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
uint8_t v_useEq_boxed_1683_; lean_object* v_res_1684_; 
v_useEq_boxed_1683_ = lean_unbox(v_useEq_1674_);
v_res_1684_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2(v_name_1672_, v_us_1673_, v_useEq_boxed_1683_, v_ctorVal_1675_, v_params_1676_, v_type_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(lean_object* v_a_1685_, lean_object* v_a_1686_){
_start:
{
if (lean_obj_tag(v_a_1685_) == 0)
{
lean_object* v___x_1687_; 
v___x_1687_ = l_List_reverse___redArg(v_a_1686_);
return v___x_1687_;
}
else
{
lean_object* v_head_1688_; lean_object* v_tail_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1698_; 
v_head_1688_ = lean_ctor_get(v_a_1685_, 0);
v_tail_1689_ = lean_ctor_get(v_a_1685_, 1);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_a_1685_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1691_ = v_a_1685_;
v_isShared_1692_ = v_isSharedCheck_1698_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_tail_1689_);
lean_inc(v_head_1688_);
lean_dec(v_a_1685_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1698_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1693_ = l_Lean_mkLevelParam(v_head_1688_);
if (v_isShared_1692_ == 0)
{
lean_ctor_set(v___x_1691_, 1, v_a_1686_);
lean_ctor_set(v___x_1691_, 0, v___x_1693_);
v___x_1695_ = v___x_1691_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1693_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_a_1686_);
v___x_1695_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
v_a_1685_ = v_tail_1689_;
v_a_1686_ = v___x_1695_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(lean_object* v_ctorVal_1699_, uint8_t v_useEq_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v_toConstantVal_1706_; lean_object* v_numParams_1707_; lean_object* v_name_1708_; lean_object* v_levelParams_1709_; lean_object* v_type_1710_; lean_object* v___x_1711_; lean_object* v_us_1712_; lean_object* v___x_1713_; lean_object* v___f_1714_; lean_object* v___x_1715_; 
v_toConstantVal_1706_ = lean_ctor_get(v_ctorVal_1699_, 0);
v_numParams_1707_ = lean_ctor_get(v_ctorVal_1699_, 3);
lean_inc(v_numParams_1707_);
v_name_1708_ = lean_ctor_get(v_toConstantVal_1706_, 0);
lean_inc(v_name_1708_);
v_levelParams_1709_ = lean_ctor_get(v_toConstantVal_1706_, 1);
v_type_1710_ = lean_ctor_get(v_toConstantVal_1706_, 2);
lean_inc_ref(v_type_1710_);
v___x_1711_ = lean_box(0);
lean_inc(v_levelParams_1709_);
v_us_1712_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_1709_, v___x_1711_);
v___x_1713_ = lean_box(v_useEq_1700_);
v___f_1714_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1714_, 0, v_name_1708_);
lean_closure_set(v___f_1714_, 1, v_us_1712_);
lean_closure_set(v___f_1714_, 2, v___x_1713_);
lean_closure_set(v___f_1714_, 3, v_ctorVal_1699_);
v___x_1715_ = l_Lean_Meta_elimOptParam(v_type_1710_, v_a_1703_, v_a_1704_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v___x_1717_; uint8_t v___x_1718_; lean_object* v___x_1719_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1715_, 1);
v___x_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1717_, 0, v_numParams_1707_);
v___x_1718_ = 0;
v___x_1719_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__3___redArg(v_a_1716_, v___x_1717_, v___f_1714_, v___x_1718_, v___x_1718_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
return v___x_1719_;
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1727_; 
lean_dec_ref(v___f_1714_);
lean_dec(v_numParams_1707_);
v_a_1720_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1722_ = v___x_1715_;
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1715_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1727_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f___boxed(lean_object* v_ctorVal_1728_, lean_object* v_useEq_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_){
_start:
{
uint8_t v_useEq_boxed_1735_; lean_object* v_res_1736_; 
v_useEq_boxed_1735_ = lean_unbox(v_useEq_1729_);
v_res_1736_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_1728_, v_useEq_boxed_1735_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_);
lean_dec(v_a_1733_);
lean_dec_ref(v_a_1732_);
lean_dec(v_a_1731_);
lean_dec_ref(v_a_1730_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(lean_object* v_00_u03b1_1737_, lean_object* v_bs_1738_, lean_object* v_k_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___redArg(v_bs_1738_, v_k_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1746_, lean_object* v_bs_1747_, lean_object* v_k_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Lean_Meta_withNewBinderInfos___at___00Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1_spec__2(v_00_u03b1_1746_, v_bs_1747_, v_k_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec_ref(v_bs_1747_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(lean_object* v_00_u03b1_1755_, lean_object* v_bs_1756_, lean_object* v_k_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_bs_1756_, v_k_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___boxed(lean_object* v_00_u03b1_1764_, lean_object* v_bs_1765_, lean_object* v_k_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1(v_00_u03b1_1764_, v_bs_1765_, v_k_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec_ref(v___y_1767_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(lean_object* v_ctorVal_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_){
_start:
{
uint8_t v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = 0;
v___x_1780_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_1773_, v___x_1779_, v_a_1774_, v_a_1775_, v_a_1776_, v_a_1777_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f___boxed(lean_object* v_ctorVal_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_1781_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_);
lean_dec(v_a_1785_);
lean_dec_ref(v_a_1784_);
lean_dec(v_a_1783_);
lean_dec_ref(v_a_1782_);
return v_res_1787_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1(void){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__0));
v___x_1790_ = l_Lean_stringToMessageData(v___x_1789_);
return v___x_1790_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__2));
v___x_1793_ = l_Lean_stringToMessageData(v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(lean_object* v_ctorName_1794_){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1795_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__1);
v___x_1796_ = l_Lean_MessageData_ofName(v_ctorName_1794_);
v___x_1797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1795_);
lean_ctor_set(v___x_1797_, 1, v___x_1796_);
v___x_1798_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader___closed__3);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(lean_object* v_ctorName_1800_, lean_object* v_mvarId_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1807_ = l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(v_ctorName_1800_);
v___x_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1808_, 0, v_mvarId_1801_);
v___x_1809_ = l_Lean_indentD(v___x_1808_);
v___x_1810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1807_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_1810_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg___boxed(lean_object* v_ctorName_1812_, lean_object* v_mvarId_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1812_, v_mvarId_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec(v_a_1815_);
lean_dec_ref(v_a_1814_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(lean_object* v_00_u03b1_1820_, lean_object* v_ctorName_1821_, lean_object* v_mvarId_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1821_, v_mvarId_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___boxed(lean_object* v_00_u03b1_1829_, lean_object* v_ctorName_1830_, lean_object* v_mvarId_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure(v_00_u03b1_1829_, v_ctorName_1830_, v_mvarId_1831_, v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_);
lean_dec(v_a_1835_);
lean_dec_ref(v_a_1834_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(lean_object* v_ctorName_1838_, lean_object* v_as_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
if (lean_obj_tag(v_as_1839_) == 0)
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
lean_dec(v_ctorName_1838_);
v___x_1845_ = lean_box(0);
v___x_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
return v___x_1846_;
}
else
{
lean_object* v_head_1847_; lean_object* v_tail_1848_; lean_object* v___x_1849_; 
v_head_1847_ = lean_ctor_get(v_as_1839_, 0);
lean_inc_n(v_head_1847_, 2);
v_tail_1848_ = lean_ctor_get(v_as_1839_, 1);
lean_inc(v_tail_1848_);
lean_dec_ref_known(v_as_1839_, 2);
v___x_1849_ = l_Lean_MVarId_assumptionCore(v_head_1847_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; uint8_t v___x_1851_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1849_, 1);
v___x_1851_ = lean_unbox(v_a_1850_);
lean_dec(v_a_1850_);
if (v___x_1851_ == 0)
{
lean_object* v___x_1852_; 
lean_dec(v_tail_1848_);
v___x_1852_ = l___private_Lean_Meta_Injective_0__Lean_Meta_throwInjectiveTheoremFailure___redArg(v_ctorName_1838_, v_head_1847_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_);
return v___x_1852_;
}
else
{
lean_dec(v_head_1847_);
v_as_1839_ = v_tail_1848_;
goto _start;
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
lean_dec(v_tail_1848_);
lean_dec(v_head_1847_);
lean_dec(v_ctorName_1838_);
v_a_1854_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1849_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1849_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0___boxed(lean_object* v_ctorName_1862_, lean_object* v_as_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(v_ctorName_1862_, v_as_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(lean_object* v_mvarId_1870_, lean_object* v_ctorName_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v___x_1877_; 
v___x_1877_ = l_Lean_MVarId_splitAndCore(v_mvarId_1870_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1879_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_a_1878_);
lean_dec_ref_known(v___x_1877_, 1);
v___x_1879_ = l_List_forM___at___00__private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption_spec__0(v_ctorName_1871_, v_a_1878_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
return v___x_1879_;
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec(v_ctorName_1871_);
v_a_1880_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1877_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1877_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption___boxed(lean_object* v_mvarId_1888_, lean_object* v_ctorName_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_mvarId_1888_, v_ctorName_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_);
lean_dec(v_a_1893_);
lean_dec_ref(v_a_1892_);
lean_dec(v_a_1891_);
lean_dec_ref(v_a_1890_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(lean_object* v_msg_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v___f_1903_; lean_object* v___x_982__overap_1904_; lean_object* v___x_1905_; 
v___f_1903_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___closed__0));
v___x_982__overap_1904_ = lean_panic_fn_borrowed(v___f_1903_, v_msg_1897_);
lean_inc(v___y_1901_);
lean_inc_ref(v___y_1900_);
lean_inc(v___y_1899_);
lean_inc_ref(v___y_1898_);
v___x_1905_ = lean_apply_5(v___x_982__overap_1904_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, lean_box(0));
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0___boxed(lean_object* v_msg_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(v_msg_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
return v_res_1912_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1913_; double v___x_1914_; 
v___x_1913_ = lean_unsigned_to_nat(0u);
v___x_1914_ = lean_float_of_nat(v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(lean_object* v_cls_1918_, lean_object* v_msg_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_ref_1925_; lean_object* v___x_1926_; lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1972_; 
v_ref_1925_ = lean_ctor_get(v___y_1922_, 2);
v___x_1926_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1972_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1972_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1931_; lean_object* v_traceState_1932_; lean_object* v_env_1933_; lean_object* v_nextMacroScope_1934_; lean_object* v_ngen_1935_; lean_object* v_auxDeclNGen_1936_; lean_object* v_cache_1937_; lean_object* v_recordedDeps_1938_; lean_object* v_messages_1939_; lean_object* v_infoState_1940_; lean_object* v_snapshotTasks_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1971_; 
v___x_1931_ = lean_st_ref_take(v___y_1923_);
v_traceState_1932_ = lean_ctor_get(v___x_1931_, 4);
v_env_1933_ = lean_ctor_get(v___x_1931_, 0);
v_nextMacroScope_1934_ = lean_ctor_get(v___x_1931_, 1);
v_ngen_1935_ = lean_ctor_get(v___x_1931_, 2);
v_auxDeclNGen_1936_ = lean_ctor_get(v___x_1931_, 3);
v_cache_1937_ = lean_ctor_get(v___x_1931_, 5);
v_recordedDeps_1938_ = lean_ctor_get(v___x_1931_, 6);
v_messages_1939_ = lean_ctor_get(v___x_1931_, 7);
v_infoState_1940_ = lean_ctor_get(v___x_1931_, 8);
v_snapshotTasks_1941_ = lean_ctor_get(v___x_1931_, 9);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1943_ = v___x_1931_;
v_isShared_1944_ = v_isSharedCheck_1971_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_snapshotTasks_1941_);
lean_inc(v_infoState_1940_);
lean_inc(v_messages_1939_);
lean_inc(v_recordedDeps_1938_);
lean_inc(v_cache_1937_);
lean_inc(v_traceState_1932_);
lean_inc(v_auxDeclNGen_1936_);
lean_inc(v_ngen_1935_);
lean_inc(v_nextMacroScope_1934_);
lean_inc(v_env_1933_);
lean_dec(v___x_1931_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1971_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
uint64_t v_tid_1945_; lean_object* v_traces_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1970_; 
v_tid_1945_ = lean_ctor_get_uint64(v_traceState_1932_, sizeof(void*)*1);
v_traces_1946_ = lean_ctor_get(v_traceState_1932_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_traceState_1932_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1948_ = v_traceState_1932_;
v_isShared_1949_ = v_isSharedCheck_1970_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_traces_1946_);
lean_dec(v_traceState_1932_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1970_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; double v___x_1952_; uint8_t v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1961_; 
v___x_1950_ = lean_box(0);
v___x_1951_ = lean_box(0);
v___x_1952_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0);
v___x_1953_ = 0;
v___x_1954_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_1955_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1955_, 0, v_cls_1918_);
lean_ctor_set(v___x_1955_, 1, v___x_1951_);
lean_ctor_set(v___x_1955_, 2, v___x_1954_);
lean_ctor_set_float(v___x_1955_, sizeof(void*)*3, v___x_1952_);
lean_ctor_set_float(v___x_1955_, sizeof(void*)*3 + 8, v___x_1952_);
lean_ctor_set_uint8(v___x_1955_, sizeof(void*)*3 + 16, v___x_1953_);
v___x_1956_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__2));
v___x_1957_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1955_);
lean_ctor_set(v___x_1957_, 1, v_a_1927_);
lean_ctor_set(v___x_1957_, 2, v___x_1956_);
lean_inc(v_ref_1925_);
v___x_1958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1958_, 0, v_ref_1925_);
lean_ctor_set(v___x_1958_, 1, v___x_1957_);
v___x_1959_ = l_Lean_PersistentArray_push___redArg(v_traces_1946_, v___x_1958_);
if (v_isShared_1949_ == 0)
{
lean_ctor_set(v___x_1948_, 0, v___x_1959_);
v___x_1961_ = v___x_1948_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1959_);
lean_ctor_set_uint64(v_reuseFailAlloc_1969_, sizeof(void*)*1, v_tid_1945_);
v___x_1961_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
lean_object* v___x_1963_; 
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 4, v___x_1961_);
v___x_1963_ = v___x_1943_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_env_1933_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_nextMacroScope_1934_);
lean_ctor_set(v_reuseFailAlloc_1968_, 2, v_ngen_1935_);
lean_ctor_set(v_reuseFailAlloc_1968_, 3, v_auxDeclNGen_1936_);
lean_ctor_set(v_reuseFailAlloc_1968_, 4, v___x_1961_);
lean_ctor_set(v_reuseFailAlloc_1968_, 5, v_cache_1937_);
lean_ctor_set(v_reuseFailAlloc_1968_, 6, v_recordedDeps_1938_);
lean_ctor_set(v_reuseFailAlloc_1968_, 7, v_messages_1939_);
lean_ctor_set(v_reuseFailAlloc_1968_, 8, v_infoState_1940_);
lean_ctor_set(v_reuseFailAlloc_1968_, 9, v_snapshotTasks_1941_);
v___x_1963_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1964_ = lean_st_ref_put(v___y_1923_, v___x_1963_);
if (v_isShared_1930_ == 0)
{
lean_ctor_set(v___x_1929_, 0, v___x_1950_);
v___x_1966_ = v___x_1929_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1950_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___boxed(lean_object* v_cls_1973_, lean_object* v_msg_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_1973_, v_msg_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
return v_res_1980_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3(void){
_start:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1984_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2));
v___x_1985_ = lean_unsigned_to_nat(30u);
v___x_1986_ = lean_unsigned_to_nat(96u);
v___x_1987_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__1));
v___x_1988_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__0));
v___x_1989_ = l_mkPanicMessageWithDecl(v___x_1988_, v___x_1987_, v___x_1986_, v___x_1985_, v___x_1984_);
return v___x_1989_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9(void){
_start:
{
lean_object* v_cls_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v_cls_1998_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_1999_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__8));
v___x_2000_ = l_Lean_Name_append(v___x_1999_, v_cls_1998_);
return v___x_2000_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11(void){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__10));
v___x_2003_ = l_Lean_stringToMessageData(v___x_2002_);
return v___x_2003_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13(void){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__12));
v___x_2006_ = l_Lean_stringToMessageData(v___x_2005_);
return v___x_2006_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15(void){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__14));
v___x_2009_ = l_Lean_stringToMessageData(v___x_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(lean_object* v_ctorName_2010_, lean_object* v_mvarId_2011_, lean_object* v_h_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_){
_start:
{
lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v___y_2021_; lean_object* v___y_2022_; lean_object* v_toCold_2038_; lean_object* v_options_2039_; uint8_t v_hasTrace_2040_; 
v_toCold_2038_ = lean_ctor_get(v_a_2015_, 0);
v_options_2039_ = lean_ctor_get(v_toCold_2038_, 2);
v_hasTrace_2040_ = lean_ctor_get_uint8(v_options_2039_, sizeof(void*)*1);
if (v_hasTrace_2040_ == 0)
{
v___y_2019_ = v_a_2013_;
v___y_2020_ = v_a_2014_;
v___y_2021_ = v_a_2015_;
v___y_2022_ = v_a_2016_;
goto v___jp_2018_;
}
else
{
lean_object* v_inheritedTraceOptions_2041_; lean_object* v_cls_2042_; lean_object* v___x_2043_; uint8_t v___x_2044_; 
v_inheritedTraceOptions_2041_ = lean_ctor_get(v_toCold_2038_, 11);
v_cls_2042_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_2043_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_2044_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2041_, v_options_2039_, v___x_2043_);
if (v___x_2044_ == 0)
{
v___y_2019_ = v_a_2013_;
v___y_2020_ = v_a_2014_;
v___y_2021_ = v_a_2015_;
v___y_2022_ = v_a_2016_;
goto v___jp_2018_;
}
else
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2045_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__11);
lean_inc(v_ctorName_2010_);
v___x_2046_ = l_Lean_MessageData_ofName(v_ctorName_2010_);
v___x_2047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2045_);
lean_ctor_set(v___x_2047_, 1, v___x_2046_);
v___x_2048_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__13);
v___x_2049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2047_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
lean_inc(v_h_2012_);
v___x_2050_ = l_Lean_mkFVar(v_h_2012_);
v___x_2051_ = l_Lean_MessageData_ofExpr(v___x_2050_);
v___x_2052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2049_);
lean_ctor_set(v___x_2052_, 1, v___x_2051_);
v___x_2053_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__15);
v___x_2054_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2052_);
lean_ctor_set(v___x_2054_, 1, v___x_2053_);
lean_inc(v_mvarId_2011_);
v___x_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2055_, 0, v_mvarId_2011_);
v___x_2056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2054_);
lean_ctor_set(v___x_2056_, 1, v___x_2055_);
v___x_2057_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2042_, v___x_2056_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_dec_ref_known(v___x_2057_, 1);
v___y_2019_ = v_a_2013_;
v___y_2020_ = v_a_2014_;
v___y_2021_ = v_a_2015_;
v___y_2022_ = v_a_2016_;
goto v___jp_2018_;
}
else
{
lean_dec(v_h_2012_);
lean_dec(v_mvarId_2011_);
lean_dec(v_ctorName_2010_);
return v___x_2057_;
}
}
}
v___jp_2018_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_box(0);
v___x_2024_ = l_Lean_Meta_injection(v_mvarId_2011_, v_h_2012_, v___x_2023_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v_a_2025_; 
v_a_2025_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_a_2025_);
lean_dec_ref_known(v___x_2024_, 1);
if (lean_obj_tag(v_a_2025_) == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
lean_dec(v_ctorName_2010_);
v___x_2026_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__3);
v___x_2027_ = l_panic___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__0(v___x_2026_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_);
return v___x_2027_;
}
else
{
lean_object* v_mvarId_2028_; lean_object* v___x_2029_; 
v_mvarId_2028_ = lean_ctor_get(v_a_2025_, 0);
lean_inc(v_mvarId_2028_);
lean_dec_ref_known(v_a_2025_, 3);
v___x_2029_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_mvarId_2028_, v_ctorName_2010_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_);
return v___x_2029_;
}
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
lean_dec(v_ctorName_2010_);
v_a_2030_ = lean_ctor_get(v___x_2024_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2024_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2024_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___boxed(lean_object* v_ctorName_2058_, lean_object* v_mvarId_2059_, lean_object* v_h_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(v_ctorName_2058_, v_mvarId_2059_, v_h_2060_, v_a_2061_, v_a_2062_, v_a_2063_, v_a_2064_);
lean_dec(v_a_2064_);
lean_dec_ref(v_a_2063_);
lean_dec(v_a_2062_);
lean_dec_ref(v_a_2061_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(lean_object* v_type_2067_, lean_object* v_k_2068_, uint8_t v_cleanupAnnotations_2069_, uint8_t v_whnfType_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v___f_2076_; lean_object* v___x_2077_; 
v___f_2076_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2076_, 0, v_k_2068_);
v___x_2077_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_2067_, v___f_2076_, v_cleanupAnnotations_2069_, v_whnfType_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_2077_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2077_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
v_a_2086_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2077_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2077_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg___boxed(lean_object* v_type_2094_, lean_object* v_k_2095_, lean_object* v_cleanupAnnotations_2096_, lean_object* v_whnfType_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2103_; uint8_t v_whnfType_boxed_2104_; lean_object* v_res_2105_; 
v_cleanupAnnotations_boxed_2103_ = lean_unbox(v_cleanupAnnotations_2096_);
v_whnfType_boxed_2104_ = lean_unbox(v_whnfType_2097_);
v_res_2105_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_type_2094_, v_k_2095_, v_cleanupAnnotations_boxed_2103_, v_whnfType_boxed_2104_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(lean_object* v_00_u03b1_2106_, lean_object* v_type_2107_, lean_object* v_k_2108_, uint8_t v_cleanupAnnotations_2109_, uint8_t v_whnfType_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_type_2107_, v_k_2108_, v_cleanupAnnotations_2109_, v_whnfType_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___boxed(lean_object* v_00_u03b1_2117_, lean_object* v_type_2118_, lean_object* v_k_2119_, lean_object* v_cleanupAnnotations_2120_, lean_object* v_whnfType_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2127_; uint8_t v_whnfType_boxed_2128_; lean_object* v_res_2129_; 
v_cleanupAnnotations_boxed_2127_ = lean_unbox(v_cleanupAnnotations_2120_);
v_whnfType_boxed_2128_ = lean_unbox(v_whnfType_2121_);
v_res_2129_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0(v_00_u03b1_2117_, v_type_2118_, v_k_2119_, v_cleanupAnnotations_boxed_2127_, v_whnfType_boxed_2128_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(lean_object* v___x_2130_, lean_object* v_ctorName_2131_, lean_object* v_xs_2132_, lean_object* v_type_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = lean_box(0);
v___x_2140_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_2133_, v___x_2139_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
v___x_2142_ = l_Lean_Expr_mvarId_x21(v_a_2141_);
v___x_2143_ = lean_array_get_size(v_xs_2132_);
v___x_2144_ = lean_unsigned_to_nat(1u);
v___x_2145_ = lean_nat_sub(v___x_2143_, v___x_2144_);
v___x_2146_ = lean_array_get_borrowed(v___x_2130_, v_xs_2132_, v___x_2145_);
lean_dec(v___x_2145_);
v___x_2147_ = l_Lean_Expr_fvarId_x21(v___x_2146_);
v___x_2148_ = l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq(v_ctorName_2131_, v___x_2142_, v___x_2147_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
if (lean_obj_tag(v___x_2148_) == 0)
{
uint8_t v___x_2149_; uint8_t v___x_2150_; uint8_t v___x_2151_; lean_object* v___x_2152_; 
lean_dec_ref_known(v___x_2148_, 1);
v___x_2149_ = 0;
v___x_2150_ = 1;
v___x_2151_ = 1;
v___x_2152_ = l_Lean_Meta_mkLambdaFVars(v_xs_2132_, v_a_2141_, v___x_2149_, v___x_2150_, v___x_2149_, v___x_2150_, v___x_2151_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
return v___x_2152_;
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
lean_dec(v_a_2141_);
v_a_2153_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_2148_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_2148_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
else
{
lean_dec(v_ctorName_2131_);
return v___x_2140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed(lean_object* v___x_2161_, lean_object* v_ctorName_2162_, lean_object* v_xs_2163_, lean_object* v_type_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0(v___x_2161_, v_ctorName_2162_, v_xs_2163_, v_type_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v_xs_2163_);
lean_dec_ref(v___x_2161_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(lean_object* v_ctorName_2171_, lean_object* v_targetType_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_){
_start:
{
lean_object* v___x_2178_; lean_object* v___f_2179_; uint8_t v___x_2180_; lean_object* v___x_2181_; 
v___x_2178_ = l_Lean_instInhabitedExpr;
v___f_2179_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2179_, 0, v___x_2178_);
lean_closure_set(v___f_2179_, 1, v_ctorName_2171_);
v___x_2180_ = 0;
v___x_2181_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_targetType_2172_, v___f_2179_, v___x_2180_, v___x_2180_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue___boxed(lean_object* v_ctorName_2182_, lean_object* v_targetType_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_ctorName_2182_, v_targetType_2183_, v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_);
lean_dec(v_a_2187_);
lean_dec_ref(v_a_2186_);
lean_dec(v_a_2185_);
lean_dec_ref(v_a_2184_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheoremNameFor(lean_object* v_ctorName_2193_){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2194_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheoremNameFor___closed__1));
v___x_2195_ = l_Lean_Name_append(v_ctorName_2193_, v___x_2194_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(lean_object* v_e_2196_, lean_object* v___y_2197_){
_start:
{
uint8_t v___x_2199_; 
v___x_2199_ = l_Lean_Expr_hasMVar(v_e_2196_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; 
v___x_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_e_2196_);
return v___x_2200_;
}
else
{
lean_object* v___x_2201_; lean_object* v_mctx_2202_; lean_object* v___x_2203_; lean_object* v_fst_2204_; lean_object* v_snd_2205_; lean_object* v___x_2206_; lean_object* v_cache_2207_; lean_object* v_zetaDeltaFVarIds_2208_; lean_object* v_postponed_2209_; lean_object* v_diag_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2219_; 
v___x_2201_ = lean_st_ref_get(v___y_2197_);
v_mctx_2202_ = lean_ctor_get(v___x_2201_, 0);
lean_inc_ref(v_mctx_2202_);
lean_dec(v___x_2201_);
v___x_2203_ = l_Lean_instantiateMVarsCore(v_mctx_2202_, v_e_2196_);
v_fst_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_fst_2204_);
v_snd_2205_ = lean_ctor_get(v___x_2203_, 1);
lean_inc(v_snd_2205_);
lean_dec_ref(v___x_2203_);
v___x_2206_ = lean_st_ref_take(v___y_2197_);
v_cache_2207_ = lean_ctor_get(v___x_2206_, 1);
v_zetaDeltaFVarIds_2208_ = lean_ctor_get(v___x_2206_, 2);
v_postponed_2209_ = lean_ctor_get(v___x_2206_, 3);
v_diag_2210_ = lean_ctor_get(v___x_2206_, 4);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2219_ == 0)
{
lean_object* v_unused_2220_; 
v_unused_2220_ = lean_ctor_get(v___x_2206_, 0);
lean_dec(v_unused_2220_);
v___x_2212_ = v___x_2206_;
v_isShared_2213_ = v_isSharedCheck_2219_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_diag_2210_);
lean_inc(v_postponed_2209_);
lean_inc(v_zetaDeltaFVarIds_2208_);
lean_inc(v_cache_2207_);
lean_dec(v___x_2206_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2219_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v_snd_2205_);
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_snd_2205_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v_cache_2207_);
lean_ctor_set(v_reuseFailAlloc_2218_, 2, v_zetaDeltaFVarIds_2208_);
lean_ctor_set(v_reuseFailAlloc_2218_, 3, v_postponed_2209_);
lean_ctor_set(v_reuseFailAlloc_2218_, 4, v_diag_2210_);
v___x_2215_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2216_ = lean_st_ref_put(v___y_2197_, v___x_2215_);
v___x_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2217_, 0, v_fst_2204_);
return v___x_2217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg___boxed(lean_object* v_e_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v_res_2224_; 
v_res_2224_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_e_2221_, v___y_2222_);
lean_dec(v___y_2222_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(lean_object* v_e_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v___x_2231_; 
v___x_2231_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_e_2225_, v___y_2227_);
return v___x_2231_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___boxed(lean_object* v_e_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0(v_e_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
return v_res_2238_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2239_ = lean_unsigned_to_nat(32u);
v___x_2240_ = lean_mk_empty_array_with_capacity(v___x_2239_);
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
return v___x_2241_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2242_ = ((size_t)5ULL);
v___x_2243_ = lean_unsigned_to_nat(0u);
v___x_2244_ = lean_unsigned_to_nat(32u);
v___x_2245_ = lean_mk_empty_array_with_capacity(v___x_2244_);
v___x_2246_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__0);
v___x_2247_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
lean_ctor_set(v___x_2247_, 1, v___x_2245_);
lean_ctor_set(v___x_2247_, 2, v___x_2243_);
lean_ctor_set(v___x_2247_, 3, v___x_2243_);
lean_ctor_set_usize(v___x_2247_, 4, v___x_2242_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(lean_object* v___y_2248_){
_start:
{
lean_object* v___x_2250_; lean_object* v_traceState_2251_; lean_object* v_traces_2252_; lean_object* v___x_2253_; lean_object* v_traceState_2254_; lean_object* v_env_2255_; lean_object* v_nextMacroScope_2256_; lean_object* v_ngen_2257_; lean_object* v_auxDeclNGen_2258_; lean_object* v_cache_2259_; lean_object* v_recordedDeps_2260_; lean_object* v_messages_2261_; lean_object* v_infoState_2262_; lean_object* v_snapshotTasks_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2282_; 
v___x_2250_ = lean_st_ref_get(v___y_2248_);
v_traceState_2251_ = lean_ctor_get(v___x_2250_, 4);
lean_inc_ref(v_traceState_2251_);
lean_dec(v___x_2250_);
v_traces_2252_ = lean_ctor_get(v_traceState_2251_, 0);
lean_inc_ref(v_traces_2252_);
lean_dec_ref(v_traceState_2251_);
v___x_2253_ = lean_st_ref_take(v___y_2248_);
v_traceState_2254_ = lean_ctor_get(v___x_2253_, 4);
v_env_2255_ = lean_ctor_get(v___x_2253_, 0);
v_nextMacroScope_2256_ = lean_ctor_get(v___x_2253_, 1);
v_ngen_2257_ = lean_ctor_get(v___x_2253_, 2);
v_auxDeclNGen_2258_ = lean_ctor_get(v___x_2253_, 3);
v_cache_2259_ = lean_ctor_get(v___x_2253_, 5);
v_recordedDeps_2260_ = lean_ctor_get(v___x_2253_, 6);
v_messages_2261_ = lean_ctor_get(v___x_2253_, 7);
v_infoState_2262_ = lean_ctor_get(v___x_2253_, 8);
v_snapshotTasks_2263_ = lean_ctor_get(v___x_2253_, 9);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2265_ = v___x_2253_;
v_isShared_2266_ = v_isSharedCheck_2282_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_snapshotTasks_2263_);
lean_inc(v_infoState_2262_);
lean_inc(v_messages_2261_);
lean_inc(v_recordedDeps_2260_);
lean_inc(v_cache_2259_);
lean_inc(v_traceState_2254_);
lean_inc(v_auxDeclNGen_2258_);
lean_inc(v_ngen_2257_);
lean_inc(v_nextMacroScope_2256_);
lean_inc(v_env_2255_);
lean_dec(v___x_2253_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2282_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
uint64_t v_tid_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2280_; 
v_tid_2267_ = lean_ctor_get_uint64(v_traceState_2254_, sizeof(void*)*1);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_traceState_2254_);
if (v_isSharedCheck_2280_ == 0)
{
lean_object* v_unused_2281_; 
v_unused_2281_ = lean_ctor_get(v_traceState_2254_, 0);
lean_dec(v_unused_2281_);
v___x_2269_ = v_traceState_2254_;
v_isShared_2270_ = v_isSharedCheck_2280_;
goto v_resetjp_2268_;
}
else
{
lean_dec(v_traceState_2254_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2280_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; lean_object* v___x_2273_; 
v___x_2271_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___closed__1);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v___x_2271_);
v___x_2273_ = v___x_2269_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2271_);
lean_ctor_set_uint64(v_reuseFailAlloc_2279_, sizeof(void*)*1, v_tid_2267_);
v___x_2273_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_object* v___x_2275_; 
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 4, v___x_2273_);
v___x_2275_ = v___x_2265_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_env_2255_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v_nextMacroScope_2256_);
lean_ctor_set(v_reuseFailAlloc_2278_, 2, v_ngen_2257_);
lean_ctor_set(v_reuseFailAlloc_2278_, 3, v_auxDeclNGen_2258_);
lean_ctor_set(v_reuseFailAlloc_2278_, 4, v___x_2273_);
lean_ctor_set(v_reuseFailAlloc_2278_, 5, v_cache_2259_);
lean_ctor_set(v_reuseFailAlloc_2278_, 6, v_recordedDeps_2260_);
lean_ctor_set(v_reuseFailAlloc_2278_, 7, v_messages_2261_);
lean_ctor_set(v_reuseFailAlloc_2278_, 8, v_infoState_2262_);
lean_ctor_set(v_reuseFailAlloc_2278_, 9, v_snapshotTasks_2263_);
v___x_2275_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2276_ = lean_st_ref_put(v___y_2248_, v___x_2275_);
v___x_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2277_, 0, v_traces_2252_);
return v___x_2277_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg___boxed(lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2283_);
lean_dec(v___y_2283_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v___y_2289_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___boxed(lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1(v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
return v_res_2297_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(lean_object* v_opts_2298_, lean_object* v_opt_2299_){
_start:
{
lean_object* v_name_2300_; lean_object* v_defValue_2301_; lean_object* v_map_2302_; lean_object* v___x_2303_; 
v_name_2300_ = lean_ctor_get(v_opt_2299_, 0);
v_defValue_2301_ = lean_ctor_get(v_opt_2299_, 1);
v_map_2302_ = lean_ctor_get(v_opts_2298_, 0);
v___x_2303_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2302_, v_name_2300_);
if (lean_obj_tag(v___x_2303_) == 0)
{
uint8_t v___x_2304_; 
v___x_2304_ = lean_unbox(v_defValue_2301_);
return v___x_2304_;
}
else
{
lean_object* v_val_2305_; 
v_val_2305_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_val_2305_);
lean_dec_ref_known(v___x_2303_, 1);
if (lean_obj_tag(v_val_2305_) == 1)
{
uint8_t v_v_2306_; 
v_v_2306_ = lean_ctor_get_uint8(v_val_2305_, 0);
lean_dec_ref_known(v_val_2305_, 0);
return v_v_2306_;
}
else
{
uint8_t v___x_2307_; 
lean_dec(v_val_2305_);
v___x_2307_ = lean_unbox(v_defValue_2301_);
return v___x_2307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2___boxed(lean_object* v_opts_2308_, lean_object* v_opt_2309_){
_start:
{
uint8_t v_res_2310_; lean_object* v_r_2311_; 
v_res_2310_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2308_, v_opt_2309_);
lean_dec_ref(v_opt_2309_);
lean_dec_ref(v_opts_2308_);
v_r_2311_ = lean_box(v_res_2310_);
return v_r_2311_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__0));
v___x_2314_ = l_Lean_stringToMessageData(v___x_2313_);
return v___x_2314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(lean_object* v_name_2315_, lean_object* v_x_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2322_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___closed__1);
v___x_2323_ = l_Lean_MessageData_ofName(v_name_2315_);
v___x_2324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2322_);
lean_ctor_set(v___x_2324_, 1, v___x_2323_);
v___x_2325_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_2326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2324_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed(lean_object* v_name_2328_, lean_object* v_x_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0(v_name_2328_, v_x_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec_ref(v_x_2329_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(lean_object* v_name_2336_, lean_object* v_val_2337_, lean_object* v_name_2338_, lean_object* v_levelParams_2339_, uint8_t v___x_2340_, lean_object* v_____r_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
lean_object* v___x_2347_; 
lean_inc_ref(v_val_2337_);
v___x_2347_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2336_, v_val_2337_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v_a_2348_; lean_object* v___x_2349_; lean_object* v_a_2350_; lean_object* v___x_2351_; lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2364_; 
v_a_2348_ = lean_ctor_get(v___x_2347_, 0);
lean_inc(v_a_2348_);
lean_dec_ref_known(v___x_2347_, 1);
v___x_2349_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2337_, v___y_2343_);
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_a_2350_);
lean_dec_ref(v___x_2349_);
v___x_2351_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2348_, v___y_2343_);
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2364_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2364_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
lean_inc(v_name_2338_);
v___x_2356_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2356_, 0, v_name_2338_);
lean_ctor_set(v___x_2356_, 1, v_levelParams_2339_);
lean_ctor_set(v___x_2356_, 2, v_a_2350_);
v___x_2357_ = lean_box(0);
v___x_2358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2358_, 0, v_name_2338_);
lean_ctor_set(v___x_2358_, 1, v___x_2357_);
v___x_2359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2356_);
lean_ctor_set(v___x_2359_, 1, v_a_2352_);
lean_ctor_set(v___x_2359_, 2, v___x_2358_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set_tag(v___x_2354_, 2);
lean_ctor_set(v___x_2354_, 0, v___x_2359_);
v___x_2361_ = v___x_2354_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2359_);
v___x_2361_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2362_; 
v___x_2362_ = l_Lean_addDecl(v___x_2361_, v___x_2340_, v___y_2344_, v___y_2345_);
return v___x_2362_;
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec(v_levelParams_2339_);
lean_dec(v_name_2338_);
lean_dec_ref(v_val_2337_);
v_a_2365_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2347_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2347_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1___boxed(lean_object* v_name_2373_, lean_object* v_val_2374_, lean_object* v_name_2375_, lean_object* v_levelParams_2376_, lean_object* v___x_2377_, lean_object* v_____r_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
uint8_t v___x_12482__boxed_2384_; lean_object* v_res_2385_; 
v___x_12482__boxed_2384_ = lean_unbox(v___x_2377_);
v_res_2385_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2373_, v_val_2374_, v_name_2375_, v_levelParams_2376_, v___x_12482__boxed_2384_, v_____r_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(lean_object* v_name_2386_, lean_object* v_val_2387_, lean_object* v_name_2388_, lean_object* v_levelParams_2389_, lean_object* v_____r_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_){
_start:
{
lean_object* v___x_2396_; 
lean_inc_ref(v_val_2387_);
v___x_2396_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2386_, v_val_2387_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2398_; lean_object* v_a_2399_; lean_object* v___x_2400_; lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2414_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_a_2397_);
lean_dec_ref_known(v___x_2396_, 1);
v___x_2398_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2387_, v___y_2392_);
v_a_2399_ = lean_ctor_get(v___x_2398_, 0);
lean_inc(v_a_2399_);
lean_dec_ref(v___x_2398_);
v___x_2400_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2397_, v___y_2392_);
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2403_ = v___x_2400_;
v_isShared_2404_ = v_isSharedCheck_2414_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2400_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2414_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2410_; 
lean_inc(v_name_2388_);
v___x_2405_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2405_, 0, v_name_2388_);
lean_ctor_set(v___x_2405_, 1, v_levelParams_2389_);
lean_ctor_set(v___x_2405_, 2, v_a_2399_);
v___x_2406_ = lean_box(0);
v___x_2407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2407_, 0, v_name_2388_);
lean_ctor_set(v___x_2407_, 1, v___x_2406_);
v___x_2408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2405_);
lean_ctor_set(v___x_2408_, 1, v_a_2401_);
lean_ctor_set(v___x_2408_, 2, v___x_2407_);
if (v_isShared_2404_ == 0)
{
lean_ctor_set_tag(v___x_2403_, 2);
lean_ctor_set(v___x_2403_, 0, v___x_2408_);
v___x_2410_ = v___x_2403_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v___x_2408_);
v___x_2410_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
uint8_t v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = 0;
v___x_2412_ = l_Lean_addDecl(v___x_2410_, v___x_2411_, v___y_2393_, v___y_2394_);
return v___x_2412_;
}
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
lean_dec(v_levelParams_2389_);
lean_dec(v_name_2388_);
lean_dec_ref(v_val_2387_);
v_a_2415_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2396_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2396_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2___boxed(lean_object* v_name_2423_, lean_object* v_val_2424_, lean_object* v_name_2425_, lean_object* v_levelParams_2426_, lean_object* v_____r_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2423_, v_val_2424_, v_name_2425_, v_levelParams_2426_, v_____r_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(size_t v_sz_2434_, size_t v_i_2435_, lean_object* v_bs_2436_){
_start:
{
uint8_t v___x_2437_; 
v___x_2437_ = lean_usize_dec_lt(v_i_2435_, v_sz_2434_);
if (v___x_2437_ == 0)
{
return v_bs_2436_;
}
else
{
lean_object* v_v_2438_; lean_object* v_msg_2439_; lean_object* v___x_2440_; lean_object* v_bs_x27_2441_; size_t v___x_2442_; size_t v___x_2443_; lean_object* v___x_2444_; 
v_v_2438_ = lean_array_uget_borrowed(v_bs_2436_, v_i_2435_);
v_msg_2439_ = lean_ctor_get(v_v_2438_, 1);
lean_inc_ref(v_msg_2439_);
v___x_2440_ = lean_unsigned_to_nat(0u);
v_bs_x27_2441_ = lean_array_uset(v_bs_2436_, v_i_2435_, v___x_2440_);
v___x_2442_ = ((size_t)1ULL);
v___x_2443_ = lean_usize_add(v_i_2435_, v___x_2442_);
v___x_2444_ = lean_array_uset(v_bs_x27_2441_, v_i_2435_, v_msg_2439_);
v_i_2435_ = v___x_2443_;
v_bs_2436_ = v___x_2444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_2446_, lean_object* v_i_2447_, lean_object* v_bs_2448_){
_start:
{
size_t v_sz_boxed_2449_; size_t v_i_boxed_2450_; lean_object* v_res_2451_; 
v_sz_boxed_2449_ = lean_unbox_usize(v_sz_2446_);
lean_dec(v_sz_2446_);
v_i_boxed_2450_ = lean_unbox_usize(v_i_2447_);
lean_dec(v_i_2447_);
v_res_2451_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(v_sz_boxed_2449_, v_i_boxed_2450_, v_bs_2448_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(lean_object* v_oldTraces_2452_, lean_object* v_data_2453_, lean_object* v_ref_2454_, lean_object* v_msg_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_toCold_2461_; lean_object* v_currRecDepth_2462_; lean_object* v_ref_2463_; uint16_t v_optionFlags_2464_; uint8_t v_suppressElabErrors_2465_; uint8_t v_checkDeprecated_2466_; uint8_t v_isRecordingDeps_2467_; lean_object* v_ref_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v_traceState_2471_; lean_object* v_traces_2472_; lean_object* v___x_2473_; size_t v_sz_2474_; size_t v___x_2475_; lean_object* v___x_2476_; lean_object* v_msg_2477_; lean_object* v___x_2478_; lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2517_; 
v_toCold_2461_ = lean_ctor_get(v___y_2458_, 0);
v_currRecDepth_2462_ = lean_ctor_get(v___y_2458_, 1);
v_ref_2463_ = lean_ctor_get(v___y_2458_, 2);
v_optionFlags_2464_ = lean_ctor_get_uint16(v___y_2458_, sizeof(void*)*3);
v_suppressElabErrors_2465_ = lean_ctor_get_uint8(v___y_2458_, sizeof(void*)*3 + 2);
v_checkDeprecated_2466_ = lean_ctor_get_uint8(v___y_2458_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2467_ = lean_ctor_get_uint8(v___y_2458_, sizeof(void*)*3 + 4);
v_ref_2468_ = l_Lean_replaceRef(v_ref_2454_, v_ref_2463_);
lean_inc(v_currRecDepth_2462_);
lean_inc_ref(v_toCold_2461_);
v___x_2469_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2469_, 0, v_toCold_2461_);
lean_ctor_set(v___x_2469_, 1, v_currRecDepth_2462_);
lean_ctor_set(v___x_2469_, 2, v_ref_2468_);
lean_ctor_set_uint16(v___x_2469_, sizeof(void*)*3, v_optionFlags_2464_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3 + 2, v_suppressElabErrors_2465_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3 + 3, v_checkDeprecated_2466_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3 + 4, v_isRecordingDeps_2467_);
v___x_2470_ = lean_st_ref_get(v___y_2459_);
v_traceState_2471_ = lean_ctor_get(v___x_2470_, 4);
lean_inc_ref(v_traceState_2471_);
lean_dec(v___x_2470_);
v_traces_2472_ = lean_ctor_get(v_traceState_2471_, 0);
lean_inc_ref(v_traces_2472_);
lean_dec_ref(v_traceState_2471_);
v___x_2473_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2472_);
lean_dec_ref(v_traces_2472_);
v_sz_2474_ = lean_array_size(v___x_2473_);
v___x_2475_ = ((size_t)0ULL);
v___x_2476_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3_spec__4(v_sz_2474_, v___x_2475_, v___x_2473_);
v_msg_2477_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2477_, 0, v_data_2453_);
lean_ctor_set(v_msg_2477_, 1, v_msg_2455_);
lean_ctor_set(v_msg_2477_, 2, v___x_2476_);
v___x_2478_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1_spec__1(v_msg_2477_, v___y_2456_, v___y_2457_, v___x_2469_, v___y_2459_);
lean_dec_ref_known(v___x_2469_, 3);
v_a_2479_ = lean_ctor_get(v___x_2478_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2478_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2481_ = v___x_2478_;
v_isShared_2482_ = v_isSharedCheck_2517_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2478_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2517_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2483_; lean_object* v_traceState_2484_; lean_object* v_env_2485_; lean_object* v_nextMacroScope_2486_; lean_object* v_ngen_2487_; lean_object* v_auxDeclNGen_2488_; lean_object* v_cache_2489_; lean_object* v_recordedDeps_2490_; lean_object* v_messages_2491_; lean_object* v_infoState_2492_; lean_object* v_snapshotTasks_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2516_; 
v___x_2483_ = lean_st_ref_take(v___y_2459_);
v_traceState_2484_ = lean_ctor_get(v___x_2483_, 4);
v_env_2485_ = lean_ctor_get(v___x_2483_, 0);
v_nextMacroScope_2486_ = lean_ctor_get(v___x_2483_, 1);
v_ngen_2487_ = lean_ctor_get(v___x_2483_, 2);
v_auxDeclNGen_2488_ = lean_ctor_get(v___x_2483_, 3);
v_cache_2489_ = lean_ctor_get(v___x_2483_, 5);
v_recordedDeps_2490_ = lean_ctor_get(v___x_2483_, 6);
v_messages_2491_ = lean_ctor_get(v___x_2483_, 7);
v_infoState_2492_ = lean_ctor_get(v___x_2483_, 8);
v_snapshotTasks_2493_ = lean_ctor_get(v___x_2483_, 9);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2495_ = v___x_2483_;
v_isShared_2496_ = v_isSharedCheck_2516_;
goto v_resetjp_2494_;
}
else
{
lean_inc(v_snapshotTasks_2493_);
lean_inc(v_infoState_2492_);
lean_inc(v_messages_2491_);
lean_inc(v_recordedDeps_2490_);
lean_inc(v_cache_2489_);
lean_inc(v_traceState_2484_);
lean_inc(v_auxDeclNGen_2488_);
lean_inc(v_ngen_2487_);
lean_inc(v_nextMacroScope_2486_);
lean_inc(v_env_2485_);
lean_dec(v___x_2483_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2516_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
uint64_t v_tid_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2514_; 
v_tid_2497_ = lean_ctor_get_uint64(v_traceState_2484_, sizeof(void*)*1);
v_isSharedCheck_2514_ = !lean_is_exclusive(v_traceState_2484_);
if (v_isSharedCheck_2514_ == 0)
{
lean_object* v_unused_2515_; 
v_unused_2515_ = lean_ctor_get(v_traceState_2484_, 0);
lean_dec(v_unused_2515_);
v___x_2499_ = v_traceState_2484_;
v_isShared_2500_ = v_isSharedCheck_2514_;
goto v_resetjp_2498_;
}
else
{
lean_dec(v_traceState_2484_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2514_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2505_; 
v___x_2501_ = lean_box(0);
v___x_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2502_, 0, v_ref_2454_);
lean_ctor_set(v___x_2502_, 1, v_a_2479_);
v___x_2503_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2452_, v___x_2502_);
if (v_isShared_2500_ == 0)
{
lean_ctor_set(v___x_2499_, 0, v___x_2503_);
v___x_2505_ = v___x_2499_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v___x_2503_);
lean_ctor_set_uint64(v_reuseFailAlloc_2513_, sizeof(void*)*1, v_tid_2497_);
v___x_2505_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
lean_object* v___x_2507_; 
if (v_isShared_2496_ == 0)
{
lean_ctor_set(v___x_2495_, 4, v___x_2505_);
v___x_2507_ = v___x_2495_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_env_2485_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_nextMacroScope_2486_);
lean_ctor_set(v_reuseFailAlloc_2512_, 2, v_ngen_2487_);
lean_ctor_set(v_reuseFailAlloc_2512_, 3, v_auxDeclNGen_2488_);
lean_ctor_set(v_reuseFailAlloc_2512_, 4, v___x_2505_);
lean_ctor_set(v_reuseFailAlloc_2512_, 5, v_cache_2489_);
lean_ctor_set(v_reuseFailAlloc_2512_, 6, v_recordedDeps_2490_);
lean_ctor_set(v_reuseFailAlloc_2512_, 7, v_messages_2491_);
lean_ctor_set(v_reuseFailAlloc_2512_, 8, v_infoState_2492_);
lean_ctor_set(v_reuseFailAlloc_2512_, 9, v_snapshotTasks_2493_);
v___x_2507_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
lean_object* v___x_2508_; lean_object* v___x_2510_; 
v___x_2508_ = lean_st_ref_put(v___y_2459_, v___x_2507_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 0, v___x_2501_);
v___x_2510_ = v___x_2481_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2501_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3___boxed(lean_object* v_oldTraces_2518_, lean_object* v_data_2519_, lean_object* v_ref_2520_, lean_object* v_msg_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(v_oldTraces_2518_, v_data_2519_, v_ref_2520_, v_msg_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(lean_object* v_opts_2528_, lean_object* v_opt_2529_){
_start:
{
lean_object* v_name_2530_; lean_object* v_defValue_2531_; lean_object* v_map_2532_; lean_object* v___x_2533_; 
v_name_2530_ = lean_ctor_get(v_opt_2529_, 0);
v_defValue_2531_ = lean_ctor_get(v_opt_2529_, 1);
v_map_2532_ = lean_ctor_get(v_opts_2528_, 0);
v___x_2533_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2532_, v_name_2530_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_inc(v_defValue_2531_);
return v_defValue_2531_;
}
else
{
lean_object* v_val_2534_; 
v_val_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_val_2534_);
lean_dec_ref_known(v___x_2533_, 1);
if (lean_obj_tag(v_val_2534_) == 3)
{
lean_object* v_v_2535_; 
v_v_2535_ = lean_ctor_get(v_val_2534_, 0);
lean_inc(v_v_2535_);
lean_dec_ref_known(v_val_2534_, 1);
return v_v_2535_;
}
else
{
lean_dec(v_val_2534_);
lean_inc(v_defValue_2531_);
return v_defValue_2531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6___boxed(lean_object* v_opts_2536_, lean_object* v_opt_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2536_, v_opt_2537_);
lean_dec_ref(v_opt_2537_);
lean_dec_ref(v_opts_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(lean_object* v_e_2539_){
_start:
{
if (lean_obj_tag(v_e_2539_) == 0)
{
uint8_t v___x_2540_; 
v___x_2540_ = 2;
return v___x_2540_;
}
else
{
uint8_t v___x_2541_; 
v___x_2541_ = 0;
return v___x_2541_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5___boxed(lean_object* v_e_2542_){
_start:
{
uint8_t v_res_2543_; lean_object* v_r_2544_; 
v_res_2543_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(v_e_2542_);
lean_dec_ref(v_e_2542_);
v_r_2544_ = lean_box(v_res_2543_);
return v_r_2544_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(lean_object* v_x_2545_){
_start:
{
if (lean_obj_tag(v_x_2545_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
v_a_2547_ = lean_ctor_get(v_x_2545_, 0);
v_isSharedCheck_2554_ = !lean_is_exclusive(v_x_2545_);
if (v_isSharedCheck_2554_ == 0)
{
v___x_2549_ = v_x_2545_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v_x_2545_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
lean_ctor_set_tag(v___x_2549_, 1);
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2547_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2562_; 
v_a_2555_ = lean_ctor_get(v_x_2545_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v_x_2545_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2557_ = v_x_2545_;
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v_x_2545_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2562_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2560_; 
if (v_isShared_2558_ == 0)
{
lean_ctor_set_tag(v___x_2557_, 0);
v___x_2560_ = v___x_2557_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2555_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg___boxed(lean_object* v_x_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_x_2563_);
return v_res_2565_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2567_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__0));
v___x_2568_ = l_Lean_stringToMessageData(v___x_2567_);
return v___x_2568_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2569_; double v___x_2570_; 
v___x_2569_ = lean_unsigned_to_nat(1000u);
v___x_2570_ = lean_float_of_nat(v___x_2569_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(lean_object* v_cls_2571_, uint8_t v_collapsed_2572_, lean_object* v_tag_2573_, lean_object* v_opts_2574_, uint8_t v_clsEnabled_2575_, lean_object* v_oldTraces_2576_, lean_object* v_msg_2577_, lean_object* v_resStartStop_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v_fst_2584_; lean_object* v_snd_2585_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v_data_2589_; lean_object* v_fst_2592_; lean_object* v_snd_2593_; lean_object* v___x_2594_; uint8_t v___x_2595_; lean_object* v___y_2597_; lean_object* v_a_2598_; uint8_t v___y_2613_; double v___y_2645_; 
v_fst_2584_ = lean_ctor_get(v_resStartStop_2578_, 0);
lean_inc(v_fst_2584_);
v_snd_2585_ = lean_ctor_get(v_resStartStop_2578_, 1);
lean_inc(v_snd_2585_);
lean_dec_ref(v_resStartStop_2578_);
v_fst_2592_ = lean_ctor_get(v_snd_2585_, 0);
lean_inc(v_fst_2592_);
v_snd_2593_ = lean_ctor_get(v_snd_2585_, 1);
lean_inc(v_snd_2593_);
lean_dec(v_snd_2585_);
v___x_2594_ = l_Lean_trace_profiler;
v___x_2595_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2574_, v___x_2594_);
if (v___x_2595_ == 0)
{
v___y_2613_ = v___x_2595_;
goto v___jp_2612_;
}
else
{
lean_object* v___x_2650_; uint8_t v___x_2651_; 
v___x_2650_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2651_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_opts_2574_, v___x_2650_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; lean_object* v___x_2653_; double v___x_2654_; double v___x_2655_; double v___x_2656_; 
v___x_2652_ = l_Lean_trace_profiler_threshold;
v___x_2653_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2574_, v___x_2652_);
v___x_2654_ = lean_float_of_nat(v___x_2653_);
v___x_2655_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__2);
v___x_2656_ = lean_float_div(v___x_2654_, v___x_2655_);
v___y_2645_ = v___x_2656_;
goto v___jp_2644_;
}
else
{
lean_object* v___x_2657_; lean_object* v___x_2658_; double v___x_2659_; 
v___x_2657_ = l_Lean_trace_profiler_threshold;
v___x_2658_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__6(v_opts_2574_, v___x_2657_);
v___x_2659_ = lean_float_of_nat(v___x_2658_);
v___y_2645_ = v___x_2659_;
goto v___jp_2644_;
}
}
v___jp_2586_:
{
lean_object* v___x_2590_; 
lean_inc(v___y_2587_);
v___x_2590_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__3(v_oldTraces_2576_, v_data_2589_, v___y_2587_, v___y_2588_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v___x_2591_; 
lean_dec_ref_known(v___x_2590_, 1);
v___x_2591_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_fst_2584_);
return v___x_2591_;
}
else
{
lean_dec(v_fst_2584_);
return v___x_2590_;
}
}
v___jp_2596_:
{
uint8_t v_result_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; double v___x_2602_; lean_object* v_data_2603_; 
v_result_2599_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__5(v_fst_2584_);
v___x_2600_ = lean_box(v_result_2599_);
v___x_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
v___x_2602_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__0);
lean_inc_ref(v_tag_2573_);
lean_inc_ref(v___x_2601_);
lean_inc(v_cls_2571_);
v_data_2603_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2603_, 0, v_cls_2571_);
lean_ctor_set(v_data_2603_, 1, v___x_2601_);
lean_ctor_set(v_data_2603_, 2, v_tag_2573_);
lean_ctor_set_float(v_data_2603_, sizeof(void*)*3, v___x_2602_);
lean_ctor_set_float(v_data_2603_, sizeof(void*)*3 + 8, v___x_2602_);
lean_ctor_set_uint8(v_data_2603_, sizeof(void*)*3 + 16, v_collapsed_2572_);
if (v___x_2595_ == 0)
{
lean_dec_ref_known(v___x_2601_, 1);
lean_dec(v_snd_2593_);
lean_dec(v_fst_2592_);
lean_dec_ref(v_tag_2573_);
lean_dec(v_cls_2571_);
v___y_2587_ = v___y_2597_;
v___y_2588_ = v_a_2598_;
v_data_2589_ = v_data_2603_;
goto v___jp_2586_;
}
else
{
lean_object* v_data_2604_; double v___x_2605_; double v___x_2606_; 
lean_dec_ref_known(v_data_2603_, 3);
v_data_2604_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2604_, 0, v_cls_2571_);
lean_ctor_set(v_data_2604_, 1, v___x_2601_);
lean_ctor_set(v_data_2604_, 2, v_tag_2573_);
v___x_2605_ = lean_unbox_float(v_fst_2592_);
lean_dec(v_fst_2592_);
lean_ctor_set_float(v_data_2604_, sizeof(void*)*3, v___x_2605_);
v___x_2606_ = lean_unbox_float(v_snd_2593_);
lean_dec(v_snd_2593_);
lean_ctor_set_float(v_data_2604_, sizeof(void*)*3 + 8, v___x_2606_);
lean_ctor_set_uint8(v_data_2604_, sizeof(void*)*3 + 16, v_collapsed_2572_);
v___y_2587_ = v___y_2597_;
v___y_2588_ = v_a_2598_;
v_data_2589_ = v_data_2604_;
goto v___jp_2586_;
}
}
v___jp_2607_:
{
lean_object* v_ref_2608_; lean_object* v___x_2609_; 
v_ref_2608_ = lean_ctor_get(v___y_2581_, 2);
lean_inc(v___y_2582_);
lean_inc_ref(v___y_2581_);
lean_inc(v___y_2580_);
lean_inc_ref(v___y_2579_);
lean_inc(v_fst_2584_);
v___x_2609_ = lean_apply_6(v_msg_2577_, v_fst_2584_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, lean_box(0));
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_a_2610_; 
v_a_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc(v_a_2610_);
lean_dec_ref_known(v___x_2609_, 1);
v___y_2597_ = v_ref_2608_;
v_a_2598_ = v_a_2610_;
goto v___jp_2596_;
}
else
{
lean_object* v___x_2611_; 
lean_dec_ref_known(v___x_2609_, 1);
v___x_2611_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___closed__1);
v___y_2597_ = v_ref_2608_;
v_a_2598_ = v___x_2611_;
goto v___jp_2596_;
}
}
v___jp_2612_:
{
if (v_clsEnabled_2575_ == 0)
{
if (v___y_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v_traceState_2615_; lean_object* v_env_2616_; lean_object* v_nextMacroScope_2617_; lean_object* v_ngen_2618_; lean_object* v_auxDeclNGen_2619_; lean_object* v_cache_2620_; lean_object* v_recordedDeps_2621_; lean_object* v_messages_2622_; lean_object* v_infoState_2623_; lean_object* v_snapshotTasks_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2643_; 
lean_dec(v_snd_2593_);
lean_dec(v_fst_2592_);
lean_dec_ref(v_msg_2577_);
lean_dec_ref(v_tag_2573_);
lean_dec(v_cls_2571_);
v___x_2614_ = lean_st_ref_take(v___y_2582_);
v_traceState_2615_ = lean_ctor_get(v___x_2614_, 4);
v_env_2616_ = lean_ctor_get(v___x_2614_, 0);
v_nextMacroScope_2617_ = lean_ctor_get(v___x_2614_, 1);
v_ngen_2618_ = lean_ctor_get(v___x_2614_, 2);
v_auxDeclNGen_2619_ = lean_ctor_get(v___x_2614_, 3);
v_cache_2620_ = lean_ctor_get(v___x_2614_, 5);
v_recordedDeps_2621_ = lean_ctor_get(v___x_2614_, 6);
v_messages_2622_ = lean_ctor_get(v___x_2614_, 7);
v_infoState_2623_ = lean_ctor_get(v___x_2614_, 8);
v_snapshotTasks_2624_ = lean_ctor_get(v___x_2614_, 9);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2626_ = v___x_2614_;
v_isShared_2627_ = v_isSharedCheck_2643_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_snapshotTasks_2624_);
lean_inc(v_infoState_2623_);
lean_inc(v_messages_2622_);
lean_inc(v_recordedDeps_2621_);
lean_inc(v_cache_2620_);
lean_inc(v_traceState_2615_);
lean_inc(v_auxDeclNGen_2619_);
lean_inc(v_ngen_2618_);
lean_inc(v_nextMacroScope_2617_);
lean_inc(v_env_2616_);
lean_dec(v___x_2614_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2643_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
uint64_t v_tid_2628_; lean_object* v_traces_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2642_; 
v_tid_2628_ = lean_ctor_get_uint64(v_traceState_2615_, sizeof(void*)*1);
v_traces_2629_ = lean_ctor_get(v_traceState_2615_, 0);
v_isSharedCheck_2642_ = !lean_is_exclusive(v_traceState_2615_);
if (v_isSharedCheck_2642_ == 0)
{
v___x_2631_ = v_traceState_2615_;
v_isShared_2632_ = v_isSharedCheck_2642_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_traces_2629_);
lean_dec(v_traceState_2615_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2642_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2633_; lean_object* v___x_2635_; 
v___x_2633_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2576_, v_traces_2629_);
lean_dec_ref(v_traces_2629_);
if (v_isShared_2632_ == 0)
{
lean_ctor_set(v___x_2631_, 0, v___x_2633_);
v___x_2635_ = v___x_2631_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2633_);
lean_ctor_set_uint64(v_reuseFailAlloc_2641_, sizeof(void*)*1, v_tid_2628_);
v___x_2635_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
lean_object* v___x_2637_; 
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 4, v___x_2635_);
v___x_2637_ = v___x_2626_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_env_2616_);
lean_ctor_set(v_reuseFailAlloc_2640_, 1, v_nextMacroScope_2617_);
lean_ctor_set(v_reuseFailAlloc_2640_, 2, v_ngen_2618_);
lean_ctor_set(v_reuseFailAlloc_2640_, 3, v_auxDeclNGen_2619_);
lean_ctor_set(v_reuseFailAlloc_2640_, 4, v___x_2635_);
lean_ctor_set(v_reuseFailAlloc_2640_, 5, v_cache_2620_);
lean_ctor_set(v_reuseFailAlloc_2640_, 6, v_recordedDeps_2621_);
lean_ctor_set(v_reuseFailAlloc_2640_, 7, v_messages_2622_);
lean_ctor_set(v_reuseFailAlloc_2640_, 8, v_infoState_2623_);
lean_ctor_set(v_reuseFailAlloc_2640_, 9, v_snapshotTasks_2624_);
v___x_2637_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2638_ = lean_st_ref_put(v___y_2582_, v___x_2637_);
v___x_2639_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_fst_2584_);
return v___x_2639_;
}
}
}
}
}
else
{
goto v___jp_2607_;
}
}
else
{
goto v___jp_2607_;
}
}
v___jp_2644_:
{
double v___x_2646_; double v___x_2647_; double v___x_2648_; uint8_t v___x_2649_; 
v___x_2646_ = lean_unbox_float(v_snd_2593_);
v___x_2647_ = lean_unbox_float(v_fst_2592_);
v___x_2648_ = lean_float_sub(v___x_2646_, v___x_2647_);
v___x_2649_ = lean_float_decLt(v___y_2645_, v___x_2648_);
v___y_2613_ = v___x_2649_;
goto v___jp_2612_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3___boxed(lean_object* v_cls_2660_, lean_object* v_collapsed_2661_, lean_object* v_tag_2662_, lean_object* v_opts_2663_, lean_object* v_clsEnabled_2664_, lean_object* v_oldTraces_2665_, lean_object* v_msg_2666_, lean_object* v_resStartStop_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
uint8_t v_collapsed_boxed_2673_; uint8_t v_clsEnabled_boxed_2674_; lean_object* v_res_2675_; 
v_collapsed_boxed_2673_ = lean_unbox(v_collapsed_2661_);
v_clsEnabled_boxed_2674_ = lean_unbox(v_clsEnabled_2664_);
v_res_2675_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2660_, v_collapsed_boxed_2673_, v_tag_2662_, v_opts_2663_, v_clsEnabled_boxed_2674_, v_oldTraces_2665_, v_msg_2666_, v_resStartStop_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec_ref(v_opts_2663_);
return v_res_2675_;
}
}
static double _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0(void){
_start:
{
lean_object* v___x_2676_; double v___x_2677_; 
v___x_2676_ = lean_unsigned_to_nat(1000000000u);
v___x_2677_ = lean_float_of_nat(v___x_2676_);
return v___x_2677_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2(void){
_start:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2679_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__1));
v___x_2680_ = l_Lean_stringToMessageData(v___x_2679_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(lean_object* v_ctorVal_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_){
_start:
{
lean_object* v_toConstantVal_2687_; lean_object* v_toCold_2688_; lean_object* v_options_2689_; lean_object* v_name_2690_; lean_object* v_levelParams_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2904_; 
v_toConstantVal_2687_ = lean_ctor_get(v_ctorVal_2681_, 0);
lean_inc_ref(v_toConstantVal_2687_);
v_toCold_2688_ = lean_ctor_get(v_a_2684_, 0);
v_options_2689_ = lean_ctor_get(v_toCold_2688_, 2);
v_name_2690_ = lean_ctor_get(v_toConstantVal_2687_, 0);
v_levelParams_2691_ = lean_ctor_get(v_toConstantVal_2687_, 1);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_toConstantVal_2687_);
if (v_isSharedCheck_2904_ == 0)
{
lean_object* v_unused_2905_; 
v_unused_2905_ = lean_ctor_get(v_toConstantVal_2687_, 2);
lean_dec(v_unused_2905_);
v___x_2693_ = v_toConstantVal_2687_;
v_isShared_2694_ = v_isSharedCheck_2904_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_levelParams_2691_);
lean_inc(v_name_2690_);
lean_dec(v_toConstantVal_2687_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2904_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v_inheritedTraceOptions_2695_; uint8_t v_hasTrace_2696_; lean_object* v_name_2697_; 
v_inheritedTraceOptions_2695_ = lean_ctor_get(v_toCold_2688_, 11);
v_hasTrace_2696_ = lean_ctor_get_uint8(v_options_2689_, sizeof(void*)*1);
lean_inc(v_name_2690_);
v_name_2697_ = l_Lean_Meta_mkInjectiveTheoremNameFor(v_name_2690_);
if (v_hasTrace_2696_ == 0)
{
lean_object* v___x_2698_; 
v___x_2698_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2736_; 
v_a_2699_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2701_ = v___x_2698_;
v_isShared_2702_ = v_isSharedCheck_2736_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2698_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2736_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
if (lean_obj_tag(v_a_2699_) == 1)
{
lean_object* v_val_2703_; lean_object* v___x_2704_; 
lean_del_object(v___x_2701_);
v_val_2703_ = lean_ctor_get(v_a_2699_, 0);
lean_inc_n(v_val_2703_, 2);
lean_dec_ref_known(v_a_2699_, 1);
v___x_2704_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2690_, v_val_2703_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2704_) == 0)
{
lean_object* v_a_2705_; lean_object* v___x_2706_; lean_object* v_a_2707_; lean_object* v___x_2708_; lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2723_; 
v_a_2705_ = lean_ctor_get(v___x_2704_, 0);
lean_inc(v_a_2705_);
lean_dec_ref_known(v___x_2704_, 1);
v___x_2706_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2703_, v_a_2683_);
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_a_2707_);
lean_dec_ref(v___x_2706_);
v___x_2708_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2705_, v_a_2683_);
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2711_ = v___x_2708_;
v_isShared_2712_ = v_isSharedCheck_2723_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2708_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2723_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
lean_inc(v_name_2697_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 2, v_a_2707_);
lean_ctor_set(v___x_2693_, 0, v_name_2697_);
v___x_2714_ = v___x_2693_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_name_2697_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v_levelParams_2691_);
lean_ctor_set(v_reuseFailAlloc_2722_, 2, v_a_2707_);
v___x_2714_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2715_ = lean_box(0);
v___x_2716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2716_, 0, v_name_2697_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v___x_2717_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2714_);
lean_ctor_set(v___x_2717_, 1, v_a_2709_);
lean_ctor_set(v___x_2717_, 2, v___x_2716_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set_tag(v___x_2711_, 2);
lean_ctor_set(v___x_2711_, 0, v___x_2717_);
v___x_2719_ = v___x_2711_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
lean_object* v___x_2720_; 
v___x_2720_ = l_Lean_addDecl(v___x_2719_, v_hasTrace_2696_, v_a_2684_, v_a_2685_);
return v___x_2720_;
}
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec(v_val_2703_);
lean_dec(v_name_2697_);
lean_del_object(v___x_2693_);
lean_dec(v_levelParams_2691_);
v_a_2724_ = lean_ctor_get(v___x_2704_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2704_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2704_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2704_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
else
{
lean_object* v___x_2732_; lean_object* v___x_2734_; 
lean_dec(v_a_2699_);
lean_dec(v_name_2697_);
lean_del_object(v___x_2693_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v___x_2732_ = lean_box(0);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v___x_2732_);
v___x_2734_ = v___x_2701_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2732_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
lean_dec(v_name_2697_);
lean_del_object(v___x_2693_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v_a_2737_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2698_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2698_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
else
{
lean_object* v___f_2745_; lean_object* v_cls_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2749_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v_a_2753_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v_a_2765_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v_a_2770_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v_a_2781_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v_a_2796_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v_a_2801_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; 
lean_inc(v_name_2697_);
v___f_2745_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2745_, 0, v_name_2697_);
v_cls_2746_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_2747_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_2748_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_2749_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2695_, v_options_2689_, v___x_2748_);
if (v___x_2749_ == 0)
{
lean_object* v___x_2846_; uint8_t v___x_2847_; 
v___x_2846_ = l_Lean_trace_profiler;
v___x_2847_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_2689_, v___x_2846_);
if (v___x_2847_ == 0)
{
lean_object* v___x_2848_; 
lean_dec_ref(v___f_2745_);
v___x_2848_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2895_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2851_ = v___x_2848_;
v_isShared_2852_ = v_isSharedCheck_2895_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2848_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2895_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
if (lean_obj_tag(v_a_2849_) == 1)
{
lean_object* v_val_2853_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2858_; 
lean_del_object(v___x_2851_);
v_val_2853_ = lean_ctor_get(v_a_2849_, 0);
lean_inc(v_val_2853_);
lean_dec_ref_known(v_a_2849_, 1);
if (v___x_2749_ == 0)
{
v___y_2855_ = v_a_2682_;
v___y_2856_ = v_a_2683_;
v___y_2857_ = v_a_2684_;
v___y_2858_ = v_a_2685_;
goto v___jp_2854_;
}
else
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v___x_2887_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
lean_inc(v_val_2853_);
v___x_2888_ = l_Lean_MessageData_ofExpr(v_val_2853_);
v___x_2889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2887_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2746_, v___x_2889_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_dec_ref_known(v___x_2890_, 1);
v___y_2855_ = v_a_2682_;
v___y_2856_ = v_a_2683_;
v___y_2857_ = v_a_2684_;
v___y_2858_ = v_a_2685_;
goto v___jp_2854_;
}
else
{
lean_dec(v_val_2853_);
lean_dec(v_name_2697_);
lean_del_object(v___x_2693_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
return v___x_2890_;
}
}
v___jp_2854_:
{
lean_object* v___x_2859_; 
lean_inc(v_val_2853_);
v___x_2859_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue(v_name_2690_, v_val_2853_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2861_; lean_object* v_a_2862_; lean_object* v___x_2863_; lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2878_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
lean_inc(v_a_2860_);
lean_dec_ref_known(v___x_2859_, 1);
v___x_2861_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_2853_, v___y_2856_);
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
lean_inc(v_a_2862_);
lean_dec_ref(v___x_2861_);
v___x_2863_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_2860_, v___y_2856_);
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2866_ = v___x_2863_;
v_isShared_2867_ = v_isSharedCheck_2878_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2878_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2869_; 
lean_inc(v_name_2697_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 2, v_a_2862_);
lean_ctor_set(v___x_2693_, 0, v_name_2697_);
v___x_2869_ = v___x_2693_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_name_2697_);
lean_ctor_set(v_reuseFailAlloc_2877_, 1, v_levelParams_2691_);
lean_ctor_set(v_reuseFailAlloc_2877_, 2, v_a_2862_);
v___x_2869_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2874_; 
v___x_2870_ = lean_box(0);
v___x_2871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2871_, 0, v_name_2697_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
v___x_2872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2869_);
lean_ctor_set(v___x_2872_, 1, v_a_2864_);
lean_ctor_set(v___x_2872_, 2, v___x_2871_);
if (v_isShared_2867_ == 0)
{
lean_ctor_set_tag(v___x_2866_, 2);
lean_ctor_set(v___x_2866_, 0, v___x_2872_);
v___x_2874_ = v___x_2866_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lean_addDecl(v___x_2874_, v___x_2847_, v___y_2857_, v___y_2858_);
return v___x_2875_;
}
}
}
}
else
{
lean_object* v_a_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2886_; 
lean_dec(v_val_2853_);
lean_dec(v_name_2697_);
lean_del_object(v___x_2693_);
lean_dec(v_levelParams_2691_);
v_a_2879_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2881_ = v___x_2859_;
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_a_2879_);
lean_dec(v___x_2859_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2886_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v___x_2884_; 
if (v_isShared_2882_ == 0)
{
v___x_2884_ = v___x_2881_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_a_2879_);
v___x_2884_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
return v___x_2884_;
}
}
}
}
}
else
{
lean_object* v___x_2891_; lean_object* v___x_2893_; 
lean_dec(v_a_2849_);
lean_dec(v_name_2697_);
lean_del_object(v___x_2693_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v___x_2891_ = lean_box(0);
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 0, v___x_2891_);
v___x_2893_ = v___x_2851_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2891_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
lean_dec(v_name_2697_);
lean_del_object(v___x_2693_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v_a_2896_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2848_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2848_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
else
{
lean_del_object(v___x_2693_);
goto v___jp_2809_;
}
}
else
{
lean_del_object(v___x_2693_);
goto v___jp_2809_;
}
v___jp_2750_:
{
lean_object* v___x_2754_; double v___x_2755_; double v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2754_ = lean_io_get_num_heartbeats();
v___x_2755_ = lean_float_of_nat(v___y_2751_);
v___x_2756_ = lean_float_of_nat(v___x_2754_);
v___x_2757_ = lean_box_float(v___x_2755_);
v___x_2758_ = lean_box_float(v___x_2756_);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2757_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
v___x_2760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2760_, 0, v_a_2753_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
v___x_2761_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2746_, v_hasTrace_2696_, v___x_2747_, v_options_2689_, v___x_2749_, v___y_2752_, v___f_2745_, v___x_2760_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
return v___x_2761_;
}
v___jp_2762_:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2766_, 0, v_a_2765_);
v___y_2751_ = v___y_2763_;
v___y_2752_ = v___y_2764_;
v_a_2753_ = v___x_2766_;
goto v___jp_2750_;
}
v___jp_2767_:
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2771_, 0, v_a_2770_);
v___y_2751_ = v___y_2768_;
v___y_2752_ = v___y_2769_;
v_a_2753_ = v___x_2771_;
goto v___jp_2750_;
}
v___jp_2772_:
{
if (lean_obj_tag(v___y_2775_) == 0)
{
lean_object* v_a_2776_; 
v_a_2776_ = lean_ctor_get(v___y_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___y_2775_, 1);
v___y_2768_ = v___y_2773_;
v___y_2769_ = v___y_2774_;
v_a_2770_ = v_a_2776_;
goto v___jp_2767_;
}
else
{
lean_object* v_a_2777_; 
v_a_2777_ = lean_ctor_get(v___y_2775_, 0);
lean_inc(v_a_2777_);
lean_dec_ref_known(v___y_2775_, 1);
v___y_2763_ = v___y_2773_;
v___y_2764_ = v___y_2774_;
v_a_2765_ = v_a_2777_;
goto v___jp_2762_;
}
}
v___jp_2778_:
{
lean_object* v___x_2782_; double v___x_2783_; double v___x_2784_; double v___x_2785_; double v___x_2786_; double v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2782_ = lean_io_mono_nanos_now();
v___x_2783_ = lean_float_of_nat(v___y_2780_);
v___x_2784_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_2785_ = lean_float_div(v___x_2783_, v___x_2784_);
v___x_2786_ = lean_float_of_nat(v___x_2782_);
v___x_2787_ = lean_float_div(v___x_2786_, v___x_2784_);
v___x_2788_ = lean_box_float(v___x_2785_);
v___x_2789_ = lean_box_float(v___x_2787_);
v___x_2790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2788_);
lean_ctor_set(v___x_2790_, 1, v___x_2789_);
v___x_2791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2791_, 0, v_a_2781_);
lean_ctor_set(v___x_2791_, 1, v___x_2790_);
v___x_2792_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_2746_, v_hasTrace_2696_, v___x_2747_, v_options_2689_, v___x_2749_, v___y_2779_, v___f_2745_, v___x_2791_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
return v___x_2792_;
}
v___jp_2793_:
{
lean_object* v___x_2797_; 
v___x_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2797_, 0, v_a_2796_);
v___y_2779_ = v___y_2794_;
v___y_2780_ = v___y_2795_;
v_a_2781_ = v___x_2797_;
goto v___jp_2778_;
}
v___jp_2798_:
{
lean_object* v___x_2802_; 
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v_a_2801_);
v___y_2779_ = v___y_2799_;
v___y_2780_ = v___y_2800_;
v_a_2781_ = v___x_2802_;
goto v___jp_2778_;
}
v___jp_2803_:
{
if (lean_obj_tag(v___y_2806_) == 0)
{
lean_object* v_a_2807_; 
v_a_2807_ = lean_ctor_get(v___y_2806_, 0);
lean_inc(v_a_2807_);
lean_dec_ref_known(v___y_2806_, 1);
v___y_2794_ = v___y_2804_;
v___y_2795_ = v___y_2805_;
v_a_2796_ = v_a_2807_;
goto v___jp_2793_;
}
else
{
lean_object* v_a_2808_; 
v_a_2808_ = lean_ctor_get(v___y_2806_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___y_2806_, 1);
v___y_2799_ = v___y_2804_;
v___y_2800_ = v___y_2805_;
v_a_2801_ = v_a_2808_;
goto v___jp_2798_;
}
}
v___jp_2809_:
{
lean_object* v___x_2810_; lean_object* v_a_2811_; lean_object* v___x_2812_; uint8_t v___x_2813_; 
v___x_2810_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_2685_);
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2811_);
lean_dec_ref(v___x_2810_);
v___x_2812_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2813_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_2689_, v___x_2812_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = lean_io_mono_nanos_now();
v___x_2815_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2815_, 1);
if (lean_obj_tag(v_a_2816_) == 1)
{
if (v___x_2749_ == 0)
{
lean_object* v_val_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v_val_2817_ = lean_ctor_get(v_a_2816_, 0);
lean_inc(v_val_2817_);
lean_dec_ref_known(v_a_2816_, 1);
v___x_2818_ = lean_box(0);
v___x_2819_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2690_, v_val_2817_, v_name_2697_, v_levelParams_2691_, v___x_2813_, v___x_2818_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
v___y_2804_ = v_a_2811_;
v___y_2805_ = v___x_2814_;
v___y_2806_ = v___x_2819_;
goto v___jp_2803_;
}
else
{
lean_object* v_val_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_val_2820_ = lean_ctor_get(v_a_2816_, 0);
lean_inc_n(v_val_2820_, 2);
lean_dec_ref_known(v_a_2816_, 1);
v___x_2821_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_2822_ = l_Lean_MessageData_ofExpr(v_val_2820_);
v___x_2823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
v___x_2824_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2746_, v___x_2823_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v___x_2826_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v___x_2826_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__1(v_name_2690_, v_val_2820_, v_name_2697_, v_levelParams_2691_, v___x_2813_, v_a_2825_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
v___y_2804_ = v_a_2811_;
v___y_2805_ = v___x_2814_;
v___y_2806_ = v___x_2826_;
goto v___jp_2803_;
}
else
{
lean_object* v_a_2827_; 
lean_dec(v_val_2820_);
lean_dec(v_name_2697_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v_a_2827_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2827_);
lean_dec_ref_known(v___x_2824_, 1);
v___y_2799_ = v_a_2811_;
v___y_2800_ = v___x_2814_;
v_a_2801_ = v_a_2827_;
goto v___jp_2798_;
}
}
}
else
{
lean_object* v___x_2828_; 
lean_dec(v_a_2816_);
lean_dec(v_name_2697_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v___x_2828_ = lean_box(0);
v___y_2794_ = v_a_2811_;
v___y_2795_ = v___x_2814_;
v_a_2796_ = v___x_2828_;
goto v___jp_2793_;
}
}
else
{
lean_object* v_a_2829_; 
lean_dec(v_name_2697_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v_a_2829_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2829_);
lean_dec_ref_known(v___x_2815_, 1);
v___y_2799_ = v_a_2811_;
v___y_2800_ = v___x_2814_;
v_a_2801_ = v_a_2829_;
goto v___jp_2798_;
}
}
else
{
lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2830_ = lean_io_get_num_heartbeats();
v___x_2831_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremType_x3f(v_ctorVal_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref_known(v___x_2831_, 1);
if (lean_obj_tag(v_a_2832_) == 1)
{
if (v___x_2749_ == 0)
{
lean_object* v_val_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v_val_2833_ = lean_ctor_get(v_a_2832_, 0);
lean_inc(v_val_2833_);
lean_dec_ref_known(v_a_2832_, 1);
v___x_2834_ = lean_box(0);
v___x_2835_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2690_, v_val_2833_, v_name_2697_, v_levelParams_2691_, v___x_2834_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
v___y_2773_ = v___x_2830_;
v___y_2774_ = v_a_2811_;
v___y_2775_ = v___x_2835_;
goto v___jp_2772_;
}
else
{
lean_object* v_val_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; 
v_val_2836_ = lean_ctor_get(v_a_2832_, 0);
lean_inc_n(v_val_2836_, 2);
lean_dec_ref_known(v_a_2832_, 1);
v___x_2837_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_2838_ = l_Lean_MessageData_ofExpr(v_val_2836_);
v___x_2839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2837_);
lean_ctor_set(v___x_2839_, 1, v___x_2838_);
v___x_2840_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_2746_, v___x_2839_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; lean_object* v___x_2842_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
lean_dec_ref_known(v___x_2840_, 1);
v___x_2842_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__2(v_name_2690_, v_val_2836_, v_name_2697_, v_levelParams_2691_, v_a_2841_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
v___y_2773_ = v___x_2830_;
v___y_2774_ = v_a_2811_;
v___y_2775_ = v___x_2842_;
goto v___jp_2772_;
}
else
{
lean_object* v_a_2843_; 
lean_dec(v_val_2836_);
lean_dec(v_name_2697_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v_a_2843_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2843_);
lean_dec_ref_known(v___x_2840_, 1);
v___y_2763_ = v___x_2830_;
v___y_2764_ = v_a_2811_;
v_a_2765_ = v_a_2843_;
goto v___jp_2762_;
}
}
}
else
{
lean_object* v___x_2844_; 
lean_dec(v_a_2832_);
lean_dec(v_name_2697_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v___x_2844_ = lean_box(0);
v___y_2768_ = v___x_2830_;
v___y_2769_ = v_a_2811_;
v_a_2770_ = v___x_2844_;
goto v___jp_2767_;
}
}
else
{
lean_object* v_a_2845_; 
lean_dec(v_name_2697_);
lean_dec(v_levelParams_2691_);
lean_dec(v_name_2690_);
v_a_2845_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2845_);
lean_dec_ref_known(v___x_2831_, 1);
v___y_2763_ = v___x_2830_;
v___y_2764_ = v_a_2811_;
v_a_2765_ = v_a_2845_;
goto v___jp_2762_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___boxed(lean_object* v_ctorVal_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(v_ctorVal_2906_, v_a_2907_, v_a_2908_, v_a_2909_, v_a_2910_);
lean_dec(v_a_2910_);
lean_dec_ref(v_a_2909_);
lean_dec(v_a_2908_);
lean_dec_ref(v_a_2907_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(lean_object* v_00_u03b1_2913_, lean_object* v_x_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___redArg(v_x_2914_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2921_, lean_object* v_x_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3_spec__4(v_00_u03b1_2921_, v_x_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveEqTheoremNameFor(lean_object* v_ctorName_2932_){
_start:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2933_ = ((lean_object*)(l_Lean_Meta_mkInjectiveEqTheoremNameFor___closed__1));
v___x_2934_ = l_Lean_Name_append(v_ctorName_2932_, v___x_2933_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(lean_object* v_ctorVal_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_, lean_object* v_a_2939_){
_start:
{
uint8_t v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = 1;
v___x_2942_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f(v_ctorVal_2935_, v___x_2941_, v_a_2936_, v_a_2937_, v_a_2938_, v_a_2939_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f___boxed(lean_object* v_ctorVal_2943_, lean_object* v_a_2944_, lean_object* v_a_2945_, lean_object* v_a_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_2943_, v_a_2944_, v_a_2945_, v_a_2946_, v_a_2947_);
lean_dec(v_a_2947_);
lean_dec_ref(v_a_2946_);
lean_dec(v_a_2945_);
lean_dec_ref(v_a_2944_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(lean_object* v_e_2950_, lean_object* v_t_2951_, lean_object* v_acc_2952_, lean_object* v_a_2953_){
_start:
{
lean_object* v___x_2958_; 
v___x_2958_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_t_2951_, v_a_2953_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2960_; uint8_t v___x_2961_; 
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
lean_inc(v_a_2959_);
lean_dec_ref_known(v___x_2958_, 1);
v___x_2960_ = l_Lean_Expr_cleanupAnnotations(v_a_2959_);
lean_dec(v_a_2959_);
v___x_2961_ = l_Lean_Expr_isApp(v___x_2960_);
if (v___x_2961_ == 0)
{
lean_dec_ref(v___x_2960_);
goto v___jp_2955_;
}
else
{
lean_object* v___x_2962_; uint8_t v___x_2963_; 
v___x_2962_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2960_);
v___x_2963_ = l_Lean_Expr_isApp(v___x_2962_);
if (v___x_2963_ == 0)
{
lean_dec_ref(v___x_2962_);
lean_dec_ref(v___x_2960_);
goto v___jp_2955_;
}
else
{
lean_object* v___x_2964_; lean_object* v___x_2965_; uint8_t v___x_2966_; 
v___x_2964_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2962_);
v___x_2965_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_2966_ = l_Lean_Expr_isConstOf(v___x_2964_, v___x_2965_);
lean_dec_ref(v___x_2964_);
if (v___x_2966_ == 0)
{
lean_dec_ref(v___x_2962_);
lean_dec_ref(v___x_2960_);
goto v___jp_2955_;
}
else
{
lean_object* v_arg_2967_; lean_object* v_arg_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_arg_2967_ = lean_ctor_get(v___x_2960_, 1);
lean_inc_ref(v_arg_2967_);
lean_dec_ref(v___x_2960_);
v_arg_2968_ = lean_ctor_get(v___x_2962_, 1);
lean_inc_ref(v_arg_2968_);
lean_dec_ref(v___x_2962_);
v___x_2969_ = lean_unsigned_to_nat(0u);
v___x_2970_ = l_Lean_mkProj(v___x_2965_, v___x_2969_, v_e_2950_);
lean_inc_ref(v___x_2970_);
v___x_2971_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v___x_2970_, v_arg_2968_, v_acc_2952_, v_a_2953_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; 
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
lean_inc(v_a_2972_);
lean_dec_ref_known(v___x_2971_, 1);
v_e_2950_ = v___x_2970_;
v_t_2951_ = v_arg_2967_;
v_acc_2952_ = v_a_2972_;
goto _start;
}
else
{
lean_dec_ref(v___x_2970_);
lean_dec_ref(v_arg_2967_);
return v___x_2971_;
}
}
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec_ref(v_acc_2952_);
lean_dec_ref(v_e_2950_);
v_a_2974_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2958_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2958_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
v___jp_2955_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2956_ = lean_array_push(v_acc_2952_, v_e_2950_);
v___x_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
return v___x_2957_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg___boxed(lean_object* v_e_2982_, lean_object* v_t_2983_, lean_object* v_acc_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_2982_, v_t_2983_, v_acc_2984_, v_a_2985_);
lean_dec(v_a_2985_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(lean_object* v_e_2988_, lean_object* v_t_2989_, lean_object* v_acc_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_){
_start:
{
lean_object* v___x_2996_; 
v___x_2996_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_2988_, v_t_2989_, v_acc_2990_, v_a_2992_);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___boxed(lean_object* v_e_2997_, lean_object* v_t_2998_, lean_object* v_acc_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_, lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go(v_e_2997_, v_t_2998_, v_acc_2999_, v_a_3000_, v_a_3001_, v_a_3002_, v_a_3003_);
lean_dec(v_a_3003_);
lean_dec_ref(v_a_3002_);
lean_dec(v_a_3001_);
lean_dec_ref(v_a_3000_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(lean_object* v_e_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_){
_start:
{
lean_object* v___x_3012_; 
lean_inc(v_a_3010_);
lean_inc_ref(v_a_3009_);
lean_inc(v_a_3008_);
lean_inc_ref(v_a_3007_);
lean_inc_ref(v_e_3006_);
v___x_3012_ = lean_infer_type(v_e_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v___x_3012_, 1);
v___x_3014_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_3015_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections_go___redArg(v_e_3006_, v_a_3013_, v___x_3014_, v_a_3008_);
return v___x_3015_;
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3023_; 
lean_dec_ref(v_e_3006_);
v_a_3016_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_3018_ = v___x_3012_;
v_isShared_3019_ = v_isSharedCheck_3023_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v___x_3012_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections___boxed(lean_object* v_e_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l___private_Lean_Meta_Injective_0__Lean_Meta_andProjections(v_e_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
lean_dec(v_a_3028_);
lean_dec_ref(v_a_3027_);
lean_dec(v_a_3026_);
lean_dec_ref(v_a_3025_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(lean_object* v_x_3031_, lean_object* v_x_3032_, lean_object* v_x_3033_, lean_object* v_x_3034_){
_start:
{
lean_object* v_ks_3035_; lean_object* v_vs_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3060_; 
v_ks_3035_ = lean_ctor_get(v_x_3031_, 0);
v_vs_3036_ = lean_ctor_get(v_x_3031_, 1);
v_isSharedCheck_3060_ = !lean_is_exclusive(v_x_3031_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3038_ = v_x_3031_;
v_isShared_3039_ = v_isSharedCheck_3060_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_vs_3036_);
lean_inc(v_ks_3035_);
lean_dec(v_x_3031_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3060_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3040_; uint8_t v___x_3041_; 
v___x_3040_ = lean_array_get_size(v_ks_3035_);
v___x_3041_ = lean_nat_dec_lt(v_x_3032_, v___x_3040_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3045_; 
lean_dec(v_x_3032_);
v___x_3042_ = lean_array_push(v_ks_3035_, v_x_3033_);
v___x_3043_ = lean_array_push(v_vs_3036_, v_x_3034_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 1, v___x_3043_);
lean_ctor_set(v___x_3038_, 0, v___x_3042_);
v___x_3045_ = v___x_3038_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v___x_3042_);
lean_ctor_set(v_reuseFailAlloc_3046_, 1, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
else
{
lean_object* v_k_x27_3047_; uint8_t v___x_3048_; 
v_k_x27_3047_ = lean_array_fget_borrowed(v_ks_3035_, v_x_3032_);
v___x_3048_ = l_Lean_instBEqMVarId_beq(v_x_3033_, v_k_x27_3047_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3050_; 
if (v_isShared_3039_ == 0)
{
v___x_3050_ = v___x_3038_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_ks_3035_);
lean_ctor_set(v_reuseFailAlloc_3054_, 1, v_vs_3036_);
v___x_3050_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = lean_unsigned_to_nat(1u);
v___x_3052_ = lean_nat_add(v_x_3032_, v___x_3051_);
lean_dec(v_x_3032_);
v_x_3031_ = v___x_3050_;
v_x_3032_ = v___x_3052_;
goto _start;
}
}
else
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3055_ = lean_array_fset(v_ks_3035_, v_x_3032_, v_x_3033_);
v___x_3056_ = lean_array_fset(v_vs_3036_, v_x_3032_, v_x_3034_);
lean_dec(v_x_3032_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 1, v___x_3056_);
lean_ctor_set(v___x_3038_, 0, v___x_3055_);
v___x_3058_ = v___x_3038_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3055_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v___x_3056_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_n_3061_, lean_object* v_k_3062_, lean_object* v_v_3063_){
_start:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = lean_unsigned_to_nat(0u);
v___x_3065_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_n_3061_, v___x_3064_, v_k_3062_, v_v_3063_);
return v___x_3065_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3066_; 
v___x_3066_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(lean_object* v_x_3067_, size_t v_x_3068_, size_t v_x_3069_, lean_object* v_x_3070_, lean_object* v_x_3071_){
_start:
{
if (lean_obj_tag(v_x_3067_) == 0)
{
lean_object* v_es_3072_; size_t v___x_3073_; size_t v___x_3074_; lean_object* v_j_3075_; lean_object* v___x_3076_; uint8_t v___x_3077_; 
v_es_3072_ = lean_ctor_get(v_x_3067_, 0);
v___x_3073_ = ((size_t)31ULL);
v___x_3074_ = lean_usize_land(v_x_3068_, v___x_3073_);
v_j_3075_ = lean_usize_to_nat(v___x_3074_);
v___x_3076_ = lean_array_get_size(v_es_3072_);
v___x_3077_ = lean_nat_dec_lt(v_j_3075_, v___x_3076_);
if (v___x_3077_ == 0)
{
lean_dec(v_j_3075_);
lean_dec(v_x_3071_);
lean_dec(v_x_3070_);
return v_x_3067_;
}
else
{
lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3116_; 
lean_inc_ref(v_es_3072_);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_x_3067_);
if (v_isSharedCheck_3116_ == 0)
{
lean_object* v_unused_3117_; 
v_unused_3117_ = lean_ctor_get(v_x_3067_, 0);
lean_dec(v_unused_3117_);
v___x_3079_ = v_x_3067_;
v_isShared_3080_ = v_isSharedCheck_3116_;
goto v_resetjp_3078_;
}
else
{
lean_dec(v_x_3067_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3116_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v_v_3081_; lean_object* v___x_3082_; lean_object* v_xs_x27_3083_; lean_object* v___y_3085_; 
v_v_3081_ = lean_array_fget(v_es_3072_, v_j_3075_);
v___x_3082_ = lean_box(0);
v_xs_x27_3083_ = lean_array_fset(v_es_3072_, v_j_3075_, v___x_3082_);
switch(lean_obj_tag(v_v_3081_))
{
case 0:
{
lean_object* v_key_3090_; lean_object* v_val_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3101_; 
v_key_3090_ = lean_ctor_get(v_v_3081_, 0);
v_val_3091_ = lean_ctor_get(v_v_3081_, 1);
v_isSharedCheck_3101_ = !lean_is_exclusive(v_v_3081_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3093_ = v_v_3081_;
v_isShared_3094_ = v_isSharedCheck_3101_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_val_3091_);
lean_inc(v_key_3090_);
lean_dec(v_v_3081_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3101_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
uint8_t v___x_3095_; 
v___x_3095_ = l_Lean_instBEqMVarId_beq(v_x_3070_, v_key_3090_);
if (v___x_3095_ == 0)
{
lean_object* v___x_3096_; lean_object* v___x_3097_; 
lean_del_object(v___x_3093_);
v___x_3096_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3090_, v_val_3091_, v_x_3070_, v_x_3071_);
v___x_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
v___y_3085_ = v___x_3097_;
goto v___jp_3084_;
}
else
{
lean_object* v___x_3099_; 
lean_dec(v_val_3091_);
lean_dec(v_key_3090_);
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 1, v_x_3071_);
lean_ctor_set(v___x_3093_, 0, v_x_3070_);
v___x_3099_ = v___x_3093_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_x_3070_);
lean_ctor_set(v_reuseFailAlloc_3100_, 1, v_x_3071_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
v___y_3085_ = v___x_3099_;
goto v___jp_3084_;
}
}
}
}
case 1:
{
lean_object* v_node_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3114_; 
v_node_3102_ = lean_ctor_get(v_v_3081_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v_v_3081_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3104_ = v_v_3081_;
v_isShared_3105_ = v_isSharedCheck_3114_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_node_3102_);
lean_dec(v_v_3081_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3114_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
size_t v___x_3106_; size_t v___x_3107_; size_t v___x_3108_; size_t v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3112_; 
v___x_3106_ = ((size_t)5ULL);
v___x_3107_ = lean_usize_shift_right(v_x_3068_, v___x_3106_);
v___x_3108_ = ((size_t)1ULL);
v___x_3109_ = lean_usize_add(v_x_3069_, v___x_3108_);
v___x_3110_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_node_3102_, v___x_3107_, v___x_3109_, v_x_3070_, v_x_3071_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 0, v___x_3110_);
v___x_3112_ = v___x_3104_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v___x_3110_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
v___y_3085_ = v___x_3112_;
goto v___jp_3084_;
}
}
}
default: 
{
lean_object* v___x_3115_; 
v___x_3115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3115_, 0, v_x_3070_);
lean_ctor_set(v___x_3115_, 1, v_x_3071_);
v___y_3085_ = v___x_3115_;
goto v___jp_3084_;
}
}
v___jp_3084_:
{
lean_object* v___x_3086_; lean_object* v___x_3088_; 
v___x_3086_ = lean_array_fset(v_xs_x27_3083_, v_j_3075_, v___y_3085_);
lean_dec(v_j_3075_);
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 0, v___x_3086_);
v___x_3088_ = v___x_3079_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v___x_3086_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
}
else
{
lean_object* v_ks_3118_; lean_object* v_vs_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3137_; 
v_ks_3118_ = lean_ctor_get(v_x_3067_, 0);
v_vs_3119_ = lean_ctor_get(v_x_3067_, 1);
v_isSharedCheck_3137_ = !lean_is_exclusive(v_x_3067_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3121_ = v_x_3067_;
v_isShared_3122_ = v_isSharedCheck_3137_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_vs_3119_);
lean_inc(v_ks_3118_);
lean_dec(v_x_3067_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3137_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_ks_3118_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v_vs_3119_);
v___x_3124_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
lean_object* v_newNode_3125_; size_t v___x_3126_; uint8_t v___x_3127_; 
v_newNode_3125_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(v___x_3124_, v_x_3070_, v_x_3071_);
v___x_3126_ = ((size_t)7ULL);
v___x_3127_ = lean_usize_dec_le(v___x_3126_, v_x_3069_);
if (v___x_3127_ == 0)
{
lean_object* v___x_3128_; lean_object* v___x_3129_; uint8_t v___x_3130_; 
v___x_3128_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3125_);
v___x_3129_ = lean_unsigned_to_nat(4u);
v___x_3130_ = lean_nat_dec_lt(v___x_3128_, v___x_3129_);
lean_dec(v___x_3128_);
if (v___x_3130_ == 0)
{
lean_object* v_ks_3131_; lean_object* v_vs_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v_ks_3131_ = lean_ctor_get(v_newNode_3125_, 0);
lean_inc_ref(v_ks_3131_);
v_vs_3132_ = lean_ctor_get(v_newNode_3125_, 1);
lean_inc_ref(v_vs_3132_);
lean_dec_ref(v_newNode_3125_);
v___x_3133_ = lean_unsigned_to_nat(0u);
v___x_3134_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_3135_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_x_3069_, v_ks_3131_, v_vs_3132_, v___x_3133_, v___x_3134_);
lean_dec_ref(v_vs_3132_);
lean_dec_ref(v_ks_3131_);
return v___x_3135_;
}
else
{
return v_newNode_3125_;
}
}
else
{
return v_newNode_3125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(size_t v_depth_3138_, lean_object* v_keys_3139_, lean_object* v_vals_3140_, lean_object* v_i_3141_, lean_object* v_entries_3142_){
_start:
{
lean_object* v___x_3143_; uint8_t v___x_3144_; 
v___x_3143_ = lean_array_get_size(v_keys_3139_);
v___x_3144_ = lean_nat_dec_lt(v_i_3141_, v___x_3143_);
if (v___x_3144_ == 0)
{
lean_dec(v_i_3141_);
return v_entries_3142_;
}
else
{
lean_object* v_k_3145_; lean_object* v_v_3146_; uint64_t v___x_3147_; size_t v_h_3148_; size_t v___x_3149_; lean_object* v___x_3150_; size_t v___x_3151_; size_t v___x_3152_; size_t v___x_3153_; size_t v_h_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
v_k_3145_ = lean_array_fget_borrowed(v_keys_3139_, v_i_3141_);
v_v_3146_ = lean_array_fget_borrowed(v_vals_3140_, v_i_3141_);
v___x_3147_ = l_Lean_instHashableMVarId_hash(v_k_3145_);
v_h_3148_ = lean_uint64_to_usize(v___x_3147_);
v___x_3149_ = ((size_t)5ULL);
v___x_3150_ = lean_unsigned_to_nat(1u);
v___x_3151_ = ((size_t)1ULL);
v___x_3152_ = lean_usize_sub(v_depth_3138_, v___x_3151_);
v___x_3153_ = lean_usize_mul(v___x_3149_, v___x_3152_);
v_h_3154_ = lean_usize_shift_right(v_h_3148_, v___x_3153_);
v___x_3155_ = lean_nat_add(v_i_3141_, v___x_3150_);
lean_dec(v_i_3141_);
lean_inc(v_v_3146_);
lean_inc(v_k_3145_);
v___x_3156_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_entries_3142_, v_h_3154_, v_depth_3138_, v_k_3145_, v_v_3146_);
v_i_3141_ = v___x_3155_;
v_entries_3142_ = v___x_3156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_3158_, lean_object* v_keys_3159_, lean_object* v_vals_3160_, lean_object* v_i_3161_, lean_object* v_entries_3162_){
_start:
{
size_t v_depth_boxed_3163_; lean_object* v_res_3164_; 
v_depth_boxed_3163_ = lean_unbox_usize(v_depth_3158_);
lean_dec(v_depth_3158_);
v_res_3164_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_boxed_3163_, v_keys_3159_, v_vals_3160_, v_i_3161_, v_entries_3162_);
lean_dec_ref(v_vals_3160_);
lean_dec_ref(v_keys_3159_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_3165_, lean_object* v_x_3166_, lean_object* v_x_3167_, lean_object* v_x_3168_, lean_object* v_x_3169_){
_start:
{
size_t v_x_5242__boxed_3170_; size_t v_x_5243__boxed_3171_; lean_object* v_res_3172_; 
v_x_5242__boxed_3170_ = lean_unbox_usize(v_x_3166_);
lean_dec(v_x_3166_);
v_x_5243__boxed_3171_ = lean_unbox_usize(v_x_3167_);
lean_dec(v_x_3167_);
v_res_3172_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3165_, v_x_5242__boxed_3170_, v_x_5243__boxed_3171_, v_x_3168_, v_x_3169_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(lean_object* v_x_3173_, lean_object* v_x_3174_, lean_object* v_x_3175_){
_start:
{
uint64_t v___x_3176_; size_t v___x_3177_; size_t v___x_3178_; lean_object* v___x_3179_; 
v___x_3176_ = l_Lean_instHashableMVarId_hash(v_x_3174_);
v___x_3177_ = lean_uint64_to_usize(v___x_3176_);
v___x_3178_ = ((size_t)1ULL);
v___x_3179_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3173_, v___x_3177_, v___x_3178_, v_x_3174_, v_x_3175_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(lean_object* v_mvarId_3180_, lean_object* v_val_3181_, lean_object* v___y_3182_){
_start:
{
lean_object* v___x_3184_; lean_object* v_mctx_3185_; lean_object* v_cache_3186_; lean_object* v_zetaDeltaFVarIds_3187_; lean_object* v_postponed_3188_; lean_object* v_diag_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3218_; 
v___x_3184_ = lean_st_ref_take(v___y_3182_);
v_mctx_3185_ = lean_ctor_get(v___x_3184_, 0);
v_cache_3186_ = lean_ctor_get(v___x_3184_, 1);
v_zetaDeltaFVarIds_3187_ = lean_ctor_get(v___x_3184_, 2);
v_postponed_3188_ = lean_ctor_get(v___x_3184_, 3);
v_diag_3189_ = lean_ctor_get(v___x_3184_, 4);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3191_ = v___x_3184_;
v_isShared_3192_ = v_isSharedCheck_3218_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_diag_3189_);
lean_inc(v_postponed_3188_);
lean_inc(v_zetaDeltaFVarIds_3187_);
lean_inc(v_cache_3186_);
lean_inc(v_mctx_3185_);
lean_dec(v___x_3184_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3218_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v_depth_3193_; lean_object* v_levelAssignDepth_3194_; lean_object* v_lmvarCounter_3195_; lean_object* v_mvarCounter_3196_; lean_object* v_lDecls_3197_; lean_object* v_decls_3198_; lean_object* v_userNames_3199_; lean_object* v_lAssignment_3200_; lean_object* v_eAssignment_3201_; lean_object* v_dAssignment_3202_; lean_object* v_instanceTypedMVars_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3217_; 
v_depth_3193_ = lean_ctor_get(v_mctx_3185_, 0);
v_levelAssignDepth_3194_ = lean_ctor_get(v_mctx_3185_, 1);
v_lmvarCounter_3195_ = lean_ctor_get(v_mctx_3185_, 2);
v_mvarCounter_3196_ = lean_ctor_get(v_mctx_3185_, 3);
v_lDecls_3197_ = lean_ctor_get(v_mctx_3185_, 4);
v_decls_3198_ = lean_ctor_get(v_mctx_3185_, 5);
v_userNames_3199_ = lean_ctor_get(v_mctx_3185_, 6);
v_lAssignment_3200_ = lean_ctor_get(v_mctx_3185_, 7);
v_eAssignment_3201_ = lean_ctor_get(v_mctx_3185_, 8);
v_dAssignment_3202_ = lean_ctor_get(v_mctx_3185_, 9);
v_instanceTypedMVars_3203_ = lean_ctor_get(v_mctx_3185_, 10);
v_isSharedCheck_3217_ = !lean_is_exclusive(v_mctx_3185_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3205_ = v_mctx_3185_;
v_isShared_3206_ = v_isSharedCheck_3217_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_instanceTypedMVars_3203_);
lean_inc(v_dAssignment_3202_);
lean_inc(v_eAssignment_3201_);
lean_inc(v_lAssignment_3200_);
lean_inc(v_userNames_3199_);
lean_inc(v_decls_3198_);
lean_inc(v_lDecls_3197_);
lean_inc(v_mvarCounter_3196_);
lean_inc(v_lmvarCounter_3195_);
lean_inc(v_levelAssignDepth_3194_);
lean_inc(v_depth_3193_);
lean_dec(v_mctx_3185_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3217_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3207_ = lean_box(0);
v___x_3208_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(v_eAssignment_3201_, v_mvarId_3180_, v_val_3181_);
if (v_isShared_3206_ == 0)
{
lean_ctor_set(v___x_3205_, 8, v___x_3208_);
v___x_3210_ = v___x_3205_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_depth_3193_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v_levelAssignDepth_3194_);
lean_ctor_set(v_reuseFailAlloc_3216_, 2, v_lmvarCounter_3195_);
lean_ctor_set(v_reuseFailAlloc_3216_, 3, v_mvarCounter_3196_);
lean_ctor_set(v_reuseFailAlloc_3216_, 4, v_lDecls_3197_);
lean_ctor_set(v_reuseFailAlloc_3216_, 5, v_decls_3198_);
lean_ctor_set(v_reuseFailAlloc_3216_, 6, v_userNames_3199_);
lean_ctor_set(v_reuseFailAlloc_3216_, 7, v_lAssignment_3200_);
lean_ctor_set(v_reuseFailAlloc_3216_, 8, v___x_3208_);
lean_ctor_set(v_reuseFailAlloc_3216_, 9, v_dAssignment_3202_);
lean_ctor_set(v_reuseFailAlloc_3216_, 10, v_instanceTypedMVars_3203_);
v___x_3210_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3212_; 
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 0, v___x_3210_);
v___x_3212_ = v___x_3191_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3210_);
lean_ctor_set(v_reuseFailAlloc_3215_, 1, v_cache_3186_);
lean_ctor_set(v_reuseFailAlloc_3215_, 2, v_zetaDeltaFVarIds_3187_);
lean_ctor_set(v_reuseFailAlloc_3215_, 3, v_postponed_3188_);
lean_ctor_set(v_reuseFailAlloc_3215_, 4, v_diag_3189_);
v___x_3212_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3213_ = lean_st_ref_put(v___y_3182_, v___x_3212_);
v___x_3214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3214_, 0, v___x_3207_);
return v___x_3214_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg___boxed(lean_object* v_mvarId_3219_, lean_object* v_val_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_mvarId_3219_, v_val_3220_, v___y_3221_);
lean_dec(v___y_3221_);
return v_res_3223_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__0));
v___x_3226_ = l_Lean_stringToMessageData(v___x_3225_);
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(lean_object* v___f_3227_, lean_object* v_a_3228_, lean_object* v_x_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_){
_start:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___closed__1);
v___x_3236_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3235_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; lean_object* v___x_3238_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc(v_a_3237_);
lean_dec_ref_known(v___x_3236_, 1);
lean_inc(v___y_3233_);
lean_inc_ref(v___y_3232_);
lean_inc(v___y_3231_);
lean_inc_ref(v___y_3230_);
v___x_3238_ = lean_apply_7(v___f_3227_, v_a_3237_, v_a_3228_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, lean_box(0));
return v___x_3238_;
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec(v_a_3228_);
lean_dec_ref(v___f_3227_);
v_a_3239_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3236_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3236_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1___boxed(lean_object* v___f_3247_, lean_object* v_a_3248_, lean_object* v_x_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(v___f_3247_, v_a_3248_, v_x_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
lean_dec(v___y_3253_);
lean_dec_ref(v___y_3252_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
lean_dec(v_x_3249_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(lean_object* v___f_3256_, lean_object* v_a_3257_, lean_object* v_x_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3264_ = lean_box(0);
lean_inc(v___y_3262_);
lean_inc_ref(v___y_3261_);
lean_inc(v___y_3260_);
lean_inc_ref(v___y_3259_);
v___x_3265_ = lean_apply_7(v___f_3256_, v___x_3264_, v_a_3257_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, lean_box(0));
return v___x_3265_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2___boxed(lean_object* v___f_3266_, lean_object* v_a_3267_, lean_object* v_x_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3266_, v_a_3267_, v_x_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3271_);
lean_dec(v___y_3270_);
lean_dec_ref(v___y_3269_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(uint8_t v___x_3275_, lean_object* v_____r_3276_, lean_object* v_mvarId_u2082_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v___x_3283_; 
v___x_3283_ = l_Lean_Meta_introSubstEq(v_mvarId_u2082_3277_, v___x_3275_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3293_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3286_ = v___x_3283_;
v_isShared_3287_ = v_isSharedCheck_3293_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3283_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3293_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v_snd_3288_; lean_object* v___x_3289_; lean_object* v___x_3291_; 
v_snd_3288_ = lean_ctor_get(v_a_3284_, 1);
lean_inc(v_snd_3288_);
lean_dec(v_a_3284_);
v___x_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3289_, 0, v_snd_3288_);
if (v_isShared_3287_ == 0)
{
lean_ctor_set(v___x_3286_, 0, v___x_3289_);
v___x_3291_ = v___x_3286_;
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
else
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
v_a_3294_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3296_ = v___x_3283_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3283_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v___x_3299_; 
if (v_isShared_3297_ == 0)
{
v___x_3299_ = v___x_3296_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_a_3294_);
v___x_3299_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
return v___x_3299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0___boxed(lean_object* v___x_3302_, lean_object* v_____r_3303_, lean_object* v_mvarId_u2082_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_){
_start:
{
uint8_t v___x_5530__boxed_3310_; lean_object* v_res_3311_; 
v___x_5530__boxed_3310_ = lean_unbox(v___x_3302_);
v_res_3311_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(v___x_5530__boxed_3310_, v_____r_3303_, v_mvarId_u2082_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec(v___y_3306_);
lean_dec_ref(v___y_3305_);
return v_res_3311_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3320_ = lean_box(0);
v___x_3321_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__3));
v___x_3322_ = l_Lean_mkConst(v___x_3321_, v___x_3320_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(lean_object* v_a_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v___y_3330_; uint8_t v___x_3350_; lean_object* v___f_3351_; uint8_t v___x_3352_; lean_object* v___x_3353_; 
v___x_3350_ = 0;
v___f_3351_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__0));
v___x_3352_ = 1;
lean_inc(v_a_3323_);
v___x_3353_ = l_Lean_MVarId_getType(v_a_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3411_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3356_ = v___x_3353_;
v_isShared_3357_ = v_isSharedCheck_3411_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3411_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
if (lean_obj_tag(v_a_3354_) == 7)
{
lean_object* v_binderType_3358_; lean_object* v_body_3359_; uint8_t v___x_3360_; 
v_binderType_3358_ = lean_ctor_get(v_a_3354_, 1);
lean_inc_ref(v_binderType_3358_);
v_body_3359_ = lean_ctor_get(v_a_3354_, 2);
lean_inc_ref(v_body_3359_);
lean_dec_ref_known(v_a_3354_, 3);
v___x_3360_ = l_Lean_Expr_hasLooseBVars(v_body_3359_);
if (v___x_3360_ == 0)
{
lean_object* v___x_3361_; 
lean_del_object(v___x_3356_);
v___x_3361_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_3358_, v___y_3325_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___x_3361_, 1);
v___x_3363_ = l_Lean_Expr_cleanupAnnotations(v_a_3362_);
lean_dec(v_a_3362_);
v___x_3364_ = l_Lean_Expr_isApp(v___x_3363_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
lean_dec_ref(v___x_3363_);
lean_dec_ref(v_body_3359_);
v___x_3365_ = lean_box(0);
v___x_3366_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3351_, v_a_3323_, v___x_3365_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
v___y_3330_ = v___x_3366_;
goto v___jp_3329_;
}
else
{
lean_object* v___x_3367_; uint8_t v___x_3368_; 
v___x_3367_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3363_);
v___x_3368_ = l_Lean_Expr_isApp(v___x_3367_);
if (v___x_3368_ == 0)
{
lean_object* v___x_3369_; lean_object* v___x_3370_; 
lean_dec_ref(v___x_3367_);
lean_dec_ref(v___x_3363_);
lean_dec_ref(v_body_3359_);
v___x_3369_ = lean_box(0);
v___x_3370_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3351_, v_a_3323_, v___x_3369_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
v___y_3330_ = v___x_3370_;
goto v___jp_3329_;
}
else
{
lean_object* v___x_3371_; lean_object* v___x_3372_; uint8_t v___x_3373_; 
v___x_3371_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3367_);
v___x_3372_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f_spec__0___redArg___closed__1));
v___x_3373_ = l_Lean_Expr_isConstOf(v___x_3371_, v___x_3372_);
lean_dec_ref(v___x_3371_);
if (v___x_3373_ == 0)
{
lean_object* v___x_3374_; lean_object* v___x_3375_; 
lean_dec_ref(v___x_3367_);
lean_dec_ref(v___x_3363_);
lean_dec_ref(v_body_3359_);
v___x_3374_ = lean_box(0);
v___x_3375_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__2(v___f_3351_, v_a_3323_, v___x_3374_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
v___y_3330_ = v___x_3375_;
goto v___jp_3329_;
}
else
{
lean_object* v_arg_3376_; lean_object* v_arg_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v_arg_3376_ = lean_ctor_get(v___x_3363_, 1);
lean_inc_ref(v_arg_3376_);
lean_dec_ref(v___x_3363_);
v_arg_3377_ = lean_ctor_get(v___x_3367_, 1);
lean_inc_ref(v_arg_3377_);
lean_dec_ref(v___x_3367_);
v___x_3378_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___closed__4);
v___x_3379_ = l_Lean_mkApp3(v___x_3378_, v_arg_3377_, v_arg_3376_, v_body_3359_);
v___x_3380_ = lean_unsigned_to_nat(1u);
lean_inc(v_a_3323_);
v___x_3381_ = l_Lean_MVarId_applyN(v_a_3323_, v___x_3379_, v___x_3380_, v___x_3352_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v___x_3381_, 1);
if (lean_obj_tag(v_a_3382_) == 1)
{
lean_object* v_tail_3383_; 
v_tail_3383_ = lean_ctor_get(v_a_3382_, 1);
if (lean_obj_tag(v_tail_3383_) == 0)
{
lean_object* v_head_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
lean_dec(v_a_3323_);
v_head_3384_ = lean_ctor_get(v_a_3382_, 0);
lean_inc(v_head_3384_);
lean_dec_ref_known(v_a_3382_, 2);
v___x_3385_ = lean_box(0);
v___x_3386_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__0(v___x_3350_, v___x_3385_, v_head_3384_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
v___y_3330_ = v___x_3386_;
goto v___jp_3329_;
}
else
{
lean_object* v___x_3387_; 
v___x_3387_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(v___f_3351_, v_a_3323_, v_a_3382_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
lean_dec_ref_known(v_a_3382_, 2);
v___y_3330_ = v___x_3387_;
goto v___jp_3329_;
}
}
else
{
lean_object* v___x_3388_; 
v___x_3388_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___lam__1(v___f_3351_, v_a_3323_, v_a_3382_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
lean_dec(v_a_3382_);
v___y_3330_ = v___x_3388_;
goto v___jp_3329_;
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec(v_a_3323_);
v_a_3389_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3381_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3381_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
lean_dec_ref(v_body_3359_);
lean_dec(v_a_3323_);
v_a_3397_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3361_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3361_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
else
{
lean_object* v___x_3406_; 
lean_dec_ref(v_body_3359_);
lean_dec_ref(v_binderType_3358_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 0, v_a_3323_);
v___x_3406_ = v___x_3356_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_a_3323_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
return v___x_3406_;
}
}
}
else
{
lean_object* v___x_3409_; 
lean_dec(v_a_3354_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 0, v_a_3323_);
v___x_3409_ = v___x_3356_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v_a_3323_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec(v_a_3323_);
v_a_3412_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3353_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3353_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
v___jp_3329_:
{
if (lean_obj_tag(v___y_3330_) == 0)
{
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3341_; 
v_a_3331_ = lean_ctor_get(v___y_3330_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___y_3330_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3333_ = v___y_3330_;
v_isShared_3334_ = v_isSharedCheck_3341_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___y_3330_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3341_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
if (lean_obj_tag(v_a_3331_) == 0)
{
lean_object* v_a_3335_; lean_object* v___x_3337_; 
v_a_3335_ = lean_ctor_get(v_a_3331_, 0);
lean_inc(v_a_3335_);
lean_dec_ref_known(v_a_3331_, 1);
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 0, v_a_3335_);
v___x_3337_ = v___x_3333_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v_a_3335_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
else
{
lean_object* v_a_3339_; 
lean_del_object(v___x_3333_);
v_a_3339_ = lean_ctor_get(v_a_3331_, 0);
lean_inc(v_a_3339_);
lean_dec_ref_known(v_a_3331_, 1);
v_a_3323_ = v_a_3339_;
goto _start;
}
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
v_a_3342_ = lean_ctor_get(v___y_3330_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___y_3330_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3344_ = v___y_3330_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___y_3330_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3342_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg___boxed(lean_object* v_a_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_){
_start:
{
lean_object* v_res_3426_; 
v_res_3426_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(v_a_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_);
lean_dec(v___y_3424_);
lean_dec_ref(v___y_3423_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
return v_res_3426_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__0));
v___x_3429_ = l_Lean_stringToMessageData(v___x_3428_);
return v___x_3429_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; 
v___x_3435_ = lean_box(0);
v___x_3436_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4));
v___x_3437_ = l_Lean_mkConst(v___x_3436_, v___x_3435_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(lean_object* v_ctorVal_3442_, lean_object* v_xs_3443_, lean_object* v_type_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3459_ = lean_box(0);
v___x_3460_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_3444_, v___x_3459_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; uint8_t v___x_3465_; uint8_t v___x_3466_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_a_3461_);
lean_dec_ref_known(v___x_3460_, 1);
v___x_3462_ = l_Lean_Expr_mvarId_x21(v_a_3461_);
v___x_3463_ = lean_box(0);
v___x_3464_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__5);
v___x_3465_ = 1;
v___x_3466_ = 0;
v___x_3470_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__6));
v___x_3471_ = lean_box(0);
v___x_3472_ = l_Lean_MVarId_apply(v___x_3462_, v___x_3464_, v___x_3470_, v___x_3471_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_a_3473_);
lean_dec_ref_known(v___x_3472_, 1);
if (lean_obj_tag(v_a_3473_) == 1)
{
lean_object* v_tail_3474_; 
v_tail_3474_ = lean_ctor_get(v_a_3473_, 1);
lean_inc(v_tail_3474_);
if (lean_obj_tag(v_tail_3474_) == 1)
{
lean_object* v_tail_3475_; 
v_tail_3475_ = lean_ctor_get(v_tail_3474_, 1);
if (lean_obj_tag(v_tail_3475_) == 0)
{
lean_object* v_toConstantVal_3476_; lean_object* v_head_3477_; lean_object* v_head_3478_; lean_object* v_name_3479_; lean_object* v_levelParams_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v_toConstantVal_3476_ = lean_ctor_get(v_ctorVal_3442_, 0);
lean_inc_ref(v_toConstantVal_3476_);
lean_dec_ref(v_ctorVal_3442_);
v_head_3477_ = lean_ctor_get(v_a_3473_, 0);
lean_inc(v_head_3477_);
lean_dec_ref_known(v_a_3473_, 2);
v_head_3478_ = lean_ctor_get(v_tail_3474_, 0);
lean_inc(v_head_3478_);
lean_dec_ref_known(v_tail_3474_, 2);
v_name_3479_ = lean_ctor_get(v_toConstantVal_3476_, 0);
lean_inc_n(v_name_3479_, 2);
v_levelParams_3480_ = lean_ctor_get(v_toConstantVal_3476_, 1);
lean_inc(v_levelParams_3480_);
lean_dec_ref(v_toConstantVal_3476_);
v___x_3481_ = l_Lean_Meta_mkInjectiveTheoremNameFor(v_name_3479_);
v___x_3482_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_3480_, v___x_3463_);
v___x_3483_ = l_Lean_mkConst(v___x_3481_, v___x_3482_);
v___x_3484_ = l_Lean_mkAppN(v___x_3483_, v_xs_3443_);
v___x_3485_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_head_3477_, v___x_3484_, v___y_3446_);
lean_dec_ref(v___x_3485_);
v___x_3486_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(v_head_3478_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3486_) == 0)
{
lean_object* v_a_3487_; lean_object* v___x_3488_; 
v_a_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3486_, 1);
v___x_3488_ = l_Lean_MVarId_refl(v_a_3487_, v___x_3465_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_dec_ref_known(v___x_3488_, 1);
lean_dec(v_name_3479_);
goto v___jp_3467_;
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3511_; 
lean_dec(v_a_3461_);
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3491_ = v___x_3488_;
v_isShared_3492_ = v_isSharedCheck_3511_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v___x_3488_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3511_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
uint8_t v___x_3493_; 
v___x_3493_ = l_Lean_Exception_isInterrupt(v_a_3489_);
if (v___x_3493_ == 0)
{
uint8_t v___x_3494_; 
lean_inc(v_a_3489_);
v___x_3494_ = l_Lean_Exception_isRuntime(v_a_3489_);
if (v___x_3494_ == 0)
{
lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_del_object(v___x_3491_);
lean_dec(v_a_3489_);
v___x_3495_ = l___private_Lean_Meta_Injective_0__Lean_Meta_injTheoremFailureHeader(v_name_3479_);
v___x_3496_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3495_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
v_a_3497_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3496_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3496_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
else
{
lean_object* v___x_3506_; 
lean_dec(v_name_3479_);
if (v_isShared_3492_ == 0)
{
v___x_3506_ = v___x_3491_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v_a_3489_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
}
}
}
else
{
lean_object* v___x_3509_; 
lean_dec(v_name_3479_);
if (v_isShared_3492_ == 0)
{
v___x_3509_ = v___x_3491_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_a_3489_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3519_; 
lean_dec(v_name_3479_);
lean_dec(v_a_3461_);
v_a_3512_ = lean_ctor_get(v___x_3486_, 0);
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3486_);
if (v_isSharedCheck_3519_ == 0)
{
v___x_3514_ = v___x_3486_;
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v___x_3486_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3519_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3517_; 
if (v_isShared_3515_ == 0)
{
v___x_3517_ = v___x_3514_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v_a_3512_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_3474_, 2);
lean_dec_ref_known(v_a_3473_, 2);
lean_dec(v_a_3461_);
goto v___jp_3450_;
}
}
else
{
lean_dec(v_tail_3474_);
lean_dec_ref_known(v_a_3473_, 2);
lean_dec(v_a_3461_);
goto v___jp_3450_;
}
}
else
{
lean_dec(v_a_3473_);
lean_dec(v_a_3461_);
goto v___jp_3450_;
}
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
lean_dec(v_a_3461_);
lean_dec_ref(v_ctorVal_3442_);
v_a_3520_ = lean_ctor_get(v___x_3472_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3522_ = v___x_3472_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3472_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_a_3520_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
v___jp_3467_:
{
uint8_t v___x_3468_; lean_object* v___x_3469_; 
v___x_3468_ = 1;
v___x_3469_ = l_Lean_Meta_mkLambdaFVars(v_xs_3443_, v_a_3461_, v___x_3466_, v___x_3465_, v___x_3466_, v___x_3465_, v___x_3468_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
return v___x_3469_;
}
}
else
{
lean_dec_ref(v_ctorVal_3442_);
return v___x_3460_;
}
v___jp_3450_:
{
lean_object* v_toConstantVal_3451_; lean_object* v_name_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v_toConstantVal_3451_ = lean_ctor_get(v_ctorVal_3442_, 0);
lean_inc_ref(v_toConstantVal_3451_);
lean_dec_ref(v_ctorVal_3442_);
v_name_3452_ = lean_ctor_get(v_toConstantVal_3451_, 0);
lean_inc(v_name_3452_);
lean_dec_ref(v_toConstantVal_3451_);
v___x_3453_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__1);
v___x_3454_ = l_Lean_MessageData_ofName(v_name_3452_);
v___x_3455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3453_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
v___x_3456_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_3457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3455_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
v___x_3458_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_3457_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
return v___x_3458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed(lean_object* v_ctorVal_3528_, lean_object* v_xs_3529_, lean_object* v_type_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_){
_start:
{
lean_object* v_res_3536_; 
v_res_3536_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0(v_ctorVal_3528_, v_xs_3529_, v_type_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_);
lean_dec(v___y_3534_);
lean_dec_ref(v___y_3533_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
lean_dec_ref(v_xs_3529_);
return v_res_3536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(lean_object* v_ctorVal_3537_, lean_object* v_targetType_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_){
_start:
{
lean_object* v___f_3544_; uint8_t v___x_3545_; lean_object* v___x_3546_; 
v___f_3544_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3544_, 0, v_ctorVal_3537_);
v___x_3545_ = 0;
v___x_3546_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_targetType_3538_, v___f_3544_, v___x_3545_, v___x_3545_, v_a_3539_, v_a_3540_, v_a_3541_, v_a_3542_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___boxed(lean_object* v_ctorVal_3547_, lean_object* v_targetType_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3547_, v_targetType_3548_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_);
lean_dec(v_a_3552_);
lean_dec_ref(v_a_3551_);
lean_dec(v_a_3550_);
lean_dec_ref(v_a_3549_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(lean_object* v_mvarId_3555_, lean_object* v_val_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___redArg(v_mvarId_3555_, v_val_3556_, v___y_3558_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0___boxed(lean_object* v_mvarId_3563_, lean_object* v_val_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0(v_mvarId_3563_, v_val_3564_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_);
lean_dec(v___y_3568_);
lean_dec_ref(v___y_3567_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(lean_object* v_inst_3571_, lean_object* v_a_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
lean_object* v___x_3578_; 
v___x_3578_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___redArg(v_a_3572_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_);
return v___x_3578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1___boxed(lean_object* v_inst_3579_, lean_object* v_a_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__1(v_inst_3579_, v_a_3580_, v___y_3581_, v___y_3582_, v___y_3583_, v___y_3584_);
lean_dec(v___y_3584_);
lean_dec_ref(v___y_3583_);
lean_dec(v___y_3582_);
lean_dec_ref(v___y_3581_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0(lean_object* v_00_u03b2_3587_, lean_object* v_x_3588_, lean_object* v_x_3589_, lean_object* v_x_3590_){
_start:
{
lean_object* v___x_3591_; 
v___x_3591_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0___redArg(v_x_3588_, v_x_3589_, v_x_3590_);
return v___x_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3592_, lean_object* v_x_3593_, size_t v_x_3594_, size_t v_x_3595_, lean_object* v_x_3596_, lean_object* v_x_3597_){
_start:
{
lean_object* v___x_3598_; 
v___x_3598_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___redArg(v_x_3593_, v_x_3594_, v_x_3595_, v_x_3596_, v_x_3597_);
return v___x_3598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3599_, lean_object* v_x_3600_, lean_object* v_x_3601_, lean_object* v_x_3602_, lean_object* v_x_3603_, lean_object* v_x_3604_){
_start:
{
size_t v_x_6096__boxed_3605_; size_t v_x_6097__boxed_3606_; lean_object* v_res_3607_; 
v_x_6096__boxed_3605_ = lean_unbox_usize(v_x_3601_);
lean_dec(v_x_3601_);
v_x_6097__boxed_3606_ = lean_unbox_usize(v_x_3602_);
lean_dec(v_x_3602_);
v_res_3607_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1(v_00_u03b2_3599_, v_x_3600_, v_x_6096__boxed_3605_, v_x_6097__boxed_3606_, v_x_3603_, v_x_3604_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3608_, lean_object* v_n_3609_, lean_object* v_k_3610_, lean_object* v_v_3611_){
_start:
{
lean_object* v___x_3612_; 
v___x_3612_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3___redArg(v_n_3609_, v_k_3610_, v_v_3611_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_3613_, size_t v_depth_3614_, lean_object* v_keys_3615_, lean_object* v_vals_3616_, lean_object* v_heq_3617_, lean_object* v_i_3618_, lean_object* v_entries_3619_){
_start:
{
lean_object* v___x_3620_; 
v___x_3620_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_3614_, v_keys_3615_, v_vals_3616_, v_i_3618_, v_entries_3619_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_3621_, lean_object* v_depth_3622_, lean_object* v_keys_3623_, lean_object* v_vals_3624_, lean_object* v_heq_3625_, lean_object* v_i_3626_, lean_object* v_entries_3627_){
_start:
{
size_t v_depth_boxed_3628_; lean_object* v_res_3629_; 
v_depth_boxed_3628_ = lean_unbox_usize(v_depth_3622_);
lean_dec(v_depth_3622_);
v_res_3629_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_3621_, v_depth_boxed_3628_, v_keys_3623_, v_vals_3624_, v_heq_3625_, v_i_3626_, v_entries_3627_);
lean_dec_ref(v_vals_3624_);
lean_dec_ref(v_keys_3623_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_3630_, lean_object* v_x_3631_, lean_object* v_x_3632_, lean_object* v_x_3633_, lean_object* v_x_3634_){
_start:
{
lean_object* v___x_3635_; 
v___x_3635_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue_spec__0_spec__0_spec__1_spec__3_spec__4___redArg(v_x_3631_, v_x_3632_, v_x_3633_, v_x_3634_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(lean_object* v_ctorVal_3636_, lean_object* v_val_3637_, lean_object* v_name_3638_, lean_object* v_levelParams_3639_, uint8_t v___x_3640_, uint8_t v_hasTrace_3641_, lean_object* v_____r_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_){
_start:
{
lean_object* v___x_3648_; 
lean_inc_ref(v_val_3637_);
v___x_3648_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3636_, v_val_3637_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_);
if (lean_obj_tag(v___x_3648_) == 0)
{
lean_object* v_a_3649_; lean_object* v___x_3650_; lean_object* v_a_3651_; lean_object* v___x_3652_; lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3669_; 
v_a_3649_ = lean_ctor_get(v___x_3648_, 0);
lean_inc(v_a_3649_);
lean_dec_ref_known(v___x_3648_, 1);
v___x_3650_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3637_, v___y_3644_);
v_a_3651_ = lean_ctor_get(v___x_3650_, 0);
lean_inc(v_a_3651_);
lean_dec_ref(v___x_3650_);
v___x_3652_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3649_, v___y_3644_);
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3655_ = v___x_3652_;
v_isShared_3656_ = v_isSharedCheck_3669_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v___x_3652_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3669_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3662_; 
lean_inc_n(v_name_3638_, 2);
v___x_3657_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3657_, 0, v_name_3638_);
lean_ctor_set(v___x_3657_, 1, v_levelParams_3639_);
lean_ctor_set(v___x_3657_, 2, v_a_3651_);
v___x_3658_ = lean_box(0);
v___x_3659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3659_, 0, v_name_3638_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
v___x_3660_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3657_);
lean_ctor_set(v___x_3660_, 1, v_a_3653_);
lean_ctor_set(v___x_3660_, 2, v___x_3659_);
if (v_isShared_3656_ == 0)
{
lean_ctor_set_tag(v___x_3655_, 2);
lean_ctor_set(v___x_3655_, 0, v___x_3660_);
v___x_3662_ = v___x_3655_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3660_);
v___x_3662_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
lean_object* v___x_3663_; 
v___x_3663_ = l_Lean_addDecl(v___x_3662_, v___x_3640_, v___y_3645_, v___y_3646_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v___x_3664_; uint8_t v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
lean_dec_ref_known(v___x_3663_, 1);
v___x_3664_ = l_Lean_Meta_simpExtension;
v___x_3665_ = 0;
v___x_3666_ = lean_unsigned_to_nat(1000u);
v___x_3667_ = l_Lean_Meta_addSimpTheorem(v___x_3664_, v_name_3638_, v_hasTrace_3641_, v___x_3640_, v___x_3665_, v___x_3666_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_);
return v___x_3667_;
}
else
{
lean_dec(v_name_3638_);
return v___x_3663_;
}
}
}
}
else
{
lean_object* v_a_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3677_; 
lean_dec(v_levelParams_3639_);
lean_dec(v_name_3638_);
lean_dec_ref(v_val_3637_);
v_a_3670_ = lean_ctor_get(v___x_3648_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3648_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3672_ = v___x_3648_;
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_a_3670_);
lean_dec(v___x_3648_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3675_; 
if (v_isShared_3673_ == 0)
{
v___x_3675_ = v___x_3672_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_a_3670_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1___boxed(lean_object* v_ctorVal_3678_, lean_object* v_val_3679_, lean_object* v_name_3680_, lean_object* v_levelParams_3681_, lean_object* v___x_3682_, lean_object* v_hasTrace_3683_, lean_object* v_____r_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_){
_start:
{
uint8_t v___x_8777__boxed_3690_; uint8_t v_hasTrace_boxed_3691_; lean_object* v_res_3692_; 
v___x_8777__boxed_3690_ = lean_unbox(v___x_3682_);
v_hasTrace_boxed_3691_ = lean_unbox(v_hasTrace_3683_);
v_res_3692_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3678_, v_val_3679_, v_name_3680_, v_levelParams_3681_, v___x_8777__boxed_3690_, v_hasTrace_boxed_3691_, v_____r_3684_, v___y_3685_, v___y_3686_, v___y_3687_, v___y_3688_);
lean_dec(v___y_3688_);
lean_dec_ref(v___y_3687_);
lean_dec(v___y_3686_);
lean_dec_ref(v___y_3685_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(lean_object* v_ctorVal_3693_, lean_object* v_val_3694_, lean_object* v_name_3695_, lean_object* v_levelParams_3696_, uint8_t v___x_3697_, lean_object* v_____r_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v___x_3704_; 
lean_inc_ref(v_val_3694_);
v___x_3704_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3693_, v_val_3694_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___x_3706_; lean_object* v_a_3707_; lean_object* v___x_3708_; lean_object* v_a_3709_; lean_object* v___x_3711_; uint8_t v_isShared_3712_; uint8_t v_isSharedCheck_3726_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
lean_inc(v_a_3705_);
lean_dec_ref_known(v___x_3704_, 1);
v___x_3706_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3694_, v___y_3700_);
v_a_3707_ = lean_ctor_get(v___x_3706_, 0);
lean_inc(v_a_3707_);
lean_dec_ref(v___x_3706_);
v___x_3708_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3705_, v___y_3700_);
v_a_3709_ = lean_ctor_get(v___x_3708_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3708_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3711_ = v___x_3708_;
v_isShared_3712_ = v_isSharedCheck_3726_;
goto v_resetjp_3710_;
}
else
{
lean_inc(v_a_3709_);
lean_dec(v___x_3708_);
v___x_3711_ = lean_box(0);
v_isShared_3712_ = v_isSharedCheck_3726_;
goto v_resetjp_3710_;
}
v_resetjp_3710_:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3718_; 
lean_inc_n(v_name_3695_, 2);
v___x_3713_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3713_, 0, v_name_3695_);
lean_ctor_set(v___x_3713_, 1, v_levelParams_3696_);
lean_ctor_set(v___x_3713_, 2, v_a_3707_);
v___x_3714_ = lean_box(0);
v___x_3715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3715_, 0, v_name_3695_);
lean_ctor_set(v___x_3715_, 1, v___x_3714_);
v___x_3716_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3713_);
lean_ctor_set(v___x_3716_, 1, v_a_3709_);
lean_ctor_set(v___x_3716_, 2, v___x_3715_);
if (v_isShared_3712_ == 0)
{
lean_ctor_set_tag(v___x_3711_, 2);
lean_ctor_set(v___x_3711_, 0, v___x_3716_);
v___x_3718_ = v___x_3711_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3716_);
v___x_3718_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
uint8_t v___x_3719_; lean_object* v___x_3720_; 
v___x_3719_ = 0;
v___x_3720_ = l_Lean_addDecl(v___x_3718_, v___x_3719_, v___y_3701_, v___y_3702_);
if (lean_obj_tag(v___x_3720_) == 0)
{
lean_object* v___x_3721_; uint8_t v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; 
lean_dec_ref_known(v___x_3720_, 1);
v___x_3721_ = l_Lean_Meta_simpExtension;
v___x_3722_ = 0;
v___x_3723_ = lean_unsigned_to_nat(1000u);
v___x_3724_ = l_Lean_Meta_addSimpTheorem(v___x_3721_, v_name_3695_, v___x_3697_, v___x_3719_, v___x_3722_, v___x_3723_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
return v___x_3724_;
}
else
{
lean_dec(v_name_3695_);
return v___x_3720_;
}
}
}
}
else
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
lean_dec(v_levelParams_3696_);
lean_dec(v_name_3695_);
lean_dec_ref(v_val_3694_);
v_a_3727_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3704_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3704_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0___boxed(lean_object* v_ctorVal_3735_, lean_object* v_val_3736_, lean_object* v_name_3737_, lean_object* v_levelParams_3738_, lean_object* v___x_3739_, lean_object* v_____r_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
uint8_t v___x_8865__boxed_3746_; lean_object* v_res_3747_; 
v___x_8865__boxed_3746_ = lean_unbox(v___x_3739_);
v_res_3747_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3735_, v_val_3736_, v_name_3737_, v_levelParams_3738_, v___x_8865__boxed_3746_, v_____r_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
lean_dec(v___y_3744_);
lean_dec_ref(v___y_3743_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(lean_object* v_ctorVal_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_){
_start:
{
lean_object* v_toConstantVal_3754_; lean_object* v_toCold_3755_; lean_object* v_options_3756_; lean_object* v_name_3757_; lean_object* v_levelParams_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3980_; 
v_toConstantVal_3754_ = lean_ctor_get(v_ctorVal_3748_, 0);
lean_inc_ref(v_toConstantVal_3754_);
v_toCold_3755_ = lean_ctor_get(v_a_3751_, 0);
v_options_3756_ = lean_ctor_get(v_toCold_3755_, 2);
v_name_3757_ = lean_ctor_get(v_toConstantVal_3754_, 0);
v_levelParams_3758_ = lean_ctor_get(v_toConstantVal_3754_, 1);
v_isSharedCheck_3980_ = !lean_is_exclusive(v_toConstantVal_3754_);
if (v_isSharedCheck_3980_ == 0)
{
lean_object* v_unused_3981_; 
v_unused_3981_ = lean_ctor_get(v_toConstantVal_3754_, 2);
lean_dec(v_unused_3981_);
v___x_3760_ = v_toConstantVal_3754_;
v_isShared_3761_ = v_isSharedCheck_3980_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_levelParams_3758_);
lean_inc(v_name_3757_);
lean_dec(v_toConstantVal_3754_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3980_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v_inheritedTraceOptions_3762_; uint8_t v_hasTrace_3763_; lean_object* v_name_3764_; 
v_inheritedTraceOptions_3762_ = lean_ctor_get(v_toCold_3755_, 11);
v_hasTrace_3763_ = lean_ctor_get_uint8(v_options_3756_, sizeof(void*)*1);
v_name_3764_ = l_Lean_Meta_mkInjectiveEqTheoremNameFor(v_name_3757_);
if (v_hasTrace_3763_ == 0)
{
lean_object* v___x_3765_; 
lean_inc_ref(v_ctorVal_3748_);
v___x_3765_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3808_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3808_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3808_ == 0)
{
v___x_3768_ = v___x_3765_;
v_isShared_3769_ = v_isSharedCheck_3808_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3765_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3808_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
if (lean_obj_tag(v_a_3766_) == 1)
{
lean_object* v_val_3770_; lean_object* v___x_3771_; 
lean_del_object(v___x_3768_);
v_val_3770_ = lean_ctor_get(v_a_3766_, 0);
lean_inc_n(v_val_3770_, 2);
lean_dec_ref_known(v_a_3766_, 1);
v___x_3771_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3748_, v_val_3770_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3771_) == 0)
{
lean_object* v_a_3772_; lean_object* v___x_3773_; lean_object* v_a_3774_; lean_object* v___x_3775_; lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3795_; 
v_a_3772_ = lean_ctor_get(v___x_3771_, 0);
lean_inc(v_a_3772_);
lean_dec_ref_known(v___x_3771_, 1);
v___x_3773_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3770_, v_a_3750_);
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_a_3774_);
lean_dec_ref(v___x_3773_);
v___x_3775_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3772_, v_a_3750_);
v_a_3776_ = lean_ctor_get(v___x_3775_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3775_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3778_ = v___x_3775_;
v_isShared_3779_ = v_isSharedCheck_3795_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3775_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3795_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
lean_inc(v_name_3764_);
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 2, v_a_3774_);
lean_ctor_set(v___x_3760_, 0, v_name_3764_);
v___x_3781_ = v___x_3760_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_name_3764_);
lean_ctor_set(v_reuseFailAlloc_3794_, 1, v_levelParams_3758_);
lean_ctor_set(v_reuseFailAlloc_3794_, 2, v_a_3774_);
v___x_3781_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3786_; 
v___x_3782_ = lean_box(0);
lean_inc(v_name_3764_);
v___x_3783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3783_, 0, v_name_3764_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3781_);
lean_ctor_set(v___x_3784_, 1, v_a_3776_);
lean_ctor_set(v___x_3784_, 2, v___x_3783_);
if (v_isShared_3779_ == 0)
{
lean_ctor_set_tag(v___x_3778_, 2);
lean_ctor_set(v___x_3778_, 0, v___x_3784_);
v___x_3786_ = v___x_3778_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v___x_3784_);
v___x_3786_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
lean_object* v___x_3787_; 
v___x_3787_ = l_Lean_addDecl(v___x_3786_, v_hasTrace_3763_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v___x_3788_; uint8_t v___x_3789_; uint8_t v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; 
lean_dec_ref_known(v___x_3787_, 1);
v___x_3788_ = l_Lean_Meta_simpExtension;
v___x_3789_ = 1;
v___x_3790_ = 0;
v___x_3791_ = lean_unsigned_to_nat(1000u);
v___x_3792_ = l_Lean_Meta_addSimpTheorem(v___x_3788_, v_name_3764_, v___x_3789_, v_hasTrace_3763_, v___x_3790_, v___x_3791_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
return v___x_3792_;
}
else
{
lean_dec(v_name_3764_);
return v___x_3787_;
}
}
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec(v_val_3770_);
lean_dec(v_name_3764_);
lean_del_object(v___x_3760_);
lean_dec(v_levelParams_3758_);
v_a_3796_ = lean_ctor_get(v___x_3771_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3771_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3771_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3771_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
else
{
lean_object* v___x_3804_; lean_object* v___x_3806_; 
lean_dec(v_a_3766_);
lean_dec(v_name_3764_);
lean_del_object(v___x_3760_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v___x_3804_ = lean_box(0);
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 0, v___x_3804_);
v___x_3806_ = v___x_3768_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___x_3804_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
}
else
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3816_; 
lean_dec(v_name_3764_);
lean_del_object(v___x_3760_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v_a_3809_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3811_ = v___x_3765_;
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v___x_3765_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_a_3809_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
return v___x_3814_;
}
}
}
}
else
{
lean_object* v___f_3817_; lean_object* v_cls_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v_a_3825_; lean_object* v___y_3835_; lean_object* v___y_3836_; lean_object* v_a_3837_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v_a_3842_; lean_object* v___y_3845_; lean_object* v___y_3846_; lean_object* v___y_3847_; lean_object* v___y_3851_; lean_object* v___y_3852_; lean_object* v_a_3853_; lean_object* v___y_3866_; lean_object* v___y_3867_; lean_object* v_a_3868_; lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v_a_3873_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3878_; 
lean_inc(v_name_3764_);
v___f_3817_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3817_, 0, v_name_3764_);
v_cls_3818_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_3819_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_3820_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_3821_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3762_, v_options_3756_, v___x_3820_);
if (v___x_3821_ == 0)
{
lean_object* v___x_3918_; uint8_t v___x_3919_; 
v___x_3918_ = l_Lean_trace_profiler;
v___x_3919_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_3756_, v___x_3918_);
if (v___x_3919_ == 0)
{
lean_object* v___x_3920_; 
lean_dec_ref(v___f_3817_);
lean_inc_ref(v_ctorVal_3748_);
v___x_3920_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3920_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3971_; 
v_a_3921_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3923_ = v___x_3920_;
v_isShared_3924_ = v_isSharedCheck_3971_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3920_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3971_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
if (lean_obj_tag(v_a_3921_) == 1)
{
lean_object* v_val_3925_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; 
lean_del_object(v___x_3923_);
v_val_3925_ = lean_ctor_get(v_a_3921_, 0);
lean_inc(v_val_3925_);
lean_dec_ref_known(v_a_3921_, 1);
if (v___x_3821_ == 0)
{
v___y_3927_ = v_a_3749_;
v___y_3928_ = v_a_3750_;
v___y_3929_ = v_a_3751_;
v___y_3930_ = v_a_3752_;
goto v___jp_3926_;
}
else
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3963_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
lean_inc(v_val_3925_);
v___x_3964_ = l_Lean_MessageData_ofExpr(v_val_3925_);
v___x_3965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3963_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3818_, v___x_3965_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3966_) == 0)
{
lean_dec_ref_known(v___x_3966_, 1);
v___y_3927_ = v_a_3749_;
v___y_3928_ = v_a_3750_;
v___y_3929_ = v_a_3751_;
v___y_3930_ = v_a_3752_;
goto v___jp_3926_;
}
else
{
lean_dec(v_val_3925_);
lean_dec(v_name_3764_);
lean_del_object(v___x_3760_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
return v___x_3966_;
}
}
v___jp_3926_:
{
lean_object* v___x_3931_; 
lean_inc(v_val_3925_);
v___x_3931_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue(v_ctorVal_3748_, v_val_3925_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
if (lean_obj_tag(v___x_3931_) == 0)
{
lean_object* v_a_3932_; lean_object* v___x_3933_; lean_object* v_a_3934_; lean_object* v___x_3935_; lean_object* v_a_3936_; lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3954_; 
v_a_3932_ = lean_ctor_get(v___x_3931_, 0);
lean_inc(v_a_3932_);
lean_dec_ref_known(v___x_3931_, 1);
v___x_3933_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_val_3925_, v___y_3928_);
v_a_3934_ = lean_ctor_get(v___x_3933_, 0);
lean_inc(v_a_3934_);
lean_dec_ref(v___x_3933_);
v___x_3935_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v_a_3932_, v___y_3928_);
v_a_3936_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3938_ = v___x_3935_;
v_isShared_3939_ = v_isSharedCheck_3954_;
goto v_resetjp_3937_;
}
else
{
lean_inc(v_a_3936_);
lean_dec(v___x_3935_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3954_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
lean_object* v___x_3941_; 
lean_inc(v_name_3764_);
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 2, v_a_3934_);
lean_ctor_set(v___x_3760_, 0, v_name_3764_);
v___x_3941_ = v___x_3760_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v_name_3764_);
lean_ctor_set(v_reuseFailAlloc_3953_, 1, v_levelParams_3758_);
lean_ctor_set(v_reuseFailAlloc_3953_, 2, v_a_3934_);
v___x_3941_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3946_; 
v___x_3942_ = lean_box(0);
lean_inc(v_name_3764_);
v___x_3943_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3943_, 0, v_name_3764_);
lean_ctor_set(v___x_3943_, 1, v___x_3942_);
v___x_3944_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3941_);
lean_ctor_set(v___x_3944_, 1, v_a_3936_);
lean_ctor_set(v___x_3944_, 2, v___x_3943_);
if (v_isShared_3939_ == 0)
{
lean_ctor_set_tag(v___x_3938_, 2);
lean_ctor_set(v___x_3938_, 0, v___x_3944_);
v___x_3946_ = v___x_3938_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v___x_3944_);
v___x_3946_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
lean_object* v___x_3947_; 
v___x_3947_ = l_Lean_addDecl(v___x_3946_, v___x_3919_, v___y_3929_, v___y_3930_);
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v___x_3948_; uint8_t v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
lean_dec_ref_known(v___x_3947_, 1);
v___x_3948_ = l_Lean_Meta_simpExtension;
v___x_3949_ = 0;
v___x_3950_ = lean_unsigned_to_nat(1000u);
v___x_3951_ = l_Lean_Meta_addSimpTheorem(v___x_3948_, v_name_3764_, v_hasTrace_3763_, v___x_3919_, v___x_3949_, v___x_3950_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
return v___x_3951_;
}
else
{
lean_dec(v_name_3764_);
return v___x_3947_;
}
}
}
}
}
else
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3962_; 
lean_dec(v_val_3925_);
lean_dec(v_name_3764_);
lean_del_object(v___x_3760_);
lean_dec(v_levelParams_3758_);
v_a_3955_ = lean_ctor_get(v___x_3931_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3931_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3957_ = v___x_3931_;
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3931_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3955_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
}
else
{
lean_object* v___x_3967_; lean_object* v___x_3969_; 
lean_dec(v_a_3921_);
lean_dec(v_name_3764_);
lean_del_object(v___x_3760_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v___x_3967_ = lean_box(0);
if (v_isShared_3924_ == 0)
{
lean_ctor_set(v___x_3923_, 0, v___x_3967_);
v___x_3969_ = v___x_3923_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v___x_3967_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
return v___x_3969_;
}
}
}
}
else
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3979_; 
lean_dec(v_name_3764_);
lean_del_object(v___x_3760_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v_a_3972_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3974_ = v___x_3920_;
v_isShared_3975_ = v_isSharedCheck_3979_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v___x_3920_);
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
else
{
lean_del_object(v___x_3760_);
goto v___jp_3881_;
}
}
else
{
lean_del_object(v___x_3760_);
goto v___jp_3881_;
}
v___jp_3822_:
{
lean_object* v___x_3826_; double v___x_3827_; double v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3826_ = lean_io_get_num_heartbeats();
v___x_3827_ = lean_float_of_nat(v___y_3824_);
v___x_3828_ = lean_float_of_nat(v___x_3826_);
v___x_3829_ = lean_box_float(v___x_3827_);
v___x_3830_ = lean_box_float(v___x_3828_);
v___x_3831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3831_, 0, v___x_3829_);
lean_ctor_set(v___x_3831_, 1, v___x_3830_);
v___x_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3832_, 0, v_a_3825_);
lean_ctor_set(v___x_3832_, 1, v___x_3831_);
v___x_3833_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_3818_, v_hasTrace_3763_, v___x_3819_, v_options_3756_, v___x_3821_, v___y_3823_, v___f_3817_, v___x_3832_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
return v___x_3833_;
}
v___jp_3834_:
{
lean_object* v___x_3838_; 
v___x_3838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3838_, 0, v_a_3837_);
v___y_3823_ = v___y_3835_;
v___y_3824_ = v___y_3836_;
v_a_3825_ = v___x_3838_;
goto v___jp_3822_;
}
v___jp_3839_:
{
lean_object* v___x_3843_; 
v___x_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3843_, 0, v_a_3842_);
v___y_3823_ = v___y_3840_;
v___y_3824_ = v___y_3841_;
v_a_3825_ = v___x_3843_;
goto v___jp_3822_;
}
v___jp_3844_:
{
if (lean_obj_tag(v___y_3847_) == 0)
{
lean_object* v_a_3848_; 
v_a_3848_ = lean_ctor_get(v___y_3847_, 0);
lean_inc(v_a_3848_);
lean_dec_ref_known(v___y_3847_, 1);
v___y_3840_ = v___y_3845_;
v___y_3841_ = v___y_3846_;
v_a_3842_ = v_a_3848_;
goto v___jp_3839_;
}
else
{
lean_object* v_a_3849_; 
v_a_3849_ = lean_ctor_get(v___y_3847_, 0);
lean_inc(v_a_3849_);
lean_dec_ref_known(v___y_3847_, 1);
v___y_3835_ = v___y_3845_;
v___y_3836_ = v___y_3846_;
v_a_3837_ = v_a_3849_;
goto v___jp_3834_;
}
}
v___jp_3850_:
{
lean_object* v___x_3854_; double v___x_3855_; double v___x_3856_; double v___x_3857_; double v___x_3858_; double v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v___x_3854_ = lean_io_mono_nanos_now();
v___x_3855_ = lean_float_of_nat(v___y_3852_);
v___x_3856_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_3857_ = lean_float_div(v___x_3855_, v___x_3856_);
v___x_3858_ = lean_float_of_nat(v___x_3854_);
v___x_3859_ = lean_float_div(v___x_3858_, v___x_3856_);
v___x_3860_ = lean_box_float(v___x_3857_);
v___x_3861_ = lean_box_float(v___x_3859_);
v___x_3862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3860_);
lean_ctor_set(v___x_3862_, 1, v___x_3861_);
v___x_3863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3863_, 0, v_a_3853_);
lean_ctor_set(v___x_3863_, 1, v___x_3862_);
v___x_3864_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v_cls_3818_, v_hasTrace_3763_, v___x_3819_, v_options_3756_, v___x_3821_, v___y_3851_, v___f_3817_, v___x_3863_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
return v___x_3864_;
}
v___jp_3865_:
{
lean_object* v___x_3869_; 
v___x_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3869_, 0, v_a_3868_);
v___y_3851_ = v___y_3866_;
v___y_3852_ = v___y_3867_;
v_a_3853_ = v___x_3869_;
goto v___jp_3850_;
}
v___jp_3870_:
{
lean_object* v___x_3874_; 
v___x_3874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3874_, 0, v_a_3873_);
v___y_3851_ = v___y_3871_;
v___y_3852_ = v___y_3872_;
v_a_3853_ = v___x_3874_;
goto v___jp_3850_;
}
v___jp_3875_:
{
if (lean_obj_tag(v___y_3878_) == 0)
{
lean_object* v_a_3879_; 
v_a_3879_ = lean_ctor_get(v___y_3878_, 0);
lean_inc(v_a_3879_);
lean_dec_ref_known(v___y_3878_, 1);
v___y_3866_ = v___y_3876_;
v___y_3867_ = v___y_3877_;
v_a_3868_ = v_a_3879_;
goto v___jp_3865_;
}
else
{
lean_object* v_a_3880_; 
v_a_3880_ = lean_ctor_get(v___y_3878_, 0);
lean_inc(v_a_3880_);
lean_dec_ref_known(v___y_3878_, 1);
v___y_3871_ = v___y_3876_;
v___y_3872_ = v___y_3877_;
v_a_3873_ = v_a_3880_;
goto v___jp_3870_;
}
}
v___jp_3881_:
{
lean_object* v___x_3882_; lean_object* v_a_3883_; lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3882_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_3752_);
v_a_3883_ = lean_ctor_get(v___x_3882_, 0);
lean_inc(v_a_3883_);
lean_dec_ref(v___x_3882_);
v___x_3884_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3885_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_3756_, v___x_3884_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3886_ = lean_io_mono_nanos_now();
lean_inc_ref(v_ctorVal_3748_);
v___x_3887_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v_a_3888_; 
v_a_3888_ = lean_ctor_get(v___x_3887_, 0);
lean_inc(v_a_3888_);
lean_dec_ref_known(v___x_3887_, 1);
if (lean_obj_tag(v_a_3888_) == 1)
{
if (v___x_3821_ == 0)
{
lean_object* v_val_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; 
v_val_3889_ = lean_ctor_get(v_a_3888_, 0);
lean_inc(v_val_3889_);
lean_dec_ref_known(v_a_3888_, 1);
v___x_3890_ = lean_box(0);
v___x_3891_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3748_, v_val_3889_, v_name_3764_, v_levelParams_3758_, v___x_3885_, v_hasTrace_3763_, v___x_3890_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
v___y_3876_ = v_a_3883_;
v___y_3877_ = v___x_3886_;
v___y_3878_ = v___x_3891_;
goto v___jp_3875_;
}
else
{
lean_object* v_val_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; 
v_val_3892_ = lean_ctor_get(v_a_3888_, 0);
lean_inc_n(v_val_3892_, 2);
lean_dec_ref_known(v_a_3888_, 1);
v___x_3893_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_3894_ = l_Lean_MessageData_ofExpr(v_val_3892_);
v___x_3895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3893_);
lean_ctor_set(v___x_3895_, 1, v___x_3894_);
v___x_3896_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3818_, v___x_3895_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3898_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3896_, 1);
v___x_3898_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__1(v_ctorVal_3748_, v_val_3892_, v_name_3764_, v_levelParams_3758_, v___x_3885_, v_hasTrace_3763_, v_a_3897_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
v___y_3876_ = v_a_3883_;
v___y_3877_ = v___x_3886_;
v___y_3878_ = v___x_3898_;
goto v___jp_3875_;
}
else
{
lean_object* v_a_3899_; 
lean_dec(v_val_3892_);
lean_dec(v_name_3764_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v_a_3899_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3899_);
lean_dec_ref_known(v___x_3896_, 1);
v___y_3871_ = v_a_3883_;
v___y_3872_ = v___x_3886_;
v_a_3873_ = v_a_3899_;
goto v___jp_3870_;
}
}
}
else
{
lean_object* v___x_3900_; 
lean_dec(v_a_3888_);
lean_dec(v_name_3764_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v___x_3900_ = lean_box(0);
v___y_3866_ = v_a_3883_;
v___y_3867_ = v___x_3886_;
v_a_3868_ = v___x_3900_;
goto v___jp_3865_;
}
}
else
{
lean_object* v_a_3901_; 
lean_dec(v_name_3764_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v_a_3901_ = lean_ctor_get(v___x_3887_, 0);
lean_inc(v_a_3901_);
lean_dec_ref_known(v___x_3887_, 1);
v___y_3871_ = v_a_3883_;
v___y_3872_ = v___x_3886_;
v_a_3873_ = v_a_3901_;
goto v___jp_3870_;
}
}
else
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_ctorVal_3748_);
v___x_3903_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremType_x3f(v_ctorVal_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3903_) == 0)
{
lean_object* v_a_3904_; 
v_a_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3904_);
lean_dec_ref_known(v___x_3903_, 1);
if (lean_obj_tag(v_a_3904_) == 1)
{
if (v___x_3821_ == 0)
{
lean_object* v_val_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; 
v_val_3905_ = lean_ctor_get(v_a_3904_, 0);
lean_inc(v_val_3905_);
lean_dec_ref_known(v_a_3904_, 1);
v___x_3906_ = lean_box(0);
v___x_3907_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3748_, v_val_3905_, v_name_3764_, v_levelParams_3758_, v___x_3885_, v___x_3906_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
v___y_3845_ = v_a_3883_;
v___y_3846_ = v___x_3902_;
v___y_3847_ = v___x_3907_;
goto v___jp_3844_;
}
else
{
lean_object* v_val_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v_val_3908_ = lean_ctor_get(v_a_3904_, 0);
lean_inc_n(v_val_3908_, 2);
lean_dec_ref_known(v_a_3904_, 1);
v___x_3909_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__2);
v___x_3910_ = l_Lean_MessageData_ofExpr(v_val_3908_);
v___x_3911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3909_);
lean_ctor_set(v___x_3911_, 1, v___x_3910_);
v___x_3912_ = l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1(v_cls_3818_, v___x_3911_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3914_; 
v_a_3913_ = lean_ctor_get(v___x_3912_, 0);
lean_inc(v_a_3913_);
lean_dec_ref_known(v___x_3912_, 1);
v___x_3914_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___lam__0(v_ctorVal_3748_, v_val_3908_, v_name_3764_, v_levelParams_3758_, v___x_3885_, v_a_3913_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
v___y_3845_ = v_a_3883_;
v___y_3846_ = v___x_3902_;
v___y_3847_ = v___x_3914_;
goto v___jp_3844_;
}
else
{
lean_object* v_a_3915_; 
lean_dec(v_val_3908_);
lean_dec(v_name_3764_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v_a_3915_ = lean_ctor_get(v___x_3912_, 0);
lean_inc(v_a_3915_);
lean_dec_ref_known(v___x_3912_, 1);
v___y_3835_ = v_a_3883_;
v___y_3836_ = v___x_3902_;
v_a_3837_ = v_a_3915_;
goto v___jp_3834_;
}
}
}
else
{
lean_object* v___x_3916_; 
lean_dec(v_a_3904_);
lean_dec(v_name_3764_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v___x_3916_ = lean_box(0);
v___y_3840_ = v_a_3883_;
v___y_3841_ = v___x_3902_;
v_a_3842_ = v___x_3916_;
goto v___jp_3839_;
}
}
else
{
lean_object* v_a_3917_; 
lean_dec(v_name_3764_);
lean_dec(v_levelParams_3758_);
lean_dec_ref(v_ctorVal_3748_);
v_a_3917_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_a_3917_);
lean_dec_ref_known(v___x_3903_, 1);
v___y_3835_ = v_a_3883_;
v___y_3836_ = v___x_3902_;
v_a_3837_ = v_a_3917_;
goto v___jp_3834_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem___boxed(lean_object* v_ctorVal_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(v_ctorVal_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_);
lean_dec(v_a_3986_);
lean_dec_ref(v_a_3985_);
lean_dec(v_a_3984_);
lean_dec_ref(v_a_3983_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(lean_object* v_name_3989_, lean_object* v_decl_3990_, lean_object* v_ref_3991_){
_start:
{
lean_object* v_defValue_3993_; lean_object* v_descr_3994_; lean_object* v_deprecation_x3f_3995_; lean_object* v___x_3996_; uint8_t v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v_defValue_3993_ = lean_ctor_get(v_decl_3990_, 0);
v_descr_3994_ = lean_ctor_get(v_decl_3990_, 1);
v_deprecation_x3f_3995_ = lean_ctor_get(v_decl_3990_, 2);
v___x_3996_ = lean_alloc_ctor(1, 0, 1);
v___x_3997_ = lean_unbox(v_defValue_3993_);
lean_ctor_set_uint8(v___x_3996_, 0, v___x_3997_);
lean_inc(v_deprecation_x3f_3995_);
lean_inc_ref(v_descr_3994_);
lean_inc_n(v_name_3989_, 2);
v___x_3998_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3998_, 0, v_name_3989_);
lean_ctor_set(v___x_3998_, 1, v_ref_3991_);
lean_ctor_set(v___x_3998_, 2, v___x_3996_);
lean_ctor_set(v___x_3998_, 3, v_descr_3994_);
lean_ctor_set(v___x_3998_, 4, v_deprecation_x3f_3995_);
v___x_3999_ = lean_register_option(v_name_3989_, v___x_3998_);
if (lean_obj_tag(v___x_3999_) == 0)
{
lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4007_; 
v_isSharedCheck_4007_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4007_ == 0)
{
lean_object* v_unused_4008_; 
v_unused_4008_ = lean_ctor_get(v___x_3999_, 0);
lean_dec(v_unused_4008_);
v___x_4001_ = v___x_3999_;
v_isShared_4002_ = v_isSharedCheck_4007_;
goto v_resetjp_4000_;
}
else
{
lean_dec(v___x_3999_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4007_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4003_; lean_object* v___x_4005_; 
lean_inc(v_defValue_3993_);
v___x_4003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4003_, 0, v_name_3989_);
lean_ctor_set(v___x_4003_, 1, v_defValue_3993_);
if (v_isShared_4002_ == 0)
{
lean_ctor_set(v___x_4001_, 0, v___x_4003_);
v___x_4005_ = v___x_4001_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v___x_4003_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
return v___x_4005_;
}
}
}
else
{
lean_object* v_a_4009_; lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4016_; 
lean_dec(v_name_3989_);
v_a_4009_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4016_ == 0)
{
v___x_4011_ = v___x_3999_;
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
else
{
lean_inc(v_a_4009_);
lean_dec(v___x_3999_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4016_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v___x_4014_; 
if (v_isShared_4012_ == 0)
{
v___x_4014_ = v___x_4011_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v_a_4009_);
v___x_4014_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
return v___x_4014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_4017_, lean_object* v_decl_4018_, lean_object* v_ref_4019_, lean_object* v_a_4020_){
_start:
{
lean_object* v_res_4021_; 
v_res_4021_ = l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(v_name_4017_, v_decl_4018_, v_ref_4019_);
lean_dec_ref(v_decl_4018_);
return v_res_4021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4036_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_4037_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_4038_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_));
v___x_4039_ = l_Lean_Option_register___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4__spec__0(v___x_4036_, v___x_4037_, v___x_4038_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4____boxed(lean_object* v_a_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(lean_object* v_lctx_4042_, lean_object* v_localInsts_4043_, lean_object* v_x_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v___x_4050_; 
v___x_4050_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_4042_, v_localInsts_4043_, v_x_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_);
if (lean_obj_tag(v___x_4050_) == 0)
{
lean_object* v_a_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4058_; 
v_a_4051_ = lean_ctor_get(v___x_4050_, 0);
v_isSharedCheck_4058_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4058_ == 0)
{
v___x_4053_ = v___x_4050_;
v_isShared_4054_ = v_isSharedCheck_4058_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_a_4051_);
lean_dec(v___x_4050_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4058_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
lean_object* v___x_4056_; 
if (v_isShared_4054_ == 0)
{
v___x_4056_ = v___x_4053_;
goto v_reusejp_4055_;
}
else
{
lean_object* v_reuseFailAlloc_4057_; 
v_reuseFailAlloc_4057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4057_, 0, v_a_4051_);
v___x_4056_ = v_reuseFailAlloc_4057_;
goto v_reusejp_4055_;
}
v_reusejp_4055_:
{
return v___x_4056_;
}
}
}
else
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
v_a_4059_ = lean_ctor_get(v___x_4050_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4050_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4050_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg___boxed(lean_object* v_lctx_4067_, lean_object* v_localInsts_4068_, lean_object* v_x_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_){
_start:
{
lean_object* v_res_4075_; 
v_res_4075_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v_lctx_4067_, v_localInsts_4068_, v_x_4069_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_);
lean_dec(v___y_4073_);
lean_dec_ref(v___y_4072_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(lean_object* v_00_u03b1_4076_, lean_object* v_lctx_4077_, lean_object* v_localInsts_4078_, lean_object* v_x_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v___x_4085_; 
v___x_4085_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v_lctx_4077_, v_localInsts_4078_, v_x_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_);
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___boxed(lean_object* v_00_u03b1_4086_, lean_object* v_lctx_4087_, lean_object* v_localInsts_4088_, lean_object* v_x_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_){
_start:
{
lean_object* v_res_4095_; 
v_res_4095_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4(v_00_u03b1_4086_, v_lctx_4087_, v_localInsts_4088_, v_x_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_);
lean_dec(v___y_4093_);
lean_dec_ref(v___y_4092_);
lean_dec(v___y_4091_);
lean_dec_ref(v___y_4090_);
return v_res_4095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0(lean_object* v_declName_4096_, lean_object* v_x_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
lean_object* v___x_4103_; lean_object* v___x_4104_; 
v___x_4103_ = l_Lean_MessageData_ofName(v_declName_4096_);
v___x_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
return v___x_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed(lean_object* v_declName_4105_, lean_object* v_x_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v_res_4112_; 
v_res_4112_ = l_Lean_Meta_mkInjectiveTheorems___lam__0(v_declName_4105_, v_x_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_);
lean_dec(v___y_4110_);
lean_dec_ref(v___y_4109_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec_ref(v_x_4106_);
return v_res_4112_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = l_instMonadEIO___redArg();
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(lean_object* v_msg_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_){
_start:
{
lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v_toApplicative_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4187_; 
v___x_4124_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__0);
v___x_4125_ = l_StateRefT_x27_instMonad___redArg(v___x_4124_);
v_toApplicative_4126_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4187_ == 0)
{
lean_object* v_unused_4188_; 
v_unused_4188_ = lean_ctor_get(v___x_4125_, 1);
lean_dec(v_unused_4188_);
v___x_4128_ = v___x_4125_;
v_isShared_4129_ = v_isSharedCheck_4187_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_toApplicative_4126_);
lean_dec(v___x_4125_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4187_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v_toFunctor_4130_; lean_object* v_toSeq_4131_; lean_object* v_toSeqLeft_4132_; lean_object* v_toSeqRight_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4185_; 
v_toFunctor_4130_ = lean_ctor_get(v_toApplicative_4126_, 0);
v_toSeq_4131_ = lean_ctor_get(v_toApplicative_4126_, 2);
v_toSeqLeft_4132_ = lean_ctor_get(v_toApplicative_4126_, 3);
v_toSeqRight_4133_ = lean_ctor_get(v_toApplicative_4126_, 4);
v_isSharedCheck_4185_ = !lean_is_exclusive(v_toApplicative_4126_);
if (v_isSharedCheck_4185_ == 0)
{
lean_object* v_unused_4186_; 
v_unused_4186_ = lean_ctor_get(v_toApplicative_4126_, 1);
lean_dec(v_unused_4186_);
v___x_4135_ = v_toApplicative_4126_;
v_isShared_4136_ = v_isSharedCheck_4185_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_toSeqRight_4133_);
lean_inc(v_toSeqLeft_4132_);
lean_inc(v_toSeq_4131_);
lean_inc(v_toFunctor_4130_);
lean_dec(v_toApplicative_4126_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4185_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___f_4137_; lean_object* v___f_4138_; lean_object* v___f_4139_; lean_object* v___f_4140_; lean_object* v___x_4141_; lean_object* v___f_4142_; lean_object* v___f_4143_; lean_object* v___f_4144_; lean_object* v___x_4146_; 
v___f_4137_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__1));
v___f_4138_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__2));
lean_inc_ref(v_toFunctor_4130_);
v___f_4139_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4139_, 0, v_toFunctor_4130_);
v___f_4140_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4140_, 0, v_toFunctor_4130_);
v___x_4141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4141_, 0, v___f_4139_);
lean_ctor_set(v___x_4141_, 1, v___f_4140_);
v___f_4142_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4142_, 0, v_toSeqRight_4133_);
v___f_4143_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4143_, 0, v_toSeqLeft_4132_);
v___f_4144_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4144_, 0, v_toSeq_4131_);
if (v_isShared_4136_ == 0)
{
lean_ctor_set(v___x_4135_, 4, v___f_4142_);
lean_ctor_set(v___x_4135_, 3, v___f_4143_);
lean_ctor_set(v___x_4135_, 2, v___f_4144_);
lean_ctor_set(v___x_4135_, 1, v___f_4137_);
lean_ctor_set(v___x_4135_, 0, v___x_4141_);
v___x_4146_ = v___x_4135_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v___x_4141_);
lean_ctor_set(v_reuseFailAlloc_4184_, 1, v___f_4137_);
lean_ctor_set(v_reuseFailAlloc_4184_, 2, v___f_4144_);
lean_ctor_set(v_reuseFailAlloc_4184_, 3, v___f_4143_);
lean_ctor_set(v_reuseFailAlloc_4184_, 4, v___f_4142_);
v___x_4146_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
lean_object* v___x_4148_; 
if (v_isShared_4129_ == 0)
{
lean_ctor_set(v___x_4128_, 1, v___f_4138_);
lean_ctor_set(v___x_4128_, 0, v___x_4146_);
v___x_4148_ = v___x_4128_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___x_4146_);
lean_ctor_set(v_reuseFailAlloc_4183_, 1, v___f_4138_);
v___x_4148_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
lean_object* v___x_4149_; lean_object* v_toApplicative_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4181_; 
v___x_4149_ = l_StateRefT_x27_instMonad___redArg(v___x_4148_);
v_toApplicative_4150_ = lean_ctor_get(v___x_4149_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4149_);
if (v_isSharedCheck_4181_ == 0)
{
lean_object* v_unused_4182_; 
v_unused_4182_ = lean_ctor_get(v___x_4149_, 1);
lean_dec(v_unused_4182_);
v___x_4152_ = v___x_4149_;
v_isShared_4153_ = v_isSharedCheck_4181_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_toApplicative_4150_);
lean_dec(v___x_4149_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4181_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v_toFunctor_4154_; lean_object* v_toSeq_4155_; lean_object* v_toSeqLeft_4156_; lean_object* v_toSeqRight_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4179_; 
v_toFunctor_4154_ = lean_ctor_get(v_toApplicative_4150_, 0);
v_toSeq_4155_ = lean_ctor_get(v_toApplicative_4150_, 2);
v_toSeqLeft_4156_ = lean_ctor_get(v_toApplicative_4150_, 3);
v_toSeqRight_4157_ = lean_ctor_get(v_toApplicative_4150_, 4);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_toApplicative_4150_);
if (v_isSharedCheck_4179_ == 0)
{
lean_object* v_unused_4180_; 
v_unused_4180_ = lean_ctor_get(v_toApplicative_4150_, 1);
lean_dec(v_unused_4180_);
v___x_4159_ = v_toApplicative_4150_;
v_isShared_4160_ = v_isSharedCheck_4179_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_toSeqRight_4157_);
lean_inc(v_toSeqLeft_4156_);
lean_inc(v_toSeq_4155_);
lean_inc(v_toFunctor_4154_);
lean_dec(v_toApplicative_4150_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4179_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___f_4161_; lean_object* v___f_4162_; lean_object* v___f_4163_; lean_object* v___f_4164_; lean_object* v___x_4165_; lean_object* v___f_4166_; lean_object* v___f_4167_; lean_object* v___f_4168_; lean_object* v___x_4170_; 
v___f_4161_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__3));
v___f_4162_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___closed__4));
lean_inc_ref(v_toFunctor_4154_);
v___f_4163_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4163_, 0, v_toFunctor_4154_);
v___f_4164_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4164_, 0, v_toFunctor_4154_);
v___x_4165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4165_, 0, v___f_4163_);
lean_ctor_set(v___x_4165_, 1, v___f_4164_);
v___f_4166_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4166_, 0, v_toSeqRight_4157_);
v___f_4167_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4167_, 0, v_toSeqLeft_4156_);
v___f_4168_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4168_, 0, v_toSeq_4155_);
if (v_isShared_4160_ == 0)
{
lean_ctor_set(v___x_4159_, 4, v___f_4166_);
lean_ctor_set(v___x_4159_, 3, v___f_4167_);
lean_ctor_set(v___x_4159_, 2, v___f_4168_);
lean_ctor_set(v___x_4159_, 1, v___f_4161_);
lean_ctor_set(v___x_4159_, 0, v___x_4165_);
v___x_4170_ = v___x_4159_;
goto v_reusejp_4169_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v___x_4165_);
lean_ctor_set(v_reuseFailAlloc_4178_, 1, v___f_4161_);
lean_ctor_set(v_reuseFailAlloc_4178_, 2, v___f_4168_);
lean_ctor_set(v_reuseFailAlloc_4178_, 3, v___f_4167_);
lean_ctor_set(v_reuseFailAlloc_4178_, 4, v___f_4166_);
v___x_4170_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4169_;
}
v_reusejp_4169_:
{
lean_object* v___x_4172_; 
if (v_isShared_4153_ == 0)
{
lean_ctor_set(v___x_4152_, 1, v___f_4162_);
lean_ctor_set(v___x_4152_, 0, v___x_4170_);
v___x_4172_ = v___x_4152_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v___x_4170_);
lean_ctor_set(v_reuseFailAlloc_4177_, 1, v___f_4162_);
v___x_4172_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_17837__overap_4175_; lean_object* v___x_4176_; 
v___x_4173_ = lean_box(0);
v___x_4174_ = l_instInhabitedOfMonad___redArg(v___x_4172_, v___x_4173_);
v___x_17837__overap_4175_ = lean_panic_fn_borrowed(v___x_4174_, v_msg_4118_);
lean_dec(v___x_4174_);
lean_inc(v___y_4122_);
lean_inc_ref(v___y_4121_);
lean_inc(v___y_4120_);
lean_inc_ref(v___y_4119_);
v___x_4176_ = lean_apply_5(v___x_17837__overap_4175_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, lean_box(0));
return v___x_4176_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1___boxed(lean_object* v_msg_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
lean_object* v_res_4195_; 
v_res_4195_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(v_msg_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_);
lean_dec(v___y_4193_);
lean_dec_ref(v___y_4192_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
return v_res_4195_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1(void){
_start:
{
lean_object* v___x_4197_; lean_object* v___x_4198_; 
v___x_4197_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__0));
v___x_4198_ = l_Lean_stringToMessageData(v___x_4197_);
return v___x_4198_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4(void){
_start:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4201_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__2));
v___x_4202_ = lean_unsigned_to_nat(11u);
v___x_4203_ = lean_unsigned_to_nat(122u);
v___x_4204_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__3));
v___x_4205_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__2));
v___x_4206_ = l_mkPanicMessageWithDecl(v___x_4205_, v___x_4204_, v___x_4203_, v___x_4202_, v___x_4201_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(lean_object* v_constName_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_){
_start:
{
lean_object* v___x_4221_; lean_object* v_env_4222_; uint8_t v___x_4223_; lean_object* v___x_4224_; 
v___x_4221_ = lean_st_ref_get(v___y_4211_);
v_env_4222_ = lean_ctor_get(v___x_4221_, 0);
lean_inc_ref(v_env_4222_);
lean_dec(v___x_4221_);
v___x_4223_ = 0;
lean_inc(v_constName_4207_);
v___x_4224_ = l_Lean_Environment_findAsync_x3f(v_env_4222_, v_constName_4207_, v___x_4223_);
if (lean_obj_tag(v___x_4224_) == 1)
{
lean_object* v_val_4225_; uint8_t v_kind_4226_; 
v_val_4225_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_val_4225_);
lean_dec_ref_known(v___x_4224_, 1);
v_kind_4226_ = lean_ctor_get_uint8(v_val_4225_, sizeof(void*)*3);
if (v_kind_4226_ == 6)
{
lean_object* v___x_4227_; 
v___x_4227_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_4225_);
if (lean_obj_tag(v___x_4227_) == 6)
{
lean_object* v_val_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4235_; 
lean_dec(v_constName_4207_);
v_val_4228_ = lean_ctor_get(v___x_4227_, 0);
v_isSharedCheck_4235_ = !lean_is_exclusive(v___x_4227_);
if (v_isSharedCheck_4235_ == 0)
{
v___x_4230_ = v___x_4227_;
v_isShared_4231_ = v_isSharedCheck_4235_;
goto v_resetjp_4229_;
}
else
{
lean_inc(v_val_4228_);
lean_dec(v___x_4227_);
v___x_4230_ = lean_box(0);
v_isShared_4231_ = v_isSharedCheck_4235_;
goto v_resetjp_4229_;
}
v_resetjp_4229_:
{
lean_object* v___x_4233_; 
if (v_isShared_4231_ == 0)
{
lean_ctor_set_tag(v___x_4230_, 0);
v___x_4233_ = v___x_4230_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v_val_4228_);
v___x_4233_ = v_reuseFailAlloc_4234_;
goto v_reusejp_4232_;
}
v_reusejp_4232_:
{
return v___x_4233_;
}
}
}
else
{
lean_object* v___x_4236_; lean_object* v___x_4237_; 
lean_dec_ref(v___x_4227_);
v___x_4236_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__4);
v___x_4237_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1_spec__1(v___x_4236_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_);
if (lean_obj_tag(v___x_4237_) == 0)
{
lean_object* v_a_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4246_; 
v_a_4238_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4240_ = v___x_4237_;
v_isShared_4241_ = v_isSharedCheck_4246_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_a_4238_);
lean_dec(v___x_4237_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4246_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
if (lean_obj_tag(v_a_4238_) == 0)
{
lean_del_object(v___x_4240_);
goto v___jp_4213_;
}
else
{
lean_object* v_val_4242_; lean_object* v___x_4244_; 
lean_dec(v_constName_4207_);
v_val_4242_ = lean_ctor_get(v_a_4238_, 0);
lean_inc(v_val_4242_);
lean_dec_ref_known(v_a_4238_, 1);
if (v_isShared_4241_ == 0)
{
lean_ctor_set(v___x_4240_, 0, v_val_4242_);
v___x_4244_ = v___x_4240_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_val_4242_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
}
}
else
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4254_; 
lean_dec(v_constName_4207_);
v_a_4247_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4249_ = v___x_4237_;
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4237_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4252_; 
if (v_isShared_4250_ == 0)
{
v___x_4252_ = v___x_4249_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4253_; 
v_reuseFailAlloc_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4253_, 0, v_a_4247_);
v___x_4252_ = v_reuseFailAlloc_4253_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
return v___x_4252_;
}
}
}
}
}
else
{
lean_dec(v_val_4225_);
goto v___jp_4213_;
}
}
else
{
lean_dec(v___x_4224_);
goto v___jp_4213_;
}
v___jp_4213_:
{
lean_object* v___x_4214_; uint8_t v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4214_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_4215_ = 0;
v___x_4216_ = l_Lean_MessageData_ofConstName(v_constName_4207_, v___x_4215_);
v___x_4217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4217_, 0, v___x_4214_);
lean_ctor_set(v___x_4217_, 1, v___x_4216_);
v___x_4218_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___closed__1);
v___x_4219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4217_);
lean_ctor_set(v___x_4219_, 1, v___x_4218_);
v___x_4220_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_4219_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_);
return v___x_4220_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1___boxed(lean_object* v_constName_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_){
_start:
{
lean_object* v_res_4261_; 
v_res_4261_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(v_constName_4255_, v___y_4256_, v___y_4257_, v___y_4258_, v___y_4259_);
lean_dec(v___y_4259_);
lean_dec_ref(v___y_4258_);
lean_dec(v___y_4257_);
lean_dec_ref(v___y_4256_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(lean_object* v_head_4262_, lean_object* v___x_4263_, lean_object* v___x_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_){
_start:
{
lean_object* v___x_4270_; 
v___x_4270_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkInjectiveTheorems_spec__1(v_head_4262_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
if (lean_obj_tag(v___x_4270_) == 0)
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4282_; 
v_a_4271_ = lean_ctor_get(v___x_4270_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4273_ = v___x_4270_;
v_isShared_4274_ = v_isSharedCheck_4282_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4270_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4282_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v_numFields_4275_; uint8_t v___x_4276_; 
v_numFields_4275_ = lean_ctor_get(v_a_4271_, 4);
v___x_4276_ = lean_nat_dec_lt(v___x_4263_, v_numFields_4275_);
if (v___x_4276_ == 0)
{
lean_object* v___x_4278_; 
lean_dec(v_a_4271_);
if (v_isShared_4274_ == 0)
{
lean_ctor_set(v___x_4273_, 0, v___x_4264_);
v___x_4278_ = v___x_4273_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v___x_4264_);
v___x_4278_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
return v___x_4278_;
}
}
else
{
lean_object* v___x_4280_; 
lean_del_object(v___x_4273_);
lean_inc(v_a_4271_);
v___x_4280_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem(v_a_4271_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
if (lean_obj_tag(v___x_4280_) == 0)
{
lean_object* v___x_4281_; 
lean_dec_ref_known(v___x_4280_, 1);
v___x_4281_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheorem(v_a_4271_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
return v___x_4281_;
}
else
{
lean_dec(v_a_4271_);
return v___x_4280_;
}
}
}
}
else
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4290_; 
v_a_4283_ = lean_ctor_get(v___x_4270_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4285_ = v___x_4270_;
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v___x_4270_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed(lean_object* v_head_4291_, lean_object* v___x_4292_, lean_object* v___x_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_){
_start:
{
lean_object* v_res_4299_; 
v_res_4299_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0(v_head_4291_, v___x_4292_, v___x_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_);
lean_dec(v___y_4297_);
lean_dec_ref(v___y_4296_);
lean_dec(v___y_4295_);
lean_dec_ref(v___y_4294_);
lean_dec(v___x_4292_);
return v_res_4299_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_4300_; 
v___x_4300_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4300_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_4301_; lean_object* v___x_4302_; 
v___x_4301_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0);
v___x_4302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4301_);
return v___x_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg(){
_start:
{
lean_object* v___x_4304_; 
v___x_4304_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__1);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v___dummy_4305_){
_start:
{
lean_object* v_res_4306_; 
v_res_4306_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg();
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(lean_object* v___y_4307_, uint8_t v_isExporting_4308_, lean_object* v___x_4309_, lean_object* v___y_4310_, lean_object* v___x_4311_, lean_object* v_a_x3f_4312_){
_start:
{
lean_object* v___x_4314_; lean_object* v_env_4315_; lean_object* v_nextMacroScope_4316_; lean_object* v_ngen_4317_; lean_object* v_auxDeclNGen_4318_; lean_object* v_traceState_4319_; lean_object* v_recordedDeps_4320_; lean_object* v_messages_4321_; lean_object* v_infoState_4322_; lean_object* v_snapshotTasks_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4348_; 
v___x_4314_ = lean_st_ref_take(v___y_4307_);
v_env_4315_ = lean_ctor_get(v___x_4314_, 0);
v_nextMacroScope_4316_ = lean_ctor_get(v___x_4314_, 1);
v_ngen_4317_ = lean_ctor_get(v___x_4314_, 2);
v_auxDeclNGen_4318_ = lean_ctor_get(v___x_4314_, 3);
v_traceState_4319_ = lean_ctor_get(v___x_4314_, 4);
v_recordedDeps_4320_ = lean_ctor_get(v___x_4314_, 6);
v_messages_4321_ = lean_ctor_get(v___x_4314_, 7);
v_infoState_4322_ = lean_ctor_get(v___x_4314_, 8);
v_snapshotTasks_4323_ = lean_ctor_get(v___x_4314_, 9);
v_isSharedCheck_4348_ = !lean_is_exclusive(v___x_4314_);
if (v_isSharedCheck_4348_ == 0)
{
lean_object* v_unused_4349_; 
v_unused_4349_ = lean_ctor_get(v___x_4314_, 5);
lean_dec(v_unused_4349_);
v___x_4325_ = v___x_4314_;
v_isShared_4326_ = v_isSharedCheck_4348_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_snapshotTasks_4323_);
lean_inc(v_infoState_4322_);
lean_inc(v_messages_4321_);
lean_inc(v_recordedDeps_4320_);
lean_inc(v_traceState_4319_);
lean_inc(v_auxDeclNGen_4318_);
lean_inc(v_ngen_4317_);
lean_inc(v_nextMacroScope_4316_);
lean_inc(v_env_4315_);
lean_dec(v___x_4314_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4348_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4327_; lean_object* v___x_4329_; 
v___x_4327_ = l_Lean_Environment_setExporting(v_env_4315_, v_isExporting_4308_);
if (v_isShared_4326_ == 0)
{
lean_ctor_set(v___x_4325_, 5, v___x_4309_);
lean_ctor_set(v___x_4325_, 0, v___x_4327_);
v___x_4329_ = v___x_4325_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v___x_4327_);
lean_ctor_set(v_reuseFailAlloc_4347_, 1, v_nextMacroScope_4316_);
lean_ctor_set(v_reuseFailAlloc_4347_, 2, v_ngen_4317_);
lean_ctor_set(v_reuseFailAlloc_4347_, 3, v_auxDeclNGen_4318_);
lean_ctor_set(v_reuseFailAlloc_4347_, 4, v_traceState_4319_);
lean_ctor_set(v_reuseFailAlloc_4347_, 5, v___x_4309_);
lean_ctor_set(v_reuseFailAlloc_4347_, 6, v_recordedDeps_4320_);
lean_ctor_set(v_reuseFailAlloc_4347_, 7, v_messages_4321_);
lean_ctor_set(v_reuseFailAlloc_4347_, 8, v_infoState_4322_);
lean_ctor_set(v_reuseFailAlloc_4347_, 9, v_snapshotTasks_4323_);
v___x_4329_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v_mctx_4332_; lean_object* v_zetaDeltaFVarIds_4333_; lean_object* v_postponed_4334_; lean_object* v_diag_4335_; lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4345_; 
v___x_4330_ = lean_st_ref_put(v___y_4307_, v___x_4329_);
v___x_4331_ = lean_st_ref_take(v___y_4310_);
v_mctx_4332_ = lean_ctor_get(v___x_4331_, 0);
v_zetaDeltaFVarIds_4333_ = lean_ctor_get(v___x_4331_, 2);
v_postponed_4334_ = lean_ctor_get(v___x_4331_, 3);
v_diag_4335_ = lean_ctor_get(v___x_4331_, 4);
v_isSharedCheck_4345_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4345_ == 0)
{
lean_object* v_unused_4346_; 
v_unused_4346_ = lean_ctor_get(v___x_4331_, 1);
lean_dec(v_unused_4346_);
v___x_4337_ = v___x_4331_;
v_isShared_4338_ = v_isSharedCheck_4345_;
goto v_resetjp_4336_;
}
else
{
lean_inc(v_diag_4335_);
lean_inc(v_postponed_4334_);
lean_inc(v_zetaDeltaFVarIds_4333_);
lean_inc(v_mctx_4332_);
lean_dec(v___x_4331_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4345_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4339_; lean_object* v___x_4341_; 
v___x_4339_ = lean_box(0);
if (v_isShared_4338_ == 0)
{
lean_ctor_set(v___x_4337_, 1, v___x_4311_);
v___x_4341_ = v___x_4337_;
goto v_reusejp_4340_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v_mctx_4332_);
lean_ctor_set(v_reuseFailAlloc_4344_, 1, v___x_4311_);
lean_ctor_set(v_reuseFailAlloc_4344_, 2, v_zetaDeltaFVarIds_4333_);
lean_ctor_set(v_reuseFailAlloc_4344_, 3, v_postponed_4334_);
lean_ctor_set(v_reuseFailAlloc_4344_, 4, v_diag_4335_);
v___x_4341_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4340_;
}
v_reusejp_4340_:
{
lean_object* v___x_4342_; lean_object* v___x_4343_; 
v___x_4342_ = lean_st_ref_put(v___y_4310_, v___x_4341_);
v___x_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4339_);
return v___x_4343_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0___boxed(lean_object* v___y_4350_, lean_object* v_isExporting_4351_, lean_object* v___x_4352_, lean_object* v___y_4353_, lean_object* v___x_4354_, lean_object* v_a_x3f_4355_, lean_object* v___y_4356_){
_start:
{
uint8_t v_isExporting_boxed_4357_; lean_object* v_res_4358_; 
v_isExporting_boxed_4357_ = lean_unbox(v_isExporting_4351_);
v_res_4358_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4350_, v_isExporting_boxed_4357_, v___x_4352_, v___y_4353_, v___x_4354_, v_a_x3f_4355_);
lean_dec(v_a_x3f_4355_);
lean_dec(v___y_4353_);
lean_dec(v___y_4350_);
return v_res_4358_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4359_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0);
v___x_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4359_);
return v___x_4360_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4361_; lean_object* v___x_4362_; 
v___x_4361_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_4362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4362_, 0, v___x_4361_);
lean_ctor_set(v___x_4362_, 1, v___x_4361_);
return v___x_4362_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4363_; 
v___x_4363_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg();
return v___x_4363_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4364_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_4365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4364_);
lean_ctor_set(v___x_4365_, 1, v___x_4364_);
return v___x_4365_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
v___x_4366_ = lean_unsigned_to_nat(0u);
v___x_4367_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_4368_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4367_);
lean_ctor_set(v___x_4368_, 1, v___x_4367_);
lean_ctor_set(v___x_4368_, 2, v___x_4366_);
return v___x_4368_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; 
v___x_4369_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__4, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__4_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__4);
v___x_4370_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__3);
v___x_4371_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__0);
v___x_4372_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2);
v___x_4373_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4373_, 0, v___x_4372_);
lean_ctor_set(v___x_4373_, 1, v___x_4371_);
lean_ctor_set(v___x_4373_, 2, v___x_4370_);
lean_ctor_set(v___x_4373_, 3, v___x_4371_);
lean_ctor_set(v___x_4373_, 4, v___x_4371_);
lean_ctor_set(v___x_4373_, 5, v___x_4371_);
lean_ctor_set(v___x_4373_, 6, v___x_4371_);
lean_ctor_set(v___x_4373_, 7, v___x_4369_);
return v___x_4373_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(lean_object* v_x_4374_, uint8_t v_isExporting_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_){
_start:
{
lean_object* v___x_4381_; lean_object* v_env_4382_; lean_object* v___x_4383_; uint8_t v_isModule_4384_; 
v___x_4381_ = lean_st_ref_get(v___y_4379_);
v_env_4382_ = lean_ctor_get(v___x_4381_, 0);
lean_inc_ref(v_env_4382_);
lean_dec(v___x_4381_);
v___x_4383_ = l_Lean_Environment_header(v_env_4382_);
v_isModule_4384_ = lean_ctor_get_uint8(v___x_4383_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4383_);
if (v_isModule_4384_ == 0)
{
lean_object* v___x_4385_; 
lean_dec_ref(v_env_4382_);
lean_inc(v___y_4379_);
lean_inc_ref(v___y_4378_);
lean_inc(v___y_4377_);
lean_inc_ref(v___y_4376_);
v___x_4385_ = lean_apply_5(v_x_4374_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, lean_box(0));
return v___x_4385_;
}
else
{
uint8_t v_isExporting_4386_; 
v_isExporting_4386_ = lean_ctor_get_uint8(v_env_4382_, sizeof(void*)*13);
lean_dec_ref(v_env_4382_);
if (v_isExporting_4375_ == 0)
{
if (v_isExporting_4386_ == 0)
{
lean_object* v___x_4453_; 
lean_inc(v___y_4379_);
lean_inc_ref(v___y_4378_);
lean_inc(v___y_4377_);
lean_inc_ref(v___y_4376_);
v___x_4453_ = lean_apply_5(v_x_4374_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, lean_box(0));
return v___x_4453_;
}
else
{
goto v___jp_4387_;
}
}
else
{
if (v_isExporting_4386_ == 0)
{
goto v___jp_4387_;
}
else
{
lean_object* v___x_4454_; 
lean_inc(v___y_4379_);
lean_inc_ref(v___y_4378_);
lean_inc(v___y_4377_);
lean_inc_ref(v___y_4376_);
v___x_4454_ = lean_apply_5(v_x_4374_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, lean_box(0));
return v___x_4454_;
}
}
v___jp_4387_:
{
lean_object* v___x_4388_; lean_object* v_env_4389_; lean_object* v_nextMacroScope_4390_; lean_object* v_ngen_4391_; lean_object* v_auxDeclNGen_4392_; lean_object* v_traceState_4393_; lean_object* v_recordedDeps_4394_; lean_object* v_messages_4395_; lean_object* v_infoState_4396_; lean_object* v_snapshotTasks_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4451_; 
v___x_4388_ = lean_st_ref_take(v___y_4379_);
v_env_4389_ = lean_ctor_get(v___x_4388_, 0);
v_nextMacroScope_4390_ = lean_ctor_get(v___x_4388_, 1);
v_ngen_4391_ = lean_ctor_get(v___x_4388_, 2);
v_auxDeclNGen_4392_ = lean_ctor_get(v___x_4388_, 3);
v_traceState_4393_ = lean_ctor_get(v___x_4388_, 4);
v_recordedDeps_4394_ = lean_ctor_get(v___x_4388_, 6);
v_messages_4395_ = lean_ctor_get(v___x_4388_, 7);
v_infoState_4396_ = lean_ctor_get(v___x_4388_, 8);
v_snapshotTasks_4397_ = lean_ctor_get(v___x_4388_, 9);
v_isSharedCheck_4451_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4451_ == 0)
{
lean_object* v_unused_4452_; 
v_unused_4452_ = lean_ctor_get(v___x_4388_, 5);
lean_dec(v_unused_4452_);
v___x_4399_ = v___x_4388_;
v_isShared_4400_ = v_isSharedCheck_4451_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_snapshotTasks_4397_);
lean_inc(v_infoState_4396_);
lean_inc(v_messages_4395_);
lean_inc(v_recordedDeps_4394_);
lean_inc(v_traceState_4393_);
lean_inc(v_auxDeclNGen_4392_);
lean_inc(v_ngen_4391_);
lean_inc(v_nextMacroScope_4390_);
lean_inc(v_env_4389_);
lean_dec(v___x_4388_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4451_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4404_; 
v___x_4401_ = l_Lean_Environment_setExporting(v_env_4389_, v_isExporting_4375_);
v___x_4402_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__1);
if (v_isShared_4400_ == 0)
{
lean_ctor_set(v___x_4399_, 5, v___x_4402_);
lean_ctor_set(v___x_4399_, 0, v___x_4401_);
v___x_4404_ = v___x_4399_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v___x_4401_);
lean_ctor_set(v_reuseFailAlloc_4450_, 1, v_nextMacroScope_4390_);
lean_ctor_set(v_reuseFailAlloc_4450_, 2, v_ngen_4391_);
lean_ctor_set(v_reuseFailAlloc_4450_, 3, v_auxDeclNGen_4392_);
lean_ctor_set(v_reuseFailAlloc_4450_, 4, v_traceState_4393_);
lean_ctor_set(v_reuseFailAlloc_4450_, 5, v___x_4402_);
lean_ctor_set(v_reuseFailAlloc_4450_, 6, v_recordedDeps_4394_);
lean_ctor_set(v_reuseFailAlloc_4450_, 7, v_messages_4395_);
lean_ctor_set(v_reuseFailAlloc_4450_, 8, v_infoState_4396_);
lean_ctor_set(v_reuseFailAlloc_4450_, 9, v_snapshotTasks_4397_);
v___x_4404_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v_mctx_4407_; lean_object* v_zetaDeltaFVarIds_4408_; lean_object* v_postponed_4409_; lean_object* v_diag_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4448_; 
v___x_4405_ = lean_st_ref_put(v___y_4379_, v___x_4404_);
v___x_4406_ = lean_st_ref_take(v___y_4377_);
v_mctx_4407_ = lean_ctor_get(v___x_4406_, 0);
v_zetaDeltaFVarIds_4408_ = lean_ctor_get(v___x_4406_, 2);
v_postponed_4409_ = lean_ctor_get(v___x_4406_, 3);
v_diag_4410_ = lean_ctor_get(v___x_4406_, 4);
v_isSharedCheck_4448_ = !lean_is_exclusive(v___x_4406_);
if (v_isSharedCheck_4448_ == 0)
{
lean_object* v_unused_4449_; 
v_unused_4449_ = lean_ctor_get(v___x_4406_, 1);
lean_dec(v_unused_4449_);
v___x_4412_ = v___x_4406_;
v_isShared_4413_ = v_isSharedCheck_4448_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_diag_4410_);
lean_inc(v_postponed_4409_);
lean_inc(v_zetaDeltaFVarIds_4408_);
lean_inc(v_mctx_4407_);
lean_dec(v___x_4406_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4448_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4414_; lean_object* v___x_4416_; 
v___x_4414_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__5, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__5);
if (v_isShared_4413_ == 0)
{
lean_ctor_set(v___x_4412_, 1, v___x_4414_);
v___x_4416_ = v___x_4412_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v_mctx_4407_);
lean_ctor_set(v_reuseFailAlloc_4447_, 1, v___x_4414_);
lean_ctor_set(v_reuseFailAlloc_4447_, 2, v_zetaDeltaFVarIds_4408_);
lean_ctor_set(v_reuseFailAlloc_4447_, 3, v_postponed_4409_);
lean_ctor_set(v_reuseFailAlloc_4447_, 4, v_diag_4410_);
v___x_4416_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
lean_object* v___x_4417_; lean_object* v_r_4418_; 
v___x_4417_ = lean_st_ref_put(v___y_4377_, v___x_4416_);
lean_inc(v___y_4379_);
lean_inc_ref(v___y_4378_);
lean_inc(v___y_4377_);
lean_inc_ref(v___y_4376_);
v_r_4418_ = lean_apply_5(v_x_4374_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, lean_box(0));
if (lean_obj_tag(v_r_4418_) == 0)
{
lean_object* v_a_4419_; lean_object* v___x_4421_; uint8_t v_isShared_4422_; uint8_t v_isSharedCheck_4435_; 
v_a_4419_ = lean_ctor_get(v_r_4418_, 0);
v_isSharedCheck_4435_ = !lean_is_exclusive(v_r_4418_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4421_ = v_r_4418_;
v_isShared_4422_ = v_isSharedCheck_4435_;
goto v_resetjp_4420_;
}
else
{
lean_inc(v_a_4419_);
lean_dec(v_r_4418_);
v___x_4421_ = lean_box(0);
v_isShared_4422_ = v_isSharedCheck_4435_;
goto v_resetjp_4420_;
}
v_resetjp_4420_:
{
lean_object* v___x_4424_; 
lean_inc(v_a_4419_);
if (v_isShared_4422_ == 0)
{
lean_ctor_set_tag(v___x_4421_, 1);
v___x_4424_ = v___x_4421_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v_a_4419_);
v___x_4424_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
lean_object* v___x_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4432_; 
v___x_4425_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4379_, v_isExporting_4386_, v___x_4402_, v___y_4377_, v___x_4414_, v___x_4424_);
lean_dec_ref(v___x_4424_);
v_isSharedCheck_4432_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4432_ == 0)
{
lean_object* v_unused_4433_; 
v_unused_4433_ = lean_ctor_get(v___x_4425_, 0);
lean_dec(v_unused_4433_);
v___x_4427_ = v___x_4425_;
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
else
{
lean_dec(v___x_4425_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4430_; 
if (v_isShared_4428_ == 0)
{
lean_ctor_set(v___x_4427_, 0, v_a_4419_);
v___x_4430_ = v___x_4427_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v_a_4419_);
v___x_4430_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
return v___x_4430_;
}
}
}
}
}
else
{
lean_object* v_a_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
v_a_4436_ = lean_ctor_get(v_r_4418_, 0);
lean_inc(v_a_4436_);
lean_dec_ref_known(v_r_4418_, 1);
v___x_4437_ = lean_box(0);
v___x_4438_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___lam__0(v___y_4379_, v_isExporting_4386_, v___x_4402_, v___y_4377_, v___x_4414_, v___x_4437_);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4438_);
if (v_isSharedCheck_4445_ == 0)
{
lean_object* v_unused_4446_; 
v_unused_4446_ = lean_ctor_get(v___x_4438_, 0);
lean_dec(v_unused_4446_);
v___x_4440_ = v___x_4438_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_dec(v___x_4438_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
lean_ctor_set_tag(v___x_4440_, 1);
lean_ctor_set(v___x_4440_, 0, v_a_4436_);
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4436_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___boxed(lean_object* v_x_4455_, lean_object* v_isExporting_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
uint8_t v_isExporting_boxed_4462_; lean_object* v_res_4463_; 
v_isExporting_boxed_4462_ = lean_unbox(v_isExporting_4456_);
v_res_4463_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v_x_4455_, v_isExporting_boxed_4462_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_);
lean_dec(v___y_4460_);
lean_dec_ref(v___y_4459_);
lean_dec(v___y_4458_);
lean_dec_ref(v___y_4457_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___redArg(uint8_t v___x_4464_, uint8_t v___x_4465_, lean_object* v_as_x27_4466_, lean_object* v_b_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_){
_start:
{
if (lean_obj_tag(v_as_x27_4466_) == 0)
{
lean_object* v___x_4473_; 
v___x_4473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4473_, 0, v_b_4467_);
return v___x_4473_;
}
else
{
lean_object* v_head_4474_; lean_object* v_tail_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___f_4478_; uint8_t v___y_4480_; uint8_t v___x_4483_; 
v_head_4474_ = lean_ctor_get(v_as_x27_4466_, 0);
v_tail_4475_ = lean_ctor_get(v_as_x27_4466_, 1);
v___x_4476_ = lean_unsigned_to_nat(0u);
v___x_4477_ = lean_box(0);
lean_inc(v_head_4474_);
v___f_4478_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4478_, 0, v_head_4474_);
lean_closure_set(v___f_4478_, 1, v___x_4476_);
lean_closure_set(v___f_4478_, 2, v___x_4477_);
v___x_4483_ = l_Lean_isPrivateName(v_head_4474_);
if (v___x_4483_ == 0)
{
v___y_4480_ = v___x_4464_;
goto v___jp_4479_;
}
else
{
v___y_4480_ = v___x_4465_;
goto v___jp_4479_;
}
v___jp_4479_:
{
lean_object* v___x_4481_; 
v___x_4481_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v___f_4478_, v___y_4480_, v___y_4468_, v___y_4469_, v___y_4470_, v___y_4471_);
if (lean_obj_tag(v___x_4481_) == 0)
{
lean_dec_ref_known(v___x_4481_, 1);
v_as_x27_4466_ = v_tail_4475_;
v_b_4467_ = v___x_4477_;
goto _start;
}
else
{
return v___x_4481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___redArg___boxed(lean_object* v___x_4484_, lean_object* v___x_4485_, lean_object* v_as_x27_4486_, lean_object* v_b_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_){
_start:
{
uint8_t v___x_19362__boxed_4493_; uint8_t v___x_19363__boxed_4494_; lean_object* v_res_4495_; 
v___x_19362__boxed_4493_ = lean_unbox(v___x_4484_);
v___x_19363__boxed_4494_ = lean_unbox(v___x_4485_);
v_res_4495_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___redArg(v___x_19362__boxed_4493_, v___x_19363__boxed_4494_, v_as_x27_4486_, v_b_4487_, v___y_4488_, v___y_4489_, v___y_4490_, v___y_4491_);
lean_dec(v___y_4491_);
lean_dec_ref(v___y_4490_);
lean_dec(v___y_4489_);
lean_dec_ref(v___y_4488_);
lean_dec(v_as_x27_4486_);
return v_res_4495_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(uint8_t v___x_4496_, uint8_t v___x_4497_, lean_object* v_as_4498_, lean_object* v_as_x27_4499_, lean_object* v_b_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_){
_start:
{
if (lean_obj_tag(v_as_x27_4499_) == 0)
{
lean_object* v___x_4506_; 
v___x_4506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4506_, 0, v_b_4500_);
return v___x_4506_;
}
else
{
lean_object* v_head_4507_; lean_object* v_tail_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___f_4511_; uint8_t v___y_4513_; uint8_t v___x_4516_; 
v_head_4507_ = lean_ctor_get(v_as_x27_4499_, 0);
v_tail_4508_ = lean_ctor_get(v_as_x27_4499_, 1);
v___x_4509_ = lean_unsigned_to_nat(0u);
v___x_4510_ = lean_box(0);
lean_inc(v_head_4507_);
v___f_4511_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4511_, 0, v_head_4507_);
lean_closure_set(v___f_4511_, 1, v___x_4509_);
lean_closure_set(v___f_4511_, 2, v___x_4510_);
v___x_4516_ = l_Lean_isPrivateName(v_head_4507_);
if (v___x_4516_ == 0)
{
v___y_4513_ = v___x_4496_;
goto v___jp_4512_;
}
else
{
v___y_4513_ = v___x_4497_;
goto v___jp_4512_;
}
v___jp_4512_:
{
lean_object* v___x_4514_; 
v___x_4514_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v___f_4511_, v___y_4513_, v___y_4501_, v___y_4502_, v___y_4503_, v___y_4504_);
if (lean_obj_tag(v___x_4514_) == 0)
{
lean_object* v___x_4515_; 
lean_dec_ref_known(v___x_4514_, 1);
v___x_4515_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___redArg(v___x_4496_, v___x_4497_, v_tail_4508_, v___x_4510_, v___y_4501_, v___y_4502_, v___y_4503_, v___y_4504_);
return v___x_4515_;
}
else
{
return v___x_4514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg___boxed(lean_object* v___x_4517_, lean_object* v___x_4518_, lean_object* v_as_4519_, lean_object* v_as_x27_4520_, lean_object* v_b_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_){
_start:
{
uint8_t v___x_19407__boxed_4527_; uint8_t v___x_19408__boxed_4528_; lean_object* v_res_4529_; 
v___x_19407__boxed_4527_ = lean_unbox(v___x_4517_);
v___x_19408__boxed_4528_ = lean_unbox(v___x_4518_);
v_res_4529_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___x_19407__boxed_4527_, v___x_19408__boxed_4528_, v_as_4519_, v_as_x27_4520_, v_b_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_);
lean_dec(v___y_4525_);
lean_dec_ref(v___y_4524_);
lean_dec(v___y_4523_);
lean_dec_ref(v___y_4522_);
lean_dec(v_as_x27_4520_);
lean_dec(v_as_4519_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1(uint8_t v___x_4530_, uint8_t v_isUnsafe_4531_, lean_object* v_ctors_4532_, lean_object* v___x_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_){
_start:
{
lean_object* v___x_4539_; 
v___x_4539_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___x_4530_, v_isUnsafe_4531_, v_ctors_4532_, v_ctors_4532_, v___x_4533_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_);
if (lean_obj_tag(v___x_4539_) == 0)
{
lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4546_; 
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4539_);
if (v_isSharedCheck_4546_ == 0)
{
lean_object* v_unused_4547_; 
v_unused_4547_ = lean_ctor_get(v___x_4539_, 0);
lean_dec(v_unused_4547_);
v___x_4541_ = v___x_4539_;
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
else
{
lean_dec(v___x_4539_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
lean_ctor_set(v___x_4541_, 0, v___x_4533_);
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v___x_4533_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
}
else
{
return v___x_4539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed(lean_object* v___x_4548_, lean_object* v_isUnsafe_4549_, lean_object* v_ctors_4550_, lean_object* v___x_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_){
_start:
{
uint8_t v___x_19452__boxed_4557_; uint8_t v_isUnsafe_boxed_4558_; lean_object* v_res_4559_; 
v___x_19452__boxed_4557_ = lean_unbox(v___x_4548_);
v_isUnsafe_boxed_4558_ = lean_unbox(v_isUnsafe_4549_);
v_res_4559_ = l_Lean_Meta_mkInjectiveTheorems___lam__1(v___x_19452__boxed_4557_, v_isUnsafe_boxed_4558_, v_ctors_4550_, v___x_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_);
lean_dec(v___y_4555_);
lean_dec_ref(v___y_4554_);
lean_dec(v___y_4553_);
lean_dec_ref(v___y_4552_);
lean_dec(v_ctors_4550_);
return v_res_4559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2(uint8_t v_hasTrace_4560_, uint8_t v_isUnsafe_4561_, lean_object* v_ctors_4562_, lean_object* v___x_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_){
_start:
{
lean_object* v___x_4569_; 
v___x_4569_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v_hasTrace_4560_, v_isUnsafe_4561_, v_ctors_4562_, v_ctors_4562_, v___x_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_);
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4576_; 
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4576_ == 0)
{
lean_object* v_unused_4577_; 
v_unused_4577_ = lean_ctor_get(v___x_4569_, 0);
lean_dec(v_unused_4577_);
v___x_4571_ = v___x_4569_;
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
else
{
lean_dec(v___x_4569_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
lean_ctor_set(v___x_4571_, 0, v___x_4563_);
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v___x_4563_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
else
{
return v___x_4569_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed(lean_object* v_hasTrace_4578_, lean_object* v_isUnsafe_4579_, lean_object* v_ctors_4580_, lean_object* v___x_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
uint8_t v_hasTrace_boxed_4587_; uint8_t v_isUnsafe_boxed_4588_; lean_object* v_res_4589_; 
v_hasTrace_boxed_4587_ = lean_unbox(v_hasTrace_4578_);
v_isUnsafe_boxed_4588_ = lean_unbox(v_isUnsafe_4579_);
v_res_4589_ = l_Lean_Meta_mkInjectiveTheorems___lam__2(v_hasTrace_boxed_4587_, v_isUnsafe_boxed_4588_, v_ctors_4580_, v___x_4581_, v___y_4582_, v___y_4583_, v___y_4584_, v___y_4585_);
lean_dec(v___y_4585_);
lean_dec_ref(v___y_4584_);
lean_dec(v___y_4583_);
lean_dec_ref(v___y_4582_);
lean_dec(v_ctors_4580_);
return v_res_4589_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4591_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__0));
v___x_4592_ = l_Lean_stringToMessageData(v___x_4591_);
return v___x_4592_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(lean_object* v_constName_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_){
_start:
{
lean_object* v___x_4599_; lean_object* v_env_4600_; lean_object* v___x_4601_; 
v___x_4599_ = lean_st_ref_get(v___y_4597_);
v_env_4600_ = lean_ctor_get(v___x_4599_, 0);
lean_inc_ref(v_env_4600_);
lean_dec(v___x_4599_);
lean_inc(v_constName_4593_);
v___x_4601_ = l_Lean_isInductiveCore_x3f(v_env_4600_, v_constName_4593_);
if (lean_obj_tag(v___x_4601_) == 0)
{
lean_object* v___x_4602_; uint8_t v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4602_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_4603_ = 0;
v___x_4604_ = l_Lean_MessageData_ofConstName(v_constName_4593_, v___x_4603_);
v___x_4605_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4605_, 0, v___x_4602_);
lean_ctor_set(v___x_4605_, 1, v___x_4604_);
v___x_4606_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___closed__1);
v___x_4607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4607_, 0, v___x_4605_);
lean_ctor_set(v___x_4607_, 1, v___x_4606_);
v___x_4608_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_4607_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_);
return v___x_4608_;
}
else
{
lean_object* v_val_4609_; lean_object* v___x_4611_; uint8_t v_isShared_4612_; uint8_t v_isSharedCheck_4616_; 
lean_dec(v_constName_4593_);
v_val_4609_ = lean_ctor_get(v___x_4601_, 0);
v_isSharedCheck_4616_ = !lean_is_exclusive(v___x_4601_);
if (v_isSharedCheck_4616_ == 0)
{
v___x_4611_ = v___x_4601_;
v_isShared_4612_ = v_isSharedCheck_4616_;
goto v_resetjp_4610_;
}
else
{
lean_inc(v_val_4609_);
lean_dec(v___x_4601_);
v___x_4611_ = lean_box(0);
v_isShared_4612_ = v_isSharedCheck_4616_;
goto v_resetjp_4610_;
}
v_resetjp_4610_:
{
lean_object* v___x_4614_; 
if (v_isShared_4612_ == 0)
{
lean_ctor_set_tag(v___x_4611_, 0);
v___x_4614_ = v___x_4611_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4615_; 
v_reuseFailAlloc_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4615_, 0, v_val_4609_);
v___x_4614_ = v_reuseFailAlloc_4615_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
return v___x_4614_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0___boxed(lean_object* v_constName_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_){
_start:
{
lean_object* v_res_4623_; 
v_res_4623_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_constName_4617_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_);
lean_dec(v___y_4621_);
lean_dec_ref(v___y_4620_);
lean_dec(v___y_4619_);
lean_dec_ref(v___y_4618_);
return v_res_4623_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__0(void){
_start:
{
lean_object* v___x_4624_; lean_object* v___x_4625_; 
v___x_4624_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0);
v___x_4625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4625_, 0, v___x_4624_);
return v___x_4625_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__1(void){
_start:
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; 
v___x_4626_ = lean_unsigned_to_nat(32u);
v___x_4627_ = lean_mk_empty_array_with_capacity(v___x_4626_);
v___x_4628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4627_);
return v___x_4628_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__2(void){
_start:
{
size_t v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; 
v___x_4629_ = ((size_t)5ULL);
v___x_4630_ = lean_unsigned_to_nat(0u);
v___x_4631_ = lean_unsigned_to_nat(32u);
v___x_4632_ = lean_mk_empty_array_with_capacity(v___x_4631_);
v___x_4633_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__1, &l_Lean_Meta_mkInjectiveTheorems___closed__1_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__1);
v___x_4634_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4634_, 0, v___x_4633_);
lean_ctor_set(v___x_4634_, 1, v___x_4632_);
lean_ctor_set(v___x_4634_, 2, v___x_4630_);
lean_ctor_set(v___x_4634_, 3, v___x_4630_);
lean_ctor_set_usize(v___x_4634_, 4, v___x_4629_);
return v___x_4634_;
}
}
static lean_object* _init_l_Lean_Meta_mkInjectiveTheorems___closed__3(void){
_start:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; 
v___x_4635_ = lean_box(1);
v___x_4636_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__2, &l_Lean_Meta_mkInjectiveTheorems___closed__2_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__2);
v___x_4637_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_4638_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4638_, 0, v___x_4637_);
lean_ctor_set(v___x_4638_, 1, v___x_4636_);
lean_ctor_set(v___x_4638_, 2, v___x_4635_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems(lean_object* v_declName_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_){
_start:
{
lean_object* v___f_4647_; lean_object* v___x_4648_; lean_object* v_env_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; 
lean_inc_n(v_declName_4641_, 2);
v___f_4647_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4647_, 0, v_declName_4641_);
v___x_4648_ = lean_st_ref_get(v_a_4645_);
v_env_4649_ = lean_ctor_get(v___x_4648_, 0);
lean_inc_ref(v_env_4649_);
lean_dec(v___x_4648_);
v___x_4650_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_4644_);
v___x_4651_ = l_Lean_Meta_isInductivePredicate(v_declName_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
if (lean_obj_tag(v___x_4651_) == 0)
{
lean_object* v_a_4652_; lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4815_; 
v_a_4652_ = lean_ctor_get(v___x_4651_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4651_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4654_ = v___x_4651_;
v_isShared_4655_ = v_isSharedCheck_4815_;
goto v_resetjp_4653_;
}
else
{
lean_inc(v_a_4652_);
lean_dec(v___x_4651_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4815_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v___x_4661_; uint8_t v___x_4662_; uint8_t v___x_4663_; 
v___x_4661_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveEqTheoremValue___lam__0___closed__4));
v___x_4662_ = 1;
v___x_4663_ = l_Lean_Environment_contains(v_env_4649_, v___x_4661_, v___x_4662_);
if (v___x_4663_ == 0)
{
lean_dec(v_a_4652_);
lean_dec_ref(v___x_4650_);
lean_dec_ref(v___f_4647_);
lean_dec(v_declName_4641_);
goto v___jp_4656_;
}
else
{
lean_object* v___x_4664_; uint8_t v___x_4665_; 
v___x_4664_ = l_Lean_Meta_genInjectivity;
v___x_4665_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v___x_4650_, v___x_4664_);
lean_dec_ref(v___x_4650_);
if (v___x_4665_ == 0)
{
lean_dec(v_a_4652_);
lean_dec_ref(v___f_4647_);
lean_dec(v_declName_4641_);
goto v___jp_4656_;
}
else
{
uint8_t v___x_4666_; 
v___x_4666_ = lean_unbox(v_a_4652_);
lean_dec(v_a_4652_);
if (v___x_4666_ == 0)
{
lean_object* v_toCold_4667_; lean_object* v_options_4668_; uint8_t v_hasTrace_4669_; 
lean_del_object(v___x_4654_);
v_toCold_4667_ = lean_ctor_get(v_a_4644_, 0);
v_options_4668_ = lean_ctor_get(v_toCold_4667_, 2);
v_hasTrace_4669_ = lean_ctor_get_uint8(v_options_4668_, sizeof(void*)*1);
if (v_hasTrace_4669_ == 0)
{
lean_object* v___x_4670_; 
lean_dec_ref(v___f_4647_);
v___x_4670_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
if (lean_obj_tag(v___x_4670_) == 0)
{
lean_object* v_a_4671_; lean_object* v___x_4673_; uint8_t v_isShared_4674_; uint8_t v_isSharedCheck_4688_; 
v_a_4671_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4673_ = v___x_4670_;
v_isShared_4674_ = v_isSharedCheck_4688_;
goto v_resetjp_4672_;
}
else
{
lean_inc(v_a_4671_);
lean_dec(v___x_4670_);
v___x_4673_ = lean_box(0);
v_isShared_4674_ = v_isSharedCheck_4688_;
goto v_resetjp_4672_;
}
v_resetjp_4672_:
{
uint8_t v_isUnsafe_4675_; 
v_isUnsafe_4675_ = lean_ctor_get_uint8(v_a_4671_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4675_ == 0)
{
lean_object* v_ctors_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___f_4682_; lean_object* v___x_4683_; 
lean_del_object(v___x_4673_);
v_ctors_4676_ = lean_ctor_get(v_a_4671_, 4);
lean_inc(v_ctors_4676_);
lean_dec(v_a_4671_);
v___x_4677_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4678_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4679_ = lean_box(0);
v___x_4680_ = lean_box(v___x_4665_);
v___x_4681_ = lean_box(v_isUnsafe_4675_);
v___f_4682_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4682_, 0, v___x_4680_);
lean_closure_set(v___f_4682_, 1, v___x_4681_);
lean_closure_set(v___f_4682_, 2, v_ctors_4676_);
lean_closure_set(v___f_4682_, 3, v___x_4679_);
v___x_4683_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4677_, v___x_4678_, v___f_4682_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
return v___x_4683_;
}
else
{
lean_object* v___x_4684_; lean_object* v___x_4686_; 
lean_dec(v_a_4671_);
v___x_4684_ = lean_box(0);
if (v_isShared_4674_ == 0)
{
lean_ctor_set(v___x_4673_, 0, v___x_4684_);
v___x_4686_ = v___x_4673_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v___x_4684_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
else
{
lean_object* v_a_4689_; lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4696_; 
v_a_4689_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4691_ = v___x_4670_;
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
else
{
lean_inc(v_a_4689_);
lean_dec(v___x_4670_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
lean_object* v___x_4694_; 
if (v_isShared_4692_ == 0)
{
v___x_4694_ = v___x_4691_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4695_; 
v_reuseFailAlloc_4695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4695_, 0, v_a_4689_);
v___x_4694_ = v_reuseFailAlloc_4695_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
return v___x_4694_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; uint8_t v___x_4701_; lean_object* v___y_4703_; lean_object* v___y_4704_; lean_object* v_a_4705_; lean_object* v___y_4718_; lean_object* v___y_4719_; lean_object* v_a_4720_; lean_object* v___y_4723_; lean_object* v___y_4724_; lean_object* v_a_4725_; lean_object* v___y_4728_; lean_object* v___y_4729_; lean_object* v_a_4730_; lean_object* v___y_4740_; lean_object* v___y_4741_; lean_object* v_a_4742_; lean_object* v___y_4745_; lean_object* v___y_4746_; lean_object* v_a_4747_; 
v_inheritedTraceOptions_4697_ = lean_ctor_get(v_toCold_4667_, 11);
v___x_4698_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_4699_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq_spec__1___closed__1));
v___x_4700_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9, &l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__9);
v___x_4701_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4697_, v_options_4668_, v___x_4700_);
if (v___x_4701_ == 0)
{
lean_object* v___x_4786_; uint8_t v___x_4787_; 
v___x_4786_ = l_Lean_trace_profiler;
v___x_4787_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_4668_, v___x_4786_);
if (v___x_4787_ == 0)
{
lean_object* v___x_4788_; 
lean_dec_ref(v___f_4647_);
v___x_4788_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
if (lean_obj_tag(v___x_4788_) == 0)
{
lean_object* v_a_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4806_; 
v_a_4789_ = lean_ctor_get(v___x_4788_, 0);
v_isSharedCheck_4806_ = !lean_is_exclusive(v___x_4788_);
if (v_isSharedCheck_4806_ == 0)
{
v___x_4791_ = v___x_4788_;
v_isShared_4792_ = v_isSharedCheck_4806_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_a_4789_);
lean_dec(v___x_4788_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4806_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
uint8_t v_isUnsafe_4793_; 
v_isUnsafe_4793_ = lean_ctor_get_uint8(v_a_4789_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4793_ == 0)
{
lean_object* v_ctors_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___f_4800_; lean_object* v___x_4801_; 
lean_del_object(v___x_4791_);
v_ctors_4794_ = lean_ctor_get(v_a_4789_, 4);
lean_inc(v_ctors_4794_);
lean_dec(v_a_4789_);
v___x_4795_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4796_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4797_ = lean_box(0);
v___x_4798_ = lean_box(v_hasTrace_4669_);
v___x_4799_ = lean_box(v_isUnsafe_4793_);
v___f_4800_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed), 9, 4);
lean_closure_set(v___f_4800_, 0, v___x_4798_);
lean_closure_set(v___f_4800_, 1, v___x_4799_);
lean_closure_set(v___f_4800_, 2, v_ctors_4794_);
lean_closure_set(v___f_4800_, 3, v___x_4797_);
v___x_4801_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4795_, v___x_4796_, v___f_4800_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
return v___x_4801_;
}
else
{
lean_object* v___x_4802_; lean_object* v___x_4804_; 
lean_dec(v_a_4789_);
v___x_4802_ = lean_box(0);
if (v_isShared_4792_ == 0)
{
lean_ctor_set(v___x_4791_, 0, v___x_4802_);
v___x_4804_ = v___x_4791_;
goto v_reusejp_4803_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v___x_4802_);
v___x_4804_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4803_;
}
v_reusejp_4803_:
{
return v___x_4804_;
}
}
}
}
else
{
lean_object* v_a_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4814_; 
v_a_4807_ = lean_ctor_get(v___x_4788_, 0);
v_isSharedCheck_4814_ = !lean_is_exclusive(v___x_4788_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4809_ = v___x_4788_;
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v___x_4788_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
lean_object* v___x_4812_; 
if (v_isShared_4810_ == 0)
{
v___x_4812_ = v___x_4809_;
goto v_reusejp_4811_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_a_4807_);
v___x_4812_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4811_;
}
v_reusejp_4811_:
{
return v___x_4812_;
}
}
}
}
else
{
goto v___jp_4749_;
}
}
else
{
goto v___jp_4749_;
}
v___jp_4702_:
{
lean_object* v___x_4706_; double v___x_4707_; double v___x_4708_; double v___x_4709_; double v___x_4710_; double v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4706_ = lean_io_mono_nanos_now();
v___x_4707_ = lean_float_of_nat(v___y_4704_);
v___x_4708_ = lean_float_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem___closed__0);
v___x_4709_ = lean_float_div(v___x_4707_, v___x_4708_);
v___x_4710_ = lean_float_of_nat(v___x_4706_);
v___x_4711_ = lean_float_div(v___x_4710_, v___x_4708_);
v___x_4712_ = lean_box_float(v___x_4709_);
v___x_4713_ = lean_box_float(v___x_4711_);
v___x_4714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4712_);
lean_ctor_set(v___x_4714_, 1, v___x_4713_);
v___x_4715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4715_, 0, v_a_4705_);
lean_ctor_set(v___x_4715_, 1, v___x_4714_);
v___x_4716_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___x_4698_, v___x_4665_, v___x_4699_, v_options_4668_, v___x_4701_, v___y_4703_, v___f_4647_, v___x_4715_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
return v___x_4716_;
}
v___jp_4717_:
{
lean_object* v___x_4721_; 
v___x_4721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4721_, 0, v_a_4720_);
v___y_4703_ = v___y_4718_;
v___y_4704_ = v___y_4719_;
v_a_4705_ = v___x_4721_;
goto v___jp_4702_;
}
v___jp_4722_:
{
lean_object* v___x_4726_; 
v___x_4726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4726_, 0, v_a_4725_);
v___y_4703_ = v___y_4723_;
v___y_4704_ = v___y_4724_;
v_a_4705_ = v___x_4726_;
goto v___jp_4702_;
}
v___jp_4727_:
{
lean_object* v___x_4731_; double v___x_4732_; double v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4731_ = lean_io_get_num_heartbeats();
v___x_4732_ = lean_float_of_nat(v___y_4729_);
v___x_4733_ = lean_float_of_nat(v___x_4731_);
v___x_4734_ = lean_box_float(v___x_4732_);
v___x_4735_ = lean_box_float(v___x_4733_);
v___x_4736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4736_, 0, v___x_4734_);
lean_ctor_set(v___x_4736_, 1, v___x_4735_);
v___x_4737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4737_, 0, v_a_4730_);
lean_ctor_set(v___x_4737_, 1, v___x_4736_);
v___x_4738_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__3(v___x_4698_, v___x_4665_, v___x_4699_, v_options_4668_, v___x_4701_, v___y_4728_, v___f_4647_, v___x_4737_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
return v___x_4738_;
}
v___jp_4739_:
{
lean_object* v___x_4743_; 
v___x_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4743_, 0, v_a_4742_);
v___y_4728_ = v___y_4740_;
v___y_4729_ = v___y_4741_;
v_a_4730_ = v___x_4743_;
goto v___jp_4727_;
}
v___jp_4744_:
{
lean_object* v___x_4748_; 
v___x_4748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4748_, 0, v_a_4747_);
v___y_4728_ = v___y_4745_;
v___y_4729_ = v___y_4746_;
v_a_4730_ = v___x_4748_;
goto v___jp_4727_;
}
v___jp_4749_:
{
lean_object* v___x_4750_; lean_object* v_a_4751_; lean_object* v___x_4752_; uint8_t v___x_4753_; 
v___x_4750_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__1___redArg(v_a_4645_);
v_a_4751_ = lean_ctor_get(v___x_4750_, 0);
lean_inc(v_a_4751_);
lean_dec_ref(v___x_4750_);
v___x_4752_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4753_ = l_Lean_Option_get___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__2(v_options_4668_, v___x_4752_);
if (v___x_4753_ == 0)
{
lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4754_ = lean_io_mono_nanos_now();
v___x_4755_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
if (lean_obj_tag(v___x_4755_) == 0)
{
lean_object* v_a_4756_; uint8_t v_isUnsafe_4757_; 
v_a_4756_ = lean_ctor_get(v___x_4755_, 0);
lean_inc(v_a_4756_);
lean_dec_ref_known(v___x_4755_, 1);
v_isUnsafe_4757_ = lean_ctor_get_uint8(v_a_4756_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4757_ == 0)
{
lean_object* v_ctors_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___f_4764_; lean_object* v___x_4765_; 
v_ctors_4758_ = lean_ctor_get(v_a_4756_, 4);
lean_inc(v_ctors_4758_);
lean_dec(v_a_4756_);
v___x_4759_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4760_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4761_ = lean_box(0);
v___x_4762_ = lean_box(v_hasTrace_4669_);
v___x_4763_ = lean_box(v_isUnsafe_4757_);
v___f_4764_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__2___boxed), 9, 4);
lean_closure_set(v___f_4764_, 0, v___x_4762_);
lean_closure_set(v___f_4764_, 1, v___x_4763_);
lean_closure_set(v___f_4764_, 2, v_ctors_4758_);
lean_closure_set(v___f_4764_, 3, v___x_4761_);
v___x_4765_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4759_, v___x_4760_, v___f_4764_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
if (lean_obj_tag(v___x_4765_) == 0)
{
lean_object* v_a_4766_; 
v_a_4766_ = lean_ctor_get(v___x_4765_, 0);
lean_inc(v_a_4766_);
lean_dec_ref_known(v___x_4765_, 1);
v___y_4718_ = v_a_4751_;
v___y_4719_ = v___x_4754_;
v_a_4720_ = v_a_4766_;
goto v___jp_4717_;
}
else
{
lean_object* v_a_4767_; 
v_a_4767_ = lean_ctor_get(v___x_4765_, 0);
lean_inc(v_a_4767_);
lean_dec_ref_known(v___x_4765_, 1);
v___y_4723_ = v_a_4751_;
v___y_4724_ = v___x_4754_;
v_a_4725_ = v_a_4767_;
goto v___jp_4722_;
}
}
else
{
lean_object* v___x_4768_; 
lean_dec(v_a_4756_);
v___x_4768_ = lean_box(0);
v___y_4718_ = v_a_4751_;
v___y_4719_ = v___x_4754_;
v_a_4720_ = v___x_4768_;
goto v___jp_4717_;
}
}
else
{
lean_object* v_a_4769_; 
v_a_4769_ = lean_ctor_get(v___x_4755_, 0);
lean_inc(v_a_4769_);
lean_dec_ref_known(v___x_4755_, 1);
v___y_4723_ = v_a_4751_;
v___y_4724_ = v___x_4754_;
v_a_4725_ = v_a_4769_;
goto v___jp_4722_;
}
}
else
{
lean_object* v___x_4770_; lean_object* v___x_4771_; 
v___x_4770_ = lean_io_get_num_heartbeats();
v___x_4771_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkInjectiveTheorems_spec__0(v_declName_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
if (lean_obj_tag(v___x_4771_) == 0)
{
lean_object* v_a_4772_; uint8_t v_isUnsafe_4773_; 
v_a_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc(v_a_4772_);
lean_dec_ref_known(v___x_4771_, 1);
v_isUnsafe_4773_ = lean_ctor_get_uint8(v_a_4772_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4773_ == 0)
{
lean_object* v_ctors_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___f_4780_; lean_object* v___x_4781_; 
v_ctors_4774_ = lean_ctor_get(v_a_4772_, 4);
lean_inc(v_ctors_4774_);
lean_dec(v_a_4772_);
v___x_4775_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_4776_ = ((lean_object*)(l_Lean_Meta_mkInjectiveTheorems___closed__4));
v___x_4777_ = lean_box(0);
v___x_4778_ = lean_box(v___x_4753_);
v___x_4779_ = lean_box(v_isUnsafe_4773_);
v___f_4780_ = lean_alloc_closure((void*)(l_Lean_Meta_mkInjectiveTheorems___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4780_, 0, v___x_4778_);
lean_closure_set(v___f_4780_, 1, v___x_4779_);
lean_closure_set(v___f_4780_, 2, v_ctors_4774_);
lean_closure_set(v___f_4780_, 3, v___x_4777_);
v___x_4781_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkInjectiveTheorems_spec__4___redArg(v___x_4775_, v___x_4776_, v___f_4780_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_);
if (lean_obj_tag(v___x_4781_) == 0)
{
lean_object* v_a_4782_; 
v_a_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4782_);
lean_dec_ref_known(v___x_4781_, 1);
v___y_4745_ = v_a_4751_;
v___y_4746_ = v___x_4770_;
v_a_4747_ = v_a_4782_;
goto v___jp_4744_;
}
else
{
lean_object* v_a_4783_; 
v_a_4783_ = lean_ctor_get(v___x_4781_, 0);
lean_inc(v_a_4783_);
lean_dec_ref_known(v___x_4781_, 1);
v___y_4740_ = v_a_4751_;
v___y_4741_ = v___x_4770_;
v_a_4742_ = v_a_4783_;
goto v___jp_4739_;
}
}
else
{
lean_object* v___x_4784_; 
lean_dec(v_a_4772_);
v___x_4784_ = lean_box(0);
v___y_4745_ = v_a_4751_;
v___y_4746_ = v___x_4770_;
v_a_4747_ = v___x_4784_;
goto v___jp_4744_;
}
}
else
{
lean_object* v_a_4785_; 
v_a_4785_ = lean_ctor_get(v___x_4771_, 0);
lean_inc(v_a_4785_);
lean_dec_ref_known(v___x_4771_, 1);
v___y_4740_ = v_a_4751_;
v___y_4741_ = v___x_4770_;
v_a_4742_ = v_a_4785_;
goto v___jp_4739_;
}
}
}
}
}
else
{
lean_dec_ref(v___f_4647_);
lean_dec(v_declName_4641_);
goto v___jp_4656_;
}
}
}
v___jp_4656_:
{
lean_object* v___x_4657_; lean_object* v___x_4659_; 
v___x_4657_ = lean_box(0);
if (v_isShared_4655_ == 0)
{
lean_ctor_set(v___x_4654_, 0, v___x_4657_);
v___x_4659_ = v___x_4654_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v___x_4657_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
}
}
else
{
lean_object* v_a_4816_; lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4823_; 
lean_dec_ref(v___x_4650_);
lean_dec_ref(v_env_4649_);
lean_dec_ref(v___f_4647_);
lean_dec(v_declName_4641_);
v_a_4816_ = lean_ctor_get(v___x_4651_, 0);
v_isSharedCheck_4823_ = !lean_is_exclusive(v___x_4651_);
if (v_isSharedCheck_4823_ == 0)
{
v___x_4818_ = v___x_4651_;
v_isShared_4819_ = v_isSharedCheck_4823_;
goto v_resetjp_4817_;
}
else
{
lean_inc(v_a_4816_);
lean_dec(v___x_4651_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_mkInjectiveTheorems___boxed(lean_object* v_declName_4824_, lean_object* v_a_4825_, lean_object* v_a_4826_, lean_object* v_a_4827_, lean_object* v_a_4828_, lean_object* v_a_4829_){
_start:
{
lean_object* v_res_4830_; 
v_res_4830_ = l_Lean_Meta_mkInjectiveTheorems(v_declName_4824_, v_a_4825_, v_a_4826_, v_a_4827_, v_a_4828_);
lean_dec(v_a_4828_);
lean_dec_ref(v_a_4827_);
lean_dec(v_a_4826_);
lean_dec_ref(v_a_4825_);
return v_res_4830_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(lean_object* v_00_u03b1_4831_, lean_object* v_x_4832_, uint8_t v_isExporting_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_){
_start:
{
lean_object* v___x_4839_; 
v___x_4839_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg(v_x_4832_, v_isExporting_4833_, v___y_4834_, v___y_4835_, v___y_4836_, v___y_4837_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___boxed(lean_object* v_00_u03b1_4840_, lean_object* v_x_4841_, lean_object* v_isExporting_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_){
_start:
{
uint8_t v_isExporting_boxed_4848_; lean_object* v_res_4849_; 
v_isExporting_boxed_4848_ = lean_unbox(v_isExporting_4842_);
v_res_4849_ = l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2(v_00_u03b1_4840_, v_x_4841_, v_isExporting_boxed_4848_, v___y_4843_, v___y_4844_, v___y_4845_, v___y_4846_);
lean_dec(v___y_4846_);
lean_dec_ref(v___y_4845_);
lean_dec(v___y_4844_);
lean_dec_ref(v___y_4843_);
return v_res_4849_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(uint8_t v___x_4850_, uint8_t v___x_4851_, lean_object* v_as_4852_, lean_object* v_as_x27_4853_, lean_object* v_b_4854_, lean_object* v_a_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_){
_start:
{
lean_object* v___x_4861_; 
v___x_4861_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___redArg(v___x_4850_, v___x_4851_, v_as_4852_, v_as_x27_4853_, v_b_4854_, v___y_4856_, v___y_4857_, v___y_4858_, v___y_4859_);
return v___x_4861_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3___boxed(lean_object* v___x_4862_, lean_object* v___x_4863_, lean_object* v_as_4864_, lean_object* v_as_x27_4865_, lean_object* v_b_4866_, lean_object* v_a_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_){
_start:
{
uint8_t v___x_20071__boxed_4873_; uint8_t v___x_20072__boxed_4874_; lean_object* v_res_4875_; 
v___x_20071__boxed_4873_ = lean_unbox(v___x_4862_);
v___x_20072__boxed_4874_ = lean_unbox(v___x_4863_);
v_res_4875_ = l_List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3(v___x_20071__boxed_4873_, v___x_20072__boxed_4874_, v_as_4864_, v_as_x27_4865_, v_b_4866_, v_a_4867_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
lean_dec(v___y_4871_);
lean_dec_ref(v___y_4870_);
lean_dec(v___y_4869_);
lean_dec_ref(v___y_4868_);
lean_dec(v_as_x27_4865_);
lean_dec(v_as_4864_);
return v_res_4875_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_4876_){
_start:
{
lean_object* v___x_4877_; 
v___x_4877_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2);
return v___x_4877_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_4879_; 
v___x_4879_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2);
return v___x_4879_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3___redArg___boxed(lean_object* v___dummy_4880_){
_start:
{
lean_object* v_res_4881_; 
v_res_4881_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3___redArg();
return v_res_4881_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3(lean_object* v_00_u03b2_4882_){
_start:
{
lean_object* v___x_4883_; 
v___x_4883_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2);
return v___x_4883_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5(uint8_t v___x_4884_, uint8_t v___x_4885_, lean_object* v_as_4886_, lean_object* v_as_x27_4887_, lean_object* v_b_4888_, lean_object* v_a_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_){
_start:
{
lean_object* v___x_4895_; 
v___x_4895_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___redArg(v___x_4884_, v___x_4885_, v_as_x27_4887_, v_b_4888_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_);
return v___x_4895_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5___boxed(lean_object* v___x_4896_, lean_object* v___x_4897_, lean_object* v_as_4898_, lean_object* v_as_x27_4899_, lean_object* v_b_4900_, lean_object* v_a_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_, lean_object* v___y_4906_){
_start:
{
uint8_t v___x_20106__boxed_4907_; uint8_t v___x_20107__boxed_4908_; lean_object* v_res_4909_; 
v___x_20106__boxed_4907_ = lean_unbox(v___x_4896_);
v___x_20107__boxed_4908_ = lean_unbox(v___x_4897_);
v_res_4909_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_mkInjectiveTheorems_spec__3_spec__5(v___x_20106__boxed_4907_, v___x_20107__boxed_4908_, v_as_4898_, v_as_x27_4899_, v_b_4900_, v_a_4901_, v___y_4902_, v___y_4903_, v___y_4904_, v___y_4905_);
lean_dec(v___y_4905_);
lean_dec_ref(v___y_4904_);
lean_dec(v___y_4903_);
lean_dec_ref(v___y_4902_);
lean_dec(v_as_x27_4899_);
lean_dec(v_as_4898_);
return v_res_4909_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; 
v___x_4950_ = lean_unsigned_to_nat(4172903888u);
v___x_4951_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4952_ = l_Lean_Name_num___override(v___x_4951_, v___x_4950_);
return v___x_4952_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; 
v___x_4954_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4955_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4956_ = l_Lean_Name_str___override(v___x_4955_, v___x_4954_);
return v___x_4956_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; 
v___x_4958_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_));
v___x_4959_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4960_ = l_Lean_Name_str___override(v___x_4959_, v___x_4958_);
return v___x_4960_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4961_ = lean_unsigned_to_nat(2u);
v___x_4962_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4963_ = l_Lean_Name_num___override(v___x_4962_, v___x_4961_);
return v___x_4963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4965_; uint8_t v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; 
v___x_4965_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_solveEqOfCtorEq___closed__6));
v___x_4966_ = 0;
v___x_4967_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_);
v___x_4968_ = l_Lean_registerTraceClass(v___x_4965_, v___x_4966_, v___x_4967_);
return v___x_4968_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2____boxed(lean_object* v_a_4969_){
_start:
{
lean_object* v_res_4970_; 
v_res_4970_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(lean_object* v_a_4971_, lean_object* v_b_4972_){
_start:
{
lean_object* v_array_4973_; lean_object* v_start_4974_; lean_object* v_stop_4975_; lean_object* v___x_4977_; uint8_t v_isShared_4978_; uint8_t v_isSharedCheck_4988_; 
v_array_4973_ = lean_ctor_get(v_a_4971_, 0);
v_start_4974_ = lean_ctor_get(v_a_4971_, 1);
v_stop_4975_ = lean_ctor_get(v_a_4971_, 2);
v_isSharedCheck_4988_ = !lean_is_exclusive(v_a_4971_);
if (v_isSharedCheck_4988_ == 0)
{
v___x_4977_ = v_a_4971_;
v_isShared_4978_ = v_isSharedCheck_4988_;
goto v_resetjp_4976_;
}
else
{
lean_inc(v_stop_4975_);
lean_inc(v_start_4974_);
lean_inc(v_array_4973_);
lean_dec(v_a_4971_);
v___x_4977_ = lean_box(0);
v_isShared_4978_ = v_isSharedCheck_4988_;
goto v_resetjp_4976_;
}
v_resetjp_4976_:
{
uint8_t v___x_4979_; 
v___x_4979_ = lean_nat_dec_lt(v_start_4974_, v_stop_4975_);
if (v___x_4979_ == 0)
{
lean_del_object(v___x_4977_);
lean_dec(v_stop_4975_);
lean_dec(v_start_4974_);
lean_dec_ref(v_array_4973_);
return v_b_4972_;
}
else
{
lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4983_; 
v___x_4980_ = lean_unsigned_to_nat(1u);
v___x_4981_ = lean_nat_add(v_start_4974_, v___x_4980_);
lean_inc_ref(v_array_4973_);
if (v_isShared_4978_ == 0)
{
lean_ctor_set(v___x_4977_, 1, v___x_4981_);
v___x_4983_ = v___x_4977_;
goto v_reusejp_4982_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v_array_4973_);
lean_ctor_set(v_reuseFailAlloc_4987_, 1, v___x_4981_);
lean_ctor_set(v_reuseFailAlloc_4987_, 2, v_stop_4975_);
v___x_4983_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4982_;
}
v_reusejp_4982_:
{
lean_object* v___x_4984_; lean_object* v___x_4985_; 
v___x_4984_ = lean_array_fget(v_array_4973_, v_start_4974_);
lean_dec(v_start_4974_);
lean_dec_ref(v_array_4973_);
v___x_4985_ = lean_array_push(v_b_4972_, v___x_4984_);
v_a_4971_ = v___x_4983_;
v_b_4972_ = v___x_4985_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; 
v___x_4989_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2_spec__3_spec__5___redArg___closed__0);
v___x_4990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4989_);
return v___x_4990_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4991_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4992_ = lean_unsigned_to_nat(0u);
v___x_4993_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_4993_, 0, v___x_4992_);
lean_ctor_set(v___x_4993_, 1, v___x_4992_);
lean_ctor_set(v___x_4993_, 2, v___x_4992_);
lean_ctor_set(v___x_4993_, 3, v___x_4992_);
lean_ctor_set(v___x_4993_, 4, v___x_4991_);
lean_ctor_set(v___x_4993_, 5, v___x_4991_);
lean_ctor_set(v___x_4993_, 6, v___x_4991_);
lean_ctor_set(v___x_4993_, 7, v___x_4991_);
lean_ctor_set(v___x_4993_, 8, v___x_4991_);
lean_ctor_set(v___x_4993_, 9, v___x_4991_);
lean_ctor_set(v___x_4993_, 10, v___x_4991_);
return v___x_4993_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; 
v___x_4994_ = lean_box(1);
v___x_4995_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__2, &l_Lean_Meta_mkInjectiveTheorems___closed__2_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__2);
v___x_4996_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0);
v___x_4997_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4997_, 0, v___x_4996_);
lean_ctor_set(v___x_4997_, 1, v___x_4995_);
lean_ctor_set(v___x_4997_, 2, v___x_4994_);
return v___x_4997_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; 
v___x_4999_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3));
v___x_5000_ = l_Lean_stringToMessageData(v___x_4999_);
return v___x_5000_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6(void){
_start:
{
lean_object* v___x_5002_; lean_object* v___x_5003_; 
v___x_5002_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5));
v___x_5003_ = l_Lean_stringToMessageData(v___x_5002_);
return v___x_5003_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8(void){
_start:
{
lean_object* v___x_5005_; lean_object* v___x_5006_; 
v___x_5005_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7));
v___x_5006_ = l_Lean_stringToMessageData(v___x_5005_);
return v___x_5006_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10(void){
_start:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; 
v___x_5008_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9));
v___x_5009_ = l_Lean_stringToMessageData(v___x_5008_);
return v___x_5009_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12(void){
_start:
{
lean_object* v___x_5011_; lean_object* v___x_5012_; 
v___x_5011_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11));
v___x_5012_ = l_Lean_stringToMessageData(v___x_5011_);
return v___x_5012_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14(void){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; 
v___x_5014_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13));
v___x_5015_ = l_Lean_stringToMessageData(v___x_5014_);
return v___x_5015_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16(void){
_start:
{
lean_object* v___x_5017_; lean_object* v___x_5018_; 
v___x_5017_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__15));
v___x_5018_ = l_Lean_stringToMessageData(v___x_5017_);
return v___x_5018_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_5019_, lean_object* v_declHint_5020_, lean_object* v___y_5021_){
_start:
{
lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v_env_5025_; uint8_t v___x_5026_; 
v___x_5023_ = lean_box(0);
v___x_5024_ = lean_st_ref_get(v___y_5021_);
v_env_5025_ = lean_ctor_get(v___x_5024_, 0);
lean_inc_ref(v_env_5025_);
lean_dec(v___x_5024_);
v___x_5026_ = l_Lean_Name_isAnonymous(v_declHint_5020_);
if (v___x_5026_ == 0)
{
uint8_t v_isExporting_5027_; 
v_isExporting_5027_ = lean_ctor_get_uint8(v_env_5025_, sizeof(void*)*13);
if (v_isExporting_5027_ == 0)
{
lean_object* v___x_5028_; 
lean_dec_ref(v_env_5025_);
lean_dec(v_declHint_5020_);
v___x_5028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5028_, 0, v_msg_5019_);
return v___x_5028_;
}
else
{
lean_object* v___x_5029_; uint8_t v___x_5030_; 
lean_inc_ref(v_env_5025_);
v___x_5029_ = l_Lean_Environment_setExporting(v_env_5025_, v___x_5026_);
lean_inc(v_declHint_5020_);
lean_inc_ref(v___x_5029_);
v___x_5030_ = l_Lean_Environment_contains(v___x_5029_, v_declHint_5020_, v_isExporting_5027_);
if (v___x_5030_ == 0)
{
lean_object* v___x_5031_; 
lean_dec_ref(v___x_5029_);
lean_dec_ref(v_env_5025_);
lean_dec(v_declHint_5020_);
v___x_5031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5031_, 0, v_msg_5019_);
return v___x_5031_;
}
else
{
lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v_c_5037_; lean_object* v___x_5038_; 
v___x_5032_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_5033_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2);
v___x_5034_ = l_Lean_Options_empty;
lean_inc_ref(v___x_5029_);
v___x_5035_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5035_, 0, v___x_5029_);
lean_ctor_set(v___x_5035_, 1, v___x_5032_);
lean_ctor_set(v___x_5035_, 2, v___x_5033_);
lean_ctor_set(v___x_5035_, 3, v___x_5034_);
lean_inc(v_declHint_5020_);
v___x_5036_ = l_Lean_MessageData_ofConstName(v_declHint_5020_, v___x_5026_);
v_c_5037_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_5037_, 0, v___x_5035_);
lean_ctor_set(v_c_5037_, 1, v___x_5036_);
v___x_5038_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_5029_, v_declHint_5020_);
lean_dec_ref(v___x_5029_);
if (lean_obj_tag(v___x_5038_) == 0)
{
lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; 
lean_dec_ref(v_env_5025_);
lean_dec(v_declHint_5020_);
v___x_5039_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_5040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5040_, 0, v___x_5039_);
lean_ctor_set(v___x_5040_, 1, v_c_5037_);
v___x_5041_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6);
v___x_5042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5042_, 0, v___x_5040_);
lean_ctor_set(v___x_5042_, 1, v___x_5041_);
v___x_5043_ = l_Lean_MessageData_note(v___x_5042_);
v___x_5044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5044_, 0, v_msg_5019_);
lean_ctor_set(v___x_5044_, 1, v___x_5043_);
v___x_5045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5045_, 0, v___x_5044_);
return v___x_5045_;
}
else
{
lean_object* v_val_5046_; lean_object* v___x_5048_; uint8_t v_isShared_5049_; uint8_t v_isSharedCheck_5080_; 
v_val_5046_ = lean_ctor_get(v___x_5038_, 0);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_5038_);
if (v_isSharedCheck_5080_ == 0)
{
v___x_5048_ = v___x_5038_;
v_isShared_5049_ = v_isSharedCheck_5080_;
goto v_resetjp_5047_;
}
else
{
lean_inc(v_val_5046_);
lean_dec(v___x_5038_);
v___x_5048_ = lean_box(0);
v_isShared_5049_ = v_isSharedCheck_5080_;
goto v_resetjp_5047_;
}
v_resetjp_5047_:
{
lean_object* v___x_5050_; lean_object* v_moduleNames_5051_; lean_object* v_mod_5052_; uint8_t v___x_5053_; 
v___x_5050_ = l_Lean_Environment_header(v_env_5025_);
lean_dec_ref(v_env_5025_);
v_moduleNames_5051_ = lean_ctor_get(v___x_5050_, 4);
lean_inc_ref(v_moduleNames_5051_);
lean_dec_ref(v___x_5050_);
v_mod_5052_ = lean_array_get(v___x_5023_, v_moduleNames_5051_, v_val_5046_);
lean_dec(v_val_5046_);
lean_dec_ref(v_moduleNames_5051_);
v___x_5053_ = l_Lean_isPrivateName(v_declHint_5020_);
lean_dec(v_declHint_5020_);
if (v___x_5053_ == 0)
{
lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5065_; 
v___x_5054_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8);
v___x_5055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5055_, 0, v___x_5054_);
lean_ctor_set(v___x_5055_, 1, v_c_5037_);
v___x_5056_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10);
v___x_5057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5057_, 0, v___x_5055_);
lean_ctor_set(v___x_5057_, 1, v___x_5056_);
v___x_5058_ = l_Lean_MessageData_ofName(v_mod_5052_);
v___x_5059_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5059_, 0, v___x_5057_);
lean_ctor_set(v___x_5059_, 1, v___x_5058_);
v___x_5060_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12);
v___x_5061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5061_, 0, v___x_5059_);
lean_ctor_set(v___x_5061_, 1, v___x_5060_);
v___x_5062_ = l_Lean_MessageData_note(v___x_5061_);
v___x_5063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5063_, 0, v_msg_5019_);
lean_ctor_set(v___x_5063_, 1, v___x_5062_);
if (v_isShared_5049_ == 0)
{
lean_ctor_set_tag(v___x_5048_, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5063_);
v___x_5065_ = v___x_5048_;
goto v_reusejp_5064_;
}
else
{
lean_object* v_reuseFailAlloc_5066_; 
v_reuseFailAlloc_5066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5066_, 0, v___x_5063_);
v___x_5065_ = v_reuseFailAlloc_5066_;
goto v_reusejp_5064_;
}
v_reusejp_5064_:
{
return v___x_5065_;
}
}
else
{
lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5078_; 
v___x_5067_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4);
v___x_5068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5068_, 0, v___x_5067_);
lean_ctor_set(v___x_5068_, 1, v_c_5037_);
v___x_5069_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__14);
v___x_5070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5070_, 0, v___x_5068_);
lean_ctor_set(v___x_5070_, 1, v___x_5069_);
v___x_5071_ = l_Lean_MessageData_ofName(v_mod_5052_);
v___x_5072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5072_, 0, v___x_5070_);
lean_ctor_set(v___x_5072_, 1, v___x_5071_);
v___x_5073_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__16);
v___x_5074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5074_, 0, v___x_5072_);
lean_ctor_set(v___x_5074_, 1, v___x_5073_);
v___x_5075_ = l_Lean_MessageData_note(v___x_5074_);
v___x_5076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5076_, 0, v_msg_5019_);
lean_ctor_set(v___x_5076_, 1, v___x_5075_);
if (v_isShared_5049_ == 0)
{
lean_ctor_set_tag(v___x_5048_, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5076_);
v___x_5078_ = v___x_5048_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v___x_5076_);
v___x_5078_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
return v___x_5078_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5081_; 
lean_dec_ref(v_env_5025_);
lean_dec(v_declHint_5020_);
v___x_5081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5081_, 0, v_msg_5019_);
return v___x_5081_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_5082_, lean_object* v_declHint_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_){
_start:
{
lean_object* v_res_5086_; 
v_res_5086_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_5082_, v_declHint_5083_, v___y_5084_);
lean_dec(v___y_5084_);
return v_res_5086_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_5087_, lean_object* v_declHint_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_){
_start:
{
lean_object* v___x_5094_; lean_object* v_a_5095_; lean_object* v___x_5097_; uint8_t v_isShared_5098_; uint8_t v_isSharedCheck_5104_; 
v___x_5094_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_5087_, v_declHint_5088_, v___y_5092_);
v_a_5095_ = lean_ctor_get(v___x_5094_, 0);
v_isSharedCheck_5104_ = !lean_is_exclusive(v___x_5094_);
if (v_isSharedCheck_5104_ == 0)
{
v___x_5097_ = v___x_5094_;
v_isShared_5098_ = v_isSharedCheck_5104_;
goto v_resetjp_5096_;
}
else
{
lean_inc(v_a_5095_);
lean_dec(v___x_5094_);
v___x_5097_ = lean_box(0);
v_isShared_5098_ = v_isSharedCheck_5104_;
goto v_resetjp_5096_;
}
v_resetjp_5096_:
{
lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5102_; 
v___x_5099_ = l_Lean_unknownIdentifierMessageTag;
v___x_5100_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5099_);
lean_ctor_set(v___x_5100_, 1, v_a_5095_);
if (v_isShared_5098_ == 0)
{
lean_ctor_set(v___x_5097_, 0, v___x_5100_);
v___x_5102_ = v___x_5097_;
goto v_reusejp_5101_;
}
else
{
lean_object* v_reuseFailAlloc_5103_; 
v_reuseFailAlloc_5103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5103_, 0, v___x_5100_);
v___x_5102_ = v_reuseFailAlloc_5103_;
goto v_reusejp_5101_;
}
v_reusejp_5101_:
{
return v___x_5102_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_5105_, lean_object* v_declHint_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_){
_start:
{
lean_object* v_res_5112_; 
v_res_5112_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_5105_, v_declHint_5106_, v___y_5107_, v___y_5108_, v___y_5109_, v___y_5110_);
lean_dec(v___y_5110_);
lean_dec_ref(v___y_5109_);
lean_dec(v___y_5108_);
lean_dec_ref(v___y_5107_);
return v_res_5112_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_5113_, lean_object* v_msg_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v_toCold_5120_; lean_object* v_currRecDepth_5121_; lean_object* v_ref_5122_; uint16_t v_optionFlags_5123_; uint8_t v_suppressElabErrors_5124_; uint8_t v_checkDeprecated_5125_; uint8_t v_isRecordingDeps_5126_; lean_object* v_ref_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; 
v_toCold_5120_ = lean_ctor_get(v___y_5117_, 0);
v_currRecDepth_5121_ = lean_ctor_get(v___y_5117_, 1);
v_ref_5122_ = lean_ctor_get(v___y_5117_, 2);
v_optionFlags_5123_ = lean_ctor_get_uint16(v___y_5117_, sizeof(void*)*3);
v_suppressElabErrors_5124_ = lean_ctor_get_uint8(v___y_5117_, sizeof(void*)*3 + 2);
v_checkDeprecated_5125_ = lean_ctor_get_uint8(v___y_5117_, sizeof(void*)*3 + 3);
v_isRecordingDeps_5126_ = lean_ctor_get_uint8(v___y_5117_, sizeof(void*)*3 + 4);
v_ref_5127_ = l_Lean_replaceRef(v_ref_5113_, v_ref_5122_);
lean_inc(v_currRecDepth_5121_);
lean_inc_ref(v_toCold_5120_);
v___x_5128_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5128_, 0, v_toCold_5120_);
lean_ctor_set(v___x_5128_, 1, v_currRecDepth_5121_);
lean_ctor_set(v___x_5128_, 2, v_ref_5127_);
lean_ctor_set_uint16(v___x_5128_, sizeof(void*)*3, v_optionFlags_5123_);
lean_ctor_set_uint8(v___x_5128_, sizeof(void*)*3 + 2, v_suppressElabErrors_5124_);
lean_ctor_set_uint8(v___x_5128_, sizeof(void*)*3 + 3, v_checkDeprecated_5125_);
lean_ctor_set_uint8(v___x_5128_, sizeof(void*)*3 + 4, v_isRecordingDeps_5126_);
v___x_5129_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v_msg_5114_, v___y_5115_, v___y_5116_, v___x_5128_, v___y_5118_);
lean_dec_ref_known(v___x_5128_, 3);
return v___x_5129_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_5130_, lean_object* v_msg_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_){
_start:
{
lean_object* v_res_5137_; 
v_res_5137_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5130_, v_msg_5131_, v___y_5132_, v___y_5133_, v___y_5134_, v___y_5135_);
lean_dec(v___y_5135_);
lean_dec_ref(v___y_5134_);
lean_dec(v___y_5133_);
lean_dec_ref(v___y_5132_);
lean_dec(v_ref_5130_);
return v_res_5137_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_5138_, lean_object* v_msg_5139_, lean_object* v_declHint_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_, lean_object* v___y_5143_, lean_object* v___y_5144_){
_start:
{
lean_object* v___x_5146_; lean_object* v_a_5147_; lean_object* v___x_5148_; 
v___x_5146_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_5139_, v_declHint_5140_, v___y_5141_, v___y_5142_, v___y_5143_, v___y_5144_);
v_a_5147_ = lean_ctor_get(v___x_5146_, 0);
lean_inc(v_a_5147_);
lean_dec_ref(v___x_5146_);
v___x_5148_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5138_, v_a_5147_, v___y_5141_, v___y_5142_, v___y_5143_, v___y_5144_);
return v___x_5148_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_5149_, lean_object* v_msg_5150_, lean_object* v_declHint_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_){
_start:
{
lean_object* v_res_5157_; 
v_res_5157_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5149_, v_msg_5150_, v_declHint_5151_, v___y_5152_, v___y_5153_, v___y_5154_, v___y_5155_);
lean_dec(v___y_5155_);
lean_dec_ref(v___y_5154_);
lean_dec(v___y_5153_);
lean_dec_ref(v___y_5152_);
lean_dec(v_ref_5149_);
return v_res_5157_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_5159_; lean_object* v___x_5160_; 
v___x_5159_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_5160_ = l_Lean_stringToMessageData(v___x_5159_);
return v___x_5160_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_5161_, lean_object* v_constName_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_){
_start:
{
lean_object* v___x_5168_; uint8_t v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; 
v___x_5168_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_5169_ = 0;
lean_inc(v_constName_5162_);
v___x_5170_ = l_Lean_MessageData_ofConstName(v_constName_5162_, v___x_5169_);
v___x_5171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5171_, 0, v___x_5168_);
lean_ctor_set(v___x_5171_, 1, v___x_5170_);
v___x_5172_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5173_, 0, v___x_5171_);
lean_ctor_set(v___x_5173_, 1, v___x_5172_);
v___x_5174_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5161_, v___x_5173_, v_constName_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_);
return v___x_5174_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_5175_, lean_object* v_constName_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_){
_start:
{
lean_object* v_res_5182_; 
v_res_5182_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5175_, v_constName_5176_, v___y_5177_, v___y_5178_, v___y_5179_, v___y_5180_);
lean_dec(v___y_5180_);
lean_dec_ref(v___y_5179_);
lean_dec(v___y_5178_);
lean_dec_ref(v___y_5177_);
lean_dec(v_ref_5175_);
return v_res_5182_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(lean_object* v_constName_5183_, lean_object* v___y_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_){
_start:
{
lean_object* v_ref_5189_; lean_object* v___x_5190_; 
v_ref_5189_ = lean_ctor_get(v___y_5186_, 2);
v___x_5190_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5189_, v_constName_5183_, v___y_5184_, v___y_5185_, v___y_5186_, v___y_5187_);
return v___x_5190_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_constName_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_){
_start:
{
lean_object* v_res_5197_; 
v_res_5197_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5191_, v___y_5192_, v___y_5193_, v___y_5194_, v___y_5195_);
lean_dec(v___y_5195_);
lean_dec_ref(v___y_5194_);
lean_dec(v___y_5193_);
lean_dec_ref(v___y_5192_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(lean_object* v_constName_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_){
_start:
{
lean_object* v___x_5204_; lean_object* v_env_5205_; uint8_t v___x_5206_; lean_object* v___x_5207_; 
v___x_5204_ = lean_st_ref_get(v___y_5202_);
v_env_5205_ = lean_ctor_get(v___x_5204_, 0);
lean_inc_ref(v_env_5205_);
lean_dec(v___x_5204_);
v___x_5206_ = 0;
lean_inc(v_constName_5198_);
v___x_5207_ = l_Lean_Environment_find_x3f(v_env_5205_, v_constName_5198_, v___x_5206_);
if (lean_obj_tag(v___x_5207_) == 0)
{
lean_object* v___x_5208_; 
v___x_5208_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5198_, v___y_5199_, v___y_5200_, v___y_5201_, v___y_5202_);
return v___x_5208_;
}
else
{
lean_object* v_val_5209_; lean_object* v___x_5211_; uint8_t v_isShared_5212_; uint8_t v_isSharedCheck_5216_; 
lean_dec(v_constName_5198_);
v_val_5209_ = lean_ctor_get(v___x_5207_, 0);
v_isSharedCheck_5216_ = !lean_is_exclusive(v___x_5207_);
if (v_isSharedCheck_5216_ == 0)
{
v___x_5211_ = v___x_5207_;
v_isShared_5212_ = v_isSharedCheck_5216_;
goto v_resetjp_5210_;
}
else
{
lean_inc(v_val_5209_);
lean_dec(v___x_5207_);
v___x_5211_ = lean_box(0);
v_isShared_5212_ = v_isSharedCheck_5216_;
goto v_resetjp_5210_;
}
v_resetjp_5210_:
{
lean_object* v___x_5214_; 
if (v_isShared_5212_ == 0)
{
lean_ctor_set_tag(v___x_5211_, 0);
v___x_5214_ = v___x_5211_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v_val_5209_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0___boxed(lean_object* v_constName_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_){
_start:
{
lean_object* v_res_5223_; 
v_res_5223_ = l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(v_constName_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_);
lean_dec(v___y_5221_);
lean_dec_ref(v___y_5220_);
lean_dec(v___y_5219_);
lean_dec_ref(v___y_5218_);
return v_res_5223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(lean_object* v_x_5226_, lean_object* v_x_5227_, lean_object* v_x_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_){
_start:
{
if (lean_obj_tag(v_x_5226_) == 5)
{
lean_object* v_fn_5234_; lean_object* v_arg_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5238_; 
v_fn_5234_ = lean_ctor_get(v_x_5226_, 0);
lean_inc_ref(v_fn_5234_);
v_arg_5235_ = lean_ctor_get(v_x_5226_, 1);
lean_inc_ref(v_arg_5235_);
lean_dec_ref_known(v_x_5226_, 2);
v___x_5236_ = lean_array_set(v_x_5227_, v_x_5228_, v_arg_5235_);
v___x_5237_ = lean_unsigned_to_nat(1u);
v___x_5238_ = lean_nat_sub(v_x_5228_, v___x_5237_);
lean_dec(v_x_5228_);
v_x_5226_ = v_fn_5234_;
v_x_5227_ = v___x_5236_;
v_x_5228_ = v___x_5238_;
goto _start;
}
else
{
lean_dec(v_x_5228_);
if (lean_obj_tag(v_x_5226_) == 4)
{
lean_object* v_declName_5240_; lean_object* v___x_5241_; 
v_declName_5240_ = lean_ctor_get(v_x_5226_, 0);
lean_inc(v_declName_5240_);
lean_dec_ref_known(v_x_5226_, 2);
v___x_5241_ = l_Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0(v_declName_5240_, v___y_5229_, v___y_5230_, v___y_5231_, v___y_5232_);
if (lean_obj_tag(v___x_5241_) == 0)
{
lean_object* v_a_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5273_; 
v_a_5242_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5273_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5273_ == 0)
{
v___x_5244_ = v___x_5241_;
v_isShared_5245_ = v_isSharedCheck_5273_;
goto v_resetjp_5243_;
}
else
{
lean_inc(v_a_5242_);
lean_dec(v___x_5241_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5273_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
lean_object* v_lower_5247_; lean_object* v_upper_5248_; 
if (lean_obj_tag(v_a_5242_) == 5)
{
lean_object* v_val_5256_; lean_object* v___x_5258_; uint8_t v_isShared_5259_; uint8_t v_isSharedCheck_5270_; 
v_val_5256_ = lean_ctor_get(v_a_5242_, 0);
v_isSharedCheck_5270_ = !lean_is_exclusive(v_a_5242_);
if (v_isSharedCheck_5270_ == 0)
{
v___x_5258_ = v_a_5242_;
v_isShared_5259_ = v_isSharedCheck_5270_;
goto v_resetjp_5257_;
}
else
{
lean_inc(v_val_5256_);
lean_dec(v_a_5242_);
v___x_5258_ = lean_box(0);
v_isShared_5259_ = v_isSharedCheck_5270_;
goto v_resetjp_5257_;
}
v_resetjp_5257_:
{
lean_object* v_numParams_5260_; lean_object* v_numIndices_5261_; lean_object* v___x_5262_; uint8_t v___x_5263_; 
v_numParams_5260_ = lean_ctor_get(v_val_5256_, 1);
lean_inc(v_numParams_5260_);
v_numIndices_5261_ = lean_ctor_get(v_val_5256_, 2);
lean_inc(v_numIndices_5261_);
lean_dec_ref(v_val_5256_);
v___x_5262_ = lean_unsigned_to_nat(0u);
v___x_5263_ = lean_nat_dec_eq(v_numIndices_5261_, v___x_5262_);
lean_dec(v_numIndices_5261_);
if (v___x_5263_ == 0)
{
lean_object* v___x_5264_; uint8_t v___x_5265_; 
lean_del_object(v___x_5258_);
v___x_5264_ = lean_array_get_size(v_x_5227_);
v___x_5265_ = lean_nat_dec_le(v_numParams_5260_, v___x_5262_);
if (v___x_5265_ == 0)
{
v_lower_5247_ = v_numParams_5260_;
v_upper_5248_ = v___x_5264_;
goto v___jp_5246_;
}
else
{
lean_dec(v_numParams_5260_);
v_lower_5247_ = v___x_5262_;
v_upper_5248_ = v___x_5264_;
goto v___jp_5246_;
}
}
else
{
lean_object* v___x_5266_; lean_object* v___x_5268_; 
lean_dec(v_numParams_5260_);
lean_del_object(v___x_5244_);
lean_dec_ref(v_x_5227_);
v___x_5266_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___closed__0));
if (v_isShared_5259_ == 0)
{
lean_ctor_set_tag(v___x_5258_, 0);
lean_ctor_set(v___x_5258_, 0, v___x_5266_);
v___x_5268_ = v___x_5258_;
goto v_reusejp_5267_;
}
else
{
lean_object* v_reuseFailAlloc_5269_; 
v_reuseFailAlloc_5269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5269_, 0, v___x_5266_);
v___x_5268_ = v_reuseFailAlloc_5269_;
goto v_reusejp_5267_;
}
v_reusejp_5267_:
{
return v___x_5268_;
}
}
}
}
else
{
lean_object* v___x_5271_; lean_object* v___x_5272_; 
lean_del_object(v___x_5244_);
lean_dec(v_a_5242_);
lean_dec_ref(v_x_5227_);
v___x_5271_ = lean_box(0);
v___x_5272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5272_, 0, v___x_5271_);
return v___x_5272_;
}
v___jp_5246_:
{
lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5254_; 
v___x_5249_ = l_Array_toSubarray___redArg(v_x_5227_, v_lower_5247_, v_upper_5248_);
v___x_5250_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_5251_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v___x_5249_, v___x_5250_);
v___x_5252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5252_, 0, v___x_5251_);
if (v_isShared_5245_ == 0)
{
lean_ctor_set(v___x_5244_, 0, v___x_5252_);
v___x_5254_ = v___x_5244_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v___x_5252_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
return v___x_5254_;
}
}
}
}
else
{
lean_object* v_a_5274_; lean_object* v___x_5276_; uint8_t v_isShared_5277_; uint8_t v_isSharedCheck_5281_; 
lean_dec_ref(v_x_5227_);
v_a_5274_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5281_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5276_ = v___x_5241_;
v_isShared_5277_ = v_isSharedCheck_5281_;
goto v_resetjp_5275_;
}
else
{
lean_inc(v_a_5274_);
lean_dec(v___x_5241_);
v___x_5276_ = lean_box(0);
v_isShared_5277_ = v_isSharedCheck_5281_;
goto v_resetjp_5275_;
}
v_resetjp_5275_:
{
lean_object* v___x_5279_; 
if (v_isShared_5277_ == 0)
{
v___x_5279_ = v___x_5276_;
goto v_reusejp_5278_;
}
else
{
lean_object* v_reuseFailAlloc_5280_; 
v_reuseFailAlloc_5280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5280_, 0, v_a_5274_);
v___x_5279_ = v_reuseFailAlloc_5280_;
goto v_reusejp_5278_;
}
v_reusejp_5278_:
{
return v___x_5279_;
}
}
}
}
else
{
lean_object* v___x_5282_; lean_object* v___x_5283_; 
lean_dec_ref(v_x_5227_);
lean_dec_ref(v_x_5226_);
v___x_5282_ = lean_box(0);
v___x_5283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5283_, 0, v___x_5282_);
return v___x_5283_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2___boxed(lean_object* v_x_5284_, lean_object* v_x_5285_, lean_object* v_x_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_){
_start:
{
lean_object* v_res_5292_; 
v_res_5292_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(v_x_5284_, v_x_5285_, v_x_5286_, v___y_5287_, v___y_5288_, v___y_5289_, v___y_5290_);
lean_dec(v___y_5290_);
lean_dec_ref(v___y_5289_);
lean_dec(v___y_5288_);
lean_dec_ref(v___y_5287_);
return v_res_5292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f(lean_object* v_ctorApp_5293_, lean_object* v_a_5294_, lean_object* v_a_5295_, lean_object* v_a_5296_, lean_object* v_a_5297_){
_start:
{
lean_object* v___x_5299_; 
lean_inc(v_a_5297_);
lean_inc_ref(v_a_5296_);
lean_inc(v_a_5295_);
lean_inc_ref(v_a_5294_);
v___x_5299_ = lean_infer_type(v_ctorApp_5293_, v_a_5294_, v_a_5295_, v_a_5296_, v_a_5297_);
if (lean_obj_tag(v___x_5299_) == 0)
{
lean_object* v_a_5300_; lean_object* v___x_5301_; 
v_a_5300_ = lean_ctor_get(v___x_5299_, 0);
lean_inc(v_a_5300_);
lean_dec_ref_known(v___x_5299_, 1);
v___x_5301_ = l_Lean_Meta_whnfD(v_a_5300_, v_a_5294_, v_a_5295_, v_a_5296_, v_a_5297_);
if (lean_obj_tag(v___x_5301_) == 0)
{
lean_object* v_a_5302_; lean_object* v_dummy_5303_; lean_object* v_nargs_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; 
v_a_5302_ = lean_ctor_get(v___x_5301_, 0);
lean_inc(v_a_5302_);
lean_dec_ref_known(v___x_5301_, 1);
v_dummy_5303_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_elimOptParam_spec__0_spec__0___lam__1___closed__0);
v_nargs_5304_ = l_Lean_Expr_getAppNumArgs(v_a_5302_);
lean_inc(v_nargs_5304_);
v___x_5305_ = lean_mk_array(v_nargs_5304_, v_dummy_5303_);
v___x_5306_ = lean_unsigned_to_nat(1u);
v___x_5307_ = lean_nat_sub(v_nargs_5304_, v___x_5306_);
lean_dec(v_nargs_5304_);
v___x_5308_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_getCtorAppIndices_x3f_spec__2(v_a_5302_, v___x_5305_, v___x_5307_, v_a_5294_, v_a_5295_, v_a_5296_, v_a_5297_);
return v___x_5308_;
}
else
{
lean_object* v_a_5309_; lean_object* v___x_5311_; uint8_t v_isShared_5312_; uint8_t v_isSharedCheck_5316_; 
v_a_5309_ = lean_ctor_get(v___x_5301_, 0);
v_isSharedCheck_5316_ = !lean_is_exclusive(v___x_5301_);
if (v_isSharedCheck_5316_ == 0)
{
v___x_5311_ = v___x_5301_;
v_isShared_5312_ = v_isSharedCheck_5316_;
goto v_resetjp_5310_;
}
else
{
lean_inc(v_a_5309_);
lean_dec(v___x_5301_);
v___x_5311_ = lean_box(0);
v_isShared_5312_ = v_isSharedCheck_5316_;
goto v_resetjp_5310_;
}
v_resetjp_5310_:
{
lean_object* v___x_5314_; 
if (v_isShared_5312_ == 0)
{
v___x_5314_ = v___x_5311_;
goto v_reusejp_5313_;
}
else
{
lean_object* v_reuseFailAlloc_5315_; 
v_reuseFailAlloc_5315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5315_, 0, v_a_5309_);
v___x_5314_ = v_reuseFailAlloc_5315_;
goto v_reusejp_5313_;
}
v_reusejp_5313_:
{
return v___x_5314_;
}
}
}
}
else
{
lean_object* v_a_5317_; lean_object* v___x_5319_; uint8_t v_isShared_5320_; uint8_t v_isSharedCheck_5324_; 
v_a_5317_ = lean_ctor_get(v___x_5299_, 0);
v_isSharedCheck_5324_ = !lean_is_exclusive(v___x_5299_);
if (v_isSharedCheck_5324_ == 0)
{
v___x_5319_ = v___x_5299_;
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
else
{
lean_inc(v_a_5317_);
lean_dec(v___x_5299_);
v___x_5319_ = lean_box(0);
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
v_resetjp_5318_:
{
lean_object* v___x_5322_; 
if (v_isShared_5320_ == 0)
{
v___x_5322_ = v___x_5319_;
goto v_reusejp_5321_;
}
else
{
lean_object* v_reuseFailAlloc_5323_; 
v_reuseFailAlloc_5323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5323_, 0, v_a_5317_);
v___x_5322_ = v_reuseFailAlloc_5323_;
goto v_reusejp_5321_;
}
v_reusejp_5321_:
{
return v___x_5322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getCtorAppIndices_x3f___boxed(lean_object* v_ctorApp_5325_, lean_object* v_a_5326_, lean_object* v_a_5327_, lean_object* v_a_5328_, lean_object* v_a_5329_, lean_object* v_a_5330_){
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_Lean_Meta_getCtorAppIndices_x3f(v_ctorApp_5325_, v_a_5326_, v_a_5327_, v_a_5328_, v_a_5329_);
lean_dec(v_a_5329_);
lean_dec_ref(v_a_5328_);
lean_dec(v_a_5327_);
lean_dec_ref(v_a_5326_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1(lean_object* v_inst_5332_, lean_object* v_R_5333_, lean_object* v_a_5334_, lean_object* v_b_5335_){
_start:
{
lean_object* v___x_5336_; 
v___x_5336_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v_a_5334_, v_b_5335_);
return v___x_5336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(lean_object* v_00_u03b1_5337_, lean_object* v_constName_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_){
_start:
{
lean_object* v___x_5344_; 
v___x_5344_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___redArg(v_constName_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_);
return v___x_5344_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5345_, lean_object* v_constName_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_){
_start:
{
lean_object* v_res_5352_; 
v_res_5352_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0(v_00_u03b1_5345_, v_constName_5346_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_);
lean_dec(v___y_5350_);
lean_dec_ref(v___y_5349_);
lean_dec(v___y_5348_);
lean_dec_ref(v___y_5347_);
return v_res_5352_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5353_, lean_object* v_ref_5354_, lean_object* v_constName_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_){
_start:
{
lean_object* v___x_5361_; 
v___x_5361_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___redArg(v_ref_5354_, v_constName_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v___y_5359_);
return v___x_5361_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5362_, lean_object* v_ref_5363_, lean_object* v_constName_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_){
_start:
{
lean_object* v_res_5370_; 
v_res_5370_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1(v_00_u03b1_5362_, v_ref_5363_, v_constName_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_);
lean_dec(v___y_5368_);
lean_dec_ref(v___y_5367_);
lean_dec(v___y_5366_);
lean_dec_ref(v___y_5365_);
lean_dec(v_ref_5363_);
return v_res_5370_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_5371_, lean_object* v_ref_5372_, lean_object* v_msg_5373_, lean_object* v_declHint_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_){
_start:
{
lean_object* v___x_5380_; 
v___x_5380_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_5372_, v_msg_5373_, v_declHint_5374_, v___y_5375_, v___y_5376_, v___y_5377_, v___y_5378_);
return v___x_5380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_5381_, lean_object* v_ref_5382_, lean_object* v_msg_5383_, lean_object* v_declHint_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_){
_start:
{
lean_object* v_res_5390_; 
v_res_5390_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_5381_, v_ref_5382_, v_msg_5383_, v_declHint_5384_, v___y_5385_, v___y_5386_, v___y_5387_, v___y_5388_);
lean_dec(v___y_5388_);
lean_dec_ref(v___y_5387_);
lean_dec(v___y_5386_);
lean_dec_ref(v___y_5385_);
lean_dec(v_ref_5382_);
return v_res_5390_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_5391_, lean_object* v_declHint_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_){
_start:
{
lean_object* v___x_5398_; 
v___x_5398_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_5391_, v_declHint_5392_, v___y_5396_);
return v___x_5398_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_5399_, lean_object* v_declHint_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_){
_start:
{
lean_object* v_res_5406_; 
v_res_5406_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_5399_, v_declHint_5400_, v___y_5401_, v___y_5402_, v___y_5403_, v___y_5404_);
lean_dec(v___y_5404_);
lean_dec_ref(v___y_5403_);
lean_dec(v___y_5402_);
lean_dec_ref(v___y_5401_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_5407_, lean_object* v_ref_5408_, lean_object* v_msg_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_){
_start:
{
lean_object* v___x_5415_; 
v___x_5415_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_5408_, v_msg_5409_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_);
return v___x_5415_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_5416_, lean_object* v_ref_5417_, lean_object* v_msg_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_){
_start:
{
lean_object* v_res_5424_; 
v_res_5424_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_getCtorAppIndices_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_5416_, v_ref_5417_, v_msg_5418_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_);
lean_dec(v___y_5422_);
lean_dec_ref(v___y_5421_);
lean_dec(v___y_5420_);
lean_dec_ref(v___y_5419_);
lean_dec(v_ref_5417_);
return v_res_5424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed(lean_object* v_i_5425_, lean_object* v_body_5426_, lean_object* v_args2_5427_, lean_object* v_ctorVal_5428_, lean_object* v_args1_5429_, lean_object* v_k_5430_, lean_object* v_arg2_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_, lean_object* v___y_5436_){
_start:
{
lean_object* v_res_5437_; 
v_res_5437_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(v_i_5425_, v_body_5426_, v_args2_5427_, v_ctorVal_5428_, v_args1_5429_, v_k_5430_, v_arg2_5431_, v___y_5432_, v___y_5433_, v___y_5434_, v___y_5435_);
lean_dec(v___y_5435_);
lean_dec_ref(v___y_5434_);
lean_dec(v___y_5433_);
lean_dec_ref(v___y_5432_);
lean_dec_ref(v_body_5426_);
lean_dec(v_i_5425_);
return v_res_5437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(lean_object* v_ctorVal_5438_, lean_object* v_args1_5439_, lean_object* v_k_5440_, lean_object* v_i_5441_, lean_object* v_type_5442_, lean_object* v_args2_5443_, lean_object* v_a_5444_, lean_object* v_a_5445_, lean_object* v_a_5446_, lean_object* v_a_5447_){
_start:
{
lean_object* v___x_5449_; uint8_t v___x_5450_; 
v___x_5449_ = lean_array_get_size(v_args1_5439_);
v___x_5450_ = lean_nat_dec_lt(v_i_5441_, v___x_5449_);
if (v___x_5450_ == 0)
{
lean_object* v___x_5451_; 
lean_dec_ref(v_type_5442_);
lean_dec(v_i_5441_);
lean_dec_ref(v_args1_5439_);
lean_dec_ref(v_ctorVal_5438_);
lean_inc(v_a_5447_);
lean_inc_ref(v_a_5446_);
lean_inc(v_a_5445_);
lean_inc_ref(v_a_5444_);
v___x_5451_ = lean_apply_6(v_k_5440_, v_args2_5443_, v_a_5444_, v_a_5445_, v_a_5446_, v_a_5447_, lean_box(0));
return v___x_5451_;
}
else
{
lean_object* v___x_5452_; 
lean_inc(v_a_5447_);
lean_inc_ref(v_a_5446_);
lean_inc(v_a_5445_);
lean_inc_ref(v_a_5444_);
v___x_5452_ = lean_whnf(v_type_5442_, v_a_5444_, v_a_5445_, v_a_5446_, v_a_5447_);
if (lean_obj_tag(v___x_5452_) == 0)
{
lean_object* v_a_5453_; 
v_a_5453_ = lean_ctor_get(v___x_5452_, 0);
lean_inc(v_a_5453_);
lean_dec_ref_known(v___x_5452_, 1);
if (lean_obj_tag(v_a_5453_) == 7)
{
lean_object* v_binderName_5454_; lean_object* v_binderType_5455_; lean_object* v_body_5456_; lean_object* v___f_5457_; uint8_t v___x_5458_; uint8_t v___x_5459_; lean_object* v___x_5460_; 
v_binderName_5454_ = lean_ctor_get(v_a_5453_, 0);
lean_inc(v_binderName_5454_);
v_binderType_5455_ = lean_ctor_get(v_a_5453_, 1);
lean_inc_ref(v_binderType_5455_);
v_body_5456_ = lean_ctor_get(v_a_5453_, 2);
lean_inc_ref(v_body_5456_);
lean_dec_ref_known(v_a_5453_, 3);
v___f_5457_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0___boxed), 12, 6);
lean_closure_set(v___f_5457_, 0, v_i_5441_);
lean_closure_set(v___f_5457_, 1, v_body_5456_);
lean_closure_set(v___f_5457_, 2, v_args2_5443_);
lean_closure_set(v___f_5457_, 3, v_ctorVal_5438_);
lean_closure_set(v___f_5457_, 4, v_args1_5439_);
lean_closure_set(v___f_5457_, 5, v_k_5440_);
v___x_5458_ = 1;
v___x_5459_ = 0;
v___x_5460_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__0___redArg(v_binderName_5454_, v___x_5458_, v_binderType_5455_, v___f_5457_, v___x_5459_, v_a_5444_, v_a_5445_, v_a_5446_, v_a_5447_);
return v___x_5460_;
}
else
{
lean_object* v_toConstantVal_5461_; lean_object* v_name_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; 
lean_dec(v_a_5453_);
lean_dec_ref(v_args2_5443_);
lean_dec(v_i_5441_);
lean_dec_ref(v_k_5440_);
lean_dec_ref(v_args1_5439_);
v_toConstantVal_5461_ = lean_ctor_get(v_ctorVal_5438_, 0);
lean_inc_ref(v_toConstantVal_5461_);
lean_dec_ref(v_ctorVal_5438_);
v_name_5462_ = lean_ctor_get(v_toConstantVal_5461_, 0);
lean_inc(v_name_5462_);
lean_dec_ref(v_toConstantVal_5461_);
v___x_5463_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__1);
v___x_5464_ = l_Lean_MessageData_ofName(v_name_5462_);
v___x_5465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5465_, 0, v___x_5463_);
lean_ctor_set(v___x_5465_, 1, v___x_5464_);
v___x_5466_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5467_, 0, v___x_5465_);
lean_ctor_set(v___x_5467_, 1, v___x_5466_);
v___x_5468_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_5467_, v_a_5444_, v_a_5445_, v_a_5446_, v_a_5447_);
return v___x_5468_;
}
}
else
{
lean_object* v_a_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5476_; 
lean_dec_ref(v_args2_5443_);
lean_dec(v_i_5441_);
lean_dec_ref(v_k_5440_);
lean_dec_ref(v_args1_5439_);
lean_dec_ref(v_ctorVal_5438_);
v_a_5469_ = lean_ctor_get(v___x_5452_, 0);
v_isSharedCheck_5476_ = !lean_is_exclusive(v___x_5452_);
if (v_isSharedCheck_5476_ == 0)
{
v___x_5471_ = v___x_5452_;
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_a_5469_);
lean_dec(v___x_5452_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5474_; 
if (v_isShared_5472_ == 0)
{
v___x_5474_ = v___x_5471_;
goto v_reusejp_5473_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_a_5469_);
v___x_5474_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5473_;
}
v_reusejp_5473_:
{
return v___x_5474_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___lam__0(lean_object* v_i_5477_, lean_object* v_body_5478_, lean_object* v_args2_5479_, lean_object* v_ctorVal_5480_, lean_object* v_args1_5481_, lean_object* v_k_5482_, lean_object* v_arg2_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_, lean_object* v___y_5487_){
_start:
{
lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; 
v___x_5489_ = lean_unsigned_to_nat(1u);
v___x_5490_ = lean_nat_add(v_i_5477_, v___x_5489_);
v___x_5491_ = lean_expr_instantiate1(v_body_5478_, v_arg2_5483_);
v___x_5492_ = lean_array_push(v_args2_5479_, v_arg2_5483_);
v___x_5493_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(v_ctorVal_5480_, v_args1_5481_, v_k_5482_, v___x_5490_, v___x_5491_, v___x_5492_, v___y_5484_, v___y_5485_, v___y_5486_, v___y_5487_);
return v___x_5493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed(lean_object* v_ctorVal_5494_, lean_object* v_args1_5495_, lean_object* v_k_5496_, lean_object* v_i_5497_, lean_object* v_type_5498_, lean_object* v_args2_5499_, lean_object* v_a_5500_, lean_object* v_a_5501_, lean_object* v_a_5502_, lean_object* v_a_5503_, lean_object* v_a_5504_){
_start:
{
lean_object* v_res_5505_; 
v_res_5505_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2(v_ctorVal_5494_, v_args1_5495_, v_k_5496_, v_i_5497_, v_type_5498_, v_args2_5499_, v_a_5500_, v_a_5501_, v_a_5502_, v_a_5503_);
lean_dec(v_a_5503_);
lean_dec_ref(v_a_5502_);
lean_dec(v_a_5501_);
lean_dec_ref(v_a_5500_);
return v_res_5505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(lean_object* v___x_5506_, lean_object* v_numParams_5507_, lean_object* v_name_5508_, lean_object* v_us_5509_, lean_object* v_args1_5510_, lean_object* v___x_5511_, lean_object* v_args2_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_){
_start:
{
lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; 
lean_inc_ref(v_args2_5512_);
v___x_5518_ = l_Array_toSubarray___redArg(v_args2_5512_, v___x_5506_, v_numParams_5507_);
lean_inc(v_us_5509_);
v___x_5519_ = l_Lean_mkConst(v_name_5508_, v_us_5509_);
lean_inc_ref(v___x_5519_);
v___x_5520_ = l_Lean_mkAppN(v___x_5519_, v_args1_5510_);
v___x_5521_ = l_Lean_mkAppN(v___x_5519_, v_args2_5512_);
lean_inc_ref(v___x_5521_);
lean_inc_ref(v___x_5520_);
v___x_5522_ = l_Lean_Meta_mkEqHEq(v___x_5520_, v___x_5521_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
if (lean_obj_tag(v___x_5522_) == 0)
{
lean_object* v_a_5523_; uint8_t v___x_5524_; lean_object* v___x_5525_; 
v_a_5523_ = lean_ctor_get(v___x_5522_, 0);
lean_inc(v_a_5523_);
lean_dec_ref_known(v___x_5522_, 1);
v___x_5524_ = 1;
lean_inc_ref(v_args2_5512_);
v___x_5525_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v_args1_5510_, v_args2_5512_, v___x_5524_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
if (lean_obj_tag(v___x_5525_) == 0)
{
lean_object* v_a_5526_; lean_object* v___x_5528_; uint8_t v_isShared_5529_; uint8_t v_isSharedCheck_5646_; 
v_a_5526_ = lean_ctor_get(v___x_5525_, 0);
v_isSharedCheck_5646_ = !lean_is_exclusive(v___x_5525_);
if (v_isSharedCheck_5646_ == 0)
{
v___x_5528_ = v___x_5525_;
v_isShared_5529_ = v_isSharedCheck_5646_;
goto v_resetjp_5527_;
}
else
{
lean_inc(v_a_5526_);
lean_dec(v___x_5525_);
v___x_5528_ = lean_box(0);
v_isShared_5529_ = v_isSharedCheck_5646_;
goto v_resetjp_5527_;
}
v_resetjp_5527_:
{
lean_object* v___x_5530_; 
v___x_5530_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkAnd_x3f(v_a_5526_);
if (lean_obj_tag(v___x_5530_) == 1)
{
lean_object* v_val_5531_; lean_object* v___x_5532_; 
lean_del_object(v___x_5528_);
v_val_5531_ = lean_ctor_get(v___x_5530_, 0);
lean_inc(v_val_5531_);
lean_dec_ref_known(v___x_5530_, 1);
v___x_5532_ = l_Lean_mkArrow(v_a_5523_, v_val_5531_, v___y_5515_, v___y_5516_);
if (lean_obj_tag(v___x_5532_) == 0)
{
lean_object* v_a_5533_; lean_object* v___x_5534_; 
v_a_5533_ = lean_ctor_get(v___x_5532_, 0);
lean_inc(v_a_5533_);
lean_dec_ref_known(v___x_5532_, 1);
v___x_5534_ = l_Lean_Meta_getCtorAppIndices_x3f(v___x_5520_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
if (lean_obj_tag(v___x_5534_) == 0)
{
lean_object* v_a_5535_; lean_object* v___x_5537_; uint8_t v_isShared_5538_; uint8_t v_isSharedCheck_5625_; 
v_a_5535_ = lean_ctor_get(v___x_5534_, 0);
v_isSharedCheck_5625_ = !lean_is_exclusive(v___x_5534_);
if (v_isSharedCheck_5625_ == 0)
{
v___x_5537_ = v___x_5534_;
v_isShared_5538_ = v_isSharedCheck_5625_;
goto v_resetjp_5536_;
}
else
{
lean_inc(v_a_5535_);
lean_dec(v___x_5534_);
v___x_5537_ = lean_box(0);
v_isShared_5538_ = v_isSharedCheck_5625_;
goto v_resetjp_5536_;
}
v_resetjp_5536_:
{
if (lean_obj_tag(v_a_5535_) == 1)
{
lean_object* v_val_5539_; lean_object* v___x_5540_; 
lean_del_object(v___x_5537_);
v_val_5539_ = lean_ctor_get(v_a_5535_, 0);
lean_inc(v_val_5539_);
lean_dec_ref_known(v_a_5535_, 1);
v___x_5540_ = l_Lean_Meta_getCtorAppIndices_x3f(v___x_5521_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
if (lean_obj_tag(v___x_5540_) == 0)
{
lean_object* v_a_5541_; lean_object* v___x_5543_; uint8_t v_isShared_5544_; uint8_t v_isSharedCheck_5612_; 
v_a_5541_ = lean_ctor_get(v___x_5540_, 0);
v_isSharedCheck_5612_ = !lean_is_exclusive(v___x_5540_);
if (v_isSharedCheck_5612_ == 0)
{
v___x_5543_ = v___x_5540_;
v_isShared_5544_ = v_isSharedCheck_5612_;
goto v_resetjp_5542_;
}
else
{
lean_inc(v_a_5541_);
lean_dec(v___x_5540_);
v___x_5543_ = lean_box(0);
v_isShared_5544_ = v_isSharedCheck_5612_;
goto v_resetjp_5542_;
}
v_resetjp_5542_:
{
if (lean_obj_tag(v_a_5541_) == 1)
{
lean_object* v_val_5545_; lean_object* v___x_5547_; uint8_t v_isShared_5548_; uint8_t v_isSharedCheck_5607_; 
lean_del_object(v___x_5543_);
v_val_5545_ = lean_ctor_get(v_a_5541_, 0);
v_isSharedCheck_5607_ = !lean_is_exclusive(v_a_5541_);
if (v_isSharedCheck_5607_ == 0)
{
v___x_5547_ = v_a_5541_;
v_isShared_5548_ = v_isSharedCheck_5607_;
goto v_resetjp_5546_;
}
else
{
lean_inc(v_val_5545_);
lean_dec(v_a_5541_);
v___x_5547_ = lean_box(0);
v_isShared_5548_ = v_isSharedCheck_5607_;
goto v_resetjp_5546_;
}
v_resetjp_5546_:
{
lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; uint8_t v___x_5553_; lean_object* v___x_5554_; 
v___x_5549_ = l_Subarray_copy___redArg(v___x_5511_);
v___x_5550_ = l_Array_append___redArg(v___x_5549_, v_val_5539_);
v___x_5551_ = l_Subarray_copy___redArg(v___x_5518_);
v___x_5552_ = l_Array_append___redArg(v___x_5551_, v_val_5545_);
lean_dec(v_val_5545_);
v___x_5553_ = 0;
v___x_5554_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs(v___x_5550_, v___x_5552_, v___x_5553_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
lean_dec_ref(v___x_5550_);
if (lean_obj_tag(v___x_5554_) == 0)
{
lean_object* v_a_5555_; lean_object* v___x_5556_; 
v_a_5555_ = lean_ctor_get(v___x_5554_, 0);
lean_inc(v_a_5555_);
lean_dec_ref_known(v___x_5554_, 1);
v___x_5556_ = l_Lean_mkArrowN(v_a_5555_, v_a_5533_, v___y_5515_, v___y_5516_);
lean_dec(v_a_5555_);
if (lean_obj_tag(v___x_5556_) == 0)
{
lean_object* v_a_5557_; uint8_t v___x_5558_; lean_object* v___x_5559_; 
v_a_5557_ = lean_ctor_get(v___x_5556_, 0);
lean_inc(v_a_5557_);
lean_dec_ref_known(v___x_5556_, 1);
v___x_5558_ = 1;
v___x_5559_ = l_Lean_Meta_mkForallFVars(v_args2_5512_, v_a_5557_, v___x_5553_, v___x_5524_, v___x_5524_, v___x_5558_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
lean_dec_ref(v_args2_5512_);
if (lean_obj_tag(v___x_5559_) == 0)
{
lean_object* v_a_5560_; lean_object* v___x_5561_; 
v_a_5560_ = lean_ctor_get(v___x_5559_, 0);
lean_inc(v_a_5560_);
lean_dec_ref_known(v___x_5559_, 1);
v___x_5561_ = l_Lean_Meta_mkForallFVars(v_args1_5510_, v_a_5560_, v___x_5553_, v___x_5524_, v___x_5524_, v___x_5558_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
if (lean_obj_tag(v___x_5561_) == 0)
{
lean_object* v_a_5562_; lean_object* v___x_5564_; uint8_t v_isShared_5565_; uint8_t v_isSharedCheck_5574_; 
v_a_5562_ = lean_ctor_get(v___x_5561_, 0);
v_isSharedCheck_5574_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5574_ == 0)
{
v___x_5564_ = v___x_5561_;
v_isShared_5565_ = v_isSharedCheck_5574_;
goto v_resetjp_5563_;
}
else
{
lean_inc(v_a_5562_);
lean_dec(v___x_5561_);
v___x_5564_ = lean_box(0);
v_isShared_5565_ = v_isSharedCheck_5574_;
goto v_resetjp_5563_;
}
v_resetjp_5563_:
{
lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5569_; 
v___x_5566_ = lean_array_get_size(v_val_5539_);
lean_dec(v_val_5539_);
v___x_5567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5567_, 0, v_a_5562_);
lean_ctor_set(v___x_5567_, 1, v_us_5509_);
lean_ctor_set(v___x_5567_, 2, v___x_5566_);
if (v_isShared_5548_ == 0)
{
lean_ctor_set(v___x_5547_, 0, v___x_5567_);
v___x_5569_ = v___x_5547_;
goto v_reusejp_5568_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v___x_5567_);
v___x_5569_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5568_;
}
v_reusejp_5568_:
{
lean_object* v___x_5571_; 
if (v_isShared_5565_ == 0)
{
lean_ctor_set(v___x_5564_, 0, v___x_5569_);
v___x_5571_ = v___x_5564_;
goto v_reusejp_5570_;
}
else
{
lean_object* v_reuseFailAlloc_5572_; 
v_reuseFailAlloc_5572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5572_, 0, v___x_5569_);
v___x_5571_ = v_reuseFailAlloc_5572_;
goto v_reusejp_5570_;
}
v_reusejp_5570_:
{
return v___x_5571_;
}
}
}
}
else
{
lean_object* v_a_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5582_; 
lean_del_object(v___x_5547_);
lean_dec(v_val_5539_);
lean_dec(v_us_5509_);
v_a_5575_ = lean_ctor_get(v___x_5561_, 0);
v_isSharedCheck_5582_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5582_ == 0)
{
v___x_5577_ = v___x_5561_;
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_a_5575_);
lean_dec(v___x_5561_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5580_; 
if (v_isShared_5578_ == 0)
{
v___x_5580_ = v___x_5577_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5581_; 
v_reuseFailAlloc_5581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5581_, 0, v_a_5575_);
v___x_5580_ = v_reuseFailAlloc_5581_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
return v___x_5580_;
}
}
}
}
else
{
lean_object* v_a_5583_; lean_object* v___x_5585_; uint8_t v_isShared_5586_; uint8_t v_isSharedCheck_5590_; 
lean_del_object(v___x_5547_);
lean_dec(v_val_5539_);
lean_dec(v_us_5509_);
v_a_5583_ = lean_ctor_get(v___x_5559_, 0);
v_isSharedCheck_5590_ = !lean_is_exclusive(v___x_5559_);
if (v_isSharedCheck_5590_ == 0)
{
v___x_5585_ = v___x_5559_;
v_isShared_5586_ = v_isSharedCheck_5590_;
goto v_resetjp_5584_;
}
else
{
lean_inc(v_a_5583_);
lean_dec(v___x_5559_);
v___x_5585_ = lean_box(0);
v_isShared_5586_ = v_isSharedCheck_5590_;
goto v_resetjp_5584_;
}
v_resetjp_5584_:
{
lean_object* v___x_5588_; 
if (v_isShared_5586_ == 0)
{
v___x_5588_ = v___x_5585_;
goto v_reusejp_5587_;
}
else
{
lean_object* v_reuseFailAlloc_5589_; 
v_reuseFailAlloc_5589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5589_, 0, v_a_5583_);
v___x_5588_ = v_reuseFailAlloc_5589_;
goto v_reusejp_5587_;
}
v_reusejp_5587_:
{
return v___x_5588_;
}
}
}
}
else
{
lean_object* v_a_5591_; lean_object* v___x_5593_; uint8_t v_isShared_5594_; uint8_t v_isSharedCheck_5598_; 
lean_del_object(v___x_5547_);
lean_dec(v_val_5539_);
lean_dec_ref(v_args2_5512_);
lean_dec(v_us_5509_);
v_a_5591_ = lean_ctor_get(v___x_5556_, 0);
v_isSharedCheck_5598_ = !lean_is_exclusive(v___x_5556_);
if (v_isSharedCheck_5598_ == 0)
{
v___x_5593_ = v___x_5556_;
v_isShared_5594_ = v_isSharedCheck_5598_;
goto v_resetjp_5592_;
}
else
{
lean_inc(v_a_5591_);
lean_dec(v___x_5556_);
v___x_5593_ = lean_box(0);
v_isShared_5594_ = v_isSharedCheck_5598_;
goto v_resetjp_5592_;
}
v_resetjp_5592_:
{
lean_object* v___x_5596_; 
if (v_isShared_5594_ == 0)
{
v___x_5596_ = v___x_5593_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v_a_5591_);
v___x_5596_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
return v___x_5596_;
}
}
}
}
else
{
lean_object* v_a_5599_; lean_object* v___x_5601_; uint8_t v_isShared_5602_; uint8_t v_isSharedCheck_5606_; 
lean_del_object(v___x_5547_);
lean_dec(v_val_5539_);
lean_dec(v_a_5533_);
lean_dec_ref(v_args2_5512_);
lean_dec(v_us_5509_);
v_a_5599_ = lean_ctor_get(v___x_5554_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v___x_5554_);
if (v_isSharedCheck_5606_ == 0)
{
v___x_5601_ = v___x_5554_;
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
else
{
lean_inc(v_a_5599_);
lean_dec(v___x_5554_);
v___x_5601_ = lean_box(0);
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
v_resetjp_5600_:
{
lean_object* v___x_5604_; 
if (v_isShared_5602_ == 0)
{
v___x_5604_ = v___x_5601_;
goto v_reusejp_5603_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v_a_5599_);
v___x_5604_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5603_;
}
v_reusejp_5603_:
{
return v___x_5604_;
}
}
}
}
}
else
{
lean_object* v___x_5608_; lean_object* v___x_5610_; 
lean_dec(v_a_5541_);
lean_dec(v_val_5539_);
lean_dec(v_a_5533_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v___x_5608_ = lean_box(0);
if (v_isShared_5544_ == 0)
{
lean_ctor_set(v___x_5543_, 0, v___x_5608_);
v___x_5610_ = v___x_5543_;
goto v_reusejp_5609_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v___x_5608_);
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
lean_dec(v_val_5539_);
lean_dec(v_a_5533_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v_a_5613_ = lean_ctor_get(v___x_5540_, 0);
v_isSharedCheck_5620_ = !lean_is_exclusive(v___x_5540_);
if (v_isSharedCheck_5620_ == 0)
{
v___x_5615_ = v___x_5540_;
v_isShared_5616_ = v_isSharedCheck_5620_;
goto v_resetjp_5614_;
}
else
{
lean_inc(v_a_5613_);
lean_dec(v___x_5540_);
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
else
{
lean_object* v___x_5621_; lean_object* v___x_5623_; 
lean_dec(v_a_5535_);
lean_dec(v_a_5533_);
lean_dec_ref(v___x_5521_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v___x_5621_ = lean_box(0);
if (v_isShared_5538_ == 0)
{
lean_ctor_set(v___x_5537_, 0, v___x_5621_);
v___x_5623_ = v___x_5537_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v___x_5621_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
return v___x_5623_;
}
}
}
}
else
{
lean_object* v_a_5626_; lean_object* v___x_5628_; uint8_t v_isShared_5629_; uint8_t v_isSharedCheck_5633_; 
lean_dec(v_a_5533_);
lean_dec_ref(v___x_5521_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v_a_5626_ = lean_ctor_get(v___x_5534_, 0);
v_isSharedCheck_5633_ = !lean_is_exclusive(v___x_5534_);
if (v_isSharedCheck_5633_ == 0)
{
v___x_5628_ = v___x_5534_;
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
else
{
lean_inc(v_a_5626_);
lean_dec(v___x_5534_);
v___x_5628_ = lean_box(0);
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
v_resetjp_5627_:
{
lean_object* v___x_5631_; 
if (v_isShared_5629_ == 0)
{
v___x_5631_ = v___x_5628_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v_a_5626_);
v___x_5631_ = v_reuseFailAlloc_5632_;
goto v_reusejp_5630_;
}
v_reusejp_5630_:
{
return v___x_5631_;
}
}
}
}
else
{
lean_object* v_a_5634_; lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5641_; 
lean_dec_ref(v___x_5521_);
lean_dec_ref(v___x_5520_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v_a_5634_ = lean_ctor_get(v___x_5532_, 0);
v_isSharedCheck_5641_ = !lean_is_exclusive(v___x_5532_);
if (v_isSharedCheck_5641_ == 0)
{
v___x_5636_ = v___x_5532_;
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
else
{
lean_inc(v_a_5634_);
lean_dec(v___x_5532_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v___x_5639_; 
if (v_isShared_5637_ == 0)
{
v___x_5639_ = v___x_5636_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_a_5634_);
v___x_5639_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
return v___x_5639_;
}
}
}
}
else
{
lean_object* v___x_5642_; lean_object* v___x_5644_; 
lean_dec(v___x_5530_);
lean_dec(v_a_5523_);
lean_dec_ref(v___x_5521_);
lean_dec_ref(v___x_5520_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v___x_5642_ = lean_box(0);
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 0, v___x_5642_);
v___x_5644_ = v___x_5528_;
goto v_reusejp_5643_;
}
else
{
lean_object* v_reuseFailAlloc_5645_; 
v_reuseFailAlloc_5645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5645_, 0, v___x_5642_);
v___x_5644_ = v_reuseFailAlloc_5645_;
goto v_reusejp_5643_;
}
v_reusejp_5643_:
{
return v___x_5644_;
}
}
}
}
else
{
lean_object* v_a_5647_; lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5654_; 
lean_dec(v_a_5523_);
lean_dec_ref(v___x_5521_);
lean_dec_ref(v___x_5520_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v_a_5647_ = lean_ctor_get(v___x_5525_, 0);
v_isSharedCheck_5654_ = !lean_is_exclusive(v___x_5525_);
if (v_isSharedCheck_5654_ == 0)
{
v___x_5649_ = v___x_5525_;
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
else
{
lean_inc(v_a_5647_);
lean_dec(v___x_5525_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5652_; 
if (v_isShared_5650_ == 0)
{
v___x_5652_ = v___x_5649_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v_a_5647_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
return v___x_5652_;
}
}
}
}
else
{
lean_object* v_a_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5662_; 
lean_dec_ref(v___x_5521_);
lean_dec_ref(v___x_5520_);
lean_dec_ref(v___x_5518_);
lean_dec_ref(v_args2_5512_);
lean_dec_ref(v___x_5511_);
lean_dec(v_us_5509_);
v_a_5655_ = lean_ctor_get(v___x_5522_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v___x_5522_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5657_ = v___x_5522_;
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_a_5655_);
lean_dec(v___x_5522_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
lean_object* v___x_5660_; 
if (v_isShared_5658_ == 0)
{
v___x_5660_ = v___x_5657_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_a_5655_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed(lean_object* v___x_5663_, lean_object* v_numParams_5664_, lean_object* v_name_5665_, lean_object* v_us_5666_, lean_object* v_args1_5667_, lean_object* v___x_5668_, lean_object* v_args2_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_, lean_object* v___y_5674_){
_start:
{
lean_object* v_res_5675_; 
v_res_5675_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0(v___x_5663_, v_numParams_5664_, v_name_5665_, v_us_5666_, v_args1_5667_, v___x_5668_, v_args2_5669_, v___y_5670_, v___y_5671_, v___y_5672_, v___y_5673_);
lean_dec(v___y_5673_);
lean_dec_ref(v___y_5672_);
lean_dec(v___y_5671_);
lean_dec_ref(v___y_5670_);
lean_dec_ref(v_args1_5667_);
return v_res_5675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(lean_object* v_numParams_5676_, lean_object* v_name_5677_, lean_object* v_us_5678_, lean_object* v_ctorVal_5679_, lean_object* v_a_5680_, lean_object* v_args1_5681_, lean_object* v_x_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_){
_start:
{
lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___f_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; 
v___x_5688_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_5676_);
lean_inc_ref_n(v_args1_5681_, 3);
v___x_5689_ = l_Array_toSubarray___redArg(v_args1_5681_, v___x_5688_, v_numParams_5676_);
v___f_5690_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__0___boxed), 12, 6);
lean_closure_set(v___f_5690_, 0, v___x_5688_);
lean_closure_set(v___f_5690_, 1, v_numParams_5676_);
lean_closure_set(v___f_5690_, 2, v_name_5677_);
lean_closure_set(v___f_5690_, 3, v_us_5678_);
lean_closure_set(v___f_5690_, 4, v_args1_5681_);
lean_closure_set(v___f_5690_, 5, v___x_5689_);
v___x_5691_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v___x_5692_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f_mkArgs2___boxed), 11, 6);
lean_closure_set(v___x_5692_, 0, v_ctorVal_5679_);
lean_closure_set(v___x_5692_, 1, v_args1_5681_);
lean_closure_set(v___x_5692_, 2, v___f_5690_);
lean_closure_set(v___x_5692_, 3, v___x_5688_);
lean_closure_set(v___x_5692_, 4, v_a_5680_);
lean_closure_set(v___x_5692_, 5, v___x_5691_);
v___x_5693_ = l_Lean_Meta_withImplicitBinderInfos___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__1___redArg(v_args1_5681_, v___x_5692_, v___y_5683_, v___y_5684_, v___y_5685_, v___y_5686_);
return v___x_5693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed(lean_object* v_numParams_5694_, lean_object* v_name_5695_, lean_object* v_us_5696_, lean_object* v_ctorVal_5697_, lean_object* v_a_5698_, lean_object* v_args1_5699_, lean_object* v_x_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_, lean_object* v___y_5705_){
_start:
{
lean_object* v_res_5706_; 
v_res_5706_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1(v_numParams_5694_, v_name_5695_, v_us_5696_, v_ctorVal_5697_, v_a_5698_, v_args1_5699_, v_x_5700_, v___y_5701_, v___y_5702_, v___y_5703_, v___y_5704_);
lean_dec(v___y_5704_);
lean_dec_ref(v___y_5703_);
lean_dec(v___y_5702_);
lean_dec_ref(v___y_5701_);
lean_dec_ref(v_x_5700_);
return v_res_5706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(lean_object* v_ctorVal_5707_, lean_object* v_a_5708_, lean_object* v_a_5709_, lean_object* v_a_5710_, lean_object* v_a_5711_){
_start:
{
lean_object* v_toConstantVal_5713_; lean_object* v_numParams_5714_; lean_object* v_name_5715_; lean_object* v_levelParams_5716_; lean_object* v_type_5717_; lean_object* v___x_5718_; lean_object* v_us_5719_; lean_object* v___x_5720_; 
v_toConstantVal_5713_ = lean_ctor_get(v_ctorVal_5707_, 0);
v_numParams_5714_ = lean_ctor_get(v_ctorVal_5707_, 3);
lean_inc(v_numParams_5714_);
v_name_5715_ = lean_ctor_get(v_toConstantVal_5713_, 0);
lean_inc(v_name_5715_);
v_levelParams_5716_ = lean_ctor_get(v_toConstantVal_5713_, 1);
v_type_5717_ = lean_ctor_get(v_toConstantVal_5713_, 2);
v___x_5718_ = lean_box(0);
lean_inc(v_levelParams_5716_);
v_us_5719_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__0(v_levelParams_5716_, v___x_5718_);
lean_inc_ref(v_type_5717_);
v___x_5720_ = l_Lean_Meta_elimOptParam(v_type_5717_, v_a_5710_, v_a_5711_);
if (lean_obj_tag(v___x_5720_) == 0)
{
lean_object* v_a_5721_; lean_object* v___f_5722_; uint8_t v___x_5723_; lean_object* v___x_5724_; 
v_a_5721_ = lean_ctor_get(v___x_5720_, 0);
lean_inc_n(v_a_5721_, 2);
lean_dec_ref_known(v___x_5720_, 1);
v___f_5722_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___lam__1___boxed), 12, 5);
lean_closure_set(v___f_5722_, 0, v_numParams_5714_);
lean_closure_set(v___f_5722_, 1, v_name_5715_);
lean_closure_set(v___f_5722_, 2, v_us_5719_);
lean_closure_set(v___f_5722_, 3, v_ctorVal_5707_);
lean_closure_set(v___f_5722_, 4, v_a_5721_);
v___x_5723_ = 0;
v___x_5724_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_spec__2___redArg(v_a_5721_, v___f_5722_, v___x_5723_, v_a_5708_, v_a_5709_, v_a_5710_, v_a_5711_);
return v___x_5724_;
}
else
{
lean_object* v_a_5725_; lean_object* v___x_5727_; uint8_t v_isShared_5728_; uint8_t v_isSharedCheck_5732_; 
lean_dec(v_us_5719_);
lean_dec(v_name_5715_);
lean_dec(v_numParams_5714_);
lean_dec_ref(v_ctorVal_5707_);
v_a_5725_ = lean_ctor_get(v___x_5720_, 0);
v_isSharedCheck_5732_ = !lean_is_exclusive(v___x_5720_);
if (v_isSharedCheck_5732_ == 0)
{
v___x_5727_ = v___x_5720_;
v_isShared_5728_ = v_isSharedCheck_5732_;
goto v_resetjp_5726_;
}
else
{
lean_inc(v_a_5725_);
lean_dec(v___x_5720_);
v___x_5727_ = lean_box(0);
v_isShared_5728_ = v_isSharedCheck_5732_;
goto v_resetjp_5726_;
}
v_resetjp_5726_:
{
lean_object* v___x_5730_; 
if (v_isShared_5728_ == 0)
{
v___x_5730_ = v___x_5727_;
goto v_reusejp_5729_;
}
else
{
lean_object* v_reuseFailAlloc_5731_; 
v_reuseFailAlloc_5731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5731_, 0, v_a_5725_);
v___x_5730_ = v_reuseFailAlloc_5731_;
goto v_reusejp_5729_;
}
v_reusejp_5729_:
{
return v___x_5730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f___boxed(lean_object* v_ctorVal_5733_, lean_object* v_a_5734_, lean_object* v_a_5735_, lean_object* v_a_5736_, lean_object* v_a_5737_, lean_object* v_a_5738_){
_start:
{
lean_object* v_res_5739_; 
v_res_5739_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(v_ctorVal_5733_, v_a_5734_, v_a_5735_, v_a_5736_, v_a_5737_);
lean_dec(v_a_5737_);
lean_dec_ref(v_a_5736_);
lean_dec(v_a_5735_);
lean_dec_ref(v_a_5734_);
return v_res_5739_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1(void){
_start:
{
lean_object* v___x_5741_; lean_object* v___x_5742_; 
v___x_5741_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__0));
v___x_5742_ = l_Lean_stringToMessageData(v___x_5741_);
return v___x_5742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(lean_object* v_ctorVal_5743_, lean_object* v_a_5744_, lean_object* v_a_5745_, lean_object* v_a_5746_, lean_object* v_a_5747_){
_start:
{
lean_object* v_toConstantVal_5749_; lean_object* v_name_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; 
v_toConstantVal_5749_ = lean_ctor_get(v_ctorVal_5743_, 0);
lean_inc_ref(v_toConstantVal_5749_);
lean_dec_ref(v_ctorVal_5743_);
v_name_5750_ = lean_ctor_get(v_toConstantVal_5749_, 0);
lean_inc(v_name_5750_);
lean_dec_ref(v_toConstantVal_5749_);
v___x_5751_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___closed__1);
v___x_5752_ = l_Lean_MessageData_ofName(v_name_5750_);
v___x_5753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5753_, 0, v___x_5751_);
lean_ctor_set(v___x_5753_, 1, v___x_5752_);
v___x_5754_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2___closed__3);
v___x_5755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5755_, 0, v___x_5753_);
lean_ctor_set(v___x_5755_, 1, v___x_5754_);
v___x_5756_ = l_Lean_throwError___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremTypeCore_x3f_mkArgs2_spec__1___redArg(v___x_5755_, v_a_5744_, v_a_5745_, v_a_5746_, v_a_5747_);
return v___x_5756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg___boxed(lean_object* v_ctorVal_5757_, lean_object* v_a_5758_, lean_object* v_a_5759_, lean_object* v_a_5760_, lean_object* v_a_5761_, lean_object* v_a_5762_){
_start:
{
lean_object* v_res_5763_; 
v_res_5763_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5757_, v_a_5758_, v_a_5759_, v_a_5760_, v_a_5761_);
lean_dec(v_a_5761_);
lean_dec_ref(v_a_5760_);
lean_dec(v_a_5759_);
lean_dec_ref(v_a_5758_);
return v_res_5763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(lean_object* v_00_u03b1_5764_, lean_object* v_ctorVal_5765_, lean_object* v_a_5766_, lean_object* v_a_5767_, lean_object* v_a_5768_, lean_object* v_a_5769_){
_start:
{
lean_object* v___x_5771_; 
v___x_5771_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5765_, v_a_5766_, v_a_5767_, v_a_5768_, v_a_5769_);
return v___x_5771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___boxed(lean_object* v_00_u03b1_5772_, lean_object* v_ctorVal_5773_, lean_object* v_a_5774_, lean_object* v_a_5775_, lean_object* v_a_5776_, lean_object* v_a_5777_, lean_object* v_a_5778_){
_start:
{
lean_object* v_res_5779_; 
v_res_5779_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj(v_00_u03b1_5772_, v_ctorVal_5773_, v_a_5774_, v_a_5775_, v_a_5776_, v_a_5777_);
lean_dec(v_a_5777_);
lean_dec_ref(v_a_5776_);
lean_dec(v_a_5775_);
lean_dec_ref(v_a_5774_);
return v_res_5779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(lean_object* v_ctorVal_5785_, size_t v_sz_5786_, size_t v_i_5787_, lean_object* v_bs_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_, lean_object* v___y_5792_){
_start:
{
uint8_t v___x_5794_; 
v___x_5794_ = lean_usize_dec_lt(v_i_5787_, v_sz_5786_);
if (v___x_5794_ == 0)
{
lean_object* v___x_5795_; 
lean_dec_ref(v_ctorVal_5785_);
v___x_5795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5795_, 0, v_bs_5788_);
return v___x_5795_;
}
else
{
lean_object* v_v_5796_; lean_object* v___x_5797_; lean_object* v_bs_x27_5798_; lean_object* v_a_5800_; lean_object* v___y_5806_; lean_object* v_lhs_5817_; lean_object* v_rhs_5818_; lean_object* v___x_5820_; 
v_v_5796_ = lean_array_uget(v_bs_5788_, v_i_5787_);
v___x_5797_ = lean_unsigned_to_nat(0u);
v_bs_x27_5798_ = lean_array_uset(v_bs_5788_, v_i_5787_, v___x_5797_);
lean_inc(v___y_5792_);
lean_inc_ref(v___y_5791_);
lean_inc(v___y_5790_);
lean_inc_ref(v___y_5789_);
v___x_5820_ = lean_infer_type(v_v_5796_, v___y_5789_, v___y_5790_, v___y_5791_, v___y_5792_);
if (lean_obj_tag(v___x_5820_) == 0)
{
lean_object* v_a_5821_; lean_object* v___x_5822_; 
v_a_5821_ = lean_ctor_get(v___x_5820_, 0);
lean_inc(v_a_5821_);
lean_dec_ref_known(v___x_5820_, 1);
v___x_5822_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_5821_, v___y_5790_);
if (lean_obj_tag(v___x_5822_) == 0)
{
lean_object* v_a_5823_; lean_object* v___x_5824_; uint8_t v___x_5825_; 
v_a_5823_ = lean_ctor_get(v___x_5822_, 0);
lean_inc(v_a_5823_);
lean_dec_ref_known(v___x_5822_, 1);
v___x_5824_ = l_Lean_Expr_cleanupAnnotations(v_a_5823_);
lean_dec(v_a_5823_);
v___x_5825_ = l_Lean_Expr_isApp(v___x_5824_);
if (v___x_5825_ == 0)
{
lean_object* v___x_5826_; 
lean_dec_ref(v___x_5824_);
lean_inc_ref(v_ctorVal_5785_);
v___x_5826_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5785_, v___y_5789_, v___y_5790_, v___y_5791_, v___y_5792_);
v___y_5806_ = v___x_5826_;
goto v___jp_5805_;
}
else
{
lean_object* v___x_5827_; uint8_t v___x_5828_; 
v___x_5827_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5824_);
v___x_5828_ = l_Lean_Expr_isApp(v___x_5827_);
if (v___x_5828_ == 0)
{
lean_object* v___x_5829_; 
lean_dec_ref(v___x_5827_);
lean_dec_ref(v___x_5824_);
lean_inc_ref(v_ctorVal_5785_);
v___x_5829_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5785_, v___y_5789_, v___y_5790_, v___y_5791_, v___y_5792_);
v___y_5806_ = v___x_5829_;
goto v___jp_5805_;
}
else
{
lean_object* v___x_5830_; uint8_t v___x_5831_; 
v___x_5830_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5827_);
v___x_5831_ = l_Lean_Expr_isApp(v___x_5830_);
if (v___x_5831_ == 0)
{
lean_object* v___x_5832_; 
lean_dec_ref(v___x_5830_);
lean_dec_ref(v___x_5827_);
lean_dec_ref(v___x_5824_);
lean_inc_ref(v_ctorVal_5785_);
v___x_5832_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5785_, v___y_5789_, v___y_5790_, v___y_5791_, v___y_5792_);
v___y_5806_ = v___x_5832_;
goto v___jp_5805_;
}
else
{
lean_object* v_arg_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; uint8_t v___x_5836_; 
v_arg_5833_ = lean_ctor_get(v___x_5824_, 1);
lean_inc_ref(v_arg_5833_);
lean_dec_ref(v___x_5824_);
v___x_5834_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5830_);
v___x_5835_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__0));
v___x_5836_ = l_Lean_Expr_isConstOf(v___x_5834_, v___x_5835_);
if (v___x_5836_ == 0)
{
uint8_t v___x_5837_; 
lean_dec_ref(v___x_5827_);
v___x_5837_ = l_Lean_Expr_isApp(v___x_5834_);
if (v___x_5837_ == 0)
{
lean_object* v___x_5838_; 
lean_dec_ref(v___x_5834_);
lean_dec_ref(v_arg_5833_);
lean_dec_ref(v___x_5830_);
lean_inc_ref(v_ctorVal_5785_);
v___x_5838_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5785_, v___y_5789_, v___y_5790_, v___y_5791_, v___y_5792_);
v___y_5806_ = v___x_5838_;
goto v___jp_5805_;
}
else
{
lean_object* v___x_5839_; lean_object* v___x_5840_; uint8_t v___x_5841_; 
v___x_5839_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5834_);
lean_dec_ref(v___x_5834_);
v___x_5840_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___closed__2));
v___x_5841_ = l_Lean_Expr_isConstOf(v___x_5839_, v___x_5840_);
lean_dec_ref(v___x_5839_);
if (v___x_5841_ == 0)
{
lean_object* v___x_5842_; 
lean_dec_ref(v_arg_5833_);
lean_dec_ref(v___x_5830_);
lean_inc_ref(v_ctorVal_5785_);
v___x_5842_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5785_, v___y_5789_, v___y_5790_, v___y_5791_, v___y_5792_);
v___y_5806_ = v___x_5842_;
goto v___jp_5805_;
}
else
{
lean_object* v_arg_5843_; 
v_arg_5843_ = lean_ctor_get(v___x_5830_, 1);
lean_inc_ref(v_arg_5843_);
lean_dec_ref(v___x_5830_);
v_lhs_5817_ = v_arg_5843_;
v_rhs_5818_ = v_arg_5833_;
goto v___jp_5816_;
}
}
}
else
{
lean_object* v_arg_5844_; 
lean_dec_ref(v___x_5834_);
lean_dec_ref(v___x_5830_);
v_arg_5844_ = lean_ctor_get(v___x_5827_, 1);
lean_inc_ref(v_arg_5844_);
lean_dec_ref(v___x_5827_);
v_lhs_5817_ = v_arg_5844_;
v_rhs_5818_ = v_arg_5833_;
goto v___jp_5816_;
}
}
}
}
}
else
{
lean_object* v_a_5845_; lean_object* v___x_5847_; uint8_t v_isShared_5848_; uint8_t v_isSharedCheck_5852_; 
lean_dec_ref(v_bs_x27_5798_);
lean_dec_ref(v_ctorVal_5785_);
v_a_5845_ = lean_ctor_get(v___x_5822_, 0);
v_isSharedCheck_5852_ = !lean_is_exclusive(v___x_5822_);
if (v_isSharedCheck_5852_ == 0)
{
v___x_5847_ = v___x_5822_;
v_isShared_5848_ = v_isSharedCheck_5852_;
goto v_resetjp_5846_;
}
else
{
lean_inc(v_a_5845_);
lean_dec(v___x_5822_);
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
else
{
lean_object* v_a_5853_; lean_object* v___x_5855_; uint8_t v_isShared_5856_; uint8_t v_isSharedCheck_5860_; 
lean_dec_ref(v_bs_x27_5798_);
lean_dec_ref(v_ctorVal_5785_);
v_a_5853_ = lean_ctor_get(v___x_5820_, 0);
v_isSharedCheck_5860_ = !lean_is_exclusive(v___x_5820_);
if (v_isSharedCheck_5860_ == 0)
{
v___x_5855_ = v___x_5820_;
v_isShared_5856_ = v_isSharedCheck_5860_;
goto v_resetjp_5854_;
}
else
{
lean_inc(v_a_5853_);
lean_dec(v___x_5820_);
v___x_5855_ = lean_box(0);
v_isShared_5856_ = v_isSharedCheck_5860_;
goto v_resetjp_5854_;
}
v_resetjp_5854_:
{
lean_object* v___x_5858_; 
if (v_isShared_5856_ == 0)
{
v___x_5858_ = v___x_5855_;
goto v_reusejp_5857_;
}
else
{
lean_object* v_reuseFailAlloc_5859_; 
v_reuseFailAlloc_5859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5859_, 0, v_a_5853_);
v___x_5858_ = v_reuseFailAlloc_5859_;
goto v_reusejp_5857_;
}
v_reusejp_5857_:
{
return v___x_5858_;
}
}
}
v___jp_5799_:
{
size_t v___x_5801_; size_t v___x_5802_; lean_object* v___x_5803_; 
v___x_5801_ = ((size_t)1ULL);
v___x_5802_ = lean_usize_add(v_i_5787_, v___x_5801_);
v___x_5803_ = lean_array_uset(v_bs_x27_5798_, v_i_5787_, v_a_5800_);
v_i_5787_ = v___x_5802_;
v_bs_5788_ = v___x_5803_;
goto _start;
}
v___jp_5805_:
{
if (lean_obj_tag(v___y_5806_) == 0)
{
lean_object* v_a_5807_; 
v_a_5807_ = lean_ctor_get(v___y_5806_, 0);
lean_inc(v_a_5807_);
lean_dec_ref_known(v___y_5806_, 1);
v_a_5800_ = v_a_5807_;
goto v___jp_5799_;
}
else
{
lean_object* v_a_5808_; lean_object* v___x_5810_; uint8_t v_isShared_5811_; uint8_t v_isSharedCheck_5815_; 
lean_dec_ref(v_bs_x27_5798_);
lean_dec_ref(v_ctorVal_5785_);
v_a_5808_ = lean_ctor_get(v___y_5806_, 0);
v_isSharedCheck_5815_ = !lean_is_exclusive(v___y_5806_);
if (v_isSharedCheck_5815_ == 0)
{
v___x_5810_ = v___y_5806_;
v_isShared_5811_ = v_isSharedCheck_5815_;
goto v_resetjp_5809_;
}
else
{
lean_inc(v_a_5808_);
lean_dec(v___y_5806_);
v___x_5810_ = lean_box(0);
v_isShared_5811_ = v_isSharedCheck_5815_;
goto v_resetjp_5809_;
}
v_resetjp_5809_:
{
lean_object* v___x_5813_; 
if (v_isShared_5811_ == 0)
{
v___x_5813_ = v___x_5810_;
goto v_reusejp_5812_;
}
else
{
lean_object* v_reuseFailAlloc_5814_; 
v_reuseFailAlloc_5814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5814_, 0, v_a_5808_);
v___x_5813_ = v_reuseFailAlloc_5814_;
goto v_reusejp_5812_;
}
v_reusejp_5812_:
{
return v___x_5813_;
}
}
}
}
v___jp_5816_:
{
lean_object* v___x_5819_; 
v___x_5819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5819_, 0, v_lhs_5817_);
lean_ctor_set(v___x_5819_, 1, v_rhs_5818_);
v_a_5800_ = v___x_5819_;
goto v___jp_5799_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0___boxed(lean_object* v_ctorVal_5861_, lean_object* v_sz_5862_, lean_object* v_i_5863_, lean_object* v_bs_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_){
_start:
{
size_t v_sz_boxed_5870_; size_t v_i_boxed_5871_; lean_object* v_res_5872_; 
v_sz_boxed_5870_ = lean_unbox_usize(v_sz_5862_);
lean_dec(v_sz_5862_);
v_i_boxed_5871_ = lean_unbox_usize(v_i_5863_);
lean_dec(v_i_5863_);
v_res_5872_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(v_ctorVal_5861_, v_sz_boxed_5870_, v_i_boxed_5871_, v_bs_5864_, v___y_5865_, v___y_5866_, v___y_5867_, v___y_5868_);
lean_dec(v___y_5868_);
lean_dec_ref(v___y_5867_);
lean_dec(v___y_5866_);
lean_dec_ref(v___y_5865_);
return v_res_5872_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5874_; lean_object* v___x_5875_; 
v___x_5874_ = lean_unsigned_to_nat(0u);
v___x_5875_ = l_Lean_Level_ofNat(v___x_5874_);
return v___x_5875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(lean_object* v_ctorVal_5876_, lean_object* v_us_5877_, lean_object* v_numIndices_5878_, lean_object* v_xs_5879_, lean_object* v_type_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_, lean_object* v___y_5883_, lean_object* v___y_5884_){
_start:
{
lean_object* v_toConstantVal_5886_; lean_object* v_induct_5887_; lean_object* v_numParams_5888_; lean_object* v___x_5889_; lean_object* v_noConfusionName_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v_noConfusion_5894_; lean_object* v_noConfusion_5895_; lean_object* v_lower_5897_; lean_object* v_upper_5898_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v_n_6009_; uint8_t v___x_6010_; 
v_toConstantVal_5886_ = lean_ctor_get(v_ctorVal_5876_, 0);
v_induct_5887_ = lean_ctor_get(v_ctorVal_5876_, 1);
v_numParams_5888_ = lean_ctor_get(v_ctorVal_5876_, 3);
v___x_5889_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__0));
lean_inc(v_induct_5887_);
v_noConfusionName_5890_ = l_Lean_Name_str___override(v_induct_5887_, v___x_5889_);
v___x_5891_ = lean_unsigned_to_nat(0u);
v___x_5892_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1, &l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1_once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___closed__1);
v___x_5893_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5893_, 0, v___x_5892_);
lean_ctor_set(v___x_5893_, 1, v_us_5877_);
v_noConfusion_5894_ = l_Lean_mkConst(v_noConfusionName_5890_, v___x_5893_);
v_noConfusion_5895_ = l_Lean_Expr_app___override(v_noConfusion_5894_, v_type_5880_);
v___x_6005_ = lean_array_get_size(v_xs_5879_);
v___x_6006_ = lean_nat_sub(v___x_6005_, v_numParams_5888_);
v___x_6007_ = lean_nat_sub(v___x_6006_, v_numIndices_5878_);
lean_dec(v___x_6006_);
v___x_6008_ = lean_unsigned_to_nat(1u);
v_n_6009_ = lean_nat_sub(v___x_6007_, v___x_6008_);
lean_dec(v___x_6007_);
v___x_6010_ = lean_nat_dec_le(v_n_6009_, v___x_5891_);
if (v___x_6010_ == 0)
{
v_lower_5897_ = v_n_6009_;
v_upper_5898_ = v___x_6005_;
goto v___jp_5896_;
}
else
{
lean_dec(v_n_6009_);
v_lower_5897_ = v___x_5891_;
v_upper_5898_ = v___x_6005_;
goto v___jp_5896_;
}
v___jp_5896_:
{
lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v_eqs_5901_; size_t v_sz_5902_; size_t v___x_5903_; lean_object* v___x_5904_; 
lean_inc_ref(v_xs_5879_);
v___x_5899_ = l_Array_toSubarray___redArg(v_xs_5879_, v_lower_5897_, v_upper_5898_);
v___x_5900_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkEqs___closed__0));
v_eqs_5901_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Meta_getCtorAppIndices_x3f_spec__1___redArg(v___x_5899_, v___x_5900_);
v_sz_5902_ = lean_array_size(v_eqs_5901_);
v___x_5903_ = ((size_t)0ULL);
lean_inc_ref(v_eqs_5901_);
lean_inc_ref(v_ctorVal_5876_);
v___x_5904_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f_spec__0(v_ctorVal_5876_, v_sz_5902_, v___x_5903_, v_eqs_5901_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
if (lean_obj_tag(v___x_5904_) == 0)
{
lean_object* v_a_5905_; lean_object* v___x_5906_; lean_object* v_fst_5907_; lean_object* v_snd_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; 
v_a_5905_ = lean_ctor_get(v___x_5904_, 0);
lean_inc(v_a_5905_);
lean_dec_ref_known(v___x_5904_, 1);
v___x_5906_ = l_Array_unzip___redArg(v_a_5905_);
lean_dec(v_a_5905_);
v_fst_5907_ = lean_ctor_get(v___x_5906_, 0);
lean_inc(v_fst_5907_);
v_snd_5908_ = lean_ctor_get(v___x_5906_, 1);
lean_inc(v_snd_5908_);
lean_dec_ref(v___x_5906_);
v___x_5909_ = l_Lean_mkAppN(v_noConfusion_5895_, v_fst_5907_);
lean_dec(v_fst_5907_);
v___x_5910_ = l_Lean_mkAppN(v___x_5909_, v_snd_5908_);
lean_dec(v_snd_5908_);
v___x_5911_ = l_Lean_mkAppN(v___x_5910_, v_eqs_5901_);
lean_dec_ref(v_eqs_5901_);
lean_inc(v___y_5884_);
lean_inc_ref(v___y_5883_);
lean_inc(v___y_5882_);
lean_inc_ref(v___y_5881_);
lean_inc_ref(v___x_5911_);
v___x_5912_ = lean_infer_type(v___x_5911_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
if (lean_obj_tag(v___x_5912_) == 0)
{
lean_object* v_a_5913_; lean_object* v___x_5914_; 
v_a_5913_ = lean_ctor_get(v___x_5912_, 0);
lean_inc(v_a_5913_);
lean_dec_ref_known(v___x_5912_, 1);
lean_inc(v___y_5884_);
lean_inc_ref(v___y_5883_);
lean_inc(v___y_5882_);
lean_inc_ref(v___y_5881_);
v___x_5914_ = lean_whnf(v_a_5913_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
if (lean_obj_tag(v___x_5914_) == 0)
{
lean_object* v_a_5915_; 
v_a_5915_ = lean_ctor_get(v___x_5914_, 0);
lean_inc(v_a_5915_);
lean_dec_ref_known(v___x_5914_, 1);
if (lean_obj_tag(v_a_5915_) == 7)
{
lean_object* v_binderType_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; 
lean_inc_ref(v_toConstantVal_5886_);
lean_dec_ref(v_ctorVal_5876_);
v_binderType_5916_ = lean_ctor_get(v_a_5915_, 1);
lean_inc_ref(v_binderType_5916_);
lean_dec_ref_known(v_a_5915_, 3);
v___x_5917_ = lean_box(0);
v___x_5918_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_binderType_5916_, v___x_5917_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
if (lean_obj_tag(v___x_5918_) == 0)
{
lean_object* v_a_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; 
v_a_5919_ = lean_ctor_get(v___x_5918_, 0);
lean_inc_n(v_a_5919_, 2);
lean_dec_ref_known(v___x_5918_, 1);
v___x_5920_ = l_Lean_Expr_app___override(v___x_5911_, v_a_5919_);
v___x_5921_ = l_Lean_Expr_mvarId_x21(v_a_5919_);
lean_dec(v_a_5919_);
v___x_5922_ = l_Lean_MVarId_intros(v___x_5921_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
if (lean_obj_tag(v___x_5922_) == 0)
{
lean_object* v_a_5923_; lean_object* v_snd_5924_; lean_object* v_name_5925_; lean_object* v___x_5926_; 
v_a_5923_ = lean_ctor_get(v___x_5922_, 0);
lean_inc(v_a_5923_);
lean_dec_ref_known(v___x_5922_, 1);
v_snd_5924_ = lean_ctor_get(v_a_5923_, 1);
lean_inc(v_snd_5924_);
lean_dec(v_a_5923_);
v_name_5925_ = lean_ctor_get(v_toConstantVal_5886_, 0);
lean_inc(v_name_5925_);
lean_dec_ref(v_toConstantVal_5886_);
v___x_5926_ = l___private_Lean_Meta_Injective_0__Lean_Meta_splitAndAssumption(v_snd_5924_, v_name_5925_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
if (lean_obj_tag(v___x_5926_) == 0)
{
lean_object* v___x_5927_; lean_object* v_a_5928_; lean_object* v___x_5930_; uint8_t v_isShared_5931_; uint8_t v_isSharedCheck_5955_; 
lean_dec_ref_known(v___x_5926_, 1);
v___x_5927_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheorem_spec__0___redArg(v___x_5920_, v___y_5882_);
v_a_5928_ = lean_ctor_get(v___x_5927_, 0);
v_isSharedCheck_5955_ = !lean_is_exclusive(v___x_5927_);
if (v_isSharedCheck_5955_ == 0)
{
v___x_5930_ = v___x_5927_;
v_isShared_5931_ = v_isSharedCheck_5955_;
goto v_resetjp_5929_;
}
else
{
lean_inc(v_a_5928_);
lean_dec(v___x_5927_);
v___x_5930_ = lean_box(0);
v_isShared_5931_ = v_isSharedCheck_5955_;
goto v_resetjp_5929_;
}
v_resetjp_5929_:
{
uint8_t v___x_5932_; uint8_t v___x_5933_; uint8_t v___x_5934_; lean_object* v___x_5935_; 
v___x_5932_ = 0;
v___x_5933_ = 1;
v___x_5934_ = 1;
v___x_5935_ = l_Lean_Meta_mkLambdaFVars(v_xs_5879_, v_a_5928_, v___x_5932_, v___x_5933_, v___x_5932_, v___x_5933_, v___x_5934_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
lean_dec_ref(v_xs_5879_);
if (lean_obj_tag(v___x_5935_) == 0)
{
lean_object* v_a_5936_; lean_object* v___x_5938_; uint8_t v_isShared_5939_; uint8_t v_isSharedCheck_5946_; 
v_a_5936_ = lean_ctor_get(v___x_5935_, 0);
v_isSharedCheck_5946_ = !lean_is_exclusive(v___x_5935_);
if (v_isSharedCheck_5946_ == 0)
{
v___x_5938_ = v___x_5935_;
v_isShared_5939_ = v_isSharedCheck_5946_;
goto v_resetjp_5937_;
}
else
{
lean_inc(v_a_5936_);
lean_dec(v___x_5935_);
v___x_5938_ = lean_box(0);
v_isShared_5939_ = v_isSharedCheck_5946_;
goto v_resetjp_5937_;
}
v_resetjp_5937_:
{
lean_object* v___x_5941_; 
if (v_isShared_5931_ == 0)
{
lean_ctor_set_tag(v___x_5930_, 1);
lean_ctor_set(v___x_5930_, 0, v_a_5936_);
v___x_5941_ = v___x_5930_;
goto v_reusejp_5940_;
}
else
{
lean_object* v_reuseFailAlloc_5945_; 
v_reuseFailAlloc_5945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5945_, 0, v_a_5936_);
v___x_5941_ = v_reuseFailAlloc_5945_;
goto v_reusejp_5940_;
}
v_reusejp_5940_:
{
lean_object* v___x_5943_; 
if (v_isShared_5939_ == 0)
{
lean_ctor_set(v___x_5938_, 0, v___x_5941_);
v___x_5943_ = v___x_5938_;
goto v_reusejp_5942_;
}
else
{
lean_object* v_reuseFailAlloc_5944_; 
v_reuseFailAlloc_5944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5944_, 0, v___x_5941_);
v___x_5943_ = v_reuseFailAlloc_5944_;
goto v_reusejp_5942_;
}
v_reusejp_5942_:
{
return v___x_5943_;
}
}
}
}
else
{
lean_object* v_a_5947_; lean_object* v___x_5949_; uint8_t v_isShared_5950_; uint8_t v_isSharedCheck_5954_; 
lean_del_object(v___x_5930_);
v_a_5947_ = lean_ctor_get(v___x_5935_, 0);
v_isSharedCheck_5954_ = !lean_is_exclusive(v___x_5935_);
if (v_isSharedCheck_5954_ == 0)
{
v___x_5949_ = v___x_5935_;
v_isShared_5950_ = v_isSharedCheck_5954_;
goto v_resetjp_5948_;
}
else
{
lean_inc(v_a_5947_);
lean_dec(v___x_5935_);
v___x_5949_ = lean_box(0);
v_isShared_5950_ = v_isSharedCheck_5954_;
goto v_resetjp_5948_;
}
v_resetjp_5948_:
{
lean_object* v___x_5952_; 
if (v_isShared_5950_ == 0)
{
v___x_5952_ = v___x_5949_;
goto v_reusejp_5951_;
}
else
{
lean_object* v_reuseFailAlloc_5953_; 
v_reuseFailAlloc_5953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5953_, 0, v_a_5947_);
v___x_5952_ = v_reuseFailAlloc_5953_;
goto v_reusejp_5951_;
}
v_reusejp_5951_:
{
return v___x_5952_;
}
}
}
}
}
else
{
lean_object* v_a_5956_; lean_object* v___x_5958_; uint8_t v_isShared_5959_; uint8_t v_isSharedCheck_5963_; 
lean_dec_ref(v___x_5920_);
lean_dec_ref(v_xs_5879_);
v_a_5956_ = lean_ctor_get(v___x_5926_, 0);
v_isSharedCheck_5963_ = !lean_is_exclusive(v___x_5926_);
if (v_isSharedCheck_5963_ == 0)
{
v___x_5958_ = v___x_5926_;
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
else
{
lean_inc(v_a_5956_);
lean_dec(v___x_5926_);
v___x_5958_ = lean_box(0);
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
v_resetjp_5957_:
{
lean_object* v___x_5961_; 
if (v_isShared_5959_ == 0)
{
v___x_5961_ = v___x_5958_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5962_; 
v_reuseFailAlloc_5962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5962_, 0, v_a_5956_);
v___x_5961_ = v_reuseFailAlloc_5962_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
return v___x_5961_;
}
}
}
}
else
{
lean_object* v_a_5964_; lean_object* v___x_5966_; uint8_t v_isShared_5967_; uint8_t v_isSharedCheck_5971_; 
lean_dec_ref(v___x_5920_);
lean_dec_ref(v_toConstantVal_5886_);
lean_dec_ref(v_xs_5879_);
v_a_5964_ = lean_ctor_get(v___x_5922_, 0);
v_isSharedCheck_5971_ = !lean_is_exclusive(v___x_5922_);
if (v_isSharedCheck_5971_ == 0)
{
v___x_5966_ = v___x_5922_;
v_isShared_5967_ = v_isSharedCheck_5971_;
goto v_resetjp_5965_;
}
else
{
lean_inc(v_a_5964_);
lean_dec(v___x_5922_);
v___x_5966_ = lean_box(0);
v_isShared_5967_ = v_isSharedCheck_5971_;
goto v_resetjp_5965_;
}
v_resetjp_5965_:
{
lean_object* v___x_5969_; 
if (v_isShared_5967_ == 0)
{
v___x_5969_ = v___x_5966_;
goto v_reusejp_5968_;
}
else
{
lean_object* v_reuseFailAlloc_5970_; 
v_reuseFailAlloc_5970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5970_, 0, v_a_5964_);
v___x_5969_ = v_reuseFailAlloc_5970_;
goto v_reusejp_5968_;
}
v_reusejp_5968_:
{
return v___x_5969_;
}
}
}
}
else
{
lean_object* v_a_5972_; lean_object* v___x_5974_; uint8_t v_isShared_5975_; uint8_t v_isSharedCheck_5979_; 
lean_dec_ref(v___x_5911_);
lean_dec_ref(v_toConstantVal_5886_);
lean_dec_ref(v_xs_5879_);
v_a_5972_ = lean_ctor_get(v___x_5918_, 0);
v_isSharedCheck_5979_ = !lean_is_exclusive(v___x_5918_);
if (v_isSharedCheck_5979_ == 0)
{
v___x_5974_ = v___x_5918_;
v_isShared_5975_ = v_isSharedCheck_5979_;
goto v_resetjp_5973_;
}
else
{
lean_inc(v_a_5972_);
lean_dec(v___x_5918_);
v___x_5974_ = lean_box(0);
v_isShared_5975_ = v_isSharedCheck_5979_;
goto v_resetjp_5973_;
}
v_resetjp_5973_:
{
lean_object* v___x_5977_; 
if (v_isShared_5975_ == 0)
{
v___x_5977_ = v___x_5974_;
goto v_reusejp_5976_;
}
else
{
lean_object* v_reuseFailAlloc_5978_; 
v_reuseFailAlloc_5978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5978_, 0, v_a_5972_);
v___x_5977_ = v_reuseFailAlloc_5978_;
goto v_reusejp_5976_;
}
v_reusejp_5976_:
{
return v___x_5977_;
}
}
}
}
else
{
lean_object* v___x_5980_; 
lean_dec(v_a_5915_);
lean_dec_ref(v___x_5911_);
lean_dec_ref(v_xs_5879_);
v___x_5980_ = l___private_Lean_Meta_Injective_0__Lean_Meta_failedToGenHInj___redArg(v_ctorVal_5876_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
return v___x_5980_;
}
}
else
{
lean_object* v_a_5981_; lean_object* v___x_5983_; uint8_t v_isShared_5984_; uint8_t v_isSharedCheck_5988_; 
lean_dec_ref(v___x_5911_);
lean_dec_ref(v_xs_5879_);
lean_dec_ref(v_ctorVal_5876_);
v_a_5981_ = lean_ctor_get(v___x_5914_, 0);
v_isSharedCheck_5988_ = !lean_is_exclusive(v___x_5914_);
if (v_isSharedCheck_5988_ == 0)
{
v___x_5983_ = v___x_5914_;
v_isShared_5984_ = v_isSharedCheck_5988_;
goto v_resetjp_5982_;
}
else
{
lean_inc(v_a_5981_);
lean_dec(v___x_5914_);
v___x_5983_ = lean_box(0);
v_isShared_5984_ = v_isSharedCheck_5988_;
goto v_resetjp_5982_;
}
v_resetjp_5982_:
{
lean_object* v___x_5986_; 
if (v_isShared_5984_ == 0)
{
v___x_5986_ = v___x_5983_;
goto v_reusejp_5985_;
}
else
{
lean_object* v_reuseFailAlloc_5987_; 
v_reuseFailAlloc_5987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5987_, 0, v_a_5981_);
v___x_5986_ = v_reuseFailAlloc_5987_;
goto v_reusejp_5985_;
}
v_reusejp_5985_:
{
return v___x_5986_;
}
}
}
}
else
{
lean_object* v_a_5989_; lean_object* v___x_5991_; uint8_t v_isShared_5992_; uint8_t v_isSharedCheck_5996_; 
lean_dec_ref(v___x_5911_);
lean_dec_ref(v_xs_5879_);
lean_dec_ref(v_ctorVal_5876_);
v_a_5989_ = lean_ctor_get(v___x_5912_, 0);
v_isSharedCheck_5996_ = !lean_is_exclusive(v___x_5912_);
if (v_isSharedCheck_5996_ == 0)
{
v___x_5991_ = v___x_5912_;
v_isShared_5992_ = v_isSharedCheck_5996_;
goto v_resetjp_5990_;
}
else
{
lean_inc(v_a_5989_);
lean_dec(v___x_5912_);
v___x_5991_ = lean_box(0);
v_isShared_5992_ = v_isSharedCheck_5996_;
goto v_resetjp_5990_;
}
v_resetjp_5990_:
{
lean_object* v___x_5994_; 
if (v_isShared_5992_ == 0)
{
v___x_5994_ = v___x_5991_;
goto v_reusejp_5993_;
}
else
{
lean_object* v_reuseFailAlloc_5995_; 
v_reuseFailAlloc_5995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5995_, 0, v_a_5989_);
v___x_5994_ = v_reuseFailAlloc_5995_;
goto v_reusejp_5993_;
}
v_reusejp_5993_:
{
return v___x_5994_;
}
}
}
}
else
{
lean_object* v_a_5997_; lean_object* v___x_5999_; uint8_t v_isShared_6000_; uint8_t v_isSharedCheck_6004_; 
lean_dec_ref(v_eqs_5901_);
lean_dec_ref(v_noConfusion_5895_);
lean_dec_ref(v_xs_5879_);
lean_dec_ref(v_ctorVal_5876_);
v_a_5997_ = lean_ctor_get(v___x_5904_, 0);
v_isSharedCheck_6004_ = !lean_is_exclusive(v___x_5904_);
if (v_isSharedCheck_6004_ == 0)
{
v___x_5999_ = v___x_5904_;
v_isShared_6000_ = v_isSharedCheck_6004_;
goto v_resetjp_5998_;
}
else
{
lean_inc(v_a_5997_);
lean_dec(v___x_5904_);
v___x_5999_ = lean_box(0);
v_isShared_6000_ = v_isSharedCheck_6004_;
goto v_resetjp_5998_;
}
v_resetjp_5998_:
{
lean_object* v___x_6002_; 
if (v_isShared_6000_ == 0)
{
v___x_6002_ = v___x_5999_;
goto v_reusejp_6001_;
}
else
{
lean_object* v_reuseFailAlloc_6003_; 
v_reuseFailAlloc_6003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6003_, 0, v_a_5997_);
v___x_6002_ = v_reuseFailAlloc_6003_;
goto v_reusejp_6001_;
}
v_reusejp_6001_:
{
return v___x_6002_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed(lean_object* v_ctorVal_6011_, lean_object* v_us_6012_, lean_object* v_numIndices_6013_, lean_object* v_xs_6014_, lean_object* v_type_6015_, lean_object* v___y_6016_, lean_object* v___y_6017_, lean_object* v___y_6018_, lean_object* v___y_6019_, lean_object* v___y_6020_){
_start:
{
lean_object* v_res_6021_; 
v_res_6021_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0(v_ctorVal_6011_, v_us_6012_, v_numIndices_6013_, v_xs_6014_, v_type_6015_, v___y_6016_, v___y_6017_, v___y_6018_, v___y_6019_);
lean_dec(v___y_6019_);
lean_dec_ref(v___y_6018_);
lean_dec(v___y_6017_);
lean_dec_ref(v___y_6016_);
lean_dec(v_numIndices_6013_);
return v_res_6021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(lean_object* v_ctorVal_6022_, lean_object* v_typeInfo_6023_, lean_object* v_a_6024_, lean_object* v_a_6025_, lean_object* v_a_6026_, lean_object* v_a_6027_){
_start:
{
lean_object* v_thmType_6029_; lean_object* v_us_6030_; lean_object* v_numIndices_6031_; lean_object* v___f_6032_; uint8_t v___x_6033_; lean_object* v___x_6034_; 
v_thmType_6029_ = lean_ctor_get(v_typeInfo_6023_, 0);
lean_inc_ref(v_thmType_6029_);
v_us_6030_ = lean_ctor_get(v_typeInfo_6023_, 1);
lean_inc(v_us_6030_);
v_numIndices_6031_ = lean_ctor_get(v_typeInfo_6023_, 2);
lean_inc(v_numIndices_6031_);
lean_dec_ref(v_typeInfo_6023_);
v___f_6032_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6032_, 0, v_ctorVal_6022_);
lean_closure_set(v___f_6032_, 1, v_us_6030_);
lean_closure_set(v___f_6032_, 2, v_numIndices_6031_);
v___x_6033_ = 0;
v___x_6034_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Injective_0__Lean_Meta_mkInjectiveTheoremValue_spec__0___redArg(v_thmType_6029_, v___f_6032_, v___x_6033_, v___x_6033_, v_a_6024_, v_a_6025_, v_a_6026_, v_a_6027_);
return v___x_6034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f___boxed(lean_object* v_ctorVal_6035_, lean_object* v_typeInfo_6036_, lean_object* v_a_6037_, lean_object* v_a_6038_, lean_object* v_a_6039_, lean_object* v_a_6040_, lean_object* v_a_6041_){
_start:
{
lean_object* v_res_6042_; 
v_res_6042_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(v_ctorVal_6035_, v_typeInfo_6036_, v_a_6037_, v_a_6038_, v_a_6039_, v_a_6040_);
lean_dec(v_a_6040_);
lean_dec_ref(v_a_6039_);
lean_dec(v_a_6038_);
lean_dec_ref(v_a_6037_);
return v_res_6042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkHInjectiveTheoremNameFor(lean_object* v_ctorName_6045_){
_start:
{
lean_object* v___x_6046_; lean_object* v___x_6047_; 
v___x_6046_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_6047_ = l_Lean_Name_str___override(v_ctorName_6045_, v___x_6046_);
return v___x_6047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(lean_object* v_thmName_6048_, lean_object* v_ctorVal_6049_, lean_object* v_a_6050_, lean_object* v_a_6051_, lean_object* v_a_6052_, lean_object* v_a_6053_){
_start:
{
lean_object* v___x_6055_; 
lean_inc_ref(v_ctorVal_6049_);
v___x_6055_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjType_x3f(v_ctorVal_6049_, v_a_6050_, v_a_6051_, v_a_6052_, v_a_6053_);
if (lean_obj_tag(v___x_6055_) == 0)
{
lean_object* v_a_6056_; lean_object* v___x_6058_; uint8_t v_isShared_6059_; uint8_t v_isSharedCheck_6117_; 
v_a_6056_ = lean_ctor_get(v___x_6055_, 0);
v_isSharedCheck_6117_ = !lean_is_exclusive(v___x_6055_);
if (v_isSharedCheck_6117_ == 0)
{
v___x_6058_ = v___x_6055_;
v_isShared_6059_ = v_isSharedCheck_6117_;
goto v_resetjp_6057_;
}
else
{
lean_inc(v_a_6056_);
lean_dec(v___x_6055_);
v___x_6058_ = lean_box(0);
v_isShared_6059_ = v_isSharedCheck_6117_;
goto v_resetjp_6057_;
}
v_resetjp_6057_:
{
if (lean_obj_tag(v_a_6056_) == 1)
{
lean_object* v_val_6060_; lean_object* v___x_6061_; 
lean_del_object(v___x_6058_);
v_val_6060_ = lean_ctor_get(v_a_6056_, 0);
lean_inc_n(v_val_6060_, 2);
lean_dec_ref_known(v_a_6056_, 1);
lean_inc_ref(v_ctorVal_6049_);
v___x_6061_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheoremValue_x3f(v_ctorVal_6049_, v_val_6060_, v_a_6050_, v_a_6051_, v_a_6052_, v_a_6053_);
if (lean_obj_tag(v___x_6061_) == 0)
{
lean_object* v_a_6062_; lean_object* v___x_6064_; uint8_t v_isShared_6065_; uint8_t v_isSharedCheck_6104_; 
v_a_6062_ = lean_ctor_get(v___x_6061_, 0);
v_isSharedCheck_6104_ = !lean_is_exclusive(v___x_6061_);
if (v_isSharedCheck_6104_ == 0)
{
v___x_6064_ = v___x_6061_;
v_isShared_6065_ = v_isSharedCheck_6104_;
goto v_resetjp_6063_;
}
else
{
lean_inc(v_a_6062_);
lean_dec(v___x_6061_);
v___x_6064_ = lean_box(0);
v_isShared_6065_ = v_isSharedCheck_6104_;
goto v_resetjp_6063_;
}
v_resetjp_6063_:
{
if (lean_obj_tag(v_a_6062_) == 1)
{
lean_object* v_toConstantVal_6066_; lean_object* v_val_6067_; lean_object* v___x_6069_; uint8_t v_isShared_6070_; uint8_t v_isSharedCheck_6099_; 
v_toConstantVal_6066_ = lean_ctor_get(v_ctorVal_6049_, 0);
lean_inc_ref(v_toConstantVal_6066_);
lean_dec_ref(v_ctorVal_6049_);
v_val_6067_ = lean_ctor_get(v_a_6062_, 0);
v_isSharedCheck_6099_ = !lean_is_exclusive(v_a_6062_);
if (v_isSharedCheck_6099_ == 0)
{
v___x_6069_ = v_a_6062_;
v_isShared_6070_ = v_isSharedCheck_6099_;
goto v_resetjp_6068_;
}
else
{
lean_inc(v_val_6067_);
lean_dec(v_a_6062_);
v___x_6069_ = lean_box(0);
v_isShared_6070_ = v_isSharedCheck_6099_;
goto v_resetjp_6068_;
}
v_resetjp_6068_:
{
lean_object* v_levelParams_6071_; lean_object* v___x_6073_; uint8_t v_isShared_6074_; uint8_t v_isSharedCheck_6096_; 
v_levelParams_6071_ = lean_ctor_get(v_toConstantVal_6066_, 1);
v_isSharedCheck_6096_ = !lean_is_exclusive(v_toConstantVal_6066_);
if (v_isSharedCheck_6096_ == 0)
{
lean_object* v_unused_6097_; lean_object* v_unused_6098_; 
v_unused_6097_ = lean_ctor_get(v_toConstantVal_6066_, 2);
lean_dec(v_unused_6097_);
v_unused_6098_ = lean_ctor_get(v_toConstantVal_6066_, 0);
lean_dec(v_unused_6098_);
v___x_6073_ = v_toConstantVal_6066_;
v_isShared_6074_ = v_isSharedCheck_6096_;
goto v_resetjp_6072_;
}
else
{
lean_inc(v_levelParams_6071_);
lean_dec(v_toConstantVal_6066_);
v___x_6073_ = lean_box(0);
v_isShared_6074_ = v_isSharedCheck_6096_;
goto v_resetjp_6072_;
}
v_resetjp_6072_:
{
lean_object* v_thmType_6075_; lean_object* v___x_6077_; uint8_t v_isShared_6078_; uint8_t v_isSharedCheck_6093_; 
v_thmType_6075_ = lean_ctor_get(v_val_6060_, 0);
v_isSharedCheck_6093_ = !lean_is_exclusive(v_val_6060_);
if (v_isSharedCheck_6093_ == 0)
{
lean_object* v_unused_6094_; lean_object* v_unused_6095_; 
v_unused_6094_ = lean_ctor_get(v_val_6060_, 2);
lean_dec(v_unused_6094_);
v_unused_6095_ = lean_ctor_get(v_val_6060_, 1);
lean_dec(v_unused_6095_);
v___x_6077_ = v_val_6060_;
v_isShared_6078_ = v_isSharedCheck_6093_;
goto v_resetjp_6076_;
}
else
{
lean_inc(v_thmType_6075_);
lean_dec(v_val_6060_);
v___x_6077_ = lean_box(0);
v_isShared_6078_ = v_isSharedCheck_6093_;
goto v_resetjp_6076_;
}
v_resetjp_6076_:
{
lean_object* v___x_6080_; 
lean_inc(v_thmName_6048_);
if (v_isShared_6074_ == 0)
{
lean_ctor_set(v___x_6073_, 2, v_thmType_6075_);
lean_ctor_set(v___x_6073_, 0, v_thmName_6048_);
v___x_6080_ = v___x_6073_;
goto v_reusejp_6079_;
}
else
{
lean_object* v_reuseFailAlloc_6092_; 
v_reuseFailAlloc_6092_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6092_, 0, v_thmName_6048_);
lean_ctor_set(v_reuseFailAlloc_6092_, 1, v_levelParams_6071_);
lean_ctor_set(v_reuseFailAlloc_6092_, 2, v_thmType_6075_);
v___x_6080_ = v_reuseFailAlloc_6092_;
goto v_reusejp_6079_;
}
v_reusejp_6079_:
{
lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6084_; 
v___x_6081_ = lean_box(0);
v___x_6082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6082_, 0, v_thmName_6048_);
lean_ctor_set(v___x_6082_, 1, v___x_6081_);
if (v_isShared_6078_ == 0)
{
lean_ctor_set(v___x_6077_, 2, v___x_6082_);
lean_ctor_set(v___x_6077_, 1, v_val_6067_);
lean_ctor_set(v___x_6077_, 0, v___x_6080_);
v___x_6084_ = v___x_6077_;
goto v_reusejp_6083_;
}
else
{
lean_object* v_reuseFailAlloc_6091_; 
v_reuseFailAlloc_6091_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6091_, 0, v___x_6080_);
lean_ctor_set(v_reuseFailAlloc_6091_, 1, v_val_6067_);
lean_ctor_set(v_reuseFailAlloc_6091_, 2, v___x_6082_);
v___x_6084_ = v_reuseFailAlloc_6091_;
goto v_reusejp_6083_;
}
v_reusejp_6083_:
{
lean_object* v___x_6086_; 
if (v_isShared_6070_ == 0)
{
lean_ctor_set(v___x_6069_, 0, v___x_6084_);
v___x_6086_ = v___x_6069_;
goto v_reusejp_6085_;
}
else
{
lean_object* v_reuseFailAlloc_6090_; 
v_reuseFailAlloc_6090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6090_, 0, v___x_6084_);
v___x_6086_ = v_reuseFailAlloc_6090_;
goto v_reusejp_6085_;
}
v_reusejp_6085_:
{
lean_object* v___x_6088_; 
if (v_isShared_6065_ == 0)
{
lean_ctor_set(v___x_6064_, 0, v___x_6086_);
v___x_6088_ = v___x_6064_;
goto v_reusejp_6087_;
}
else
{
lean_object* v_reuseFailAlloc_6089_; 
v_reuseFailAlloc_6089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6089_, 0, v___x_6086_);
v___x_6088_ = v_reuseFailAlloc_6089_;
goto v_reusejp_6087_;
}
v_reusejp_6087_:
{
return v___x_6088_;
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
lean_object* v___x_6100_; lean_object* v___x_6102_; 
lean_dec(v_a_6062_);
lean_dec(v_val_6060_);
lean_dec_ref(v_ctorVal_6049_);
lean_dec(v_thmName_6048_);
v___x_6100_ = lean_box(0);
if (v_isShared_6065_ == 0)
{
lean_ctor_set(v___x_6064_, 0, v___x_6100_);
v___x_6102_ = v___x_6064_;
goto v_reusejp_6101_;
}
else
{
lean_object* v_reuseFailAlloc_6103_; 
v_reuseFailAlloc_6103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6103_, 0, v___x_6100_);
v___x_6102_ = v_reuseFailAlloc_6103_;
goto v_reusejp_6101_;
}
v_reusejp_6101_:
{
return v___x_6102_;
}
}
}
}
else
{
lean_object* v_a_6105_; lean_object* v___x_6107_; uint8_t v_isShared_6108_; uint8_t v_isSharedCheck_6112_; 
lean_dec(v_val_6060_);
lean_dec_ref(v_ctorVal_6049_);
lean_dec(v_thmName_6048_);
v_a_6105_ = lean_ctor_get(v___x_6061_, 0);
v_isSharedCheck_6112_ = !lean_is_exclusive(v___x_6061_);
if (v_isSharedCheck_6112_ == 0)
{
v___x_6107_ = v___x_6061_;
v_isShared_6108_ = v_isSharedCheck_6112_;
goto v_resetjp_6106_;
}
else
{
lean_inc(v_a_6105_);
lean_dec(v___x_6061_);
v___x_6107_ = lean_box(0);
v_isShared_6108_ = v_isSharedCheck_6112_;
goto v_resetjp_6106_;
}
v_resetjp_6106_:
{
lean_object* v___x_6110_; 
if (v_isShared_6108_ == 0)
{
v___x_6110_ = v___x_6107_;
goto v_reusejp_6109_;
}
else
{
lean_object* v_reuseFailAlloc_6111_; 
v_reuseFailAlloc_6111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6111_, 0, v_a_6105_);
v___x_6110_ = v_reuseFailAlloc_6111_;
goto v_reusejp_6109_;
}
v_reusejp_6109_:
{
return v___x_6110_;
}
}
}
}
else
{
lean_object* v___x_6113_; lean_object* v___x_6115_; 
lean_dec(v_a_6056_);
lean_dec_ref(v_ctorVal_6049_);
lean_dec(v_thmName_6048_);
v___x_6113_ = lean_box(0);
if (v_isShared_6059_ == 0)
{
lean_ctor_set(v___x_6058_, 0, v___x_6113_);
v___x_6115_ = v___x_6058_;
goto v_reusejp_6114_;
}
else
{
lean_object* v_reuseFailAlloc_6116_; 
v_reuseFailAlloc_6116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6116_, 0, v___x_6113_);
v___x_6115_ = v_reuseFailAlloc_6116_;
goto v_reusejp_6114_;
}
v_reusejp_6114_:
{
return v___x_6115_;
}
}
}
}
else
{
lean_object* v_a_6118_; lean_object* v___x_6120_; uint8_t v_isShared_6121_; uint8_t v_isSharedCheck_6125_; 
lean_dec_ref(v_ctorVal_6049_);
lean_dec(v_thmName_6048_);
v_a_6118_ = lean_ctor_get(v___x_6055_, 0);
v_isSharedCheck_6125_ = !lean_is_exclusive(v___x_6055_);
if (v_isSharedCheck_6125_ == 0)
{
v___x_6120_ = v___x_6055_;
v_isShared_6121_ = v_isSharedCheck_6125_;
goto v_resetjp_6119_;
}
else
{
lean_inc(v_a_6118_);
lean_dec(v___x_6055_);
v___x_6120_ = lean_box(0);
v_isShared_6121_ = v_isSharedCheck_6125_;
goto v_resetjp_6119_;
}
v_resetjp_6119_:
{
lean_object* v___x_6123_; 
if (v_isShared_6121_ == 0)
{
v___x_6123_ = v___x_6120_;
goto v_reusejp_6122_;
}
else
{
lean_object* v_reuseFailAlloc_6124_; 
v_reuseFailAlloc_6124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6124_, 0, v_a_6118_);
v___x_6123_ = v_reuseFailAlloc_6124_;
goto v_reusejp_6122_;
}
v_reusejp_6122_:
{
return v___x_6123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f___boxed(lean_object* v_thmName_6126_, lean_object* v_ctorVal_6127_, lean_object* v_a_6128_, lean_object* v_a_6129_, lean_object* v_a_6130_, lean_object* v_a_6131_, lean_object* v_a_6132_){
_start:
{
lean_object* v_res_6133_; 
v_res_6133_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_thmName_6126_, v_ctorVal_6127_, v_a_6128_, v_a_6129_, v_a_6130_, v_a_6131_);
lean_dec(v_a_6131_);
lean_dec_ref(v_a_6130_);
lean_dec(v_a_6129_);
lean_dec_ref(v_a_6128_);
return v_res_6133_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(lean_object* v_env_6134_, lean_object* v_n_6135_){
_start:
{
if (lean_obj_tag(v_n_6135_) == 1)
{
lean_object* v_pre_6136_; lean_object* v_str_6137_; lean_object* v___x_6138_; uint8_t v___x_6139_; 
v_pre_6136_ = lean_ctor_get(v_n_6135_, 0);
lean_inc(v_pre_6136_);
v_str_6137_ = lean_ctor_get(v_n_6135_, 1);
lean_inc_ref(v_str_6137_);
lean_dec_ref_known(v_n_6135_, 2);
v___x_6138_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_6139_ = lean_string_dec_eq(v_str_6137_, v___x_6138_);
lean_dec_ref(v_str_6137_);
if (v___x_6139_ == 0)
{
lean_dec(v_pre_6136_);
lean_dec_ref(v_env_6134_);
return v___x_6139_;
}
else
{
uint8_t v___x_6140_; lean_object* v___x_6141_; 
v___x_6140_ = 0;
v___x_6141_ = l_Lean_Environment_find_x3f(v_env_6134_, v_pre_6136_, v___x_6140_);
if (lean_obj_tag(v___x_6141_) == 1)
{
lean_object* v_val_6142_; 
v_val_6142_ = lean_ctor_get(v___x_6141_, 0);
lean_inc(v_val_6142_);
lean_dec_ref_known(v___x_6141_, 1);
if (lean_obj_tag(v_val_6142_) == 6)
{
lean_dec_ref_known(v_val_6142_, 1);
return v___x_6139_;
}
else
{
lean_dec(v_val_6142_);
return v___x_6140_;
}
}
else
{
lean_dec(v___x_6141_);
return v___x_6140_;
}
}
}
else
{
uint8_t v___x_6143_; 
lean_dec(v_n_6135_);
lean_dec_ref(v_env_6134_);
v___x_6143_ = 0;
return v___x_6143_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object* v_env_6144_, lean_object* v_n_6145_){
_start:
{
uint8_t v_res_6146_; lean_object* v_r_6147_; 
v_res_6146_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(v_env_6144_, v_n_6145_);
v_r_6147_ = lean_box(v_res_6146_);
return v_r_6147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_6150_; lean_object* v___x_6151_; 
v___f_6150_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_));
v___x_6151_ = l_Lean_registerReservedNamePredicate(v___f_6150_);
return v___x_6151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2____boxed(lean_object* v_a_6152_){
_start:
{
lean_object* v_res_6153_; 
v_res_6153_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
return v_res_6153_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(lean_object* v_thm_6154_, lean_object* v___y_6155_){
_start:
{
lean_object* v___x_6157_; lean_object* v_env_6158_; lean_object* v_toConstantVal_6159_; lean_object* v_value_6160_; lean_object* v_all_6161_; lean_object* v_type_6168_; uint8_t v___x_6169_; 
v___x_6157_ = lean_st_ref_get(v___y_6155_);
v_env_6158_ = lean_ctor_get(v___x_6157_, 0);
lean_inc_ref_n(v_env_6158_, 2);
lean_dec(v___x_6157_);
v_toConstantVal_6159_ = lean_ctor_get(v_thm_6154_, 0);
v_value_6160_ = lean_ctor_get(v_thm_6154_, 1);
v_all_6161_ = lean_ctor_get(v_thm_6154_, 2);
v_type_6168_ = lean_ctor_get(v_toConstantVal_6159_, 2);
v___x_6169_ = l_Lean_Environment_hasUnsafe(v_env_6158_, v_type_6168_);
if (v___x_6169_ == 0)
{
uint8_t v___x_6170_; 
v___x_6170_ = l_Lean_Environment_hasUnsafe(v_env_6158_, v_value_6160_);
if (v___x_6170_ == 0)
{
lean_object* v___x_6171_; lean_object* v___x_6172_; 
v___x_6171_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_6171_, 0, v_thm_6154_);
v___x_6172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6171_);
return v___x_6172_;
}
else
{
lean_inc(v_all_6161_);
lean_inc_ref(v_value_6160_);
lean_inc_ref(v_toConstantVal_6159_);
lean_dec_ref(v_thm_6154_);
goto v___jp_6162_;
}
}
else
{
lean_inc(v_all_6161_);
lean_inc_ref(v_value_6160_);
lean_inc_ref(v_toConstantVal_6159_);
lean_dec_ref(v_env_6158_);
lean_dec_ref(v_thm_6154_);
goto v___jp_6162_;
}
v___jp_6162_:
{
lean_object* v___x_6163_; uint8_t v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; 
v___x_6163_ = lean_box(0);
v___x_6164_ = 0;
v___x_6165_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_6165_, 0, v_toConstantVal_6159_);
lean_ctor_set(v___x_6165_, 1, v_value_6160_);
lean_ctor_set(v___x_6165_, 2, v___x_6163_);
lean_ctor_set(v___x_6165_, 3, v_all_6161_);
lean_ctor_set_uint8(v___x_6165_, sizeof(void*)*4, v___x_6164_);
v___x_6166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6166_, 0, v___x_6165_);
v___x_6167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6167_, 0, v___x_6166_);
return v___x_6167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_thm_6173_, lean_object* v___y_6174_, lean_object* v___y_6175_){
_start:
{
lean_object* v_res_6176_; 
v_res_6176_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_thm_6173_, v___y_6174_);
lean_dec(v___y_6174_);
return v_res_6176_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(lean_object* v_thm_6177_, lean_object* v___y_6178_, lean_object* v___y_6179_, lean_object* v___y_6180_, lean_object* v___y_6181_){
_start:
{
lean_object* v___x_6183_; 
v___x_6183_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_thm_6177_, v___y_6181_);
return v___x_6183_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___boxed(lean_object* v_thm_6184_, lean_object* v___y_6185_, lean_object* v___y_6186_, lean_object* v___y_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_){
_start:
{
lean_object* v_res_6190_; 
v_res_6190_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0(v_thm_6184_, v___y_6185_, v___y_6186_, v___y_6187_, v___y_6188_);
lean_dec(v___y_6188_);
lean_dec_ref(v___y_6187_);
lean_dec(v___y_6186_);
lean_dec_ref(v___y_6185_);
return v_res_6190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object* v_val_6191_, uint8_t v___x_6192_, lean_object* v___y_6193_, lean_object* v___y_6194_, lean_object* v___y_6195_, lean_object* v___y_6196_){
_start:
{
lean_object* v___x_6198_; lean_object* v_a_6199_; lean_object* v___x_6200_; 
v___x_6198_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__spec__0___redArg(v_val_6191_, v___y_6196_);
v_a_6199_ = lean_ctor_get(v___x_6198_, 0);
lean_inc(v_a_6199_);
lean_dec_ref(v___x_6198_);
v___x_6200_ = l_Lean_addDecl(v_a_6199_, v___x_6192_, v___y_6195_, v___y_6196_);
return v___x_6200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v_val_6201_, lean_object* v___x_6202_, lean_object* v___y_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_){
_start:
{
uint8_t v___x_2237__boxed_6208_; lean_object* v_res_6209_; 
v___x_2237__boxed_6208_ = lean_unbox(v___x_6202_);
v_res_6209_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(v_val_6201_, v___x_2237__boxed_6208_, v___y_6203_, v___y_6204_, v___y_6205_, v___y_6206_);
lean_dec(v___y_6206_);
lean_dec_ref(v___y_6205_);
lean_dec(v___y_6204_);
lean_dec_ref(v___y_6203_);
return v_res_6209_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; 
v___x_6212_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6213_ = lean_unsigned_to_nat(0u);
v___x_6214_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6214_, 0, v___x_6213_);
lean_ctor_set(v___x_6214_, 1, v___x_6213_);
lean_ctor_set(v___x_6214_, 2, v___x_6213_);
lean_ctor_set(v___x_6214_, 3, v___x_6213_);
lean_ctor_set(v___x_6214_, 4, v___x_6212_);
lean_ctor_set(v___x_6214_, 5, v___x_6212_);
lean_ctor_set(v___x_6214_, 6, v___x_6212_);
lean_ctor_set(v___x_6214_, 7, v___x_6212_);
lean_ctor_set(v___x_6214_, 8, v___x_6212_);
lean_ctor_set(v___x_6214_, 9, v___x_6212_);
lean_ctor_set(v___x_6214_, 10, v___x_6212_);
return v___x_6214_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6215_; lean_object* v___x_6216_; 
v___x_6215_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6216_, 0, v___x_6215_);
lean_ctor_set(v___x_6216_, 1, v___x_6215_);
return v___x_6216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; 
v___x_6217_ = lean_unsigned_to_nat(0u);
v___x_6218_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6219_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6219_, 0, v___x_6218_);
lean_ctor_set(v___x_6219_, 1, v___x_6218_);
lean_ctor_set(v___x_6219_, 2, v___x_6217_);
return v___x_6219_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; 
v___x_6220_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__3_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6221_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__2_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6222_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6223_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_Meta_mkInjectiveTheorems_spec__2___redArg___closed__2);
v___x_6224_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6224_, 0, v___x_6223_);
lean_ctor_set(v___x_6224_, 1, v___x_6222_);
lean_ctor_set(v___x_6224_, 2, v___x_6221_);
lean_ctor_set(v___x_6224_, 3, v___x_6222_);
lean_ctor_set(v___x_6224_, 4, v___x_6222_);
lean_ctor_set(v___x_6224_, 5, v___x_6222_);
lean_ctor_set(v___x_6224_, 6, v___x_6222_);
lean_ctor_set(v___x_6224_, 7, v___x_6220_);
return v___x_6224_;
}
}
static lean_object* _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6225_; lean_object* v___x_6226_; 
v___x_6225_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__0, &l_Lean_Meta_mkInjectiveTheorems___closed__0_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__0);
v___x_6226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6226_, 0, v___x_6225_);
lean_ctor_set(v___x_6226_, 1, v___x_6225_);
lean_ctor_set(v___x_6226_, 2, v___x_6225_);
lean_ctor_set(v___x_6226_, 3, v___x_6225_);
lean_ctor_set(v___x_6226_, 4, v___x_6225_);
return v___x_6226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(lean_object* v___x_6227_, lean_object* v_name_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_){
_start:
{
if (lean_obj_tag(v_name_6228_) == 1)
{
lean_object* v_pre_6240_; lean_object* v_str_6241_; lean_object* v___x_6242_; uint8_t v___x_6243_; 
v_pre_6240_ = lean_ctor_get(v_name_6228_, 0);
lean_inc(v_pre_6240_);
v_str_6241_ = lean_ctor_get(v_name_6228_, 1);
v___x_6242_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_hinjSuffix___closed__0));
v___x_6243_ = lean_string_dec_eq(v_str_6241_, v___x_6242_);
if (v___x_6243_ == 0)
{
lean_dec_ref_known(v_name_6228_, 2);
lean_dec(v_pre_6240_);
lean_dec(v___x_6227_);
goto v___jp_6236_;
}
else
{
lean_object* v___x_6244_; lean_object* v_env_6245_; uint8_t v___x_6246_; lean_object* v___x_6247_; 
v___x_6244_ = lean_st_ref_get(v___y_6230_);
v_env_6245_ = lean_ctor_get(v___x_6244_, 0);
lean_inc_ref(v_env_6245_);
lean_dec(v___x_6244_);
v___x_6246_ = 0;
lean_inc(v_pre_6240_);
v___x_6247_ = l_Lean_Environment_find_x3f(v_env_6245_, v_pre_6240_, v___x_6246_);
if (lean_obj_tag(v___x_6247_) == 1)
{
lean_object* v_val_6248_; 
v_val_6248_ = lean_ctor_get(v___x_6247_, 0);
lean_inc(v_val_6248_);
lean_dec_ref_known(v___x_6247_, 1);
if (lean_obj_tag(v_val_6248_) == 6)
{
lean_object* v_val_6249_; lean_object* v___x_6251_; uint8_t v_isShared_6252_; uint8_t v_isSharedCheck_6299_; 
v_val_6249_ = lean_ctor_get(v_val_6248_, 0);
v_isSharedCheck_6299_ = !lean_is_exclusive(v_val_6248_);
if (v_isSharedCheck_6299_ == 0)
{
v___x_6251_ = v_val_6248_;
v_isShared_6252_ = v_isSharedCheck_6299_;
goto v_resetjp_6250_;
}
else
{
lean_inc(v_val_6249_);
lean_dec(v_val_6248_);
v___x_6251_ = lean_box(0);
v_isShared_6252_ = v_isSharedCheck_6299_;
goto v_resetjp_6250_;
}
v_resetjp_6250_:
{
uint8_t v___x_6253_; uint8_t v___x_6254_; uint8_t v___x_6255_; lean_object* v___x_6256_; uint64_t v___x_6257_; lean_object* v___x_6258_; lean_object* v___x_6259_; lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; lean_object* v___x_6263_; lean_object* v___x_6264_; lean_object* v___x_6265_; lean_object* v___x_6266_; lean_object* v___x_6267_; lean_object* v___x_6268_; lean_object* v___x_6269_; uint8_t v_a_6271_; lean_object* v___x_6277_; 
v___x_6253_ = 1;
v___x_6254_ = 0;
v___x_6255_ = 2;
v___x_6256_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_6256_, 0, v___x_6246_);
lean_ctor_set_uint8(v___x_6256_, 1, v___x_6246_);
lean_ctor_set_uint8(v___x_6256_, 2, v___x_6246_);
lean_ctor_set_uint8(v___x_6256_, 3, v___x_6246_);
lean_ctor_set_uint8(v___x_6256_, 4, v___x_6246_);
lean_ctor_set_uint8(v___x_6256_, 5, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 6, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 7, v___x_6246_);
lean_ctor_set_uint8(v___x_6256_, 8, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 9, v___x_6253_);
lean_ctor_set_uint8(v___x_6256_, 10, v___x_6254_);
lean_ctor_set_uint8(v___x_6256_, 11, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 12, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 13, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 14, v___x_6255_);
lean_ctor_set_uint8(v___x_6256_, 15, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 16, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 17, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 18, v___x_6243_);
lean_ctor_set_uint8(v___x_6256_, 19, v___x_6246_);
v___x_6257_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_6256_);
v___x_6258_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_6258_, 0, v___x_6256_);
lean_ctor_set_uint64(v___x_6258_, sizeof(void*)*1, v___x_6257_);
v___x_6259_ = lean_unsigned_to_nat(0u);
v___x_6260_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__2, &l_Lean_Meta_mkInjectiveTheorems___closed__2_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__2);
v___x_6261_ = lean_obj_once(&l_Lean_Meta_mkInjectiveTheorems___closed__3, &l_Lean_Meta_mkInjectiveTheorems___closed__3_once, _init_l_Lean_Meta_mkInjectiveTheorems___closed__3);
v___x_6262_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_));
v___x_6263_ = lean_box(0);
lean_inc(v___x_6227_);
v___x_6264_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6264_, 0, v___x_6258_);
lean_ctor_set(v___x_6264_, 1, v___x_6227_);
lean_ctor_set(v___x_6264_, 2, v___x_6261_);
lean_ctor_set(v___x_6264_, 3, v___x_6262_);
lean_ctor_set(v___x_6264_, 4, v___x_6263_);
lean_ctor_set(v___x_6264_, 5, v___x_6259_);
lean_ctor_set(v___x_6264_, 6, v___x_6263_);
lean_ctor_set_uint8(v___x_6264_, sizeof(void*)*7, v___x_6246_);
lean_ctor_set_uint8(v___x_6264_, sizeof(void*)*7 + 1, v___x_6246_);
lean_ctor_set_uint8(v___x_6264_, sizeof(void*)*7 + 2, v___x_6246_);
lean_ctor_set_uint8(v___x_6264_, sizeof(void*)*7 + 3, v___x_6243_);
v___x_6265_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6266_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__4_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6267_ = lean_obj_once(&l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_, &l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1___closed__5_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_);
v___x_6268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6268_, 0, v___x_6265_);
lean_ctor_set(v___x_6268_, 1, v___x_6266_);
lean_ctor_set(v___x_6268_, 2, v___x_6227_);
lean_ctor_set(v___x_6268_, 3, v___x_6260_);
lean_ctor_set(v___x_6268_, 4, v___x_6267_);
v___x_6269_ = lean_st_mk_ref(v___x_6268_);
lean_inc_ref(v_name_6228_);
v___x_6277_ = l___private_Lean_Meta_Injective_0__Lean_Meta_mkHInjectiveTheorem_x3f(v_name_6228_, v_val_6249_, v___x_6264_, v___x_6269_, v___y_6229_, v___y_6230_);
if (lean_obj_tag(v___x_6277_) == 0)
{
lean_object* v_a_6278_; 
v_a_6278_ = lean_ctor_get(v___x_6277_, 0);
lean_inc(v_a_6278_);
lean_dec_ref_known(v___x_6277_, 1);
if (lean_obj_tag(v_a_6278_) == 1)
{
lean_object* v_val_6279_; lean_object* v___x_6280_; lean_object* v___f_6281_; lean_object* v___x_6282_; 
v_val_6279_ = lean_ctor_get(v_a_6278_, 0);
lean_inc(v_val_6279_);
lean_dec_ref_known(v_a_6278_, 1);
v___x_6280_ = lean_box(v___x_6246_);
v___f_6281_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed), 7, 2);
lean_closure_set(v___f_6281_, 0, v_val_6279_);
lean_closure_set(v___f_6281_, 1, v___x_6280_);
v___x_6282_ = l_Lean_Meta_realizeConst(v_pre_6240_, v_name_6228_, v___f_6281_, v___x_6264_, v___x_6269_, v___y_6229_, v___y_6230_);
lean_dec_ref_known(v___x_6264_, 7);
if (lean_obj_tag(v___x_6282_) == 0)
{
lean_dec_ref_known(v___x_6282_, 1);
v_a_6271_ = v___x_6243_;
goto v___jp_6270_;
}
else
{
lean_object* v_a_6283_; lean_object* v___x_6285_; uint8_t v_isShared_6286_; uint8_t v_isSharedCheck_6290_; 
lean_dec(v___x_6269_);
lean_del_object(v___x_6251_);
v_a_6283_ = lean_ctor_get(v___x_6282_, 0);
v_isSharedCheck_6290_ = !lean_is_exclusive(v___x_6282_);
if (v_isSharedCheck_6290_ == 0)
{
v___x_6285_ = v___x_6282_;
v_isShared_6286_ = v_isSharedCheck_6290_;
goto v_resetjp_6284_;
}
else
{
lean_inc(v_a_6283_);
lean_dec(v___x_6282_);
v___x_6285_ = lean_box(0);
v_isShared_6286_ = v_isSharedCheck_6290_;
goto v_resetjp_6284_;
}
v_resetjp_6284_:
{
lean_object* v___x_6288_; 
if (v_isShared_6286_ == 0)
{
v___x_6288_ = v___x_6285_;
goto v_reusejp_6287_;
}
else
{
lean_object* v_reuseFailAlloc_6289_; 
v_reuseFailAlloc_6289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6289_, 0, v_a_6283_);
v___x_6288_ = v_reuseFailAlloc_6289_;
goto v_reusejp_6287_;
}
v_reusejp_6287_:
{
return v___x_6288_;
}
}
}
}
else
{
lean_dec(v_a_6278_);
lean_dec_ref_known(v___x_6264_, 7);
lean_dec_ref_known(v_name_6228_, 2);
lean_dec(v_pre_6240_);
v_a_6271_ = v___x_6246_;
goto v___jp_6270_;
}
}
else
{
lean_object* v_a_6291_; lean_object* v___x_6293_; uint8_t v_isShared_6294_; uint8_t v_isSharedCheck_6298_; 
lean_dec(v___x_6269_);
lean_dec_ref_known(v___x_6264_, 7);
lean_del_object(v___x_6251_);
lean_dec_ref_known(v_name_6228_, 2);
lean_dec(v_pre_6240_);
v_a_6291_ = lean_ctor_get(v___x_6277_, 0);
v_isSharedCheck_6298_ = !lean_is_exclusive(v___x_6277_);
if (v_isSharedCheck_6298_ == 0)
{
v___x_6293_ = v___x_6277_;
v_isShared_6294_ = v_isSharedCheck_6298_;
goto v_resetjp_6292_;
}
else
{
lean_inc(v_a_6291_);
lean_dec(v___x_6277_);
v___x_6293_ = lean_box(0);
v_isShared_6294_ = v_isSharedCheck_6298_;
goto v_resetjp_6292_;
}
v_resetjp_6292_:
{
lean_object* v___x_6296_; 
if (v_isShared_6294_ == 0)
{
v___x_6296_ = v___x_6293_;
goto v_reusejp_6295_;
}
else
{
lean_object* v_reuseFailAlloc_6297_; 
v_reuseFailAlloc_6297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6297_, 0, v_a_6291_);
v___x_6296_ = v_reuseFailAlloc_6297_;
goto v_reusejp_6295_;
}
v_reusejp_6295_:
{
return v___x_6296_;
}
}
}
v___jp_6270_:
{
lean_object* v___x_6272_; lean_object* v___x_6273_; lean_object* v___x_6275_; 
v___x_6272_ = lean_st_ref_get(v___x_6269_);
lean_dec(v___x_6269_);
lean_dec(v___x_6272_);
v___x_6273_ = lean_box(v_a_6271_);
if (v_isShared_6252_ == 0)
{
lean_ctor_set_tag(v___x_6251_, 0);
lean_ctor_set(v___x_6251_, 0, v___x_6273_);
v___x_6275_ = v___x_6251_;
goto v_reusejp_6274_;
}
else
{
lean_object* v_reuseFailAlloc_6276_; 
v_reuseFailAlloc_6276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6276_, 0, v___x_6273_);
v___x_6275_ = v_reuseFailAlloc_6276_;
goto v_reusejp_6274_;
}
v_reusejp_6274_:
{
return v___x_6275_;
}
}
}
}
else
{
lean_dec(v_val_6248_);
lean_dec(v_pre_6240_);
lean_dec_ref_known(v_name_6228_, 2);
lean_dec(v___x_6227_);
goto v___jp_6232_;
}
}
else
{
lean_dec(v___x_6247_);
lean_dec_ref_known(v_name_6228_, 2);
lean_dec(v_pre_6240_);
lean_dec(v___x_6227_);
goto v___jp_6232_;
}
}
}
else
{
lean_dec(v_name_6228_);
lean_dec(v___x_6227_);
goto v___jp_6236_;
}
v___jp_6232_:
{
uint8_t v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; 
v___x_6233_ = 0;
v___x_6234_ = lean_box(v___x_6233_);
v___x_6235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6235_, 0, v___x_6234_);
return v___x_6235_;
}
v___jp_6236_:
{
uint8_t v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; 
v___x_6237_ = 0;
v___x_6238_ = lean_box(v___x_6237_);
v___x_6239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6239_, 0, v___x_6238_);
return v___x_6239_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v___x_6300_, lean_object* v_name_6301_, lean_object* v___y_6302_, lean_object* v___y_6303_, lean_object* v___y_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(v___x_6300_, v_name_6301_, v___y_6302_, v___y_6303_);
lean_dec(v___y_6303_);
lean_dec_ref(v___y_6302_);
return v_res_6305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_6309_; lean_object* v___x_6310_; 
v___f_6309_ = ((lean_object*)(l___private_Lean_Meta_Injective_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_));
v___x_6310_ = l_Lean_registerReservedNameAction(v___f_6309_);
return v___x_6310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2____boxed(lean_object* v_a_6311_){
_start:
{
lean_object* v_res_6312_; 
v_res_6312_ = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
return v_res_6312_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4151801446____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_genInjectivity = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_genInjectivity);
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_4172903888____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_2395338317____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Injective_0__Lean_Meta_initFn_00___x40_Lean_Meta_Injective_677622092____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Injective(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Injective(builtin);
}
#ifdef __cplusplus
}
#endif
