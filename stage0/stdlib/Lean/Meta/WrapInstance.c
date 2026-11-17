// Lean compiler output
// Module: Lean.Meta.WrapInstance
// Imports: public import Lean.Meta.Closure public import Lean.Meta.SynthInstance public import Lean.Meta.CtorRecognizer public import Lean.Meta.AppBuilder import Lean.Structure import Lean.ExtraModUses
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_compileDecls(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
uint8_t l_Lean_isNonRecStructure(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_List_head_x3f___redArg(lean_object*);
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
lean_object* l_OptionT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_getStructureInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_StructureInfo_getProjFn_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_note(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureParentInfo(lean_object*, lean_object*);
lean_object* l_Lean_findField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getFieldInfo_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "inferInstanceAs"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wrap"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "wrap instance bodies in `inferInstanceAs` and the default `deriving` handler"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "reuseSubInstances"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(10, 196, 243, 125, 230, 240, 101, 207)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "when recursing into sub-instances, reuse existing instances for the target type instead of re-wrapping them, which can be important to avoid non-defeq instance diamonds"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(155, 247, 150, 241, 101, 127, 32, 183)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instances"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(154, 83, 182, 188, 30, 204, 110, 119)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "wrap non-reducible instances in auxiliary definitions to fix their types"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(43, 217, 132, 111, 195, 190, 14, 255)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 203, 50, 196, 213, 242, 67, 10)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(208, 252, 45, 86, 202, 182, 131, 2)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(170, 208, 243, 158, 154, 215, 49, 58)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "wrap data fields in auxiliary definitions to fix their types"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(191, 243, 171, 62, 165, 244, 129, 95)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(221, 185, 124, 149, 229, 249, 47, 175)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(59, 4, 237, 30, 122, 190, 35, 247)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_inferInstanceAs_wrap_data;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "wrapInstance"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 191, 244, 235, 250, 100, 130, 195)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "WrapInstance"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 173, 45, 246, 47, 55, 243, 119)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(185, 135, 228, 210, 15, 68, 162, 204)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(28, 3, 219, 249, 198, 148, 9, 129)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(224, 244, 76, 43, 236, 107, 113, 110)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(173, 218, 192, 96, 244, 90, 226, 106)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(112, 37, 133, 70, 202, 123, 99, 119)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(201, 48, 88, 11, 50, 139, 104, 61)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(89, 200, 58, 34, 117, 240, 39, 228)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 33, 3, 130, 142, 149, 29, 62)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "no such field "};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__0 = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__1;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__2 = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__2_value;
static const lean_ctor_object l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__3 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0;
static const lean_string_object l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__1 = (const lean_object*)&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__1_value;
static const lean_ctor_object l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__2 = (const lean_object*)&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__2_value;
static lean_once_cell_t l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3;
static const lean_string_object l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "could not reduce type `"};
static const lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__4 = (const lean_object*)&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__4_value;
static lean_once_cell_t l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__5;
static const lean_string_object l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__6 = (const lean_object*)&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__6_value;
static lean_once_cell_t l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7;
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "parent type depends on instance fields"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__3_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__4_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__10(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "type: "};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__20(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26_spec__34___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24_spec__29(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24_spec__29___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__26(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__26___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "did not find existing instance for `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_aux"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(239, 43, 245, 0, 252, 151, 26, 151)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "error when attempting to reuse existing instance for `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "using projection of existing instance `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__12(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__0;
static const lean_string_object l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "class is "};
static const lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "did not reduce to constructor application: "};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "using existing instance "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__1;
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__value)} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "found inherited field `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__4;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` from parent `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__6;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "proof field "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__8_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__9;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " does not have expected type "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " but "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__12_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__13;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = ", wrapping in auxiliary theorem: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__14_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__15;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "wrapInstance: incorrect number of arguments for constructor application `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "wrapInstance: `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__4_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` does not unify with the conclusion of `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__6_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26_spec__34(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance___lam__0(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_));
v___x_57_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_));
v___x_58_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_));
v___x_59_ = l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0(v___x_56_, v___x_57_, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4____boxed(lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_();
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_82_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_));
v___x_83_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_));
v___x_84_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_));
v___x_85_ = l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0(v___x_82_, v___x_83_, v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4____boxed(lean_object* v_a_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_();
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_108_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_));
v___x_109_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_));
v___x_110_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_));
v___x_111_ = l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0(v___x_108_, v___x_109_, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4____boxed(lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_();
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_134_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_));
v___x_135_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_));
v___x_136_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_));
v___x_137_ = l_Lean_Option_register___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4__spec__0(v___x_134_, v___x_135_, v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4____boxed(lean_object* v_a_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_();
return v_res_139_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_unsigned_to_nat(3246864463u);
v___x_185_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_186_ = l_Lean_Name_num___override(v___x_185_, v___x_184_);
return v___x_186_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_189_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_);
v___x_190_ = l_Lean_Name_str___override(v___x_189_, v___x_188_);
return v___x_190_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_193_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_);
v___x_194_ = l_Lean_Name_str___override(v___x_193_, v___x_192_);
return v___x_194_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_195_ = lean_unsigned_to_nat(2u);
v___x_196_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_);
v___x_197_ = l_Lean_Name_num___override(v___x_196_, v___x_195_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_199_; uint8_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_199_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_200_ = 0;
v___x_201_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_);
v___x_202_ = l_Lean_registerTraceClass(v___x_199_, v___x_200_, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2____boxed(lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_();
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(lean_object* v_msgData_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v___x_211_; lean_object* v_env_212_; uint8_t v___x_213_; lean_object* v_env_214_; lean_object* v___x_215_; lean_object* v_toCold_216_; lean_object* v_mctx_217_; lean_object* v_lctx_218_; lean_object* v_options_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_211_ = lean_st_ref_get(v___y_209_);
v_env_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc_ref(v_env_212_);
lean_dec(v___x_211_);
v___x_213_ = 0;
v_env_214_ = l_Lean_Environment_setRecordingDeps(v_env_212_, v___x_213_);
v___x_215_ = lean_st_ref_get(v___y_207_);
v_toCold_216_ = lean_ctor_get(v___y_208_, 0);
v_mctx_217_ = lean_ctor_get(v___x_215_, 0);
lean_inc_ref(v_mctx_217_);
lean_dec(v___x_215_);
v_lctx_218_ = lean_ctor_get(v___y_206_, 2);
v_options_219_ = lean_ctor_get(v_toCold_216_, 2);
lean_inc_ref(v_options_219_);
lean_inc_ref(v_lctx_218_);
v___x_220_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_220_, 0, v_env_214_);
lean_ctor_set(v___x_220_, 1, v_mctx_217_);
lean_ctor_set(v___x_220_, 2, v_lctx_218_);
lean_ctor_set(v___x_220_, 3, v_options_219_);
v___x_221_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v_msgData_205_);
v___x_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1___boxed(lean_object* v_msgData_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(v_msgData_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(lean_object* v_msg_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v_ref_236_; lean_object* v___x_237_; lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_246_; 
v_ref_236_ = lean_ctor_get(v___y_233_, 2);
v___x_237_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(v_msg_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_246_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_246_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_246_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_244_; 
lean_inc(v_ref_236_);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v_ref_236_);
lean_ctor_set(v___x_242_, 1, v_a_238_);
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 1);
lean_ctor_set(v___x_240_, 0, v___x_242_);
v___x_244_ = v___x_240_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg___boxed(lean_object* v_msg_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v_msg_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
return v_res_253_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__1(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__0));
v___x_259_ = l_Lean_stringToMessageData(v___x_258_);
return v___x_259_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__3(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__2));
v___x_262_ = l_Lean_stringToMessageData(v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin(lean_object* v_structName_263_, lean_object* v_field_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v___x_270_; lean_object* v_env_271_; lean_object* v___x_272_; lean_object* v___x_273_; size_t v_sz_274_; size_t v___x_275_; lean_object* v___x_276_; 
v___x_270_ = lean_st_ref_get(v_a_268_);
v_env_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc_ref_n(v_env_271_, 3);
lean_dec(v___x_270_);
lean_inc(v_structName_263_);
v___x_272_ = l_Lean_getStructureParentInfo(v_env_271_, v_structName_263_);
v___x_273_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0___closed__0));
v_sz_274_ = lean_array_size(v___x_272_);
v___x_275_ = ((size_t)0ULL);
lean_inc(v_field_264_);
v___x_276_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0(v_env_271_, v_field_264_, v___x_272_, v_sz_274_, v___x_275_, v___x_273_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
lean_dec_ref(v___x_272_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_307_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_307_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_307_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_307_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v_fst_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_305_; 
v_fst_281_ = lean_ctor_get(v_a_277_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v_a_277_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v_a_277_, 1);
lean_dec(v_unused_306_);
v___x_283_ = v_a_277_;
v_isShared_284_ = v_isSharedCheck_305_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_fst_281_);
lean_dec(v_a_277_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_305_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
if (lean_obj_tag(v_fst_281_) == 0)
{
lean_object* v___x_285_; 
lean_inc(v_field_264_);
lean_inc(v_structName_263_);
v___x_285_ = l_Lean_getFieldInfo_x3f(v_env_271_, v_structName_263_, v_field_264_);
if (lean_obj_tag(v___x_285_) == 1)
{
lean_object* v_val_286_; lean_object* v___x_288_; 
lean_dec(v_field_264_);
v_val_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v___x_285_, 1);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v_val_286_);
lean_ctor_set(v___x_283_, 0, v_structName_263_);
v___x_288_ = v___x_283_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_structName_263_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_val_286_);
v___x_288_ = v_reuseFailAlloc_292_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_290_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_288_);
v___x_290_ = v___x_279_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_288_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec(v___x_285_);
lean_del_object(v___x_283_);
lean_del_object(v___x_279_);
v___x_293_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__1, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__1_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__1);
v___x_294_ = l_Lean_MessageData_ofName(v_field_264_);
v___x_295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
v___x_296_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__3, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__3_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___closed__3);
v___x_297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_295_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
v___x_298_ = l_Lean_MessageData_ofName(v_structName_263_);
v___x_299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v___x_299_, v_a_265_, v_a_266_, v_a_267_, v_a_268_);
return v___x_300_;
}
}
else
{
lean_object* v_val_301_; lean_object* v___x_303_; 
lean_del_object(v___x_283_);
lean_dec_ref(v_env_271_);
lean_dec(v_field_264_);
lean_dec(v_structName_263_);
v_val_301_ = lean_ctor_get(v_fst_281_, 0);
lean_inc(v_val_301_);
lean_dec_ref_known(v_fst_281_, 1);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v_val_301_);
v___x_303_ = v___x_279_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_val_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v_env_271_);
lean_dec(v_field_264_);
lean_dec(v_structName_263_);
v_a_308_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_276_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_276_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0(lean_object* v___x_316_, lean_object* v_field_317_, lean_object* v_as_318_, size_t v_sz_319_, size_t v_i_320_, lean_object* v_b_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
uint8_t v___x_327_; 
v___x_327_ = lean_usize_dec_lt(v_i_320_, v_sz_319_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; 
lean_dec(v_field_317_);
lean_dec_ref(v___x_316_);
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v_b_321_);
return v___x_328_;
}
else
{
lean_object* v_a_329_; lean_object* v_structName_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
lean_dec_ref(v_b_321_);
v_a_329_ = lean_array_uget_borrowed(v_as_318_, v_i_320_);
v_structName_330_ = lean_ctor_get(v_a_329_, 0);
v___x_331_ = lean_box(0);
lean_inc(v_structName_330_);
lean_inc_ref(v___x_316_);
v___x_332_ = l_Lean_findField_x3f(v___x_316_, v_structName_330_, v_field_317_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v___x_333_; size_t v___x_334_; size_t v___x_335_; 
v___x_333_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0___closed__0));
v___x_334_ = ((size_t)1ULL);
v___x_335_ = lean_usize_add(v_i_320_, v___x_334_);
v_i_320_ = v___x_335_;
v_b_321_ = v___x_333_;
goto _start;
}
else
{
lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_361_; 
lean_dec_ref(v___x_316_);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_361_ == 0)
{
lean_object* v_unused_362_; 
v_unused_362_ = lean_ctor_get(v___x_332_, 0);
lean_dec(v_unused_362_);
v___x_338_ = v___x_332_;
v_isShared_339_ = v_isSharedCheck_361_;
goto v_resetjp_337_;
}
else
{
lean_dec(v___x_332_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_361_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; 
lean_inc(v_structName_330_);
v___x_340_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin(v_structName_330_, v_field_317_, v___y_322_, v___y_323_, v___y_324_, v___y_325_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_352_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_352_ == 0)
{
v___x_343_ = v___x_340_;
v_isShared_344_ = v_isSharedCheck_352_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_352_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 0, v_a_341_);
v___x_346_ = v___x_338_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_351_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_331_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v___x_347_);
v___x_349_ = v___x_343_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_del_object(v___x_338_);
v_a_353_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_340_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_340_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0___boxed(lean_object* v___x_363_, lean_object* v_field_364_, lean_object* v_as_365_, lean_object* v_sz_366_, lean_object* v_i_367_, lean_object* v_b_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
size_t v_sz_boxed_374_; size_t v_i_boxed_375_; lean_object* v_res_376_; 
v_sz_boxed_374_ = lean_unbox_usize(v_sz_366_);
lean_dec(v_sz_366_);
v_i_boxed_375_ = lean_unbox_usize(v_i_367_);
lean_dec(v_i_367_);
v_res_376_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__0(v___x_363_, v_field_364_, v_as_365_, v_sz_boxed_374_, v_i_boxed_375_, v_b_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec_ref(v_as_365_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin___boxed(lean_object* v_structName_377_, lean_object* v_field_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin(v_structName_377_, v_field_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1(lean_object* v_00_u03b1_385_, lean_object* v_msg_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v_msg_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___boxed(lean_object* v_00_u03b1_393_, lean_object* v_msg_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1(v_00_u03b1_393_, v_msg_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
return v_res_400_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_401_; double v___x_402_; 
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = lean_float_of_nat(v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0(lean_object* v_cls_408_, lean_object* v_msg_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_ref_415_; lean_object* v___x_416_; lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_462_; 
v_ref_415_ = lean_ctor_get(v___y_412_, 2);
v___x_416_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(v_msg_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_462_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_462_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_462_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_421_; lean_object* v_traceState_422_; lean_object* v_env_423_; lean_object* v_nextMacroScope_424_; lean_object* v_ngen_425_; lean_object* v_auxDeclNGen_426_; lean_object* v_cache_427_; lean_object* v_recordedDeps_428_; lean_object* v_messages_429_; lean_object* v_infoState_430_; lean_object* v_snapshotTasks_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_461_; 
v___x_421_ = lean_st_ref_take(v___y_413_);
v_traceState_422_ = lean_ctor_get(v___x_421_, 4);
v_env_423_ = lean_ctor_get(v___x_421_, 0);
v_nextMacroScope_424_ = lean_ctor_get(v___x_421_, 1);
v_ngen_425_ = lean_ctor_get(v___x_421_, 2);
v_auxDeclNGen_426_ = lean_ctor_get(v___x_421_, 3);
v_cache_427_ = lean_ctor_get(v___x_421_, 5);
v_recordedDeps_428_ = lean_ctor_get(v___x_421_, 6);
v_messages_429_ = lean_ctor_get(v___x_421_, 7);
v_infoState_430_ = lean_ctor_get(v___x_421_, 8);
v_snapshotTasks_431_ = lean_ctor_get(v___x_421_, 9);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_461_ == 0)
{
v___x_433_ = v___x_421_;
v_isShared_434_ = v_isSharedCheck_461_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_snapshotTasks_431_);
lean_inc(v_infoState_430_);
lean_inc(v_messages_429_);
lean_inc(v_recordedDeps_428_);
lean_inc(v_cache_427_);
lean_inc(v_traceState_422_);
lean_inc(v_auxDeclNGen_426_);
lean_inc(v_ngen_425_);
lean_inc(v_nextMacroScope_424_);
lean_inc(v_env_423_);
lean_dec(v___x_421_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_461_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
uint64_t v_tid_435_; lean_object* v_traces_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_460_; 
v_tid_435_ = lean_ctor_get_uint64(v_traceState_422_, sizeof(void*)*1);
v_traces_436_ = lean_ctor_get(v_traceState_422_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v_traceState_422_);
if (v_isSharedCheck_460_ == 0)
{
v___x_438_ = v_traceState_422_;
v_isShared_439_ = v_isSharedCheck_460_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_traces_436_);
lean_dec(v_traceState_422_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_460_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; double v___x_441_; uint8_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_440_ = lean_box(0);
v___x_441_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0);
v___x_442_ = 0;
v___x_443_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__1));
v___x_444_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_444_, 0, v_cls_408_);
lean_ctor_set(v___x_444_, 1, v___x_440_);
lean_ctor_set(v___x_444_, 2, v___x_443_);
lean_ctor_set_float(v___x_444_, sizeof(void*)*3, v___x_441_);
lean_ctor_set_float(v___x_444_, sizeof(void*)*3 + 8, v___x_441_);
lean_ctor_set_uint8(v___x_444_, sizeof(void*)*3 + 16, v___x_442_);
v___x_445_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__2));
v___x_446_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v_a_417_);
lean_ctor_set(v___x_446_, 2, v___x_445_);
lean_inc(v_ref_415_);
v___x_447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_447_, 0, v_ref_415_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = l_Lean_PersistentArray_push___redArg(v_traces_436_, v___x_447_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 0, v___x_448_);
v___x_450_ = v___x_438_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_448_);
lean_ctor_set_uint64(v_reuseFailAlloc_459_, sizeof(void*)*1, v_tid_435_);
v___x_450_ = v_reuseFailAlloc_459_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_452_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 4, v___x_450_);
v___x_452_ = v___x_433_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_env_423_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_nextMacroScope_424_);
lean_ctor_set(v_reuseFailAlloc_458_, 2, v_ngen_425_);
lean_ctor_set(v_reuseFailAlloc_458_, 3, v_auxDeclNGen_426_);
lean_ctor_set(v_reuseFailAlloc_458_, 4, v___x_450_);
lean_ctor_set(v_reuseFailAlloc_458_, 5, v_cache_427_);
lean_ctor_set(v_reuseFailAlloc_458_, 6, v_recordedDeps_428_);
lean_ctor_set(v_reuseFailAlloc_458_, 7, v_messages_429_);
lean_ctor_set(v_reuseFailAlloc_458_, 8, v_infoState_430_);
lean_ctor_set(v_reuseFailAlloc_458_, 9, v_snapshotTasks_431_);
v___x_452_ = v_reuseFailAlloc_458_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_453_ = lean_st_ref_put(v___y_413_, v___x_452_);
v___x_454_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__3));
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 0, v___x_454_);
v___x_456_ = v___x_419_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___boxed(lean_object* v_cls_463_, lean_object* v_msg_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0(v_cls_463_, v_msg_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
return v_res_470_;
}
}
static lean_object* _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0(void){
_start:
{
lean_object* v___x_471_; lean_object* v_dummy_472_; 
v___x_471_ = lean_box(0);
v_dummy_472_ = l_Lean_Expr_sort___override(v___x_471_);
return v_dummy_472_;
}
}
static lean_object* _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_476_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_477_ = ((lean_object*)(l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__2));
v___x_478_ = l_Lean_Name_append(v___x_477_, v___x_476_);
return v___x_478_;
}
}
static lean_object* _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__5(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = ((lean_object*)(l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__4));
v___x_481_ = l_Lean_stringToMessageData(v___x_480_);
return v___x_481_;
}
}
static lean_object* _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = ((lean_object*)(l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__6));
v___x_484_ = l_Lean_stringToMessageData(v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1(lean_object* v_x_485_, lean_object* v_x_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_495_, 0, v_x_485_);
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
else
{
lean_object* v_head_497_; lean_object* v_tail_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_557_; 
v_head_497_ = lean_ctor_get(v_x_486_, 0);
v_tail_498_ = lean_ctor_get(v_x_486_, 1);
v_isSharedCheck_557_ = !lean_is_exclusive(v_x_486_);
if (v_isSharedCheck_557_ == 0)
{
v___x_500_ = v_x_486_;
v_isShared_501_ = v_isSharedCheck_557_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_tail_498_);
lean_inc(v_head_497_);
lean_dec(v_x_486_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_557_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; 
lean_inc(v___y_490_);
lean_inc_ref(v___y_489_);
lean_inc(v___y_488_);
lean_inc_ref(v___y_487_);
lean_inc_ref(v_x_485_);
v___x_502_ = lean_infer_type(v_x_485_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_504_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_502_, 1);
lean_inc(v___y_490_);
lean_inc_ref(v___y_489_);
lean_inc(v___y_488_);
lean_inc_ref(v___y_487_);
v___x_504_ = lean_whnf(v_a_503_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_506_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_a_505_);
lean_dec_ref_known(v___x_504_, 1);
v___x_506_ = l_Lean_Expr_getAppFn(v_a_505_);
if (lean_obj_tag(v___x_506_) == 4)
{
lean_object* v_us_507_; lean_object* v_dummy_508_; lean_object* v_nargs_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
lean_del_object(v___x_500_);
v_us_507_ = lean_ctor_get(v___x_506_, 1);
lean_inc(v_us_507_);
lean_dec_ref_known(v___x_506_, 2);
v_dummy_508_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0);
v_nargs_509_ = l_Lean_Expr_getAppNumArgs(v_a_505_);
lean_inc(v_nargs_509_);
v___x_510_ = lean_mk_array(v_nargs_509_, v_dummy_508_);
v___x_511_ = lean_unsigned_to_nat(1u);
v___x_512_ = lean_nat_sub(v_nargs_509_, v___x_511_);
lean_dec(v_nargs_509_);
v___x_513_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_505_, v___x_510_, v___x_512_);
v___x_514_ = l_Lean_Expr_const___override(v_head_497_, v_us_507_);
v___x_515_ = l_Lean_mkAppN(v___x_514_, v___x_513_);
lean_dec_ref(v___x_513_);
v___x_516_ = l_Lean_Expr_app___override(v___x_515_, v_x_485_);
v_x_485_ = v___x_516_;
v_x_486_ = v_tail_498_;
goto _start;
}
else
{
lean_object* v_toCold_518_; lean_object* v_options_519_; uint8_t v_hasTrace_520_; 
lean_dec_ref(v___x_506_);
lean_dec(v_tail_498_);
lean_dec(v_head_497_);
lean_dec_ref(v_x_485_);
v_toCold_518_ = lean_ctor_get(v___y_489_, 0);
v_options_519_ = lean_ctor_get(v_toCold_518_, 2);
v_hasTrace_520_ = lean_ctor_get_uint8(v_options_519_, sizeof(void*)*1);
if (v_hasTrace_520_ == 0)
{
lean_dec(v_a_505_);
lean_del_object(v___x_500_);
goto v___jp_492_;
}
else
{
lean_object* v_inheritedTraceOptions_521_; lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v_inheritedTraceOptions_521_ = lean_ctor_get(v_toCold_518_, 11);
v___x_522_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_523_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3);
v___x_524_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_521_, v_options_519_, v___x_523_);
if (v___x_524_ == 0)
{
lean_dec(v_a_505_);
lean_del_object(v___x_500_);
goto v___jp_492_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_525_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__5, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__5_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__5);
v___x_526_ = l_Lean_MessageData_ofExpr(v_a_505_);
if (v_isShared_501_ == 0)
{
lean_ctor_set_tag(v___x_500_, 7);
lean_ctor_set(v___x_500_, 1, v___x_526_);
lean_ctor_set(v___x_500_, 0, v___x_525_);
v___x_528_ = v___x_500_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_525_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v___x_526_);
v___x_528_ = v_reuseFailAlloc_540_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0(v___x_522_, v___x_530_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_dec_ref_known(v___x_531_, 1);
goto v___jp_492_;
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
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
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_del_object(v___x_500_);
lean_dec(v_tail_498_);
lean_dec(v_head_497_);
lean_dec_ref(v_x_485_);
v_a_541_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_504_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_504_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_del_object(v___x_500_);
lean_dec(v_tail_498_);
lean_dec(v_head_497_);
lean_dec_ref(v_x_485_);
v_a_549_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_502_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_502_);
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
}
v___jp_492_:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = lean_box(0);
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___boxed(lean_object* v_x_558_, lean_object* v_x_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1(v_x_558_, v_x_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
return v_res_565_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__0));
v___x_568_ = l_Lean_stringToMessageData(v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0(lean_object* v_val_569_, lean_object* v_self_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v___x_579_; 
lean_inc_ref(v_self_570_);
v___x_579_ = l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1(v_self_570_, v_val_569_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_580_);
if (lean_obj_tag(v_a_580_) == 0)
{
lean_dec_ref(v_self_570_);
return v___x_579_;
}
else
{
lean_object* v_val_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_636_; 
lean_dec_ref_known(v___x_579_, 1);
v_val_581_ = lean_ctor_get(v_a_580_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v_a_580_);
if (v_isSharedCheck_636_ == 0)
{
v___x_583_ = v_a_580_;
v_isShared_584_ = v_isSharedCheck_636_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_val_581_);
lean_dec(v_a_580_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_636_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; 
lean_inc(v___y_574_);
lean_inc_ref(v___y_573_);
lean_inc(v___y_572_);
lean_inc_ref(v___y_571_);
v___x_585_ = lean_infer_type(v_val_581_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_587_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
lean_inc(v___y_574_);
lean_inc_ref(v___y_573_);
lean_inc(v___y_572_);
lean_inc_ref(v___y_571_);
v___x_587_ = lean_whnf(v_a_586_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_619_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_619_ == 0)
{
v___x_590_ = v___x_587_;
v_isShared_591_ = v_isSharedCheck_619_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_587_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_619_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = l_Lean_Expr_fvarId_x21(v_self_570_);
lean_dec_ref(v_self_570_);
v___x_593_ = l_Lean_Expr_containsFVar(v_a_588_, v___x_592_);
lean_dec(v___x_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_595_; 
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v_a_588_);
v___x_595_ = v___x_583_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_588_);
v___x_595_ = v_reuseFailAlloc_599_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
lean_object* v___x_597_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v___x_595_);
v___x_597_ = v___x_590_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
else
{
lean_object* v_toCold_600_; lean_object* v_options_601_; uint8_t v_hasTrace_602_; 
lean_del_object(v___x_590_);
lean_del_object(v___x_583_);
v_toCold_600_ = lean_ctor_get(v___y_573_, 0);
v_options_601_ = lean_ctor_get(v_toCold_600_, 2);
v_hasTrace_602_ = lean_ctor_get_uint8(v_options_601_, sizeof(void*)*1);
if (v_hasTrace_602_ == 0)
{
lean_dec(v_a_588_);
goto v___jp_576_;
}
else
{
lean_object* v_inheritedTraceOptions_603_; lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; 
v_inheritedTraceOptions_603_ = lean_ctor_get(v_toCold_600_, 11);
v___x_604_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_605_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3);
v___x_606_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_603_, v_options_601_, v___x_605_);
if (v___x_606_ == 0)
{
lean_dec(v_a_588_);
goto v___jp_576_;
}
else
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_607_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__1, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__1_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___closed__1);
v___x_608_ = l_Lean_indentExpr(v_a_588_);
v___x_609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_607_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
v___x_610_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0(v___x_604_, v___x_609_, v___y_571_, v___y_572_, v___y_573_, v___y_574_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_dec_ref_known(v___x_610_, 1);
goto v___jp_576_;
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_610_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
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
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
lean_del_object(v___x_583_);
lean_dec_ref(v_self_570_);
v_a_620_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_587_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_587_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_del_object(v___x_583_);
lean_dec_ref(v_self_570_);
v_a_628_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_585_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_585_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_self_570_);
return v___x_579_;
}
v___jp_576_:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_box(0);
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
return v___x_578_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___boxed(lean_object* v_val_637_, lean_object* v_self_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0(v_val_637_, v_self_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___lam__0(lean_object* v_k_645_, lean_object* v_b_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v___x_652_; 
lean_inc(v___y_650_);
lean_inc_ref(v___y_649_);
lean_inc(v___y_648_);
lean_inc_ref(v___y_647_);
v___x_652_ = lean_apply_6(v_k_645_, v_b_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, lean_box(0));
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v_k_653_, lean_object* v_b_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___lam__0(v_k_653_, v_b_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg(lean_object* v_name_661_, uint8_t v_bi_662_, lean_object* v_type_663_, lean_object* v_k_664_, uint8_t v_kind_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___f_671_; lean_object* v___x_672_; 
v___f_671_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_671_, 0, v_k_664_);
v___x_672_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_661_, v_bi_662_, v_type_663_, v___f_671_, v_kind_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
if (lean_obj_tag(v___x_672_) == 0)
{
return v___x_672_;
}
else
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg___boxed(lean_object* v_name_681_, lean_object* v_bi_682_, lean_object* v_type_683_, lean_object* v_k_684_, lean_object* v_kind_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
uint8_t v_bi_boxed_691_; uint8_t v_kind_boxed_692_; lean_object* v_res_693_; 
v_bi_boxed_691_ = lean_unbox(v_bi_682_);
v_kind_boxed_692_ = lean_unbox(v_kind_685_);
v_res_693_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg(v_name_681_, v_bi_boxed_691_, v_type_683_, v_k_684_, v_kind_boxed_692_, v___y_686_, v___y_687_, v___y_688_, v___y_689_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___redArg(lean_object* v_name_694_, lean_object* v_type_695_, lean_object* v_k_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
uint8_t v___x_702_; uint8_t v___x_703_; lean_object* v___x_704_; 
v___x_702_ = 0;
v___x_703_ = 0;
v___x_704_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg(v_name_694_, v___x_702_, v_type_695_, v_k_696_, v___x_703_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___redArg___boxed(lean_object* v_name_705_, lean_object* v_type_706_, lean_object* v_k_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___redArg(v_name_705_, v_type_706_, v_k_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f(lean_object* v_structName_717_, lean_object* v_parentStructName_718_, lean_object* v_structType_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
lean_object* v___x_725_; lean_object* v_env_726_; lean_object* v___x_727_; 
v___x_725_ = lean_st_ref_get(v_a_723_);
v_env_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc_ref(v_env_726_);
lean_dec(v___x_725_);
v___x_727_ = l_Lean_getPathToBaseStructure_x3f(v_env_726_, v_parentStructName_718_, v_structName_717_);
if (lean_obj_tag(v___x_727_) == 1)
{
lean_object* v_val_728_; lean_object* v___f_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_val_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_val_728_);
lean_dec_ref_known(v___x_727_, 1);
v___f_729_ = lean_alloc_closure((void*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___lam__0___boxed), 7, 1);
lean_closure_set(v___f_729_, 0, v_val_728_);
v___x_730_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___closed__1));
v___x_731_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___redArg(v___x_730_, v_structType_719_, v___f_729_, v_a_720_, v_a_721_, v_a_722_, v_a_723_);
return v___x_731_;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; 
lean_dec(v___x_727_);
lean_dec_ref(v_structType_719_);
v___x_732_ = lean_box(0);
v___x_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
return v___x_733_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f___boxed(lean_object* v_structName_734_, lean_object* v_parentStructName_735_, lean_object* v_structType_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f(v_structName_734_, v_parentStructName_735_, v_structType_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_);
lean_dec(v_a_740_);
lean_dec_ref(v_a_739_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_parentStructName_735_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2(lean_object* v_00_u03b1_743_, lean_object* v_name_744_, uint8_t v_bi_745_, lean_object* v_type_746_, lean_object* v_k_747_, uint8_t v_kind_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___redArg(v_name_744_, v_bi_745_, v_type_746_, v_k_747_, v_kind_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2___boxed(lean_object* v_00_u03b1_755_, lean_object* v_name_756_, lean_object* v_bi_757_, lean_object* v_type_758_, lean_object* v_k_759_, lean_object* v_kind_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
uint8_t v_bi_boxed_766_; uint8_t v_kind_boxed_767_; lean_object* v_res_768_; 
v_bi_boxed_766_ = lean_unbox(v_bi_757_);
v_kind_boxed_767_ = lean_unbox(v_kind_760_);
v_res_768_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2_spec__2(v_00_u03b1_755_, v_name_756_, v_bi_boxed_766_, v_type_758_, v_k_759_, v_kind_boxed_767_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2(lean_object* v_00_u03b1_769_, lean_object* v_name_770_, lean_object* v_type_771_, lean_object* v_k_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___redArg(v_name_770_, v_type_771_, v_k_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2___boxed(lean_object* v_00_u03b1_779_, lean_object* v_name_780_, lean_object* v_type_781_, lean_object* v_k_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__2(v_00_u03b1_779_, v_name_780_, v_type_781_, v_k_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___redArg(lean_object* v_e_789_, lean_object* v___y_790_){
_start:
{
uint8_t v___x_792_; 
v___x_792_ = l_Lean_Expr_hasMVar(v_e_789_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_793_, 0, v_e_789_);
v___x_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
return v___x_794_;
}
else
{
lean_object* v___x_795_; lean_object* v_mctx_796_; lean_object* v___x_797_; lean_object* v_fst_798_; lean_object* v_snd_799_; lean_object* v___x_800_; lean_object* v_cache_801_; lean_object* v_zetaDeltaFVarIds_802_; lean_object* v_postponed_803_; lean_object* v_diag_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_814_; 
v___x_795_ = lean_st_ref_get(v___y_790_);
v_mctx_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc_ref(v_mctx_796_);
lean_dec(v___x_795_);
v___x_797_ = l_Lean_instantiateMVarsCore(v_mctx_796_, v_e_789_);
v_fst_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_fst_798_);
v_snd_799_ = lean_ctor_get(v___x_797_, 1);
lean_inc(v_snd_799_);
lean_dec_ref(v___x_797_);
v___x_800_ = lean_st_ref_take(v___y_790_);
v_cache_801_ = lean_ctor_get(v___x_800_, 1);
v_zetaDeltaFVarIds_802_ = lean_ctor_get(v___x_800_, 2);
v_postponed_803_ = lean_ctor_get(v___x_800_, 3);
v_diag_804_ = lean_ctor_get(v___x_800_, 4);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_814_ == 0)
{
lean_object* v_unused_815_; 
v_unused_815_ = lean_ctor_get(v___x_800_, 0);
lean_dec(v_unused_815_);
v___x_806_ = v___x_800_;
v_isShared_807_ = v_isSharedCheck_814_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_diag_804_);
lean_inc(v_postponed_803_);
lean_inc(v_zetaDeltaFVarIds_802_);
lean_inc(v_cache_801_);
lean_dec(v___x_800_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_814_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v_snd_799_);
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_snd_799_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v_cache_801_);
lean_ctor_set(v_reuseFailAlloc_813_, 2, v_zetaDeltaFVarIds_802_);
lean_ctor_set(v_reuseFailAlloc_813_, 3, v_postponed_803_);
lean_ctor_set(v_reuseFailAlloc_813_, 4, v_diag_804_);
v___x_809_ = v_reuseFailAlloc_813_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_810_ = lean_st_ref_put(v___y_790_, v___x_809_);
v___x_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_811_, 0, v_fst_798_);
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___redArg___boxed(lean_object* v_e_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___redArg(v_e_816_, v___y_817_);
lean_dec(v___y_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0(lean_object* v_e_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___redArg(v_e_820_, v___y_822_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___boxed(lean_object* v_e_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0(v_e_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg(lean_object* v_msg_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v_ref_840_; lean_object* v___x_841_; lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_850_; 
v_ref_840_ = lean_ctor_get(v___y_837_, 2);
v___x_841_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(v_msg_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_850_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_850_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_850_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_846_; lean_object* v___x_848_; 
lean_inc(v_ref_840_);
v___x_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_846_, 0, v_ref_840_);
lean_ctor_set(v___x_846_, 1, v_a_842_);
if (v_isShared_845_ == 0)
{
lean_ctor_set_tag(v___x_844_, 1);
lean_ctor_set(v___x_844_, 0, v___x_846_);
v___x_848_ = v___x_844_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_msg_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg(v_msg_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
return v_res_857_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = l_instMonadEIO___redArg();
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3(lean_object* v_msg_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v_toApplicative_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_942_; 
v___x_869_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__0);
v___x_870_ = l_StateRefT_x27_instMonad___redArg(v___x_869_);
v_toApplicative_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_870_, 1);
lean_dec(v_unused_943_);
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_942_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_toApplicative_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_942_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v_toFunctor_875_; lean_object* v_toSeq_876_; lean_object* v_toSeqLeft_877_; lean_object* v_toSeqRight_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_940_; 
v_toFunctor_875_ = lean_ctor_get(v_toApplicative_871_, 0);
v_toSeq_876_ = lean_ctor_get(v_toApplicative_871_, 2);
v_toSeqLeft_877_ = lean_ctor_get(v_toApplicative_871_, 3);
v_toSeqRight_878_ = lean_ctor_get(v_toApplicative_871_, 4);
v_isSharedCheck_940_ = !lean_is_exclusive(v_toApplicative_871_);
if (v_isSharedCheck_940_ == 0)
{
lean_object* v_unused_941_; 
v_unused_941_ = lean_ctor_get(v_toApplicative_871_, 1);
lean_dec(v_unused_941_);
v___x_880_ = v_toApplicative_871_;
v_isShared_881_ = v_isSharedCheck_940_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_toSeqRight_878_);
lean_inc(v_toSeqLeft_877_);
lean_inc(v_toSeq_876_);
lean_inc(v_toFunctor_875_);
lean_dec(v_toApplicative_871_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_940_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___f_882_; lean_object* v___f_883_; lean_object* v___f_884_; lean_object* v___f_885_; lean_object* v___x_886_; lean_object* v___f_887_; lean_object* v___f_888_; lean_object* v___f_889_; lean_object* v___x_891_; 
v___f_882_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__1));
v___f_883_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__2));
lean_inc_ref(v_toFunctor_875_);
v___f_884_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_884_, 0, v_toFunctor_875_);
v___f_885_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_885_, 0, v_toFunctor_875_);
v___x_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_886_, 0, v___f_884_);
lean_ctor_set(v___x_886_, 1, v___f_885_);
v___f_887_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_887_, 0, v_toSeqRight_878_);
v___f_888_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_888_, 0, v_toSeqLeft_877_);
v___f_889_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_889_, 0, v_toSeq_876_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 4, v___f_887_);
lean_ctor_set(v___x_880_, 3, v___f_888_);
lean_ctor_set(v___x_880_, 2, v___f_889_);
lean_ctor_set(v___x_880_, 1, v___f_882_);
lean_ctor_set(v___x_880_, 0, v___x_886_);
v___x_891_ = v___x_880_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v___f_882_);
lean_ctor_set(v_reuseFailAlloc_939_, 2, v___f_889_);
lean_ctor_set(v_reuseFailAlloc_939_, 3, v___f_888_);
lean_ctor_set(v_reuseFailAlloc_939_, 4, v___f_887_);
v___x_891_ = v_reuseFailAlloc_939_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
lean_object* v___x_893_; 
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 1, v___f_883_);
lean_ctor_set(v___x_873_, 0, v___x_891_);
v___x_893_ = v___x_873_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_891_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v___f_883_);
v___x_893_ = v_reuseFailAlloc_938_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
lean_object* v___x_894_; lean_object* v_toApplicative_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_936_; 
v___x_894_ = l_StateRefT_x27_instMonad___redArg(v___x_893_);
v_toApplicative_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_936_ == 0)
{
lean_object* v_unused_937_; 
v_unused_937_ = lean_ctor_get(v___x_894_, 1);
lean_dec(v_unused_937_);
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_936_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_toApplicative_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_936_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v_toFunctor_899_; lean_object* v_toSeq_900_; lean_object* v_toSeqLeft_901_; lean_object* v_toSeqRight_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_934_; 
v_toFunctor_899_ = lean_ctor_get(v_toApplicative_895_, 0);
v_toSeq_900_ = lean_ctor_get(v_toApplicative_895_, 2);
v_toSeqLeft_901_ = lean_ctor_get(v_toApplicative_895_, 3);
v_toSeqRight_902_ = lean_ctor_get(v_toApplicative_895_, 4);
v_isSharedCheck_934_ = !lean_is_exclusive(v_toApplicative_895_);
if (v_isSharedCheck_934_ == 0)
{
lean_object* v_unused_935_; 
v_unused_935_ = lean_ctor_get(v_toApplicative_895_, 1);
lean_dec(v_unused_935_);
v___x_904_ = v_toApplicative_895_;
v_isShared_905_ = v_isSharedCheck_934_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_toSeqRight_902_);
lean_inc(v_toSeqLeft_901_);
lean_inc(v_toSeq_900_);
lean_inc(v_toFunctor_899_);
lean_dec(v_toApplicative_895_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_934_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___f_906_; lean_object* v___f_907_; lean_object* v___f_908_; lean_object* v___f_909_; lean_object* v___x_910_; lean_object* v___f_911_; lean_object* v___f_912_; lean_object* v___f_913_; lean_object* v___x_915_; 
v___f_906_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__3));
v___f_907_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___closed__4));
lean_inc_ref(v_toFunctor_899_);
v___f_908_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_908_, 0, v_toFunctor_899_);
v___f_909_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_909_, 0, v_toFunctor_899_);
v___x_910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_910_, 0, v___f_908_);
lean_ctor_set(v___x_910_, 1, v___f_909_);
v___f_911_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_911_, 0, v_toSeqRight_902_);
v___f_912_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_912_, 0, v_toSeqLeft_901_);
v___f_913_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_913_, 0, v_toSeq_900_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 4, v___f_911_);
lean_ctor_set(v___x_904_, 3, v___f_912_);
lean_ctor_set(v___x_904_, 2, v___f_913_);
lean_ctor_set(v___x_904_, 1, v___f_906_);
lean_ctor_set(v___x_904_, 0, v___x_910_);
v___x_915_ = v___x_904_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_910_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v___f_906_);
lean_ctor_set(v_reuseFailAlloc_933_, 2, v___f_913_);
lean_ctor_set(v_reuseFailAlloc_933_, 3, v___f_912_);
lean_ctor_set(v_reuseFailAlloc_933_, 4, v___f_911_);
v___x_915_ = v_reuseFailAlloc_933_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_917_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v___f_907_);
lean_ctor_set(v___x_897_, 0, v___x_915_);
v___x_917_ = v___x_897_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_915_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v___f_907_);
v___x_917_ = v_reuseFailAlloc_932_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___f_918_; lean_object* v___f_919_; lean_object* v___f_920_; lean_object* v___f_921_; lean_object* v___f_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_22623__overap_930_; lean_object* v___x_931_; 
lean_inc_ref_n(v___x_917_, 6);
v___f_918_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_918_, 0, v___x_917_);
v___f_919_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_919_, 0, v___x_917_);
v___f_920_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_920_, 0, v___x_917_);
v___f_921_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_921_, 0, v___x_917_);
v___f_922_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_922_, 0, v___x_917_);
v___x_923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_923_, 0, v___f_918_);
lean_ctor_set(v___x_923_, 1, v___f_919_);
v___x_924_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_924_, 0, lean_box(0));
lean_closure_set(v___x_924_, 1, v___x_917_);
v___x_925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_925_, 0, v___x_923_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
lean_ctor_set(v___x_925_, 2, v___f_920_);
lean_ctor_set(v___x_925_, 3, v___f_921_);
lean_ctor_set(v___x_925_, 4, v___f_922_);
v___x_926_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_926_, 0, lean_box(0));
lean_closure_set(v___x_926_, 1, v___x_917_);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_box(0);
v___x_929_ = l_instInhabitedOfMonad___redArg(v___x_927_, v___x_928_);
v___x_22623__overap_930_ = lean_panic_fn_borrowed(v___x_929_, v_msg_863_);
lean_dec(v___x_929_);
lean_inc(v___y_867_);
lean_inc_ref(v___y_866_);
lean_inc(v___y_865_);
lean_inc_ref(v___y_864_);
v___x_931_ = lean_apply_5(v___x_22623__overap_930_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, lean_box(0));
return v___x_931_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3___boxed(lean_object* v_msg_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3(v_msg_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
return v_res_950_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__1(void){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__0));
v___x_953_ = l_Lean_stringToMessageData(v___x_952_);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__5(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_957_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__4));
v___x_958_ = lean_unsigned_to_nat(11u);
v___x_959_ = lean_unsigned_to_nat(122u);
v___x_960_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__3));
v___x_961_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__2));
v___x_962_ = l_mkPanicMessageWithDecl(v___x_961_, v___x_960_, v___x_959_, v___x_958_, v___x_957_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2(lean_object* v_constName_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___x_977_; lean_object* v_env_978_; uint8_t v___x_979_; lean_object* v___x_980_; 
v___x_977_ = lean_st_ref_get(v___y_967_);
v_env_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc_ref(v_env_978_);
lean_dec(v___x_977_);
v___x_979_ = 0;
lean_inc(v_constName_963_);
v___x_980_ = l_Lean_Environment_findAsync_x3f(v_env_978_, v_constName_963_, v___x_979_);
if (lean_obj_tag(v___x_980_) == 1)
{
lean_object* v_val_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_1021_; 
v_val_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_1021_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_val_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_1021_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
uint8_t v_kind_985_; 
v_kind_985_ = lean_ctor_get_uint8(v_val_981_, sizeof(void*)*3);
if (v_kind_985_ == 6)
{
lean_object* v___x_986_; 
v___x_986_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_981_);
if (lean_obj_tag(v___x_986_) == 6)
{
lean_object* v_val_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_997_; 
lean_dec(v_constName_963_);
v_val_987_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_997_ == 0)
{
v___x_989_ = v___x_986_;
v_isShared_990_ = v_isSharedCheck_997_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_val_987_);
lean_dec(v___x_986_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_997_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v_val_987_);
v___x_992_ = v___x_983_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_val_987_);
v___x_992_ = v_reuseFailAlloc_996_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
lean_object* v___x_994_; 
if (v_isShared_990_ == 0)
{
lean_ctor_set_tag(v___x_989_, 0);
lean_ctor_set(v___x_989_, 0, v___x_992_);
v___x_994_ = v___x_989_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
else
{
lean_object* v___x_998_; lean_object* v___x_999_; 
lean_dec_ref(v___x_986_);
lean_del_object(v___x_983_);
v___x_998_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__5, &l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__5);
v___x_999_ = l_panic___at___00Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2_spec__3(v___x_998_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1012_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1012_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1012_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
if (lean_obj_tag(v_a_1000_) == 0)
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
lean_dec(v_constName_963_);
v___x_1004_ = lean_box(0);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_1004_);
v___x_1006_ = v___x_1002_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v___x_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
else
{
lean_object* v_val_1008_; 
v_val_1008_ = lean_ctor_get(v_a_1000_, 0);
lean_inc(v_val_1008_);
lean_dec_ref_known(v_a_1000_, 1);
if (lean_obj_tag(v_val_1008_) == 0)
{
lean_del_object(v___x_1002_);
goto v___jp_969_;
}
else
{
lean_object* v___x_1010_; 
lean_dec(v_constName_963_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v_val_1008_);
v___x_1010_ = v___x_1002_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_val_1008_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v_constName_963_);
v_a_1013_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_999_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_999_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
else
{
lean_del_object(v___x_983_);
lean_dec(v_val_981_);
goto v___jp_969_;
}
}
}
else
{
lean_dec(v___x_980_);
goto v___jp_969_;
}
v___jp_969_:
{
lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_970_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_971_ = 0;
v___x_972_ = l_Lean_MessageData_ofConstName(v_constName_963_, v___x_971_);
v___x_973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_970_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
v___x_974_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__1, &l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___closed__1);
v___x_975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_973_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
v___x_976_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg(v___x_975_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
return v___x_976_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2___boxed(lean_object* v_constName_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2(v_constName_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1028_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__0));
v___x_1031_ = l_Lean_stringToMessageData(v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1(lean_object* v_constName_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v___x_1038_; lean_object* v_env_1039_; lean_object* v___x_1040_; 
v___x_1038_ = lean_st_ref_get(v___y_1036_);
v_env_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc_ref(v_env_1039_);
lean_dec(v___x_1038_);
lean_inc(v_constName_1032_);
v___x_1040_ = l_Lean_isInductiveCore_x3f(v_env_1039_, v_constName_1032_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v___x_1041_; uint8_t v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1041_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_1042_ = 0;
v___x_1043_ = l_Lean_MessageData_ofConstName(v_constName_1032_, v___x_1042_);
v___x_1044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1041_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___closed__1);
v___x_1046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg(v___x_1046_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
return v___x_1047_;
}
else
{
lean_object* v___x_1048_; 
lean_dec(v_constName_1032_);
v___x_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1040_);
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1___boxed(lean_object* v_constName_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1(v_constName_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___redArg(lean_object* v_declName_1056_, lean_object* v_e_1057_, lean_object* v_upperBound_1058_, lean_object* v___x_1059_, lean_object* v_us_1060_, lean_object* v___x_1061_, lean_object* v_a_1062_, lean_object* v_b_1063_){
_start:
{
lean_object* v___y_1066_; uint8_t v___x_1073_; 
v___x_1073_ = lean_nat_dec_lt(v_a_1062_, v_upperBound_1058_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
lean_dec(v_a_1062_);
lean_dec(v_us_1060_);
lean_dec_ref(v_e_1057_);
lean_dec(v_declName_1056_);
v___x_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1074_, 0, v_b_1063_);
v___x_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
return v___x_1075_;
}
else
{
if (lean_obj_tag(v___x_1059_) == 0)
{
goto v___jp_1071_;
}
else
{
lean_object* v_val_1076_; lean_object* v___x_1077_; 
v_val_1076_ = lean_ctor_get(v___x_1059_, 0);
v___x_1077_ = l_Lean_StructureInfo_getProjFn_x3f(v_val_1076_, v_a_1062_);
if (lean_obj_tag(v___x_1077_) == 0)
{
goto v___jp_1071_;
}
else
{
lean_object* v_val_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_val_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_val_1078_);
lean_dec_ref_known(v___x_1077_, 1);
lean_inc(v_us_1060_);
v___x_1079_ = l_Lean_mkConst(v_val_1078_, v_us_1060_);
v___x_1080_ = l_Lean_mkAppN(v___x_1079_, v___x_1061_);
lean_inc_ref(v_e_1057_);
v___x_1081_ = l_Lean_Expr_app___override(v___x_1080_, v_e_1057_);
v___y_1066_ = v___x_1081_;
goto v___jp_1065_;
}
}
}
v___jp_1065_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1067_ = l_Lean_Expr_app___override(v_b_1063_, v___y_1066_);
v___x_1068_ = lean_unsigned_to_nat(1u);
v___x_1069_ = lean_nat_add(v_a_1062_, v___x_1068_);
lean_dec(v_a_1062_);
v_a_1062_ = v___x_1069_;
v_b_1063_ = v___x_1067_;
goto _start;
}
v___jp_1071_:
{
lean_object* v___x_1072_; 
lean_inc_ref(v_e_1057_);
lean_inc(v_a_1062_);
lean_inc(v_declName_1056_);
v___x_1072_ = l_Lean_mkProj(v_declName_1056_, v_a_1062_, v_e_1057_);
v___y_1066_ = v___x_1072_;
goto v___jp_1065_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___redArg___boxed(lean_object* v_declName_1082_, lean_object* v_e_1083_, lean_object* v_upperBound_1084_, lean_object* v___x_1085_, lean_object* v_us_1086_, lean_object* v___x_1087_, lean_object* v_a_1088_, lean_object* v_b_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___redArg(v_declName_1082_, v_e_1083_, v_upperBound_1084_, v___x_1085_, v_us_1086_, v___x_1087_, v_a_1088_, v_b_1089_);
lean_dec_ref(v___x_1087_);
lean_dec(v___x_1085_);
lean_dec(v_upperBound_1084_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f(lean_object* v_e_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v___x_1098_; 
lean_inc_ref(v_e_1092_);
v___x_1098_ = l_Lean_Meta_isConstructorApp_x3f(v_e_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1231_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1101_ = v___x_1098_;
v_isShared_1102_ = v_isSharedCheck_1231_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1098_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1231_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
if (lean_obj_tag(v_a_1099_) == 0)
{
lean_object* v___x_1103_; 
lean_del_object(v___x_1101_);
lean_inc(v_a_1096_);
lean_inc_ref(v_a_1095_);
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
lean_inc_ref(v_e_1092_);
v___x_1103_ = lean_infer_type(v_e_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v___x_1105_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1103_, 1);
lean_inc(v_a_1096_);
lean_inc_ref(v_a_1095_);
lean_inc(v_a_1094_);
lean_inc_ref(v_a_1093_);
v___x_1105_ = lean_whnf(v_a_1104_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1107_; lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1210_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1105_, 1);
v___x_1107_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__0___redArg(v_a_1106_, v_a_1094_);
v_a_1108_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1110_ = v___x_1107_;
v_isShared_1111_ = v_isSharedCheck_1210_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1107_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1210_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v_val_1112_; lean_object* v___x_1113_; 
v_val_1112_ = lean_ctor_get(v_a_1108_, 0);
lean_inc(v_val_1112_);
lean_dec(v_a_1108_);
v___x_1113_ = l_Lean_Expr_getAppFn(v_val_1112_);
if (lean_obj_tag(v___x_1113_) == 4)
{
lean_object* v_declName_1114_; lean_object* v_us_1115_; lean_object* v___x_1116_; lean_object* v_env_1117_; uint8_t v___x_1118_; 
v_declName_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc_n(v_declName_1114_, 2);
v_us_1115_ = lean_ctor_get(v___x_1113_, 1);
lean_inc(v_us_1115_);
lean_dec_ref_known(v___x_1113_, 2);
v___x_1116_ = lean_st_ref_get(v_a_1096_);
v_env_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc_ref_n(v_env_1117_, 2);
lean_dec(v___x_1116_);
v___x_1118_ = l_Lean_isStructure(v_env_1117_, v_declName_1114_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v___x_1121_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v___x_1119_ = lean_box(0);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 0, v___x_1119_);
v___x_1121_ = v___x_1110_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1119_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
else
{
uint8_t v___x_1123_; 
lean_inc(v_declName_1114_);
lean_inc_ref(v_env_1117_);
v___x_1123_ = l_Lean_isNonRecStructure(v_env_1117_, v_declName_1114_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; lean_object* v___x_1126_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v___x_1124_ = lean_box(0);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 0, v___x_1124_);
v___x_1126_ = v___x_1110_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1124_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
else
{
lean_object* v___x_1128_; 
lean_del_object(v___x_1110_);
lean_inc(v_val_1112_);
v___x_1128_ = l_Lean_Meta_isProp(v_val_1112_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1197_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1131_ = v___x_1128_;
v_isShared_1132_ = v_isSharedCheck_1197_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1128_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1197_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
uint8_t v___x_1133_; 
v___x_1133_ = lean_unbox(v_a_1129_);
lean_dec(v_a_1129_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; 
lean_del_object(v___x_1131_);
lean_inc(v_declName_1114_);
v___x_1134_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1(v_declName_1114_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1184_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1184_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1184_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
if (lean_obj_tag(v_a_1135_) == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1141_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v___x_1139_ = lean_box(0);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1139_);
v___x_1141_ = v___x_1137_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1139_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
else
{
lean_object* v_val_1143_; lean_object* v_ctors_1144_; lean_object* v___x_1145_; 
v_val_1143_ = lean_ctor_get(v_a_1135_, 0);
lean_inc(v_val_1143_);
lean_dec_ref_known(v_a_1135_, 1);
v_ctors_1144_ = lean_ctor_get(v_val_1143_, 4);
lean_inc(v_ctors_1144_);
lean_dec(v_val_1143_);
v___x_1145_ = l_List_head_x3f___redArg(v_ctors_1144_);
lean_dec(v_ctors_1144_);
if (lean_obj_tag(v___x_1145_) == 1)
{
lean_object* v_val_1146_; lean_object* v___x_1147_; 
lean_del_object(v___x_1137_);
v_val_1146_ = lean_ctor_get(v___x_1145_, 0);
lean_inc_n(v_val_1146_, 2);
lean_dec_ref_known(v___x_1145_, 1);
v___x_1147_ = l_Lean_getConstInfoCtor___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__2(v_val_1146_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1171_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1150_ = v___x_1147_;
v_isShared_1151_ = v_isSharedCheck_1171_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1147_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1171_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
if (lean_obj_tag(v_a_1148_) == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1154_; 
lean_dec(v_val_1146_);
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v___x_1152_ = lean_box(0);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1152_);
v___x_1154_ = v___x_1150_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
else
{
lean_object* v_val_1156_; lean_object* v_numParams_1157_; lean_object* v_numFields_1158_; lean_object* v_nargs_1159_; lean_object* v___x_1160_; lean_object* v_dummy_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_del_object(v___x_1150_);
v_val_1156_ = lean_ctor_get(v_a_1148_, 0);
lean_inc(v_val_1156_);
lean_dec_ref_known(v_a_1148_, 1);
v_numParams_1157_ = lean_ctor_get(v_val_1156_, 3);
lean_inc(v_numParams_1157_);
v_numFields_1158_ = lean_ctor_get(v_val_1156_, 4);
lean_inc(v_numFields_1158_);
lean_dec(v_val_1156_);
v_nargs_1159_ = l_Lean_Expr_getAppNumArgs(v_val_1112_);
v___x_1160_ = lean_unsigned_to_nat(0u);
v_dummy_1161_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0);
lean_inc(v_nargs_1159_);
v___x_1162_ = lean_mk_array(v_nargs_1159_, v_dummy_1161_);
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = lean_nat_sub(v_nargs_1159_, v___x_1163_);
lean_dec(v_nargs_1159_);
v___x_1165_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_1112_, v___x_1162_, v___x_1164_);
v___x_1166_ = l_Array_shrink___redArg(v___x_1165_, v_numParams_1157_);
lean_dec(v_numParams_1157_);
lean_inc(v_us_1115_);
v___x_1167_ = l_Lean_mkConst(v_val_1146_, v_us_1115_);
v___x_1168_ = l_Lean_mkAppN(v___x_1167_, v___x_1166_);
lean_inc(v_declName_1114_);
v___x_1169_ = l_Lean_getStructureInfo_x3f(v_env_1117_, v_declName_1114_);
v___x_1170_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___redArg(v_declName_1114_, v_e_1092_, v_numFields_1158_, v___x_1169_, v_us_1115_, v___x_1166_, v___x_1160_, v___x_1168_);
lean_dec_ref(v___x_1166_);
lean_dec(v___x_1169_);
lean_dec(v_numFields_1158_);
return v___x_1170_;
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_val_1146_);
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v_a_1172_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1147_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1147_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
else
{
lean_object* v___x_1180_; lean_object* v___x_1182_; 
lean_dec(v___x_1145_);
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v___x_1180_ = lean_box(0);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1180_);
v___x_1182_ = v___x_1137_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v_a_1185_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1134_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1134_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1195_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v___x_1193_ = lean_box(0);
if (v_isShared_1132_ == 0)
{
lean_ctor_set(v___x_1131_, 0, v___x_1193_);
v___x_1195_ = v___x_1131_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1193_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec_ref(v_env_1117_);
lean_dec(v_us_1115_);
lean_dec(v_declName_1114_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v_a_1198_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1128_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1128_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
}
else
{
lean_object* v___x_1206_; lean_object* v___x_1208_; 
lean_dec_ref(v___x_1113_);
lean_dec(v_val_1112_);
lean_dec_ref(v_e_1092_);
v___x_1206_ = lean_box(0);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 0, v___x_1206_);
v___x_1208_ = v___x_1110_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
lean_dec_ref(v_e_1092_);
v_a_1211_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1105_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1105_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref(v_e_1092_);
v_a_1219_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1103_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1103_);
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
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
lean_dec_ref_known(v_a_1099_, 1);
lean_dec_ref(v_e_1092_);
v___x_1227_ = lean_box(0);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1227_);
v___x_1229_ = v___x_1101_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1227_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
lean_dec_ref(v_e_1092_);
v_a_1232_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1098_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1098_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f___boxed(lean_object* v_e_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f(v_e_1240_, v_a_1241_, v_a_1242_, v_a_1243_, v_a_1244_);
lean_dec(v_a_1244_);
lean_dec_ref(v_a_1243_);
lean_dec(v_a_1242_);
lean_dec_ref(v_a_1241_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3(lean_object* v_declName_1247_, lean_object* v_e_1248_, lean_object* v_upperBound_1249_, lean_object* v___x_1250_, lean_object* v_us_1251_, lean_object* v___x_1252_, lean_object* v_inst_1253_, lean_object* v_R_1254_, lean_object* v_a_1255_, lean_object* v_b_1256_, lean_object* v_c_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___redArg(v_declName_1247_, v_e_1248_, v_upperBound_1249_, v___x_1250_, v_us_1251_, v___x_1252_, v_a_1255_, v_b_1256_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3___boxed(lean_object* v_declName_1264_, lean_object* v_e_1265_, lean_object* v_upperBound_1266_, lean_object* v___x_1267_, lean_object* v_us_1268_, lean_object* v___x_1269_, lean_object* v_inst_1270_, lean_object* v_R_1271_, lean_object* v_a_1272_, lean_object* v_b_1273_, lean_object* v_c_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__3(v_declName_1264_, v_e_1265_, v_upperBound_1266_, v___x_1267_, v_us_1268_, v___x_1269_, v_inst_1270_, v_R_1271_, v_a_1272_, v_b_1273_, v_c_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec_ref(v___x_1269_);
lean_dec(v___x_1267_);
lean_dec(v_upperBound_1266_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1(lean_object* v_00_u03b1_1281_, lean_object* v_msg_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___redArg(v_msg_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b1_1289_, lean_object* v_msg_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v_res_1296_; 
v_res_1296_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f_spec__1_spec__1(v_00_u03b1_1289_, v_msg_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
return v_res_1296_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(lean_object* v_opts_1297_, lean_object* v_opt_1298_){
_start:
{
lean_object* v_name_1299_; lean_object* v_defValue_1300_; lean_object* v_map_1301_; lean_object* v___x_1302_; 
v_name_1299_ = lean_ctor_get(v_opt_1298_, 0);
v_defValue_1300_ = lean_ctor_get(v_opt_1298_, 1);
v_map_1301_ = lean_ctor_get(v_opts_1297_, 0);
v___x_1302_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1301_, v_name_1299_);
if (lean_obj_tag(v___x_1302_) == 0)
{
uint8_t v___x_1303_; 
v___x_1303_ = lean_unbox(v_defValue_1300_);
return v___x_1303_;
}
else
{
lean_object* v_val_1304_; 
v_val_1304_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_val_1304_);
lean_dec_ref_known(v___x_1302_, 1);
if (lean_obj_tag(v_val_1304_) == 1)
{
uint8_t v_v_1305_; 
v_v_1305_ = lean_ctor_get_uint8(v_val_1304_, 0);
lean_dec_ref_known(v_val_1304_, 0);
return v_v_1305_;
}
else
{
uint8_t v___x_1306_; 
lean_dec(v_val_1304_);
v___x_1306_ = lean_unbox(v_defValue_1300_);
return v___x_1306_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0___boxed(lean_object* v_opts_1307_, lean_object* v_opt_1308_){
_start:
{
uint8_t v_res_1309_; lean_object* v_r_1310_; 
v_res_1309_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v_opts_1307_, v_opt_1308_);
lean_dec_ref(v_opt_1308_);
lean_dec_ref(v_opts_1307_);
v_r_1310_ = lean_box(v_res_1309_);
return v_r_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg(lean_object* v_kind_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v___x_1314_; lean_object* v_auxDeclNGen_1315_; lean_object* v___x_1316_; lean_object* v_env_1317_; lean_object* v___x_1318_; lean_object* v_fst_1319_; lean_object* v_snd_1320_; lean_object* v___x_1321_; lean_object* v_env_1322_; lean_object* v_nextMacroScope_1323_; lean_object* v_ngen_1324_; lean_object* v_traceState_1325_; lean_object* v_cache_1326_; lean_object* v_recordedDeps_1327_; lean_object* v_messages_1328_; lean_object* v_infoState_1329_; lean_object* v_snapshotTasks_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1339_; 
v___x_1314_ = lean_st_ref_get(v___y_1312_);
v_auxDeclNGen_1315_ = lean_ctor_get(v___x_1314_, 3);
lean_inc_ref(v_auxDeclNGen_1315_);
lean_dec(v___x_1314_);
v___x_1316_ = lean_st_ref_get(v___y_1312_);
v_env_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc_ref(v_env_1317_);
lean_dec(v___x_1316_);
v___x_1318_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_1317_, v_auxDeclNGen_1315_, v_kind_1311_);
v_fst_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_fst_1319_);
v_snd_1320_ = lean_ctor_get(v___x_1318_, 1);
lean_inc(v_snd_1320_);
lean_dec_ref(v___x_1318_);
v___x_1321_ = lean_st_ref_take(v___y_1312_);
v_env_1322_ = lean_ctor_get(v___x_1321_, 0);
v_nextMacroScope_1323_ = lean_ctor_get(v___x_1321_, 1);
v_ngen_1324_ = lean_ctor_get(v___x_1321_, 2);
v_traceState_1325_ = lean_ctor_get(v___x_1321_, 4);
v_cache_1326_ = lean_ctor_get(v___x_1321_, 5);
v_recordedDeps_1327_ = lean_ctor_get(v___x_1321_, 6);
v_messages_1328_ = lean_ctor_get(v___x_1321_, 7);
v_infoState_1329_ = lean_ctor_get(v___x_1321_, 8);
v_snapshotTasks_1330_ = lean_ctor_get(v___x_1321_, 9);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1339_ == 0)
{
lean_object* v_unused_1340_; 
v_unused_1340_ = lean_ctor_get(v___x_1321_, 3);
lean_dec(v_unused_1340_);
v___x_1332_ = v___x_1321_;
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_snapshotTasks_1330_);
lean_inc(v_infoState_1329_);
lean_inc(v_messages_1328_);
lean_inc(v_recordedDeps_1327_);
lean_inc(v_cache_1326_);
lean_inc(v_traceState_1325_);
lean_inc(v_ngen_1324_);
lean_inc(v_nextMacroScope_1323_);
lean_inc(v_env_1322_);
lean_dec(v___x_1321_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1335_; 
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 3, v_snd_1320_);
v___x_1335_ = v___x_1332_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_env_1322_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_nextMacroScope_1323_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_ngen_1324_);
lean_ctor_set(v_reuseFailAlloc_1338_, 3, v_snd_1320_);
lean_ctor_set(v_reuseFailAlloc_1338_, 4, v_traceState_1325_);
lean_ctor_set(v_reuseFailAlloc_1338_, 5, v_cache_1326_);
lean_ctor_set(v_reuseFailAlloc_1338_, 6, v_recordedDeps_1327_);
lean_ctor_set(v_reuseFailAlloc_1338_, 7, v_messages_1328_);
lean_ctor_set(v_reuseFailAlloc_1338_, 8, v_infoState_1329_);
lean_ctor_set(v_reuseFailAlloc_1338_, 9, v_snapshotTasks_1330_);
v___x_1335_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = lean_st_ref_put(v___y_1312_, v___x_1335_);
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v_fst_1319_);
return v___x_1337_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg___boxed(lean_object* v_kind_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg(v_kind_1341_, v___y_1342_);
lean_dec(v___y_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1(lean_object* v_kind_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg(v_kind_1345_, v___y_1349_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___boxed(lean_object* v_kind_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1(v_kind_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg(lean_object* v_e_1359_, lean_object* v___y_1360_){
_start:
{
uint8_t v___x_1362_; 
v___x_1362_ = l_Lean_Expr_hasMVar(v_e_1359_);
if (v___x_1362_ == 0)
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1363_, 0, v_e_1359_);
return v___x_1363_;
}
else
{
lean_object* v___x_1364_; lean_object* v_mctx_1365_; lean_object* v___x_1366_; lean_object* v_fst_1367_; lean_object* v_snd_1368_; lean_object* v___x_1369_; lean_object* v_cache_1370_; lean_object* v_zetaDeltaFVarIds_1371_; lean_object* v_postponed_1372_; lean_object* v_diag_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1382_; 
v___x_1364_ = lean_st_ref_get(v___y_1360_);
v_mctx_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc_ref(v_mctx_1365_);
lean_dec(v___x_1364_);
v___x_1366_ = l_Lean_instantiateMVarsCore(v_mctx_1365_, v_e_1359_);
v_fst_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_fst_1367_);
v_snd_1368_ = lean_ctor_get(v___x_1366_, 1);
lean_inc(v_snd_1368_);
lean_dec_ref(v___x_1366_);
v___x_1369_ = lean_st_ref_take(v___y_1360_);
v_cache_1370_ = lean_ctor_get(v___x_1369_, 1);
v_zetaDeltaFVarIds_1371_ = lean_ctor_get(v___x_1369_, 2);
v_postponed_1372_ = lean_ctor_get(v___x_1369_, 3);
v_diag_1373_ = lean_ctor_get(v___x_1369_, 4);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1382_ == 0)
{
lean_object* v_unused_1383_; 
v_unused_1383_ = lean_ctor_get(v___x_1369_, 0);
lean_dec(v_unused_1383_);
v___x_1375_ = v___x_1369_;
v_isShared_1376_ = v_isSharedCheck_1382_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_diag_1373_);
lean_inc(v_postponed_1372_);
lean_inc(v_zetaDeltaFVarIds_1371_);
lean_inc(v_cache_1370_);
lean_dec(v___x_1369_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1382_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v_snd_1368_);
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_snd_1368_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v_cache_1370_);
lean_ctor_set(v_reuseFailAlloc_1381_, 2, v_zetaDeltaFVarIds_1371_);
lean_ctor_set(v_reuseFailAlloc_1381_, 3, v_postponed_1372_);
lean_ctor_set(v_reuseFailAlloc_1381_, 4, v_diag_1373_);
v___x_1378_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_st_ref_put(v___y_1360_, v___x_1378_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_fst_1367_);
return v___x_1380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg___boxed(lean_object* v_e_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg(v_e_1384_, v___y_1385_);
lean_dec(v___y_1385_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7(lean_object* v_e_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg(v_e_1388_, v___y_1390_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___boxed(lean_object* v_e_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7(v_e_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__10(lean_object* v_msg_1402_){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = l_Lean_instInhabitedExpr;
v___x_1404_ = lean_panic_fn_borrowed(v___x_1403_, v_msg_1402_);
return v___x_1404_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1405_ = lean_unsigned_to_nat(32u);
v___x_1406_ = lean_mk_empty_array_with_capacity(v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__1(void){
_start:
{
size_t v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1408_ = ((size_t)5ULL);
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = lean_unsigned_to_nat(32u);
v___x_1411_ = lean_mk_empty_array_with_capacity(v___x_1410_);
v___x_1412_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__0);
v___x_1413_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v___x_1411_);
lean_ctor_set(v___x_1413_, 2, v___x_1409_);
lean_ctor_set(v___x_1413_, 3, v___x_1409_);
lean_ctor_set_usize(v___x_1413_, 4, v___x_1408_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg(lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; lean_object* v_traceState_1417_; lean_object* v_traces_1418_; lean_object* v___x_1419_; lean_object* v_traceState_1420_; lean_object* v_env_1421_; lean_object* v_nextMacroScope_1422_; lean_object* v_ngen_1423_; lean_object* v_auxDeclNGen_1424_; lean_object* v_cache_1425_; lean_object* v_recordedDeps_1426_; lean_object* v_messages_1427_; lean_object* v_infoState_1428_; lean_object* v_snapshotTasks_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1448_; 
v___x_1416_ = lean_st_ref_get(v___y_1414_);
v_traceState_1417_ = lean_ctor_get(v___x_1416_, 4);
lean_inc_ref(v_traceState_1417_);
lean_dec(v___x_1416_);
v_traces_1418_ = lean_ctor_get(v_traceState_1417_, 0);
lean_inc_ref(v_traces_1418_);
lean_dec_ref(v_traceState_1417_);
v___x_1419_ = lean_st_ref_take(v___y_1414_);
v_traceState_1420_ = lean_ctor_get(v___x_1419_, 4);
v_env_1421_ = lean_ctor_get(v___x_1419_, 0);
v_nextMacroScope_1422_ = lean_ctor_get(v___x_1419_, 1);
v_ngen_1423_ = lean_ctor_get(v___x_1419_, 2);
v_auxDeclNGen_1424_ = lean_ctor_get(v___x_1419_, 3);
v_cache_1425_ = lean_ctor_get(v___x_1419_, 5);
v_recordedDeps_1426_ = lean_ctor_get(v___x_1419_, 6);
v_messages_1427_ = lean_ctor_get(v___x_1419_, 7);
v_infoState_1428_ = lean_ctor_get(v___x_1419_, 8);
v_snapshotTasks_1429_ = lean_ctor_get(v___x_1419_, 9);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1431_ = v___x_1419_;
v_isShared_1432_ = v_isSharedCheck_1448_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_snapshotTasks_1429_);
lean_inc(v_infoState_1428_);
lean_inc(v_messages_1427_);
lean_inc(v_recordedDeps_1426_);
lean_inc(v_cache_1425_);
lean_inc(v_traceState_1420_);
lean_inc(v_auxDeclNGen_1424_);
lean_inc(v_ngen_1423_);
lean_inc(v_nextMacroScope_1422_);
lean_inc(v_env_1421_);
lean_dec(v___x_1419_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1448_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint64_t v_tid_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1446_; 
v_tid_1433_ = lean_ctor_get_uint64(v_traceState_1420_, sizeof(void*)*1);
v_isSharedCheck_1446_ = !lean_is_exclusive(v_traceState_1420_);
if (v_isSharedCheck_1446_ == 0)
{
lean_object* v_unused_1447_; 
v_unused_1447_ = lean_ctor_get(v_traceState_1420_, 0);
lean_dec(v_unused_1447_);
v___x_1435_ = v_traceState_1420_;
v_isShared_1436_ = v_isSharedCheck_1446_;
goto v_resetjp_1434_;
}
else
{
lean_dec(v_traceState_1420_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1446_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1437_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___closed__1);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1437_);
v___x_1439_ = v___x_1435_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1437_);
lean_ctor_set_uint64(v_reuseFailAlloc_1445_, sizeof(void*)*1, v_tid_1433_);
v___x_1439_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1441_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 4, v___x_1439_);
v___x_1441_ = v___x_1431_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_env_1421_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_nextMacroScope_1422_);
lean_ctor_set(v_reuseFailAlloc_1444_, 2, v_ngen_1423_);
lean_ctor_set(v_reuseFailAlloc_1444_, 3, v_auxDeclNGen_1424_);
lean_ctor_set(v_reuseFailAlloc_1444_, 4, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1444_, 5, v_cache_1425_);
lean_ctor_set(v_reuseFailAlloc_1444_, 6, v_recordedDeps_1426_);
lean_ctor_set(v_reuseFailAlloc_1444_, 7, v_messages_1427_);
lean_ctor_set(v_reuseFailAlloc_1444_, 8, v_infoState_1428_);
lean_ctor_set(v_reuseFailAlloc_1444_, 9, v_snapshotTasks_1429_);
v___x_1441_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1442_ = lean_st_ref_put(v___y_1414_, v___x_1441_);
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v_traces_1418_);
return v___x_1443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg___boxed(lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg(v___y_1449_);
lean_dec(v___y_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15(lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v___x_1457_; 
v___x_1457_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg(v___y_1455_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___boxed(lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15(v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
return v_res_1463_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__0));
v___x_1466_ = l_Lean_stringToMessageData(v___x_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0(lean_object* v_expectedType_1467_, lean_object* v_x_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1474_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__1, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__1_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___closed__1);
v___x_1475_ = l_Lean_MessageData_ofExpr(v_expectedType_1467_);
v___x_1476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1474_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___boxed(lean_object* v_expectedType_1478_, lean_object* v_x_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0(v_expectedType_1478_, v_x_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec_ref(v_x_1479_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___redArg(lean_object* v_a_1486_, lean_object* v_x_1487_){
_start:
{
if (lean_obj_tag(v_x_1487_) == 0)
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_box(0);
return v___x_1488_;
}
else
{
lean_object* v_key_1489_; lean_object* v_value_1490_; lean_object* v_tail_1491_; uint8_t v___x_1492_; 
v_key_1489_ = lean_ctor_get(v_x_1487_, 0);
v_value_1490_ = lean_ctor_get(v_x_1487_, 1);
v_tail_1491_ = lean_ctor_get(v_x_1487_, 2);
v___x_1492_ = lean_name_eq(v_key_1489_, v_a_1486_);
if (v___x_1492_ == 0)
{
v_x_1487_ = v_tail_1491_;
goto _start;
}
else
{
lean_object* v___x_1494_; 
lean_inc(v_value_1490_);
v___x_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1494_, 0, v_value_1490_);
return v___x_1494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___redArg___boxed(lean_object* v_a_1495_, lean_object* v_x_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___redArg(v_a_1495_, v_x_1496_);
lean_dec(v_x_1496_);
lean_dec(v_a_1495_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___redArg(lean_object* v_m_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v_buckets_1500_; lean_object* v___x_1501_; uint64_t v___y_1503_; 
v_buckets_1500_ = lean_ctor_get(v_m_1498_, 1);
v___x_1501_ = lean_array_get_size(v_buckets_1500_);
if (lean_obj_tag(v_a_1499_) == 0)
{
uint64_t v___x_1517_; 
v___x_1517_ = 1723ULL;
v___y_1503_ = v___x_1517_;
goto v___jp_1502_;
}
else
{
uint64_t v_hash_1518_; 
v_hash_1518_ = lean_ctor_get_uint64(v_a_1499_, sizeof(void*)*2);
v___y_1503_ = v_hash_1518_;
goto v___jp_1502_;
}
v___jp_1502_:
{
uint64_t v___x_1504_; uint64_t v___x_1505_; uint64_t v_fold_1506_; uint64_t v___x_1507_; uint64_t v___x_1508_; uint64_t v___x_1509_; size_t v___x_1510_; size_t v___x_1511_; size_t v___x_1512_; size_t v___x_1513_; size_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1504_ = 32ULL;
v___x_1505_ = lean_uint64_shift_right(v___y_1503_, v___x_1504_);
v_fold_1506_ = lean_uint64_xor(v___y_1503_, v___x_1505_);
v___x_1507_ = 16ULL;
v___x_1508_ = lean_uint64_shift_right(v_fold_1506_, v___x_1507_);
v___x_1509_ = lean_uint64_xor(v_fold_1506_, v___x_1508_);
v___x_1510_ = lean_uint64_to_usize(v___x_1509_);
v___x_1511_ = lean_usize_of_nat(v___x_1501_);
v___x_1512_ = ((size_t)1ULL);
v___x_1513_ = lean_usize_sub(v___x_1511_, v___x_1512_);
v___x_1514_ = lean_usize_land(v___x_1510_, v___x_1513_);
v___x_1515_ = lean_array_uget_borrowed(v_buckets_1500_, v___x_1514_);
v___x_1516_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___redArg(v_a_1499_, v___x_1515_);
return v___x_1516_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___redArg___boxed(lean_object* v_m_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___redArg(v_m_1519_, v_a_1520_);
lean_dec(v_a_1520_);
lean_dec_ref(v_m_1519_);
return v_res_1521_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1522_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0);
v___x_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg(){
_start:
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__1);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___boxed(lean_object* v___dummy_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg();
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(lean_object* v_cls_1529_, lean_object* v_msg_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v_ref_1536_; lean_object* v___x_1537_; lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1583_; 
v_ref_1536_ = lean_ctor_get(v___y_1533_, 2);
v___x_1537_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(v_msg_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1540_ = v___x_1537_;
v_isShared_1541_ = v_isSharedCheck_1583_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1537_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1583_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; lean_object* v_traceState_1543_; lean_object* v_env_1544_; lean_object* v_nextMacroScope_1545_; lean_object* v_ngen_1546_; lean_object* v_auxDeclNGen_1547_; lean_object* v_cache_1548_; lean_object* v_recordedDeps_1549_; lean_object* v_messages_1550_; lean_object* v_infoState_1551_; lean_object* v_snapshotTasks_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1582_; 
v___x_1542_ = lean_st_ref_take(v___y_1534_);
v_traceState_1543_ = lean_ctor_get(v___x_1542_, 4);
v_env_1544_ = lean_ctor_get(v___x_1542_, 0);
v_nextMacroScope_1545_ = lean_ctor_get(v___x_1542_, 1);
v_ngen_1546_ = lean_ctor_get(v___x_1542_, 2);
v_auxDeclNGen_1547_ = lean_ctor_get(v___x_1542_, 3);
v_cache_1548_ = lean_ctor_get(v___x_1542_, 5);
v_recordedDeps_1549_ = lean_ctor_get(v___x_1542_, 6);
v_messages_1550_ = lean_ctor_get(v___x_1542_, 7);
v_infoState_1551_ = lean_ctor_get(v___x_1542_, 8);
v_snapshotTasks_1552_ = lean_ctor_get(v___x_1542_, 9);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1554_ = v___x_1542_;
v_isShared_1555_ = v_isSharedCheck_1582_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_snapshotTasks_1552_);
lean_inc(v_infoState_1551_);
lean_inc(v_messages_1550_);
lean_inc(v_recordedDeps_1549_);
lean_inc(v_cache_1548_);
lean_inc(v_traceState_1543_);
lean_inc(v_auxDeclNGen_1547_);
lean_inc(v_ngen_1546_);
lean_inc(v_nextMacroScope_1545_);
lean_inc(v_env_1544_);
lean_dec(v___x_1542_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1582_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
uint64_t v_tid_1556_; lean_object* v_traces_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1581_; 
v_tid_1556_ = lean_ctor_get_uint64(v_traceState_1543_, sizeof(void*)*1);
v_traces_1557_ = lean_ctor_get(v_traceState_1543_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v_traceState_1543_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1559_ = v_traceState_1543_;
v_isShared_1560_ = v_isSharedCheck_1581_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_traces_1557_);
lean_dec(v_traceState_1543_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1581_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; double v___x_1563_; uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1572_; 
v___x_1561_ = lean_box(0);
v___x_1562_ = lean_box(0);
v___x_1563_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0);
v___x_1564_ = 0;
v___x_1565_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__1));
v___x_1566_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1566_, 0, v_cls_1529_);
lean_ctor_set(v___x_1566_, 1, v___x_1562_);
lean_ctor_set(v___x_1566_, 2, v___x_1565_);
lean_ctor_set_float(v___x_1566_, sizeof(void*)*3, v___x_1563_);
lean_ctor_set_float(v___x_1566_, sizeof(void*)*3 + 8, v___x_1563_);
lean_ctor_set_uint8(v___x_1566_, sizeof(void*)*3 + 16, v___x_1564_);
v___x_1567_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__2));
v___x_1568_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v_a_1538_);
lean_ctor_set(v___x_1568_, 2, v___x_1567_);
lean_inc(v_ref_1536_);
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_ref_1536_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
v___x_1570_ = l_Lean_PersistentArray_push___redArg(v_traces_1557_, v___x_1569_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 0, v___x_1570_);
v___x_1572_ = v___x_1559_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1570_);
lean_ctor_set_uint64(v_reuseFailAlloc_1580_, sizeof(void*)*1, v_tid_1556_);
v___x_1572_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
lean_object* v___x_1574_; 
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 4, v___x_1572_);
v___x_1574_ = v___x_1554_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_env_1544_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v_nextMacroScope_1545_);
lean_ctor_set(v_reuseFailAlloc_1579_, 2, v_ngen_1546_);
lean_ctor_set(v_reuseFailAlloc_1579_, 3, v_auxDeclNGen_1547_);
lean_ctor_set(v_reuseFailAlloc_1579_, 4, v___x_1572_);
lean_ctor_set(v_reuseFailAlloc_1579_, 5, v_cache_1548_);
lean_ctor_set(v_reuseFailAlloc_1579_, 6, v_recordedDeps_1549_);
lean_ctor_set(v_reuseFailAlloc_1579_, 7, v_messages_1550_);
lean_ctor_set(v_reuseFailAlloc_1579_, 8, v_infoState_1551_);
lean_ctor_set(v_reuseFailAlloc_1579_, 9, v_snapshotTasks_1552_);
v___x_1574_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1575_; lean_object* v___x_1577_; 
v___x_1575_ = lean_st_ref_put(v___y_1534_, v___x_1574_);
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 0, v___x_1561_);
v___x_1577_ = v___x_1540_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___x_1561_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5___boxed(lean_object* v_cls_1584_, lean_object* v_msg_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_1584_, v_msg_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___lam__0(lean_object* v_addEntryFn_1592_, lean_object* v_entry_1593_, lean_object* v_s_1594_){
_start:
{
lean_object* v_importedEntries_1595_; lean_object* v_state_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1604_; 
v_importedEntries_1595_ = lean_ctor_get(v_s_1594_, 0);
v_state_1596_ = lean_ctor_get(v_s_1594_, 1);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_s_1594_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1598_ = v_s_1594_;
v_isShared_1599_ = v_isSharedCheck_1604_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_state_1596_);
lean_inc(v_importedEntries_1595_);
lean_dec(v_s_1594_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1604_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v_state_1600_; lean_object* v___x_1602_; 
v_state_1600_ = lean_apply_2(v_addEntryFn_1592_, v_state_1596_, v_entry_1593_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 1, v_state_1600_);
v___x_1602_ = v___x_1598_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_importedEntries_1595_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_state_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___redArg(lean_object* v_keys_1605_, lean_object* v_i_1606_, lean_object* v_k_1607_){
_start:
{
lean_object* v___x_1608_; uint8_t v___x_1609_; 
v___x_1608_ = lean_array_get_size(v_keys_1605_);
v___x_1609_ = lean_nat_dec_lt(v_i_1606_, v___x_1608_);
if (v___x_1609_ == 0)
{
lean_dec(v_i_1606_);
return v___x_1609_;
}
else
{
lean_object* v_k_x27_1610_; uint8_t v___x_1611_; 
v_k_x27_1610_ = lean_array_fget_borrowed(v_keys_1605_, v_i_1606_);
v___x_1611_ = l_Lean_instBEqExtraModUse_beq(v_k_1607_, v_k_x27_1610_);
if (v___x_1611_ == 0)
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = lean_unsigned_to_nat(1u);
v___x_1613_ = lean_nat_add(v_i_1606_, v___x_1612_);
lean_dec(v_i_1606_);
v_i_1606_ = v___x_1613_;
goto _start;
}
else
{
lean_dec(v_i_1606_);
return v___x_1609_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___redArg___boxed(lean_object* v_keys_1615_, lean_object* v_i_1616_, lean_object* v_k_1617_){
_start:
{
uint8_t v_res_1618_; lean_object* v_r_1619_; 
v_res_1618_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___redArg(v_keys_1615_, v_i_1616_, v_k_1617_);
lean_dec_ref(v_k_1617_);
lean_dec_ref(v_keys_1615_);
v_r_1619_ = lean_box(v_res_1618_);
return v_r_1619_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___redArg(lean_object* v_x_1620_, size_t v_x_1621_, lean_object* v_x_1622_){
_start:
{
if (lean_obj_tag(v_x_1620_) == 0)
{
lean_object* v_es_1623_; lean_object* v___x_1624_; size_t v___x_1625_; size_t v___x_1626_; lean_object* v_j_1627_; lean_object* v___x_1628_; 
v_es_1623_ = lean_ctor_get(v_x_1620_, 0);
v___x_1624_ = lean_box(2);
v___x_1625_ = ((size_t)31ULL);
v___x_1626_ = lean_usize_land(v_x_1621_, v___x_1625_);
v_j_1627_ = lean_usize_to_nat(v___x_1626_);
v___x_1628_ = lean_array_get_borrowed(v___x_1624_, v_es_1623_, v_j_1627_);
lean_dec(v_j_1627_);
switch(lean_obj_tag(v___x_1628_))
{
case 0:
{
lean_object* v_key_1629_; uint8_t v___x_1630_; 
v_key_1629_ = lean_ctor_get(v___x_1628_, 0);
v___x_1630_ = l_Lean_instBEqExtraModUse_beq(v_x_1622_, v_key_1629_);
return v___x_1630_;
}
case 1:
{
lean_object* v_node_1631_; size_t v___x_1632_; size_t v___x_1633_; 
v_node_1631_ = lean_ctor_get(v___x_1628_, 0);
v___x_1632_ = ((size_t)5ULL);
v___x_1633_ = lean_usize_shift_right(v_x_1621_, v___x_1632_);
v_x_1620_ = v_node_1631_;
v_x_1621_ = v___x_1633_;
goto _start;
}
default: 
{
uint8_t v___x_1635_; 
v___x_1635_ = 0;
return v___x_1635_;
}
}
}
else
{
lean_object* v_ks_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v_ks_1636_ = lean_ctor_get(v_x_1620_, 0);
v___x_1637_ = lean_unsigned_to_nat(0u);
v___x_1638_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___redArg(v_ks_1636_, v___x_1637_, v_x_1622_);
return v___x_1638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___redArg___boxed(lean_object* v_x_1639_, lean_object* v_x_1640_, lean_object* v_x_1641_){
_start:
{
size_t v_x_163443__boxed_1642_; uint8_t v_res_1643_; lean_object* v_r_1644_; 
v_x_163443__boxed_1642_ = lean_unbox_usize(v_x_1640_);
lean_dec(v_x_1640_);
v_res_1643_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___redArg(v_x_1639_, v_x_163443__boxed_1642_, v_x_1641_);
lean_dec_ref(v_x_1641_);
lean_dec_ref(v_x_1639_);
v_r_1644_ = lean_box(v_res_1643_);
return v_r_1644_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___redArg(lean_object* v_x_1645_, lean_object* v_x_1646_){
_start:
{
uint64_t v___x_1647_; size_t v___x_1648_; uint8_t v___x_1649_; 
v___x_1647_ = l_Lean_instHashableExtraModUse_hash(v_x_1646_);
v___x_1648_ = lean_uint64_to_usize(v___x_1647_);
v___x_1649_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___redArg(v_x_1645_, v___x_1648_, v_x_1646_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___redArg___boxed(lean_object* v_x_1650_, lean_object* v_x_1651_){
_start:
{
uint8_t v_res_1652_; lean_object* v_r_1653_; 
v_res_1652_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___redArg(v_x_1650_, v_x_1651_);
lean_dec_ref(v_x_1651_);
lean_dec_ref(v_x_1650_);
v_r_1653_ = lean_box(v_res_1652_);
return v_r_1653_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0(void){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0);
v___x_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
return v___x_1655_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
return v___x_1657_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2(void){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg();
return v___x_1658_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__3(void){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
return v___x_1660_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__4(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1661_ = lean_unsigned_to_nat(0u);
v___x_1662_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0);
v___x_1663_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1662_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
lean_ctor_set(v___x_1663_, 2, v___x_1661_);
return v___x_1663_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1664_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__4);
v___x_1665_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__3);
v___x_1666_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__0);
v___x_1667_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2);
v___x_1668_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
lean_ctor_set(v___x_1668_, 1, v___x_1666_);
lean_ctor_set(v___x_1668_, 2, v___x_1665_);
lean_ctor_set(v___x_1668_, 3, v___x_1666_);
lean_ctor_set(v___x_1668_, 4, v___x_1666_);
lean_ctor_set(v___x_1668_, 5, v___x_1666_);
lean_ctor_set(v___x_1668_, 6, v___x_1666_);
lean_ctor_set(v___x_1668_, 7, v___x_1664_);
return v___x_1668_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__6(void){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1669_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__10(void){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1674_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__9));
v___x_1675_ = l_Lean_stringToMessageData(v___x_1674_);
return v___x_1675_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__12(void){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__11));
v___x_1678_ = l_Lean_stringToMessageData(v___x_1677_);
return v___x_1678_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__13(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__1));
v___x_1680_ = l_Lean_stringToMessageData(v___x_1679_);
return v___x_1680_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__14(void){
_start:
{
lean_object* v_cls_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_cls_1681_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__8));
v___x_1682_ = ((lean_object*)(l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__2));
v___x_1683_ = l_Lean_Name_append(v___x_1682_, v_cls_1681_);
return v___x_1683_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__16(void){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__15));
v___x_1686_ = l_Lean_stringToMessageData(v___x_1685_);
return v___x_1686_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__18(void){
_start:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1688_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__17));
v___x_1689_ = l_Lean_stringToMessageData(v___x_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19(lean_object* v_mod_1694_, uint8_t v_isMeta_1695_, lean_object* v_hint_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v_env_1736_; uint8_t v_isExporting_1737_; lean_object* v_entry_1738_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___x_1763_; lean_object* v_env_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v___x_1734_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__6);
v___x_1735_ = lean_st_ref_get(v___y_1700_);
v_env_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc_ref(v_env_1736_);
lean_dec(v___x_1735_);
v_isExporting_1737_ = lean_ctor_get_uint8(v_env_1736_, sizeof(void*)*13);
lean_dec_ref(v_env_1736_);
lean_inc(v_mod_1694_);
v_entry_1738_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1738_, 0, v_mod_1694_);
lean_ctor_set_uint8(v_entry_1738_, sizeof(void*)*1, v_isExporting_1737_);
lean_ctor_set_uint8(v_entry_1738_, sizeof(void*)*1 + 1, v_isMeta_1695_);
v___x_1763_ = lean_st_ref_get(v___y_1700_);
v_env_1764_ = lean_ctor_get(v___x_1763_, 0);
lean_inc_ref(v_env_1764_);
lean_dec(v___x_1763_);
v___x_1765_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1766_ = lean_box(1);
v___x_1767_ = lean_box(0);
v___x_1768_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1734_, v___x_1765_, v_env_1764_, v___x_1766_, v___x_1767_);
v___x_1769_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___redArg(v___x_1768_, v_entry_1738_);
lean_dec(v___x_1768_);
if (v___x_1769_ == 0)
{
lean_object* v_toCold_1770_; lean_object* v_options_1771_; uint8_t v_hasTrace_1772_; 
v_toCold_1770_ = lean_ctor_get(v___y_1699_, 0);
v_options_1771_ = lean_ctor_get(v_toCold_1770_, 2);
v_hasTrace_1772_ = lean_ctor_get_uint8(v_options_1771_, sizeof(void*)*1);
if (v_hasTrace_1772_ == 0)
{
lean_dec(v_hint_1696_);
lean_dec(v_mod_1694_);
v___y_1740_ = v___y_1698_;
v___y_1741_ = v___y_1700_;
goto v___jp_1739_;
}
else
{
lean_object* v_inheritedTraceOptions_1773_; lean_object* v_cls_1774_; lean_object* v___y_1776_; lean_object* v___y_1777_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v_inheritedTraceOptions_1773_ = lean_ctor_get(v_toCold_1770_, 11);
v_cls_1774_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__8));
v___x_1794_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__14);
v___x_1795_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1773_, v_options_1771_, v___x_1794_);
if (v___x_1795_ == 0)
{
lean_dec(v_hint_1696_);
lean_dec(v_mod_1694_);
v___y_1740_ = v___y_1698_;
v___y_1741_ = v___y_1700_;
goto v___jp_1739_;
}
else
{
lean_object* v___x_1796_; lean_object* v___y_1798_; 
v___x_1796_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__16);
if (v_isExporting_1737_ == 0)
{
lean_object* v___x_1805_; 
v___x_1805_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__21));
v___y_1798_ = v___x_1805_;
goto v___jp_1797_;
}
else
{
lean_object* v___x_1806_; 
v___x_1806_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__22));
v___y_1798_ = v___x_1806_;
goto v___jp_1797_;
}
v___jp_1797_:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_inc_ref(v___y_1798_);
v___x_1799_ = l_Lean_stringToMessageData(v___y_1798_);
v___x_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1796_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
v___x_1801_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__18);
v___x_1802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1800_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
if (v_isMeta_1695_ == 0)
{
lean_object* v___x_1803_; 
v___x_1803_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__19));
v___y_1781_ = v___x_1802_;
v___y_1782_ = v___x_1803_;
goto v___jp_1780_;
}
else
{
lean_object* v___x_1804_; 
v___x_1804_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__20));
v___y_1781_ = v___x_1802_;
v___y_1782_ = v___x_1804_;
goto v___jp_1780_;
}
}
}
v___jp_1775_:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___y_1776_);
lean_ctor_set(v___x_1778_, 1, v___y_1777_);
v___x_1779_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_1774_, v___x_1778_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_dec_ref_known(v___x_1779_, 1);
v___y_1740_ = v___y_1698_;
v___y_1741_ = v___y_1700_;
goto v___jp_1739_;
}
else
{
lean_dec_ref_known(v_entry_1738_, 1);
return v___x_1779_;
}
}
v___jp_1780_:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; uint8_t v___x_1789_; 
lean_inc_ref(v___y_1782_);
v___x_1783_ = l_Lean_stringToMessageData(v___y_1782_);
v___x_1784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___y_1781_);
lean_ctor_set(v___x_1784_, 1, v___x_1783_);
v___x_1785_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__10);
v___x_1786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1784_);
lean_ctor_set(v___x_1786_, 1, v___x_1785_);
v___x_1787_ = l_Lean_MessageData_ofName(v_mod_1694_);
v___x_1788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1786_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = l_Lean_Name_isAnonymous(v_hint_1696_);
if (v___x_1789_ == 0)
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1790_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__12);
v___x_1791_ = l_Lean_MessageData_ofName(v_hint_1696_);
v___x_1792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___y_1776_ = v___x_1788_;
v___y_1777_ = v___x_1792_;
goto v___jp_1775_;
}
else
{
lean_object* v___x_1793_; 
lean_dec(v_hint_1696_);
v___x_1793_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__13);
v___y_1776_ = v___x_1788_;
v___y_1777_ = v___x_1793_;
goto v___jp_1775_;
}
}
}
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
lean_dec_ref_known(v_entry_1738_, 1);
lean_dec(v_hint_1696_);
lean_dec(v_mod_1694_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
return v___x_1808_;
}
v___jp_1702_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v_mctx_1718_; lean_object* v_zetaDeltaFVarIds_1719_; lean_object* v_postponed_1720_; lean_object* v_diag_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1732_; 
v___x_1714_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1);
v___x_1715_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1715_, 0, v___y_1713_);
lean_ctor_set(v___x_1715_, 1, v___y_1710_);
lean_ctor_set(v___x_1715_, 2, v___y_1705_);
lean_ctor_set(v___x_1715_, 3, v___y_1712_);
lean_ctor_set(v___x_1715_, 4, v___y_1711_);
lean_ctor_set(v___x_1715_, 5, v___x_1714_);
lean_ctor_set(v___x_1715_, 6, v___y_1708_);
lean_ctor_set(v___x_1715_, 7, v___y_1709_);
lean_ctor_set(v___x_1715_, 8, v___y_1704_);
lean_ctor_set(v___x_1715_, 9, v___y_1706_);
v___x_1716_ = lean_st_ref_put(v___y_1707_, v___x_1715_);
v___x_1717_ = lean_st_ref_take(v___y_1703_);
v_mctx_1718_ = lean_ctor_get(v___x_1717_, 0);
v_zetaDeltaFVarIds_1719_ = lean_ctor_get(v___x_1717_, 2);
v_postponed_1720_ = lean_ctor_get(v___x_1717_, 3);
v_diag_1721_ = lean_ctor_get(v___x_1717_, 4);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1732_ == 0)
{
lean_object* v_unused_1733_; 
v_unused_1733_ = lean_ctor_get(v___x_1717_, 1);
lean_dec(v_unused_1733_);
v___x_1723_ = v___x_1717_;
v_isShared_1724_ = v_isSharedCheck_1732_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_diag_1721_);
lean_inc(v_postponed_1720_);
lean_inc(v_zetaDeltaFVarIds_1719_);
lean_inc(v_mctx_1718_);
lean_dec(v___x_1717_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1732_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1728_; 
v___x_1725_ = lean_box(0);
v___x_1726_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 1, v___x_1726_);
v___x_1728_ = v___x_1723_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_mctx_1718_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1731_, 2, v_zetaDeltaFVarIds_1719_);
lean_ctor_set(v_reuseFailAlloc_1731_, 3, v_postponed_1720_);
lean_ctor_set(v_reuseFailAlloc_1731_, 4, v_diag_1721_);
v___x_1728_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = lean_st_ref_put(v___y_1703_, v___x_1728_);
v___x_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1725_);
return v___x_1730_;
}
}
}
v___jp_1739_:
{
lean_object* v___x_1742_; lean_object* v_env_1743_; lean_object* v_nextMacroScope_1744_; lean_object* v_ngen_1745_; lean_object* v_auxDeclNGen_1746_; lean_object* v_traceState_1747_; lean_object* v_recordedDeps_1748_; lean_object* v_messages_1749_; lean_object* v_infoState_1750_; lean_object* v_snapshotTasks_1751_; lean_object* v___x_1752_; lean_object* v_toEnvExtension_1753_; lean_object* v_addEntryFn_1754_; lean_object* v_asyncMode_1755_; uint8_t v_logWrites_1756_; lean_object* v___f_1757_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1742_ = lean_st_ref_take(v___y_1741_);
v_env_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc_ref(v_env_1743_);
v_nextMacroScope_1744_ = lean_ctor_get(v___x_1742_, 1);
lean_inc(v_nextMacroScope_1744_);
v_ngen_1745_ = lean_ctor_get(v___x_1742_, 2);
lean_inc_ref(v_ngen_1745_);
v_auxDeclNGen_1746_ = lean_ctor_get(v___x_1742_, 3);
lean_inc_ref(v_auxDeclNGen_1746_);
v_traceState_1747_ = lean_ctor_get(v___x_1742_, 4);
lean_inc_ref(v_traceState_1747_);
v_recordedDeps_1748_ = lean_ctor_get(v___x_1742_, 6);
lean_inc_ref(v_recordedDeps_1748_);
v_messages_1749_ = lean_ctor_get(v___x_1742_, 7);
lean_inc_ref(v_messages_1749_);
v_infoState_1750_ = lean_ctor_get(v___x_1742_, 8);
lean_inc_ref(v_infoState_1750_);
v_snapshotTasks_1751_ = lean_ctor_get(v___x_1742_, 9);
lean_inc_ref(v_snapshotTasks_1751_);
lean_dec(v___x_1742_);
v___x_1752_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_1753_ = lean_ctor_get(v___x_1752_, 0);
v_addEntryFn_1754_ = lean_ctor_get(v___x_1752_, 3);
v_asyncMode_1755_ = lean_ctor_get(v_toEnvExtension_1753_, 2);
v_logWrites_1756_ = lean_ctor_get_uint8(v_toEnvExtension_1753_, sizeof(void*)*6);
lean_inc(v_addEntryFn_1754_);
v___f_1757_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___lam__0), 3, 2);
lean_closure_set(v___f_1757_, 0, v_addEntryFn_1754_);
lean_closure_set(v___f_1757_, 1, v_entry_1738_);
v___x_1758_ = lean_box(0);
v___x_1759_ = 1;
if (v_logWrites_1756_ == 0)
{
lean_object* v___x_1760_; 
lean_inc_ref(v_toEnvExtension_1753_);
v___x_1760_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1753_, v_env_1743_, v___f_1757_, v_asyncMode_1755_, v___x_1758_, v___x_1759_);
v___y_1703_ = v___y_1740_;
v___y_1704_ = v_infoState_1750_;
v___y_1705_ = v_ngen_1745_;
v___y_1706_ = v_snapshotTasks_1751_;
v___y_1707_ = v___y_1741_;
v___y_1708_ = v_recordedDeps_1748_;
v___y_1709_ = v_messages_1749_;
v___y_1710_ = v_nextMacroScope_1744_;
v___y_1711_ = v_traceState_1747_;
v___y_1712_ = v_auxDeclNGen_1746_;
v___y_1713_ = v___x_1760_;
goto v___jp_1702_;
}
else
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
lean_inc_ref_n(v_toEnvExtension_1753_, 2);
v___x_1761_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1753_, v_env_1743_);
lean_dec_ref(v_env_1743_);
v___x_1762_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1753_, v___x_1761_, v___f_1757_, v_asyncMode_1755_, v___x_1758_, v___x_1759_);
v___y_1703_ = v___y_1740_;
v___y_1704_ = v_infoState_1750_;
v___y_1705_ = v_ngen_1745_;
v___y_1706_ = v_snapshotTasks_1751_;
v___y_1707_ = v___y_1741_;
v___y_1708_ = v_recordedDeps_1748_;
v___y_1709_ = v_messages_1749_;
v___y_1710_ = v_nextMacroScope_1744_;
v___y_1711_ = v_traceState_1747_;
v___y_1712_ = v_auxDeclNGen_1746_;
v___y_1713_ = v___x_1762_;
goto v___jp_1702_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___boxed(lean_object* v_mod_1809_, lean_object* v_isMeta_1810_, lean_object* v_hint_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
uint8_t v_isMeta_boxed_1817_; lean_object* v_res_1818_; 
v_isMeta_boxed_1817_ = lean_unbox(v_isMeta_1810_);
v_res_1818_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19(v_mod_1809_, v_isMeta_boxed_1817_, v_hint_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__20(lean_object* v___x_1819_, lean_object* v_declName_1820_, lean_object* v_as_1821_, size_t v_sz_1822_, size_t v_i_1823_, lean_object* v_b_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
uint8_t v___x_1830_; 
v___x_1830_ = lean_usize_dec_lt(v_i_1823_, v_sz_1822_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1831_; 
lean_dec(v_declName_1820_);
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v_b_1824_);
return v___x_1831_;
}
else
{
lean_object* v___x_1832_; lean_object* v_modules_1833_; lean_object* v___x_1834_; lean_object* v_a_1835_; lean_object* v___x_1836_; lean_object* v_toImport_1837_; lean_object* v_module_1838_; lean_object* v___x_1839_; uint8_t v___x_1840_; lean_object* v___x_1841_; 
v___x_1832_ = l_Lean_Environment_header(v___x_1819_);
v_modules_1833_ = lean_ctor_get(v___x_1832_, 3);
lean_inc_ref(v_modules_1833_);
lean_dec_ref(v___x_1832_);
v___x_1834_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1835_ = lean_array_uget_borrowed(v_as_1821_, v_i_1823_);
v___x_1836_ = lean_array_get(v___x_1834_, v_modules_1833_, v_a_1835_);
lean_dec_ref(v_modules_1833_);
v_toImport_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc_ref(v_toImport_1837_);
lean_dec(v___x_1836_);
v_module_1838_ = lean_ctor_get(v_toImport_1837_, 0);
lean_inc(v_module_1838_);
lean_dec_ref(v_toImport_1837_);
v___x_1839_ = lean_box(0);
v___x_1840_ = 0;
lean_inc(v_declName_1820_);
v___x_1841_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19(v_module_1838_, v___x_1840_, v_declName_1820_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
if (lean_obj_tag(v___x_1841_) == 0)
{
size_t v___x_1842_; size_t v___x_1843_; 
lean_dec_ref_known(v___x_1841_, 1);
v___x_1842_ = ((size_t)1ULL);
v___x_1843_ = lean_usize_add(v_i_1823_, v___x_1842_);
v_i_1823_ = v___x_1843_;
v_b_1824_ = v___x_1839_;
goto _start;
}
else
{
lean_dec(v_declName_1820_);
return v___x_1841_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__20___boxed(lean_object* v___x_1845_, lean_object* v_declName_1846_, lean_object* v_as_1847_, lean_object* v_sz_1848_, lean_object* v_i_1849_, lean_object* v_b_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
size_t v_sz_boxed_1856_; size_t v_i_boxed_1857_; lean_object* v_res_1858_; 
v_sz_boxed_1856_ = lean_unbox_usize(v_sz_1848_);
lean_dec(v_sz_1848_);
v_i_boxed_1857_ = lean_unbox_usize(v_i_1849_);
lean_dec(v_i_1849_);
v_res_1858_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__20(v___x_1845_, v_declName_1846_, v_as_1847_, v_sz_boxed_1856_, v_i_boxed_1857_, v_b_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec_ref(v_as_1847_);
lean_dec_ref(v___x_1845_);
return v_res_1858_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__0(void){
_start:
{
lean_object* v___x_1859_; 
v___x_1859_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14(lean_object* v_declName_1862_, uint8_t v_isMeta_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v_env_1874_; lean_object* v___y_1876_; lean_object* v___x_1889_; 
v___x_1869_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__0);
v___x_1870_ = lean_st_ref_get(v___y_1867_);
v_env_1874_ = lean_ctor_get(v___x_1870_, 0);
lean_inc_ref(v_env_1874_);
lean_dec(v___x_1870_);
v___x_1889_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1874_, v_declName_1862_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_dec_ref(v_env_1874_);
lean_dec(v_declName_1862_);
goto v___jp_1871_;
}
else
{
lean_object* v_val_1890_; lean_object* v___x_1891_; lean_object* v_modules_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; 
v_val_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_val_1890_);
lean_dec_ref_known(v___x_1889_, 1);
v___x_1891_ = l_Lean_Environment_header(v_env_1874_);
v_modules_1892_ = lean_ctor_get(v___x_1891_, 3);
lean_inc_ref(v_modules_1892_);
lean_dec_ref(v___x_1891_);
v___x_1893_ = lean_array_get_size(v_modules_1892_);
v___x_1894_ = lean_nat_dec_lt(v_val_1890_, v___x_1893_);
if (v___x_1894_ == 0)
{
lean_dec_ref(v_modules_1892_);
lean_dec(v_val_1890_);
lean_dec_ref(v_env_1874_);
lean_dec(v_declName_1862_);
goto v___jp_1871_;
}
else
{
lean_object* v___x_1895_; lean_object* v___x_1896_; uint8_t v___y_1898_; 
v___x_1895_ = lean_array_fget(v_modules_1892_, v_val_1890_);
lean_dec(v_val_1890_);
lean_dec_ref(v_modules_1892_);
v___x_1896_ = lean_st_ref_get(v___y_1867_);
if (v_isMeta_1863_ == 0)
{
lean_dec(v___x_1896_);
v___y_1898_ = v_isMeta_1863_;
goto v___jp_1897_;
}
else
{
lean_object* v_env_1909_; uint8_t v___x_1910_; 
v_env_1909_ = lean_ctor_get(v___x_1896_, 0);
lean_inc_ref(v_env_1909_);
lean_dec(v___x_1896_);
lean_inc(v_declName_1862_);
v___x_1910_ = l_Lean_isMarkedMeta(v_env_1909_, v_declName_1862_);
if (v___x_1910_ == 0)
{
v___y_1898_ = v_isMeta_1863_;
goto v___jp_1897_;
}
else
{
uint8_t v___x_1911_; 
v___x_1911_ = 0;
v___y_1898_ = v___x_1911_;
goto v___jp_1897_;
}
}
v___jp_1897_:
{
lean_object* v_toImport_1899_; lean_object* v_module_1900_; lean_object* v___x_1901_; 
v_toImport_1899_ = lean_ctor_get(v___x_1895_, 0);
lean_inc_ref(v_toImport_1899_);
lean_dec(v___x_1895_);
v_module_1900_ = lean_ctor_get(v_toImport_1899_, 0);
lean_inc(v_module_1900_);
lean_dec_ref(v_toImport_1899_);
lean_inc(v_declName_1862_);
v___x_1901_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19(v_module_1900_, v___y_1898_, v_declName_1862_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
lean_dec_ref_known(v___x_1901_, 1);
v___x_1902_ = l_Lean_indirectModUseExt;
v___x_1903_ = lean_box(1);
v___x_1904_ = lean_box(0);
lean_inc_ref(v_env_1874_);
v___x_1905_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1869_, v___x_1902_, v_env_1874_, v___x_1903_, v___x_1904_);
v___x_1906_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___redArg(v___x_1905_, v_declName_1862_);
lean_dec(v___x_1905_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v___x_1907_; 
v___x_1907_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___closed__1));
v___y_1876_ = v___x_1907_;
goto v___jp_1875_;
}
else
{
lean_object* v_val_1908_; 
v_val_1908_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_val_1908_);
lean_dec_ref_known(v___x_1906_, 1);
v___y_1876_ = v_val_1908_;
goto v___jp_1875_;
}
}
else
{
lean_dec_ref(v_env_1874_);
lean_dec(v_declName_1862_);
return v___x_1901_;
}
}
}
}
v___jp_1871_:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
return v___x_1873_;
}
v___jp_1875_:
{
lean_object* v___x_1877_; size_t v_sz_1878_; size_t v___x_1879_; lean_object* v___x_1880_; 
v___x_1877_ = lean_box(0);
v_sz_1878_ = lean_array_size(v___y_1876_);
v___x_1879_ = ((size_t)0ULL);
v___x_1880_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__20(v_env_1874_, v_declName_1862_, v___y_1876_, v_sz_1878_, v___x_1879_, v___x_1877_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
lean_dec_ref(v___y_1876_);
lean_dec_ref(v_env_1874_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1880_);
if (v_isSharedCheck_1887_ == 0)
{
lean_object* v_unused_1888_; 
v_unused_1888_ = lean_ctor_get(v___x_1880_, 0);
lean_dec(v_unused_1888_);
v___x_1882_ = v___x_1880_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_dec(v___x_1880_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v___x_1877_);
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1877_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
else
{
return v___x_1880_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14___boxed(lean_object* v_declName_1912_, lean_object* v_isMeta_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
uint8_t v_isMeta_boxed_1919_; lean_object* v_res_1920_; 
v_isMeta_boxed_1919_ = lean_unbox(v_isMeta_1913_);
v_res_1920_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14(v_declName_1912_, v_isMeta_boxed_1919_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec_ref(v___y_1914_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___redArg(lean_object* v_ref_1921_, lean_object* v_msg_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v_toCold_1928_; lean_object* v_currRecDepth_1929_; lean_object* v_ref_1930_; uint16_t v_optionFlags_1931_; uint8_t v_suppressElabErrors_1932_; uint8_t v_checkDeprecated_1933_; uint8_t v_isRecordingDeps_1934_; lean_object* v_ref_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v_toCold_1928_ = lean_ctor_get(v___y_1925_, 0);
v_currRecDepth_1929_ = lean_ctor_get(v___y_1925_, 1);
v_ref_1930_ = lean_ctor_get(v___y_1925_, 2);
v_optionFlags_1931_ = lean_ctor_get_uint16(v___y_1925_, sizeof(void*)*3);
v_suppressElabErrors_1932_ = lean_ctor_get_uint8(v___y_1925_, sizeof(void*)*3 + 2);
v_checkDeprecated_1933_ = lean_ctor_get_uint8(v___y_1925_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1934_ = lean_ctor_get_uint8(v___y_1925_, sizeof(void*)*3 + 4);
v_ref_1935_ = l_Lean_replaceRef(v_ref_1921_, v_ref_1930_);
lean_inc(v_currRecDepth_1929_);
lean_inc_ref(v_toCold_1928_);
v___x_1936_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1936_, 0, v_toCold_1928_);
lean_ctor_set(v___x_1936_, 1, v_currRecDepth_1929_);
lean_ctor_set(v___x_1936_, 2, v_ref_1935_);
lean_ctor_set_uint16(v___x_1936_, sizeof(void*)*3, v_optionFlags_1931_);
lean_ctor_set_uint8(v___x_1936_, sizeof(void*)*3 + 2, v_suppressElabErrors_1932_);
lean_ctor_set_uint8(v___x_1936_, sizeof(void*)*3 + 3, v_checkDeprecated_1933_);
lean_ctor_set_uint8(v___x_1936_, sizeof(void*)*3 + 4, v_isRecordingDeps_1934_);
v___x_1937_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v_msg_1922_, v___y_1923_, v___y_1924_, v___x_1936_, v___y_1926_);
lean_dec_ref_known(v___x_1936_, 3);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___redArg___boxed(lean_object* v_ref_1938_, lean_object* v_msg_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___redArg(v_ref_1938_, v_msg_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v_ref_1938_);
return v_res_1945_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0(void){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5___redArg___closed__0);
v___x_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1946_);
return v___x_1947_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__1(void){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1948_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0);
v___x_1949_ = lean_unsigned_to_nat(0u);
v___x_1950_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
lean_ctor_set(v___x_1950_, 2, v___x_1949_);
lean_ctor_set(v___x_1950_, 3, v___x_1949_);
lean_ctor_set(v___x_1950_, 4, v___x_1948_);
lean_ctor_set(v___x_1950_, 5, v___x_1948_);
lean_ctor_set(v___x_1950_, 6, v___x_1948_);
lean_ctor_set(v___x_1950_, 7, v___x_1948_);
lean_ctor_set(v___x_1950_, 8, v___x_1948_);
lean_ctor_set(v___x_1950_, 9, v___x_1948_);
lean_ctor_set(v___x_1950_, 10, v___x_1948_);
return v___x_1950_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__2(void){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1951_ = lean_unsigned_to_nat(32u);
v___x_1952_ = lean_mk_empty_array_with_capacity(v___x_1951_);
v___x_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1952_);
return v___x_1953_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__3(void){
_start:
{
size_t v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1954_ = ((size_t)5ULL);
v___x_1955_ = lean_unsigned_to_nat(0u);
v___x_1956_ = lean_unsigned_to_nat(32u);
v___x_1957_ = lean_mk_empty_array_with_capacity(v___x_1956_);
v___x_1958_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__2);
v___x_1959_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
lean_ctor_set(v___x_1959_, 1, v___x_1957_);
lean_ctor_set(v___x_1959_, 2, v___x_1955_);
lean_ctor_set(v___x_1959_, 3, v___x_1955_);
lean_ctor_set_usize(v___x_1959_, 4, v___x_1954_);
return v___x_1959_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__4(void){
_start:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1960_ = lean_box(1);
v___x_1961_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__3);
v___x_1962_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__0);
v___x_1963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
lean_ctor_set(v___x_1963_, 1, v___x_1961_);
lean_ctor_set(v___x_1963_, 2, v___x_1960_);
return v___x_1963_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__5));
v___x_1966_ = l_Lean_stringToMessageData(v___x_1965_);
return v___x_1966_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__8(void){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__7));
v___x_1969_ = l_Lean_stringToMessageData(v___x_1968_);
return v___x_1969_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__10(void){
_start:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__9));
v___x_1972_ = l_Lean_stringToMessageData(v___x_1971_);
return v___x_1972_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__12(void){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__11));
v___x_1975_ = l_Lean_stringToMessageData(v___x_1974_);
return v___x_1975_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__14(void){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__13));
v___x_1978_ = l_Lean_stringToMessageData(v___x_1977_);
return v___x_1978_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__16(void){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__15));
v___x_1981_ = l_Lean_stringToMessageData(v___x_1980_);
return v___x_1981_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__18(void){
_start:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1983_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__17));
v___x_1984_ = l_Lean_stringToMessageData(v___x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg(lean_object* v_msg_1985_, lean_object* v_declHint_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v_env_1991_; uint8_t v___x_1992_; 
v___x_1989_ = lean_box(0);
v___x_1990_ = lean_st_ref_get(v___y_1987_);
v_env_1991_ = lean_ctor_get(v___x_1990_, 0);
lean_inc_ref(v_env_1991_);
lean_dec(v___x_1990_);
v___x_1992_ = l_Lean_Name_isAnonymous(v_declHint_1986_);
if (v___x_1992_ == 0)
{
uint8_t v_isExporting_1993_; 
v_isExporting_1993_ = lean_ctor_get_uint8(v_env_1991_, sizeof(void*)*13);
if (v_isExporting_1993_ == 0)
{
lean_object* v___x_1994_; 
lean_dec_ref(v_env_1991_);
lean_dec(v_declHint_1986_);
v___x_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1994_, 0, v_msg_1985_);
return v___x_1994_;
}
else
{
lean_object* v___x_1995_; uint8_t v___x_1996_; 
lean_inc_ref(v_env_1991_);
v___x_1995_ = l_Lean_Environment_setExporting(v_env_1991_, v___x_1992_);
lean_inc(v_declHint_1986_);
lean_inc_ref(v___x_1995_);
v___x_1996_ = l_Lean_Environment_contains(v___x_1995_, v_declHint_1986_, v_isExporting_1993_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; 
lean_dec_ref(v___x_1995_);
lean_dec_ref(v_env_1991_);
lean_dec(v_declHint_1986_);
v___x_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1997_, 0, v_msg_1985_);
return v___x_1997_;
}
else
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v_c_2003_; lean_object* v___x_2004_; 
v___x_1998_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__1);
v___x_1999_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__4);
v___x_2000_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1995_);
v___x_2001_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2001_, 0, v___x_1995_);
lean_ctor_set(v___x_2001_, 1, v___x_1998_);
lean_ctor_set(v___x_2001_, 2, v___x_1999_);
lean_ctor_set(v___x_2001_, 3, v___x_2000_);
lean_inc(v_declHint_1986_);
v___x_2002_ = l_Lean_MessageData_ofConstName(v_declHint_1986_, v___x_1992_);
v_c_2003_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2003_, 0, v___x_2001_);
lean_ctor_set(v_c_2003_, 1, v___x_2002_);
v___x_2004_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1995_, v_declHint_1986_);
lean_dec_ref(v___x_1995_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
lean_dec_ref(v_env_1991_);
lean_dec(v_declHint_1986_);
v___x_2005_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6);
v___x_2006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
lean_ctor_set(v___x_2006_, 1, v_c_2003_);
v___x_2007_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__8);
v___x_2008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2006_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = l_Lean_MessageData_note(v___x_2008_);
v___x_2010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2010_, 0, v_msg_1985_);
lean_ctor_set(v___x_2010_, 1, v___x_2009_);
v___x_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
return v___x_2011_;
}
else
{
lean_object* v_val_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2046_; 
v_val_2012_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2014_ = v___x_2004_;
v_isShared_2015_ = v_isSharedCheck_2046_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_val_2012_);
lean_dec(v___x_2004_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2046_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2016_; lean_object* v_moduleNames_2017_; lean_object* v_mod_2018_; uint8_t v___x_2019_; 
v___x_2016_ = l_Lean_Environment_header(v_env_1991_);
lean_dec_ref(v_env_1991_);
v_moduleNames_2017_ = lean_ctor_get(v___x_2016_, 4);
lean_inc_ref(v_moduleNames_2017_);
lean_dec_ref(v___x_2016_);
v_mod_2018_ = lean_array_get(v___x_1989_, v_moduleNames_2017_, v_val_2012_);
lean_dec(v_val_2012_);
lean_dec_ref(v_moduleNames_2017_);
v___x_2019_ = l_Lean_isPrivateName(v_declHint_1986_);
lean_dec(v_declHint_1986_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2031_; 
v___x_2020_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__10);
v___x_2021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
lean_ctor_set(v___x_2021_, 1, v_c_2003_);
v___x_2022_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__12);
v___x_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2021_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = l_Lean_MessageData_ofName(v_mod_2018_);
v___x_2025_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2023_);
lean_ctor_set(v___x_2025_, 1, v___x_2024_);
v___x_2026_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__14);
v___x_2027_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2025_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = l_Lean_MessageData_note(v___x_2027_);
v___x_2029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2029_, 0, v_msg_1985_);
lean_ctor_set(v___x_2029_, 1, v___x_2028_);
if (v_isShared_2015_ == 0)
{
lean_ctor_set_tag(v___x_2014_, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2029_);
v___x_2031_ = v___x_2014_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v___x_2029_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
else
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2033_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__6);
v___x_2034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
lean_ctor_set(v___x_2034_, 1, v_c_2003_);
v___x_2035_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__16);
v___x_2036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2034_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = l_Lean_MessageData_ofName(v_mod_2018_);
v___x_2038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2036_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___closed__18);
v___x_2040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2038_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v___x_2041_ = l_Lean_MessageData_note(v___x_2040_);
v___x_2042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2042_, 0, v_msg_1985_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
if (v_isShared_2015_ == 0)
{
lean_ctor_set_tag(v___x_2014_, 0);
lean_ctor_set(v___x_2014_, 0, v___x_2042_);
v___x_2044_ = v___x_2014_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2047_; 
lean_dec_ref(v_env_1991_);
lean_dec(v_declHint_1986_);
v___x_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2047_, 0, v_msg_1985_);
return v___x_2047_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg___boxed(lean_object* v_msg_2048_, lean_object* v_declHint_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg(v_msg_2048_, v_declHint_2049_, v___y_2050_);
lean_dec(v___y_2050_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30(lean_object* v_msg_2053_, lean_object* v_declHint_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2070_; 
v___x_2060_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg(v_msg_2053_, v_declHint_2054_, v___y_2058_);
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2063_ = v___x_2060_;
v_isShared_2064_ = v_isSharedCheck_2070_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2070_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2065_ = l_Lean_unknownIdentifierMessageTag;
v___x_2066_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set(v___x_2066_, 1, v_a_2061_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2066_);
v___x_2068_ = v___x_2063_;
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30___boxed(lean_object* v_msg_2071_, lean_object* v_declHint_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30(v_msg_2071_, v_declHint_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___redArg(lean_object* v_ref_2079_, lean_object* v_msg_2080_, lean_object* v_declHint_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_){
_start:
{
lean_object* v___x_2087_; lean_object* v_a_2088_; lean_object* v___x_2089_; 
v___x_2087_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30(v_msg_2080_, v_declHint_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2088_);
lean_dec_ref(v___x_2087_);
v___x_2089_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___redArg(v_ref_2079_, v_a_2088_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___redArg___boxed(lean_object* v_ref_2090_, lean_object* v_msg_2091_, lean_object* v_declHint_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___redArg(v_ref_2090_, v_msg_2091_, v_declHint_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec(v_ref_2090_);
return v_res_2098_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__1(void){
_start:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
v___x_2100_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__0));
v___x_2101_ = l_Lean_stringToMessageData(v___x_2100_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg(lean_object* v_ref_2102_, lean_object* v_constName_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
lean_object* v___x_2109_; uint8_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2109_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___closed__1);
v___x_2110_ = 0;
lean_inc(v_constName_2103_);
v___x_2111_ = l_Lean_MessageData_ofConstName(v_constName_2103_, v___x_2110_);
v___x_2112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2109_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_2114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2112_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___redArg(v_ref_2102_, v___x_2114_, v_constName_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg___boxed(lean_object* v_ref_2116_, lean_object* v_constName_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v_res_2123_; 
v_res_2123_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg(v_ref_2116_, v_constName_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec(v___y_2119_);
lean_dec_ref(v___y_2118_);
lean_dec(v_ref_2116_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___redArg(lean_object* v_constName_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_ref_2130_; lean_object* v___x_2131_; 
v_ref_2130_ = lean_ctor_get(v___y_2127_, 2);
v___x_2131_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg(v_ref_2130_, v_constName_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___redArg___boxed(lean_object* v_constName_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___redArg(v_constName_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6(lean_object* v_constName_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v___x_2145_; lean_object* v_env_2146_; uint8_t v___x_2147_; lean_object* v___x_2148_; 
v___x_2145_ = lean_st_ref_get(v___y_2143_);
v_env_2146_ = lean_ctor_get(v___x_2145_, 0);
lean_inc_ref(v_env_2146_);
lean_dec(v___x_2145_);
v___x_2147_ = 0;
lean_inc(v_constName_2139_);
v___x_2148_ = l_Lean_Environment_find_x3f(v_env_2146_, v_constName_2139_, v___x_2147_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v___x_2149_; 
v___x_2149_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___redArg(v_constName_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_);
return v___x_2149_;
}
else
{
lean_object* v_val_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
lean_dec(v_constName_2139_);
v_val_2150_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2148_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_val_2150_);
lean_dec(v___x_2148_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
lean_ctor_set_tag(v___x_2152_, 0);
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_val_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6___boxed(lean_object* v_constName_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6(v_constName_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
lean_dec(v___y_2160_);
lean_dec_ref(v___y_2159_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__8(size_t v_sz_2165_, size_t v_i_2166_, lean_object* v_bs_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
uint8_t v___x_2173_; 
v___x_2173_ = lean_usize_dec_lt(v_i_2166_, v_sz_2165_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_bs_2167_);
return v___x_2174_;
}
else
{
lean_object* v_v_2175_; lean_object* v___x_2176_; lean_object* v_bs_x27_2177_; lean_object* v___x_2178_; 
v_v_2175_ = lean_array_uget(v_bs_2167_, v_i_2166_);
v___x_2176_ = lean_unsigned_to_nat(0u);
v_bs_x27_2177_ = lean_array_uset(v_bs_2167_, v_i_2166_, v___x_2176_);
v___x_2178_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg(v_v_2175_, v___y_2169_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; size_t v___x_2180_; size_t v___x_2181_; lean_object* v___x_2182_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2180_ = ((size_t)1ULL);
v___x_2181_ = lean_usize_add(v_i_2166_, v___x_2180_);
v___x_2182_ = lean_array_uset(v_bs_x27_2177_, v_i_2166_, v_a_2179_);
v_i_2166_ = v___x_2181_;
v_bs_2167_ = v___x_2182_;
goto _start;
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec_ref(v_bs_x27_2177_);
v_a_2184_ = lean_ctor_get(v___x_2178_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2178_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2178_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__8___boxed(lean_object* v_sz_2192_, lean_object* v_i_2193_, lean_object* v_bs_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
size_t v_sz_boxed_2200_; size_t v_i_boxed_2201_; lean_object* v_res_2202_; 
v_sz_boxed_2200_ = lean_unbox_usize(v_sz_2192_);
lean_dec(v_sz_2192_);
v_i_boxed_2201_ = lean_unbox_usize(v_i_2193_);
lean_dec(v_i_2193_);
v_res_2202_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__8(v_sz_boxed_2200_, v_i_boxed_2201_, v_bs_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26_spec__34___redArg(lean_object* v_x_2203_, lean_object* v_x_2204_, lean_object* v_x_2205_, lean_object* v_x_2206_){
_start:
{
lean_object* v_ks_2207_; lean_object* v_vs_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2232_; 
v_ks_2207_ = lean_ctor_get(v_x_2203_, 0);
v_vs_2208_ = lean_ctor_get(v_x_2203_, 1);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_x_2203_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2210_ = v_x_2203_;
v_isShared_2211_ = v_isSharedCheck_2232_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_vs_2208_);
lean_inc(v_ks_2207_);
lean_dec(v_x_2203_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2232_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2212_; uint8_t v___x_2213_; 
v___x_2212_ = lean_array_get_size(v_ks_2207_);
v___x_2213_ = lean_nat_dec_lt(v_x_2204_, v___x_2212_);
if (v___x_2213_ == 0)
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2217_; 
lean_dec(v_x_2204_);
v___x_2214_ = lean_array_push(v_ks_2207_, v_x_2205_);
v___x_2215_ = lean_array_push(v_vs_2208_, v_x_2206_);
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 1, v___x_2215_);
lean_ctor_set(v___x_2210_, 0, v___x_2214_);
v___x_2217_ = v___x_2210_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v___x_2214_);
lean_ctor_set(v_reuseFailAlloc_2218_, 1, v___x_2215_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
else
{
lean_object* v_k_x27_2219_; uint8_t v___x_2220_; 
v_k_x27_2219_ = lean_array_fget_borrowed(v_ks_2207_, v_x_2204_);
v___x_2220_ = l_Lean_instBEqMVarId_beq(v_x_2205_, v_k_x27_2219_);
if (v___x_2220_ == 0)
{
lean_object* v___x_2222_; 
if (v_isShared_2211_ == 0)
{
v___x_2222_ = v___x_2210_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_ks_2207_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v_vs_2208_);
v___x_2222_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = lean_unsigned_to_nat(1u);
v___x_2224_ = lean_nat_add(v_x_2204_, v___x_2223_);
lean_dec(v_x_2204_);
v_x_2203_ = v___x_2222_;
v_x_2204_ = v___x_2224_;
goto _start;
}
}
else
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2230_; 
v___x_2227_ = lean_array_fset(v_ks_2207_, v_x_2204_, v_x_2205_);
v___x_2228_ = lean_array_fset(v_vs_2208_, v_x_2204_, v_x_2206_);
lean_dec(v_x_2204_);
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 1, v___x_2228_);
lean_ctor_set(v___x_2210_, 0, v___x_2227_);
v___x_2230_ = v___x_2210_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2227_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v___x_2228_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26___redArg(lean_object* v_n_2233_, lean_object* v_k_2234_, lean_object* v_v_2235_){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2236_ = lean_unsigned_to_nat(0u);
v___x_2237_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26_spec__34___redArg(v_n_2233_, v___x_2236_, v_k_2234_, v_v_2235_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_2238_; 
v___x_2238_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg(lean_object* v_x_2239_, size_t v_x_2240_, size_t v_x_2241_, lean_object* v_x_2242_, lean_object* v_x_2243_){
_start:
{
if (lean_obj_tag(v_x_2239_) == 0)
{
lean_object* v_es_2244_; size_t v___x_2245_; size_t v___x_2246_; lean_object* v_j_2247_; lean_object* v___x_2248_; uint8_t v___x_2249_; 
v_es_2244_ = lean_ctor_get(v_x_2239_, 0);
v___x_2245_ = ((size_t)31ULL);
v___x_2246_ = lean_usize_land(v_x_2240_, v___x_2245_);
v_j_2247_ = lean_usize_to_nat(v___x_2246_);
v___x_2248_ = lean_array_get_size(v_es_2244_);
v___x_2249_ = lean_nat_dec_lt(v_j_2247_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_dec(v_j_2247_);
lean_dec(v_x_2243_);
lean_dec(v_x_2242_);
return v_x_2239_;
}
else
{
lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2288_; 
lean_inc_ref(v_es_2244_);
v_isSharedCheck_2288_ = !lean_is_exclusive(v_x_2239_);
if (v_isSharedCheck_2288_ == 0)
{
lean_object* v_unused_2289_; 
v_unused_2289_ = lean_ctor_get(v_x_2239_, 0);
lean_dec(v_unused_2289_);
v___x_2251_ = v_x_2239_;
v_isShared_2252_ = v_isSharedCheck_2288_;
goto v_resetjp_2250_;
}
else
{
lean_dec(v_x_2239_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2288_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v_v_2253_; lean_object* v___x_2254_; lean_object* v_xs_x27_2255_; lean_object* v___y_2257_; 
v_v_2253_ = lean_array_fget(v_es_2244_, v_j_2247_);
v___x_2254_ = lean_box(0);
v_xs_x27_2255_ = lean_array_fset(v_es_2244_, v_j_2247_, v___x_2254_);
switch(lean_obj_tag(v_v_2253_))
{
case 0:
{
lean_object* v_key_2262_; lean_object* v_val_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2273_; 
v_key_2262_ = lean_ctor_get(v_v_2253_, 0);
v_val_2263_ = lean_ctor_get(v_v_2253_, 1);
v_isSharedCheck_2273_ = !lean_is_exclusive(v_v_2253_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2265_ = v_v_2253_;
v_isShared_2266_ = v_isSharedCheck_2273_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_val_2263_);
lean_inc(v_key_2262_);
lean_dec(v_v_2253_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2273_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
uint8_t v___x_2267_; 
v___x_2267_ = l_Lean_instBEqMVarId_beq(v_x_2242_, v_key_2262_);
if (v___x_2267_ == 0)
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
lean_del_object(v___x_2265_);
v___x_2268_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2262_, v_val_2263_, v_x_2242_, v_x_2243_);
v___x_2269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2268_);
v___y_2257_ = v___x_2269_;
goto v___jp_2256_;
}
else
{
lean_object* v___x_2271_; 
lean_dec(v_val_2263_);
lean_dec(v_key_2262_);
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 1, v_x_2243_);
lean_ctor_set(v___x_2265_, 0, v_x_2242_);
v___x_2271_ = v___x_2265_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_x_2242_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v_x_2243_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
v___y_2257_ = v___x_2271_;
goto v___jp_2256_;
}
}
}
}
case 1:
{
lean_object* v_node_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2286_; 
v_node_2274_ = lean_ctor_get(v_v_2253_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_v_2253_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2276_ = v_v_2253_;
v_isShared_2277_ = v_isSharedCheck_2286_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_node_2274_);
lean_dec(v_v_2253_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2286_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
size_t v___x_2278_; size_t v___x_2279_; size_t v___x_2280_; size_t v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2278_ = ((size_t)5ULL);
v___x_2279_ = lean_usize_shift_right(v_x_2240_, v___x_2278_);
v___x_2280_ = ((size_t)1ULL);
v___x_2281_ = lean_usize_add(v_x_2241_, v___x_2280_);
v___x_2282_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg(v_node_2274_, v___x_2279_, v___x_2281_, v_x_2242_, v_x_2243_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v___x_2282_);
v___x_2284_ = v___x_2276_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
v___y_2257_ = v___x_2284_;
goto v___jp_2256_;
}
}
}
default: 
{
lean_object* v___x_2287_; 
v___x_2287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2287_, 0, v_x_2242_);
lean_ctor_set(v___x_2287_, 1, v_x_2243_);
v___y_2257_ = v___x_2287_;
goto v___jp_2256_;
}
}
v___jp_2256_:
{
lean_object* v___x_2258_; lean_object* v___x_2260_; 
v___x_2258_ = lean_array_fset(v_xs_x27_2255_, v_j_2247_, v___y_2257_);
lean_dec(v_j_2247_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 0, v___x_2258_);
v___x_2260_ = v___x_2251_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2261_; 
v_reuseFailAlloc_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2261_, 0, v___x_2258_);
v___x_2260_ = v_reuseFailAlloc_2261_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
return v___x_2260_;
}
}
}
}
}
else
{
lean_object* v_ks_2290_; lean_object* v_vs_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2309_; 
v_ks_2290_ = lean_ctor_get(v_x_2239_, 0);
v_vs_2291_ = lean_ctor_get(v_x_2239_, 1);
v_isSharedCheck_2309_ = !lean_is_exclusive(v_x_2239_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2293_ = v_x_2239_;
v_isShared_2294_ = v_isSharedCheck_2309_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_vs_2291_);
lean_inc(v_ks_2290_);
lean_dec(v_x_2239_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2309_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_ks_2290_);
lean_ctor_set(v_reuseFailAlloc_2308_, 1, v_vs_2291_);
v___x_2296_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
lean_object* v_newNode_2297_; size_t v___x_2298_; uint8_t v___x_2299_; 
v_newNode_2297_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26___redArg(v___x_2296_, v_x_2242_, v_x_2243_);
v___x_2298_ = ((size_t)7ULL);
v___x_2299_ = lean_usize_dec_le(v___x_2298_, v_x_2241_);
if (v___x_2299_ == 0)
{
lean_object* v___x_2300_; lean_object* v___x_2301_; uint8_t v___x_2302_; 
v___x_2300_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2297_);
v___x_2301_ = lean_unsigned_to_nat(4u);
v___x_2302_ = lean_nat_dec_lt(v___x_2300_, v___x_2301_);
lean_dec(v___x_2300_);
if (v___x_2302_ == 0)
{
lean_object* v_ks_2303_; lean_object* v_vs_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v_ks_2303_ = lean_ctor_get(v_newNode_2297_, 0);
lean_inc_ref(v_ks_2303_);
v_vs_2304_ = lean_ctor_get(v_newNode_2297_, 1);
lean_inc_ref(v_vs_2304_);
lean_dec_ref(v_newNode_2297_);
v___x_2305_ = lean_unsigned_to_nat(0u);
v___x_2306_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___closed__0);
v___x_2307_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___redArg(v_x_2241_, v_ks_2303_, v_vs_2304_, v___x_2305_, v___x_2306_);
lean_dec_ref(v_vs_2304_);
lean_dec_ref(v_ks_2303_);
return v___x_2307_;
}
else
{
return v_newNode_2297_;
}
}
else
{
return v_newNode_2297_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___redArg(size_t v_depth_2310_, lean_object* v_keys_2311_, lean_object* v_vals_2312_, lean_object* v_i_2313_, lean_object* v_entries_2314_){
_start:
{
lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2315_ = lean_array_get_size(v_keys_2311_);
v___x_2316_ = lean_nat_dec_lt(v_i_2313_, v___x_2315_);
if (v___x_2316_ == 0)
{
lean_dec(v_i_2313_);
return v_entries_2314_;
}
else
{
lean_object* v_k_2317_; lean_object* v_v_2318_; uint64_t v___x_2319_; size_t v_h_2320_; size_t v___x_2321_; lean_object* v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; size_t v___x_2325_; size_t v_h_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
v_k_2317_ = lean_array_fget_borrowed(v_keys_2311_, v_i_2313_);
v_v_2318_ = lean_array_fget_borrowed(v_vals_2312_, v_i_2313_);
v___x_2319_ = l_Lean_instHashableMVarId_hash(v_k_2317_);
v_h_2320_ = lean_uint64_to_usize(v___x_2319_);
v___x_2321_ = ((size_t)5ULL);
v___x_2322_ = lean_unsigned_to_nat(1u);
v___x_2323_ = ((size_t)1ULL);
v___x_2324_ = lean_usize_sub(v_depth_2310_, v___x_2323_);
v___x_2325_ = lean_usize_mul(v___x_2321_, v___x_2324_);
v_h_2326_ = lean_usize_shift_right(v_h_2320_, v___x_2325_);
v___x_2327_ = lean_nat_add(v_i_2313_, v___x_2322_);
lean_dec(v_i_2313_);
lean_inc(v_v_2318_);
lean_inc(v_k_2317_);
v___x_2328_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg(v_entries_2314_, v_h_2326_, v_depth_2310_, v_k_2317_, v_v_2318_);
v_i_2313_ = v___x_2327_;
v_entries_2314_ = v___x_2328_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___redArg___boxed(lean_object* v_depth_2330_, lean_object* v_keys_2331_, lean_object* v_vals_2332_, lean_object* v_i_2333_, lean_object* v_entries_2334_){
_start:
{
size_t v_depth_boxed_2335_; lean_object* v_res_2336_; 
v_depth_boxed_2335_ = lean_unbox_usize(v_depth_2330_);
lean_dec(v_depth_2330_);
v_res_2336_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___redArg(v_depth_boxed_2335_, v_keys_2331_, v_vals_2332_, v_i_2333_, v_entries_2334_);
lean_dec_ref(v_vals_2332_);
lean_dec_ref(v_keys_2331_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg___boxed(lean_object* v_x_2337_, lean_object* v_x_2338_, lean_object* v_x_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_){
_start:
{
size_t v_x_164516__boxed_2342_; size_t v_x_164517__boxed_2343_; lean_object* v_res_2344_; 
v_x_164516__boxed_2342_ = lean_unbox_usize(v_x_2338_);
lean_dec(v_x_2338_);
v_x_164517__boxed_2343_ = lean_unbox_usize(v_x_2339_);
lean_dec(v_x_2339_);
v_res_2344_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg(v_x_2337_, v_x_164516__boxed_2342_, v_x_164517__boxed_2343_, v_x_2340_, v_x_2341_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12___redArg(lean_object* v_x_2345_, lean_object* v_x_2346_, lean_object* v_x_2347_){
_start:
{
uint64_t v___x_2348_; size_t v___x_2349_; size_t v___x_2350_; lean_object* v___x_2351_; 
v___x_2348_ = l_Lean_instHashableMVarId_hash(v_x_2346_);
v___x_2349_ = lean_uint64_to_usize(v___x_2348_);
v___x_2350_ = ((size_t)1ULL);
v___x_2351_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg(v_x_2345_, v___x_2349_, v___x_2350_, v_x_2346_, v_x_2347_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(lean_object* v_mvarId_2352_, lean_object* v_val_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v___x_2356_; lean_object* v_mctx_2357_; lean_object* v_cache_2358_; lean_object* v_zetaDeltaFVarIds_2359_; lean_object* v_postponed_2360_; lean_object* v_diag_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2390_; 
v___x_2356_ = lean_st_ref_take(v___y_2354_);
v_mctx_2357_ = lean_ctor_get(v___x_2356_, 0);
v_cache_2358_ = lean_ctor_get(v___x_2356_, 1);
v_zetaDeltaFVarIds_2359_ = lean_ctor_get(v___x_2356_, 2);
v_postponed_2360_ = lean_ctor_get(v___x_2356_, 3);
v_diag_2361_ = lean_ctor_get(v___x_2356_, 4);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2363_ = v___x_2356_;
v_isShared_2364_ = v_isSharedCheck_2390_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_diag_2361_);
lean_inc(v_postponed_2360_);
lean_inc(v_zetaDeltaFVarIds_2359_);
lean_inc(v_cache_2358_);
lean_inc(v_mctx_2357_);
lean_dec(v___x_2356_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2390_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v_depth_2365_; lean_object* v_levelAssignDepth_2366_; lean_object* v_lmvarCounter_2367_; lean_object* v_mvarCounter_2368_; lean_object* v_lDecls_2369_; lean_object* v_decls_2370_; lean_object* v_userNames_2371_; lean_object* v_lAssignment_2372_; lean_object* v_eAssignment_2373_; lean_object* v_dAssignment_2374_; lean_object* v_instanceTypedMVars_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2389_; 
v_depth_2365_ = lean_ctor_get(v_mctx_2357_, 0);
v_levelAssignDepth_2366_ = lean_ctor_get(v_mctx_2357_, 1);
v_lmvarCounter_2367_ = lean_ctor_get(v_mctx_2357_, 2);
v_mvarCounter_2368_ = lean_ctor_get(v_mctx_2357_, 3);
v_lDecls_2369_ = lean_ctor_get(v_mctx_2357_, 4);
v_decls_2370_ = lean_ctor_get(v_mctx_2357_, 5);
v_userNames_2371_ = lean_ctor_get(v_mctx_2357_, 6);
v_lAssignment_2372_ = lean_ctor_get(v_mctx_2357_, 7);
v_eAssignment_2373_ = lean_ctor_get(v_mctx_2357_, 8);
v_dAssignment_2374_ = lean_ctor_get(v_mctx_2357_, 9);
v_instanceTypedMVars_2375_ = lean_ctor_get(v_mctx_2357_, 10);
v_isSharedCheck_2389_ = !lean_is_exclusive(v_mctx_2357_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2377_ = v_mctx_2357_;
v_isShared_2378_ = v_isSharedCheck_2389_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_instanceTypedMVars_2375_);
lean_inc(v_dAssignment_2374_);
lean_inc(v_eAssignment_2373_);
lean_inc(v_lAssignment_2372_);
lean_inc(v_userNames_2371_);
lean_inc(v_decls_2370_);
lean_inc(v_lDecls_2369_);
lean_inc(v_mvarCounter_2368_);
lean_inc(v_lmvarCounter_2367_);
lean_inc(v_levelAssignDepth_2366_);
lean_inc(v_depth_2365_);
lean_dec(v_mctx_2357_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2389_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
v___x_2379_ = lean_box(0);
v___x_2380_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12___redArg(v_eAssignment_2373_, v_mvarId_2352_, v_val_2353_);
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 8, v___x_2380_);
v___x_2382_ = v___x_2377_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_depth_2365_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v_levelAssignDepth_2366_);
lean_ctor_set(v_reuseFailAlloc_2388_, 2, v_lmvarCounter_2367_);
lean_ctor_set(v_reuseFailAlloc_2388_, 3, v_mvarCounter_2368_);
lean_ctor_set(v_reuseFailAlloc_2388_, 4, v_lDecls_2369_);
lean_ctor_set(v_reuseFailAlloc_2388_, 5, v_decls_2370_);
lean_ctor_set(v_reuseFailAlloc_2388_, 6, v_userNames_2371_);
lean_ctor_set(v_reuseFailAlloc_2388_, 7, v_lAssignment_2372_);
lean_ctor_set(v_reuseFailAlloc_2388_, 8, v___x_2380_);
lean_ctor_set(v_reuseFailAlloc_2388_, 9, v_dAssignment_2374_);
lean_ctor_set(v_reuseFailAlloc_2388_, 10, v_instanceTypedMVars_2375_);
v___x_2382_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2384_; 
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 0, v___x_2382_);
v___x_2384_ = v___x_2363_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v___x_2382_);
lean_ctor_set(v_reuseFailAlloc_2387_, 1, v_cache_2358_);
lean_ctor_set(v_reuseFailAlloc_2387_, 2, v_zetaDeltaFVarIds_2359_);
lean_ctor_set(v_reuseFailAlloc_2387_, 3, v_postponed_2360_);
lean_ctor_set(v_reuseFailAlloc_2387_, 4, v_diag_2361_);
v___x_2384_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = lean_st_ref_put(v___y_2354_, v___x_2384_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2379_);
return v___x_2386_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg___boxed(lean_object* v_mvarId_2391_, lean_object* v_val_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v_mvarId_2391_, v_val_2392_, v___y_2393_);
lean_dec(v___y_2393_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__6(uint8_t v___x_2396_, lean_object* v_a_2397_, lean_object* v___x_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v___y_2405_; lean_object* v___x_2422_; uint8_t v_transparency_2423_; uint8_t v___x_2424_; 
v___x_2422_ = l_Lean_Meta_Context_config(v___y_2399_);
v_transparency_2423_ = lean_ctor_get_uint8(v___x_2422_, 9);
lean_dec_ref(v___x_2422_);
v___x_2424_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2423_, v___x_2396_);
if (v___x_2424_ == 0)
{
lean_object* v_keyedConfig_2425_; uint8_t v_trackZetaDelta_2426_; lean_object* v_zetaDeltaSet_2427_; lean_object* v_lctx_2428_; lean_object* v_localInstances_2429_; lean_object* v_defEqCtx_x3f_2430_; lean_object* v_synthPendingDepth_2431_; lean_object* v_customCanUnfoldPredicate_x3f_2432_; uint8_t v_univApprox_2433_; uint8_t v_inTypeClassResolution_2434_; uint8_t v_cacheInferType_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2444_; 
v_keyedConfig_2425_ = lean_ctor_get(v___y_2399_, 0);
v_trackZetaDelta_2426_ = lean_ctor_get_uint8(v___y_2399_, sizeof(void*)*7);
v_zetaDeltaSet_2427_ = lean_ctor_get(v___y_2399_, 1);
v_lctx_2428_ = lean_ctor_get(v___y_2399_, 2);
v_localInstances_2429_ = lean_ctor_get(v___y_2399_, 3);
v_defEqCtx_x3f_2430_ = lean_ctor_get(v___y_2399_, 4);
v_synthPendingDepth_2431_ = lean_ctor_get(v___y_2399_, 5);
v_customCanUnfoldPredicate_x3f_2432_ = lean_ctor_get(v___y_2399_, 6);
v_univApprox_2433_ = lean_ctor_get_uint8(v___y_2399_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2434_ = lean_ctor_get_uint8(v___y_2399_, sizeof(void*)*7 + 2);
v_cacheInferType_2435_ = lean_ctor_get_uint8(v___y_2399_, sizeof(void*)*7 + 3);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___y_2399_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2437_ = v___y_2399_;
v_isShared_2438_ = v_isSharedCheck_2444_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_2432_);
lean_inc(v_synthPendingDepth_2431_);
lean_inc(v_defEqCtx_x3f_2430_);
lean_inc(v_localInstances_2429_);
lean_inc(v_lctx_2428_);
lean_inc(v_zetaDeltaSet_2427_);
lean_inc(v_keyedConfig_2425_);
lean_dec(v___y_2399_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2444_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2441_; 
v___x_2439_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2396_, v_keyedConfig_2425_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v___x_2439_);
v___x_2441_ = v___x_2437_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2439_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_zetaDeltaSet_2427_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v_lctx_2428_);
lean_ctor_set(v_reuseFailAlloc_2443_, 3, v_localInstances_2429_);
lean_ctor_set(v_reuseFailAlloc_2443_, 4, v_defEqCtx_x3f_2430_);
lean_ctor_set(v_reuseFailAlloc_2443_, 5, v_synthPendingDepth_2431_);
lean_ctor_set(v_reuseFailAlloc_2443_, 6, v_customCanUnfoldPredicate_x3f_2432_);
lean_ctor_set_uint8(v_reuseFailAlloc_2443_, sizeof(void*)*7, v_trackZetaDelta_2426_);
lean_ctor_set_uint8(v_reuseFailAlloc_2443_, sizeof(void*)*7 + 1, v_univApprox_2433_);
lean_ctor_set_uint8(v_reuseFailAlloc_2443_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2434_);
lean_ctor_set_uint8(v_reuseFailAlloc_2443_, sizeof(void*)*7 + 3, v_cacheInferType_2435_);
v___x_2441_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
lean_object* v___x_2442_; 
v___x_2442_ = l_Lean_Meta_isExprDefEq(v_a_2397_, v___x_2398_, v___x_2441_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec_ref(v___x_2441_);
v___y_2405_ = v___x_2442_;
goto v___jp_2404_;
}
}
}
else
{
lean_object* v___x_2445_; 
v___x_2445_ = l_Lean_Meta_isExprDefEq(v_a_2397_, v___x_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec_ref(v___y_2399_);
v___y_2405_ = v___x_2445_;
goto v___jp_2404_;
}
v___jp_2404_:
{
if (lean_obj_tag(v___y_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
v_a_2406_ = lean_ctor_get(v___y_2405_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___y_2405_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2408_ = v___y_2405_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___y_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2406_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
v_a_2414_ = lean_ctor_get(v___y_2405_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___y_2405_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___y_2405_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___y_2405_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__6___boxed(lean_object* v___x_2446_, lean_object* v_a_2447_, lean_object* v___x_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
uint8_t v___x_164725__boxed_2454_; lean_object* v_res_2455_; 
v___x_164725__boxed_2454_ = lean_unbox(v___x_2446_);
v_res_2455_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__6(v___x_164725__boxed_2454_, v_a_2447_, v___x_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___lam__0(lean_object* v___y_2456_, uint8_t v_isExporting_2457_, lean_object* v___x_2458_, lean_object* v___y_2459_, lean_object* v___x_2460_, lean_object* v_a_x3f_2461_){
_start:
{
lean_object* v___x_2463_; lean_object* v_env_2464_; lean_object* v_nextMacroScope_2465_; lean_object* v_ngen_2466_; lean_object* v_auxDeclNGen_2467_; lean_object* v_traceState_2468_; lean_object* v_recordedDeps_2469_; lean_object* v_messages_2470_; lean_object* v_infoState_2471_; lean_object* v_snapshotTasks_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2497_; 
v___x_2463_ = lean_st_ref_take(v___y_2456_);
v_env_2464_ = lean_ctor_get(v___x_2463_, 0);
v_nextMacroScope_2465_ = lean_ctor_get(v___x_2463_, 1);
v_ngen_2466_ = lean_ctor_get(v___x_2463_, 2);
v_auxDeclNGen_2467_ = lean_ctor_get(v___x_2463_, 3);
v_traceState_2468_ = lean_ctor_get(v___x_2463_, 4);
v_recordedDeps_2469_ = lean_ctor_get(v___x_2463_, 6);
v_messages_2470_ = lean_ctor_get(v___x_2463_, 7);
v_infoState_2471_ = lean_ctor_get(v___x_2463_, 8);
v_snapshotTasks_2472_ = lean_ctor_get(v___x_2463_, 9);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2497_ == 0)
{
lean_object* v_unused_2498_; 
v_unused_2498_ = lean_ctor_get(v___x_2463_, 5);
lean_dec(v_unused_2498_);
v___x_2474_ = v___x_2463_;
v_isShared_2475_ = v_isSharedCheck_2497_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_snapshotTasks_2472_);
lean_inc(v_infoState_2471_);
lean_inc(v_messages_2470_);
lean_inc(v_recordedDeps_2469_);
lean_inc(v_traceState_2468_);
lean_inc(v_auxDeclNGen_2467_);
lean_inc(v_ngen_2466_);
lean_inc(v_nextMacroScope_2465_);
lean_inc(v_env_2464_);
lean_dec(v___x_2463_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2497_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2476_; lean_object* v___x_2478_; 
v___x_2476_ = l_Lean_Environment_setExporting(v_env_2464_, v_isExporting_2457_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 5, v___x_2458_);
lean_ctor_set(v___x_2474_, 0, v___x_2476_);
v___x_2478_ = v___x_2474_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v___x_2476_);
lean_ctor_set(v_reuseFailAlloc_2496_, 1, v_nextMacroScope_2465_);
lean_ctor_set(v_reuseFailAlloc_2496_, 2, v_ngen_2466_);
lean_ctor_set(v_reuseFailAlloc_2496_, 3, v_auxDeclNGen_2467_);
lean_ctor_set(v_reuseFailAlloc_2496_, 4, v_traceState_2468_);
lean_ctor_set(v_reuseFailAlloc_2496_, 5, v___x_2458_);
lean_ctor_set(v_reuseFailAlloc_2496_, 6, v_recordedDeps_2469_);
lean_ctor_set(v_reuseFailAlloc_2496_, 7, v_messages_2470_);
lean_ctor_set(v_reuseFailAlloc_2496_, 8, v_infoState_2471_);
lean_ctor_set(v_reuseFailAlloc_2496_, 9, v_snapshotTasks_2472_);
v___x_2478_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v_mctx_2481_; lean_object* v_zetaDeltaFVarIds_2482_; lean_object* v_postponed_2483_; lean_object* v_diag_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2494_; 
v___x_2479_ = lean_st_ref_put(v___y_2456_, v___x_2478_);
v___x_2480_ = lean_st_ref_take(v___y_2459_);
v_mctx_2481_ = lean_ctor_get(v___x_2480_, 0);
v_zetaDeltaFVarIds_2482_ = lean_ctor_get(v___x_2480_, 2);
v_postponed_2483_ = lean_ctor_get(v___x_2480_, 3);
v_diag_2484_ = lean_ctor_get(v___x_2480_, 4);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2494_ == 0)
{
lean_object* v_unused_2495_; 
v_unused_2495_ = lean_ctor_get(v___x_2480_, 1);
lean_dec(v_unused_2495_);
v___x_2486_ = v___x_2480_;
v_isShared_2487_ = v_isSharedCheck_2494_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_diag_2484_);
lean_inc(v_postponed_2483_);
lean_inc(v_zetaDeltaFVarIds_2482_);
lean_inc(v_mctx_2481_);
lean_dec(v___x_2480_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2494_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2490_; 
v___x_2488_ = lean_box(0);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 1, v___x_2460_);
v___x_2490_ = v___x_2486_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_mctx_2481_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v___x_2460_);
lean_ctor_set(v_reuseFailAlloc_2493_, 2, v_zetaDeltaFVarIds_2482_);
lean_ctor_set(v_reuseFailAlloc_2493_, 3, v_postponed_2483_);
lean_ctor_set(v_reuseFailAlloc_2493_, 4, v_diag_2484_);
v___x_2490_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2491_ = lean_st_ref_put(v___y_2459_, v___x_2490_);
v___x_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2488_);
return v___x_2492_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_2499_, lean_object* v_isExporting_2500_, lean_object* v___x_2501_, lean_object* v___y_2502_, lean_object* v___x_2503_, lean_object* v_a_x3f_2504_, lean_object* v___y_2505_){
_start:
{
uint8_t v_isExporting_boxed_2506_; lean_object* v_res_2507_; 
v_isExporting_boxed_2506_ = lean_unbox(v_isExporting_2500_);
v_res_2507_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___lam__0(v___y_2499_, v_isExporting_boxed_2506_, v___x_2501_, v___y_2502_, v___x_2503_, v_a_x3f_2504_);
lean_dec(v_a_x3f_2504_);
lean_dec(v___y_2502_);
lean_dec(v___y_2499_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg(lean_object* v_x_2508_, uint8_t v_isExporting_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2515_; lean_object* v_env_2516_; lean_object* v___x_2517_; uint8_t v_isModule_2518_; 
v___x_2515_ = lean_st_ref_get(v___y_2513_);
v_env_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc_ref(v_env_2516_);
lean_dec(v___x_2515_);
v___x_2517_ = l_Lean_Environment_header(v_env_2516_);
v_isModule_2518_ = lean_ctor_get_uint8(v___x_2517_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_2517_);
if (v_isModule_2518_ == 0)
{
lean_object* v___x_2519_; 
lean_dec_ref(v_env_2516_);
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v___y_2511_);
lean_inc_ref(v___y_2510_);
v___x_2519_ = lean_apply_5(v_x_2508_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, lean_box(0));
return v___x_2519_;
}
else
{
uint8_t v_isExporting_2520_; 
v_isExporting_2520_ = lean_ctor_get_uint8(v_env_2516_, sizeof(void*)*13);
lean_dec_ref(v_env_2516_);
if (v_isExporting_2509_ == 0)
{
if (v_isExporting_2520_ == 0)
{
lean_object* v___x_2587_; 
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v___y_2511_);
lean_inc_ref(v___y_2510_);
v___x_2587_ = lean_apply_5(v_x_2508_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, lean_box(0));
return v___x_2587_;
}
else
{
goto v___jp_2521_;
}
}
else
{
if (v_isExporting_2520_ == 0)
{
goto v___jp_2521_;
}
else
{
lean_object* v___x_2588_; 
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v___y_2511_);
lean_inc_ref(v___y_2510_);
v___x_2588_ = lean_apply_5(v_x_2508_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, lean_box(0));
return v___x_2588_;
}
}
v___jp_2521_:
{
lean_object* v___x_2522_; lean_object* v_env_2523_; lean_object* v_nextMacroScope_2524_; lean_object* v_ngen_2525_; lean_object* v_auxDeclNGen_2526_; lean_object* v_traceState_2527_; lean_object* v_recordedDeps_2528_; lean_object* v_messages_2529_; lean_object* v_infoState_2530_; lean_object* v_snapshotTasks_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2585_; 
v___x_2522_ = lean_st_ref_take(v___y_2513_);
v_env_2523_ = lean_ctor_get(v___x_2522_, 0);
v_nextMacroScope_2524_ = lean_ctor_get(v___x_2522_, 1);
v_ngen_2525_ = lean_ctor_get(v___x_2522_, 2);
v_auxDeclNGen_2526_ = lean_ctor_get(v___x_2522_, 3);
v_traceState_2527_ = lean_ctor_get(v___x_2522_, 4);
v_recordedDeps_2528_ = lean_ctor_get(v___x_2522_, 6);
v_messages_2529_ = lean_ctor_get(v___x_2522_, 7);
v_infoState_2530_ = lean_ctor_get(v___x_2522_, 8);
v_snapshotTasks_2531_ = lean_ctor_get(v___x_2522_, 9);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2522_);
if (v_isSharedCheck_2585_ == 0)
{
lean_object* v_unused_2586_; 
v_unused_2586_ = lean_ctor_get(v___x_2522_, 5);
lean_dec(v_unused_2586_);
v___x_2533_ = v___x_2522_;
v_isShared_2534_ = v_isSharedCheck_2585_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_snapshotTasks_2531_);
lean_inc(v_infoState_2530_);
lean_inc(v_messages_2529_);
lean_inc(v_recordedDeps_2528_);
lean_inc(v_traceState_2527_);
lean_inc(v_auxDeclNGen_2526_);
lean_inc(v_ngen_2525_);
lean_inc(v_nextMacroScope_2524_);
lean_inc(v_env_2523_);
lean_dec(v___x_2522_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2585_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2538_; 
v___x_2535_ = l_Lean_Environment_setExporting(v_env_2523_, v_isExporting_2509_);
v___x_2536_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1);
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 5, v___x_2536_);
lean_ctor_set(v___x_2533_, 0, v___x_2535_);
v___x_2538_ = v___x_2533_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2535_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_nextMacroScope_2524_);
lean_ctor_set(v_reuseFailAlloc_2584_, 2, v_ngen_2525_);
lean_ctor_set(v_reuseFailAlloc_2584_, 3, v_auxDeclNGen_2526_);
lean_ctor_set(v_reuseFailAlloc_2584_, 4, v_traceState_2527_);
lean_ctor_set(v_reuseFailAlloc_2584_, 5, v___x_2536_);
lean_ctor_set(v_reuseFailAlloc_2584_, 6, v_recordedDeps_2528_);
lean_ctor_set(v_reuseFailAlloc_2584_, 7, v_messages_2529_);
lean_ctor_set(v_reuseFailAlloc_2584_, 8, v_infoState_2530_);
lean_ctor_set(v_reuseFailAlloc_2584_, 9, v_snapshotTasks_2531_);
v___x_2538_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v_mctx_2541_; lean_object* v_zetaDeltaFVarIds_2542_; lean_object* v_postponed_2543_; lean_object* v_diag_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2582_; 
v___x_2539_ = lean_st_ref_put(v___y_2513_, v___x_2538_);
v___x_2540_ = lean_st_ref_take(v___y_2511_);
v_mctx_2541_ = lean_ctor_get(v___x_2540_, 0);
v_zetaDeltaFVarIds_2542_ = lean_ctor_get(v___x_2540_, 2);
v_postponed_2543_ = lean_ctor_get(v___x_2540_, 3);
v_diag_2544_ = lean_ctor_get(v___x_2540_, 4);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2582_ == 0)
{
lean_object* v_unused_2583_; 
v_unused_2583_ = lean_ctor_get(v___x_2540_, 1);
lean_dec(v_unused_2583_);
v___x_2546_ = v___x_2540_;
v_isShared_2547_ = v_isSharedCheck_2582_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_diag_2544_);
lean_inc(v_postponed_2543_);
lean_inc(v_zetaDeltaFVarIds_2542_);
lean_inc(v_mctx_2541_);
lean_dec(v___x_2540_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2582_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2548_; lean_object* v___x_2550_; 
v___x_2548_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5);
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 1, v___x_2548_);
v___x_2550_ = v___x_2546_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_mctx_2541_);
lean_ctor_set(v_reuseFailAlloc_2581_, 1, v___x_2548_);
lean_ctor_set(v_reuseFailAlloc_2581_, 2, v_zetaDeltaFVarIds_2542_);
lean_ctor_set(v_reuseFailAlloc_2581_, 3, v_postponed_2543_);
lean_ctor_set(v_reuseFailAlloc_2581_, 4, v_diag_2544_);
v___x_2550_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
lean_object* v___x_2551_; lean_object* v_r_2552_; 
v___x_2551_ = lean_st_ref_put(v___y_2511_, v___x_2550_);
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v___y_2511_);
lean_inc_ref(v___y_2510_);
v_r_2552_ = lean_apply_5(v_x_2508_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, lean_box(0));
if (lean_obj_tag(v_r_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2569_; 
v_a_2553_ = lean_ctor_get(v_r_2552_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v_r_2552_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2555_ = v_r_2552_;
v_isShared_2556_ = v_isSharedCheck_2569_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v_r_2552_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2569_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
lean_inc(v_a_2553_);
if (v_isShared_2556_ == 0)
{
lean_ctor_set_tag(v___x_2555_, 1);
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2553_);
v___x_2558_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
lean_object* v___x_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
v___x_2559_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___lam__0(v___y_2513_, v_isExporting_2520_, v___x_2536_, v___y_2511_, v___x_2548_, v___x_2558_);
lean_dec_ref(v___x_2558_);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2566_ == 0)
{
lean_object* v_unused_2567_; 
v_unused_2567_ = lean_ctor_get(v___x_2559_, 0);
lean_dec(v_unused_2567_);
v___x_2561_ = v___x_2559_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_dec(v___x_2559_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
lean_ctor_set(v___x_2561_, 0, v_a_2553_);
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2553_);
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
else
{
lean_object* v_a_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
v_a_2570_ = lean_ctor_get(v_r_2552_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v_r_2552_, 1);
v___x_2571_ = lean_box(0);
v___x_2572_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___lam__0(v___y_2513_, v_isExporting_2520_, v___x_2536_, v___y_2511_, v___x_2548_, v___x_2571_);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2579_ == 0)
{
lean_object* v_unused_2580_; 
v_unused_2580_ = lean_ctor_get(v___x_2572_, 0);
lean_dec(v_unused_2580_);
v___x_2574_ = v___x_2572_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_dec(v___x_2572_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
lean_ctor_set_tag(v___x_2574_, 1);
lean_ctor_set(v___x_2574_, 0, v_a_2570_);
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2570_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg___boxed(lean_object* v_x_2589_, lean_object* v_isExporting_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
uint8_t v_isExporting_boxed_2596_; lean_object* v_res_2597_; 
v_isExporting_boxed_2596_ = lean_unbox(v_isExporting_2590_);
v_res_2597_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg(v_x_2589_, v_isExporting_boxed_2596_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_);
lean_dec(v___y_2594_);
lean_dec_ref(v___y_2593_);
lean_dec(v___y_2592_);
lean_dec_ref(v___y_2591_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(lean_object* v_x_2598_, uint8_t v_when_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
if (v_when_2599_ == 0)
{
lean_object* v___x_2605_; 
lean_inc(v___y_2603_);
lean_inc_ref(v___y_2602_);
lean_inc(v___y_2601_);
lean_inc_ref(v___y_2600_);
v___x_2605_ = lean_apply_5(v_x_2598_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_, lean_box(0));
return v___x_2605_;
}
else
{
uint8_t v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = 0;
v___x_2607_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg(v_x_2598_, v___x_2606_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
return v___x_2607_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg___boxed(lean_object* v_x_2608_, lean_object* v_when_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
uint8_t v_when_boxed_2615_; lean_object* v_res_2616_; 
v_when_boxed_2615_ = lean_unbox(v_when_2609_);
v_res_2616_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(v_x_2608_, v_when_boxed_2615_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__27(lean_object* v_opts_2617_, lean_object* v_opt_2618_){
_start:
{
lean_object* v_name_2619_; lean_object* v_defValue_2620_; lean_object* v_map_2621_; lean_object* v___x_2622_; 
v_name_2619_ = lean_ctor_get(v_opt_2618_, 0);
v_defValue_2620_ = lean_ctor_get(v_opt_2618_, 1);
v_map_2621_ = lean_ctor_get(v_opts_2617_, 0);
v___x_2622_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2621_, v_name_2619_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_inc(v_defValue_2620_);
return v_defValue_2620_;
}
else
{
lean_object* v_val_2623_; 
v_val_2623_ = lean_ctor_get(v___x_2622_, 0);
lean_inc(v_val_2623_);
lean_dec_ref_known(v___x_2622_, 1);
if (lean_obj_tag(v_val_2623_) == 3)
{
lean_object* v_v_2624_; 
v_v_2624_ = lean_ctor_get(v_val_2623_, 0);
lean_inc(v_v_2624_);
lean_dec_ref_known(v_val_2623_, 1);
return v_v_2624_;
}
else
{
lean_dec(v_val_2623_);
lean_inc(v_defValue_2620_);
return v_defValue_2620_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__27___boxed(lean_object* v_opts_2625_, lean_object* v_opt_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__27(v_opts_2625_, v_opt_2626_);
lean_dec_ref(v_opt_2626_);
lean_dec_ref(v_opts_2625_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24_spec__29(size_t v_sz_2628_, size_t v_i_2629_, lean_object* v_bs_2630_){
_start:
{
uint8_t v___x_2631_; 
v___x_2631_ = lean_usize_dec_lt(v_i_2629_, v_sz_2628_);
if (v___x_2631_ == 0)
{
return v_bs_2630_;
}
else
{
lean_object* v_v_2632_; lean_object* v_msg_2633_; lean_object* v___x_2634_; lean_object* v_bs_x27_2635_; size_t v___x_2636_; size_t v___x_2637_; lean_object* v___x_2638_; 
v_v_2632_ = lean_array_uget_borrowed(v_bs_2630_, v_i_2629_);
v_msg_2633_ = lean_ctor_get(v_v_2632_, 1);
lean_inc_ref(v_msg_2633_);
v___x_2634_ = lean_unsigned_to_nat(0u);
v_bs_x27_2635_ = lean_array_uset(v_bs_2630_, v_i_2629_, v___x_2634_);
v___x_2636_ = ((size_t)1ULL);
v___x_2637_ = lean_usize_add(v_i_2629_, v___x_2636_);
v___x_2638_ = lean_array_uset(v_bs_x27_2635_, v_i_2629_, v_msg_2633_);
v_i_2629_ = v___x_2637_;
v_bs_2630_ = v___x_2638_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24_spec__29___boxed(lean_object* v_sz_2640_, lean_object* v_i_2641_, lean_object* v_bs_2642_){
_start:
{
size_t v_sz_boxed_2643_; size_t v_i_boxed_2644_; lean_object* v_res_2645_; 
v_sz_boxed_2643_ = lean_unbox_usize(v_sz_2640_);
lean_dec(v_sz_2640_);
v_i_boxed_2644_ = lean_unbox_usize(v_i_2641_);
lean_dec(v_i_2641_);
v_res_2645_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24_spec__29(v_sz_boxed_2643_, v_i_boxed_2644_, v_bs_2642_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24(lean_object* v_oldTraces_2646_, lean_object* v_data_2647_, lean_object* v_ref_2648_, lean_object* v_msg_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_toCold_2655_; lean_object* v_currRecDepth_2656_; lean_object* v_ref_2657_; uint16_t v_optionFlags_2658_; uint8_t v_suppressElabErrors_2659_; uint8_t v_checkDeprecated_2660_; uint8_t v_isRecordingDeps_2661_; lean_object* v_ref_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v_traceState_2665_; lean_object* v_traces_2666_; lean_object* v___x_2667_; size_t v_sz_2668_; size_t v___x_2669_; lean_object* v___x_2670_; lean_object* v_msg_2671_; lean_object* v___x_2672_; lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2711_; 
v_toCold_2655_ = lean_ctor_get(v___y_2652_, 0);
v_currRecDepth_2656_ = lean_ctor_get(v___y_2652_, 1);
v_ref_2657_ = lean_ctor_get(v___y_2652_, 2);
v_optionFlags_2658_ = lean_ctor_get_uint16(v___y_2652_, sizeof(void*)*3);
v_suppressElabErrors_2659_ = lean_ctor_get_uint8(v___y_2652_, sizeof(void*)*3 + 2);
v_checkDeprecated_2660_ = lean_ctor_get_uint8(v___y_2652_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2661_ = lean_ctor_get_uint8(v___y_2652_, sizeof(void*)*3 + 4);
v_ref_2662_ = l_Lean_replaceRef(v_ref_2648_, v_ref_2657_);
lean_inc(v_currRecDepth_2656_);
lean_inc_ref(v_toCold_2655_);
v___x_2663_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2663_, 0, v_toCold_2655_);
lean_ctor_set(v___x_2663_, 1, v_currRecDepth_2656_);
lean_ctor_set(v___x_2663_, 2, v_ref_2662_);
lean_ctor_set_uint16(v___x_2663_, sizeof(void*)*3, v_optionFlags_2658_);
lean_ctor_set_uint8(v___x_2663_, sizeof(void*)*3 + 2, v_suppressElabErrors_2659_);
lean_ctor_set_uint8(v___x_2663_, sizeof(void*)*3 + 3, v_checkDeprecated_2660_);
lean_ctor_set_uint8(v___x_2663_, sizeof(void*)*3 + 4, v_isRecordingDeps_2661_);
v___x_2664_ = lean_st_ref_get(v___y_2653_);
v_traceState_2665_ = lean_ctor_get(v___x_2664_, 4);
lean_inc_ref(v_traceState_2665_);
lean_dec(v___x_2664_);
v_traces_2666_ = lean_ctor_get(v_traceState_2665_, 0);
lean_inc_ref(v_traces_2666_);
lean_dec_ref(v_traceState_2665_);
v___x_2667_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2666_);
lean_dec_ref(v_traces_2666_);
v_sz_2668_ = lean_array_size(v___x_2667_);
v___x_2669_ = ((size_t)0ULL);
v___x_2670_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24_spec__29(v_sz_2668_, v___x_2669_, v___x_2667_);
v_msg_2671_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2671_, 0, v_data_2647_);
lean_ctor_set(v_msg_2671_, 1, v_msg_2649_);
lean_ctor_set(v_msg_2671_, 2, v___x_2670_);
v___x_2672_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1_spec__1(v_msg_2671_, v___y_2650_, v___y_2651_, v___x_2663_, v___y_2653_);
lean_dec_ref_known(v___x_2663_, 3);
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2675_ = v___x_2672_;
v_isShared_2676_ = v_isSharedCheck_2711_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2672_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2711_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2677_; lean_object* v_traceState_2678_; lean_object* v_env_2679_; lean_object* v_nextMacroScope_2680_; lean_object* v_ngen_2681_; lean_object* v_auxDeclNGen_2682_; lean_object* v_cache_2683_; lean_object* v_recordedDeps_2684_; lean_object* v_messages_2685_; lean_object* v_infoState_2686_; lean_object* v_snapshotTasks_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2710_; 
v___x_2677_ = lean_st_ref_take(v___y_2653_);
v_traceState_2678_ = lean_ctor_get(v___x_2677_, 4);
v_env_2679_ = lean_ctor_get(v___x_2677_, 0);
v_nextMacroScope_2680_ = lean_ctor_get(v___x_2677_, 1);
v_ngen_2681_ = lean_ctor_get(v___x_2677_, 2);
v_auxDeclNGen_2682_ = lean_ctor_get(v___x_2677_, 3);
v_cache_2683_ = lean_ctor_get(v___x_2677_, 5);
v_recordedDeps_2684_ = lean_ctor_get(v___x_2677_, 6);
v_messages_2685_ = lean_ctor_get(v___x_2677_, 7);
v_infoState_2686_ = lean_ctor_get(v___x_2677_, 8);
v_snapshotTasks_2687_ = lean_ctor_get(v___x_2677_, 9);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2689_ = v___x_2677_;
v_isShared_2690_ = v_isSharedCheck_2710_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_snapshotTasks_2687_);
lean_inc(v_infoState_2686_);
lean_inc(v_messages_2685_);
lean_inc(v_recordedDeps_2684_);
lean_inc(v_cache_2683_);
lean_inc(v_traceState_2678_);
lean_inc(v_auxDeclNGen_2682_);
lean_inc(v_ngen_2681_);
lean_inc(v_nextMacroScope_2680_);
lean_inc(v_env_2679_);
lean_dec(v___x_2677_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2710_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
uint64_t v_tid_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2708_; 
v_tid_2691_ = lean_ctor_get_uint64(v_traceState_2678_, sizeof(void*)*1);
v_isSharedCheck_2708_ = !lean_is_exclusive(v_traceState_2678_);
if (v_isSharedCheck_2708_ == 0)
{
lean_object* v_unused_2709_; 
v_unused_2709_ = lean_ctor_get(v_traceState_2678_, 0);
lean_dec(v_unused_2709_);
v___x_2693_ = v_traceState_2678_;
v_isShared_2694_ = v_isSharedCheck_2708_;
goto v_resetjp_2692_;
}
else
{
lean_dec(v_traceState_2678_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2708_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; 
v___x_2695_ = lean_box(0);
v___x_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2696_, 0, v_ref_2648_);
lean_ctor_set(v___x_2696_, 1, v_a_2673_);
v___x_2697_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2646_, v___x_2696_);
if (v_isShared_2694_ == 0)
{
lean_ctor_set(v___x_2693_, 0, v___x_2697_);
v___x_2699_ = v___x_2693_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v___x_2697_);
lean_ctor_set_uint64(v_reuseFailAlloc_2707_, sizeof(void*)*1, v_tid_2691_);
v___x_2699_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
lean_object* v___x_2701_; 
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 4, v___x_2699_);
v___x_2701_ = v___x_2689_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_env_2679_);
lean_ctor_set(v_reuseFailAlloc_2706_, 1, v_nextMacroScope_2680_);
lean_ctor_set(v_reuseFailAlloc_2706_, 2, v_ngen_2681_);
lean_ctor_set(v_reuseFailAlloc_2706_, 3, v_auxDeclNGen_2682_);
lean_ctor_set(v_reuseFailAlloc_2706_, 4, v___x_2699_);
lean_ctor_set(v_reuseFailAlloc_2706_, 5, v_cache_2683_);
lean_ctor_set(v_reuseFailAlloc_2706_, 6, v_recordedDeps_2684_);
lean_ctor_set(v_reuseFailAlloc_2706_, 7, v_messages_2685_);
lean_ctor_set(v_reuseFailAlloc_2706_, 8, v_infoState_2686_);
lean_ctor_set(v_reuseFailAlloc_2706_, 9, v_snapshotTasks_2687_);
v___x_2701_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
lean_object* v___x_2702_; lean_object* v___x_2704_; 
v___x_2702_ = lean_st_ref_put(v___y_2653_, v___x_2701_);
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 0, v___x_2695_);
v___x_2704_ = v___x_2675_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v___x_2695_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24___boxed(lean_object* v_oldTraces_2712_, lean_object* v_data_2713_, lean_object* v_ref_2714_, lean_object* v_msg_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24(v_oldTraces_2712_, v_data_2713_, v_ref_2714_, v_msg_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
return v_res_2721_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__26(lean_object* v_e_2722_){
_start:
{
if (lean_obj_tag(v_e_2722_) == 0)
{
uint8_t v___x_2723_; 
v___x_2723_ = 2;
return v___x_2723_;
}
else
{
lean_object* v_a_2724_; 
v_a_2724_ = lean_ctor_get(v_e_2722_, 0);
if (lean_obj_tag(v_a_2724_) == 0)
{
uint8_t v___x_2725_; 
v___x_2725_ = 1;
return v___x_2725_;
}
else
{
uint8_t v___x_2726_; 
v___x_2726_ = 0;
return v___x_2726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__26___boxed(lean_object* v_e_2727_){
_start:
{
uint8_t v_res_2728_; lean_object* v_r_2729_; 
v_res_2728_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__26(v_e_2727_);
lean_dec_ref(v_e_2727_);
v_r_2729_ = lean_box(v_res_2728_);
return v_r_2729_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg(lean_object* v_x_2730_){
_start:
{
if (lean_obj_tag(v_x_2730_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
v_a_2732_ = lean_ctor_get(v_x_2730_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v_x_2730_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v_x_2730_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v_x_2730_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2737_; 
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 1);
v___x_2737_ = v___x_2734_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_a_2732_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
v_a_2740_ = lean_ctor_get(v_x_2730_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v_x_2730_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v_x_2730_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v_x_2730_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
lean_ctor_set_tag(v___x_2742_, 0);
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg___boxed(lean_object* v_x_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg(v_x_2748_);
return v_res_2750_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__1(void){
_start:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__0));
v___x_2753_ = l_Lean_stringToMessageData(v___x_2752_);
return v___x_2753_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__2(void){
_start:
{
lean_object* v___x_2754_; double v___x_2755_; 
v___x_2754_ = lean_unsigned_to_nat(1000u);
v___x_2755_ = lean_float_of_nat(v___x_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16(lean_object* v_cls_2756_, uint8_t v_collapsed_2757_, lean_object* v_tag_2758_, lean_object* v_opts_2759_, uint8_t v_clsEnabled_2760_, lean_object* v_oldTraces_2761_, lean_object* v_msg_2762_, lean_object* v_resStartStop_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v_fst_2769_; lean_object* v_snd_2770_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v_data_2774_; lean_object* v_fst_2785_; lean_object* v_snd_2786_; lean_object* v___x_2787_; uint8_t v___x_2788_; lean_object* v___y_2790_; lean_object* v_a_2791_; uint8_t v___y_2806_; double v___y_2838_; 
v_fst_2769_ = lean_ctor_get(v_resStartStop_2763_, 0);
lean_inc(v_fst_2769_);
v_snd_2770_ = lean_ctor_get(v_resStartStop_2763_, 1);
lean_inc(v_snd_2770_);
lean_dec_ref(v_resStartStop_2763_);
v_fst_2785_ = lean_ctor_get(v_snd_2770_, 0);
lean_inc(v_fst_2785_);
v_snd_2786_ = lean_ctor_get(v_snd_2770_, 1);
lean_inc(v_snd_2786_);
lean_dec(v_snd_2770_);
v___x_2787_ = l_Lean_trace_profiler;
v___x_2788_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v_opts_2759_, v___x_2787_);
if (v___x_2788_ == 0)
{
v___y_2806_ = v___x_2788_;
goto v___jp_2805_;
}
else
{
lean_object* v___x_2843_; uint8_t v___x_2844_; 
v___x_2843_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2844_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v_opts_2759_, v___x_2843_);
if (v___x_2844_ == 0)
{
lean_object* v___x_2845_; lean_object* v___x_2846_; double v___x_2847_; double v___x_2848_; double v___x_2849_; 
v___x_2845_ = l_Lean_trace_profiler_threshold;
v___x_2846_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__27(v_opts_2759_, v___x_2845_);
v___x_2847_ = lean_float_of_nat(v___x_2846_);
v___x_2848_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__2);
v___x_2849_ = lean_float_div(v___x_2847_, v___x_2848_);
v___y_2838_ = v___x_2849_;
goto v___jp_2837_;
}
else
{
lean_object* v___x_2850_; lean_object* v___x_2851_; double v___x_2852_; 
v___x_2850_ = l_Lean_trace_profiler_threshold;
v___x_2851_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__27(v_opts_2759_, v___x_2850_);
v___x_2852_ = lean_float_of_nat(v___x_2851_);
v___y_2838_ = v___x_2852_;
goto v___jp_2837_;
}
}
v___jp_2771_:
{
lean_object* v___x_2775_; 
lean_inc(v___y_2772_);
v___x_2775_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__24(v_oldTraces_2761_, v_data_2774_, v___y_2772_, v___y_2773_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v___x_2776_; 
lean_dec_ref_known(v___x_2775_, 1);
v___x_2776_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg(v_fst_2769_);
return v___x_2776_;
}
else
{
lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2784_; 
lean_dec(v_fst_2769_);
v_a_2777_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2779_ = v___x_2775_;
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_dec(v___x_2775_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2782_; 
if (v_isShared_2780_ == 0)
{
v___x_2782_ = v___x_2779_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2777_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
v___jp_2789_:
{
uint8_t v_result_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; double v___x_2795_; lean_object* v_data_2796_; 
v_result_2792_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__26(v_fst_2769_);
v___x_2793_ = lean_box(v_result_2792_);
v___x_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
v___x_2795_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__0);
lean_inc_ref(v_tag_2758_);
lean_inc_ref(v___x_2794_);
lean_inc(v_cls_2756_);
v_data_2796_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2796_, 0, v_cls_2756_);
lean_ctor_set(v_data_2796_, 1, v___x_2794_);
lean_ctor_set(v_data_2796_, 2, v_tag_2758_);
lean_ctor_set_float(v_data_2796_, sizeof(void*)*3, v___x_2795_);
lean_ctor_set_float(v_data_2796_, sizeof(void*)*3 + 8, v___x_2795_);
lean_ctor_set_uint8(v_data_2796_, sizeof(void*)*3 + 16, v_collapsed_2757_);
if (v___x_2788_ == 0)
{
lean_dec_ref_known(v___x_2794_, 1);
lean_dec(v_snd_2786_);
lean_dec(v_fst_2785_);
lean_dec_ref(v_tag_2758_);
lean_dec(v_cls_2756_);
v___y_2772_ = v___y_2790_;
v___y_2773_ = v_a_2791_;
v_data_2774_ = v_data_2796_;
goto v___jp_2771_;
}
else
{
lean_object* v_data_2797_; double v___x_2798_; double v___x_2799_; 
lean_dec_ref_known(v_data_2796_, 3);
v_data_2797_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2797_, 0, v_cls_2756_);
lean_ctor_set(v_data_2797_, 1, v___x_2794_);
lean_ctor_set(v_data_2797_, 2, v_tag_2758_);
v___x_2798_ = lean_unbox_float(v_fst_2785_);
lean_dec(v_fst_2785_);
lean_ctor_set_float(v_data_2797_, sizeof(void*)*3, v___x_2798_);
v___x_2799_ = lean_unbox_float(v_snd_2786_);
lean_dec(v_snd_2786_);
lean_ctor_set_float(v_data_2797_, sizeof(void*)*3 + 8, v___x_2799_);
lean_ctor_set_uint8(v_data_2797_, sizeof(void*)*3 + 16, v_collapsed_2757_);
v___y_2772_ = v___y_2790_;
v___y_2773_ = v_a_2791_;
v_data_2774_ = v_data_2797_;
goto v___jp_2771_;
}
}
v___jp_2800_:
{
lean_object* v_ref_2801_; lean_object* v___x_2802_; 
v_ref_2801_ = lean_ctor_get(v___y_2766_, 2);
lean_inc(v___y_2767_);
lean_inc_ref(v___y_2766_);
lean_inc(v___y_2765_);
lean_inc_ref(v___y_2764_);
lean_inc(v_fst_2769_);
v___x_2802_ = lean_apply_6(v_msg_2762_, v_fst_2769_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, lean_box(0));
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___y_2790_ = v_ref_2801_;
v_a_2791_ = v_a_2803_;
goto v___jp_2789_;
}
else
{
lean_object* v___x_2804_; 
lean_dec_ref_known(v___x_2802_, 1);
v___x_2804_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___closed__1);
v___y_2790_ = v_ref_2801_;
v_a_2791_ = v___x_2804_;
goto v___jp_2789_;
}
}
v___jp_2805_:
{
if (v_clsEnabled_2760_ == 0)
{
if (v___y_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v_traceState_2808_; lean_object* v_env_2809_; lean_object* v_nextMacroScope_2810_; lean_object* v_ngen_2811_; lean_object* v_auxDeclNGen_2812_; lean_object* v_cache_2813_; lean_object* v_recordedDeps_2814_; lean_object* v_messages_2815_; lean_object* v_infoState_2816_; lean_object* v_snapshotTasks_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2836_; 
lean_dec(v_snd_2786_);
lean_dec(v_fst_2785_);
lean_dec_ref(v_msg_2762_);
lean_dec_ref(v_tag_2758_);
lean_dec(v_cls_2756_);
v___x_2807_ = lean_st_ref_take(v___y_2767_);
v_traceState_2808_ = lean_ctor_get(v___x_2807_, 4);
v_env_2809_ = lean_ctor_get(v___x_2807_, 0);
v_nextMacroScope_2810_ = lean_ctor_get(v___x_2807_, 1);
v_ngen_2811_ = lean_ctor_get(v___x_2807_, 2);
v_auxDeclNGen_2812_ = lean_ctor_get(v___x_2807_, 3);
v_cache_2813_ = lean_ctor_get(v___x_2807_, 5);
v_recordedDeps_2814_ = lean_ctor_get(v___x_2807_, 6);
v_messages_2815_ = lean_ctor_get(v___x_2807_, 7);
v_infoState_2816_ = lean_ctor_get(v___x_2807_, 8);
v_snapshotTasks_2817_ = lean_ctor_get(v___x_2807_, 9);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2819_ = v___x_2807_;
v_isShared_2820_ = v_isSharedCheck_2836_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_snapshotTasks_2817_);
lean_inc(v_infoState_2816_);
lean_inc(v_messages_2815_);
lean_inc(v_recordedDeps_2814_);
lean_inc(v_cache_2813_);
lean_inc(v_traceState_2808_);
lean_inc(v_auxDeclNGen_2812_);
lean_inc(v_ngen_2811_);
lean_inc(v_nextMacroScope_2810_);
lean_inc(v_env_2809_);
lean_dec(v___x_2807_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2836_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
uint64_t v_tid_2821_; lean_object* v_traces_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2835_; 
v_tid_2821_ = lean_ctor_get_uint64(v_traceState_2808_, sizeof(void*)*1);
v_traces_2822_ = lean_ctor_get(v_traceState_2808_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v_traceState_2808_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2824_ = v_traceState_2808_;
v_isShared_2825_ = v_isSharedCheck_2835_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_traces_2822_);
lean_dec(v_traceState_2808_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2835_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2826_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2761_, v_traces_2822_);
lean_dec_ref(v_traces_2822_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2826_);
v___x_2828_ = v___x_2824_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v___x_2826_);
lean_ctor_set_uint64(v_reuseFailAlloc_2834_, sizeof(void*)*1, v_tid_2821_);
v___x_2828_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
lean_object* v___x_2830_; 
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 4, v___x_2828_);
v___x_2830_ = v___x_2819_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_env_2809_);
lean_ctor_set(v_reuseFailAlloc_2833_, 1, v_nextMacroScope_2810_);
lean_ctor_set(v_reuseFailAlloc_2833_, 2, v_ngen_2811_);
lean_ctor_set(v_reuseFailAlloc_2833_, 3, v_auxDeclNGen_2812_);
lean_ctor_set(v_reuseFailAlloc_2833_, 4, v___x_2828_);
lean_ctor_set(v_reuseFailAlloc_2833_, 5, v_cache_2813_);
lean_ctor_set(v_reuseFailAlloc_2833_, 6, v_recordedDeps_2814_);
lean_ctor_set(v_reuseFailAlloc_2833_, 7, v_messages_2815_);
lean_ctor_set(v_reuseFailAlloc_2833_, 8, v_infoState_2816_);
lean_ctor_set(v_reuseFailAlloc_2833_, 9, v_snapshotTasks_2817_);
v___x_2830_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2831_ = lean_st_ref_put(v___y_2767_, v___x_2830_);
v___x_2832_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg(v_fst_2769_);
return v___x_2832_;
}
}
}
}
}
else
{
goto v___jp_2800_;
}
}
else
{
goto v___jp_2800_;
}
}
v___jp_2837_:
{
double v___x_2839_; double v___x_2840_; double v___x_2841_; uint8_t v___x_2842_; 
v___x_2839_ = lean_unbox_float(v_snd_2786_);
v___x_2840_ = lean_unbox_float(v_fst_2785_);
v___x_2841_ = lean_float_sub(v___x_2839_, v___x_2840_);
v___x_2842_ = lean_float_decLt(v___y_2838_, v___x_2841_);
v___y_2806_ = v___x_2842_;
goto v___jp_2805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16___boxed(lean_object* v_cls_2853_, lean_object* v_collapsed_2854_, lean_object* v_tag_2855_, lean_object* v_opts_2856_, lean_object* v_clsEnabled_2857_, lean_object* v_oldTraces_2858_, lean_object* v_msg_2859_, lean_object* v_resStartStop_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_){
_start:
{
uint8_t v_collapsed_boxed_2866_; uint8_t v_clsEnabled_boxed_2867_; lean_object* v_res_2868_; 
v_collapsed_boxed_2866_ = lean_unbox(v_collapsed_2854_);
v_clsEnabled_boxed_2867_ = lean_unbox(v_clsEnabled_2857_);
v_res_2868_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16(v_cls_2853_, v_collapsed_boxed_2866_, v_tag_2855_, v_opts_2856_, v_clsEnabled_boxed_2867_, v_oldTraces_2858_, v_msg_2859_, v_resStartStop_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
lean_dec(v___y_2864_);
lean_dec_ref(v___y_2863_);
lean_dec(v___y_2862_);
lean_dec_ref(v___y_2861_);
lean_dec_ref(v_opts_2856_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__8(lean_object* v___x_2869_, lean_object* v_a_2870_, uint8_t v___y_2871_, lean_object* v_____r_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_2869_, v_a_2870_, v___y_2874_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2888_; 
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2888_ == 0)
{
lean_object* v_unused_2889_; 
v_unused_2889_ = lean_ctor_get(v___x_2878_, 0);
lean_dec(v_unused_2889_);
v___x_2880_ = v___x_2878_;
v_isShared_2881_ = v_isSharedCheck_2888_;
goto v_resetjp_2879_;
}
else
{
lean_dec(v___x_2878_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2888_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2886_; 
v___x_2882_ = lean_box(0);
v___x_2883_ = lean_box(v___y_2871_);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2882_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v___x_2884_);
v___x_2886_ = v___x_2880_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v___x_2884_);
v___x_2886_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
return v___x_2886_;
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
v_a_2890_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2878_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2878_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__8___boxed(lean_object* v___x_2898_, lean_object* v_a_2899_, lean_object* v___y_2900_, lean_object* v_____r_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
uint8_t v___y_165373__boxed_2907_; lean_object* v_res_2908_; 
v___y_165373__boxed_2907_ = lean_unbox(v___y_2900_);
v_res_2908_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__8(v___x_2898_, v_a_2899_, v___y_165373__boxed_2907_, v_____r_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__0(lean_object* v_cls_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v_toCold_2915_; lean_object* v_options_2916_; uint8_t v_hasTrace_2917_; 
v_toCold_2915_ = lean_ctor_get(v___y_2912_, 0);
v_options_2916_ = lean_ctor_get(v_toCold_2915_, 2);
v_hasTrace_2917_ = lean_ctor_get_uint8(v_options_2916_, sizeof(void*)*1);
if (v_hasTrace_2917_ == 0)
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
lean_dec(v_cls_2909_);
v___x_2918_ = lean_box(v_hasTrace_2917_);
v___x_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2918_);
return v___x_2919_;
}
else
{
lean_object* v_inheritedTraceOptions_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v_inheritedTraceOptions_2920_ = lean_ctor_get(v_toCold_2915_, 11);
v___x_2921_ = ((lean_object*)(l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__2));
v___x_2922_ = l_Lean_Name_append(v___x_2921_, v_cls_2909_);
v___x_2923_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2920_, v_options_2916_, v___x_2922_);
lean_dec(v___x_2922_);
v___x_2924_ = lean_box(v___x_2923_);
v___x_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2924_);
return v___x_2925_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__0___boxed(lean_object* v_cls_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__0(v_cls_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_);
lean_dec(v___y_2930_);
lean_dec_ref(v___y_2929_);
lean_dec(v___y_2928_);
lean_dec_ref(v___y_2927_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__1(lean_object* v___x_2933_, lean_object* v_snd_2934_, lean_object* v_____r_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2933_);
lean_ctor_set(v___x_2941_, 1, v_snd_2934_);
v___x_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
v___x_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__1___boxed(lean_object* v___x_2944_, lean_object* v_snd_2945_, lean_object* v_____r_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v_res_2952_; 
v_res_2952_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__1(v___x_2944_, v_snd_2945_, v_____r_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
lean_dec(v___y_2950_);
lean_dec_ref(v___y_2949_);
lean_dec(v___y_2948_);
lean_dec_ref(v___y_2947_);
return v_res_2952_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__1(void){
_start:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__0));
v___x_2955_ = l_Lean_stringToMessageData(v___x_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4(lean_object* v___f_2956_, lean_object* v_fst_2957_, lean_object* v_cls_2958_, lean_object* v_____r_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v___x_2965_; 
lean_inc(v___y_2963_);
lean_inc_ref(v___y_2962_);
lean_inc(v___y_2961_);
lean_inc_ref(v___y_2960_);
v___x_2965_ = lean_apply_5(v___f_2956_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_, lean_box(0));
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2998_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2968_ = v___x_2965_;
v_isShared_2969_ = v_isSharedCheck_2998_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2965_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2998_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
uint8_t v___x_2970_; 
v___x_2970_ = lean_unbox(v_a_2966_);
lean_dec(v_a_2966_);
if (v___x_2970_ == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2973_; 
lean_dec(v_cls_2958_);
lean_dec(v_fst_2957_);
v___x_2971_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__3));
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2971_);
v___x_2973_ = v___x_2968_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
else
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
lean_del_object(v___x_2968_);
v___x_2975_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___closed__1);
v___x_2976_ = l_Lean_MessageData_ofName(v_fst_2957_);
v___x_2977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2975_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
v___x_2978_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_2979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2977_);
lean_ctor_set(v___x_2979_, 1, v___x_2978_);
v___x_2980_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_2958_, v___x_2979_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2989_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_2989_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2989_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2985_; lean_object* v___x_2987_; 
v___x_2985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2985_, 0, v_a_2981_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_2985_);
v___x_2987_ = v___x_2983_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2985_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
else
{
lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_2997_; 
v_a_2990_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2992_ = v___x_2980_;
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2980_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2995_; 
if (v_isShared_2993_ == 0)
{
v___x_2995_ = v___x_2992_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_a_2990_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
}
}
}
}
else
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3006_; 
lean_dec(v_cls_2958_);
lean_dec(v_fst_2957_);
v_a_2999_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_3006_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_3001_ = v___x_2965_;
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v___x_2965_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3004_; 
if (v_isShared_3002_ == 0)
{
v___x_3004_ = v___x_3001_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_a_2999_);
v___x_3004_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
return v___x_3004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___boxed(lean_object* v___f_3007_, lean_object* v_fst_3008_, lean_object* v_cls_3009_, lean_object* v_____r_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4(v___f_3007_, v_fst_3008_, v_cls_3009_, v_____r_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg(lean_object* v_declName_3017_, uint8_t v_s_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_){
_start:
{
lean_object* v___x_3022_; lean_object* v_env_3023_; lean_object* v_nextMacroScope_3024_; lean_object* v_ngen_3025_; lean_object* v_auxDeclNGen_3026_; lean_object* v_traceState_3027_; lean_object* v_recordedDeps_3028_; lean_object* v_messages_3029_; lean_object* v_infoState_3030_; lean_object* v_snapshotTasks_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3060_; 
v___x_3022_ = lean_st_ref_take(v___y_3020_);
v_env_3023_ = lean_ctor_get(v___x_3022_, 0);
v_nextMacroScope_3024_ = lean_ctor_get(v___x_3022_, 1);
v_ngen_3025_ = lean_ctor_get(v___x_3022_, 2);
v_auxDeclNGen_3026_ = lean_ctor_get(v___x_3022_, 3);
v_traceState_3027_ = lean_ctor_get(v___x_3022_, 4);
v_recordedDeps_3028_ = lean_ctor_get(v___x_3022_, 6);
v_messages_3029_ = lean_ctor_get(v___x_3022_, 7);
v_infoState_3030_ = lean_ctor_get(v___x_3022_, 8);
v_snapshotTasks_3031_ = lean_ctor_get(v___x_3022_, 9);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3060_ == 0)
{
lean_object* v_unused_3061_; 
v_unused_3061_ = lean_ctor_get(v___x_3022_, 5);
lean_dec(v_unused_3061_);
v___x_3033_ = v___x_3022_;
v_isShared_3034_ = v_isSharedCheck_3060_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_snapshotTasks_3031_);
lean_inc(v_infoState_3030_);
lean_inc(v_messages_3029_);
lean_inc(v_recordedDeps_3028_);
lean_inc(v_traceState_3027_);
lean_inc(v_auxDeclNGen_3026_);
lean_inc(v_ngen_3025_);
lean_inc(v_nextMacroScope_3024_);
lean_inc(v_env_3023_);
lean_dec(v___x_3022_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3060_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
uint8_t v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3040_; 
v___x_3035_ = 0;
v___x_3036_ = lean_box(0);
v___x_3037_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_3023_, v_declName_3017_, v_s_3018_, v___x_3035_, v___x_3036_);
v___x_3038_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 5, v___x_3038_);
lean_ctor_set(v___x_3033_, 0, v___x_3037_);
v___x_3040_ = v___x_3033_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3037_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v_nextMacroScope_3024_);
lean_ctor_set(v_reuseFailAlloc_3059_, 2, v_ngen_3025_);
lean_ctor_set(v_reuseFailAlloc_3059_, 3, v_auxDeclNGen_3026_);
lean_ctor_set(v_reuseFailAlloc_3059_, 4, v_traceState_3027_);
lean_ctor_set(v_reuseFailAlloc_3059_, 5, v___x_3038_);
lean_ctor_set(v_reuseFailAlloc_3059_, 6, v_recordedDeps_3028_);
lean_ctor_set(v_reuseFailAlloc_3059_, 7, v_messages_3029_);
lean_ctor_set(v_reuseFailAlloc_3059_, 8, v_infoState_3030_);
lean_ctor_set(v_reuseFailAlloc_3059_, 9, v_snapshotTasks_3031_);
v___x_3040_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v_mctx_3043_; lean_object* v_zetaDeltaFVarIds_3044_; lean_object* v_postponed_3045_; lean_object* v_diag_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3057_; 
v___x_3041_ = lean_st_ref_put(v___y_3020_, v___x_3040_);
v___x_3042_ = lean_st_ref_take(v___y_3019_);
v_mctx_3043_ = lean_ctor_get(v___x_3042_, 0);
v_zetaDeltaFVarIds_3044_ = lean_ctor_get(v___x_3042_, 2);
v_postponed_3045_ = lean_ctor_get(v___x_3042_, 3);
v_diag_3046_ = lean_ctor_get(v___x_3042_, 4);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3057_ == 0)
{
lean_object* v_unused_3058_; 
v_unused_3058_ = lean_ctor_get(v___x_3042_, 1);
lean_dec(v_unused_3058_);
v___x_3048_ = v___x_3042_;
v_isShared_3049_ = v_isSharedCheck_3057_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_diag_3046_);
lean_inc(v_postponed_3045_);
lean_inc(v_zetaDeltaFVarIds_3044_);
lean_inc(v_mctx_3043_);
lean_dec(v___x_3042_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3057_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3053_; 
v___x_3050_ = lean_box(0);
v___x_3051_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5);
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 1, v___x_3051_);
v___x_3053_ = v___x_3048_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_mctx_3043_);
lean_ctor_set(v_reuseFailAlloc_3056_, 1, v___x_3051_);
lean_ctor_set(v_reuseFailAlloc_3056_, 2, v_zetaDeltaFVarIds_3044_);
lean_ctor_set(v_reuseFailAlloc_3056_, 3, v_postponed_3045_);
lean_ctor_set(v_reuseFailAlloc_3056_, 4, v_diag_3046_);
v___x_3053_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = lean_st_ref_put(v___y_3019_, v___x_3053_);
v___x_3055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3050_);
return v___x_3055_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg___boxed(lean_object* v_declName_3062_, lean_object* v_s_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_){
_start:
{
uint8_t v_s_boxed_3067_; lean_object* v_res_3068_; 
v_s_boxed_3067_ = lean_unbox(v_s_3063_);
v_res_3068_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg(v_declName_3062_, v_s_boxed_3067_, v___y_3064_, v___y_3065_);
lean_dec(v___y_3065_);
lean_dec(v___y_3064_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3(lean_object* v___x_3072_, lean_object* v___x_3073_, lean_object* v___x_3074_, lean_object* v_snd_3075_, lean_object* v_a_3076_, uint8_t v_compile_3077_, uint8_t v_logCompileErrors_3078_, uint8_t v_isMeta_3079_, uint8_t v___y_3080_, uint8_t v_exposeAux_3081_, lean_object* v_____r_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; uint8_t v___x_3090_; 
v___x_3088_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3085_);
v___x_3089_ = l_Lean_Meta_backward_inferInstanceAs_wrap_data;
v___x_3090_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_3088_, v___x_3089_);
lean_dec_ref(v___x_3088_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3091_; 
lean_dec_ref(v_a_3076_);
v___x_3091_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_3072_, v___x_3073_, v___y_3084_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3100_; 
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3100_ == 0)
{
lean_object* v_unused_3101_; 
v_unused_3101_ = lean_ctor_get(v___x_3091_, 0);
lean_dec(v_unused_3101_);
v___x_3093_ = v___x_3091_;
v_isShared_3094_ = v_isSharedCheck_3100_;
goto v_resetjp_3092_;
}
else
{
lean_dec(v___x_3091_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3100_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3098_; 
v___x_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3074_);
lean_ctor_set(v___x_3095_, 1, v_snd_3075_);
v___x_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 0, v___x_3096_);
v___x_3098_ = v___x_3093_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3096_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3102_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3091_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3091_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
else
{
lean_object* v___x_3110_; 
lean_inc(v___y_3086_);
lean_inc_ref(v___y_3085_);
lean_inc(v___y_3084_);
lean_inc_ref(v___y_3083_);
lean_inc_ref(v___x_3073_);
v___x_3110_ = lean_infer_type(v___x_3073_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; lean_object* v___x_3112_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc_n(v_a_3111_, 2);
lean_dec_ref_known(v___x_3110_, 1);
lean_inc_ref(v_a_3076_);
v___x_3112_ = l_Lean_Meta_isExprDefEq(v_a_3076_, v_a_3111_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; uint8_t v___x_3114_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3112_, 1);
v___x_3114_ = lean_unbox(v_a_3113_);
lean_dec(v_a_3113_);
if (v___x_3114_ == 0)
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__1));
v___x_3116_ = l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg(v___x_3115_, v___y_3086_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3141_; lean_object* v___y_3142_; uint8_t v___y_3156_; lean_object* v___y_3213_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; uint8_t v___y_3231_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc_n(v_a_3117_, 2);
lean_dec_ref_known(v___x_3116_, 1);
v___x_3226_ = lean_box(v___y_3080_);
v___x_3227_ = lean_box(v___y_3080_);
v___x_3228_ = lean_box(v___x_3090_);
lean_inc_ref(v_a_3076_);
v___x_3229_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxDefinition___boxed), 11, 6);
lean_closure_set(v___x_3229_, 0, v_a_3117_);
lean_closure_set(v___x_3229_, 1, v_a_3076_);
lean_closure_set(v___x_3229_, 2, v___x_3073_);
lean_closure_set(v___x_3229_, 3, v___x_3226_);
lean_closure_set(v___x_3229_, 4, v___x_3227_);
lean_closure_set(v___x_3229_, 5, v___x_3228_);
if (v_exposeAux_3081_ == 0)
{
v___y_3231_ = v___x_3090_;
goto v___jp_3230_;
}
else
{
v___y_3231_ = v___y_3080_;
goto v___jp_3230_;
}
v___jp_3118_:
{
lean_object* v___x_3121_; 
v___x_3121_ = l_Lean_enableRealizationsForConst(v_a_3117_, v___y_3119_, v___y_3120_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3130_; 
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3130_ == 0)
{
lean_object* v_unused_3131_; 
v_unused_3131_ = lean_ctor_get(v___x_3121_, 0);
lean_dec(v_unused_3131_);
v___x_3123_ = v___x_3121_;
v_isShared_3124_ = v_isSharedCheck_3130_;
goto v_resetjp_3122_;
}
else
{
lean_dec(v___x_3121_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3130_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3128_; 
v___x_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3074_);
lean_ctor_set(v___x_3125_, 1, v_snd_3075_);
v___x_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
if (v_isShared_3124_ == 0)
{
lean_ctor_set(v___x_3123_, 0, v___x_3126_);
v___x_3128_ = v___x_3123_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v___x_3126_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3132_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3121_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3121_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
v___jp_3140_:
{
if (v_compile_3077_ == 0)
{
v___y_3119_ = v___y_3141_;
v___y_3120_ = v___y_3142_;
goto v___jp_3118_;
}
else
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3143_ = lean_unsigned_to_nat(1u);
v___x_3144_ = lean_mk_empty_array_with_capacity(v___x_3143_);
lean_inc(v_a_3117_);
v___x_3145_ = lean_array_push(v___x_3144_, v_a_3117_);
v___x_3146_ = l_Lean_compileDecls(v___x_3145_, v_logCompileErrors_3078_, v___y_3141_, v___y_3142_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_dec_ref_known(v___x_3146_, 1);
v___y_3119_ = v___y_3141_;
v___y_3120_ = v___y_3142_;
goto v___jp_3118_;
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
lean_dec(v_a_3117_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3146_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3146_);
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
}
v___jp_3155_:
{
lean_object* v___x_3157_; 
lean_inc(v_a_3117_);
v___x_3157_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg(v_a_3117_, v___y_3156_, v___y_3084_, v___y_3086_);
if (lean_obj_tag(v___x_3157_) == 0)
{
uint8_t v___x_3158_; lean_object* v___x_3159_; 
lean_dec_ref_known(v___x_3157_, 1);
v___x_3158_ = 0;
lean_inc(v_a_3117_);
v___x_3159_ = l_Lean_Meta_setInlineAttribute(v_a_3117_, v___x_3158_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_dec_ref_known(v___x_3159_, 1);
if (v_isMeta_3079_ == 0)
{
v___y_3141_ = v___y_3085_;
v___y_3142_ = v___y_3086_;
goto v___jp_3140_;
}
else
{
lean_object* v___x_3160_; lean_object* v_env_3161_; lean_object* v_nextMacroScope_3162_; lean_object* v_ngen_3163_; lean_object* v_auxDeclNGen_3164_; lean_object* v_traceState_3165_; lean_object* v_recordedDeps_3166_; lean_object* v_messages_3167_; lean_object* v_infoState_3168_; lean_object* v_snapshotTasks_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3194_; 
v___x_3160_ = lean_st_ref_take(v___y_3086_);
v_env_3161_ = lean_ctor_get(v___x_3160_, 0);
v_nextMacroScope_3162_ = lean_ctor_get(v___x_3160_, 1);
v_ngen_3163_ = lean_ctor_get(v___x_3160_, 2);
v_auxDeclNGen_3164_ = lean_ctor_get(v___x_3160_, 3);
v_traceState_3165_ = lean_ctor_get(v___x_3160_, 4);
v_recordedDeps_3166_ = lean_ctor_get(v___x_3160_, 6);
v_messages_3167_ = lean_ctor_get(v___x_3160_, 7);
v_infoState_3168_ = lean_ctor_get(v___x_3160_, 8);
v_snapshotTasks_3169_ = lean_ctor_get(v___x_3160_, 9);
v_isSharedCheck_3194_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3194_ == 0)
{
lean_object* v_unused_3195_; 
v_unused_3195_ = lean_ctor_get(v___x_3160_, 5);
lean_dec(v_unused_3195_);
v___x_3171_ = v___x_3160_;
v_isShared_3172_ = v_isSharedCheck_3194_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_snapshotTasks_3169_);
lean_inc(v_infoState_3168_);
lean_inc(v_messages_3167_);
lean_inc(v_recordedDeps_3166_);
lean_inc(v_traceState_3165_);
lean_inc(v_auxDeclNGen_3164_);
lean_inc(v_ngen_3163_);
lean_inc(v_nextMacroScope_3162_);
lean_inc(v_env_3161_);
lean_dec(v___x_3160_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3194_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3176_; 
lean_inc(v_a_3117_);
v___x_3173_ = l_Lean_markMeta(v_env_3161_, v_a_3117_);
v___x_3174_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 5, v___x_3174_);
lean_ctor_set(v___x_3171_, 0, v___x_3173_);
v___x_3176_ = v___x_3171_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v___x_3173_);
lean_ctor_set(v_reuseFailAlloc_3193_, 1, v_nextMacroScope_3162_);
lean_ctor_set(v_reuseFailAlloc_3193_, 2, v_ngen_3163_);
lean_ctor_set(v_reuseFailAlloc_3193_, 3, v_auxDeclNGen_3164_);
lean_ctor_set(v_reuseFailAlloc_3193_, 4, v_traceState_3165_);
lean_ctor_set(v_reuseFailAlloc_3193_, 5, v___x_3174_);
lean_ctor_set(v_reuseFailAlloc_3193_, 6, v_recordedDeps_3166_);
lean_ctor_set(v_reuseFailAlloc_3193_, 7, v_messages_3167_);
lean_ctor_set(v_reuseFailAlloc_3193_, 8, v_infoState_3168_);
lean_ctor_set(v_reuseFailAlloc_3193_, 9, v_snapshotTasks_3169_);
v___x_3176_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v_mctx_3179_; lean_object* v_zetaDeltaFVarIds_3180_; lean_object* v_postponed_3181_; lean_object* v_diag_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3191_; 
v___x_3177_ = lean_st_ref_put(v___y_3086_, v___x_3176_);
v___x_3178_ = lean_st_ref_take(v___y_3084_);
v_mctx_3179_ = lean_ctor_get(v___x_3178_, 0);
v_zetaDeltaFVarIds_3180_ = lean_ctor_get(v___x_3178_, 2);
v_postponed_3181_ = lean_ctor_get(v___x_3178_, 3);
v_diag_3182_ = lean_ctor_get(v___x_3178_, 4);
v_isSharedCheck_3191_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3191_ == 0)
{
lean_object* v_unused_3192_; 
v_unused_3192_ = lean_ctor_get(v___x_3178_, 1);
lean_dec(v_unused_3192_);
v___x_3184_ = v___x_3178_;
v_isShared_3185_ = v_isSharedCheck_3191_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_diag_3182_);
lean_inc(v_postponed_3181_);
lean_inc(v_zetaDeltaFVarIds_3180_);
lean_inc(v_mctx_3179_);
lean_dec(v___x_3178_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3191_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3186_; lean_object* v___x_3188_; 
v___x_3186_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5);
if (v_isShared_3185_ == 0)
{
lean_ctor_set(v___x_3184_, 1, v___x_3186_);
v___x_3188_ = v___x_3184_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_mctx_3179_);
lean_ctor_set(v_reuseFailAlloc_3190_, 1, v___x_3186_);
lean_ctor_set(v_reuseFailAlloc_3190_, 2, v_zetaDeltaFVarIds_3180_);
lean_ctor_set(v_reuseFailAlloc_3190_, 3, v_postponed_3181_);
lean_ctor_set(v_reuseFailAlloc_3190_, 4, v_diag_3182_);
v___x_3188_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
lean_object* v___x_3189_; 
v___x_3189_ = lean_st_ref_put(v___y_3084_, v___x_3188_);
v___y_3141_ = v___y_3085_;
v___y_3142_ = v___y_3086_;
goto v___jp_3140_;
}
}
}
}
}
}
else
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
lean_dec(v_a_3117_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3196_ = lean_ctor_get(v___x_3159_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3159_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3159_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3159_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
else
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3211_; 
lean_dec(v_a_3117_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3204_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3206_ = v___x_3157_;
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3157_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
v___jp_3212_:
{
if (lean_obj_tag(v___y_3213_) == 0)
{
lean_object* v_a_3214_; uint8_t v___x_3215_; 
v_a_3214_ = lean_ctor_get(v___y_3213_, 0);
lean_inc(v_a_3214_);
lean_dec_ref_known(v___y_3213_, 1);
v___x_3215_ = lean_unbox(v_a_3214_);
lean_dec(v_a_3214_);
if (v___x_3215_ == 0)
{
uint8_t v___x_3216_; 
v___x_3216_ = 1;
v___y_3156_ = v___x_3216_;
goto v___jp_3155_;
}
else
{
uint8_t v___x_3217_; 
v___x_3217_ = 3;
v___y_3156_ = v___x_3217_;
goto v___jp_3155_;
}
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3225_; 
lean_dec(v_a_3117_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3218_ = lean_ctor_get(v___y_3213_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___y_3213_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3220_ = v___y_3213_;
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___y_3213_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3223_; 
if (v_isShared_3221_ == 0)
{
v___x_3223_ = v___x_3220_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_a_3218_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
}
v___jp_3230_:
{
lean_object* v___x_3232_; 
v___x_3232_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(v___x_3229_, v___y_3231_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3234_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___x_3232_, 1);
v___x_3234_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_3072_, v_a_3233_, v___y_3084_);
if (lean_obj_tag(v___x_3234_) == 0)
{
lean_object* v___x_3235_; uint8_t v_transparency_3236_; uint8_t v___x_3237_; uint8_t v___x_3238_; 
lean_dec_ref_known(v___x_3234_, 1);
v___x_3235_ = l_Lean_Meta_Context_config(v___y_3083_);
v_transparency_3236_ = lean_ctor_get_uint8(v___x_3235_, 9);
lean_dec_ref(v___x_3235_);
v___x_3237_ = 5;
v___x_3238_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3236_, v___x_3237_);
if (v___x_3238_ == 0)
{
lean_object* v_keyedConfig_3239_; uint8_t v_trackZetaDelta_3240_; lean_object* v_zetaDeltaSet_3241_; lean_object* v_lctx_3242_; lean_object* v_localInstances_3243_; lean_object* v_defEqCtx_x3f_3244_; lean_object* v_synthPendingDepth_3245_; lean_object* v_customCanUnfoldPredicate_x3f_3246_; uint8_t v_univApprox_3247_; uint8_t v_inTypeClassResolution_3248_; uint8_t v_cacheInferType_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v_keyedConfig_3239_ = lean_ctor_get(v___y_3083_, 0);
v_trackZetaDelta_3240_ = lean_ctor_get_uint8(v___y_3083_, sizeof(void*)*7);
v_zetaDeltaSet_3241_ = lean_ctor_get(v___y_3083_, 1);
v_lctx_3242_ = lean_ctor_get(v___y_3083_, 2);
v_localInstances_3243_ = lean_ctor_get(v___y_3083_, 3);
v_defEqCtx_x3f_3244_ = lean_ctor_get(v___y_3083_, 4);
v_synthPendingDepth_3245_ = lean_ctor_get(v___y_3083_, 5);
v_customCanUnfoldPredicate_x3f_3246_ = lean_ctor_get(v___y_3083_, 6);
v_univApprox_3247_ = lean_ctor_get_uint8(v___y_3083_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3248_ = lean_ctor_get_uint8(v___y_3083_, sizeof(void*)*7 + 2);
v_cacheInferType_3249_ = lean_ctor_get_uint8(v___y_3083_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3239_);
v___x_3250_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3237_, v_keyedConfig_3239_);
lean_inc(v_customCanUnfoldPredicate_x3f_3246_);
lean_inc(v_synthPendingDepth_3245_);
lean_inc(v_defEqCtx_x3f_3244_);
lean_inc_ref(v_localInstances_3243_);
lean_inc_ref(v_lctx_3242_);
lean_inc(v_zetaDeltaSet_3241_);
v___x_3251_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
lean_ctor_set(v___x_3251_, 1, v_zetaDeltaSet_3241_);
lean_ctor_set(v___x_3251_, 2, v_lctx_3242_);
lean_ctor_set(v___x_3251_, 3, v_localInstances_3243_);
lean_ctor_set(v___x_3251_, 4, v_defEqCtx_x3f_3244_);
lean_ctor_set(v___x_3251_, 5, v_synthPendingDepth_3245_);
lean_ctor_set(v___x_3251_, 6, v_customCanUnfoldPredicate_x3f_3246_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7, v_trackZetaDelta_3240_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7 + 1, v_univApprox_3247_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3248_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*7 + 3, v_cacheInferType_3249_);
v___x_3252_ = l_Lean_Meta_isExprDefEq(v_a_3076_, v_a_3111_, v___x_3251_, v___y_3084_, v___y_3085_, v___y_3086_);
lean_dec_ref_known(v___x_3251_, 7);
v___y_3213_ = v___x_3252_;
goto v___jp_3212_;
}
else
{
lean_object* v___x_3253_; 
v___x_3253_ = l_Lean_Meta_isExprDefEq(v_a_3076_, v_a_3111_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
v___y_3213_ = v___x_3253_;
goto v___jp_3212_;
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
lean_dec(v_a_3117_);
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3076_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3254_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3234_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3234_);
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
lean_dec(v_a_3117_);
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3076_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
lean_dec(v___x_3072_);
v_a_3262_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3232_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3232_);
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
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3277_; 
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3076_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
lean_dec_ref(v___x_3073_);
lean_dec(v___x_3072_);
v_a_3270_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3272_ = v___x_3116_;
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3116_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3275_; 
if (v_isShared_3273_ == 0)
{
v___x_3275_ = v___x_3272_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3270_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
}
else
{
lean_object* v___x_3278_; 
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3076_);
v___x_3278_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_3072_, v___x_3073_, v___y_3084_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3287_; 
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3287_ == 0)
{
lean_object* v_unused_3288_; 
v_unused_3288_ = lean_ctor_get(v___x_3278_, 0);
lean_dec(v_unused_3288_);
v___x_3280_ = v___x_3278_;
v_isShared_3281_ = v_isSharedCheck_3287_;
goto v_resetjp_3279_;
}
else
{
lean_dec(v___x_3278_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3287_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3285_; 
v___x_3282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___x_3074_);
lean_ctor_set(v___x_3282_, 1, v_snd_3075_);
v___x_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
if (v_isShared_3281_ == 0)
{
lean_ctor_set(v___x_3280_, 0, v___x_3283_);
v___x_3285_ = v___x_3280_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
v_a_3289_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3278_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3278_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
}
else
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3304_; 
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3076_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
lean_dec_ref(v___x_3073_);
lean_dec(v___x_3072_);
v_a_3297_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3299_ = v___x_3112_;
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___x_3112_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3302_; 
if (v_isShared_3300_ == 0)
{
v___x_3302_ = v___x_3299_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v_a_3297_);
v___x_3302_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
return v___x_3302_;
}
}
}
}
else
{
lean_object* v_a_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3312_; 
lean_dec_ref(v_a_3076_);
lean_dec(v_snd_3075_);
lean_dec(v___x_3074_);
lean_dec_ref(v___x_3073_);
lean_dec(v___x_3072_);
v_a_3305_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3307_ = v___x_3110_;
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_a_3305_);
lean_dec(v___x_3110_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3310_; 
if (v_isShared_3308_ == 0)
{
v___x_3310_ = v___x_3307_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_a_3305_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___boxed(lean_object* v___x_3313_, lean_object* v___x_3314_, lean_object* v___x_3315_, lean_object* v_snd_3316_, lean_object* v_a_3317_, lean_object* v_compile_3318_, lean_object* v_logCompileErrors_3319_, lean_object* v_isMeta_3320_, lean_object* v___y_3321_, lean_object* v_exposeAux_3322_, lean_object* v_____r_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_){
_start:
{
uint8_t v_compile_boxed_3329_; uint8_t v_logCompileErrors_boxed_3330_; uint8_t v_isMeta_boxed_3331_; uint8_t v___y_165752__boxed_3332_; uint8_t v_exposeAux_boxed_3333_; lean_object* v_res_3334_; 
v_compile_boxed_3329_ = lean_unbox(v_compile_3318_);
v_logCompileErrors_boxed_3330_ = lean_unbox(v_logCompileErrors_3319_);
v_isMeta_boxed_3331_ = lean_unbox(v_isMeta_3320_);
v___y_165752__boxed_3332_ = lean_unbox(v___y_3321_);
v_exposeAux_boxed_3333_ = lean_unbox(v_exposeAux_3322_);
v_res_3334_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3(v___x_3313_, v___x_3314_, v___x_3315_, v_snd_3316_, v_a_3317_, v_compile_boxed_3329_, v_logCompileErrors_boxed_3330_, v_isMeta_boxed_3331_, v___y_165752__boxed_3332_, v_exposeAux_boxed_3333_, v_____r_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__10(lean_object* v_a_3335_, lean_object* v___x_3336_, uint8_t v_a_3337_, lean_object* v___x_3338_, lean_object* v___f_3339_, lean_object* v_____r_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3346_ = lean_box(0);
v___x_3347_ = l_Lean_Meta_mkAuxTheorem(v_a_3335_, v___x_3336_, v_a_3337_, v___x_3346_, v_a_3337_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v_a_3348_; lean_object* v___x_3349_; 
v_a_3348_ = lean_ctor_get(v___x_3347_, 0);
lean_inc(v_a_3348_);
lean_dec_ref_known(v___x_3347_, 1);
v___x_3349_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_3338_, v_a_3348_, v___y_3342_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v_a_3350_; lean_object* v___x_3351_; 
v_a_3350_ = lean_ctor_get(v___x_3349_, 0);
lean_inc(v_a_3350_);
lean_dec_ref_known(v___x_3349_, 1);
lean_inc(v___y_3344_);
lean_inc_ref(v___y_3343_);
lean_inc(v___y_3342_);
lean_inc_ref(v___y_3341_);
v___x_3351_ = lean_apply_6(v___f_3339_, v_a_3350_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, lean_box(0));
return v___x_3351_;
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec_ref(v___f_3339_);
v_a_3352_ = lean_ctor_get(v___x_3349_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3349_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3349_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3349_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
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
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_dec_ref(v___f_3339_);
lean_dec(v___x_3338_);
v_a_3360_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3347_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3347_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__10___boxed(lean_object* v_a_3368_, lean_object* v___x_3369_, lean_object* v_a_3370_, lean_object* v___x_3371_, lean_object* v___f_3372_, lean_object* v_____r_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
uint8_t v_a_166192__boxed_3379_; lean_object* v_res_3380_; 
v_a_166192__boxed_3379_ = lean_unbox(v_a_3370_);
v_res_3380_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__10(v_a_3368_, v___x_3369_, v_a_166192__boxed_3379_, v___x_3371_, v___f_3372_, v_____r_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v___y_3375_);
lean_dec_ref(v___y_3374_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__5(lean_object* v___x_3381_, lean_object* v_a_3382_, lean_object* v_____r_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v___x_3389_; 
v___x_3389_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_3381_, v_a_3382_, v___y_3385_);
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3397_; 
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3397_ == 0)
{
lean_object* v_unused_3398_; 
v_unused_3398_ = lean_ctor_get(v___x_3389_, 0);
lean_dec(v_unused_3398_);
v___x_3391_ = v___x_3389_;
v_isShared_3392_ = v_isSharedCheck_3397_;
goto v_resetjp_3390_;
}
else
{
lean_dec(v___x_3389_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3397_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3393_; lean_object* v___x_3395_; 
v___x_3393_ = lean_box(0);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 0, v___x_3393_);
v___x_3395_ = v___x_3391_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3393_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3406_; 
v_a_3399_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3401_ = v___x_3389_;
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v___x_3389_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3399_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__5___boxed(lean_object* v___x_3407_, lean_object* v_a_3408_, lean_object* v_____r_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_){
_start:
{
lean_object* v_res_3415_; 
v_res_3415_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__5(v___x_3407_, v_a_3408_, v_____r_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
lean_dec(v___y_3411_);
lean_dec_ref(v___y_3410_);
return v_res_3415_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3417_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__0));
v___x_3418_ = l_Lean_stringToMessageData(v___x_3417_);
return v___x_3418_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3(void){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__2));
v___x_3421_ = l_Lean_stringToMessageData(v___x_3420_);
return v___x_3421_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__5(void){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3423_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__4));
v___x_3424_ = l_Lean_stringToMessageData(v___x_3423_);
return v___x_3424_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7(lean_object* v___f_3425_, lean_object* v___f_3426_, lean_object* v_fst_3427_, lean_object* v_cls_3428_, lean_object* v___x_3429_, lean_object* v_snd_3430_, lean_object* v_val_3431_, lean_object* v_expectedType_3432_, lean_object* v_snd_3433_, lean_object* v___x_3434_, lean_object* v___x_3435_, lean_object* v___f_3436_, uint8_t v_exposeAux_3437_, uint8_t v___x_3438_, uint8_t v___y_3439_, lean_object* v_____r_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_){
_start:
{
lean_object* v_a_3447_; lean_object* v___y_3484_; lean_object* v___x_3498_; 
v___x_3498_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f(v_val_3431_, v_fst_3427_, v_expectedType_3432_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3498_, 1);
if (lean_obj_tag(v_a_3499_) == 1)
{
lean_object* v_val_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v_val_3500_ = lean_ctor_get(v_a_3499_, 0);
lean_inc(v_val_3500_);
lean_dec_ref_known(v_a_3499_, 1);
v___x_3501_ = lean_box(0);
v___x_3502_ = l_Lean_Meta_trySynthInstance(v_val_3500_, v___x_3501_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___x_3502_, 1);
if (lean_obj_tag(v_a_3503_) == 1)
{
lean_object* v_a_3504_; lean_object* v_fieldName_3505_; lean_object* v___x_3506_; 
v_a_3504_ = lean_ctor_get(v_a_3503_, 0);
lean_inc_n(v_a_3504_, 2);
lean_dec_ref_known(v_a_3503_, 1);
v_fieldName_3505_ = lean_ctor_get(v_snd_3433_, 0);
lean_inc(v_fieldName_3505_);
lean_dec_ref(v_snd_3433_);
v___x_3506_ = l_Lean_Meta_mkProjection(v_a_3504_, v_fieldName_3505_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; uint8_t v___x_3508_; lean_object* v___x_3509_; lean_object* v___f_3510_; uint8_t v___y_3512_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc_n(v_a_3507_, 2);
lean_dec_ref_known(v___x_3506_, 1);
v___x_3508_ = 1;
v___x_3509_ = lean_box(v___x_3508_);
v___f_3510_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__6___boxed), 8, 3);
lean_closure_set(v___f_3510_, 0, v___x_3509_);
lean_closure_set(v___f_3510_, 1, v_a_3507_);
lean_closure_set(v___f_3510_, 2, v___x_3435_);
if (v_exposeAux_3437_ == 0)
{
v___y_3512_ = v___x_3438_;
goto v___jp_3511_;
}
else
{
v___y_3512_ = v___y_3439_;
goto v___jp_3511_;
}
v___jp_3511_:
{
lean_object* v___x_3513_; 
v___x_3513_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(v___f_3510_, v___y_3512_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v_a_3514_; uint8_t v___x_3515_; 
v_a_3514_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_a_3514_);
lean_dec_ref_known(v___x_3513_, 1);
v___x_3515_ = lean_unbox(v_a_3514_);
lean_dec(v_a_3514_);
if (v___x_3515_ == 0)
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
lean_dec(v_a_3507_);
lean_dec(v_a_3504_);
lean_dec(v___x_3434_);
v___x_3516_ = lean_box(0);
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3517_ = lean_apply_6(v___f_3436_, v___x_3516_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
v___y_3484_ = v___x_3517_;
goto v___jp_3483_;
}
else
{
lean_object* v___x_3518_; 
lean_dec_ref(v___f_3436_);
lean_inc_ref(v___f_3425_);
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3518_ = lean_apply_5(v___f_3425_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_a_3519_; uint8_t v___x_3520_; 
v_a_3519_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_a_3519_);
lean_dec_ref_known(v___x_3518_, 1);
v___x_3520_ = lean_unbox(v_a_3519_);
lean_dec(v_a_3519_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
lean_dec(v_a_3504_);
v___x_3521_ = lean_box(0);
v___x_3522_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__5(v___x_3434_, v_a_3507_, v___x_3521_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
v___y_3484_ = v___x_3522_;
goto v___jp_3483_;
}
else
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3523_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__5);
v___x_3524_ = l_Lean_MessageData_ofExpr(v_a_3504_);
v___x_3525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3523_);
lean_ctor_set(v___x_3525_, 1, v___x_3524_);
v___x_3526_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_3527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3525_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
lean_inc(v_cls_3428_);
v___x_3528_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_3428_, v___x_3527_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3530_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__5(v___x_3434_, v_a_3507_, v_a_3529_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
v___y_3484_ = v___x_3530_;
goto v___jp_3483_;
}
else
{
lean_object* v_a_3531_; 
lean_dec(v_a_3507_);
lean_dec(v___x_3434_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
v_a_3531_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3528_, 1);
v_a_3447_ = v_a_3531_;
goto v___jp_3446_;
}
}
}
else
{
lean_object* v_a_3532_; 
lean_dec(v_a_3507_);
lean_dec(v_a_3504_);
lean_dec(v___x_3434_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
v_a_3532_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_a_3532_);
lean_dec_ref_known(v___x_3518_, 1);
v_a_3447_ = v_a_3532_;
goto v___jp_3446_;
}
}
}
else
{
lean_object* v_a_3533_; 
lean_dec(v_a_3507_);
lean_dec(v_a_3504_);
lean_dec_ref(v___f_3436_);
lean_dec(v___x_3434_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
v_a_3533_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3513_, 1);
v_a_3447_ = v_a_3533_;
goto v___jp_3446_;
}
}
}
else
{
lean_object* v_a_3534_; 
lean_dec(v_a_3504_);
lean_dec_ref(v___f_3436_);
lean_dec_ref(v___x_3435_);
lean_dec(v___x_3434_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
v_a_3534_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___x_3506_, 1);
v_a_3447_ = v_a_3534_;
goto v___jp_3446_;
}
}
else
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
lean_dec(v_a_3503_);
lean_dec_ref(v___x_3435_);
lean_dec(v___x_3434_);
lean_dec_ref(v_snd_3433_);
v___x_3535_ = lean_box(0);
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3536_ = lean_apply_6(v___f_3436_, v___x_3535_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
v___y_3484_ = v___x_3536_;
goto v___jp_3483_;
}
}
else
{
lean_object* v_a_3537_; 
lean_dec_ref(v___f_3436_);
lean_dec_ref(v___x_3435_);
lean_dec(v___x_3434_);
lean_dec_ref(v_snd_3433_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
v_a_3537_ = lean_ctor_get(v___x_3502_, 0);
lean_inc(v_a_3537_);
lean_dec_ref_known(v___x_3502_, 1);
v_a_3447_ = v_a_3537_;
goto v___jp_3446_;
}
}
else
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
lean_dec(v_a_3499_);
lean_dec_ref(v___f_3436_);
lean_dec_ref(v___x_3435_);
lean_dec(v___x_3434_);
lean_dec_ref(v_snd_3433_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
lean_dec(v_cls_3428_);
lean_dec(v_fst_3427_);
lean_dec_ref(v___f_3425_);
v___x_3538_ = lean_box(0);
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3539_ = lean_apply_6(v___f_3426_, v___x_3538_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
return v___x_3539_;
}
}
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
lean_dec_ref(v___f_3436_);
lean_dec_ref(v___x_3435_);
lean_dec(v___x_3434_);
lean_dec_ref(v_snd_3433_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
lean_dec(v_cls_3428_);
lean_dec(v_fst_3427_);
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___f_3425_);
v_a_3540_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3498_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3498_);
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
v___jp_3446_:
{
uint8_t v___x_3448_; 
v___x_3448_ = l_Lean_Exception_isInterrupt(v_a_3447_);
if (v___x_3448_ == 0)
{
uint8_t v___x_3449_; 
lean_inc_ref(v_a_3447_);
v___x_3449_ = l_Lean_Exception_isRuntime(v_a_3447_);
if (v___x_3449_ == 0)
{
lean_object* v___x_3450_; 
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3450_ = lean_apply_5(v___f_3425_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; uint8_t v___x_3452_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
lean_inc(v_a_3451_);
lean_dec_ref_known(v___x_3450_, 1);
v___x_3452_ = lean_unbox(v_a_3451_);
lean_dec(v_a_3451_);
if (v___x_3452_ == 0)
{
lean_object* v___x_3453_; lean_object* v___x_3454_; 
lean_dec_ref(v_a_3447_);
lean_dec(v_cls_3428_);
lean_dec(v_fst_3427_);
v___x_3453_ = lean_box(0);
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3454_ = lean_apply_6(v___f_3426_, v___x_3453_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
return v___x_3454_;
}
else
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3455_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__1);
v___x_3456_ = l_Lean_MessageData_ofName(v_fst_3427_);
v___x_3457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3455_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
v___x_3458_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3);
v___x_3459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3457_);
lean_ctor_set(v___x_3459_, 1, v___x_3458_);
v___x_3460_ = l_Lean_Exception_toMessageData(v_a_3447_);
v___x_3461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3459_);
lean_ctor_set(v___x_3461_, 1, v___x_3460_);
v___x_3462_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_3428_, v___x_3461_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
if (lean_obj_tag(v___x_3462_) == 0)
{
lean_object* v_a_3463_; lean_object* v___x_3464_; 
v_a_3463_ = lean_ctor_get(v___x_3462_, 0);
lean_inc(v_a_3463_);
lean_dec_ref_known(v___x_3462_, 1);
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3464_ = lean_apply_6(v___f_3426_, v_a_3463_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
return v___x_3464_;
}
else
{
lean_object* v_a_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3472_; 
lean_dec_ref(v___f_3426_);
v_a_3465_ = lean_ctor_get(v___x_3462_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v___x_3462_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3467_ = v___x_3462_;
v_isShared_3468_ = v_isSharedCheck_3472_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_a_3465_);
lean_dec(v___x_3462_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3472_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3470_; 
if (v_isShared_3468_ == 0)
{
v___x_3470_ = v___x_3467_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_a_3465_);
v___x_3470_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
return v___x_3470_;
}
}
}
}
}
else
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3480_; 
lean_dec_ref(v_a_3447_);
lean_dec(v_cls_3428_);
lean_dec(v_fst_3427_);
lean_dec_ref(v___f_3426_);
v_a_3473_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3475_ = v___x_3450_;
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3450_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3478_; 
if (v_isShared_3476_ == 0)
{
v___x_3478_ = v___x_3475_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v_a_3473_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
}
}
else
{
lean_object* v___x_3481_; 
lean_dec(v_cls_3428_);
lean_dec(v_fst_3427_);
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___f_3425_);
v___x_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3481_, 0, v_a_3447_);
return v___x_3481_;
}
}
else
{
lean_object* v___x_3482_; 
lean_dec(v_cls_3428_);
lean_dec(v_fst_3427_);
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___f_3425_);
v___x_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3482_, 0, v_a_3447_);
return v___x_3482_;
}
}
v___jp_3483_:
{
if (lean_obj_tag(v___y_3484_) == 0)
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3496_; 
lean_dec(v_cls_3428_);
lean_dec(v_fst_3427_);
lean_dec_ref(v___f_3425_);
v_a_3485_ = lean_ctor_get(v___y_3484_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___y_3484_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3487_ = v___y_3484_;
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___y_3484_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
if (lean_obj_tag(v_a_3485_) == 0)
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3492_; 
lean_dec_ref(v___f_3426_);
v___x_3489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3429_);
lean_ctor_set(v___x_3489_, 1, v_snd_3430_);
v___x_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v___x_3490_);
v___x_3492_ = v___x_3487_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v___x_3490_);
v___x_3492_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
return v___x_3492_;
}
}
else
{
lean_object* v_a_3494_; lean_object* v___x_3495_; 
lean_del_object(v___x_3487_);
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
v_a_3494_ = lean_ctor_get(v_a_3485_, 0);
lean_inc(v_a_3494_);
lean_dec_ref_known(v_a_3485_, 1);
lean_inc(v___y_3444_);
lean_inc_ref(v___y_3443_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
v___x_3495_ = lean_apply_6(v___f_3426_, v_a_3494_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_, lean_box(0));
return v___x_3495_;
}
}
}
else
{
lean_object* v_a_3497_; 
lean_dec(v_snd_3430_);
lean_dec(v___x_3429_);
v_a_3497_ = lean_ctor_get(v___y_3484_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___y_3484_, 1);
v_a_3447_ = v_a_3497_;
goto v___jp_3446_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___boxed(lean_object** _args){
lean_object* v___f_3548_ = _args[0];
lean_object* v___f_3549_ = _args[1];
lean_object* v_fst_3550_ = _args[2];
lean_object* v_cls_3551_ = _args[3];
lean_object* v___x_3552_ = _args[4];
lean_object* v_snd_3553_ = _args[5];
lean_object* v_val_3554_ = _args[6];
lean_object* v_expectedType_3555_ = _args[7];
lean_object* v_snd_3556_ = _args[8];
lean_object* v___x_3557_ = _args[9];
lean_object* v___x_3558_ = _args[10];
lean_object* v___f_3559_ = _args[11];
lean_object* v_exposeAux_3560_ = _args[12];
lean_object* v___x_3561_ = _args[13];
lean_object* v___y_3562_ = _args[14];
lean_object* v_____r_3563_ = _args[15];
lean_object* v___y_3564_ = _args[16];
lean_object* v___y_3565_ = _args[17];
lean_object* v___y_3566_ = _args[18];
lean_object* v___y_3567_ = _args[19];
lean_object* v___y_3568_ = _args[20];
_start:
{
uint8_t v_exposeAux_boxed_3569_; uint8_t v___x_166359__boxed_3570_; uint8_t v___y_166360__boxed_3571_; lean_object* v_res_3572_; 
v_exposeAux_boxed_3569_ = lean_unbox(v_exposeAux_3560_);
v___x_166359__boxed_3570_ = lean_unbox(v___x_3561_);
v___y_166360__boxed_3571_ = lean_unbox(v___y_3562_);
v_res_3572_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7(v___f_3548_, v___f_3549_, v_fst_3550_, v_cls_3551_, v___x_3552_, v_snd_3553_, v_val_3554_, v_expectedType_3555_, v_snd_3556_, v___x_3557_, v___x_3558_, v___f_3559_, v_exposeAux_boxed_3569_, v___x_166359__boxed_3570_, v___y_166360__boxed_3571_, v_____r_3563_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_);
lean_dec(v___y_3567_);
lean_dec_ref(v___y_3566_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
return v_res_3572_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__12(lean_object* v_a_3573_, lean_object* v_a_3574_){
_start:
{
if (lean_obj_tag(v_a_3573_) == 0)
{
lean_object* v___x_3575_; 
v___x_3575_ = l_List_reverse___redArg(v_a_3574_);
return v___x_3575_;
}
else
{
lean_object* v_head_3576_; lean_object* v_tail_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3586_; 
v_head_3576_ = lean_ctor_get(v_a_3573_, 0);
v_tail_3577_ = lean_ctor_get(v_a_3573_, 1);
v_isSharedCheck_3586_ = !lean_is_exclusive(v_a_3573_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3579_ = v_a_3573_;
v_isShared_3580_ = v_isSharedCheck_3586_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_tail_3577_);
lean_inc(v_head_3576_);
lean_dec(v_a_3573_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3586_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3581_ = l_Lean_MessageData_ofExpr(v_head_3576_);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 1, v_a_3574_);
lean_ctor_set(v___x_3579_, 0, v___x_3581_);
v___x_3583_ = v___x_3579_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v___x_3581_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v_a_3574_);
v___x_3583_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
v_a_3573_ = v_tail_3577_;
v_a_3574_ = v___x_3583_;
goto _start;
}
}
}
}
}
static double _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__0(void){
_start:
{
lean_object* v___x_3587_; double v___x_3588_; 
v___x_3587_ = lean_unsigned_to_nat(1000000000u);
v___x_3588_ = lean_float_of_nat(v___x_3587_);
return v___x_3588_;
}
}
static lean_object* _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2(void){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3590_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__1));
v___x_3591_ = l_Lean_stringToMessageData(v___x_3590_);
return v___x_3591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(uint8_t v_compile_3592_, uint8_t v_logCompileErrors_3593_, uint8_t v_isMeta_3594_, uint8_t v_exposeAux_3595_, lean_object* v_inst_3596_, lean_object* v_expectedType_3597_, uint8_t v_isEta_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_){
_start:
{
lean_object* v_toCold_3604_; lean_object* v_options_3605_; uint8_t v_hasTrace_3606_; 
v_toCold_3604_ = lean_ctor_get(v_a_3601_, 0);
v_options_3605_ = lean_ctor_get(v_toCold_3604_, 2);
v_hasTrace_3606_ = lean_ctor_get_uint8(v_options_3605_, sizeof(void*)*1);
if (v_hasTrace_3606_ == 0)
{
lean_object* v___x_3607_; 
lean_inc_ref(v_expectedType_3597_);
v___x_3607_ = l_Lean_Meta_isClass_x3f(v_expectedType_3597_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3698_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3610_ = v___x_3607_;
v_isShared_3611_ = v_isSharedCheck_3698_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3607_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3698_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
if (lean_obj_tag(v_a_3608_) == 1)
{
lean_object* v_val_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3693_; 
lean_del_object(v___x_3610_);
v_val_3612_ = lean_ctor_get(v_a_3608_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v_a_3608_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3614_ = v_a_3608_;
v_isShared_3615_ = v_isSharedCheck_3693_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_val_3612_);
lean_dec(v_a_3608_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3693_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___x_3637_; 
lean_inc_ref(v_expectedType_3597_);
v___x_3637_ = l_Lean_Meta_isProp(v_expectedType_3597_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3684_; 
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3640_ = v___x_3637_;
v_isShared_3641_ = v_isSharedCheck_3684_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v___x_3637_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3684_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
uint8_t v___x_3642_; 
v___x_3642_ = lean_unbox(v_a_3638_);
lean_dec(v_a_3638_);
if (v___x_3642_ == 0)
{
lean_object* v___x_3643_; 
lean_del_object(v___x_3640_);
lean_del_object(v___x_3614_);
v___x_3643_ = l_Lean_Expr_getAppFn(v_inst_3596_);
if (lean_obj_tag(v___x_3643_) == 4)
{
lean_object* v_declName_3644_; lean_object* v___x_3645_; 
v_declName_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_declName_3644_);
lean_dec_ref_known(v___x_3643_, 2);
v___x_3645_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14(v_declName_3644_, v_isMeta_3594_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_dec_ref_known(v___x_3645_, 1);
v___y_3617_ = v_a_3599_;
v___y_3618_ = v_a_3600_;
v___y_3619_ = v_a_3601_;
v___y_3620_ = v_a_3602_;
goto v___jp_3616_;
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
lean_dec(v_val_3612_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3645_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3645_);
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
else
{
lean_dec_ref(v___x_3643_);
v___y_3617_ = v_a_3599_;
v___y_3618_ = v_a_3600_;
v___y_3619_ = v_a_3601_;
v___y_3620_ = v_a_3602_;
goto v___jp_3616_;
}
}
else
{
lean_object* v___x_3654_; lean_object* v___x_3655_; uint8_t v___x_3656_; 
lean_dec(v_val_3612_);
v___x_3654_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3601_);
v___x_3655_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_3656_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_3654_, v___x_3655_);
lean_dec_ref(v___x_3654_);
if (v___x_3656_ == 0)
{
lean_object* v___x_3658_; 
lean_dec_ref(v_expectedType_3597_);
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v_inst_3596_);
v___x_3658_ = v___x_3614_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_inst_3596_);
v___x_3658_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
lean_object* v___x_3660_; 
if (v_isShared_3641_ == 0)
{
lean_ctor_set(v___x_3640_, 0, v___x_3658_);
v___x_3660_ = v___x_3640_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v___x_3658_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
else
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
lean_del_object(v___x_3640_);
v___x_3663_ = lean_box(0);
v___x_3664_ = l_Lean_Meta_mkAuxTheorem(v_expectedType_3597_, v_inst_3596_, v___x_3656_, v___x_3663_, v___x_3656_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3675_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3675_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3675_ == 0)
{
v___x_3667_ = v___x_3664_;
v_isShared_3668_ = v_isSharedCheck_3675_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v___x_3664_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3675_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 0, v_a_3665_);
v___x_3670_ = v___x_3614_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
lean_object* v___x_3672_; 
if (v_isShared_3668_ == 0)
{
lean_ctor_set(v___x_3667_, 0, v___x_3670_);
v___x_3672_ = v___x_3667_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v___x_3670_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
}
}
}
}
else
{
lean_object* v_a_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3683_; 
lean_del_object(v___x_3614_);
v_a_3676_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3678_ = v___x_3664_;
v_isShared_3679_ = v_isSharedCheck_3683_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_a_3676_);
lean_dec(v___x_3664_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3683_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
lean_object* v___x_3681_; 
if (v_isShared_3679_ == 0)
{
v___x_3681_ = v___x_3678_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v_a_3676_);
v___x_3681_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
return v___x_3681_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
lean_del_object(v___x_3614_);
lean_dec(v_val_3612_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3685_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3637_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3637_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
v___jp_3616_:
{
lean_object* v___x_3621_; 
lean_inc(v___y_3620_);
lean_inc_ref(v___y_3619_);
lean_inc(v___y_3618_);
lean_inc_ref(v___y_3617_);
lean_inc_ref(v_inst_3596_);
v___x_3621_ = lean_whnf(v_inst_3596_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v_a_3622_; lean_object* v_dummy_3623_; lean_object* v_nargs_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3621_, 1);
v_dummy_3623_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0);
v_nargs_3624_ = l_Lean_Expr_getAppNumArgs(v_a_3622_);
lean_inc(v_nargs_3624_);
v___x_3625_ = lean_mk_array(v_nargs_3624_, v_dummy_3623_);
v___x_3626_ = lean_unsigned_to_nat(1u);
v___x_3627_ = lean_nat_sub(v_nargs_3624_, v___x_3626_);
lean_dec(v_nargs_3624_);
v___x_3628_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13(v_inst_3596_, v_expectedType_3597_, v_compile_3592_, v_logCompileErrors_3593_, v_isMeta_3594_, v_exposeAux_3595_, v_val_3612_, v_isEta_3598_, v_a_3622_, v___x_3625_, v___x_3627_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_);
lean_dec(v___x_3627_);
return v___x_3628_;
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3636_; 
lean_dec(v_val_3612_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3629_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3631_ = v___x_3621_;
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3621_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
}
}
else
{
lean_object* v___x_3694_; lean_object* v___x_3696_; 
lean_dec(v_a_3608_);
lean_dec_ref(v_expectedType_3597_);
v___x_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3694_, 0, v_inst_3596_);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v___x_3694_);
v___x_3696_ = v___x_3610_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v___x_3694_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
else
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3706_; 
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3699_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3701_ = v___x_3607_;
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3607_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_3707_; lean_object* v___f_3708_; lean_object* v_cls_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; uint8_t v___x_3712_; lean_object* v___y_3714_; lean_object* v___y_3715_; lean_object* v_a_3716_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v_a_3728_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v_a_3733_; lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3742_; lean_object* v___y_3743_; lean_object* v_a_3744_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v_a_3759_; lean_object* v___y_3762_; lean_object* v___y_3763_; lean_object* v_a_3764_; lean_object* v___y_3767_; lean_object* v___y_3768_; lean_object* v___y_3769_; 
v_inheritedTraceOptions_3707_ = lean_ctor_get(v_toCold_3604_, 11);
lean_inc_ref(v_expectedType_3597_);
v___f_3708_ = lean_alloc_closure((void*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3708_, 0, v_expectedType_3597_);
v_cls_3709_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_3710_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__0___closed__1));
v___x_3711_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3);
v___x_3712_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3707_, v_options_3605_, v___x_3711_);
if (v___x_3712_ == 0)
{
lean_object* v___x_3829_; uint8_t v___x_3830_; 
v___x_3829_ = l_Lean_trace_profiler;
v___x_3830_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v_options_3605_, v___x_3829_);
if (v___x_3830_ == 0)
{
lean_object* v___x_3831_; 
lean_dec_ref(v___f_3708_);
lean_inc_ref(v_expectedType_3597_);
v___x_3831_ = l_Lean_Meta_isClass_x3f(v_expectedType_3597_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3939_; 
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3834_ = v___x_3831_;
v_isShared_3835_ = v_isSharedCheck_3939_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3831_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3939_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
if (lean_obj_tag(v_a_3832_) == 1)
{
lean_object* v_val_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3934_; 
lean_del_object(v___x_3834_);
v_val_3836_ = lean_ctor_get(v_a_3832_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v_a_3832_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3838_ = v_a_3832_;
v_isShared_3839_ = v_isSharedCheck_3934_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_val_3836_);
lean_dec(v_a_3832_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3934_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; lean_object* v___y_3862_; lean_object* v___y_3863_; lean_object* v___y_3864_; lean_object* v___y_3865_; 
if (v___x_3712_ == 0)
{
v___y_3862_ = v_a_3599_;
v___y_3863_ = v_a_3600_;
v___y_3864_ = v_a_3601_;
v___y_3865_ = v_a_3602_;
goto v___jp_3861_;
}
else
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3922_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2);
lean_inc(v_val_3836_);
v___x_3923_ = l_Lean_MessageData_ofName(v_val_3836_);
v___x_3924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3922_);
lean_ctor_set(v___x_3924_, 1, v___x_3923_);
v___x_3925_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_3709_, v___x_3924_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_dec_ref_known(v___x_3925_, 1);
v___y_3862_ = v_a_3599_;
v___y_3863_ = v_a_3600_;
v___y_3864_ = v_a_3601_;
v___y_3865_ = v_a_3602_;
goto v___jp_3861_;
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3933_; 
lean_del_object(v___x_3838_);
lean_dec(v_val_3836_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3926_ = lean_ctor_get(v___x_3925_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3928_ = v___x_3925_;
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3925_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
return v___x_3931_;
}
}
}
}
v___jp_3840_:
{
lean_object* v___x_3845_; 
lean_inc(v___y_3844_);
lean_inc_ref(v___y_3843_);
lean_inc(v___y_3842_);
lean_inc_ref(v___y_3841_);
lean_inc_ref(v_inst_3596_);
v___x_3845_ = lean_whnf(v_inst_3596_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
if (lean_obj_tag(v___x_3845_) == 0)
{
lean_object* v_a_3846_; lean_object* v_dummy_3847_; lean_object* v_nargs_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v_a_3846_ = lean_ctor_get(v___x_3845_, 0);
lean_inc(v_a_3846_);
lean_dec_ref_known(v___x_3845_, 1);
v_dummy_3847_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0);
v_nargs_3848_ = l_Lean_Expr_getAppNumArgs(v_a_3846_);
lean_inc(v_nargs_3848_);
v___x_3849_ = lean_mk_array(v_nargs_3848_, v_dummy_3847_);
v___x_3850_ = lean_unsigned_to_nat(1u);
v___x_3851_ = lean_nat_sub(v_nargs_3848_, v___x_3850_);
lean_dec(v_nargs_3848_);
v___x_3852_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13(v_inst_3596_, v_expectedType_3597_, v_compile_3592_, v_logCompileErrors_3593_, v_isMeta_3594_, v_exposeAux_3595_, v_val_3836_, v_isEta_3598_, v_a_3846_, v___x_3849_, v___x_3851_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
lean_dec(v___x_3851_);
return v___x_3852_;
}
else
{
lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3860_; 
lean_dec(v_val_3836_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3853_ = lean_ctor_get(v___x_3845_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3845_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3855_ = v___x_3845_;
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_dec(v___x_3845_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_a_3853_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
v___jp_3861_:
{
lean_object* v___x_3866_; 
lean_inc_ref(v_expectedType_3597_);
v___x_3866_ = l_Lean_Meta_isProp(v_expectedType_3597_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_3866_) == 0)
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3913_; 
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3869_ = v___x_3866_;
v_isShared_3870_ = v_isSharedCheck_3913_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3866_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3913_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
uint8_t v___x_3871_; 
v___x_3871_ = lean_unbox(v_a_3867_);
lean_dec(v_a_3867_);
if (v___x_3871_ == 0)
{
lean_object* v___x_3872_; 
lean_del_object(v___x_3869_);
lean_del_object(v___x_3838_);
v___x_3872_ = l_Lean_Expr_getAppFn(v_inst_3596_);
if (lean_obj_tag(v___x_3872_) == 4)
{
lean_object* v_declName_3873_; lean_object* v___x_3874_; 
v_declName_3873_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_declName_3873_);
lean_dec_ref_known(v___x_3872_, 2);
v___x_3874_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14(v_declName_3873_, v_isMeta_3594_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_dec_ref_known(v___x_3874_, 1);
v___y_3841_ = v___y_3862_;
v___y_3842_ = v___y_3863_;
v___y_3843_ = v___y_3864_;
v___y_3844_ = v___y_3865_;
goto v___jp_3840_;
}
else
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
lean_dec(v_val_3836_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3875_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3874_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3874_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_a_3875_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
else
{
lean_dec_ref(v___x_3872_);
v___y_3841_ = v___y_3862_;
v___y_3842_ = v___y_3863_;
v___y_3843_ = v___y_3864_;
v___y_3844_ = v___y_3865_;
goto v___jp_3840_;
}
}
else
{
lean_object* v___x_3883_; lean_object* v___x_3884_; uint8_t v___x_3885_; 
lean_dec(v_val_3836_);
v___x_3883_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3864_);
v___x_3884_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_3885_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_3883_, v___x_3884_);
lean_dec_ref(v___x_3883_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3887_; 
lean_dec_ref(v_expectedType_3597_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set(v___x_3838_, 0, v_inst_3596_);
v___x_3887_ = v___x_3838_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v_inst_3596_);
v___x_3887_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
lean_object* v___x_3889_; 
if (v_isShared_3870_ == 0)
{
lean_ctor_set(v___x_3869_, 0, v___x_3887_);
v___x_3889_ = v___x_3869_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v___x_3887_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
else
{
lean_object* v___x_3892_; lean_object* v___x_3893_; 
lean_del_object(v___x_3869_);
v___x_3892_ = lean_box(0);
v___x_3893_ = l_Lean_Meta_mkAuxTheorem(v_expectedType_3597_, v_inst_3596_, v___x_3885_, v___x_3892_, v___x_3885_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_3893_) == 0)
{
lean_object* v_a_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3904_; 
v_a_3894_ = lean_ctor_get(v___x_3893_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3893_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3896_ = v___x_3893_;
v_isShared_3897_ = v_isSharedCheck_3904_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_a_3894_);
lean_dec(v___x_3893_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3904_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3899_; 
if (v_isShared_3839_ == 0)
{
lean_ctor_set(v___x_3838_, 0, v_a_3894_);
v___x_3899_ = v___x_3838_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_a_3894_);
v___x_3899_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
lean_object* v___x_3901_; 
if (v_isShared_3897_ == 0)
{
lean_ctor_set(v___x_3896_, 0, v___x_3899_);
v___x_3901_ = v___x_3896_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v___x_3899_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
lean_del_object(v___x_3838_);
v_a_3905_ = lean_ctor_get(v___x_3893_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3893_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3893_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3893_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3921_; 
lean_del_object(v___x_3838_);
lean_dec(v_val_3836_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3914_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3916_ = v___x_3866_;
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3866_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v___x_3919_; 
if (v_isShared_3917_ == 0)
{
v___x_3919_ = v___x_3916_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3914_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
}
}
}
else
{
lean_object* v___x_3935_; lean_object* v___x_3937_; 
lean_dec(v_a_3832_);
lean_dec_ref(v_expectedType_3597_);
v___x_3935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3935_, 0, v_inst_3596_);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 0, v___x_3935_);
v___x_3937_ = v___x_3834_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3935_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3947_; 
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3940_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3942_ = v___x_3831_;
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v___x_3831_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v_a_3940_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
else
{
goto v___jp_3772_;
}
}
else
{
goto v___jp_3772_;
}
v___jp_3713_:
{
lean_object* v___x_3717_; double v___x_3718_; double v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; 
v___x_3717_ = lean_io_get_num_heartbeats();
v___x_3718_ = lean_float_of_nat(v___y_3715_);
v___x_3719_ = lean_float_of_nat(v___x_3717_);
v___x_3720_ = lean_box_float(v___x_3718_);
v___x_3721_ = lean_box_float(v___x_3719_);
v___x_3722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3720_);
lean_ctor_set(v___x_3722_, 1, v___x_3721_);
v___x_3723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3723_, 0, v_a_3716_);
lean_ctor_set(v___x_3723_, 1, v___x_3722_);
v___x_3724_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16(v_cls_3709_, v_hasTrace_3606_, v___x_3710_, v_options_3605_, v___x_3712_, v___y_3714_, v___f_3708_, v___x_3723_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
return v___x_3724_;
}
v___jp_3725_:
{
lean_object* v___x_3729_; 
v___x_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3729_, 0, v_a_3728_);
v___y_3714_ = v___y_3726_;
v___y_3715_ = v___y_3727_;
v_a_3716_ = v___x_3729_;
goto v___jp_3713_;
}
v___jp_3730_:
{
lean_object* v___x_3734_; 
v___x_3734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3734_, 0, v_a_3733_);
v___y_3714_ = v___y_3731_;
v___y_3715_ = v___y_3732_;
v_a_3716_ = v___x_3734_;
goto v___jp_3713_;
}
v___jp_3735_:
{
if (lean_obj_tag(v___y_3738_) == 0)
{
lean_object* v_a_3739_; 
v_a_3739_ = lean_ctor_get(v___y_3738_, 0);
lean_inc(v_a_3739_);
lean_dec_ref_known(v___y_3738_, 1);
v___y_3726_ = v___y_3736_;
v___y_3727_ = v___y_3737_;
v_a_3728_ = v_a_3739_;
goto v___jp_3725_;
}
else
{
lean_object* v_a_3740_; 
v_a_3740_ = lean_ctor_get(v___y_3738_, 0);
lean_inc(v_a_3740_);
lean_dec_ref_known(v___y_3738_, 1);
v___y_3731_ = v___y_3736_;
v___y_3732_ = v___y_3737_;
v_a_3733_ = v_a_3740_;
goto v___jp_3730_;
}
}
v___jp_3741_:
{
lean_object* v___x_3745_; double v___x_3746_; double v___x_3747_; double v___x_3748_; double v___x_3749_; double v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3745_ = lean_io_mono_nanos_now();
v___x_3746_ = lean_float_of_nat(v___y_3742_);
v___x_3747_ = lean_float_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__0, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__0_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__0);
v___x_3748_ = lean_float_div(v___x_3746_, v___x_3747_);
v___x_3749_ = lean_float_of_nat(v___x_3745_);
v___x_3750_ = lean_float_div(v___x_3749_, v___x_3747_);
v___x_3751_ = lean_box_float(v___x_3748_);
v___x_3752_ = lean_box_float(v___x_3750_);
v___x_3753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3751_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
v___x_3754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3754_, 0, v_a_3744_);
lean_ctor_set(v___x_3754_, 1, v___x_3753_);
v___x_3755_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16(v_cls_3709_, v_hasTrace_3606_, v___x_3710_, v_options_3605_, v___x_3712_, v___y_3743_, v___f_3708_, v___x_3754_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
return v___x_3755_;
}
v___jp_3756_:
{
lean_object* v___x_3760_; 
v___x_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3760_, 0, v_a_3759_);
v___y_3742_ = v___y_3757_;
v___y_3743_ = v___y_3758_;
v_a_3744_ = v___x_3760_;
goto v___jp_3741_;
}
v___jp_3761_:
{
lean_object* v___x_3765_; 
v___x_3765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3765_, 0, v_a_3764_);
v___y_3742_ = v___y_3762_;
v___y_3743_ = v___y_3763_;
v_a_3744_ = v___x_3765_;
goto v___jp_3741_;
}
v___jp_3766_:
{
if (lean_obj_tag(v___y_3769_) == 0)
{
lean_object* v_a_3770_; 
v_a_3770_ = lean_ctor_get(v___y_3769_, 0);
lean_inc(v_a_3770_);
lean_dec_ref_known(v___y_3769_, 1);
v___y_3762_ = v___y_3767_;
v___y_3763_ = v___y_3768_;
v_a_3764_ = v_a_3770_;
goto v___jp_3761_;
}
else
{
lean_object* v_a_3771_; 
v_a_3771_ = lean_ctor_get(v___y_3769_, 0);
lean_inc(v_a_3771_);
lean_dec_ref_known(v___y_3769_, 1);
v___y_3757_ = v___y_3767_;
v___y_3758_ = v___y_3768_;
v_a_3759_ = v_a_3771_;
goto v___jp_3756_;
}
}
v___jp_3772_:
{
lean_object* v___x_3773_; 
v___x_3773_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__15___redArg(v_a_3602_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v_a_3774_; lean_object* v___x_3775_; uint8_t v___x_3776_; 
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_a_3774_);
lean_dec_ref_known(v___x_3773_, 1);
v___x_3775_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3776_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v_options_3605_, v___x_3775_);
if (v___x_3776_ == 0)
{
lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3777_ = lean_io_mono_nanos_now();
lean_inc_ref(v_expectedType_3597_);
v___x_3778_ = l_Lean_Meta_isClass_x3f(v_expectedType_3597_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3797_; 
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3781_ = v___x_3778_;
v_isShared_3782_ = v_isSharedCheck_3797_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3778_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3797_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
if (lean_obj_tag(v_a_3779_) == 1)
{
lean_del_object(v___x_3781_);
if (v___x_3712_ == 0)
{
lean_object* v_val_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; 
v_val_3783_ = lean_ctor_get(v_a_3779_, 0);
lean_inc(v_val_3783_);
lean_dec_ref_known(v_a_3779_, 1);
v___x_3784_ = lean_box(0);
v___x_3785_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1(v_inst_3596_, v_expectedType_3597_, v_compile_3592_, v_logCompileErrors_3593_, v_isMeta_3594_, v_exposeAux_3595_, v_val_3783_, v_isEta_3598_, v___x_3784_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
v___y_3767_ = v___x_3777_;
v___y_3768_ = v_a_3774_;
v___y_3769_ = v___x_3785_;
goto v___jp_3766_;
}
else
{
lean_object* v_val_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
v_val_3786_ = lean_ctor_get(v_a_3779_, 0);
lean_inc_n(v_val_3786_, 2);
lean_dec_ref_known(v_a_3779_, 1);
v___x_3787_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2);
v___x_3788_ = l_Lean_MessageData_ofName(v_val_3786_);
v___x_3789_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3787_);
lean_ctor_set(v___x_3789_, 1, v___x_3788_);
v___x_3790_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_3709_, v___x_3789_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v_a_3791_; lean_object* v___x_3792_; 
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
lean_inc(v_a_3791_);
lean_dec_ref_known(v___x_3790_, 1);
v___x_3792_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1(v_inst_3596_, v_expectedType_3597_, v_compile_3592_, v_logCompileErrors_3593_, v_isMeta_3594_, v_exposeAux_3595_, v_val_3786_, v_isEta_3598_, v_a_3791_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
v___y_3767_ = v___x_3777_;
v___y_3768_ = v_a_3774_;
v___y_3769_ = v___x_3792_;
goto v___jp_3766_;
}
else
{
lean_object* v_a_3793_; 
lean_dec(v_val_3786_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3793_ = lean_ctor_get(v___x_3790_, 0);
lean_inc(v_a_3793_);
lean_dec_ref_known(v___x_3790_, 1);
v___y_3757_ = v___x_3777_;
v___y_3758_ = v_a_3774_;
v_a_3759_ = v_a_3793_;
goto v___jp_3756_;
}
}
}
else
{
lean_object* v___x_3795_; 
lean_dec(v_a_3779_);
lean_dec_ref(v_expectedType_3597_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set_tag(v___x_3781_, 1);
lean_ctor_set(v___x_3781_, 0, v_inst_3596_);
v___x_3795_ = v___x_3781_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_inst_3596_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
v___y_3762_ = v___x_3777_;
v___y_3763_ = v_a_3774_;
v_a_3764_ = v___x_3795_;
goto v___jp_3761_;
}
}
}
}
else
{
lean_object* v_a_3798_; 
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3798_ = lean_ctor_get(v___x_3778_, 0);
lean_inc(v_a_3798_);
lean_dec_ref_known(v___x_3778_, 1);
v___y_3757_ = v___x_3777_;
v___y_3758_ = v_a_3774_;
v_a_3759_ = v_a_3798_;
goto v___jp_3756_;
}
}
else
{
lean_object* v___x_3799_; lean_object* v___x_3800_; 
v___x_3799_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_expectedType_3597_);
v___x_3800_ = l_Lean_Meta_isClass_x3f(v_expectedType_3597_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3819_; 
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3803_ = v___x_3800_;
v_isShared_3804_ = v_isSharedCheck_3819_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3800_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3819_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
if (lean_obj_tag(v_a_3801_) == 1)
{
lean_del_object(v___x_3803_);
if (v___x_3712_ == 0)
{
lean_object* v_val_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v_val_3805_ = lean_ctor_get(v_a_3801_, 0);
lean_inc(v_val_3805_);
lean_dec_ref_known(v_a_3801_, 1);
v___x_3806_ = lean_box(0);
v___x_3807_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1(v_inst_3596_, v_expectedType_3597_, v_compile_3592_, v_logCompileErrors_3593_, v_isMeta_3594_, v_exposeAux_3595_, v_val_3805_, v_isEta_3598_, v___x_3806_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
v___y_3736_ = v_a_3774_;
v___y_3737_ = v___x_3799_;
v___y_3738_ = v___x_3807_;
goto v___jp_3735_;
}
else
{
lean_object* v_val_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v_val_3808_ = lean_ctor_get(v_a_3801_, 0);
lean_inc_n(v_val_3808_, 2);
lean_dec_ref_known(v_a_3801_, 1);
v___x_3809_ = lean_obj_once(&l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2, &l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2_once, _init_l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___closed__2);
v___x_3810_ = l_Lean_MessageData_ofName(v_val_3808_);
v___x_3811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3809_);
lean_ctor_set(v___x_3811_, 1, v___x_3810_);
v___x_3812_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_3709_, v___x_3811_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
if (lean_obj_tag(v___x_3812_) == 0)
{
lean_object* v_a_3813_; lean_object* v___x_3814_; 
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
lean_inc(v_a_3813_);
lean_dec_ref_known(v___x_3812_, 1);
v___x_3814_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1(v_inst_3596_, v_expectedType_3597_, v_compile_3592_, v_logCompileErrors_3593_, v_isMeta_3594_, v_exposeAux_3595_, v_val_3808_, v_isEta_3598_, v_a_3813_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_);
v___y_3736_ = v_a_3774_;
v___y_3737_ = v___x_3799_;
v___y_3738_ = v___x_3814_;
goto v___jp_3735_;
}
else
{
lean_object* v_a_3815_; 
lean_dec(v_val_3808_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3815_ = lean_ctor_get(v___x_3812_, 0);
lean_inc(v_a_3815_);
lean_dec_ref_known(v___x_3812_, 1);
v___y_3731_ = v_a_3774_;
v___y_3732_ = v___x_3799_;
v_a_3733_ = v_a_3815_;
goto v___jp_3730_;
}
}
}
else
{
lean_object* v___x_3817_; 
lean_dec(v_a_3801_);
lean_dec_ref(v_expectedType_3597_);
if (v_isShared_3804_ == 0)
{
lean_ctor_set_tag(v___x_3803_, 1);
lean_ctor_set(v___x_3803_, 0, v_inst_3596_);
v___x_3817_ = v___x_3803_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_inst_3596_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
v___y_3726_ = v_a_3774_;
v___y_3727_ = v___x_3799_;
v_a_3728_ = v___x_3817_;
goto v___jp_3725_;
}
}
}
}
else
{
lean_object* v_a_3820_; 
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3820_ = lean_ctor_get(v___x_3800_, 0);
lean_inc(v_a_3820_);
lean_dec_ref_known(v___x_3800_, 1);
v___y_3731_ = v_a_3774_;
v___y_3732_ = v___x_3799_;
v_a_3733_ = v_a_3820_;
goto v___jp_3730_;
}
}
}
else
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_dec_ref(v___f_3708_);
lean_dec_ref(v_expectedType_3597_);
lean_dec_ref(v_inst_3596_);
v_a_3821_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3773_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3773_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1(void){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3949_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__0));
v___x_3950_ = l_Lean_stringToMessageData(v___x_3949_);
return v___x_3950_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; 
v___x_3952_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__0));
v___x_3953_ = l_Lean_stringToMessageData(v___x_3952_);
return v___x_3953_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3959_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__2));
v___x_3960_ = lean_unsigned_to_nat(14u);
v___x_3961_ = lean_unsigned_to_nat(22u);
v___x_3962_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__1));
v___x_3963_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__0));
v___x_3964_ = l_mkPanicMessageWithDecl(v___x_3963_, v___x_3962_, v___x_3961_, v___x_3960_, v___x_3959_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2(lean_object* v___x_3965_, lean_object* v___x_3966_, uint8_t v_compile_3967_, uint8_t v_logCompileErrors_3968_, uint8_t v_isMeta_3969_, uint8_t v_exposeAux_3970_, lean_object* v___x_3971_, lean_object* v_a_3972_, uint8_t v___y_3973_, lean_object* v_____r_3974_, uint8_t v_isEta_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_){
_start:
{
lean_object* v___y_3982_; uint8_t v___y_3983_; lean_object* v___y_3984_; 
if (v_isEta_3975_ == 0)
{
goto v___jp_4005_;
}
else
{
lean_object* v___x_4019_; 
lean_inc_ref(v___x_3971_);
v___x_4019_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f(v___x_3971_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
if (lean_obj_tag(v___x_4019_) == 0)
{
lean_object* v_a_4020_; 
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v___x_4019_, 1);
if (lean_obj_tag(v_a_4020_) == 1)
{
lean_object* v_val_4021_; lean_object* v___x_4022_; 
v_val_4021_ = lean_ctor_get(v_a_4020_, 0);
lean_inc(v_val_4021_);
lean_dec_ref_known(v_a_4020_, 1);
lean_inc_ref(v_a_3972_);
v___x_4022_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(v_compile_3967_, v_logCompileErrors_3968_, v_isMeta_3969_, v_exposeAux_3970_, v_val_4021_, v_a_3972_, v_isEta_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___x_4022_, 1);
if (lean_obj_tag(v_a_4023_) == 1)
{
lean_object* v_val_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4050_; 
lean_dec_ref(v_a_3972_);
lean_dec_ref(v___x_3971_);
v_val_4024_ = lean_ctor_get(v_a_4023_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v_a_4023_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4026_ = v_a_4023_;
v_isShared_4027_ = v_isSharedCheck_4050_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_val_4024_);
lean_dec(v_a_4023_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4050_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v___x_4028_; 
v___x_4028_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_3965_, v_val_4024_, v___y_3977_);
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4040_; 
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4040_ == 0)
{
lean_object* v_unused_4041_; 
v_unused_4041_ = lean_ctor_get(v___x_4028_, 0);
lean_dec(v_unused_4041_);
v___x_4030_ = v___x_4028_;
v_isShared_4031_ = v_isSharedCheck_4040_;
goto v_resetjp_4029_;
}
else
{
lean_dec(v___x_4028_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4040_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4035_; 
v___x_4032_ = lean_box(v___y_3973_);
v___x_4033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4033_, 0, v___x_3966_);
lean_ctor_set(v___x_4033_, 1, v___x_4032_);
if (v_isShared_4027_ == 0)
{
lean_ctor_set(v___x_4026_, 0, v___x_4033_);
v___x_4035_ = v___x_4026_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v___x_4033_);
v___x_4035_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4037_; 
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 0, v___x_4035_);
v___x_4037_ = v___x_4030_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4035_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4049_; 
lean_del_object(v___x_4026_);
lean_dec(v___x_3966_);
v_a_4042_ = lean_ctor_get(v___x_4028_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4044_ = v___x_4028_;
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v___x_4028_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
}
}
else
{
lean_dec(v_a_4023_);
goto v___jp_4005_;
}
}
else
{
lean_object* v_a_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4058_; 
lean_dec_ref(v_a_3972_);
lean_dec_ref(v___x_3971_);
lean_dec(v___x_3966_);
lean_dec(v___x_3965_);
v_a_4051_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4058_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4058_ == 0)
{
v___x_4053_ = v___x_4022_;
v_isShared_4054_ = v_isSharedCheck_4058_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_a_4051_);
lean_dec(v___x_4022_);
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
v_reuseFailAlloc_4057_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec(v_a_4020_);
goto v___jp_4005_;
}
}
else
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
lean_dec_ref(v_a_3972_);
lean_dec_ref(v___x_3971_);
lean_dec(v___x_3966_);
lean_dec(v___x_3965_);
v_a_4059_ = lean_ctor_get(v___x_4019_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4019_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4019_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4019_);
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
v___jp_3981_:
{
lean_object* v___x_3985_; 
v___x_3985_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_3965_, v___y_3984_, v___y_3982_);
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3995_; 
v_isSharedCheck_3995_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_3995_ == 0)
{
lean_object* v_unused_3996_; 
v_unused_3996_ = lean_ctor_get(v___x_3985_, 0);
lean_dec(v_unused_3996_);
v___x_3987_ = v___x_3985_;
v_isShared_3988_ = v_isSharedCheck_3995_;
goto v_resetjp_3986_;
}
else
{
lean_dec(v___x_3985_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3995_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3993_; 
v___x_3989_ = lean_box(v___y_3983_);
v___x_3990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3966_);
lean_ctor_set(v___x_3990_, 1, v___x_3989_);
v___x_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3990_);
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 0, v___x_3991_);
v___x_3993_ = v___x_3987_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v___x_3991_);
v___x_3993_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
return v___x_3993_;
}
}
}
else
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4004_; 
lean_dec(v___x_3966_);
v_a_3997_ = lean_ctor_get(v___x_3985_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3999_ = v___x_3985_;
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3985_);
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
}
v___jp_4005_:
{
lean_object* v___x_4006_; 
v___x_4006_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(v_compile_3967_, v_logCompileErrors_3968_, v_isMeta_3969_, v_exposeAux_3970_, v___x_3971_, v_a_3972_, v___y_3973_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc(v_a_4007_);
lean_dec_ref_known(v___x_4006_, 1);
if (lean_obj_tag(v_a_4007_) == 0)
{
lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4008_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3);
v___x_4009_ = l_panic___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__10(v___x_4008_);
v___y_3982_ = v___y_3977_;
v___y_3983_ = v_isEta_3975_;
v___y_3984_ = v___x_4009_;
goto v___jp_3981_;
}
else
{
lean_object* v_val_4010_; 
v_val_4010_ = lean_ctor_get(v_a_4007_, 0);
lean_inc(v_val_4010_);
lean_dec_ref_known(v_a_4007_, 1);
v___y_3982_ = v___y_3977_;
v___y_3983_ = v_isEta_3975_;
v___y_3984_ = v_val_4010_;
goto v___jp_3981_;
}
}
else
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4018_; 
lean_dec(v___x_3966_);
lean_dec(v___x_3965_);
v_a_4011_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4013_ = v___x_4006_;
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v___x_4006_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___boxed(lean_object* v___x_4067_, lean_object* v___x_4068_, lean_object* v_compile_4069_, lean_object* v_logCompileErrors_4070_, lean_object* v_isMeta_4071_, lean_object* v_exposeAux_4072_, lean_object* v___x_4073_, lean_object* v_a_4074_, lean_object* v___y_4075_, lean_object* v_____r_4076_, lean_object* v_isEta_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
uint8_t v_compile_boxed_4083_; uint8_t v_logCompileErrors_boxed_4084_; uint8_t v_isMeta_boxed_4085_; uint8_t v_exposeAux_boxed_4086_; uint8_t v___y_166877__boxed_4087_; uint8_t v_isEta_boxed_4088_; lean_object* v_res_4089_; 
v_compile_boxed_4083_ = lean_unbox(v_compile_4069_);
v_logCompileErrors_boxed_4084_ = lean_unbox(v_logCompileErrors_4070_);
v_isMeta_boxed_4085_ = lean_unbox(v_isMeta_4071_);
v_exposeAux_boxed_4086_ = lean_unbox(v_exposeAux_4072_);
v___y_166877__boxed_4087_ = lean_unbox(v___y_4075_);
v_isEta_boxed_4088_ = lean_unbox(v_isEta_4077_);
v_res_4089_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2(v___x_4067_, v___x_4068_, v_compile_boxed_4083_, v_logCompileErrors_boxed_4084_, v_isMeta_boxed_4085_, v_exposeAux_boxed_4086_, v___x_4073_, v_a_4074_, v___y_166877__boxed_4087_, v_____r_4076_, v_isEta_boxed_4088_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_);
lean_dec(v___y_4081_);
lean_dec_ref(v___y_4080_);
lean_dec(v___y_4079_);
lean_dec_ref(v___y_4078_);
return v_res_4089_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__4(void){
_start:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___x_4091_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__3));
v___x_4092_ = l_Lean_stringToMessageData(v___x_4091_);
return v___x_4092_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__6(void){
_start:
{
lean_object* v___x_4094_; lean_object* v___x_4095_; 
v___x_4094_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__5));
v___x_4095_ = l_Lean_stringToMessageData(v___x_4094_);
return v___x_4095_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__9(void){
_start:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4099_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__8));
v___x_4100_ = l_Lean_stringToMessageData(v___x_4099_);
return v___x_4100_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__11(void){
_start:
{
lean_object* v___x_4102_; lean_object* v___x_4103_; 
v___x_4102_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__10));
v___x_4103_ = l_Lean_stringToMessageData(v___x_4102_);
return v___x_4103_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__13(void){
_start:
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4105_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__12));
v___x_4106_ = l_Lean_stringToMessageData(v___x_4105_);
return v___x_4106_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__15(void){
_start:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; 
v___x_4108_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__14));
v___x_4109_ = l_Lean_stringToMessageData(v___x_4108_);
return v___x_4109_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg(lean_object* v_upperBound_4110_, lean_object* v_fst_4111_, lean_object* v_args_4112_, uint8_t v_compile_4113_, uint8_t v_logCompileErrors_4114_, uint8_t v_isMeta_4115_, lean_object* v___x_4116_, lean_object* v___x_4117_, uint8_t v_exposeAux_4118_, lean_object* v_val_4119_, lean_object* v_expectedType_4120_, lean_object* v_a_4121_, lean_object* v_b_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v_a_4129_; lean_object* v___y_4134_; lean_object* v___y_4154_; lean_object* v___y_4158_; lean_object* v_a_4159_; lean_object* v_snd_4160_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v_a_4165_; lean_object* v___x_4171_; lean_object* v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4197_; uint8_t v___y_4198_; uint8_t v___y_4218_; uint8_t v___x_4444_; 
v___x_4171_ = lean_box(0);
v___x_4444_ = lean_nat_dec_eq(v___x_4116_, v___x_4117_);
if (v___x_4444_ == 0)
{
uint8_t v___x_4445_; 
v___x_4445_ = 1;
v___y_4218_ = v___x_4445_;
goto v___jp_4217_;
}
else
{
uint8_t v___x_4446_; 
v___x_4446_ = 0;
v___y_4218_ = v___x_4446_;
goto v___jp_4217_;
}
v___jp_4128_:
{
lean_object* v___x_4130_; lean_object* v___x_4131_; 
v___x_4130_ = lean_unsigned_to_nat(1u);
v___x_4131_ = lean_nat_add(v_a_4121_, v___x_4130_);
lean_dec(v_a_4121_);
v_a_4121_ = v___x_4131_;
v_b_4122_ = v_a_4129_;
goto _start;
}
v___jp_4133_:
{
if (lean_obj_tag(v___y_4134_) == 0)
{
lean_object* v_a_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4144_; 
v_a_4135_ = lean_ctor_get(v___y_4134_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___y_4134_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4137_ = v___y_4134_;
v_isShared_4138_ = v_isSharedCheck_4144_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_a_4135_);
lean_dec(v___y_4134_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4144_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
if (lean_obj_tag(v_a_4135_) == 0)
{
lean_object* v_a_4139_; lean_object* v___x_4141_; 
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4139_ = lean_ctor_get(v_a_4135_, 0);
lean_inc(v_a_4139_);
lean_dec_ref_known(v_a_4135_, 1);
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 0, v_a_4139_);
v___x_4141_ = v___x_4137_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_a_4139_);
v___x_4141_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
return v___x_4141_;
}
}
else
{
lean_object* v_a_4143_; 
lean_del_object(v___x_4137_);
v_a_4143_ = lean_ctor_get(v_a_4135_, 0);
lean_inc(v_a_4143_);
lean_dec_ref_known(v_a_4135_, 1);
v_a_4129_ = v_a_4143_;
goto v___jp_4128_;
}
}
}
else
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4152_; 
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4145_ = lean_ctor_get(v___y_4134_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___y_4134_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4147_ = v___y_4134_;
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v___y_4134_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
v___jp_4153_:
{
lean_object* v___x_4155_; lean_object* v___x_4156_; 
v___x_4155_ = lean_box(0);
lean_inc(v___y_4126_);
lean_inc_ref(v___y_4125_);
lean_inc(v___y_4124_);
lean_inc_ref(v___y_4123_);
v___x_4156_ = lean_apply_6(v___y_4154_, v___x_4155_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, lean_box(0));
v___y_4134_ = v___x_4156_;
goto v___jp_4133_;
}
v___jp_4157_:
{
lean_object* v___x_4161_; 
lean_inc(v___y_4126_);
lean_inc_ref(v___y_4125_);
lean_inc(v___y_4124_);
lean_inc_ref(v___y_4123_);
v___x_4161_ = lean_apply_7(v___y_4158_, v_a_4159_, v_snd_4160_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, lean_box(0));
v___y_4134_ = v___x_4161_;
goto v___jp_4133_;
}
v___jp_4162_:
{
uint8_t v___x_4166_; 
v___x_4166_ = l_Lean_Exception_isInterrupt(v_a_4165_);
if (v___x_4166_ == 0)
{
uint8_t v___x_4167_; 
lean_inc_ref(v_a_4165_);
v___x_4167_ = l_Lean_Exception_isRuntime(v_a_4165_);
if (v___x_4167_ == 0)
{
lean_object* v___x_4168_; 
lean_dec_ref(v_a_4165_);
v___x_4168_ = lean_box(0);
v___y_4158_ = v___y_4163_;
v_a_4159_ = v___x_4168_;
v_snd_4160_ = v___y_4164_;
goto v___jp_4157_;
}
else
{
lean_object* v___x_4169_; 
lean_dec(v___y_4164_);
lean_dec_ref(v___y_4163_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v___x_4169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4169_, 0, v_a_4165_);
return v___x_4169_;
}
}
else
{
lean_object* v___x_4170_; 
lean_dec(v___y_4164_);
lean_dec_ref(v___y_4163_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v___x_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4170_, 0, v_a_4165_);
return v___x_4170_;
}
}
v___jp_4172_:
{
if (lean_obj_tag(v___y_4175_) == 0)
{
lean_object* v_a_4176_; lean_object* v_fst_4177_; 
lean_dec(v___y_4174_);
v_a_4176_ = lean_ctor_get(v___y_4175_, 0);
lean_inc(v_a_4176_);
lean_dec_ref_known(v___y_4175_, 1);
v_fst_4177_ = lean_ctor_get(v_a_4176_, 0);
if (lean_obj_tag(v_fst_4177_) == 0)
{
lean_object* v_snd_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4185_; 
lean_dec_ref(v___y_4173_);
v_snd_4178_ = lean_ctor_get(v_a_4176_, 1);
v_isSharedCheck_4185_ = !lean_is_exclusive(v_a_4176_);
if (v_isSharedCheck_4185_ == 0)
{
lean_object* v_unused_4186_; 
v_unused_4186_ = lean_ctor_get(v_a_4176_, 0);
lean_dec(v_unused_4186_);
v___x_4180_ = v_a_4176_;
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_snd_4178_);
lean_dec(v_a_4176_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4183_; 
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v___x_4171_);
v___x_4183_ = v___x_4180_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v___x_4171_);
lean_ctor_set(v_reuseFailAlloc_4184_, 1, v_snd_4178_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
v_a_4129_ = v___x_4183_;
goto v___jp_4128_;
}
}
}
else
{
lean_object* v_snd_4187_; lean_object* v_a_4188_; 
lean_inc_ref(v_fst_4177_);
v_snd_4187_ = lean_ctor_get(v_a_4176_, 1);
lean_inc(v_snd_4187_);
lean_dec(v_a_4176_);
v_a_4188_ = lean_ctor_get(v_fst_4177_, 0);
lean_inc(v_a_4188_);
lean_dec_ref_known(v_fst_4177_, 1);
v___y_4158_ = v___y_4173_;
v_a_4159_ = v_a_4188_;
v_snd_4160_ = v_snd_4187_;
goto v___jp_4157_;
}
}
else
{
lean_object* v_a_4189_; 
v_a_4189_ = lean_ctor_get(v___y_4175_, 0);
lean_inc(v_a_4189_);
lean_dec_ref_known(v___y_4175_, 1);
v___y_4163_ = v___y_4173_;
v___y_4164_ = v___y_4174_;
v_a_4165_ = v_a_4189_;
goto v___jp_4162_;
}
}
v___jp_4190_:
{
lean_object* v___x_4199_; 
v___x_4199_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(v___y_4193_, v___y_4198_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; uint8_t v___x_4201_; 
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_a_4200_);
lean_dec_ref_known(v___x_4199_, 1);
v___x_4201_ = lean_unbox(v_a_4200_);
lean_dec(v_a_4200_);
if (v___x_4201_ == 0)
{
lean_object* v___x_4202_; 
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4194_);
lean_dec_ref(v___y_4192_);
lean_dec_ref(v___y_4191_);
v___x_4202_ = lean_box(0);
v___y_4158_ = v___y_4195_;
v_a_4159_ = v___x_4202_;
v_snd_4160_ = v___y_4196_;
goto v___jp_4157_;
}
else
{
lean_object* v___x_4203_; 
lean_inc(v___y_4126_);
lean_inc_ref(v___y_4125_);
lean_inc(v___y_4124_);
lean_inc_ref(v___y_4123_);
v___x_4203_ = lean_apply_5(v___y_4192_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, lean_box(0));
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v_a_4204_; uint8_t v___x_4205_; 
v_a_4204_ = lean_ctor_get(v___x_4203_, 0);
lean_inc(v_a_4204_);
lean_dec_ref_known(v___x_4203_, 1);
v___x_4205_ = lean_unbox(v_a_4204_);
lean_dec(v_a_4204_);
if (v___x_4205_ == 0)
{
lean_object* v___x_4206_; lean_object* v___x_4207_; 
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4191_);
v___x_4206_ = lean_box(0);
lean_inc(v___y_4126_);
lean_inc_ref(v___y_4125_);
lean_inc(v___y_4124_);
lean_inc_ref(v___y_4123_);
v___x_4207_ = lean_apply_6(v___y_4194_, v___x_4206_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, lean_box(0));
v___y_4173_ = v___y_4195_;
v___y_4174_ = v___y_4196_;
v___y_4175_ = v___x_4207_;
goto v___jp_4172_;
}
else
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4208_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__1);
v___x_4209_ = l_Lean_MessageData_ofExpr(v___y_4191_);
v___x_4210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4210_, 0, v___x_4208_);
lean_ctor_set(v___x_4210_, 1, v___x_4209_);
v___x_4211_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v___y_4197_, v___x_4210_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v_a_4212_; lean_object* v___x_4213_; 
v_a_4212_ = lean_ctor_get(v___x_4211_, 0);
lean_inc(v_a_4212_);
lean_dec_ref_known(v___x_4211_, 1);
lean_inc(v___y_4126_);
lean_inc_ref(v___y_4125_);
lean_inc(v___y_4124_);
lean_inc_ref(v___y_4123_);
v___x_4213_ = lean_apply_6(v___y_4194_, v_a_4212_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, lean_box(0));
v___y_4173_ = v___y_4195_;
v___y_4174_ = v___y_4196_;
v___y_4175_ = v___x_4213_;
goto v___jp_4172_;
}
else
{
lean_object* v_a_4214_; 
lean_dec_ref(v___y_4194_);
v_a_4214_ = lean_ctor_get(v___x_4211_, 0);
lean_inc(v_a_4214_);
lean_dec_ref_known(v___x_4211_, 1);
v___y_4163_ = v___y_4195_;
v___y_4164_ = v___y_4196_;
v_a_4165_ = v_a_4214_;
goto v___jp_4162_;
}
}
}
else
{
lean_object* v_a_4215_; 
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4194_);
lean_dec_ref(v___y_4191_);
v_a_4215_ = lean_ctor_get(v___x_4203_, 0);
lean_inc(v_a_4215_);
lean_dec_ref_known(v___x_4203_, 1);
v___y_4163_ = v___y_4195_;
v___y_4164_ = v___y_4196_;
v_a_4165_ = v_a_4215_;
goto v___jp_4162_;
}
}
}
else
{
lean_object* v_a_4216_; 
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4194_);
lean_dec_ref(v___y_4192_);
lean_dec_ref(v___y_4191_);
v_a_4216_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_a_4216_);
lean_dec_ref_known(v___x_4199_, 1);
v___y_4163_ = v___y_4195_;
v___y_4164_ = v___y_4196_;
v_a_4165_ = v_a_4216_;
goto v___jp_4162_;
}
}
v___jp_4217_:
{
uint8_t v___x_4219_; 
v___x_4219_ = lean_nat_dec_lt(v_a_4121_, v_upperBound_4110_);
if (v___x_4219_ == 0)
{
lean_object* v___x_4220_; 
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v___x_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4220_, 0, v_b_4122_);
return v___x_4220_;
}
else
{
lean_object* v_snd_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4442_; 
v_snd_4221_ = lean_ctor_get(v_b_4122_, 1);
v_isSharedCheck_4442_ = !lean_is_exclusive(v_b_4122_);
if (v_isSharedCheck_4442_ == 0)
{
lean_object* v_unused_4443_; 
v_unused_4443_ = lean_ctor_get(v_b_4122_, 0);
lean_dec(v_unused_4443_);
v___x_4223_ = v_b_4122_;
v_isShared_4224_ = v_isSharedCheck_4442_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_snd_4221_);
lean_dec(v_b_4122_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4442_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v_cls_4225_; lean_object* v___f_4226_; lean_object* v___f_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v_cls_4225_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___f_4226_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__2));
lean_inc(v_snd_4221_);
v___f_4227_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__1___boxed), 8, 2);
lean_closure_set(v___f_4227_, 0, v___x_4171_);
lean_closure_set(v___f_4227_, 1, v_snd_4221_);
v___x_4228_ = lean_array_fget_borrowed(v_fst_4111_, v_a_4121_);
v___x_4229_ = l_Lean_Expr_mvarId_x21(v___x_4228_);
lean_inc(v___x_4229_);
v___x_4230_ = l_Lean_MVarId_getDecl(v___x_4229_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_object* v_a_4231_; lean_object* v_userName_4232_; lean_object* v_type_4233_; lean_object* v___x_4234_; 
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4231_);
lean_dec_ref_known(v___x_4230_, 1);
v_userName_4232_ = lean_ctor_get(v_a_4231_, 0);
lean_inc(v_userName_4232_);
v_type_4233_ = lean_ctor_get(v_a_4231_, 2);
lean_inc_ref(v_type_4233_);
lean_dec(v_a_4231_);
v___x_4234_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__7___redArg(v_type_4233_, v___y_4124_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v_a_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___f_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___f_4248_; lean_object* v___x_4249_; 
v_a_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc_n(v_a_4235_, 4);
lean_dec_ref_known(v___x_4234_, 1);
v___x_4236_ = lean_array_fget_borrowed(v_args_4112_, v_a_4121_);
v___x_4237_ = lean_box(v_compile_4113_);
v___x_4238_ = lean_box(v_logCompileErrors_4114_);
v___x_4239_ = lean_box(v_isMeta_4115_);
v___x_4240_ = lean_box(v_exposeAux_4118_);
v___x_4241_ = lean_box(v___y_4218_);
lean_inc_n(v___x_4236_, 2);
lean_inc_n(v___x_4229_, 2);
v___f_4242_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___boxed), 16, 9);
lean_closure_set(v___f_4242_, 0, v___x_4229_);
lean_closure_set(v___f_4242_, 1, v___x_4171_);
lean_closure_set(v___f_4242_, 2, v___x_4237_);
lean_closure_set(v___f_4242_, 3, v___x_4238_);
lean_closure_set(v___f_4242_, 4, v___x_4239_);
lean_closure_set(v___f_4242_, 5, v___x_4240_);
lean_closure_set(v___f_4242_, 6, v___x_4236_);
lean_closure_set(v___f_4242_, 7, v_a_4235_);
lean_closure_set(v___f_4242_, 8, v___x_4241_);
v___x_4243_ = lean_box(v_compile_4113_);
v___x_4244_ = lean_box(v_logCompileErrors_4114_);
v___x_4245_ = lean_box(v_isMeta_4115_);
v___x_4246_ = lean_box(v___y_4218_);
v___x_4247_ = lean_box(v_exposeAux_4118_);
lean_inc(v_snd_4221_);
v___f_4248_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___boxed), 16, 10);
lean_closure_set(v___f_4248_, 0, v___x_4229_);
lean_closure_set(v___f_4248_, 1, v___x_4236_);
lean_closure_set(v___f_4248_, 2, v___x_4171_);
lean_closure_set(v___f_4248_, 3, v_snd_4221_);
lean_closure_set(v___f_4248_, 4, v_a_4235_);
lean_closure_set(v___f_4248_, 5, v___x_4243_);
lean_closure_set(v___f_4248_, 6, v___x_4244_);
lean_closure_set(v___f_4248_, 7, v___x_4245_);
lean_closure_set(v___f_4248_, 8, v___x_4246_);
lean_closure_set(v___f_4248_, 9, v___x_4247_);
v___x_4249_ = l_Lean_Meta_isProp(v_a_4235_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4249_) == 0)
{
lean_object* v_a_4250_; uint8_t v___x_4251_; 
v_a_4250_ = lean_ctor_get(v___x_4249_, 0);
lean_inc(v_a_4250_);
lean_dec_ref_known(v___x_4249_, 1);
v___x_4251_ = lean_unbox(v_a_4250_);
if (v___x_4251_ == 0)
{
lean_object* v___x_4252_; 
lean_dec(v_a_4250_);
lean_dec_ref(v___f_4227_);
lean_inc(v_a_4235_);
v___x_4252_ = l_Lean_Meta_isClass_x3f(v_a_4235_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4252_) == 0)
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4341_; 
v_a_4253_ = lean_ctor_get(v___x_4252_, 0);
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4252_);
if (v_isSharedCheck_4341_ == 0)
{
v___x_4255_ = v___x_4252_;
v_isShared_4256_ = v_isSharedCheck_4341_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v___x_4252_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4341_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
if (lean_obj_tag(v_a_4253_) == 0)
{
uint8_t v___x_4257_; 
lean_dec_ref(v___f_4242_);
v___x_4257_ = lean_unbox(v_snd_4221_);
if (v___x_4257_ == 0)
{
lean_object* v___x_4258_; lean_object* v___x_4259_; uint8_t v___x_4260_; 
lean_del_object(v___x_4255_);
lean_del_object(v___x_4223_);
v___x_4258_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4125_);
v___x_4259_ = l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
v___x_4260_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_4258_, v___x_4259_);
lean_dec_ref(v___x_4258_);
if (v___x_4260_ == 0)
{
lean_object* v___x_4261_; lean_object* v___x_4262_; 
lean_dec_ref(v___f_4248_);
lean_dec(v_userName_4232_);
v___x_4261_ = lean_box(0);
lean_inc(v___x_4236_);
v___x_4262_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3(v___x_4229_, v___x_4236_, v___x_4171_, v_snd_4221_, v_a_4235_, v_compile_4113_, v_logCompileErrors_4114_, v_isMeta_4115_, v___y_4218_, v_exposeAux_4118_, v___x_4261_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
v___y_4134_ = v___x_4262_;
goto v___jp_4133_;
}
else
{
lean_object* v___x_4263_; 
lean_inc(v_userName_4232_);
lean_inc(v_val_4119_);
v___x_4263_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin(v_val_4119_, v_userName_4232_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4263_) == 0)
{
lean_object* v_a_4264_; lean_object* v_fst_4265_; lean_object* v_snd_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4309_; 
v_a_4264_ = lean_ctor_get(v___x_4263_, 0);
lean_inc(v_a_4264_);
lean_dec_ref_known(v___x_4263_, 1);
v_fst_4265_ = lean_ctor_get(v_a_4264_, 0);
v_snd_4266_ = lean_ctor_get(v_a_4264_, 1);
v_isSharedCheck_4309_ = !lean_is_exclusive(v_a_4264_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4268_ = v_a_4264_;
v_isShared_4269_ = v_isSharedCheck_4309_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_snd_4266_);
lean_inc(v_fst_4265_);
lean_dec(v_a_4264_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4309_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
uint8_t v___x_4270_; 
v___x_4270_ = lean_name_eq(v_fst_4265_, v_val_4119_);
if (v___x_4270_ == 0)
{
lean_object* v___f_4271_; lean_object* v___x_4272_; 
lean_dec(v_a_4235_);
lean_inc(v_fst_4265_);
v___f_4271_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__4___boxed), 9, 3);
lean_closure_set(v___f_4271_, 0, v___f_4226_);
lean_closure_set(v___f_4271_, 1, v_fst_4265_);
lean_closure_set(v___f_4271_, 2, v_cls_4225_);
v___x_4272_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__0(v_cls_4225_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4272_) == 0)
{
lean_object* v_a_4273_; uint8_t v___x_4274_; 
v_a_4273_ = lean_ctor_get(v___x_4272_, 0);
lean_inc(v_a_4273_);
lean_dec_ref_known(v___x_4272_, 1);
v___x_4274_ = lean_unbox(v_a_4273_);
lean_dec(v_a_4273_);
if (v___x_4274_ == 0)
{
lean_object* v___x_4275_; lean_object* v___x_4276_; 
lean_del_object(v___x_4268_);
lean_dec(v_userName_4232_);
v___x_4275_ = lean_box(0);
lean_inc(v___x_4236_);
lean_inc_ref(v_expectedType_4120_);
lean_inc(v_val_4119_);
v___x_4276_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7(v___f_4226_, v___f_4248_, v_fst_4265_, v_cls_4225_, v___x_4171_, v_snd_4221_, v_val_4119_, v_expectedType_4120_, v_snd_4266_, v___x_4229_, v___x_4236_, v___f_4271_, v_exposeAux_4118_, v___x_4260_, v___y_4218_, v___x_4275_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
v___y_4134_ = v___x_4276_;
goto v___jp_4133_;
}
else
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4280_; 
v___x_4277_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__4);
v___x_4278_ = l_Lean_MessageData_ofName(v_userName_4232_);
if (v_isShared_4269_ == 0)
{
lean_ctor_set_tag(v___x_4268_, 7);
lean_ctor_set(v___x_4268_, 1, v___x_4278_);
lean_ctor_set(v___x_4268_, 0, v___x_4277_);
v___x_4280_ = v___x_4268_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v___x_4277_);
lean_ctor_set(v_reuseFailAlloc_4298_, 1, v___x_4278_);
v___x_4280_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4281_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__6);
v___x_4282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4280_);
lean_ctor_set(v___x_4282_, 1, v___x_4281_);
lean_inc(v_fst_4265_);
v___x_4283_ = l_Lean_MessageData_ofName(v_fst_4265_);
v___x_4284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4284_, 0, v___x_4282_);
lean_ctor_set(v___x_4284_, 1, v___x_4283_);
v___x_4285_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_4286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4286_, 0, v___x_4284_);
lean_ctor_set(v___x_4286_, 1, v___x_4285_);
v___x_4287_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_4225_, v___x_4286_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4287_) == 0)
{
lean_object* v_a_4288_; lean_object* v___x_4289_; 
v_a_4288_ = lean_ctor_get(v___x_4287_, 0);
lean_inc(v_a_4288_);
lean_dec_ref_known(v___x_4287_, 1);
lean_inc(v___x_4236_);
lean_inc_ref(v_expectedType_4120_);
lean_inc(v_val_4119_);
v___x_4289_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7(v___f_4226_, v___f_4248_, v_fst_4265_, v_cls_4225_, v___x_4171_, v_snd_4221_, v_val_4119_, v_expectedType_4120_, v_snd_4266_, v___x_4229_, v___x_4236_, v___f_4271_, v_exposeAux_4118_, v___x_4260_, v___y_4218_, v_a_4288_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
v___y_4134_ = v___x_4289_;
goto v___jp_4133_;
}
else
{
lean_object* v_a_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4297_; 
lean_dec_ref(v___f_4271_);
lean_dec(v_snd_4266_);
lean_dec(v_fst_4265_);
lean_dec_ref(v___f_4248_);
lean_dec(v___x_4229_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4290_ = lean_ctor_get(v___x_4287_, 0);
v_isSharedCheck_4297_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4297_ == 0)
{
v___x_4292_ = v___x_4287_;
v_isShared_4293_ = v_isSharedCheck_4297_;
goto v_resetjp_4291_;
}
else
{
lean_inc(v_a_4290_);
lean_dec(v___x_4287_);
v___x_4292_ = lean_box(0);
v_isShared_4293_ = v_isSharedCheck_4297_;
goto v_resetjp_4291_;
}
v_resetjp_4291_:
{
lean_object* v___x_4295_; 
if (v_isShared_4293_ == 0)
{
v___x_4295_ = v___x_4292_;
goto v_reusejp_4294_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v_a_4290_);
v___x_4295_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4294_;
}
v_reusejp_4294_:
{
return v___x_4295_;
}
}
}
}
}
}
else
{
lean_object* v_a_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4306_; 
lean_dec_ref(v___f_4271_);
lean_del_object(v___x_4268_);
lean_dec(v_snd_4266_);
lean_dec(v_fst_4265_);
lean_dec_ref(v___f_4248_);
lean_dec(v_userName_4232_);
lean_dec(v___x_4229_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4299_ = lean_ctor_get(v___x_4272_, 0);
v_isSharedCheck_4306_ = !lean_is_exclusive(v___x_4272_);
if (v_isSharedCheck_4306_ == 0)
{
v___x_4301_ = v___x_4272_;
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_a_4299_);
lean_dec(v___x_4272_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v___x_4304_; 
if (v_isShared_4302_ == 0)
{
v___x_4304_ = v___x_4301_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v_a_4299_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
return v___x_4304_;
}
}
}
}
else
{
lean_object* v___x_4307_; lean_object* v___x_4308_; 
lean_del_object(v___x_4268_);
lean_dec(v_snd_4266_);
lean_dec(v_fst_4265_);
lean_dec_ref(v___f_4248_);
lean_dec(v_userName_4232_);
v___x_4307_ = lean_box(0);
lean_inc(v___x_4236_);
v___x_4308_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3(v___x_4229_, v___x_4236_, v___x_4171_, v_snd_4221_, v_a_4235_, v_compile_4113_, v_logCompileErrors_4114_, v_isMeta_4115_, v___y_4218_, v_exposeAux_4118_, v___x_4307_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
v___y_4134_ = v___x_4308_;
goto v___jp_4133_;
}
}
}
else
{
lean_object* v_a_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4317_; 
lean_dec_ref(v___f_4248_);
lean_dec(v_a_4235_);
lean_dec(v_userName_4232_);
lean_dec(v___x_4229_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4310_ = lean_ctor_get(v___x_4263_, 0);
v_isSharedCheck_4317_ = !lean_is_exclusive(v___x_4263_);
if (v_isSharedCheck_4317_ == 0)
{
v___x_4312_ = v___x_4263_;
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_a_4310_);
lean_dec(v___x_4263_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v___x_4315_; 
if (v_isShared_4313_ == 0)
{
v___x_4315_ = v___x_4312_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v_a_4310_);
v___x_4315_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
return v___x_4315_;
}
}
}
}
}
else
{
lean_object* v___x_4318_; lean_object* v___x_4320_; 
lean_dec_ref(v___f_4248_);
lean_dec(v_a_4235_);
lean_dec(v_userName_4232_);
lean_dec(v___x_4229_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v___x_4318_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__7));
if (v_isShared_4224_ == 0)
{
lean_ctor_set(v___x_4223_, 0, v___x_4318_);
v___x_4320_ = v___x_4223_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v___x_4318_);
lean_ctor_set(v_reuseFailAlloc_4324_, 1, v_snd_4221_);
v___x_4320_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
lean_object* v___x_4322_; 
if (v_isShared_4256_ == 0)
{
lean_ctor_set(v___x_4255_, 0, v___x_4320_);
v___x_4322_ = v___x_4255_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v___x_4320_);
v___x_4322_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
return v___x_4322_;
}
}
}
}
else
{
lean_object* v___x_4325_; lean_object* v___x_4326_; uint8_t v___x_4327_; 
lean_dec_ref_known(v_a_4253_, 1);
lean_del_object(v___x_4255_);
lean_dec_ref(v___f_4248_);
lean_dec(v_userName_4232_);
lean_del_object(v___x_4223_);
v___x_4325_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4125_);
v___x_4326_ = l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
v___x_4327_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_4325_, v___x_4326_);
lean_dec_ref(v___x_4325_);
if (v___x_4327_ == 0)
{
lean_object* v___x_4328_; uint8_t v___x_4329_; lean_object* v___x_4330_; 
lean_dec_ref(v___f_4242_);
v___x_4328_ = lean_box(0);
v___x_4329_ = lean_unbox(v_snd_4221_);
lean_dec(v_snd_4221_);
lean_inc(v___x_4236_);
v___x_4330_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2(v___x_4229_, v___x_4171_, v_compile_4113_, v_logCompileErrors_4114_, v_isMeta_4115_, v_exposeAux_4118_, v___x_4236_, v_a_4235_, v___y_4218_, v___x_4328_, v___x_4329_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
v___y_4134_ = v___x_4330_;
goto v___jp_4133_;
}
else
{
lean_object* v___x_4331_; 
v___x_4331_ = l_Lean_Meta_trySynthInstance(v_a_4235_, v___x_4171_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4331_) == 0)
{
lean_object* v_a_4332_; 
v_a_4332_ = lean_ctor_get(v___x_4331_, 0);
lean_inc(v_a_4332_);
lean_dec_ref_known(v___x_4331_, 1);
if (lean_obj_tag(v_a_4332_) == 1)
{
lean_object* v_a_4333_; lean_object* v___x_4334_; lean_object* v___f_4335_; uint8_t v___x_4336_; lean_object* v___x_4337_; lean_object* v___f_4338_; 
v_a_4333_ = lean_ctor_get(v_a_4332_, 0);
lean_inc_n(v_a_4333_, 3);
lean_dec_ref_known(v_a_4332_, 1);
v___x_4334_ = lean_box(v___y_4218_);
v___f_4335_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__8___boxed), 9, 3);
lean_closure_set(v___f_4335_, 0, v___x_4229_);
lean_closure_set(v___f_4335_, 1, v_a_4333_);
lean_closure_set(v___f_4335_, 2, v___x_4334_);
v___x_4336_ = 1;
v___x_4337_ = lean_box(v___x_4336_);
lean_inc(v___x_4236_);
v___f_4338_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__6___boxed), 8, 3);
lean_closure_set(v___f_4338_, 0, v___x_4337_);
lean_closure_set(v___f_4338_, 1, v_a_4333_);
lean_closure_set(v___f_4338_, 2, v___x_4236_);
if (v_exposeAux_4118_ == 0)
{
v___y_4191_ = v_a_4333_;
v___y_4192_ = v___f_4226_;
v___y_4193_ = v___f_4338_;
v___y_4194_ = v___f_4335_;
v___y_4195_ = v___f_4242_;
v___y_4196_ = v_snd_4221_;
v___y_4197_ = v_cls_4225_;
v___y_4198_ = v___x_4327_;
goto v___jp_4190_;
}
else
{
v___y_4191_ = v_a_4333_;
v___y_4192_ = v___f_4226_;
v___y_4193_ = v___f_4338_;
v___y_4194_ = v___f_4335_;
v___y_4195_ = v___f_4242_;
v___y_4196_ = v_snd_4221_;
v___y_4197_ = v_cls_4225_;
v___y_4198_ = v___y_4218_;
goto v___jp_4190_;
}
}
else
{
lean_object* v___x_4339_; 
lean_dec(v_a_4332_);
lean_dec(v___x_4229_);
v___x_4339_ = lean_box(0);
v___y_4158_ = v___f_4242_;
v_a_4159_ = v___x_4339_;
v_snd_4160_ = v_snd_4221_;
goto v___jp_4157_;
}
}
else
{
lean_object* v_a_4340_; 
lean_dec(v___x_4229_);
v_a_4340_ = lean_ctor_get(v___x_4331_, 0);
lean_inc(v_a_4340_);
lean_dec_ref_known(v___x_4331_, 1);
v___y_4163_ = v___f_4242_;
v___y_4164_ = v_snd_4221_;
v_a_4165_ = v_a_4340_;
goto v___jp_4162_;
}
}
}
}
}
else
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
lean_dec_ref(v___f_4248_);
lean_dec_ref(v___f_4242_);
lean_dec(v_a_4235_);
lean_dec(v_userName_4232_);
lean_dec(v___x_4229_);
lean_del_object(v___x_4223_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4342_ = lean_ctor_get(v___x_4252_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4252_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4344_ = v___x_4252_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4252_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
}
else
{
lean_object* v___f_4350_; lean_object* v___x_4351_; 
lean_dec_ref(v___f_4248_);
lean_dec_ref(v___f_4242_);
lean_dec(v_userName_4232_);
lean_del_object(v___x_4223_);
lean_inc_ref(v___f_4227_);
lean_inc(v___x_4229_);
lean_inc(v_a_4250_);
lean_inc_n(v___x_4236_, 2);
lean_inc(v_a_4235_);
v___f_4350_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__10___boxed), 11, 5);
lean_closure_set(v___f_4350_, 0, v_a_4235_);
lean_closure_set(v___f_4350_, 1, v___x_4236_);
lean_closure_set(v___f_4350_, 2, v_a_4250_);
lean_closure_set(v___f_4350_, 3, v___x_4229_);
lean_closure_set(v___f_4350_, 4, v___f_4227_);
lean_inc(v___y_4126_);
lean_inc_ref(v___y_4125_);
lean_inc(v___y_4124_);
lean_inc_ref(v___y_4123_);
v___x_4351_ = lean_infer_type(v___x_4236_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4351_) == 0)
{
lean_object* v_a_4352_; lean_object* v___x_4353_; 
v_a_4352_ = lean_ctor_get(v___x_4351_, 0);
lean_inc_n(v_a_4352_, 2);
lean_dec_ref_known(v___x_4351_, 1);
lean_inc(v_a_4235_);
v___x_4353_ = l_Lean_Meta_isExprDefEq(v_a_4235_, v_a_4352_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4353_) == 0)
{
lean_object* v_a_4354_; uint8_t v___x_4355_; 
v_a_4354_ = lean_ctor_get(v___x_4353_, 0);
lean_inc(v_a_4354_);
lean_dec_ref_known(v___x_4353_, 1);
v___x_4355_ = lean_unbox(v_a_4354_);
lean_dec(v_a_4354_);
if (v___x_4355_ == 0)
{
lean_object* v_toCold_4356_; lean_object* v_options_4357_; uint8_t v_hasTrace_4358_; 
lean_dec(v_snd_4221_);
v_toCold_4356_ = lean_ctor_get(v___y_4125_, 0);
v_options_4357_ = lean_ctor_get(v_toCold_4356_, 2);
v_hasTrace_4358_ = lean_ctor_get_uint8(v_options_4357_, sizeof(void*)*1);
if (v_hasTrace_4358_ == 0)
{
lean_dec(v_a_4352_);
lean_dec(v_a_4250_);
lean_dec(v_a_4235_);
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
v___y_4154_ = v___f_4350_;
goto v___jp_4153_;
}
else
{
lean_object* v_inheritedTraceOptions_4359_; lean_object* v___x_4360_; uint8_t v___x_4361_; 
v_inheritedTraceOptions_4359_ = lean_ctor_get(v_toCold_4356_, 11);
v___x_4360_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3);
v___x_4361_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4359_, v_options_4357_, v___x_4360_);
if (v___x_4361_ == 0)
{
lean_dec(v_a_4352_);
lean_dec(v_a_4250_);
lean_dec(v_a_4235_);
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
v___y_4154_ = v___f_4350_;
goto v___jp_4153_;
}
else
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
lean_dec_ref(v___f_4350_);
v___x_4362_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__9);
lean_inc(v_a_4121_);
v___x_4363_ = l_Nat_reprFast(v_a_4121_);
v___x_4364_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4363_);
v___x_4365_ = l_Lean_MessageData_ofFormat(v___x_4364_);
v___x_4366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4366_, 0, v___x_4362_);
lean_ctor_set(v___x_4366_, 1, v___x_4365_);
v___x_4367_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__11);
v___x_4368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4366_);
lean_ctor_set(v___x_4368_, 1, v___x_4367_);
lean_inc(v_a_4235_);
v___x_4369_ = l_Lean_MessageData_ofExpr(v_a_4235_);
v___x_4370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4368_);
lean_ctor_set(v___x_4370_, 1, v___x_4369_);
v___x_4371_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__13);
v___x_4372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4370_);
lean_ctor_set(v___x_4372_, 1, v___x_4371_);
v___x_4373_ = l_Lean_MessageData_ofExpr(v_a_4352_);
v___x_4374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4372_);
lean_ctor_set(v___x_4374_, 1, v___x_4373_);
v___x_4375_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___closed__15);
v___x_4376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4374_);
lean_ctor_set(v___x_4376_, 1, v___x_4375_);
lean_inc(v___x_4236_);
v___x_4377_ = l_Lean_MessageData_ofExpr(v___x_4236_);
v___x_4378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4378_, 0, v___x_4376_);
lean_ctor_set(v___x_4378_, 1, v___x_4377_);
v___x_4379_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_4225_, v___x_4378_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
if (lean_obj_tag(v___x_4379_) == 0)
{
lean_object* v_a_4380_; uint8_t v___x_4381_; lean_object* v___x_4382_; 
v_a_4380_ = lean_ctor_get(v___x_4379_, 0);
lean_inc(v_a_4380_);
lean_dec_ref_known(v___x_4379_, 1);
v___x_4381_ = lean_unbox(v_a_4250_);
lean_dec(v_a_4250_);
lean_inc(v___x_4236_);
v___x_4382_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__10(v_a_4235_, v___x_4236_, v___x_4381_, v___x_4229_, v___f_4227_, v_a_4380_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
v___y_4134_ = v___x_4382_;
goto v___jp_4133_;
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_dec(v_a_4250_);
lean_dec(v_a_4235_);
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4383_ = lean_ctor_get(v___x_4379_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4379_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___x_4379_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4379_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_a_4383_);
v___x_4388_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
return v___x_4388_;
}
}
}
}
}
}
else
{
lean_object* v___x_4391_; 
lean_dec(v_a_4352_);
lean_dec_ref(v___f_4350_);
lean_dec(v_a_4250_);
lean_dec(v_a_4235_);
lean_dec_ref(v___f_4227_);
lean_inc(v___x_4236_);
v___x_4391_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v___x_4229_, v___x_4236_, v___y_4124_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; lean_object* v___x_4393_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___x_4391_, 1);
v___x_4393_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__1(v___x_4171_, v_snd_4221_, v_a_4392_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_);
v___y_4134_ = v___x_4393_;
goto v___jp_4133_;
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4394_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4391_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4391_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
else
{
lean_object* v_a_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4409_; 
lean_dec(v_a_4352_);
lean_dec_ref(v___f_4350_);
lean_dec(v_a_4250_);
lean_dec(v_a_4235_);
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4402_ = lean_ctor_get(v___x_4353_, 0);
v_isSharedCheck_4409_ = !lean_is_exclusive(v___x_4353_);
if (v_isSharedCheck_4409_ == 0)
{
v___x_4404_ = v___x_4353_;
v_isShared_4405_ = v_isSharedCheck_4409_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_a_4402_);
lean_dec(v___x_4353_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4409_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
lean_object* v___x_4407_; 
if (v_isShared_4405_ == 0)
{
v___x_4407_ = v___x_4404_;
goto v_reusejp_4406_;
}
else
{
lean_object* v_reuseFailAlloc_4408_; 
v_reuseFailAlloc_4408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4408_, 0, v_a_4402_);
v___x_4407_ = v_reuseFailAlloc_4408_;
goto v_reusejp_4406_;
}
v_reusejp_4406_:
{
return v___x_4407_;
}
}
}
}
else
{
lean_object* v_a_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4417_; 
lean_dec_ref(v___f_4350_);
lean_dec(v_a_4250_);
lean_dec(v_a_4235_);
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4410_ = lean_ctor_get(v___x_4351_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4351_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4412_ = v___x_4351_;
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_a_4410_);
lean_dec(v___x_4351_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4415_; 
if (v_isShared_4413_ == 0)
{
v___x_4415_ = v___x_4412_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_a_4410_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
return v___x_4415_;
}
}
}
}
}
else
{
lean_object* v_a_4418_; lean_object* v___x_4420_; uint8_t v_isShared_4421_; uint8_t v_isSharedCheck_4425_; 
lean_dec_ref(v___f_4248_);
lean_dec_ref(v___f_4242_);
lean_dec(v_a_4235_);
lean_dec(v_userName_4232_);
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
lean_del_object(v___x_4223_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4418_ = lean_ctor_get(v___x_4249_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4249_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4420_ = v___x_4249_;
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
else
{
lean_inc(v_a_4418_);
lean_dec(v___x_4249_);
v___x_4420_ = lean_box(0);
v_isShared_4421_ = v_isSharedCheck_4425_;
goto v_resetjp_4419_;
}
v_resetjp_4419_:
{
lean_object* v___x_4423_; 
if (v_isShared_4421_ == 0)
{
v___x_4423_ = v___x_4420_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v_a_4418_);
v___x_4423_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
return v___x_4423_;
}
}
}
}
else
{
lean_object* v_a_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4433_; 
lean_dec(v_userName_4232_);
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
lean_del_object(v___x_4223_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4426_ = lean_ctor_get(v___x_4234_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4428_ = v___x_4234_;
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_a_4426_);
lean_dec(v___x_4234_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4431_; 
if (v_isShared_4429_ == 0)
{
v___x_4431_ = v___x_4428_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4426_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
return v___x_4431_;
}
}
}
}
else
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4441_; 
lean_dec(v___x_4229_);
lean_dec_ref(v___f_4227_);
lean_del_object(v___x_4223_);
lean_dec(v_snd_4221_);
lean_dec(v_a_4121_);
lean_dec_ref(v_expectedType_4120_);
lean_dec(v_val_4119_);
v_a_4434_ = lean_ctor_get(v___x_4230_, 0);
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4230_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4436_ = v___x_4230_;
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v___x_4230_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v___x_4439_; 
if (v_isShared_4437_ == 0)
{
v___x_4439_ = v___x_4436_;
goto v_reusejp_4438_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v_a_4434_);
v___x_4439_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4438_;
}
v_reusejp_4438_:
{
return v___x_4439_;
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3(void){
_start:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; 
v___x_4448_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__2));
v___x_4449_ = l_Lean_stringToMessageData(v___x_4448_);
return v___x_4449_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5(void){
_start:
{
lean_object* v___x_4451_; lean_object* v___x_4452_; 
v___x_4451_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__4));
v___x_4452_ = l_Lean_stringToMessageData(v___x_4451_);
return v___x_4452_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7(void){
_start:
{
lean_object* v___x_4454_; lean_object* v___x_4455_; 
v___x_4454_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__6));
v___x_4455_ = l_Lean_stringToMessageData(v___x_4454_);
return v___x_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17(lean_object* v_inst_4456_, lean_object* v_expectedType_4457_, uint8_t v_compile_4458_, uint8_t v_logCompileErrors_4459_, uint8_t v_isMeta_4460_, uint8_t v_exposeAux_4461_, uint8_t v_isEta_4462_, lean_object* v_val_4463_, lean_object* v_x_4464_, lean_object* v_x_4465_, lean_object* v_x_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_){
_start:
{
lean_object* v___y_4473_; lean_object* v___y_4474_; lean_object* v___y_4475_; lean_object* v___y_4476_; lean_object* v___y_4496_; lean_object* v___y_4497_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___y_4513_; lean_object* v___y_4514_; lean_object* v___y_4515_; lean_object* v___y_4516_; lean_object* v___y_4517_; uint8_t v___y_4518_; lean_object* v___y_4557_; lean_object* v___y_4558_; lean_object* v___y_4559_; lean_object* v___y_4560_; lean_object* v___y_4561_; lean_object* v___y_4562_; lean_object* v___y_4576_; lean_object* v___y_4577_; lean_object* v___y_4578_; lean_object* v___y_4579_; lean_object* v___y_4580_; lean_object* v___y_4581_; lean_object* v___y_4582_; uint8_t v___y_4583_; lean_object* v___y_4617_; uint8_t v___y_4618_; lean_object* v___y_4619_; lean_object* v___y_4620_; lean_object* v___y_4621_; lean_object* v___y_4622_; lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___y_4636_; lean_object* v___y_4637_; 
if (lean_obj_tag(v_x_4464_) == 5)
{
lean_object* v_fn_4670_; lean_object* v_arg_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; 
v_fn_4670_ = lean_ctor_get(v_x_4464_, 0);
lean_inc_ref(v_fn_4670_);
v_arg_4671_ = lean_ctor_get(v_x_4464_, 1);
lean_inc_ref(v_arg_4671_);
lean_dec_ref_known(v_x_4464_, 2);
v___x_4672_ = lean_array_set(v_x_4465_, v_x_4466_, v_arg_4671_);
v___x_4673_ = lean_unsigned_to_nat(1u);
v___x_4674_ = lean_nat_sub(v_x_4466_, v___x_4673_);
lean_dec(v_x_4466_);
v_x_4464_ = v_fn_4670_;
v_x_4465_ = v___x_4672_;
v_x_4466_ = v___x_4674_;
goto _start;
}
else
{
lean_object* v_cls_4676_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v___y_4680_; lean_object* v___y_4681_; lean_object* v___x_4700_; 
lean_dec(v_x_4466_);
v_cls_4676_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_4700_ = l_Lean_Expr_constName_x3f(v_x_4464_);
if (lean_obj_tag(v___x_4700_) == 0)
{
lean_dec_ref(v_x_4465_);
lean_dec_ref(v_x_4464_);
lean_dec(v_val_4463_);
v___y_4678_ = v___y_4467_;
v___y_4679_ = v___y_4468_;
v___y_4680_ = v___y_4469_;
v___y_4681_ = v___y_4470_;
goto v___jp_4677_;
}
else
{
lean_object* v_val_4701_; lean_object* v___x_4703_; uint8_t v_isShared_4704_; uint8_t v_isSharedCheck_4852_; 
v_val_4701_ = lean_ctor_get(v___x_4700_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4700_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4703_ = v___x_4700_;
v_isShared_4704_ = v_isSharedCheck_4852_;
goto v_resetjp_4702_;
}
else
{
lean_inc(v_val_4701_);
lean_dec(v___x_4700_);
v___x_4703_ = lean_box(0);
v_isShared_4704_ = v_isSharedCheck_4852_;
goto v_resetjp_4702_;
}
v_resetjp_4702_:
{
lean_object* v___x_4705_; 
v___x_4705_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6(v_val_4701_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_object* v_a_4706_; 
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___x_4705_, 1);
if (lean_obj_tag(v_a_4706_) == 6)
{
lean_object* v_val_4707_; lean_object* v___x_4708_; 
lean_dec_ref(v_inst_4456_);
v_val_4707_ = lean_ctor_get(v_a_4706_, 0);
lean_inc_ref(v_val_4707_);
lean_dec_ref_known(v_a_4706_, 1);
lean_inc(v___y_4470_);
lean_inc_ref(v___y_4469_);
lean_inc(v___y_4468_);
lean_inc_ref(v___y_4467_);
lean_inc_ref(v_x_4464_);
v___x_4708_ = lean_infer_type(v_x_4464_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
if (lean_obj_tag(v___x_4708_) == 0)
{
lean_object* v_a_4709_; uint8_t v___x_4710_; lean_object* v___x_4711_; 
v_a_4709_ = lean_ctor_get(v___x_4708_, 0);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4708_, 1);
v___x_4710_ = 0;
v___x_4711_ = l_Lean_Meta_forallMetaTelescope(v_a_4709_, v___x_4710_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
if (lean_obj_tag(v___x_4711_) == 0)
{
lean_object* v_a_4712_; lean_object* v_snd_4713_; lean_object* v_fst_4714_; lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4827_; 
v_a_4712_ = lean_ctor_get(v___x_4711_, 0);
lean_inc(v_a_4712_);
lean_dec_ref_known(v___x_4711_, 1);
v_snd_4713_ = lean_ctor_get(v_a_4712_, 1);
v_fst_4714_ = lean_ctor_get(v_a_4712_, 0);
v_isSharedCheck_4827_ = !lean_is_exclusive(v_a_4712_);
if (v_isSharedCheck_4827_ == 0)
{
v___x_4716_ = v_a_4712_;
v_isShared_4717_ = v_isSharedCheck_4827_;
goto v_resetjp_4715_;
}
else
{
lean_inc(v_snd_4713_);
lean_inc(v_fst_4714_);
lean_dec(v_a_4712_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4827_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v_snd_4718_; lean_object* v___x_4720_; uint8_t v_isShared_4721_; uint8_t v_isSharedCheck_4825_; 
v_snd_4718_ = lean_ctor_get(v_snd_4713_, 1);
v_isSharedCheck_4825_ = !lean_is_exclusive(v_snd_4713_);
if (v_isSharedCheck_4825_ == 0)
{
lean_object* v_unused_4826_; 
v_unused_4826_ = lean_ctor_get(v_snd_4713_, 0);
lean_dec(v_unused_4826_);
v___x_4720_ = v_snd_4713_;
v_isShared_4721_ = v_isSharedCheck_4825_;
goto v_resetjp_4719_;
}
else
{
lean_inc(v_snd_4718_);
lean_dec(v_snd_4713_);
v___x_4720_ = lean_box(0);
v_isShared_4721_ = v_isSharedCheck_4825_;
goto v_resetjp_4719_;
}
v_resetjp_4719_:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___y_4725_; lean_object* v___y_4726_; lean_object* v___y_4727_; lean_object* v___y_4728_; uint8_t v___x_4777_; 
v___x_4722_ = lean_array_get_size(v_x_4465_);
v___x_4723_ = lean_array_get_size(v_fst_4714_);
v___x_4777_ = lean_nat_dec_eq(v___x_4722_, v___x_4723_);
if (v___x_4777_ == 0)
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4781_; 
lean_del_object(v___x_4720_);
lean_dec(v_snd_4718_);
lean_dec(v_fst_4714_);
lean_dec_ref(v_val_4707_);
lean_del_object(v___x_4703_);
lean_dec(v_val_4463_);
lean_dec_ref(v_expectedType_4457_);
v___x_4778_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3);
v___x_4779_ = l_Lean_MessageData_ofExpr(v_x_4464_);
if (v_isShared_4717_ == 0)
{
lean_ctor_set_tag(v___x_4716_, 7);
lean_ctor_set(v___x_4716_, 1, v___x_4779_);
lean_ctor_set(v___x_4716_, 0, v___x_4778_);
v___x_4781_ = v___x_4716_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4790_; 
v_reuseFailAlloc_4790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4790_, 0, v___x_4778_);
lean_ctor_set(v_reuseFailAlloc_4790_, 1, v___x_4779_);
v___x_4781_ = v_reuseFailAlloc_4790_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4782_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3);
v___x_4783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4783_, 0, v___x_4781_);
lean_ctor_set(v___x_4783_, 1, v___x_4782_);
v___x_4784_ = lean_array_to_list(v_x_4465_);
v___x_4785_ = lean_box(0);
v___x_4786_ = l_List_mapTR_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__12(v___x_4784_, v___x_4785_);
v___x_4787_ = l_Lean_MessageData_ofList(v___x_4786_);
v___x_4788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4783_);
lean_ctor_set(v___x_4788_, 1, v___x_4787_);
v___x_4789_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v___x_4788_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
return v___x_4789_;
}
}
else
{
uint8_t v___x_4791_; lean_object* v___x_4792_; 
v___x_4791_ = 0;
lean_inc_ref(v_expectedType_4457_);
v___x_4792_ = l_Lean_Meta_isExprDefEq(v_expectedType_4457_, v_snd_4718_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
if (lean_obj_tag(v___x_4792_) == 0)
{
lean_object* v_a_4793_; uint8_t v___x_4794_; 
v_a_4793_ = lean_ctor_get(v___x_4792_, 0);
lean_inc(v_a_4793_);
lean_dec_ref_known(v___x_4792_, 1);
v___x_4794_ = lean_unbox(v_a_4793_);
lean_dec(v_a_4793_);
if (v___x_4794_ == 0)
{
lean_object* v_toConstantVal_4795_; lean_object* v_name_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4800_; 
lean_del_object(v___x_4720_);
lean_dec(v_fst_4714_);
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4465_);
lean_dec_ref(v_x_4464_);
lean_dec(v_val_4463_);
v_toConstantVal_4795_ = lean_ctor_get(v_val_4707_, 0);
lean_inc_ref(v_toConstantVal_4795_);
lean_dec_ref(v_val_4707_);
v_name_4796_ = lean_ctor_get(v_toConstantVal_4795_, 0);
lean_inc(v_name_4796_);
lean_dec_ref(v_toConstantVal_4795_);
v___x_4797_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5);
v___x_4798_ = l_Lean_MessageData_ofExpr(v_expectedType_4457_);
if (v_isShared_4717_ == 0)
{
lean_ctor_set_tag(v___x_4716_, 7);
lean_ctor_set(v___x_4716_, 1, v___x_4798_);
lean_ctor_set(v___x_4716_, 0, v___x_4797_);
v___x_4800_ = v___x_4716_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v___x_4797_);
lean_ctor_set(v_reuseFailAlloc_4816_, 1, v___x_4798_);
v___x_4800_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4815_; 
v___x_4801_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7);
v___x_4802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4800_);
lean_ctor_set(v___x_4802_, 1, v___x_4801_);
v___x_4803_ = l_Lean_MessageData_ofConstName(v_name_4796_, v___x_4791_);
v___x_4804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4802_);
lean_ctor_set(v___x_4804_, 1, v___x_4803_);
v___x_4805_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_4806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4806_, 0, v___x_4804_);
lean_ctor_set(v___x_4806_, 1, v___x_4805_);
v___x_4807_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v___x_4806_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
v_a_4808_ = lean_ctor_get(v___x_4807_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4807_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4810_ = v___x_4807_;
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v___x_4807_);
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
lean_del_object(v___x_4716_);
v___y_4725_ = v___y_4467_;
v___y_4726_ = v___y_4468_;
v___y_4727_ = v___y_4469_;
v___y_4728_ = v___y_4470_;
goto v___jp_4724_;
}
}
else
{
lean_object* v_a_4817_; lean_object* v___x_4819_; uint8_t v_isShared_4820_; uint8_t v_isSharedCheck_4824_; 
lean_del_object(v___x_4720_);
lean_del_object(v___x_4716_);
lean_dec(v_fst_4714_);
lean_dec_ref(v_val_4707_);
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4465_);
lean_dec_ref(v_x_4464_);
lean_dec(v_val_4463_);
lean_dec_ref(v_expectedType_4457_);
v_a_4817_ = lean_ctor_get(v___x_4792_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4792_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4819_ = v___x_4792_;
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
else
{
lean_inc(v_a_4817_);
lean_dec(v___x_4792_);
v___x_4819_ = lean_box(0);
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
v_resetjp_4818_:
{
lean_object* v___x_4822_; 
if (v_isShared_4820_ == 0)
{
v___x_4822_ = v___x_4819_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v_a_4817_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
return v___x_4822_;
}
}
}
}
v___jp_4724_:
{
lean_object* v_numParams_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4733_; 
v_numParams_4729_ = lean_ctor_get(v_val_4707_, 3);
lean_inc(v_numParams_4729_);
lean_dec_ref(v_val_4707_);
v___x_4730_ = lean_box(0);
v___x_4731_ = lean_box(v_isEta_4462_);
if (v_isShared_4721_ == 0)
{
lean_ctor_set(v___x_4720_, 1, v___x_4731_);
lean_ctor_set(v___x_4720_, 0, v___x_4730_);
v___x_4733_ = v___x_4720_;
goto v_reusejp_4732_;
}
else
{
lean_object* v_reuseFailAlloc_4776_; 
v_reuseFailAlloc_4776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4776_, 0, v___x_4730_);
lean_ctor_set(v_reuseFailAlloc_4776_, 1, v___x_4731_);
v___x_4733_ = v_reuseFailAlloc_4776_;
goto v_reusejp_4732_;
}
v_reusejp_4732_:
{
lean_object* v___x_4734_; 
v___x_4734_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg(v___x_4722_, v_fst_4714_, v_x_4465_, v_compile_4458_, v_logCompileErrors_4459_, v_isMeta_4460_, v___x_4722_, v___x_4723_, v_exposeAux_4461_, v_val_4463_, v_expectedType_4457_, v_numParams_4729_, v___x_4733_, v___y_4725_, v___y_4726_, v___y_4727_, v___y_4728_);
lean_dec_ref(v_x_4465_);
if (lean_obj_tag(v___x_4734_) == 0)
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4767_; 
v_a_4735_ = lean_ctor_get(v___x_4734_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v___x_4734_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4737_ = v___x_4734_;
v_isShared_4738_ = v_isSharedCheck_4767_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4734_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4767_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v_fst_4739_; 
v_fst_4739_ = lean_ctor_get(v_a_4735_, 0);
lean_inc(v_fst_4739_);
lean_dec(v_a_4735_);
if (lean_obj_tag(v_fst_4739_) == 0)
{
size_t v_sz_4740_; size_t v___x_4741_; lean_object* v___x_4742_; 
lean_del_object(v___x_4737_);
v_sz_4740_ = lean_array_size(v_fst_4714_);
v___x_4741_ = ((size_t)0ULL);
v___x_4742_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__8(v_sz_4740_, v___x_4741_, v_fst_4714_, v___y_4725_, v___y_4726_, v___y_4727_, v___y_4728_);
if (lean_obj_tag(v___x_4742_) == 0)
{
lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4754_; 
v_a_4743_ = lean_ctor_get(v___x_4742_, 0);
v_isSharedCheck_4754_ = !lean_is_exclusive(v___x_4742_);
if (v_isSharedCheck_4754_ == 0)
{
v___x_4745_ = v___x_4742_;
v_isShared_4746_ = v_isSharedCheck_4754_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_dec(v___x_4742_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4754_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4747_; lean_object* v___x_4749_; 
v___x_4747_ = l_Lean_mkAppN(v_x_4464_, v_a_4743_);
lean_dec(v_a_4743_);
if (v_isShared_4704_ == 0)
{
lean_ctor_set(v___x_4703_, 0, v___x_4747_);
v___x_4749_ = v___x_4703_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4753_; 
v_reuseFailAlloc_4753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4753_, 0, v___x_4747_);
v___x_4749_ = v_reuseFailAlloc_4753_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
lean_object* v___x_4751_; 
if (v_isShared_4746_ == 0)
{
lean_ctor_set(v___x_4745_, 0, v___x_4749_);
v___x_4751_ = v___x_4745_;
goto v_reusejp_4750_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v___x_4749_);
v___x_4751_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4750_;
}
v_reusejp_4750_:
{
return v___x_4751_;
}
}
}
}
else
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4762_; 
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4464_);
v_a_4755_ = lean_ctor_get(v___x_4742_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4742_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4757_ = v___x_4742_;
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___x_4742_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4762_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4760_; 
if (v_isShared_4758_ == 0)
{
v___x_4760_ = v___x_4757_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_a_4755_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
}
}
else
{
lean_object* v_val_4763_; lean_object* v___x_4765_; 
lean_dec(v_fst_4714_);
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4464_);
v_val_4763_ = lean_ctor_get(v_fst_4739_, 0);
lean_inc(v_val_4763_);
lean_dec_ref_known(v_fst_4739_, 1);
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 0, v_val_4763_);
v___x_4765_ = v___x_4737_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_val_4763_);
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
else
{
lean_object* v_a_4768_; lean_object* v___x_4770_; uint8_t v_isShared_4771_; uint8_t v_isSharedCheck_4775_; 
lean_dec(v_fst_4714_);
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4464_);
v_a_4768_ = lean_ctor_get(v___x_4734_, 0);
v_isSharedCheck_4775_ = !lean_is_exclusive(v___x_4734_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4770_ = v___x_4734_;
v_isShared_4771_ = v_isSharedCheck_4775_;
goto v_resetjp_4769_;
}
else
{
lean_inc(v_a_4768_);
lean_dec(v___x_4734_);
v___x_4770_ = lean_box(0);
v_isShared_4771_ = v_isSharedCheck_4775_;
goto v_resetjp_4769_;
}
v_resetjp_4769_:
{
lean_object* v___x_4773_; 
if (v_isShared_4771_ == 0)
{
v___x_4773_ = v___x_4770_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v_a_4768_);
v___x_4773_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
return v___x_4773_;
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
lean_object* v_a_4828_; lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4835_; 
lean_dec_ref(v_val_4707_);
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4465_);
lean_dec_ref(v_x_4464_);
lean_dec(v_val_4463_);
lean_dec_ref(v_expectedType_4457_);
v_a_4828_ = lean_ctor_get(v___x_4711_, 0);
v_isSharedCheck_4835_ = !lean_is_exclusive(v___x_4711_);
if (v_isSharedCheck_4835_ == 0)
{
v___x_4830_ = v___x_4711_;
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
else
{
lean_inc(v_a_4828_);
lean_dec(v___x_4711_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v___x_4833_; 
if (v_isShared_4831_ == 0)
{
v___x_4833_ = v___x_4830_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v_a_4828_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
}
else
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4843_; 
lean_dec_ref(v_val_4707_);
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4465_);
lean_dec_ref(v_x_4464_);
lean_dec(v_val_4463_);
lean_dec_ref(v_expectedType_4457_);
v_a_4836_ = lean_ctor_get(v___x_4708_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4708_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4838_ = v___x_4708_;
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4708_);
v___x_4838_ = lean_box(0);
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
v_resetjp_4837_:
{
lean_object* v___x_4841_; 
if (v_isShared_4839_ == 0)
{
v___x_4841_ = v___x_4838_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_a_4836_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
}
}
else
{
lean_dec(v_a_4706_);
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4465_);
lean_dec_ref(v_x_4464_);
lean_dec(v_val_4463_);
v___y_4678_ = v___y_4467_;
v___y_4679_ = v___y_4468_;
v___y_4680_ = v___y_4469_;
v___y_4681_ = v___y_4470_;
goto v___jp_4677_;
}
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
lean_del_object(v___x_4703_);
lean_dec_ref(v_x_4465_);
lean_dec_ref(v_x_4464_);
lean_dec(v_val_4463_);
lean_dec_ref(v_expectedType_4457_);
lean_dec_ref(v_inst_4456_);
v_a_4844_ = lean_ctor_get(v___x_4705_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4705_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4705_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
}
}
v___jp_4677_:
{
lean_object* v_toCold_4682_; lean_object* v_options_4683_; uint8_t v_hasTrace_4684_; 
v_toCold_4682_ = lean_ctor_get(v___y_4680_, 0);
v_options_4683_ = lean_ctor_get(v_toCold_4682_, 2);
v_hasTrace_4684_ = lean_ctor_get_uint8(v_options_4683_, sizeof(void*)*1);
if (v_hasTrace_4684_ == 0)
{
v___y_4634_ = v___y_4678_;
v___y_4635_ = v___y_4679_;
v___y_4636_ = v___y_4680_;
v___y_4637_ = v___y_4681_;
goto v___jp_4633_;
}
else
{
lean_object* v_inheritedTraceOptions_4685_; lean_object* v___x_4686_; uint8_t v___x_4687_; 
v_inheritedTraceOptions_4685_ = lean_ctor_get(v_toCold_4682_, 11);
v___x_4686_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3);
v___x_4687_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4685_, v_options_4683_, v___x_4686_);
if (v___x_4687_ == 0)
{
v___y_4634_ = v___y_4678_;
v___y_4635_ = v___y_4679_;
v___y_4636_ = v___y_4680_;
v___y_4637_ = v___y_4681_;
goto v___jp_4633_;
}
else
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4688_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1);
lean_inc_ref(v_inst_4456_);
v___x_4689_ = l_Lean_MessageData_ofExpr(v_inst_4456_);
v___x_4690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4688_);
lean_ctor_set(v___x_4690_, 1, v___x_4689_);
v___x_4691_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_4676_, v___x_4690_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_);
if (lean_obj_tag(v___x_4691_) == 0)
{
lean_dec_ref_known(v___x_4691_, 1);
v___y_4634_ = v___y_4678_;
v___y_4635_ = v___y_4679_;
v___y_4636_ = v___y_4680_;
v___y_4637_ = v___y_4681_;
goto v___jp_4633_;
}
else
{
lean_object* v_a_4692_; lean_object* v___x_4694_; uint8_t v_isShared_4695_; uint8_t v_isSharedCheck_4699_; 
lean_dec_ref(v_expectedType_4457_);
lean_dec_ref(v_inst_4456_);
v_a_4692_ = lean_ctor_get(v___x_4691_, 0);
v_isSharedCheck_4699_ = !lean_is_exclusive(v___x_4691_);
if (v_isSharedCheck_4699_ == 0)
{
v___x_4694_ = v___x_4691_;
v_isShared_4695_ = v_isSharedCheck_4699_;
goto v_resetjp_4693_;
}
else
{
lean_inc(v_a_4692_);
lean_dec(v___x_4691_);
v___x_4694_ = lean_box(0);
v_isShared_4695_ = v_isSharedCheck_4699_;
goto v_resetjp_4693_;
}
v_resetjp_4693_:
{
lean_object* v___x_4697_; 
if (v_isShared_4695_ == 0)
{
v___x_4697_ = v___x_4694_;
goto v_reusejp_4696_;
}
else
{
lean_object* v_reuseFailAlloc_4698_; 
v_reuseFailAlloc_4698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4698_, 0, v_a_4692_);
v___x_4697_ = v_reuseFailAlloc_4698_;
goto v_reusejp_4696_;
}
v_reusejp_4696_:
{
return v___x_4697_;
}
}
}
}
}
}
}
v___jp_4472_:
{
lean_object* v___x_4477_; 
v___x_4477_ = l_Lean_enableRealizationsForConst(v___y_4474_, v___y_4475_, v___y_4476_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4485_; 
v_isSharedCheck_4485_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4485_ == 0)
{
lean_object* v_unused_4486_; 
v_unused_4486_ = lean_ctor_get(v___x_4477_, 0);
lean_dec(v_unused_4486_);
v___x_4479_ = v___x_4477_;
v_isShared_4480_ = v_isSharedCheck_4485_;
goto v_resetjp_4478_;
}
else
{
lean_dec(v___x_4477_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4485_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4481_; lean_object* v___x_4483_; 
v___x_4481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4481_, 0, v___y_4473_);
if (v_isShared_4480_ == 0)
{
lean_ctor_set(v___x_4479_, 0, v___x_4481_);
v___x_4483_ = v___x_4479_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v___x_4481_);
v___x_4483_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
return v___x_4483_;
}
}
}
else
{
lean_object* v_a_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4494_; 
lean_dec_ref(v___y_4473_);
v_a_4487_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4494_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4489_ = v___x_4477_;
v_isShared_4490_ = v_isSharedCheck_4494_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_a_4487_);
lean_dec(v___x_4477_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4494_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4492_; 
if (v_isShared_4490_ == 0)
{
v___x_4492_ = v___x_4489_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v_a_4487_);
v___x_4492_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
return v___x_4492_;
}
}
}
}
v___jp_4495_:
{
if (v_compile_4458_ == 0)
{
v___y_4473_ = v___y_4496_;
v___y_4474_ = v___y_4497_;
v___y_4475_ = v___y_4498_;
v___y_4476_ = v___y_4499_;
goto v___jp_4472_;
}
else
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; 
v___x_4500_ = lean_unsigned_to_nat(1u);
v___x_4501_ = lean_mk_empty_array_with_capacity(v___x_4500_);
lean_inc(v___y_4497_);
v___x_4502_ = lean_array_push(v___x_4501_, v___y_4497_);
v___x_4503_ = l_Lean_compileDecls(v___x_4502_, v_logCompileErrors_4459_, v___y_4498_, v___y_4499_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_dec_ref_known(v___x_4503_, 1);
v___y_4473_ = v___y_4496_;
v___y_4474_ = v___y_4497_;
v___y_4475_ = v___y_4498_;
v___y_4476_ = v___y_4499_;
goto v___jp_4472_;
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4511_; 
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
v_a_4504_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4506_ = v___x_4503_;
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4503_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4504_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
return v___x_4509_;
}
}
}
}
}
v___jp_4512_:
{
lean_object* v___x_4519_; 
lean_inc(v___y_4514_);
v___x_4519_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg(v___y_4514_, v___y_4518_, v___y_4516_, v___y_4515_);
lean_dec_ref(v___x_4519_);
if (v_isMeta_4460_ == 0)
{
v___y_4496_ = v___y_4513_;
v___y_4497_ = v___y_4514_;
v___y_4498_ = v___y_4517_;
v___y_4499_ = v___y_4515_;
goto v___jp_4495_;
}
else
{
lean_object* v___x_4520_; lean_object* v_env_4521_; lean_object* v_nextMacroScope_4522_; lean_object* v_ngen_4523_; lean_object* v_auxDeclNGen_4524_; lean_object* v_traceState_4525_; lean_object* v_recordedDeps_4526_; lean_object* v_messages_4527_; lean_object* v_infoState_4528_; lean_object* v_snapshotTasks_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4554_; 
v___x_4520_ = lean_st_ref_take(v___y_4515_);
v_env_4521_ = lean_ctor_get(v___x_4520_, 0);
v_nextMacroScope_4522_ = lean_ctor_get(v___x_4520_, 1);
v_ngen_4523_ = lean_ctor_get(v___x_4520_, 2);
v_auxDeclNGen_4524_ = lean_ctor_get(v___x_4520_, 3);
v_traceState_4525_ = lean_ctor_get(v___x_4520_, 4);
v_recordedDeps_4526_ = lean_ctor_get(v___x_4520_, 6);
v_messages_4527_ = lean_ctor_get(v___x_4520_, 7);
v_infoState_4528_ = lean_ctor_get(v___x_4520_, 8);
v_snapshotTasks_4529_ = lean_ctor_get(v___x_4520_, 9);
v_isSharedCheck_4554_ = !lean_is_exclusive(v___x_4520_);
if (v_isSharedCheck_4554_ == 0)
{
lean_object* v_unused_4555_; 
v_unused_4555_ = lean_ctor_get(v___x_4520_, 5);
lean_dec(v_unused_4555_);
v___x_4531_ = v___x_4520_;
v_isShared_4532_ = v_isSharedCheck_4554_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_snapshotTasks_4529_);
lean_inc(v_infoState_4528_);
lean_inc(v_messages_4527_);
lean_inc(v_recordedDeps_4526_);
lean_inc(v_traceState_4525_);
lean_inc(v_auxDeclNGen_4524_);
lean_inc(v_ngen_4523_);
lean_inc(v_nextMacroScope_4522_);
lean_inc(v_env_4521_);
lean_dec(v___x_4520_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4554_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4536_; 
lean_inc(v___y_4514_);
v___x_4533_ = l_Lean_markMeta(v_env_4521_, v___y_4514_);
v___x_4534_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1);
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 5, v___x_4534_);
lean_ctor_set(v___x_4531_, 0, v___x_4533_);
v___x_4536_ = v___x_4531_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v___x_4533_);
lean_ctor_set(v_reuseFailAlloc_4553_, 1, v_nextMacroScope_4522_);
lean_ctor_set(v_reuseFailAlloc_4553_, 2, v_ngen_4523_);
lean_ctor_set(v_reuseFailAlloc_4553_, 3, v_auxDeclNGen_4524_);
lean_ctor_set(v_reuseFailAlloc_4553_, 4, v_traceState_4525_);
lean_ctor_set(v_reuseFailAlloc_4553_, 5, v___x_4534_);
lean_ctor_set(v_reuseFailAlloc_4553_, 6, v_recordedDeps_4526_);
lean_ctor_set(v_reuseFailAlloc_4553_, 7, v_messages_4527_);
lean_ctor_set(v_reuseFailAlloc_4553_, 8, v_infoState_4528_);
lean_ctor_set(v_reuseFailAlloc_4553_, 9, v_snapshotTasks_4529_);
v___x_4536_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v_mctx_4539_; lean_object* v_zetaDeltaFVarIds_4540_; lean_object* v_postponed_4541_; lean_object* v_diag_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4551_; 
v___x_4537_ = lean_st_ref_put(v___y_4515_, v___x_4536_);
v___x_4538_ = lean_st_ref_take(v___y_4516_);
v_mctx_4539_ = lean_ctor_get(v___x_4538_, 0);
v_zetaDeltaFVarIds_4540_ = lean_ctor_get(v___x_4538_, 2);
v_postponed_4541_ = lean_ctor_get(v___x_4538_, 3);
v_diag_4542_ = lean_ctor_get(v___x_4538_, 4);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4551_ == 0)
{
lean_object* v_unused_4552_; 
v_unused_4552_ = lean_ctor_get(v___x_4538_, 1);
lean_dec(v_unused_4552_);
v___x_4544_ = v___x_4538_;
v_isShared_4545_ = v_isSharedCheck_4551_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_diag_4542_);
lean_inc(v_postponed_4541_);
lean_inc(v_zetaDeltaFVarIds_4540_);
lean_inc(v_mctx_4539_);
lean_dec(v___x_4538_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4551_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4546_; lean_object* v___x_4548_; 
v___x_4546_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5);
if (v_isShared_4545_ == 0)
{
lean_ctor_set(v___x_4544_, 1, v___x_4546_);
v___x_4548_ = v___x_4544_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_mctx_4539_);
lean_ctor_set(v_reuseFailAlloc_4550_, 1, v___x_4546_);
lean_ctor_set(v_reuseFailAlloc_4550_, 2, v_zetaDeltaFVarIds_4540_);
lean_ctor_set(v_reuseFailAlloc_4550_, 3, v_postponed_4541_);
lean_ctor_set(v_reuseFailAlloc_4550_, 4, v_diag_4542_);
v___x_4548_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
lean_object* v___x_4549_; 
v___x_4549_ = lean_st_ref_put(v___y_4516_, v___x_4548_);
v___y_4496_ = v___y_4513_;
v___y_4497_ = v___y_4514_;
v___y_4498_ = v___y_4517_;
v___y_4499_ = v___y_4515_;
goto v___jp_4495_;
}
}
}
}
}
}
v___jp_4556_:
{
if (lean_obj_tag(v___y_4562_) == 0)
{
lean_object* v_a_4563_; uint8_t v___x_4564_; 
v_a_4563_ = lean_ctor_get(v___y_4562_, 0);
lean_inc(v_a_4563_);
lean_dec_ref_known(v___y_4562_, 1);
v___x_4564_ = lean_unbox(v_a_4563_);
lean_dec(v_a_4563_);
if (v___x_4564_ == 0)
{
uint8_t v___x_4565_; 
v___x_4565_ = 1;
v___y_4513_ = v___y_4557_;
v___y_4514_ = v___y_4558_;
v___y_4515_ = v___y_4559_;
v___y_4516_ = v___y_4560_;
v___y_4517_ = v___y_4561_;
v___y_4518_ = v___x_4565_;
goto v___jp_4512_;
}
else
{
uint8_t v___x_4566_; 
v___x_4566_ = 3;
v___y_4513_ = v___y_4557_;
v___y_4514_ = v___y_4558_;
v___y_4515_ = v___y_4559_;
v___y_4516_ = v___y_4560_;
v___y_4517_ = v___y_4561_;
v___y_4518_ = v___x_4566_;
goto v___jp_4512_;
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4574_; 
lean_dec(v___y_4558_);
lean_dec_ref(v___y_4557_);
v_a_4567_ = lean_ctor_get(v___y_4562_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___y_4562_);
if (v_isSharedCheck_4574_ == 0)
{
v___x_4569_ = v___y_4562_;
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v___y_4562_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
v___jp_4575_:
{
lean_object* v___x_4584_; 
v___x_4584_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(v___y_4576_, v___y_4583_, v___y_4581_, v___y_4580_, v___y_4582_, v___y_4579_);
if (lean_obj_tag(v___x_4584_) == 0)
{
lean_object* v_a_4585_; lean_object* v___x_4586_; uint8_t v_transparency_4587_; uint8_t v___x_4588_; uint8_t v___x_4589_; 
v_a_4585_ = lean_ctor_get(v___x_4584_, 0);
lean_inc(v_a_4585_);
lean_dec_ref_known(v___x_4584_, 1);
v___x_4586_ = l_Lean_Meta_Context_config(v___y_4581_);
v_transparency_4587_ = lean_ctor_get_uint8(v___x_4586_, 9);
lean_dec_ref(v___x_4586_);
v___x_4588_ = 5;
v___x_4589_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4587_, v___x_4588_);
if (v___x_4589_ == 0)
{
lean_object* v_keyedConfig_4590_; uint8_t v_trackZetaDelta_4591_; lean_object* v_zetaDeltaSet_4592_; lean_object* v_lctx_4593_; lean_object* v_localInstances_4594_; lean_object* v_defEqCtx_x3f_4595_; lean_object* v_synthPendingDepth_4596_; lean_object* v_customCanUnfoldPredicate_x3f_4597_; uint8_t v_univApprox_4598_; uint8_t v_inTypeClassResolution_4599_; uint8_t v_cacheInferType_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; 
v_keyedConfig_4590_ = lean_ctor_get(v___y_4581_, 0);
v_trackZetaDelta_4591_ = lean_ctor_get_uint8(v___y_4581_, sizeof(void*)*7);
v_zetaDeltaSet_4592_ = lean_ctor_get(v___y_4581_, 1);
v_lctx_4593_ = lean_ctor_get(v___y_4581_, 2);
v_localInstances_4594_ = lean_ctor_get(v___y_4581_, 3);
v_defEqCtx_x3f_4595_ = lean_ctor_get(v___y_4581_, 4);
v_synthPendingDepth_4596_ = lean_ctor_get(v___y_4581_, 5);
v_customCanUnfoldPredicate_x3f_4597_ = lean_ctor_get(v___y_4581_, 6);
v_univApprox_4598_ = lean_ctor_get_uint8(v___y_4581_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4599_ = lean_ctor_get_uint8(v___y_4581_, sizeof(void*)*7 + 2);
v_cacheInferType_4600_ = lean_ctor_get_uint8(v___y_4581_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4590_);
v___x_4601_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4588_, v_keyedConfig_4590_);
lean_inc(v_customCanUnfoldPredicate_x3f_4597_);
lean_inc(v_synthPendingDepth_4596_);
lean_inc(v_defEqCtx_x3f_4595_);
lean_inc_ref(v_localInstances_4594_);
lean_inc_ref(v_lctx_4593_);
lean_inc(v_zetaDeltaSet_4592_);
v___x_4602_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4602_, 0, v___x_4601_);
lean_ctor_set(v___x_4602_, 1, v_zetaDeltaSet_4592_);
lean_ctor_set(v___x_4602_, 2, v_lctx_4593_);
lean_ctor_set(v___x_4602_, 3, v_localInstances_4594_);
lean_ctor_set(v___x_4602_, 4, v_defEqCtx_x3f_4595_);
lean_ctor_set(v___x_4602_, 5, v_synthPendingDepth_4596_);
lean_ctor_set(v___x_4602_, 6, v_customCanUnfoldPredicate_x3f_4597_);
lean_ctor_set_uint8(v___x_4602_, sizeof(void*)*7, v_trackZetaDelta_4591_);
lean_ctor_set_uint8(v___x_4602_, sizeof(void*)*7 + 1, v_univApprox_4598_);
lean_ctor_set_uint8(v___x_4602_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4599_);
lean_ctor_set_uint8(v___x_4602_, sizeof(void*)*7 + 3, v_cacheInferType_4600_);
v___x_4603_ = l_Lean_Meta_isExprDefEq(v_expectedType_4457_, v___y_4577_, v___x_4602_, v___y_4580_, v___y_4582_, v___y_4579_);
lean_dec_ref_known(v___x_4602_, 7);
v___y_4557_ = v_a_4585_;
v___y_4558_ = v___y_4578_;
v___y_4559_ = v___y_4579_;
v___y_4560_ = v___y_4580_;
v___y_4561_ = v___y_4582_;
v___y_4562_ = v___x_4603_;
goto v___jp_4556_;
}
else
{
lean_object* v___x_4604_; 
v___x_4604_ = l_Lean_Meta_isExprDefEq(v_expectedType_4457_, v___y_4577_, v___y_4581_, v___y_4580_, v___y_4582_, v___y_4579_);
v___y_4557_ = v_a_4585_;
v___y_4558_ = v___y_4578_;
v___y_4559_ = v___y_4579_;
v___y_4560_ = v___y_4580_;
v___y_4561_ = v___y_4582_;
v___y_4562_ = v___x_4604_;
goto v___jp_4556_;
}
}
else
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4612_; 
lean_dec(v___y_4578_);
lean_dec_ref(v___y_4577_);
lean_dec_ref(v_expectedType_4457_);
v_a_4605_ = lean_ctor_get(v___x_4584_, 0);
v_isSharedCheck_4612_ = !lean_is_exclusive(v___x_4584_);
if (v_isSharedCheck_4612_ == 0)
{
v___x_4607_ = v___x_4584_;
v_isShared_4608_ = v_isSharedCheck_4612_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4584_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4612_;
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
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v_a_4605_);
v___x_4610_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
return v___x_4610_;
}
}
}
}
v___jp_4613_:
{
lean_object* v___x_4614_; lean_object* v___x_4615_; 
v___x_4614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4614_, 0, v_inst_4456_);
v___x_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4615_, 0, v___x_4614_);
return v___x_4615_;
}
v___jp_4616_:
{
lean_object* v___x_4623_; lean_object* v___x_4624_; uint8_t v___x_4625_; 
v___x_4623_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4621_);
v___x_4624_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_4625_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_4623_, v___x_4624_);
lean_dec_ref(v___x_4623_);
if (v___x_4625_ == 0)
{
lean_dec_ref(v___y_4617_);
lean_dec_ref(v_expectedType_4457_);
goto v___jp_4613_;
}
else
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v_a_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___x_4626_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__1));
v___x_4627_ = l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg(v___x_4626_, v___y_4622_);
v_a_4628_ = lean_ctor_get(v___x_4627_, 0);
lean_inc_n(v_a_4628_, 2);
lean_dec_ref(v___x_4627_);
v___x_4629_ = lean_box(v___y_4618_);
v___x_4630_ = lean_box(v___y_4618_);
v___x_4631_ = lean_box(v___x_4625_);
lean_inc_ref(v_expectedType_4457_);
v___x_4632_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxDefinition___boxed), 11, 6);
lean_closure_set(v___x_4632_, 0, v_a_4628_);
lean_closure_set(v___x_4632_, 1, v_expectedType_4457_);
lean_closure_set(v___x_4632_, 2, v_inst_4456_);
lean_closure_set(v___x_4632_, 3, v___x_4629_);
lean_closure_set(v___x_4632_, 4, v___x_4630_);
lean_closure_set(v___x_4632_, 5, v___x_4631_);
if (v_exposeAux_4461_ == 0)
{
v___y_4576_ = v___x_4632_;
v___y_4577_ = v___y_4617_;
v___y_4578_ = v_a_4628_;
v___y_4579_ = v___y_4622_;
v___y_4580_ = v___y_4620_;
v___y_4581_ = v___y_4619_;
v___y_4582_ = v___y_4621_;
v___y_4583_ = v___x_4625_;
goto v___jp_4575_;
}
else
{
v___y_4576_ = v___x_4632_;
v___y_4577_ = v___y_4617_;
v___y_4578_ = v_a_4628_;
v___y_4579_ = v___y_4622_;
v___y_4580_ = v___y_4620_;
v___y_4581_ = v___y_4619_;
v___y_4582_ = v___y_4621_;
v___y_4583_ = v___y_4618_;
goto v___jp_4575_;
}
}
}
v___jp_4633_:
{
lean_object* v___x_4638_; 
lean_inc(v___y_4637_);
lean_inc_ref(v___y_4636_);
lean_inc(v___y_4635_);
lean_inc_ref(v___y_4634_);
lean_inc_ref(v_inst_4456_);
v___x_4638_ = lean_infer_type(v_inst_4456_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4638_) == 0)
{
lean_object* v_a_4639_; lean_object* v___x_4640_; 
v_a_4639_ = lean_ctor_get(v___x_4638_, 0);
lean_inc_n(v_a_4639_, 2);
lean_dec_ref_known(v___x_4638_, 1);
lean_inc_ref(v_expectedType_4457_);
v___x_4640_ = l_Lean_Meta_isExprDefEq(v_expectedType_4457_, v_a_4639_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4640_) == 0)
{
lean_object* v_a_4641_; uint8_t v___x_4642_; 
v_a_4641_ = lean_ctor_get(v___x_4640_, 0);
lean_inc(v_a_4641_);
lean_dec_ref_known(v___x_4640_, 1);
v___x_4642_ = lean_unbox(v_a_4641_);
if (v___x_4642_ == 0)
{
lean_object* v___x_4643_; lean_object* v___x_4644_; uint8_t v___x_4645_; 
v___x_4643_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4636_);
v___x_4644_ = l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
v___x_4645_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_4643_, v___x_4644_);
lean_dec_ref(v___x_4643_);
if (v___x_4645_ == 0)
{
uint8_t v___x_4646_; 
v___x_4646_ = lean_unbox(v_a_4641_);
lean_dec(v_a_4641_);
v___y_4617_ = v_a_4639_;
v___y_4618_ = v___x_4646_;
v___y_4619_ = v___y_4634_;
v___y_4620_ = v___y_4635_;
v___y_4621_ = v___y_4636_;
v___y_4622_ = v___y_4637_;
goto v___jp_4616_;
}
else
{
lean_object* v___x_4647_; 
lean_inc_ref(v_inst_4456_);
v___x_4647_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f(v_inst_4456_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4647_) == 0)
{
lean_object* v_a_4648_; 
v_a_4648_ = lean_ctor_get(v___x_4647_, 0);
lean_inc(v_a_4648_);
lean_dec_ref_known(v___x_4647_, 1);
if (lean_obj_tag(v_a_4648_) == 1)
{
lean_object* v_val_4649_; lean_object* v___x_4650_; 
v_val_4649_ = lean_ctor_get(v_a_4648_, 0);
lean_inc(v_val_4649_);
lean_dec_ref_known(v_a_4648_, 1);
lean_inc_ref(v_expectedType_4457_);
v___x_4650_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(v_compile_4458_, v_logCompileErrors_4459_, v_isMeta_4460_, v_exposeAux_4461_, v_val_4649_, v_expectedType_4457_, v___x_4645_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
if (lean_obj_tag(v___x_4650_) == 0)
{
lean_object* v_a_4651_; 
v_a_4651_ = lean_ctor_get(v___x_4650_, 0);
if (lean_obj_tag(v_a_4651_) == 1)
{
lean_dec(v_a_4641_);
lean_dec(v_a_4639_);
lean_dec_ref(v_expectedType_4457_);
lean_dec_ref(v_inst_4456_);
return v___x_4650_;
}
else
{
uint8_t v___x_4652_; 
lean_dec_ref_known(v___x_4650_, 1);
v___x_4652_ = lean_unbox(v_a_4641_);
lean_dec(v_a_4641_);
v___y_4617_ = v_a_4639_;
v___y_4618_ = v___x_4652_;
v___y_4619_ = v___y_4634_;
v___y_4620_ = v___y_4635_;
v___y_4621_ = v___y_4636_;
v___y_4622_ = v___y_4637_;
goto v___jp_4616_;
}
}
else
{
lean_dec(v_a_4641_);
lean_dec(v_a_4639_);
lean_dec_ref(v_expectedType_4457_);
lean_dec_ref(v_inst_4456_);
return v___x_4650_;
}
}
else
{
uint8_t v___x_4653_; 
lean_dec(v_a_4648_);
v___x_4653_ = lean_unbox(v_a_4641_);
lean_dec(v_a_4641_);
v___y_4617_ = v_a_4639_;
v___y_4618_ = v___x_4653_;
v___y_4619_ = v___y_4634_;
v___y_4620_ = v___y_4635_;
v___y_4621_ = v___y_4636_;
v___y_4622_ = v___y_4637_;
goto v___jp_4616_;
}
}
else
{
lean_dec(v_a_4641_);
lean_dec(v_a_4639_);
lean_dec_ref(v_expectedType_4457_);
lean_dec_ref(v_inst_4456_);
return v___x_4647_;
}
}
}
else
{
lean_dec(v_a_4641_);
lean_dec(v_a_4639_);
lean_dec_ref(v_expectedType_4457_);
goto v___jp_4613_;
}
}
else
{
lean_object* v_a_4654_; lean_object* v___x_4656_; uint8_t v_isShared_4657_; uint8_t v_isSharedCheck_4661_; 
lean_dec(v_a_4639_);
lean_dec_ref(v_expectedType_4457_);
lean_dec_ref(v_inst_4456_);
v_a_4654_ = lean_ctor_get(v___x_4640_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v___x_4640_);
if (v_isSharedCheck_4661_ == 0)
{
v___x_4656_ = v___x_4640_;
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
else
{
lean_inc(v_a_4654_);
lean_dec(v___x_4640_);
v___x_4656_ = lean_box(0);
v_isShared_4657_ = v_isSharedCheck_4661_;
goto v_resetjp_4655_;
}
v_resetjp_4655_:
{
lean_object* v___x_4659_; 
if (v_isShared_4657_ == 0)
{
v___x_4659_ = v___x_4656_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v_a_4654_);
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
lean_object* v_a_4662_; lean_object* v___x_4664_; uint8_t v_isShared_4665_; uint8_t v_isSharedCheck_4669_; 
lean_dec_ref(v_expectedType_4457_);
lean_dec_ref(v_inst_4456_);
v_a_4662_ = lean_ctor_get(v___x_4638_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v___x_4638_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4664_ = v___x_4638_;
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
else
{
lean_inc(v_a_4662_);
lean_dec(v___x_4638_);
v___x_4664_ = lean_box(0);
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
v_resetjp_4663_:
{
lean_object* v___x_4667_; 
if (v_isShared_4665_ == 0)
{
v___x_4667_ = v___x_4664_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v_a_4662_);
v___x_4667_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
return v___x_4667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13(lean_object* v_inst_4853_, lean_object* v_expectedType_4854_, uint8_t v_compile_4855_, uint8_t v_logCompileErrors_4856_, uint8_t v_isMeta_4857_, uint8_t v_exposeAux_4858_, lean_object* v_val_4859_, uint8_t v_isEta_4860_, lean_object* v_x_4861_, lean_object* v_x_4862_, lean_object* v_x_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_){
_start:
{
lean_object* v___y_4870_; lean_object* v___y_4871_; lean_object* v___y_4872_; lean_object* v___y_4873_; lean_object* v___y_4893_; lean_object* v___y_4894_; lean_object* v___y_4895_; lean_object* v___y_4896_; lean_object* v___y_4910_; lean_object* v___y_4911_; lean_object* v___y_4912_; lean_object* v___y_4913_; lean_object* v___y_4914_; uint8_t v___y_4915_; lean_object* v___y_4954_; lean_object* v___y_4955_; lean_object* v___y_4956_; lean_object* v___y_4957_; lean_object* v___y_4958_; lean_object* v___y_4959_; lean_object* v___y_4973_; lean_object* v___y_4974_; lean_object* v___y_4975_; lean_object* v___y_4976_; lean_object* v___y_4977_; lean_object* v___y_4978_; lean_object* v___y_4979_; uint8_t v___y_4980_; lean_object* v___y_5014_; uint8_t v___y_5015_; lean_object* v___y_5016_; lean_object* v___y_5017_; lean_object* v___y_5018_; lean_object* v___y_5019_; lean_object* v___y_5031_; lean_object* v___y_5032_; lean_object* v___y_5033_; lean_object* v___y_5034_; 
if (lean_obj_tag(v_x_4861_) == 5)
{
lean_object* v_fn_5067_; lean_object* v_arg_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; 
v_fn_5067_ = lean_ctor_get(v_x_4861_, 0);
lean_inc_ref(v_fn_5067_);
v_arg_5068_ = lean_ctor_get(v_x_4861_, 1);
lean_inc_ref(v_arg_5068_);
lean_dec_ref_known(v_x_4861_, 2);
v___x_5069_ = lean_array_set(v_x_4862_, v_x_4863_, v_arg_5068_);
v___x_5070_ = lean_unsigned_to_nat(1u);
v___x_5071_ = lean_nat_sub(v_x_4863_, v___x_5070_);
v___x_5072_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17(v_inst_4853_, v_expectedType_4854_, v_compile_4855_, v_logCompileErrors_4856_, v_isMeta_4857_, v_exposeAux_4858_, v_isEta_4860_, v_val_4859_, v_fn_5067_, v___x_5069_, v___x_5071_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
return v___x_5072_;
}
else
{
lean_object* v_cls_5073_; lean_object* v___y_5075_; lean_object* v___y_5076_; lean_object* v___y_5077_; lean_object* v___y_5078_; lean_object* v___x_5097_; 
v_cls_5073_ = ((lean_object*)(l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_));
v___x_5097_ = l_Lean_Expr_constName_x3f(v_x_4861_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec(v_val_4859_);
v___y_5075_ = v___y_4864_;
v___y_5076_ = v___y_4865_;
v___y_5077_ = v___y_4866_;
v___y_5078_ = v___y_4867_;
goto v___jp_5074_;
}
else
{
lean_object* v_val_5098_; lean_object* v___x_5100_; uint8_t v_isShared_5101_; uint8_t v_isSharedCheck_5249_; 
v_val_5098_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5249_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5249_ == 0)
{
v___x_5100_ = v___x_5097_;
v_isShared_5101_ = v_isSharedCheck_5249_;
goto v_resetjp_5099_;
}
else
{
lean_inc(v_val_5098_);
lean_dec(v___x_5097_);
v___x_5100_ = lean_box(0);
v_isShared_5101_ = v_isSharedCheck_5249_;
goto v_resetjp_5099_;
}
v_resetjp_5099_:
{
lean_object* v___x_5102_; 
v___x_5102_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6(v_val_5098_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
if (lean_obj_tag(v___x_5102_) == 0)
{
lean_object* v_a_5103_; 
v_a_5103_ = lean_ctor_get(v___x_5102_, 0);
lean_inc(v_a_5103_);
lean_dec_ref_known(v___x_5102_, 1);
if (lean_obj_tag(v_a_5103_) == 6)
{
lean_object* v_val_5104_; lean_object* v___x_5105_; 
lean_dec_ref(v_inst_4853_);
v_val_5104_ = lean_ctor_get(v_a_5103_, 0);
lean_inc_ref(v_val_5104_);
lean_dec_ref_known(v_a_5103_, 1);
lean_inc(v___y_4867_);
lean_inc_ref(v___y_4866_);
lean_inc(v___y_4865_);
lean_inc_ref(v___y_4864_);
lean_inc_ref(v_x_4861_);
v___x_5105_ = lean_infer_type(v_x_4861_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
if (lean_obj_tag(v___x_5105_) == 0)
{
lean_object* v_a_5106_; uint8_t v___x_5107_; lean_object* v___x_5108_; 
v_a_5106_ = lean_ctor_get(v___x_5105_, 0);
lean_inc(v_a_5106_);
lean_dec_ref_known(v___x_5105_, 1);
v___x_5107_ = 0;
v___x_5108_ = l_Lean_Meta_forallMetaTelescope(v_a_5106_, v___x_5107_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
if (lean_obj_tag(v___x_5108_) == 0)
{
lean_object* v_a_5109_; lean_object* v_snd_5110_; lean_object* v_fst_5111_; lean_object* v___x_5113_; uint8_t v_isShared_5114_; uint8_t v_isSharedCheck_5224_; 
v_a_5109_ = lean_ctor_get(v___x_5108_, 0);
lean_inc(v_a_5109_);
lean_dec_ref_known(v___x_5108_, 1);
v_snd_5110_ = lean_ctor_get(v_a_5109_, 1);
v_fst_5111_ = lean_ctor_get(v_a_5109_, 0);
v_isSharedCheck_5224_ = !lean_is_exclusive(v_a_5109_);
if (v_isSharedCheck_5224_ == 0)
{
v___x_5113_ = v_a_5109_;
v_isShared_5114_ = v_isSharedCheck_5224_;
goto v_resetjp_5112_;
}
else
{
lean_inc(v_snd_5110_);
lean_inc(v_fst_5111_);
lean_dec(v_a_5109_);
v___x_5113_ = lean_box(0);
v_isShared_5114_ = v_isSharedCheck_5224_;
goto v_resetjp_5112_;
}
v_resetjp_5112_:
{
lean_object* v_snd_5115_; lean_object* v___x_5117_; uint8_t v_isShared_5118_; uint8_t v_isSharedCheck_5222_; 
v_snd_5115_ = lean_ctor_get(v_snd_5110_, 1);
v_isSharedCheck_5222_ = !lean_is_exclusive(v_snd_5110_);
if (v_isSharedCheck_5222_ == 0)
{
lean_object* v_unused_5223_; 
v_unused_5223_ = lean_ctor_get(v_snd_5110_, 0);
lean_dec(v_unused_5223_);
v___x_5117_ = v_snd_5110_;
v_isShared_5118_ = v_isSharedCheck_5222_;
goto v_resetjp_5116_;
}
else
{
lean_inc(v_snd_5115_);
lean_dec(v_snd_5110_);
v___x_5117_ = lean_box(0);
v_isShared_5118_ = v_isSharedCheck_5222_;
goto v_resetjp_5116_;
}
v_resetjp_5116_:
{
lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___y_5122_; lean_object* v___y_5123_; lean_object* v___y_5124_; lean_object* v___y_5125_; uint8_t v___x_5174_; 
v___x_5119_ = lean_array_get_size(v_x_4862_);
v___x_5120_ = lean_array_get_size(v_fst_5111_);
v___x_5174_ = lean_nat_dec_eq(v___x_5119_, v___x_5120_);
if (v___x_5174_ == 0)
{
lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5178_; 
lean_del_object(v___x_5117_);
lean_dec(v_snd_5115_);
lean_dec(v_fst_5111_);
lean_dec_ref(v_val_5104_);
lean_del_object(v___x_5100_);
lean_dec(v_val_4859_);
lean_dec_ref(v_expectedType_4854_);
v___x_5175_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__3);
v___x_5176_ = l_Lean_MessageData_ofExpr(v_x_4861_);
if (v_isShared_5114_ == 0)
{
lean_ctor_set_tag(v___x_5113_, 7);
lean_ctor_set(v___x_5113_, 1, v___x_5176_);
lean_ctor_set(v___x_5113_, 0, v___x_5175_);
v___x_5178_ = v___x_5113_;
goto v_reusejp_5177_;
}
else
{
lean_object* v_reuseFailAlloc_5187_; 
v_reuseFailAlloc_5187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5187_, 0, v___x_5175_);
lean_ctor_set(v_reuseFailAlloc_5187_, 1, v___x_5176_);
v___x_5178_ = v_reuseFailAlloc_5187_;
goto v_reusejp_5177_;
}
v_reusejp_5177_:
{
lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5179_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__7___closed__3);
v___x_5180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5180_, 0, v___x_5178_);
lean_ctor_set(v___x_5180_, 1, v___x_5179_);
v___x_5181_ = lean_array_to_list(v_x_4862_);
v___x_5182_ = lean_box(0);
v___x_5183_ = l_List_mapTR_loop___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__12(v___x_5181_, v___x_5182_);
v___x_5184_ = l_Lean_MessageData_ofList(v___x_5183_);
v___x_5185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5185_, 0, v___x_5180_);
lean_ctor_set(v___x_5185_, 1, v___x_5184_);
v___x_5186_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v___x_5185_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
return v___x_5186_;
}
}
else
{
uint8_t v___x_5188_; lean_object* v___x_5189_; 
v___x_5188_ = 0;
lean_inc_ref(v_expectedType_4854_);
v___x_5189_ = l_Lean_Meta_isExprDefEq(v_expectedType_4854_, v_snd_5115_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
if (lean_obj_tag(v___x_5189_) == 0)
{
lean_object* v_a_5190_; uint8_t v___x_5191_; 
v_a_5190_ = lean_ctor_get(v___x_5189_, 0);
lean_inc(v_a_5190_);
lean_dec_ref_known(v___x_5189_, 1);
v___x_5191_ = lean_unbox(v_a_5190_);
lean_dec(v_a_5190_);
if (v___x_5191_ == 0)
{
lean_object* v_toConstantVal_5192_; lean_object* v_name_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5197_; 
lean_del_object(v___x_5117_);
lean_dec(v_fst_5111_);
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec(v_val_4859_);
v_toConstantVal_5192_ = lean_ctor_get(v_val_5104_, 0);
lean_inc_ref(v_toConstantVal_5192_);
lean_dec_ref(v_val_5104_);
v_name_5193_ = lean_ctor_get(v_toConstantVal_5192_, 0);
lean_inc(v_name_5193_);
lean_dec_ref(v_toConstantVal_5192_);
v___x_5194_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__5);
v___x_5195_ = l_Lean_MessageData_ofExpr(v_expectedType_4854_);
if (v_isShared_5114_ == 0)
{
lean_ctor_set_tag(v___x_5113_, 7);
lean_ctor_set(v___x_5113_, 1, v___x_5195_);
lean_ctor_set(v___x_5113_, 0, v___x_5194_);
v___x_5197_ = v___x_5113_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5213_; 
v_reuseFailAlloc_5213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5213_, 0, v___x_5194_);
lean_ctor_set(v_reuseFailAlloc_5213_, 1, v___x_5195_);
v___x_5197_ = v_reuseFailAlloc_5213_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v_a_5205_; lean_object* v___x_5207_; uint8_t v_isShared_5208_; uint8_t v_isSharedCheck_5212_; 
v___x_5198_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__7);
v___x_5199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5197_);
lean_ctor_set(v___x_5199_, 1, v___x_5198_);
v___x_5200_ = l_Lean_MessageData_ofConstName(v_name_5193_, v___x_5188_);
v___x_5201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5201_, 0, v___x_5199_);
lean_ctor_set(v___x_5201_, 1, v___x_5200_);
v___x_5202_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__7);
v___x_5203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5203_, 0, v___x_5201_);
lean_ctor_set(v___x_5203_, 1, v___x_5202_);
v___x_5204_ = l_Lean_throwError___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getFieldOrigin_spec__1___redArg(v___x_5203_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
v_a_5205_ = lean_ctor_get(v___x_5204_, 0);
v_isSharedCheck_5212_ = !lean_is_exclusive(v___x_5204_);
if (v_isSharedCheck_5212_ == 0)
{
v___x_5207_ = v___x_5204_;
v_isShared_5208_ = v_isSharedCheck_5212_;
goto v_resetjp_5206_;
}
else
{
lean_inc(v_a_5205_);
lean_dec(v___x_5204_);
v___x_5207_ = lean_box(0);
v_isShared_5208_ = v_isSharedCheck_5212_;
goto v_resetjp_5206_;
}
v_resetjp_5206_:
{
lean_object* v___x_5210_; 
if (v_isShared_5208_ == 0)
{
v___x_5210_ = v___x_5207_;
goto v_reusejp_5209_;
}
else
{
lean_object* v_reuseFailAlloc_5211_; 
v_reuseFailAlloc_5211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5211_, 0, v_a_5205_);
v___x_5210_ = v_reuseFailAlloc_5211_;
goto v_reusejp_5209_;
}
v_reusejp_5209_:
{
return v___x_5210_;
}
}
}
}
else
{
lean_del_object(v___x_5113_);
v___y_5122_ = v___y_4864_;
v___y_5123_ = v___y_4865_;
v___y_5124_ = v___y_4866_;
v___y_5125_ = v___y_4867_;
goto v___jp_5121_;
}
}
else
{
lean_object* v_a_5214_; lean_object* v___x_5216_; uint8_t v_isShared_5217_; uint8_t v_isSharedCheck_5221_; 
lean_del_object(v___x_5117_);
lean_del_object(v___x_5113_);
lean_dec(v_fst_5111_);
lean_dec_ref(v_val_5104_);
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec(v_val_4859_);
lean_dec_ref(v_expectedType_4854_);
v_a_5214_ = lean_ctor_get(v___x_5189_, 0);
v_isSharedCheck_5221_ = !lean_is_exclusive(v___x_5189_);
if (v_isSharedCheck_5221_ == 0)
{
v___x_5216_ = v___x_5189_;
v_isShared_5217_ = v_isSharedCheck_5221_;
goto v_resetjp_5215_;
}
else
{
lean_inc(v_a_5214_);
lean_dec(v___x_5189_);
v___x_5216_ = lean_box(0);
v_isShared_5217_ = v_isSharedCheck_5221_;
goto v_resetjp_5215_;
}
v_resetjp_5215_:
{
lean_object* v___x_5219_; 
if (v_isShared_5217_ == 0)
{
v___x_5219_ = v___x_5216_;
goto v_reusejp_5218_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v_a_5214_);
v___x_5219_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5218_;
}
v_reusejp_5218_:
{
return v___x_5219_;
}
}
}
}
v___jp_5121_:
{
lean_object* v_numParams_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5130_; 
v_numParams_5126_ = lean_ctor_get(v_val_5104_, 3);
lean_inc(v_numParams_5126_);
lean_dec_ref(v_val_5104_);
v___x_5127_ = lean_box(0);
v___x_5128_ = lean_box(v_isEta_4860_);
if (v_isShared_5118_ == 0)
{
lean_ctor_set(v___x_5117_, 1, v___x_5128_);
lean_ctor_set(v___x_5117_, 0, v___x_5127_);
v___x_5130_ = v___x_5117_;
goto v_reusejp_5129_;
}
else
{
lean_object* v_reuseFailAlloc_5173_; 
v_reuseFailAlloc_5173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5173_, 0, v___x_5127_);
lean_ctor_set(v_reuseFailAlloc_5173_, 1, v___x_5128_);
v___x_5130_ = v_reuseFailAlloc_5173_;
goto v_reusejp_5129_;
}
v_reusejp_5129_:
{
lean_object* v___x_5131_; 
v___x_5131_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg(v___x_5119_, v_fst_5111_, v_x_4862_, v_compile_4855_, v_logCompileErrors_4856_, v_isMeta_4857_, v___x_5119_, v___x_5120_, v_exposeAux_4858_, v_val_4859_, v_expectedType_4854_, v_numParams_5126_, v___x_5130_, v___y_5122_, v___y_5123_, v___y_5124_, v___y_5125_);
lean_dec_ref(v_x_4862_);
if (lean_obj_tag(v___x_5131_) == 0)
{
lean_object* v_a_5132_; lean_object* v___x_5134_; uint8_t v_isShared_5135_; uint8_t v_isSharedCheck_5164_; 
v_a_5132_ = lean_ctor_get(v___x_5131_, 0);
v_isSharedCheck_5164_ = !lean_is_exclusive(v___x_5131_);
if (v_isSharedCheck_5164_ == 0)
{
v___x_5134_ = v___x_5131_;
v_isShared_5135_ = v_isSharedCheck_5164_;
goto v_resetjp_5133_;
}
else
{
lean_inc(v_a_5132_);
lean_dec(v___x_5131_);
v___x_5134_ = lean_box(0);
v_isShared_5135_ = v_isSharedCheck_5164_;
goto v_resetjp_5133_;
}
v_resetjp_5133_:
{
lean_object* v_fst_5136_; 
v_fst_5136_ = lean_ctor_get(v_a_5132_, 0);
lean_inc(v_fst_5136_);
lean_dec(v_a_5132_);
if (lean_obj_tag(v_fst_5136_) == 0)
{
size_t v_sz_5137_; size_t v___x_5138_; lean_object* v___x_5139_; 
lean_del_object(v___x_5134_);
v_sz_5137_ = lean_array_size(v_fst_5111_);
v___x_5138_ = ((size_t)0ULL);
v___x_5139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__8(v_sz_5137_, v___x_5138_, v_fst_5111_, v___y_5122_, v___y_5123_, v___y_5124_, v___y_5125_);
if (lean_obj_tag(v___x_5139_) == 0)
{
lean_object* v_a_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5151_; 
v_a_5140_ = lean_ctor_get(v___x_5139_, 0);
v_isSharedCheck_5151_ = !lean_is_exclusive(v___x_5139_);
if (v_isSharedCheck_5151_ == 0)
{
v___x_5142_ = v___x_5139_;
v_isShared_5143_ = v_isSharedCheck_5151_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_a_5140_);
lean_dec(v___x_5139_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5151_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5144_; lean_object* v___x_5146_; 
v___x_5144_ = l_Lean_mkAppN(v_x_4861_, v_a_5140_);
lean_dec(v_a_5140_);
if (v_isShared_5101_ == 0)
{
lean_ctor_set(v___x_5100_, 0, v___x_5144_);
v___x_5146_ = v___x_5100_;
goto v_reusejp_5145_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v___x_5144_);
v___x_5146_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5145_;
}
v_reusejp_5145_:
{
lean_object* v___x_5148_; 
if (v_isShared_5143_ == 0)
{
lean_ctor_set(v___x_5142_, 0, v___x_5146_);
v___x_5148_ = v___x_5142_;
goto v_reusejp_5147_;
}
else
{
lean_object* v_reuseFailAlloc_5149_; 
v_reuseFailAlloc_5149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5149_, 0, v___x_5146_);
v___x_5148_ = v_reuseFailAlloc_5149_;
goto v_reusejp_5147_;
}
v_reusejp_5147_:
{
return v___x_5148_;
}
}
}
}
else
{
lean_object* v_a_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5159_; 
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4861_);
v_a_5152_ = lean_ctor_get(v___x_5139_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v___x_5139_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5154_ = v___x_5139_;
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_a_5152_);
lean_dec(v___x_5139_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v___x_5157_; 
if (v_isShared_5155_ == 0)
{
v___x_5157_ = v___x_5154_;
goto v_reusejp_5156_;
}
else
{
lean_object* v_reuseFailAlloc_5158_; 
v_reuseFailAlloc_5158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5158_, 0, v_a_5152_);
v___x_5157_ = v_reuseFailAlloc_5158_;
goto v_reusejp_5156_;
}
v_reusejp_5156_:
{
return v___x_5157_;
}
}
}
}
else
{
lean_object* v_val_5160_; lean_object* v___x_5162_; 
lean_dec(v_fst_5111_);
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4861_);
v_val_5160_ = lean_ctor_get(v_fst_5136_, 0);
lean_inc(v_val_5160_);
lean_dec_ref_known(v_fst_5136_, 1);
if (v_isShared_5135_ == 0)
{
lean_ctor_set(v___x_5134_, 0, v_val_5160_);
v___x_5162_ = v___x_5134_;
goto v_reusejp_5161_;
}
else
{
lean_object* v_reuseFailAlloc_5163_; 
v_reuseFailAlloc_5163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5163_, 0, v_val_5160_);
v___x_5162_ = v_reuseFailAlloc_5163_;
goto v_reusejp_5161_;
}
v_reusejp_5161_:
{
return v___x_5162_;
}
}
}
}
else
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5172_; 
lean_dec(v_fst_5111_);
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4861_);
v_a_5165_ = lean_ctor_get(v___x_5131_, 0);
v_isSharedCheck_5172_ = !lean_is_exclusive(v___x_5131_);
if (v_isSharedCheck_5172_ == 0)
{
v___x_5167_ = v___x_5131_;
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5131_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5170_; 
if (v_isShared_5168_ == 0)
{
v___x_5170_ = v___x_5167_;
goto v_reusejp_5169_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v_a_5165_);
v___x_5170_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5169_;
}
v_reusejp_5169_:
{
return v___x_5170_;
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
lean_object* v_a_5225_; lean_object* v___x_5227_; uint8_t v_isShared_5228_; uint8_t v_isSharedCheck_5232_; 
lean_dec_ref(v_val_5104_);
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec(v_val_4859_);
lean_dec_ref(v_expectedType_4854_);
v_a_5225_ = lean_ctor_get(v___x_5108_, 0);
v_isSharedCheck_5232_ = !lean_is_exclusive(v___x_5108_);
if (v_isSharedCheck_5232_ == 0)
{
v___x_5227_ = v___x_5108_;
v_isShared_5228_ = v_isSharedCheck_5232_;
goto v_resetjp_5226_;
}
else
{
lean_inc(v_a_5225_);
lean_dec(v___x_5108_);
v___x_5227_ = lean_box(0);
v_isShared_5228_ = v_isSharedCheck_5232_;
goto v_resetjp_5226_;
}
v_resetjp_5226_:
{
lean_object* v___x_5230_; 
if (v_isShared_5228_ == 0)
{
v___x_5230_ = v___x_5227_;
goto v_reusejp_5229_;
}
else
{
lean_object* v_reuseFailAlloc_5231_; 
v_reuseFailAlloc_5231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5231_, 0, v_a_5225_);
v___x_5230_ = v_reuseFailAlloc_5231_;
goto v_reusejp_5229_;
}
v_reusejp_5229_:
{
return v___x_5230_;
}
}
}
}
else
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5240_; 
lean_dec_ref(v_val_5104_);
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec(v_val_4859_);
lean_dec_ref(v_expectedType_4854_);
v_a_5233_ = lean_ctor_get(v___x_5105_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5105_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5235_ = v___x_5105_;
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5105_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5238_; 
if (v_isShared_5236_ == 0)
{
v___x_5238_ = v___x_5235_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_a_5233_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
return v___x_5238_;
}
}
}
}
else
{
lean_dec(v_a_5103_);
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec(v_val_4859_);
v___y_5075_ = v___y_4864_;
v___y_5076_ = v___y_4865_;
v___y_5077_ = v___y_4866_;
v___y_5078_ = v___y_4867_;
goto v___jp_5074_;
}
}
else
{
lean_object* v_a_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5248_; 
lean_del_object(v___x_5100_);
lean_dec_ref(v_x_4862_);
lean_dec_ref(v_x_4861_);
lean_dec(v_val_4859_);
lean_dec_ref(v_expectedType_4854_);
lean_dec_ref(v_inst_4853_);
v_a_5241_ = lean_ctor_get(v___x_5102_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5102_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5243_ = v___x_5102_;
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_a_5241_);
lean_dec(v___x_5102_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
lean_object* v___x_5246_; 
if (v_isShared_5244_ == 0)
{
v___x_5246_ = v___x_5243_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v_a_5241_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
return v___x_5246_;
}
}
}
}
}
v___jp_5074_:
{
lean_object* v_toCold_5079_; lean_object* v_options_5080_; uint8_t v_hasTrace_5081_; 
v_toCold_5079_ = lean_ctor_get(v___y_5077_, 0);
v_options_5080_ = lean_ctor_get(v_toCold_5079_, 2);
v_hasTrace_5081_ = lean_ctor_get_uint8(v_options_5080_, sizeof(void*)*1);
if (v_hasTrace_5081_ == 0)
{
v___y_5031_ = v___y_5075_;
v___y_5032_ = v___y_5076_;
v___y_5033_ = v___y_5077_;
v___y_5034_ = v___y_5078_;
goto v___jp_5030_;
}
else
{
lean_object* v_inheritedTraceOptions_5082_; lean_object* v___x_5083_; uint8_t v___x_5084_; 
v_inheritedTraceOptions_5082_ = lean_ctor_get(v_toCold_5079_, 11);
v___x_5083_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__3);
v___x_5084_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5082_, v_options_5080_, v___x_5083_);
if (v___x_5084_ == 0)
{
v___y_5031_ = v___y_5075_;
v___y_5032_ = v___y_5076_;
v___y_5033_ = v___y_5077_;
v___y_5034_ = v___y_5078_;
goto v___jp_5030_;
}
else
{
lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; 
v___x_5085_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___closed__1);
lean_inc_ref(v_inst_4853_);
v___x_5086_ = l_Lean_MessageData_ofExpr(v_inst_4853_);
v___x_5087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5087_, 0, v___x_5085_);
lean_ctor_set(v___x_5087_, 1, v___x_5086_);
v___x_5088_ = l_Lean_addTrace___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__5(v_cls_5073_, v___x_5087_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_);
if (lean_obj_tag(v___x_5088_) == 0)
{
lean_dec_ref_known(v___x_5088_, 1);
v___y_5031_ = v___y_5075_;
v___y_5032_ = v___y_5076_;
v___y_5033_ = v___y_5077_;
v___y_5034_ = v___y_5078_;
goto v___jp_5030_;
}
else
{
lean_object* v_a_5089_; lean_object* v___x_5091_; uint8_t v_isShared_5092_; uint8_t v_isSharedCheck_5096_; 
lean_dec_ref(v_expectedType_4854_);
lean_dec_ref(v_inst_4853_);
v_a_5089_ = lean_ctor_get(v___x_5088_, 0);
v_isSharedCheck_5096_ = !lean_is_exclusive(v___x_5088_);
if (v_isSharedCheck_5096_ == 0)
{
v___x_5091_ = v___x_5088_;
v_isShared_5092_ = v_isSharedCheck_5096_;
goto v_resetjp_5090_;
}
else
{
lean_inc(v_a_5089_);
lean_dec(v___x_5088_);
v___x_5091_ = lean_box(0);
v_isShared_5092_ = v_isSharedCheck_5096_;
goto v_resetjp_5090_;
}
v_resetjp_5090_:
{
lean_object* v___x_5094_; 
if (v_isShared_5092_ == 0)
{
v___x_5094_ = v___x_5091_;
goto v_reusejp_5093_;
}
else
{
lean_object* v_reuseFailAlloc_5095_; 
v_reuseFailAlloc_5095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5095_, 0, v_a_5089_);
v___x_5094_ = v_reuseFailAlloc_5095_;
goto v_reusejp_5093_;
}
v_reusejp_5093_:
{
return v___x_5094_;
}
}
}
}
}
}
}
v___jp_4869_:
{
lean_object* v___x_4874_; 
v___x_4874_ = l_Lean_enableRealizationsForConst(v___y_4870_, v___y_4872_, v___y_4873_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_object* v___x_4876_; uint8_t v_isShared_4877_; uint8_t v_isSharedCheck_4882_; 
v_isSharedCheck_4882_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4882_ == 0)
{
lean_object* v_unused_4883_; 
v_unused_4883_ = lean_ctor_get(v___x_4874_, 0);
lean_dec(v_unused_4883_);
v___x_4876_ = v___x_4874_;
v_isShared_4877_ = v_isSharedCheck_4882_;
goto v_resetjp_4875_;
}
else
{
lean_dec(v___x_4874_);
v___x_4876_ = lean_box(0);
v_isShared_4877_ = v_isSharedCheck_4882_;
goto v_resetjp_4875_;
}
v_resetjp_4875_:
{
lean_object* v___x_4878_; lean_object* v___x_4880_; 
v___x_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4878_, 0, v___y_4871_);
if (v_isShared_4877_ == 0)
{
lean_ctor_set(v___x_4876_, 0, v___x_4878_);
v___x_4880_ = v___x_4876_;
goto v_reusejp_4879_;
}
else
{
lean_object* v_reuseFailAlloc_4881_; 
v_reuseFailAlloc_4881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4881_, 0, v___x_4878_);
v___x_4880_ = v_reuseFailAlloc_4881_;
goto v_reusejp_4879_;
}
v_reusejp_4879_:
{
return v___x_4880_;
}
}
}
else
{
lean_object* v_a_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4891_; 
lean_dec_ref(v___y_4871_);
v_a_4884_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_4891_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4891_ == 0)
{
v___x_4886_ = v___x_4874_;
v_isShared_4887_ = v_isSharedCheck_4891_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_a_4884_);
lean_dec(v___x_4874_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4891_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___x_4889_; 
if (v_isShared_4887_ == 0)
{
v___x_4889_ = v___x_4886_;
goto v_reusejp_4888_;
}
else
{
lean_object* v_reuseFailAlloc_4890_; 
v_reuseFailAlloc_4890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4890_, 0, v_a_4884_);
v___x_4889_ = v_reuseFailAlloc_4890_;
goto v_reusejp_4888_;
}
v_reusejp_4888_:
{
return v___x_4889_;
}
}
}
}
v___jp_4892_:
{
if (v_compile_4855_ == 0)
{
v___y_4870_ = v___y_4893_;
v___y_4871_ = v___y_4894_;
v___y_4872_ = v___y_4895_;
v___y_4873_ = v___y_4896_;
goto v___jp_4869_;
}
else
{
lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4897_ = lean_unsigned_to_nat(1u);
v___x_4898_ = lean_mk_empty_array_with_capacity(v___x_4897_);
lean_inc(v___y_4893_);
v___x_4899_ = lean_array_push(v___x_4898_, v___y_4893_);
v___x_4900_ = l_Lean_compileDecls(v___x_4899_, v_logCompileErrors_4856_, v___y_4895_, v___y_4896_);
if (lean_obj_tag(v___x_4900_) == 0)
{
lean_dec_ref_known(v___x_4900_, 1);
v___y_4870_ = v___y_4893_;
v___y_4871_ = v___y_4894_;
v___y_4872_ = v___y_4895_;
v___y_4873_ = v___y_4896_;
goto v___jp_4869_;
}
else
{
lean_object* v_a_4901_; lean_object* v___x_4903_; uint8_t v_isShared_4904_; uint8_t v_isSharedCheck_4908_; 
lean_dec_ref(v___y_4894_);
lean_dec(v___y_4893_);
v_a_4901_ = lean_ctor_get(v___x_4900_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4900_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4903_ = v___x_4900_;
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
else
{
lean_inc(v_a_4901_);
lean_dec(v___x_4900_);
v___x_4903_ = lean_box(0);
v_isShared_4904_ = v_isSharedCheck_4908_;
goto v_resetjp_4902_;
}
v_resetjp_4902_:
{
lean_object* v___x_4906_; 
if (v_isShared_4904_ == 0)
{
v___x_4906_ = v___x_4903_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v_a_4901_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
return v___x_4906_;
}
}
}
}
}
v___jp_4909_:
{
lean_object* v___x_4916_; 
lean_inc(v___y_4911_);
v___x_4916_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg(v___y_4911_, v___y_4915_, v___y_4912_, v___y_4910_);
lean_dec_ref(v___x_4916_);
if (v_isMeta_4857_ == 0)
{
v___y_4893_ = v___y_4911_;
v___y_4894_ = v___y_4914_;
v___y_4895_ = v___y_4913_;
v___y_4896_ = v___y_4910_;
goto v___jp_4892_;
}
else
{
lean_object* v___x_4917_; lean_object* v_env_4918_; lean_object* v_nextMacroScope_4919_; lean_object* v_ngen_4920_; lean_object* v_auxDeclNGen_4921_; lean_object* v_traceState_4922_; lean_object* v_recordedDeps_4923_; lean_object* v_messages_4924_; lean_object* v_infoState_4925_; lean_object* v_snapshotTasks_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_4951_; 
v___x_4917_ = lean_st_ref_take(v___y_4910_);
v_env_4918_ = lean_ctor_get(v___x_4917_, 0);
v_nextMacroScope_4919_ = lean_ctor_get(v___x_4917_, 1);
v_ngen_4920_ = lean_ctor_get(v___x_4917_, 2);
v_auxDeclNGen_4921_ = lean_ctor_get(v___x_4917_, 3);
v_traceState_4922_ = lean_ctor_get(v___x_4917_, 4);
v_recordedDeps_4923_ = lean_ctor_get(v___x_4917_, 6);
v_messages_4924_ = lean_ctor_get(v___x_4917_, 7);
v_infoState_4925_ = lean_ctor_get(v___x_4917_, 8);
v_snapshotTasks_4926_ = lean_ctor_get(v___x_4917_, 9);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4917_);
if (v_isSharedCheck_4951_ == 0)
{
lean_object* v_unused_4952_; 
v_unused_4952_ = lean_ctor_get(v___x_4917_, 5);
lean_dec(v_unused_4952_);
v___x_4928_ = v___x_4917_;
v_isShared_4929_ = v_isSharedCheck_4951_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_snapshotTasks_4926_);
lean_inc(v_infoState_4925_);
lean_inc(v_messages_4924_);
lean_inc(v_recordedDeps_4923_);
lean_inc(v_traceState_4922_);
lean_inc(v_auxDeclNGen_4921_);
lean_inc(v_ngen_4920_);
lean_inc(v_nextMacroScope_4919_);
lean_inc(v_env_4918_);
lean_dec(v___x_4917_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_4951_;
goto v_resetjp_4927_;
}
v_resetjp_4927_:
{
lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4933_; 
lean_inc(v___y_4911_);
v___x_4930_ = l_Lean_markMeta(v_env_4918_, v___y_4911_);
v___x_4931_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__1);
if (v_isShared_4929_ == 0)
{
lean_ctor_set(v___x_4928_, 5, v___x_4931_);
lean_ctor_set(v___x_4928_, 0, v___x_4930_);
v___x_4933_ = v___x_4928_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v___x_4930_);
lean_ctor_set(v_reuseFailAlloc_4950_, 1, v_nextMacroScope_4919_);
lean_ctor_set(v_reuseFailAlloc_4950_, 2, v_ngen_4920_);
lean_ctor_set(v_reuseFailAlloc_4950_, 3, v_auxDeclNGen_4921_);
lean_ctor_set(v_reuseFailAlloc_4950_, 4, v_traceState_4922_);
lean_ctor_set(v_reuseFailAlloc_4950_, 5, v___x_4931_);
lean_ctor_set(v_reuseFailAlloc_4950_, 6, v_recordedDeps_4923_);
lean_ctor_set(v_reuseFailAlloc_4950_, 7, v_messages_4924_);
lean_ctor_set(v_reuseFailAlloc_4950_, 8, v_infoState_4925_);
lean_ctor_set(v_reuseFailAlloc_4950_, 9, v_snapshotTasks_4926_);
v___x_4933_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v_mctx_4936_; lean_object* v_zetaDeltaFVarIds_4937_; lean_object* v_postponed_4938_; lean_object* v_diag_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4948_; 
v___x_4934_ = lean_st_ref_put(v___y_4910_, v___x_4933_);
v___x_4935_ = lean_st_ref_take(v___y_4912_);
v_mctx_4936_ = lean_ctor_get(v___x_4935_, 0);
v_zetaDeltaFVarIds_4937_ = lean_ctor_get(v___x_4935_, 2);
v_postponed_4938_ = lean_ctor_get(v___x_4935_, 3);
v_diag_4939_ = lean_ctor_get(v___x_4935_, 4);
v_isSharedCheck_4948_ = !lean_is_exclusive(v___x_4935_);
if (v_isSharedCheck_4948_ == 0)
{
lean_object* v_unused_4949_; 
v_unused_4949_ = lean_ctor_get(v___x_4935_, 1);
lean_dec(v_unused_4949_);
v___x_4941_ = v___x_4935_;
v_isShared_4942_ = v_isSharedCheck_4948_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_diag_4939_);
lean_inc(v_postponed_4938_);
lean_inc(v_zetaDeltaFVarIds_4937_);
lean_inc(v_mctx_4936_);
lean_dec(v___x_4935_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4948_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4943_; lean_object* v___x_4945_; 
v___x_4943_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__5);
if (v_isShared_4942_ == 0)
{
lean_ctor_set(v___x_4941_, 1, v___x_4943_);
v___x_4945_ = v___x_4941_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v_mctx_4936_);
lean_ctor_set(v_reuseFailAlloc_4947_, 1, v___x_4943_);
lean_ctor_set(v_reuseFailAlloc_4947_, 2, v_zetaDeltaFVarIds_4937_);
lean_ctor_set(v_reuseFailAlloc_4947_, 3, v_postponed_4938_);
lean_ctor_set(v_reuseFailAlloc_4947_, 4, v_diag_4939_);
v___x_4945_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
lean_object* v___x_4946_; 
v___x_4946_ = lean_st_ref_put(v___y_4912_, v___x_4945_);
v___y_4893_ = v___y_4911_;
v___y_4894_ = v___y_4914_;
v___y_4895_ = v___y_4913_;
v___y_4896_ = v___y_4910_;
goto v___jp_4892_;
}
}
}
}
}
}
v___jp_4953_:
{
if (lean_obj_tag(v___y_4959_) == 0)
{
lean_object* v_a_4960_; uint8_t v___x_4961_; 
v_a_4960_ = lean_ctor_get(v___y_4959_, 0);
lean_inc(v_a_4960_);
lean_dec_ref_known(v___y_4959_, 1);
v___x_4961_ = lean_unbox(v_a_4960_);
lean_dec(v_a_4960_);
if (v___x_4961_ == 0)
{
uint8_t v___x_4962_; 
v___x_4962_ = 1;
v___y_4910_ = v___y_4955_;
v___y_4911_ = v___y_4954_;
v___y_4912_ = v___y_4956_;
v___y_4913_ = v___y_4957_;
v___y_4914_ = v___y_4958_;
v___y_4915_ = v___x_4962_;
goto v___jp_4909_;
}
else
{
uint8_t v___x_4963_; 
v___x_4963_ = 3;
v___y_4910_ = v___y_4955_;
v___y_4911_ = v___y_4954_;
v___y_4912_ = v___y_4956_;
v___y_4913_ = v___y_4957_;
v___y_4914_ = v___y_4958_;
v___y_4915_ = v___x_4963_;
goto v___jp_4909_;
}
}
else
{
lean_object* v_a_4964_; lean_object* v___x_4966_; uint8_t v_isShared_4967_; uint8_t v_isSharedCheck_4971_; 
lean_dec_ref(v___y_4958_);
lean_dec(v___y_4954_);
v_a_4964_ = lean_ctor_get(v___y_4959_, 0);
v_isSharedCheck_4971_ = !lean_is_exclusive(v___y_4959_);
if (v_isSharedCheck_4971_ == 0)
{
v___x_4966_ = v___y_4959_;
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
else
{
lean_inc(v_a_4964_);
lean_dec(v___y_4959_);
v___x_4966_ = lean_box(0);
v_isShared_4967_ = v_isSharedCheck_4971_;
goto v_resetjp_4965_;
}
v_resetjp_4965_:
{
lean_object* v___x_4969_; 
if (v_isShared_4967_ == 0)
{
v___x_4969_ = v___x_4966_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v_a_4964_);
v___x_4969_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
return v___x_4969_;
}
}
}
}
v___jp_4972_:
{
lean_object* v___x_4981_; 
v___x_4981_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(v___y_4978_, v___y_4980_, v___y_4973_, v___y_4977_, v___y_4979_, v___y_4975_);
if (lean_obj_tag(v___x_4981_) == 0)
{
lean_object* v_a_4982_; lean_object* v___x_4983_; uint8_t v_transparency_4984_; uint8_t v___x_4985_; uint8_t v___x_4986_; 
v_a_4982_ = lean_ctor_get(v___x_4981_, 0);
lean_inc(v_a_4982_);
lean_dec_ref_known(v___x_4981_, 1);
v___x_4983_ = l_Lean_Meta_Context_config(v___y_4973_);
v_transparency_4984_ = lean_ctor_get_uint8(v___x_4983_, 9);
lean_dec_ref(v___x_4983_);
v___x_4985_ = 5;
v___x_4986_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4984_, v___x_4985_);
if (v___x_4986_ == 0)
{
lean_object* v_keyedConfig_4987_; uint8_t v_trackZetaDelta_4988_; lean_object* v_zetaDeltaSet_4989_; lean_object* v_lctx_4990_; lean_object* v_localInstances_4991_; lean_object* v_defEqCtx_x3f_4992_; lean_object* v_synthPendingDepth_4993_; lean_object* v_customCanUnfoldPredicate_x3f_4994_; uint8_t v_univApprox_4995_; uint8_t v_inTypeClassResolution_4996_; uint8_t v_cacheInferType_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; 
v_keyedConfig_4987_ = lean_ctor_get(v___y_4973_, 0);
v_trackZetaDelta_4988_ = lean_ctor_get_uint8(v___y_4973_, sizeof(void*)*7);
v_zetaDeltaSet_4989_ = lean_ctor_get(v___y_4973_, 1);
v_lctx_4990_ = lean_ctor_get(v___y_4973_, 2);
v_localInstances_4991_ = lean_ctor_get(v___y_4973_, 3);
v_defEqCtx_x3f_4992_ = lean_ctor_get(v___y_4973_, 4);
v_synthPendingDepth_4993_ = lean_ctor_get(v___y_4973_, 5);
v_customCanUnfoldPredicate_x3f_4994_ = lean_ctor_get(v___y_4973_, 6);
v_univApprox_4995_ = lean_ctor_get_uint8(v___y_4973_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4996_ = lean_ctor_get_uint8(v___y_4973_, sizeof(void*)*7 + 2);
v_cacheInferType_4997_ = lean_ctor_get_uint8(v___y_4973_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4987_);
v___x_4998_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4985_, v_keyedConfig_4987_);
lean_inc(v_customCanUnfoldPredicate_x3f_4994_);
lean_inc(v_synthPendingDepth_4993_);
lean_inc(v_defEqCtx_x3f_4992_);
lean_inc_ref(v_localInstances_4991_);
lean_inc_ref(v_lctx_4990_);
lean_inc(v_zetaDeltaSet_4989_);
v___x_4999_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4999_, 0, v___x_4998_);
lean_ctor_set(v___x_4999_, 1, v_zetaDeltaSet_4989_);
lean_ctor_set(v___x_4999_, 2, v_lctx_4990_);
lean_ctor_set(v___x_4999_, 3, v_localInstances_4991_);
lean_ctor_set(v___x_4999_, 4, v_defEqCtx_x3f_4992_);
lean_ctor_set(v___x_4999_, 5, v_synthPendingDepth_4993_);
lean_ctor_set(v___x_4999_, 6, v_customCanUnfoldPredicate_x3f_4994_);
lean_ctor_set_uint8(v___x_4999_, sizeof(void*)*7, v_trackZetaDelta_4988_);
lean_ctor_set_uint8(v___x_4999_, sizeof(void*)*7 + 1, v_univApprox_4995_);
lean_ctor_set_uint8(v___x_4999_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4996_);
lean_ctor_set_uint8(v___x_4999_, sizeof(void*)*7 + 3, v_cacheInferType_4997_);
v___x_5000_ = l_Lean_Meta_isExprDefEq(v_expectedType_4854_, v___y_4976_, v___x_4999_, v___y_4977_, v___y_4979_, v___y_4975_);
lean_dec_ref_known(v___x_4999_, 7);
v___y_4954_ = v___y_4974_;
v___y_4955_ = v___y_4975_;
v___y_4956_ = v___y_4977_;
v___y_4957_ = v___y_4979_;
v___y_4958_ = v_a_4982_;
v___y_4959_ = v___x_5000_;
goto v___jp_4953_;
}
else
{
lean_object* v___x_5001_; 
v___x_5001_ = l_Lean_Meta_isExprDefEq(v_expectedType_4854_, v___y_4976_, v___y_4973_, v___y_4977_, v___y_4979_, v___y_4975_);
v___y_4954_ = v___y_4974_;
v___y_4955_ = v___y_4975_;
v___y_4956_ = v___y_4977_;
v___y_4957_ = v___y_4979_;
v___y_4958_ = v_a_4982_;
v___y_4959_ = v___x_5001_;
goto v___jp_4953_;
}
}
else
{
lean_object* v_a_5002_; lean_object* v___x_5004_; uint8_t v_isShared_5005_; uint8_t v_isSharedCheck_5009_; 
lean_dec_ref(v___y_4976_);
lean_dec(v___y_4974_);
lean_dec_ref(v_expectedType_4854_);
v_a_5002_ = lean_ctor_get(v___x_4981_, 0);
v_isSharedCheck_5009_ = !lean_is_exclusive(v___x_4981_);
if (v_isSharedCheck_5009_ == 0)
{
v___x_5004_ = v___x_4981_;
v_isShared_5005_ = v_isSharedCheck_5009_;
goto v_resetjp_5003_;
}
else
{
lean_inc(v_a_5002_);
lean_dec(v___x_4981_);
v___x_5004_ = lean_box(0);
v_isShared_5005_ = v_isSharedCheck_5009_;
goto v_resetjp_5003_;
}
v_resetjp_5003_:
{
lean_object* v___x_5007_; 
if (v_isShared_5005_ == 0)
{
v___x_5007_ = v___x_5004_;
goto v_reusejp_5006_;
}
else
{
lean_object* v_reuseFailAlloc_5008_; 
v_reuseFailAlloc_5008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5008_, 0, v_a_5002_);
v___x_5007_ = v_reuseFailAlloc_5008_;
goto v_reusejp_5006_;
}
v_reusejp_5006_:
{
return v___x_5007_;
}
}
}
}
v___jp_5010_:
{
lean_object* v___x_5011_; lean_object* v___x_5012_; 
v___x_5011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5011_, 0, v_inst_4853_);
v___x_5012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5012_, 0, v___x_5011_);
return v___x_5012_;
}
v___jp_5013_:
{
lean_object* v___x_5020_; lean_object* v___x_5021_; uint8_t v___x_5022_; 
v___x_5020_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5018_);
v___x_5021_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_5022_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_5020_, v___x_5021_);
lean_dec_ref(v___x_5020_);
if (v___x_5022_ == 0)
{
lean_dec_ref(v___y_5014_);
lean_dec_ref(v_expectedType_4854_);
goto v___jp_5010_;
}
else
{
lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v_a_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; 
v___x_5023_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__3___closed__1));
v___x_5024_ = l_Lean_mkAuxDeclName___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__1___redArg(v___x_5023_, v___y_5019_);
v_a_5025_ = lean_ctor_get(v___x_5024_, 0);
lean_inc_n(v_a_5025_, 2);
lean_dec_ref(v___x_5024_);
v___x_5026_ = lean_box(v___y_5015_);
v___x_5027_ = lean_box(v___y_5015_);
v___x_5028_ = lean_box(v___x_5022_);
lean_inc_ref(v_expectedType_4854_);
v___x_5029_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxDefinition___boxed), 11, 6);
lean_closure_set(v___x_5029_, 0, v_a_5025_);
lean_closure_set(v___x_5029_, 1, v_expectedType_4854_);
lean_closure_set(v___x_5029_, 2, v_inst_4853_);
lean_closure_set(v___x_5029_, 3, v___x_5026_);
lean_closure_set(v___x_5029_, 4, v___x_5027_);
lean_closure_set(v___x_5029_, 5, v___x_5028_);
if (v_exposeAux_4858_ == 0)
{
v___y_4973_ = v___y_5016_;
v___y_4974_ = v_a_5025_;
v___y_4975_ = v___y_5019_;
v___y_4976_ = v___y_5014_;
v___y_4977_ = v___y_5017_;
v___y_4978_ = v___x_5029_;
v___y_4979_ = v___y_5018_;
v___y_4980_ = v___x_5022_;
goto v___jp_4972_;
}
else
{
v___y_4973_ = v___y_5016_;
v___y_4974_ = v_a_5025_;
v___y_4975_ = v___y_5019_;
v___y_4976_ = v___y_5014_;
v___y_4977_ = v___y_5017_;
v___y_4978_ = v___x_5029_;
v___y_4979_ = v___y_5018_;
v___y_4980_ = v___y_5015_;
goto v___jp_4972_;
}
}
}
v___jp_5030_:
{
lean_object* v___x_5035_; 
lean_inc(v___y_5034_);
lean_inc_ref(v___y_5033_);
lean_inc(v___y_5032_);
lean_inc_ref(v___y_5031_);
lean_inc_ref(v_inst_4853_);
v___x_5035_ = lean_infer_type(v_inst_4853_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_);
if (lean_obj_tag(v___x_5035_) == 0)
{
lean_object* v_a_5036_; lean_object* v___x_5037_; 
v_a_5036_ = lean_ctor_get(v___x_5035_, 0);
lean_inc_n(v_a_5036_, 2);
lean_dec_ref_known(v___x_5035_, 1);
lean_inc_ref(v_expectedType_4854_);
v___x_5037_ = l_Lean_Meta_isExprDefEq(v_expectedType_4854_, v_a_5036_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_);
if (lean_obj_tag(v___x_5037_) == 0)
{
lean_object* v_a_5038_; uint8_t v___x_5039_; 
v_a_5038_ = lean_ctor_get(v___x_5037_, 0);
lean_inc(v_a_5038_);
lean_dec_ref_known(v___x_5037_, 1);
v___x_5039_ = lean_unbox(v_a_5038_);
if (v___x_5039_ == 0)
{
lean_object* v___x_5040_; lean_object* v___x_5041_; uint8_t v___x_5042_; 
v___x_5040_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5033_);
v___x_5041_ = l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances;
v___x_5042_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_5040_, v___x_5041_);
lean_dec_ref(v___x_5040_);
if (v___x_5042_ == 0)
{
uint8_t v___x_5043_; 
v___x_5043_ = lean_unbox(v_a_5038_);
lean_dec(v_a_5038_);
v___y_5014_ = v_a_5036_;
v___y_5015_ = v___x_5043_;
v___y_5016_ = v___y_5031_;
v___y_5017_ = v___y_5032_;
v___y_5018_ = v___y_5033_;
v___y_5019_ = v___y_5034_;
goto v___jp_5013_;
}
else
{
lean_object* v___x_5044_; 
lean_inc_ref(v_inst_4853_);
v___x_5044_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_etaStructExpand_x3f(v_inst_4853_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_);
if (lean_obj_tag(v___x_5044_) == 0)
{
lean_object* v_a_5045_; 
v_a_5045_ = lean_ctor_get(v___x_5044_, 0);
lean_inc(v_a_5045_);
lean_dec_ref_known(v___x_5044_, 1);
if (lean_obj_tag(v_a_5045_) == 1)
{
lean_object* v_val_5046_; lean_object* v___x_5047_; 
v_val_5046_ = lean_ctor_get(v_a_5045_, 0);
lean_inc(v_val_5046_);
lean_dec_ref_known(v_a_5045_, 1);
lean_inc_ref(v_expectedType_4854_);
v___x_5047_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(v_compile_4855_, v_logCompileErrors_4856_, v_isMeta_4857_, v_exposeAux_4858_, v_val_5046_, v_expectedType_4854_, v___x_5042_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_);
if (lean_obj_tag(v___x_5047_) == 0)
{
lean_object* v_a_5048_; 
v_a_5048_ = lean_ctor_get(v___x_5047_, 0);
if (lean_obj_tag(v_a_5048_) == 1)
{
lean_dec(v_a_5038_);
lean_dec(v_a_5036_);
lean_dec_ref(v_expectedType_4854_);
lean_dec_ref(v_inst_4853_);
return v___x_5047_;
}
else
{
uint8_t v___x_5049_; 
lean_dec_ref_known(v___x_5047_, 1);
v___x_5049_ = lean_unbox(v_a_5038_);
lean_dec(v_a_5038_);
v___y_5014_ = v_a_5036_;
v___y_5015_ = v___x_5049_;
v___y_5016_ = v___y_5031_;
v___y_5017_ = v___y_5032_;
v___y_5018_ = v___y_5033_;
v___y_5019_ = v___y_5034_;
goto v___jp_5013_;
}
}
else
{
lean_dec(v_a_5038_);
lean_dec(v_a_5036_);
lean_dec_ref(v_expectedType_4854_);
lean_dec_ref(v_inst_4853_);
return v___x_5047_;
}
}
else
{
uint8_t v___x_5050_; 
lean_dec(v_a_5045_);
v___x_5050_ = lean_unbox(v_a_5038_);
lean_dec(v_a_5038_);
v___y_5014_ = v_a_5036_;
v___y_5015_ = v___x_5050_;
v___y_5016_ = v___y_5031_;
v___y_5017_ = v___y_5032_;
v___y_5018_ = v___y_5033_;
v___y_5019_ = v___y_5034_;
goto v___jp_5013_;
}
}
else
{
lean_dec(v_a_5038_);
lean_dec(v_a_5036_);
lean_dec_ref(v_expectedType_4854_);
lean_dec_ref(v_inst_4853_);
return v___x_5044_;
}
}
}
else
{
lean_dec(v_a_5038_);
lean_dec(v_a_5036_);
lean_dec_ref(v_expectedType_4854_);
goto v___jp_5010_;
}
}
else
{
lean_object* v_a_5051_; lean_object* v___x_5053_; uint8_t v_isShared_5054_; uint8_t v_isSharedCheck_5058_; 
lean_dec(v_a_5036_);
lean_dec_ref(v_expectedType_4854_);
lean_dec_ref(v_inst_4853_);
v_a_5051_ = lean_ctor_get(v___x_5037_, 0);
v_isSharedCheck_5058_ = !lean_is_exclusive(v___x_5037_);
if (v_isSharedCheck_5058_ == 0)
{
v___x_5053_ = v___x_5037_;
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
else
{
lean_inc(v_a_5051_);
lean_dec(v___x_5037_);
v___x_5053_ = lean_box(0);
v_isShared_5054_ = v_isSharedCheck_5058_;
goto v_resetjp_5052_;
}
v_resetjp_5052_:
{
lean_object* v___x_5056_; 
if (v_isShared_5054_ == 0)
{
v___x_5056_ = v___x_5053_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5057_; 
v_reuseFailAlloc_5057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5057_, 0, v_a_5051_);
v___x_5056_ = v_reuseFailAlloc_5057_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
return v___x_5056_;
}
}
}
}
else
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5066_; 
lean_dec_ref(v_expectedType_4854_);
lean_dec_ref(v_inst_4853_);
v_a_5059_ = lean_ctor_get(v___x_5035_, 0);
v_isSharedCheck_5066_ = !lean_is_exclusive(v___x_5035_);
if (v_isSharedCheck_5066_ == 0)
{
v___x_5061_ = v___x_5035_;
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v___x_5035_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5066_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v___x_5064_; 
if (v_isShared_5062_ == 0)
{
v___x_5064_ = v___x_5061_;
goto v_reusejp_5063_;
}
else
{
lean_object* v_reuseFailAlloc_5065_; 
v_reuseFailAlloc_5065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5065_, 0, v_a_5059_);
v___x_5064_ = v_reuseFailAlloc_5065_;
goto v_reusejp_5063_;
}
v_reusejp_5063_:
{
return v___x_5064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1(lean_object* v_inst_5250_, lean_object* v_expectedType_5251_, uint8_t v_compile_5252_, uint8_t v_logCompileErrors_5253_, uint8_t v_isMeta_5254_, uint8_t v_exposeAux_5255_, lean_object* v_val_5256_, uint8_t v_isEta_5257_, lean_object* v_____r_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_){
_start:
{
lean_object* v___x_5281_; 
lean_inc_ref(v_expectedType_5251_);
v___x_5281_ = l_Lean_Meta_isProp(v_expectedType_5251_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_);
if (lean_obj_tag(v___x_5281_) == 0)
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5324_; 
v_a_5282_ = lean_ctor_get(v___x_5281_, 0);
v_isSharedCheck_5324_ = !lean_is_exclusive(v___x_5281_);
if (v_isSharedCheck_5324_ == 0)
{
v___x_5284_ = v___x_5281_;
v_isShared_5285_ = v_isSharedCheck_5324_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5281_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5324_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
uint8_t v___x_5286_; 
v___x_5286_ = lean_unbox(v_a_5282_);
lean_dec(v_a_5282_);
if (v___x_5286_ == 0)
{
lean_object* v___x_5287_; 
lean_del_object(v___x_5284_);
v___x_5287_ = l_Lean_Expr_getAppFn(v_inst_5250_);
if (lean_obj_tag(v___x_5287_) == 4)
{
lean_object* v_declName_5288_; lean_object* v___x_5289_; 
v_declName_5288_ = lean_ctor_get(v___x_5287_, 0);
lean_inc(v_declName_5288_);
lean_dec_ref_known(v___x_5287_, 2);
v___x_5289_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14(v_declName_5288_, v_isMeta_5254_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_);
if (lean_obj_tag(v___x_5289_) == 0)
{
lean_dec_ref_known(v___x_5289_, 1);
goto v___jp_5264_;
}
else
{
lean_object* v_a_5290_; lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5297_; 
lean_dec(v_val_5256_);
lean_dec_ref(v_expectedType_5251_);
lean_dec_ref(v_inst_5250_);
v_a_5290_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5297_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5297_ == 0)
{
v___x_5292_ = v___x_5289_;
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
else
{
lean_inc(v_a_5290_);
lean_dec(v___x_5289_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5297_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v___x_5295_; 
if (v_isShared_5293_ == 0)
{
v___x_5295_ = v___x_5292_;
goto v_reusejp_5294_;
}
else
{
lean_object* v_reuseFailAlloc_5296_; 
v_reuseFailAlloc_5296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5296_, 0, v_a_5290_);
v___x_5295_ = v_reuseFailAlloc_5296_;
goto v_reusejp_5294_;
}
v_reusejp_5294_:
{
return v___x_5295_;
}
}
}
}
else
{
lean_dec_ref(v___x_5287_);
goto v___jp_5264_;
}
}
else
{
lean_object* v___x_5298_; lean_object* v___x_5299_; uint8_t v___x_5300_; 
lean_dec(v_val_5256_);
v___x_5298_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5261_);
v___x_5299_ = l_Lean_Meta_backward_inferInstanceAs_wrap_instances;
v___x_5300_ = l_Lean_Option_get___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__0(v___x_5298_, v___x_5299_);
lean_dec_ref(v___x_5298_);
if (v___x_5300_ == 0)
{
lean_object* v___x_5301_; lean_object* v___x_5303_; 
lean_dec_ref(v_expectedType_5251_);
v___x_5301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5301_, 0, v_inst_5250_);
if (v_isShared_5285_ == 0)
{
lean_ctor_set(v___x_5284_, 0, v___x_5301_);
v___x_5303_ = v___x_5284_;
goto v_reusejp_5302_;
}
else
{
lean_object* v_reuseFailAlloc_5304_; 
v_reuseFailAlloc_5304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5304_, 0, v___x_5301_);
v___x_5303_ = v_reuseFailAlloc_5304_;
goto v_reusejp_5302_;
}
v_reusejp_5302_:
{
return v___x_5303_;
}
}
else
{
lean_object* v___x_5305_; lean_object* v___x_5306_; 
lean_del_object(v___x_5284_);
v___x_5305_ = lean_box(0);
v___x_5306_ = l_Lean_Meta_mkAuxTheorem(v_expectedType_5251_, v_inst_5250_, v___x_5300_, v___x_5305_, v___x_5300_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_);
if (lean_obj_tag(v___x_5306_) == 0)
{
lean_object* v_a_5307_; lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5315_; 
v_a_5307_ = lean_ctor_get(v___x_5306_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5306_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5309_ = v___x_5306_;
v_isShared_5310_ = v_isSharedCheck_5315_;
goto v_resetjp_5308_;
}
else
{
lean_inc(v_a_5307_);
lean_dec(v___x_5306_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5315_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
lean_object* v___x_5311_; lean_object* v___x_5313_; 
v___x_5311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5311_, 0, v_a_5307_);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 0, v___x_5311_);
v___x_5313_ = v___x_5309_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v___x_5311_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
else
{
lean_object* v_a_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5323_; 
v_a_5316_ = lean_ctor_get(v___x_5306_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v___x_5306_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5318_ = v___x_5306_;
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_a_5316_);
lean_dec(v___x_5306_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_a_5316_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
return v___x_5321_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5325_; lean_object* v___x_5327_; uint8_t v_isShared_5328_; uint8_t v_isSharedCheck_5332_; 
lean_dec(v_val_5256_);
lean_dec_ref(v_expectedType_5251_);
lean_dec_ref(v_inst_5250_);
v_a_5325_ = lean_ctor_get(v___x_5281_, 0);
v_isSharedCheck_5332_ = !lean_is_exclusive(v___x_5281_);
if (v_isSharedCheck_5332_ == 0)
{
v___x_5327_ = v___x_5281_;
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
else
{
lean_inc(v_a_5325_);
lean_dec(v___x_5281_);
v___x_5327_ = lean_box(0);
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
v_resetjp_5326_:
{
lean_object* v___x_5330_; 
if (v_isShared_5328_ == 0)
{
v___x_5330_ = v___x_5327_;
goto v_reusejp_5329_;
}
else
{
lean_object* v_reuseFailAlloc_5331_; 
v_reuseFailAlloc_5331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5331_, 0, v_a_5325_);
v___x_5330_ = v_reuseFailAlloc_5331_;
goto v_reusejp_5329_;
}
v_reusejp_5329_:
{
return v___x_5330_;
}
}
}
v___jp_5264_:
{
lean_object* v___x_5265_; 
lean_inc(v___y_5262_);
lean_inc_ref(v___y_5261_);
lean_inc(v___y_5260_);
lean_inc_ref(v___y_5259_);
lean_inc_ref(v_inst_5250_);
v___x_5265_ = lean_whnf(v_inst_5250_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_);
if (lean_obj_tag(v___x_5265_) == 0)
{
lean_object* v_a_5266_; lean_object* v_dummy_5267_; lean_object* v_nargs_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; lean_object* v___x_5271_; lean_object* v___x_5272_; 
v_a_5266_ = lean_ctor_get(v___x_5265_, 0);
lean_inc(v_a_5266_);
lean_dec_ref_known(v___x_5265_, 1);
v_dummy_5267_ = lean_obj_once(&l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0, &l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0_once, _init_l_List_foldlM___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_getParentStructType_x3f_spec__1___closed__0);
v_nargs_5268_ = l_Lean_Expr_getAppNumArgs(v_a_5266_);
lean_inc(v_nargs_5268_);
v___x_5269_ = lean_mk_array(v_nargs_5268_, v_dummy_5267_);
v___x_5270_ = lean_unsigned_to_nat(1u);
v___x_5271_ = lean_nat_sub(v_nargs_5268_, v___x_5270_);
lean_dec(v_nargs_5268_);
v___x_5272_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13(v_inst_5250_, v_expectedType_5251_, v_compile_5252_, v_logCompileErrors_5253_, v_isMeta_5254_, v_exposeAux_5255_, v_val_5256_, v_isEta_5257_, v_a_5266_, v___x_5269_, v___x_5271_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_);
lean_dec(v___x_5271_);
return v___x_5272_;
}
else
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5280_; 
lean_dec(v_val_5256_);
lean_dec_ref(v_expectedType_5251_);
lean_dec_ref(v_inst_5250_);
v_a_5273_ = lean_ctor_get(v___x_5265_, 0);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5265_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5275_ = v___x_5265_;
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5265_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5278_; 
if (v_isShared_5276_ == 0)
{
v___x_5278_ = v___x_5275_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v_a_5273_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
return v___x_5278_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1___boxed(lean_object* v_inst_5333_, lean_object* v_expectedType_5334_, lean_object* v_compile_5335_, lean_object* v_logCompileErrors_5336_, lean_object* v_isMeta_5337_, lean_object* v_exposeAux_5338_, lean_object* v_val_5339_, lean_object* v_isEta_5340_, lean_object* v_____r_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_){
_start:
{
uint8_t v_compile_boxed_5347_; uint8_t v_logCompileErrors_boxed_5348_; uint8_t v_isMeta_boxed_5349_; uint8_t v_exposeAux_boxed_5350_; uint8_t v_isEta_boxed_5351_; lean_object* v_res_5352_; 
v_compile_boxed_5347_ = lean_unbox(v_compile_5335_);
v_logCompileErrors_boxed_5348_ = lean_unbox(v_logCompileErrors_5336_);
v_isMeta_boxed_5349_ = lean_unbox(v_isMeta_5337_);
v_exposeAux_boxed_5350_ = lean_unbox(v_exposeAux_5338_);
v_isEta_boxed_5351_ = lean_unbox(v_isEta_5340_);
v_res_5352_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___lam__1(v_inst_5333_, v_expectedType_5334_, v_compile_boxed_5347_, v_logCompileErrors_boxed_5348_, v_isMeta_boxed_5349_, v_exposeAux_boxed_5350_, v_val_5339_, v_isEta_boxed_5351_, v_____r_5341_, v___y_5342_, v___y_5343_, v___y_5344_, v___y_5345_);
lean_dec(v___y_5345_);
lean_dec_ref(v___y_5344_);
lean_dec(v___y_5343_);
lean_dec_ref(v___y_5342_);
return v_res_5352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go___boxed(lean_object* v_compile_5353_, lean_object* v_logCompileErrors_5354_, lean_object* v_isMeta_5355_, lean_object* v_exposeAux_5356_, lean_object* v_inst_5357_, lean_object* v_expectedType_5358_, lean_object* v_isEta_5359_, lean_object* v_a_5360_, lean_object* v_a_5361_, lean_object* v_a_5362_, lean_object* v_a_5363_, lean_object* v_a_5364_){
_start:
{
uint8_t v_compile_boxed_5365_; uint8_t v_logCompileErrors_boxed_5366_; uint8_t v_isMeta_boxed_5367_; uint8_t v_exposeAux_boxed_5368_; uint8_t v_isEta_boxed_5369_; lean_object* v_res_5370_; 
v_compile_boxed_5365_ = lean_unbox(v_compile_5353_);
v_logCompileErrors_boxed_5366_ = lean_unbox(v_logCompileErrors_5354_);
v_isMeta_boxed_5367_ = lean_unbox(v_isMeta_5355_);
v_exposeAux_boxed_5368_ = lean_unbox(v_exposeAux_5356_);
v_isEta_boxed_5369_ = lean_unbox(v_isEta_5359_);
v_res_5370_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(v_compile_boxed_5365_, v_logCompileErrors_boxed_5366_, v_isMeta_boxed_5367_, v_exposeAux_boxed_5368_, v_inst_5357_, v_expectedType_5358_, v_isEta_boxed_5369_, v_a_5360_, v_a_5361_, v_a_5362_, v_a_5363_);
lean_dec(v_a_5363_);
lean_dec_ref(v_a_5362_);
lean_dec(v_a_5361_);
lean_dec_ref(v_a_5360_);
return v_res_5370_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5371_ = _args[0];
lean_object* v_fst_5372_ = _args[1];
lean_object* v_args_5373_ = _args[2];
lean_object* v_compile_5374_ = _args[3];
lean_object* v_logCompileErrors_5375_ = _args[4];
lean_object* v_isMeta_5376_ = _args[5];
lean_object* v___x_5377_ = _args[6];
lean_object* v___x_5378_ = _args[7];
lean_object* v_exposeAux_5379_ = _args[8];
lean_object* v_val_5380_ = _args[9];
lean_object* v_expectedType_5381_ = _args[10];
lean_object* v_a_5382_ = _args[11];
lean_object* v_b_5383_ = _args[12];
lean_object* v___y_5384_ = _args[13];
lean_object* v___y_5385_ = _args[14];
lean_object* v___y_5386_ = _args[15];
lean_object* v___y_5387_ = _args[16];
lean_object* v___y_5388_ = _args[17];
_start:
{
uint8_t v_compile_boxed_5389_; uint8_t v_logCompileErrors_boxed_5390_; uint8_t v_isMeta_boxed_5391_; uint8_t v_exposeAux_boxed_5392_; lean_object* v_res_5393_; 
v_compile_boxed_5389_ = lean_unbox(v_compile_5374_);
v_logCompileErrors_boxed_5390_ = lean_unbox(v_logCompileErrors_5375_);
v_isMeta_boxed_5391_ = lean_unbox(v_isMeta_5376_);
v_exposeAux_boxed_5392_ = lean_unbox(v_exposeAux_5379_);
v_res_5393_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg(v_upperBound_5371_, v_fst_5372_, v_args_5373_, v_compile_boxed_5389_, v_logCompileErrors_boxed_5390_, v_isMeta_boxed_5391_, v___x_5377_, v___x_5378_, v_exposeAux_boxed_5392_, v_val_5380_, v_expectedType_5381_, v_a_5382_, v_b_5383_, v___y_5384_, v___y_5385_, v___y_5386_, v___y_5387_);
lean_dec(v___y_5387_);
lean_dec_ref(v___y_5386_);
lean_dec(v___y_5385_);
lean_dec_ref(v___y_5384_);
lean_dec(v___x_5378_);
lean_dec(v___x_5377_);
lean_dec_ref(v_args_5373_);
lean_dec_ref(v_fst_5372_);
lean_dec(v_upperBound_5371_);
return v_res_5393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17___boxed(lean_object* v_inst_5394_, lean_object* v_expectedType_5395_, lean_object* v_compile_5396_, lean_object* v_logCompileErrors_5397_, lean_object* v_isMeta_5398_, lean_object* v_exposeAux_5399_, lean_object* v_isEta_5400_, lean_object* v_val_5401_, lean_object* v_x_5402_, lean_object* v_x_5403_, lean_object* v_x_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_){
_start:
{
uint8_t v_compile_boxed_5410_; uint8_t v_logCompileErrors_boxed_5411_; uint8_t v_isMeta_boxed_5412_; uint8_t v_exposeAux_boxed_5413_; uint8_t v_isEta_boxed_5414_; lean_object* v_res_5415_; 
v_compile_boxed_5410_ = lean_unbox(v_compile_5396_);
v_logCompileErrors_boxed_5411_ = lean_unbox(v_logCompileErrors_5397_);
v_isMeta_boxed_5412_ = lean_unbox(v_isMeta_5398_);
v_exposeAux_boxed_5413_ = lean_unbox(v_exposeAux_5399_);
v_isEta_boxed_5414_ = lean_unbox(v_isEta_5400_);
v_res_5415_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13_spec__17(v_inst_5394_, v_expectedType_5395_, v_compile_boxed_5410_, v_logCompileErrors_boxed_5411_, v_isMeta_boxed_5412_, v_exposeAux_boxed_5413_, v_isEta_boxed_5414_, v_val_5401_, v_x_5402_, v_x_5403_, v_x_5404_, v___y_5405_, v___y_5406_, v___y_5407_, v___y_5408_);
lean_dec(v___y_5408_);
lean_dec_ref(v___y_5407_);
lean_dec(v___y_5406_);
lean_dec_ref(v___y_5405_);
return v_res_5415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13___boxed(lean_object* v_inst_5416_, lean_object* v_expectedType_5417_, lean_object* v_compile_5418_, lean_object* v_logCompileErrors_5419_, lean_object* v_isMeta_5420_, lean_object* v_exposeAux_5421_, lean_object* v_val_5422_, lean_object* v_isEta_5423_, lean_object* v_x_5424_, lean_object* v_x_5425_, lean_object* v_x_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_){
_start:
{
uint8_t v_compile_boxed_5432_; uint8_t v_logCompileErrors_boxed_5433_; uint8_t v_isMeta_boxed_5434_; uint8_t v_exposeAux_boxed_5435_; uint8_t v_isEta_boxed_5436_; lean_object* v_res_5437_; 
v_compile_boxed_5432_ = lean_unbox(v_compile_5418_);
v_logCompileErrors_boxed_5433_ = lean_unbox(v_logCompileErrors_5419_);
v_isMeta_boxed_5434_ = lean_unbox(v_isMeta_5420_);
v_exposeAux_boxed_5435_ = lean_unbox(v_exposeAux_5421_);
v_isEta_boxed_5436_ = lean_unbox(v_isEta_5423_);
v_res_5437_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__13(v_inst_5416_, v_expectedType_5417_, v_compile_boxed_5432_, v_logCompileErrors_boxed_5433_, v_isMeta_boxed_5434_, v_exposeAux_boxed_5435_, v_val_5422_, v_isEta_boxed_5436_, v_x_5424_, v_x_5425_, v_x_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_);
lean_dec(v___y_5430_);
lean_dec_ref(v___y_5429_);
lean_dec(v___y_5428_);
lean_dec_ref(v___y_5427_);
lean_dec(v_x_5426_);
return v_res_5437_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2(lean_object* v_00_u03b1_5438_, lean_object* v_x_5439_, uint8_t v_when_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_){
_start:
{
lean_object* v___x_5446_; 
v___x_5446_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___redArg(v_x_5439_, v_when_5440_, v___y_5441_, v___y_5442_, v___y_5443_, v___y_5444_);
return v___x_5446_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2___boxed(lean_object* v_00_u03b1_5447_, lean_object* v_x_5448_, lean_object* v_when_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_){
_start:
{
uint8_t v_when_boxed_5455_; lean_object* v_res_5456_; 
v_when_boxed_5455_ = lean_unbox(v_when_5449_);
v_res_5456_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2(v_00_u03b1_5447_, v_x_5448_, v_when_boxed_5455_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_);
lean_dec(v___y_5453_);
lean_dec_ref(v___y_5452_);
lean_dec(v___y_5451_);
lean_dec_ref(v___y_5450_);
return v_res_5456_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3(lean_object* v_declName_5457_, uint8_t v_s_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_){
_start:
{
lean_object* v___x_5464_; 
v___x_5464_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___redArg(v_declName_5457_, v_s_5458_, v___y_5460_, v___y_5462_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3___boxed(lean_object* v_declName_5465_, lean_object* v_s_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_){
_start:
{
uint8_t v_s_boxed_5472_; lean_object* v_res_5473_; 
v_s_boxed_5472_ = lean_unbox(v_s_5466_);
v_res_5473_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__3(v_declName_5465_, v_s_boxed_5472_, v___y_5467_, v___y_5468_, v___y_5469_, v___y_5470_);
lean_dec(v___y_5470_);
lean_dec_ref(v___y_5469_);
lean_dec(v___y_5468_);
lean_dec_ref(v___y_5467_);
return v_res_5473_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4_spec__5(lean_object* v_00_u03b2_5474_){
_start:
{
lean_object* v___x_5475_; 
v___x_5475_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2);
return v___x_5475_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4___redArg(){
_start:
{
lean_object* v___x_5477_; 
v___x_5477_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2);
return v___x_5477_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4___redArg___boxed(lean_object* v___dummy_5478_){
_start:
{
lean_object* v_res_5479_; 
v_res_5479_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4___redArg();
return v_res_5479_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__4(lean_object* v_00_u03b2_5480_){
_start:
{
lean_object* v___x_5481_; 
v___x_5481_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19___closed__2);
return v___x_5481_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9(lean_object* v_mvarId_5482_, lean_object* v_val_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_, lean_object* v___y_5487_){
_start:
{
lean_object* v___x_5489_; 
v___x_5489_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___redArg(v_mvarId_5482_, v_val_5483_, v___y_5485_);
return v___x_5489_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9___boxed(lean_object* v_mvarId_5490_, lean_object* v_val_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_, lean_object* v___y_5496_){
_start:
{
lean_object* v_res_5497_; 
v_res_5497_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9(v_mvarId_5490_, v_val_5491_, v___y_5492_, v___y_5493_, v___y_5494_, v___y_5495_);
lean_dec(v___y_5495_);
lean_dec_ref(v___y_5494_);
lean_dec(v___y_5493_);
lean_dec_ref(v___y_5492_);
return v_res_5497_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11(lean_object* v_upperBound_5498_, lean_object* v_fst_5499_, lean_object* v_args_5500_, uint8_t v_compile_5501_, uint8_t v_logCompileErrors_5502_, uint8_t v_isMeta_5503_, lean_object* v___x_5504_, lean_object* v___x_5505_, uint8_t v_exposeAux_5506_, lean_object* v_val_5507_, lean_object* v_expectedType_5508_, lean_object* v_inst_5509_, lean_object* v_R_5510_, lean_object* v_a_5511_, lean_object* v_b_5512_, lean_object* v_c_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_, lean_object* v___y_5517_){
_start:
{
lean_object* v___x_5519_; 
v___x_5519_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg(v_upperBound_5498_, v_fst_5499_, v_args_5500_, v_compile_5501_, v_logCompileErrors_5502_, v_isMeta_5503_, v___x_5504_, v___x_5505_, v_exposeAux_5506_, v_val_5507_, v_expectedType_5508_, v_a_5511_, v_b_5512_, v___y_5514_, v___y_5515_, v___y_5516_, v___y_5517_);
return v___x_5519_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___boxed(lean_object** _args){
lean_object* v_upperBound_5520_ = _args[0];
lean_object* v_fst_5521_ = _args[1];
lean_object* v_args_5522_ = _args[2];
lean_object* v_compile_5523_ = _args[3];
lean_object* v_logCompileErrors_5524_ = _args[4];
lean_object* v_isMeta_5525_ = _args[5];
lean_object* v___x_5526_ = _args[6];
lean_object* v___x_5527_ = _args[7];
lean_object* v_exposeAux_5528_ = _args[8];
lean_object* v_val_5529_ = _args[9];
lean_object* v_expectedType_5530_ = _args[10];
lean_object* v_inst_5531_ = _args[11];
lean_object* v_R_5532_ = _args[12];
lean_object* v_a_5533_ = _args[13];
lean_object* v_b_5534_ = _args[14];
lean_object* v_c_5535_ = _args[15];
lean_object* v___y_5536_ = _args[16];
lean_object* v___y_5537_ = _args[17];
lean_object* v___y_5538_ = _args[18];
lean_object* v___y_5539_ = _args[19];
lean_object* v___y_5540_ = _args[20];
_start:
{
uint8_t v_compile_boxed_5541_; uint8_t v_logCompileErrors_boxed_5542_; uint8_t v_isMeta_boxed_5543_; uint8_t v_exposeAux_boxed_5544_; lean_object* v_res_5545_; 
v_compile_boxed_5541_ = lean_unbox(v_compile_5523_);
v_logCompileErrors_boxed_5542_ = lean_unbox(v_logCompileErrors_5524_);
v_isMeta_boxed_5543_ = lean_unbox(v_isMeta_5525_);
v_exposeAux_boxed_5544_ = lean_unbox(v_exposeAux_5528_);
v_res_5545_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11(v_upperBound_5520_, v_fst_5521_, v_args_5522_, v_compile_boxed_5541_, v_logCompileErrors_boxed_5542_, v_isMeta_boxed_5543_, v___x_5526_, v___x_5527_, v_exposeAux_boxed_5544_, v_val_5529_, v_expectedType_5530_, v_inst_5531_, v_R_5532_, v_a_5533_, v_b_5534_, v_c_5535_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_);
lean_dec(v___y_5539_);
lean_dec_ref(v___y_5538_);
lean_dec(v___y_5537_);
lean_dec_ref(v___y_5536_);
lean_dec(v___x_5527_);
lean_dec(v___x_5526_);
lean_dec_ref(v_args_5522_);
lean_dec_ref(v_fst_5521_);
lean_dec(v_upperBound_5520_);
return v_res_5545_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25(lean_object* v_00_u03b1_5546_, lean_object* v_x_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_){
_start:
{
lean_object* v___x_5553_; 
v___x_5553_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___redArg(v_x_5547_);
return v___x_5553_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25___boxed(lean_object* v_00_u03b1_5554_, lean_object* v_x_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_){
_start:
{
lean_object* v_res_5561_; 
v_res_5561_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__16_spec__25(v_00_u03b1_5554_, v_x_5555_, v___y_5556_, v___y_5557_, v___y_5558_, v___y_5559_);
lean_dec(v___y_5559_);
lean_dec_ref(v___y_5558_);
lean_dec(v___y_5557_);
lean_dec_ref(v___y_5556_);
return v_res_5561_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2(lean_object* v_00_u03b1_5562_, lean_object* v_x_5563_, uint8_t v_isExporting_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_){
_start:
{
lean_object* v___x_5570_; 
v___x_5570_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___redArg(v_x_5563_, v_isExporting_5564_, v___y_5565_, v___y_5566_, v___y_5567_, v___y_5568_);
return v___x_5570_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2___boxed(lean_object* v_00_u03b1_5571_, lean_object* v_x_5572_, lean_object* v_isExporting_5573_, lean_object* v___y_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_){
_start:
{
uint8_t v_isExporting_boxed_5579_; lean_object* v_res_5580_; 
v_isExporting_boxed_5579_ = lean_unbox(v_isExporting_5573_);
v_res_5580_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__2_spec__2(v_00_u03b1_5571_, v_x_5572_, v_isExporting_boxed_5579_, v___y_5574_, v___y_5575_, v___y_5576_, v___y_5577_);
lean_dec(v___y_5577_);
lean_dec_ref(v___y_5576_);
lean_dec(v___y_5575_);
lean_dec_ref(v___y_5574_);
return v_res_5580_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8(lean_object* v_00_u03b1_5581_, lean_object* v_constName_5582_, lean_object* v___y_5583_, lean_object* v___y_5584_, lean_object* v___y_5585_, lean_object* v___y_5586_){
_start:
{
lean_object* v___x_5588_; 
v___x_5588_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___redArg(v_constName_5582_, v___y_5583_, v___y_5584_, v___y_5585_, v___y_5586_);
return v___x_5588_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8___boxed(lean_object* v_00_u03b1_5589_, lean_object* v_constName_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_, lean_object* v___y_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_){
_start:
{
lean_object* v_res_5596_; 
v_res_5596_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8(v_00_u03b1_5589_, v_constName_5590_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_);
lean_dec(v___y_5594_);
lean_dec_ref(v___y_5593_);
lean_dec(v___y_5592_);
lean_dec_ref(v___y_5591_);
return v_res_5596_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12(lean_object* v_00_u03b2_5597_, lean_object* v_x_5598_, lean_object* v_x_5599_, lean_object* v_x_5600_){
_start:
{
lean_object* v___x_5601_; 
v___x_5601_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12___redArg(v_x_5598_, v_x_5599_, v_x_5600_);
return v___x_5601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21(lean_object* v_00_u03b2_5602_, lean_object* v_m_5603_, lean_object* v_a_5604_){
_start:
{
lean_object* v___x_5605_; 
v___x_5605_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___redArg(v_m_5603_, v_a_5604_);
return v___x_5605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21___boxed(lean_object* v_00_u03b2_5606_, lean_object* v_m_5607_, lean_object* v_a_5608_){
_start:
{
lean_object* v_res_5609_; 
v_res_5609_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21(v_00_u03b2_5606_, v_m_5607_, v_a_5608_);
lean_dec(v_a_5608_);
lean_dec_ref(v_m_5607_);
return v_res_5609_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12(lean_object* v_00_u03b1_5610_, lean_object* v_ref_5611_, lean_object* v_constName_5612_, lean_object* v___y_5613_, lean_object* v___y_5614_, lean_object* v___y_5615_, lean_object* v___y_5616_){
_start:
{
lean_object* v___x_5618_; 
v___x_5618_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___redArg(v_ref_5611_, v_constName_5612_, v___y_5613_, v___y_5614_, v___y_5615_, v___y_5616_);
return v___x_5618_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12___boxed(lean_object* v_00_u03b1_5619_, lean_object* v_ref_5620_, lean_object* v_constName_5621_, lean_object* v___y_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_){
_start:
{
lean_object* v_res_5627_; 
v_res_5627_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12(v_00_u03b1_5619_, v_ref_5620_, v_constName_5621_, v___y_5622_, v___y_5623_, v___y_5624_, v___y_5625_);
lean_dec(v___y_5625_);
lean_dec_ref(v___y_5624_);
lean_dec(v___y_5623_);
lean_dec_ref(v___y_5622_);
lean_dec(v_ref_5620_);
return v_res_5627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16(lean_object* v_00_u03b2_5628_, lean_object* v_x_5629_, size_t v_x_5630_, size_t v_x_5631_, lean_object* v_x_5632_, lean_object* v_x_5633_){
_start:
{
lean_object* v___x_5634_; 
v___x_5634_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___redArg(v_x_5629_, v_x_5630_, v_x_5631_, v_x_5632_, v_x_5633_);
return v___x_5634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16___boxed(lean_object* v_00_u03b2_5635_, lean_object* v_x_5636_, lean_object* v_x_5637_, lean_object* v_x_5638_, lean_object* v_x_5639_, lean_object* v_x_5640_){
_start:
{
size_t v_x_170270__boxed_5641_; size_t v_x_170271__boxed_5642_; lean_object* v_res_5643_; 
v_x_170270__boxed_5641_ = lean_unbox_usize(v_x_5637_);
lean_dec(v_x_5637_);
v_x_170271__boxed_5642_ = lean_unbox_usize(v_x_5638_);
lean_dec(v_x_5638_);
v_res_5643_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16(v_00_u03b2_5635_, v_x_5636_, v_x_170270__boxed_5641_, v_x_170271__boxed_5642_, v_x_5639_, v_x_5640_);
return v_res_5643_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23(lean_object* v_00_u03b2_5644_, lean_object* v_x_5645_, lean_object* v_x_5646_){
_start:
{
uint8_t v___x_5647_; 
v___x_5647_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___redArg(v_x_5645_, v_x_5646_);
return v___x_5647_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23___boxed(lean_object* v_00_u03b2_5648_, lean_object* v_x_5649_, lean_object* v_x_5650_){
_start:
{
uint8_t v_res_5651_; lean_object* v_r_5652_; 
v_res_5651_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23(v_00_u03b2_5648_, v_x_5649_, v_x_5650_);
lean_dec_ref(v_x_5650_);
lean_dec_ref(v_x_5649_);
v_r_5652_ = lean_box(v_res_5651_);
return v_r_5652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26(lean_object* v_00_u03b2_5653_, lean_object* v_a_5654_, lean_object* v_x_5655_){
_start:
{
lean_object* v___x_5656_; 
v___x_5656_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___redArg(v_a_5654_, v_x_5655_);
return v___x_5656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26___boxed(lean_object* v_00_u03b2_5657_, lean_object* v_a_5658_, lean_object* v_x_5659_){
_start:
{
lean_object* v_res_5660_; 
v_res_5660_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__21_spec__26(v_00_u03b2_5657_, v_a_5658_, v_x_5659_);
lean_dec(v_x_5659_);
lean_dec(v_a_5658_);
return v_res_5660_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23(lean_object* v_00_u03b1_5661_, lean_object* v_ref_5662_, lean_object* v_msg_5663_, lean_object* v_declHint_5664_, lean_object* v___y_5665_, lean_object* v___y_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_){
_start:
{
lean_object* v___x_5670_; 
v___x_5670_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___redArg(v_ref_5662_, v_msg_5663_, v_declHint_5664_, v___y_5665_, v___y_5666_, v___y_5667_, v___y_5668_);
return v___x_5670_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23___boxed(lean_object* v_00_u03b1_5671_, lean_object* v_ref_5672_, lean_object* v_msg_5673_, lean_object* v_declHint_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_){
_start:
{
lean_object* v_res_5680_; 
v_res_5680_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23(v_00_u03b1_5671_, v_ref_5672_, v_msg_5673_, v_declHint_5674_, v___y_5675_, v___y_5676_, v___y_5677_, v___y_5678_);
lean_dec(v___y_5678_);
lean_dec_ref(v___y_5677_);
lean_dec(v___y_5676_);
lean_dec_ref(v___y_5675_);
lean_dec(v_ref_5672_);
return v_res_5680_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26(lean_object* v_00_u03b2_5681_, lean_object* v_n_5682_, lean_object* v_k_5683_, lean_object* v_v_5684_){
_start:
{
lean_object* v___x_5685_; 
v___x_5685_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26___redArg(v_n_5682_, v_k_5683_, v_v_5684_);
return v___x_5685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27(lean_object* v_00_u03b2_5686_, size_t v_depth_5687_, lean_object* v_keys_5688_, lean_object* v_vals_5689_, lean_object* v_heq_5690_, lean_object* v_i_5691_, lean_object* v_entries_5692_){
_start:
{
lean_object* v___x_5693_; 
v___x_5693_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___redArg(v_depth_5687_, v_keys_5688_, v_vals_5689_, v_i_5691_, v_entries_5692_);
return v___x_5693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27___boxed(lean_object* v_00_u03b2_5694_, lean_object* v_depth_5695_, lean_object* v_keys_5696_, lean_object* v_vals_5697_, lean_object* v_heq_5698_, lean_object* v_i_5699_, lean_object* v_entries_5700_){
_start:
{
size_t v_depth_boxed_5701_; lean_object* v_res_5702_; 
v_depth_boxed_5701_ = lean_unbox_usize(v_depth_5695_);
lean_dec(v_depth_5695_);
v_res_5702_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__27(v_00_u03b2_5694_, v_depth_boxed_5701_, v_keys_5696_, v_vals_5697_, v_heq_5698_, v_i_5699_, v_entries_5700_);
lean_dec_ref(v_vals_5697_);
lean_dec_ref(v_keys_5696_);
return v_res_5702_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31(lean_object* v_00_u03b2_5703_, lean_object* v_x_5704_, size_t v_x_5705_, lean_object* v_x_5706_){
_start:
{
uint8_t v___x_5707_; 
v___x_5707_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___redArg(v_x_5704_, v_x_5705_, v_x_5706_);
return v___x_5707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31___boxed(lean_object* v_00_u03b2_5708_, lean_object* v_x_5709_, lean_object* v_x_5710_, lean_object* v_x_5711_){
_start:
{
size_t v_x_170321__boxed_5712_; uint8_t v_res_5713_; lean_object* v_r_5714_; 
v_x_170321__boxed_5712_ = lean_unbox_usize(v_x_5710_);
lean_dec(v_x_5710_);
v_res_5713_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31(v_00_u03b2_5708_, v_x_5709_, v_x_170321__boxed_5712_, v_x_5711_);
lean_dec_ref(v_x_5711_);
lean_dec_ref(v_x_5709_);
v_r_5714_ = lean_box(v_res_5713_);
return v_r_5714_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35(lean_object* v_msg_5715_, lean_object* v_declHint_5716_, lean_object* v___y_5717_, lean_object* v___y_5718_, lean_object* v___y_5719_, lean_object* v___y_5720_){
_start:
{
lean_object* v___x_5722_; 
v___x_5722_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___redArg(v_msg_5715_, v_declHint_5716_, v___y_5720_);
return v___x_5722_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35___boxed(lean_object* v_msg_5723_, lean_object* v_declHint_5724_, lean_object* v___y_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_){
_start:
{
lean_object* v_res_5730_; 
v_res_5730_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__30_spec__35(v_msg_5723_, v_declHint_5724_, v___y_5725_, v___y_5726_, v___y_5727_, v___y_5728_);
lean_dec(v___y_5728_);
lean_dec_ref(v___y_5727_);
lean_dec(v___y_5726_);
lean_dec_ref(v___y_5725_);
return v_res_5730_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31(lean_object* v_00_u03b1_5731_, lean_object* v_ref_5732_, lean_object* v_msg_5733_, lean_object* v___y_5734_, lean_object* v___y_5735_, lean_object* v___y_5736_, lean_object* v___y_5737_){
_start:
{
lean_object* v___x_5739_; 
v___x_5739_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___redArg(v_ref_5732_, v_msg_5733_, v___y_5734_, v___y_5735_, v___y_5736_, v___y_5737_);
return v___x_5739_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31___boxed(lean_object* v_00_u03b1_5740_, lean_object* v_ref_5741_, lean_object* v_msg_5742_, lean_object* v___y_5743_, lean_object* v___y_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_){
_start:
{
lean_object* v_res_5748_; 
v_res_5748_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__6_spec__8_spec__12_spec__23_spec__31(v_00_u03b1_5740_, v_ref_5741_, v_msg_5742_, v___y_5743_, v___y_5744_, v___y_5745_, v___y_5746_);
lean_dec(v___y_5746_);
lean_dec_ref(v___y_5745_);
lean_dec(v___y_5744_);
lean_dec_ref(v___y_5743_);
lean_dec(v_ref_5741_);
return v_res_5748_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26_spec__34(lean_object* v_00_u03b2_5749_, lean_object* v_x_5750_, lean_object* v_x_5751_, lean_object* v_x_5752_, lean_object* v_x_5753_){
_start:
{
lean_object* v___x_5754_; 
v___x_5754_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__9_spec__12_spec__16_spec__26_spec__34___redArg(v_x_5750_, v_x_5751_, v_x_5752_, v_x_5753_);
return v___x_5754_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38(lean_object* v_00_u03b2_5755_, lean_object* v_keys_5756_, lean_object* v_vals_5757_, lean_object* v_heq_5758_, lean_object* v_i_5759_, lean_object* v_k_5760_){
_start:
{
uint8_t v___x_5761_; 
v___x_5761_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___redArg(v_keys_5756_, v_i_5759_, v_k_5760_);
return v___x_5761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38___boxed(lean_object* v_00_u03b2_5762_, lean_object* v_keys_5763_, lean_object* v_vals_5764_, lean_object* v_heq_5765_, lean_object* v_i_5766_, lean_object* v_k_5767_){
_start:
{
uint8_t v_res_5768_; lean_object* v_r_5769_; 
v_res_5768_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__14_spec__19_spec__23_spec__31_spec__38(v_00_u03b2_5762_, v_keys_5763_, v_vals_5764_, v_heq_5765_, v_i_5766_, v_k_5767_);
lean_dec_ref(v_k_5767_);
lean_dec_ref(v_vals_5764_);
lean_dec_ref(v_keys_5763_);
v_r_5769_ = lean_box(v_res_5768_);
return v_r_5769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance___lam__0(uint8_t v_compile_5770_, uint8_t v_logCompileErrors_5771_, uint8_t v_isMeta_5772_, uint8_t v_exposeAux_5773_, lean_object* v_inst_5774_, lean_object* v_expectedType_5775_, uint8_t v___x_5776_, lean_object* v___y_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_, lean_object* v___y_5780_){
_start:
{
lean_object* v___x_5782_; 
v___x_5782_ = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go(v_compile_5770_, v_logCompileErrors_5771_, v_isMeta_5772_, v_exposeAux_5773_, v_inst_5774_, v_expectedType_5775_, v___x_5776_, v___y_5777_, v___y_5778_, v___y_5779_, v___y_5780_);
if (lean_obj_tag(v___x_5782_) == 0)
{
lean_object* v_a_5783_; lean_object* v___x_5785_; uint8_t v_isShared_5786_; uint8_t v_isSharedCheck_5796_; 
v_a_5783_ = lean_ctor_get(v___x_5782_, 0);
v_isSharedCheck_5796_ = !lean_is_exclusive(v___x_5782_);
if (v_isSharedCheck_5796_ == 0)
{
v___x_5785_ = v___x_5782_;
v_isShared_5786_ = v_isSharedCheck_5796_;
goto v_resetjp_5784_;
}
else
{
lean_inc(v_a_5783_);
lean_dec(v___x_5782_);
v___x_5785_ = lean_box(0);
v_isShared_5786_ = v_isSharedCheck_5796_;
goto v_resetjp_5784_;
}
v_resetjp_5784_:
{
if (lean_obj_tag(v_a_5783_) == 0)
{
lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5790_; 
v___x_5787_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__11___redArg___lam__2___closed__3);
v___x_5788_ = l_panic___at___00__private_Lean_Meta_WrapInstance_0__Lean_Meta_wrapInstance_go_spec__10(v___x_5787_);
if (v_isShared_5786_ == 0)
{
lean_ctor_set(v___x_5785_, 0, v___x_5788_);
v___x_5790_ = v___x_5785_;
goto v_reusejp_5789_;
}
else
{
lean_object* v_reuseFailAlloc_5791_; 
v_reuseFailAlloc_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5791_, 0, v___x_5788_);
v___x_5790_ = v_reuseFailAlloc_5791_;
goto v_reusejp_5789_;
}
v_reusejp_5789_:
{
return v___x_5790_;
}
}
else
{
lean_object* v_val_5792_; lean_object* v___x_5794_; 
v_val_5792_ = lean_ctor_get(v_a_5783_, 0);
lean_inc(v_val_5792_);
lean_dec_ref_known(v_a_5783_, 1);
if (v_isShared_5786_ == 0)
{
lean_ctor_set(v___x_5785_, 0, v_val_5792_);
v___x_5794_ = v___x_5785_;
goto v_reusejp_5793_;
}
else
{
lean_object* v_reuseFailAlloc_5795_; 
v_reuseFailAlloc_5795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5795_, 0, v_val_5792_);
v___x_5794_ = v_reuseFailAlloc_5795_;
goto v_reusejp_5793_;
}
v_reusejp_5793_:
{
return v___x_5794_;
}
}
}
}
else
{
lean_object* v_a_5797_; lean_object* v___x_5799_; uint8_t v_isShared_5800_; uint8_t v_isSharedCheck_5804_; 
v_a_5797_ = lean_ctor_get(v___x_5782_, 0);
v_isSharedCheck_5804_ = !lean_is_exclusive(v___x_5782_);
if (v_isSharedCheck_5804_ == 0)
{
v___x_5799_ = v___x_5782_;
v_isShared_5800_ = v_isSharedCheck_5804_;
goto v_resetjp_5798_;
}
else
{
lean_inc(v_a_5797_);
lean_dec(v___x_5782_);
v___x_5799_ = lean_box(0);
v_isShared_5800_ = v_isSharedCheck_5804_;
goto v_resetjp_5798_;
}
v_resetjp_5798_:
{
lean_object* v___x_5802_; 
if (v_isShared_5800_ == 0)
{
v___x_5802_ = v___x_5799_;
goto v_reusejp_5801_;
}
else
{
lean_object* v_reuseFailAlloc_5803_; 
v_reuseFailAlloc_5803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5803_, 0, v_a_5797_);
v___x_5802_ = v_reuseFailAlloc_5803_;
goto v_reusejp_5801_;
}
v_reusejp_5801_:
{
return v___x_5802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance___lam__0___boxed(lean_object* v_compile_5805_, lean_object* v_logCompileErrors_5806_, lean_object* v_isMeta_5807_, lean_object* v_exposeAux_5808_, lean_object* v_inst_5809_, lean_object* v_expectedType_5810_, lean_object* v___x_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_){
_start:
{
uint8_t v_compile_boxed_5817_; uint8_t v_logCompileErrors_boxed_5818_; uint8_t v_isMeta_boxed_5819_; uint8_t v_exposeAux_boxed_5820_; uint8_t v___x_540__boxed_5821_; lean_object* v_res_5822_; 
v_compile_boxed_5817_ = lean_unbox(v_compile_5805_);
v_logCompileErrors_boxed_5818_ = lean_unbox(v_logCompileErrors_5806_);
v_isMeta_boxed_5819_ = lean_unbox(v_isMeta_5807_);
v_exposeAux_boxed_5820_ = lean_unbox(v_exposeAux_5808_);
v___x_540__boxed_5821_ = lean_unbox(v___x_5811_);
v_res_5822_ = l_Lean_Meta_wrapInstance___lam__0(v_compile_boxed_5817_, v_logCompileErrors_boxed_5818_, v_isMeta_boxed_5819_, v_exposeAux_boxed_5820_, v_inst_5809_, v_expectedType_5810_, v___x_540__boxed_5821_, v___y_5812_, v___y_5813_, v___y_5814_, v___y_5815_);
lean_dec(v___y_5815_);
lean_dec_ref(v___y_5814_);
lean_dec(v___y_5813_);
lean_dec_ref(v___y_5812_);
return v_res_5822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance(lean_object* v_inst_5823_, lean_object* v_expectedType_5824_, uint8_t v_compile_5825_, uint8_t v_logCompileErrors_5826_, uint8_t v_isMeta_5827_, uint8_t v_exposeAux_5828_, lean_object* v_a_5829_, lean_object* v_a_5830_, lean_object* v_a_5831_, lean_object* v_a_5832_){
_start:
{
lean_object* v___y_5835_; lean_object* v___x_5852_; uint8_t v_transparency_5853_; uint8_t v___x_5854_; uint8_t v___x_5855_; uint8_t v___x_5856_; 
v___x_5852_ = l_Lean_Meta_Context_config(v_a_5829_);
v_transparency_5853_ = lean_ctor_get_uint8(v___x_5852_, 9);
lean_dec_ref(v___x_5852_);
v___x_5854_ = 3;
v___x_5855_ = 0;
v___x_5856_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_5853_, v___x_5854_);
if (v___x_5856_ == 0)
{
lean_object* v_keyedConfig_5857_; uint8_t v_trackZetaDelta_5858_; lean_object* v_zetaDeltaSet_5859_; lean_object* v_lctx_5860_; lean_object* v_localInstances_5861_; lean_object* v_defEqCtx_x3f_5862_; lean_object* v_synthPendingDepth_5863_; lean_object* v_customCanUnfoldPredicate_x3f_5864_; uint8_t v_univApprox_5865_; uint8_t v_inTypeClassResolution_5866_; uint8_t v_cacheInferType_5867_; lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5870_; 
v_keyedConfig_5857_ = lean_ctor_get(v_a_5829_, 0);
v_trackZetaDelta_5858_ = lean_ctor_get_uint8(v_a_5829_, sizeof(void*)*7);
v_zetaDeltaSet_5859_ = lean_ctor_get(v_a_5829_, 1);
v_lctx_5860_ = lean_ctor_get(v_a_5829_, 2);
v_localInstances_5861_ = lean_ctor_get(v_a_5829_, 3);
v_defEqCtx_x3f_5862_ = lean_ctor_get(v_a_5829_, 4);
v_synthPendingDepth_5863_ = lean_ctor_get(v_a_5829_, 5);
v_customCanUnfoldPredicate_x3f_5864_ = lean_ctor_get(v_a_5829_, 6);
v_univApprox_5865_ = lean_ctor_get_uint8(v_a_5829_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_5866_ = lean_ctor_get_uint8(v_a_5829_, sizeof(void*)*7 + 2);
v_cacheInferType_5867_ = lean_ctor_get_uint8(v_a_5829_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_5857_);
v___x_5868_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_5854_, v_keyedConfig_5857_);
lean_inc(v_customCanUnfoldPredicate_x3f_5864_);
lean_inc(v_synthPendingDepth_5863_);
lean_inc(v_defEqCtx_x3f_5862_);
lean_inc_ref(v_localInstances_5861_);
lean_inc_ref(v_lctx_5860_);
lean_inc(v_zetaDeltaSet_5859_);
v___x_5869_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5869_, 0, v___x_5868_);
lean_ctor_set(v___x_5869_, 1, v_zetaDeltaSet_5859_);
lean_ctor_set(v___x_5869_, 2, v_lctx_5860_);
lean_ctor_set(v___x_5869_, 3, v_localInstances_5861_);
lean_ctor_set(v___x_5869_, 4, v_defEqCtx_x3f_5862_);
lean_ctor_set(v___x_5869_, 5, v_synthPendingDepth_5863_);
lean_ctor_set(v___x_5869_, 6, v_customCanUnfoldPredicate_x3f_5864_);
lean_ctor_set_uint8(v___x_5869_, sizeof(void*)*7, v_trackZetaDelta_5858_);
lean_ctor_set_uint8(v___x_5869_, sizeof(void*)*7 + 1, v_univApprox_5865_);
lean_ctor_set_uint8(v___x_5869_, sizeof(void*)*7 + 2, v_inTypeClassResolution_5866_);
lean_ctor_set_uint8(v___x_5869_, sizeof(void*)*7 + 3, v_cacheInferType_5867_);
v___x_5870_ = l_Lean_Meta_wrapInstance___lam__0(v_compile_5825_, v_logCompileErrors_5826_, v_isMeta_5827_, v_exposeAux_5828_, v_inst_5823_, v_expectedType_5824_, v___x_5855_, v___x_5869_, v_a_5830_, v_a_5831_, v_a_5832_);
lean_dec_ref_known(v___x_5869_, 7);
v___y_5835_ = v___x_5870_;
goto v___jp_5834_;
}
else
{
lean_object* v___x_5871_; 
v___x_5871_ = l_Lean_Meta_wrapInstance___lam__0(v_compile_5825_, v_logCompileErrors_5826_, v_isMeta_5827_, v_exposeAux_5828_, v_inst_5823_, v_expectedType_5824_, v___x_5855_, v_a_5829_, v_a_5830_, v_a_5831_, v_a_5832_);
v___y_5835_ = v___x_5871_;
goto v___jp_5834_;
}
v___jp_5834_:
{
if (lean_obj_tag(v___y_5835_) == 0)
{
lean_object* v_a_5836_; lean_object* v___x_5838_; uint8_t v_isShared_5839_; uint8_t v_isSharedCheck_5843_; 
v_a_5836_ = lean_ctor_get(v___y_5835_, 0);
v_isSharedCheck_5843_ = !lean_is_exclusive(v___y_5835_);
if (v_isSharedCheck_5843_ == 0)
{
v___x_5838_ = v___y_5835_;
v_isShared_5839_ = v_isSharedCheck_5843_;
goto v_resetjp_5837_;
}
else
{
lean_inc(v_a_5836_);
lean_dec(v___y_5835_);
v___x_5838_ = lean_box(0);
v_isShared_5839_ = v_isSharedCheck_5843_;
goto v_resetjp_5837_;
}
v_resetjp_5837_:
{
lean_object* v___x_5841_; 
if (v_isShared_5839_ == 0)
{
v___x_5841_ = v___x_5838_;
goto v_reusejp_5840_;
}
else
{
lean_object* v_reuseFailAlloc_5842_; 
v_reuseFailAlloc_5842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5842_, 0, v_a_5836_);
v___x_5841_ = v_reuseFailAlloc_5842_;
goto v_reusejp_5840_;
}
v_reusejp_5840_:
{
return v___x_5841_;
}
}
}
else
{
lean_object* v_a_5844_; lean_object* v___x_5846_; uint8_t v_isShared_5847_; uint8_t v_isSharedCheck_5851_; 
v_a_5844_ = lean_ctor_get(v___y_5835_, 0);
v_isSharedCheck_5851_ = !lean_is_exclusive(v___y_5835_);
if (v_isSharedCheck_5851_ == 0)
{
v___x_5846_ = v___y_5835_;
v_isShared_5847_ = v_isSharedCheck_5851_;
goto v_resetjp_5845_;
}
else
{
lean_inc(v_a_5844_);
lean_dec(v___y_5835_);
v___x_5846_ = lean_box(0);
v_isShared_5847_ = v_isSharedCheck_5851_;
goto v_resetjp_5845_;
}
v_resetjp_5845_:
{
lean_object* v___x_5849_; 
if (v_isShared_5847_ == 0)
{
v___x_5849_ = v___x_5846_;
goto v_reusejp_5848_;
}
else
{
lean_object* v_reuseFailAlloc_5850_; 
v_reuseFailAlloc_5850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5850_, 0, v_a_5844_);
v___x_5849_ = v_reuseFailAlloc_5850_;
goto v_reusejp_5848_;
}
v_reusejp_5848_:
{
return v___x_5849_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_wrapInstance___boxed(lean_object* v_inst_5872_, lean_object* v_expectedType_5873_, lean_object* v_compile_5874_, lean_object* v_logCompileErrors_5875_, lean_object* v_isMeta_5876_, lean_object* v_exposeAux_5877_, lean_object* v_a_5878_, lean_object* v_a_5879_, lean_object* v_a_5880_, lean_object* v_a_5881_, lean_object* v_a_5882_){
_start:
{
uint8_t v_compile_boxed_5883_; uint8_t v_logCompileErrors_boxed_5884_; uint8_t v_isMeta_boxed_5885_; uint8_t v_exposeAux_boxed_5886_; lean_object* v_res_5887_; 
v_compile_boxed_5883_ = lean_unbox(v_compile_5874_);
v_logCompileErrors_boxed_5884_ = lean_unbox(v_logCompileErrors_5875_);
v_isMeta_boxed_5885_ = lean_unbox(v_isMeta_5876_);
v_exposeAux_boxed_5886_ = lean_unbox(v_exposeAux_5877_);
v_res_5887_ = l_Lean_Meta_wrapInstance(v_inst_5872_, v_expectedType_5873_, v_compile_boxed_5883_, v_logCompileErrors_boxed_5884_, v_isMeta_boxed_5885_, v_exposeAux_boxed_5886_, v_a_5878_, v_a_5879_, v_a_5880_, v_a_5881_);
lean_dec(v_a_5881_);
lean_dec_ref(v_a_5880_);
lean_dec(v_a_5879_);
lean_dec_ref(v_a_5878_);
return v_res_5887_;
}
}
lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_WrapInstance(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_700393601____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap);
lean_dec_ref(res);
res = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_1995055096____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap_reuseSubInstances);
lean_dec_ref(res);
res = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2138875086____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap_instances = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap_instances);
lean_dec_ref(res);
res = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_2650342594____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_inferInstanceAs_wrap_data = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_inferInstanceAs_wrap_data);
lean_dec_ref(res);
res = l___private_Lean_Meta_WrapInstance_0__Lean_Meta_initFn_00___x40_Lean_Meta_WrapInstance_3246864463____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_WrapInstance(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_CtorRecognizer(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_WrapInstance(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CtorRecognizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WrapInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_WrapInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_WrapInstance(builtin);
}
#ifdef __cplusplus
}
#endif
