// Lean compiler output
// Module: Lean.Meta.Structure
// Imports: public import Lean.AddDecl public import Lean.Meta.AppBuilder import Lean.Structure import Lean.Meta.Transform
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_isOutParam(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_addProjectionFnInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_updateForallBinderInfos(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVarsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getStructureName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_getStructureName___closed__0 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__1;
static const lean_string_object l_Lean_Meta_getStructureName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is not a structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__2 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__3;
static const lean_string_object l_Lean_Meta_getStructureName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__4 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__4_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__3;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__4;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to generate projection `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` for the 'Prop'-valued type `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, field must be a proof, but it has type"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__5;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` for `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__6_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, too many structure parameter overrides"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__8_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__9;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "`, not enough constructor fields"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkProjections___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "projection generation failed, `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` is an ill-formed inductive datatype"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "cannot generate projections for `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "`, does not have exactly one constructor"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__0;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__1;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__2;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__3;
static const lean_array_object l_Lean_Meta_mkProjections___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkProjections___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_etaStructReduce___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_etaStructReduce___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_etaStructReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaStructReduce___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_etaStructReduce___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Structure"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Meta.instantiateStructDefaultValueFn\?"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "assertion violation: us.length == cinfo.levelParams.length\n  "};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; uint8_t v___x_9_; lean_object* v_env_10_; lean_object* v___x_11_; lean_object* v_toCold_12_; lean_object* v_mctx_13_; lean_object* v_lctx_14_; lean_object* v_options_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = 0;
v_env_10_ = l_Lean_Environment_setRecordingDeps(v_env_8_, v___x_9_);
v___x_11_ = lean_st_ref_get(v___y_3_);
v_toCold_12_ = lean_ctor_get(v___y_4_, 0);
v_mctx_13_ = lean_ctor_get(v___x_11_, 0);
lean_inc_ref(v_mctx_13_);
lean_dec(v___x_11_);
v_lctx_14_ = lean_ctor_get(v___y_2_, 2);
v_options_15_ = lean_ctor_get(v_toCold_12_, 2);
lean_inc_ref(v_options_15_);
lean_inc_ref(v_lctx_14_);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v_env_10_);
lean_ctor_set(v___x_16_, 1, v_mctx_13_);
lean_ctor_set(v___x_16_, 2, v_lctx_14_);
lean_ctor_set(v___x_16_, 3, v_options_15_);
v___x_17_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v_msgData_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_32_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_32_);
lean_ctor_set(v___x_38_, 1, v_a_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__0));
v___x_52_ = l_Lean_stringToMessageData(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__3(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__2));
v___x_55_ = l_Lean_stringToMessageData(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__5(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__4));
v___x_58_ = l_Lean_stringToMessageData(v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object* v_struct_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Expr_getAppFn(v_struct_59_);
if (lean_obj_tag(v___x_65_) == 4)
{
lean_object* v_declName_66_; lean_object* v___x_67_; lean_object* v_env_68_; uint8_t v___x_69_; 
v_declName_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc_n(v_declName_66_, 2);
lean_dec_ref_known(v___x_65_, 2);
v___x_67_ = lean_st_ref_get(v_a_63_);
v_env_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc_ref(v_env_68_);
lean_dec(v___x_67_);
v___x_69_ = l_Lean_isStructure(v_env_68_, v_declName_66_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
v___x_70_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_71_ = l_Lean_MessageData_ofConstName(v_declName_66_, v___x_69_);
v___x_72_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__3, &l_Lean_Meta_getStructureName___closed__3_once, _init_l_Lean_Meta_getStructureName___closed__3);
v___x_74_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_72_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_74_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
else
{
lean_object* v___x_84_; 
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v_declName_66_);
return v___x_84_;
}
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec_ref(v___x_65_);
v___x_85_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__5, &l_Lean_Meta_getStructureName___closed__5_once, _init_l_Lean_Meta_getStructureName___closed__5);
v___x_86_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_85_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object* v_struct_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_getStructureName(v_struct_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
lean_dec(v_a_91_);
lean_dec_ref(v_a_90_);
lean_dec(v_a_89_);
lean_dec_ref(v_a_88_);
lean_dec_ref(v_struct_87_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object* v_00_u03b1_94_, lean_object* v_msg_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object* v_00_u03b1_102_, lean_object* v_msg_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(v_00_u03b1_102_, v_msg_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___redArg(lean_object* v_name_110_, lean_object* v_levelParams_111_, lean_object* v_type_112_, lean_object* v_value_113_, lean_object* v_hints_114_, lean_object* v___y_115_){
_start:
{
lean_object* v___x_117_; uint8_t v___y_119_; lean_object* v_env_127_; uint8_t v___x_128_; 
v___x_117_ = lean_st_ref_get(v___y_115_);
v_env_127_ = lean_ctor_get(v___x_117_, 0);
lean_inc_ref_n(v_env_127_, 2);
lean_dec(v___x_117_);
v___x_128_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_type_112_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_value_113_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 1;
v___y_119_ = v___x_130_;
goto v___jp_118_;
}
else
{
goto v___jp_125_;
}
}
else
{
lean_dec_ref(v_env_127_);
goto v___jp_125_;
}
v___jp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
lean_inc(v_name_110_);
v___x_120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_120_, 0, v_name_110_);
lean_ctor_set(v___x_120_, 1, v_levelParams_111_);
lean_ctor_set(v___x_120_, 2, v_type_112_);
v___x_121_ = lean_box(0);
v___x_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_122_, 0, v_name_110_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_123_, 0, v___x_120_);
lean_ctor_set(v___x_123_, 1, v_value_113_);
lean_ctor_set(v___x_123_, 2, v_hints_114_);
lean_ctor_set(v___x_123_, 3, v___x_122_);
lean_ctor_set_uint8(v___x_123_, sizeof(void*)*4, v___y_119_);
v___x_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
return v___x_124_;
}
v___jp_125_:
{
uint8_t v___x_126_; 
v___x_126_ = 0;
v___y_119_ = v___x_126_;
goto v___jp_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___redArg___boxed(lean_object* v_name_131_, lean_object* v_levelParams_132_, lean_object* v_type_133_, lean_object* v_value_134_, lean_object* v_hints_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___redArg(v_name_131_, v_levelParams_132_, v_type_133_, v_value_134_, v_hints_135_, v___y_136_);
lean_dec(v___y_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5(lean_object* v_name_139_, lean_object* v_levelParams_140_, lean_object* v_type_141_, lean_object* v_value_142_, lean_object* v_hints_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___redArg(v_name_139_, v_levelParams_140_, v_type_141_, v_value_142_, v_hints_143_, v___y_147_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object* v_name_150_, lean_object* v_levelParams_151_, lean_object* v_type_152_, lean_object* v_value_153_, lean_object* v_hints_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5(v_name_150_, v_levelParams_151_, v_type_152_, v_value_153_, v_hints_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object* v_k_161_, lean_object* v_b_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v___x_168_; 
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
v___x_168_ = lean_apply_6(v_k_161_, v_b_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, lean_box(0));
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object* v_k_169_, lean_object* v_b_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(v_k_169_, v_b_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object* v_name_177_, uint8_t v_bi_178_, lean_object* v_type_179_, lean_object* v_k_180_, uint8_t v_kind_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
lean_object* v___f_187_; lean_object* v___x_188_; 
v___f_187_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_187_, 0, v_k_180_);
v___x_188_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_177_, v_bi_178_, v_type_179_, v___f_187_, v_kind_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_188_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
v_a_197_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_188_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_188_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object* v_name_205_, lean_object* v_bi_206_, lean_object* v_type_207_, lean_object* v_k_208_, lean_object* v_kind_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
uint8_t v_bi_boxed_215_; uint8_t v_kind_boxed_216_; lean_object* v_res_217_; 
v_bi_boxed_215_ = lean_unbox(v_bi_206_);
v_kind_boxed_216_ = lean_unbox(v_kind_209_);
v_res_217_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg(v_name_205_, v_bi_boxed_215_, v_type_207_, v_k_208_, v_kind_boxed_216_, v___y_210_, v___y_211_, v___y_212_, v___y_213_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10(lean_object* v_00_u03b1_218_, lean_object* v_name_219_, uint8_t v_bi_220_, lean_object* v_type_221_, lean_object* v_k_222_, uint8_t v_kind_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg(v_name_219_, v_bi_220_, v_type_221_, v_k_222_, v_kind_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object* v_00_u03b1_230_, lean_object* v_name_231_, lean_object* v_bi_232_, lean_object* v_type_233_, lean_object* v_k_234_, lean_object* v_kind_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
uint8_t v_bi_boxed_241_; uint8_t v_kind_boxed_242_; lean_object* v_res_243_; 
v_bi_boxed_241_ = lean_unbox(v_bi_232_);
v_kind_boxed_242_ = lean_unbox(v_kind_235_);
v_res_243_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10(v_00_u03b1_230_, v_name_231_, v_bi_boxed_241_, v_type_233_, v_k_234_, v_kind_boxed_242_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___lam__0(lean_object* v_k_244_, lean_object* v_b_245_, lean_object* v_c_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v___x_252_; 
lean_inc(v___y_250_);
lean_inc_ref(v___y_249_);
lean_inc(v___y_248_);
lean_inc_ref(v___y_247_);
v___x_252_ = lean_apply_7(v_k_244_, v_b_245_, v_c_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, lean_box(0));
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___lam__0___boxed(lean_object* v_k_253_, lean_object* v_b_254_, lean_object* v_c_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___lam__0(v_k_253_, v_b_254_, v_c_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object* v_type_262_, lean_object* v_maxFVars_x3f_263_, lean_object* v_k_264_, uint8_t v_cleanupAnnotations_265_, uint8_t v_whnfType_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v___f_272_; lean_object* v___x_273_; 
v___f_272_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_272_, 0, v_k_264_);
v___x_273_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_262_, v_maxFVars_x3f_263_, v___f_272_, v_cleanupAnnotations_265_, v_whnfType_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_273_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_273_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
v_a_282_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_273_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_273_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object* v_type_290_, lean_object* v_maxFVars_x3f_291_, lean_object* v_k_292_, lean_object* v_cleanupAnnotations_293_, lean_object* v_whnfType_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_300_; uint8_t v_whnfType_boxed_301_; lean_object* v_res_302_; 
v_cleanupAnnotations_boxed_300_ = lean_unbox(v_cleanupAnnotations_293_);
v_whnfType_boxed_301_ = lean_unbox(v_whnfType_294_);
v_res_302_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg(v_type_290_, v_maxFVars_x3f_291_, v_k_292_, v_cleanupAnnotations_boxed_300_, v_whnfType_boxed_301_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11(lean_object* v_00_u03b1_303_, lean_object* v_type_304_, lean_object* v_maxFVars_x3f_305_, lean_object* v_k_306_, uint8_t v_cleanupAnnotations_307_, uint8_t v_whnfType_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg(v_type_304_, v_maxFVars_x3f_305_, v_k_306_, v_cleanupAnnotations_307_, v_whnfType_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object* v_00_u03b1_315_, lean_object* v_type_316_, lean_object* v_maxFVars_x3f_317_, lean_object* v_k_318_, lean_object* v_cleanupAnnotations_319_, lean_object* v_whnfType_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_326_; uint8_t v_whnfType_boxed_327_; lean_object* v_res_328_; 
v_cleanupAnnotations_boxed_326_ = lean_unbox(v_cleanupAnnotations_319_);
v_whnfType_boxed_327_ = lean_unbox(v_whnfType_320_);
v_res_328_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11(v_00_u03b1_315_, v_type_316_, v_maxFVars_x3f_317_, v_k_318_, v_cleanupAnnotations_boxed_326_, v_whnfType_boxed_327_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___redArg(lean_object* v_lctx_329_, lean_object* v_localInsts_330_, lean_object* v_x_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_329_, v_localInsts_330_, v_x_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
v_a_346_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_337_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_337_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___redArg___boxed(lean_object* v_lctx_354_, lean_object* v_localInsts_355_, lean_object* v_x_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___redArg(v_lctx_354_, v_localInsts_355_, v_x_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12(lean_object* v_00_u03b1_363_, lean_object* v_lctx_364_, lean_object* v_localInsts_365_, lean_object* v_x_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___redArg(v_lctx_364_, v_localInsts_365_, v_x_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___boxed(lean_object* v_00_u03b1_373_, lean_object* v_lctx_374_, lean_object* v_localInsts_375_, lean_object* v_x_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12(v_00_u03b1_373_, v_lctx_374_, v_localInsts_375_, v_x_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t v_instImplicit_383_, lean_object* v_as_384_, size_t v_sz_385_, size_t v_i_386_, lean_object* v_b_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_a_393_; uint8_t v___x_397_; 
v___x_397_ = lean_usize_dec_lt(v_i_386_, v_sz_385_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; 
v___x_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_398_, 0, v_b_387_);
return v___x_398_;
}
else
{
lean_object* v_a_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_a_399_ = lean_array_uget_borrowed(v_as_384_, v_i_386_);
v___x_400_ = l_Lean_Expr_fvarId_x21(v_a_399_);
lean_inc(v___x_400_);
v___x_401_ = l_Lean_FVarId_getDecl___redArg(v___x_400_, v___y_388_, v___y_389_, v___y_390_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; uint8_t v___x_408_; uint8_t v___x_409_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v___x_401_, 1);
v___x_408_ = l_Lean_LocalDecl_binderInfo(v_a_402_);
v___x_409_ = l_Lean_BinderInfo_isInstImplicit(v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = l_Lean_LocalDecl_type(v_a_402_);
v___x_411_ = l_Lean_Expr_isOutParam(v___x_410_);
lean_dec_ref(v___x_410_);
if (v___x_411_ == 0)
{
uint8_t v___x_412_; lean_object* v___x_413_; 
lean_dec(v_a_402_);
v___x_412_ = 0;
v___x_413_ = l_Lean_LocalContext_setBinderInfo(v_b_387_, v___x_400_, v___x_412_);
v_a_393_ = v___x_413_;
goto v___jp_392_;
}
else
{
goto v___jp_403_;
}
}
else
{
goto v___jp_403_;
}
v___jp_403_:
{
uint8_t v___x_404_; uint8_t v___x_405_; 
v___x_404_ = l_Lean_LocalDecl_binderInfo(v_a_402_);
lean_dec(v_a_402_);
v___x_405_ = l_Lean_BinderInfo_isInstImplicit(v___x_404_);
if (v___x_405_ == 0)
{
lean_dec(v___x_400_);
v_a_393_ = v_b_387_;
goto v___jp_392_;
}
else
{
if (v_instImplicit_383_ == 0)
{
lean_dec(v___x_400_);
v_a_393_ = v_b_387_;
goto v___jp_392_;
}
else
{
uint8_t v___x_406_; lean_object* v___x_407_; 
v___x_406_ = 1;
v___x_407_ = l_Lean_LocalContext_setBinderInfo(v_b_387_, v___x_400_, v___x_406_);
v_a_393_ = v___x_407_;
goto v___jp_392_;
}
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec(v___x_400_);
lean_dec_ref(v_b_387_);
v_a_414_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_401_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_401_);
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
v___jp_392_:
{
size_t v___x_394_; size_t v___x_395_; 
v___x_394_ = ((size_t)1ULL);
v___x_395_ = lean_usize_add(v_i_386_, v___x_394_);
v_i_386_ = v___x_395_;
v_b_387_ = v_a_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object* v_instImplicit_422_, lean_object* v_as_423_, lean_object* v_sz_424_, lean_object* v_i_425_, lean_object* v_b_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
uint8_t v_instImplicit_boxed_431_; size_t v_sz_boxed_432_; size_t v_i_boxed_433_; lean_object* v_res_434_; 
v_instImplicit_boxed_431_ = lean_unbox(v_instImplicit_422_);
v_sz_boxed_432_ = lean_unbox_usize(v_sz_424_);
lean_dec(v_sz_424_);
v_i_boxed_433_ = lean_unbox_usize(v_i_425_);
lean_dec(v_i_425_);
v_res_434_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_boxed_431_, v_as_423_, v_sz_boxed_432_, v_i_boxed_433_, v_b_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec_ref(v_as_423_);
return v_res_434_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_435_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_436_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0);
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg(){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__1);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___boxed(lean_object* v___dummy_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg();
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___lam__0(lean_object* v___y_442_, uint8_t v_isExporting_443_, lean_object* v___x_444_, lean_object* v___y_445_, lean_object* v___x_446_, lean_object* v_a_x3f_447_){
_start:
{
lean_object* v___x_449_; lean_object* v_env_450_; lean_object* v_nextMacroScope_451_; lean_object* v_ngen_452_; lean_object* v_auxDeclNGen_453_; lean_object* v_traceState_454_; lean_object* v_recordedDeps_455_; lean_object* v_messages_456_; lean_object* v_infoState_457_; lean_object* v_snapshotTasks_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_483_; 
v___x_449_ = lean_st_ref_take(v___y_442_);
v_env_450_ = lean_ctor_get(v___x_449_, 0);
v_nextMacroScope_451_ = lean_ctor_get(v___x_449_, 1);
v_ngen_452_ = lean_ctor_get(v___x_449_, 2);
v_auxDeclNGen_453_ = lean_ctor_get(v___x_449_, 3);
v_traceState_454_ = lean_ctor_get(v___x_449_, 4);
v_recordedDeps_455_ = lean_ctor_get(v___x_449_, 6);
v_messages_456_ = lean_ctor_get(v___x_449_, 7);
v_infoState_457_ = lean_ctor_get(v___x_449_, 8);
v_snapshotTasks_458_ = lean_ctor_get(v___x_449_, 9);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_483_ == 0)
{
lean_object* v_unused_484_; 
v_unused_484_ = lean_ctor_get(v___x_449_, 5);
lean_dec(v_unused_484_);
v___x_460_ = v___x_449_;
v_isShared_461_ = v_isSharedCheck_483_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_snapshotTasks_458_);
lean_inc(v_infoState_457_);
lean_inc(v_messages_456_);
lean_inc(v_recordedDeps_455_);
lean_inc(v_traceState_454_);
lean_inc(v_auxDeclNGen_453_);
lean_inc(v_ngen_452_);
lean_inc(v_nextMacroScope_451_);
lean_inc(v_env_450_);
lean_dec(v___x_449_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_483_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_462_ = l_Lean_Environment_setExporting(v_env_450_, v_isExporting_443_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 5, v___x_444_);
lean_ctor_set(v___x_460_, 0, v___x_462_);
v___x_464_ = v___x_460_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_462_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v_nextMacroScope_451_);
lean_ctor_set(v_reuseFailAlloc_482_, 2, v_ngen_452_);
lean_ctor_set(v_reuseFailAlloc_482_, 3, v_auxDeclNGen_453_);
lean_ctor_set(v_reuseFailAlloc_482_, 4, v_traceState_454_);
lean_ctor_set(v_reuseFailAlloc_482_, 5, v___x_444_);
lean_ctor_set(v_reuseFailAlloc_482_, 6, v_recordedDeps_455_);
lean_ctor_set(v_reuseFailAlloc_482_, 7, v_messages_456_);
lean_ctor_set(v_reuseFailAlloc_482_, 8, v_infoState_457_);
lean_ctor_set(v_reuseFailAlloc_482_, 9, v_snapshotTasks_458_);
v___x_464_ = v_reuseFailAlloc_482_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_mctx_467_; lean_object* v_zetaDeltaFVarIds_468_; lean_object* v_postponed_469_; lean_object* v_diag_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_480_; 
v___x_465_ = lean_st_ref_put(v___y_442_, v___x_464_);
v___x_466_ = lean_st_ref_take(v___y_445_);
v_mctx_467_ = lean_ctor_get(v___x_466_, 0);
v_zetaDeltaFVarIds_468_ = lean_ctor_get(v___x_466_, 2);
v_postponed_469_ = lean_ctor_get(v___x_466_, 3);
v_diag_470_ = lean_ctor_get(v___x_466_, 4);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_480_ == 0)
{
lean_object* v_unused_481_; 
v_unused_481_ = lean_ctor_get(v___x_466_, 1);
lean_dec(v_unused_481_);
v___x_472_ = v___x_466_;
v_isShared_473_ = v_isSharedCheck_480_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_diag_470_);
lean_inc(v_postponed_469_);
lean_inc(v_zetaDeltaFVarIds_468_);
lean_inc(v_mctx_467_);
lean_dec(v___x_466_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_480_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = lean_box(0);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v___x_446_);
v___x_476_ = v___x_472_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_mctx_467_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_479_, 2, v_zetaDeltaFVarIds_468_);
lean_ctor_set(v_reuseFailAlloc_479_, 3, v_postponed_469_);
lean_ctor_set(v_reuseFailAlloc_479_, 4, v_diag_470_);
v___x_476_ = v_reuseFailAlloc_479_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_st_ref_put(v___y_445_, v___x_476_);
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v___x_474_);
return v___x_478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___lam__0___boxed(lean_object* v___y_485_, lean_object* v_isExporting_486_, lean_object* v___x_487_, lean_object* v___y_488_, lean_object* v___x_489_, lean_object* v_a_x3f_490_, lean_object* v___y_491_){
_start:
{
uint8_t v_isExporting_boxed_492_; lean_object* v_res_493_; 
v_isExporting_boxed_492_ = lean_unbox(v_isExporting_486_);
v_res_493_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___lam__0(v___y_485_, v_isExporting_boxed_492_, v___x_487_, v___y_488_, v___x_489_, v_a_x3f_490_);
lean_dec(v_a_x3f_490_);
lean_dec(v___y_488_);
lean_dec(v___y_485_);
return v_res_493_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
return v___x_495_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0);
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
return v___x_497_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg();
return v___x_498_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0);
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__4(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_unsigned_to_nat(0u);
v___x_502_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0);
v___x_503_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
lean_ctor_set(v___x_503_, 2, v___x_501_);
return v___x_503_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_504_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__4, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__4_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__4);
v___x_505_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__3);
v___x_506_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__0);
v___x_507_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2);
v___x_508_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
lean_ctor_set(v___x_508_, 1, v___x_506_);
lean_ctor_set(v___x_508_, 2, v___x_505_);
lean_ctor_set(v___x_508_, 3, v___x_506_);
lean_ctor_set(v___x_508_, 4, v___x_506_);
lean_ctor_set(v___x_508_, 5, v___x_506_);
lean_ctor_set(v___x_508_, 6, v___x_506_);
lean_ctor_set(v___x_508_, 7, v___x_504_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg(lean_object* v_x_509_, uint8_t v_isExporting_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; lean_object* v_env_517_; lean_object* v___x_518_; uint8_t v_isModule_519_; 
v___x_516_ = lean_st_ref_get(v___y_514_);
v_env_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc_ref(v_env_517_);
lean_dec(v___x_516_);
v___x_518_ = l_Lean_Environment_header(v_env_517_);
v_isModule_519_ = lean_ctor_get_uint8(v___x_518_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_518_);
if (v_isModule_519_ == 0)
{
lean_object* v___x_520_; 
lean_dec_ref(v_env_517_);
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
v___x_520_ = lean_apply_5(v_x_509_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
return v___x_520_;
}
else
{
uint8_t v_isExporting_521_; 
v_isExporting_521_ = lean_ctor_get_uint8(v_env_517_, sizeof(void*)*13);
lean_dec_ref(v_env_517_);
if (v_isExporting_510_ == 0)
{
if (v_isExporting_521_ == 0)
{
lean_object* v___x_588_; 
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
v___x_588_ = lean_apply_5(v_x_509_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
return v___x_588_;
}
else
{
goto v___jp_522_;
}
}
else
{
if (v_isExporting_521_ == 0)
{
goto v___jp_522_;
}
else
{
lean_object* v___x_589_; 
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
v___x_589_ = lean_apply_5(v_x_509_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
return v___x_589_;
}
}
v___jp_522_:
{
lean_object* v___x_523_; lean_object* v_env_524_; lean_object* v_nextMacroScope_525_; lean_object* v_ngen_526_; lean_object* v_auxDeclNGen_527_; lean_object* v_traceState_528_; lean_object* v_recordedDeps_529_; lean_object* v_messages_530_; lean_object* v_infoState_531_; lean_object* v_snapshotTasks_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_586_; 
v___x_523_ = lean_st_ref_take(v___y_514_);
v_env_524_ = lean_ctor_get(v___x_523_, 0);
v_nextMacroScope_525_ = lean_ctor_get(v___x_523_, 1);
v_ngen_526_ = lean_ctor_get(v___x_523_, 2);
v_auxDeclNGen_527_ = lean_ctor_get(v___x_523_, 3);
v_traceState_528_ = lean_ctor_get(v___x_523_, 4);
v_recordedDeps_529_ = lean_ctor_get(v___x_523_, 6);
v_messages_530_ = lean_ctor_get(v___x_523_, 7);
v_infoState_531_ = lean_ctor_get(v___x_523_, 8);
v_snapshotTasks_532_ = lean_ctor_get(v___x_523_, 9);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; 
v_unused_587_ = lean_ctor_get(v___x_523_, 5);
lean_dec(v_unused_587_);
v___x_534_ = v___x_523_;
v_isShared_535_ = v_isSharedCheck_586_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_snapshotTasks_532_);
lean_inc(v_infoState_531_);
lean_inc(v_messages_530_);
lean_inc(v_recordedDeps_529_);
lean_inc(v_traceState_528_);
lean_inc(v_auxDeclNGen_527_);
lean_inc(v_ngen_526_);
lean_inc(v_nextMacroScope_525_);
lean_inc(v_env_524_);
lean_dec(v___x_523_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_586_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_536_ = l_Lean_Environment_setExporting(v_env_524_, v_isExporting_510_);
v___x_537_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 5, v___x_537_);
lean_ctor_set(v___x_534_, 0, v___x_536_);
v___x_539_ = v___x_534_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v_nextMacroScope_525_);
lean_ctor_set(v_reuseFailAlloc_585_, 2, v_ngen_526_);
lean_ctor_set(v_reuseFailAlloc_585_, 3, v_auxDeclNGen_527_);
lean_ctor_set(v_reuseFailAlloc_585_, 4, v_traceState_528_);
lean_ctor_set(v_reuseFailAlloc_585_, 5, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_585_, 6, v_recordedDeps_529_);
lean_ctor_set(v_reuseFailAlloc_585_, 7, v_messages_530_);
lean_ctor_set(v_reuseFailAlloc_585_, 8, v_infoState_531_);
lean_ctor_set(v_reuseFailAlloc_585_, 9, v_snapshotTasks_532_);
v___x_539_ = v_reuseFailAlloc_585_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v_mctx_542_; lean_object* v_zetaDeltaFVarIds_543_; lean_object* v_postponed_544_; lean_object* v_diag_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_583_; 
v___x_540_ = lean_st_ref_put(v___y_514_, v___x_539_);
v___x_541_ = lean_st_ref_take(v___y_512_);
v_mctx_542_ = lean_ctor_get(v___x_541_, 0);
v_zetaDeltaFVarIds_543_ = lean_ctor_get(v___x_541_, 2);
v_postponed_544_ = lean_ctor_get(v___x_541_, 3);
v_diag_545_ = lean_ctor_get(v___x_541_, 4);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; 
v_unused_584_ = lean_ctor_get(v___x_541_, 1);
lean_dec(v_unused_584_);
v___x_547_ = v___x_541_;
v_isShared_548_ = v_isSharedCheck_583_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_diag_545_);
lean_inc(v_postponed_544_);
lean_inc(v_zetaDeltaFVarIds_543_);
lean_inc(v_mctx_542_);
lean_dec(v___x_541_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_583_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 1, v___x_549_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_mctx_542_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_582_, 2, v_zetaDeltaFVarIds_543_);
lean_ctor_set(v_reuseFailAlloc_582_, 3, v_postponed_544_);
lean_ctor_set(v_reuseFailAlloc_582_, 4, v_diag_545_);
v___x_551_ = v_reuseFailAlloc_582_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; lean_object* v_r_553_; 
v___x_552_ = lean_st_ref_put(v___y_512_, v___x_551_);
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
v_r_553_ = lean_apply_5(v_x_509_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
if (lean_obj_tag(v_r_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_570_; 
v_a_554_ = lean_ctor_get(v_r_553_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v_r_553_);
if (v_isSharedCheck_570_ == 0)
{
v___x_556_ = v_r_553_;
v_isShared_557_ = v_isSharedCheck_570_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v_r_553_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_570_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
lean_inc(v_a_554_);
if (v_isShared_557_ == 0)
{
lean_ctor_set_tag(v___x_556_, 1);
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_569_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v___x_560_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___lam__0(v___y_514_, v_isExporting_521_, v___x_537_, v___y_512_, v___x_549_, v___x_559_);
lean_dec_ref(v___x_559_);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_567_ == 0)
{
lean_object* v_unused_568_; 
v_unused_568_ = lean_ctor_get(v___x_560_, 0);
lean_dec(v_unused_568_);
v___x_562_ = v___x_560_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_dec(v___x_560_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v_a_554_);
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_554_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_a_571_ = lean_ctor_get(v_r_553_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v_r_553_, 1);
v___x_572_ = lean_box(0);
v___x_573_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___lam__0(v___y_514_, v_isExporting_521_, v___x_537_, v___y_512_, v___x_549_, v___x_572_);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_580_ == 0)
{
lean_object* v_unused_581_; 
v_unused_581_ = lean_ctor_get(v___x_573_, 0);
lean_dec(v_unused_581_);
v___x_575_ = v___x_573_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_dec(v___x_573_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set_tag(v___x_575_, 1);
lean_ctor_set(v___x_575_, 0, v_a_571_);
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_571_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___boxed(lean_object* v_x_590_, lean_object* v_isExporting_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
uint8_t v_isExporting_boxed_597_; lean_object* v_res_598_; 
v_isExporting_boxed_597_ = lean_unbox(v_isExporting_591_);
v_res_598_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg(v_x_590_, v_isExporting_boxed_597_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object* v_x_599_, uint8_t v_when_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_){
_start:
{
if (v_when_600_ == 0)
{
lean_object* v___x_606_; 
lean_inc(v___y_604_);
lean_inc_ref(v___y_603_);
lean_inc(v___y_602_);
lean_inc_ref(v___y_601_);
v___x_606_ = lean_apply_5(v_x_599_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, lean_box(0));
return v___x_606_;
}
else
{
uint8_t v___x_607_; lean_object* v___x_608_; 
v___x_607_ = 0;
v___x_608_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg(v_x_599_, v___x_607_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
return v___x_608_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object* v_x_609_, lean_object* v_when_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
uint8_t v_when_boxed_616_; lean_object* v_res_617_; 
v_when_boxed_616_ = lean_unbox(v_when_610_);
v_res_617_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___redArg(v_x_609_, v_when_boxed_616_, v___y_611_, v___y_612_, v___y_613_, v___y_614_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object* v_ref_618_, lean_object* v_msg_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_toCold_625_; lean_object* v_currRecDepth_626_; lean_object* v_ref_627_; uint16_t v_optionFlags_628_; uint8_t v_suppressElabErrors_629_; uint8_t v_checkDeprecated_630_; uint8_t v_isRecordingDeps_631_; lean_object* v_ref_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_toCold_625_ = lean_ctor_get(v___y_622_, 0);
v_currRecDepth_626_ = lean_ctor_get(v___y_622_, 1);
v_ref_627_ = lean_ctor_get(v___y_622_, 2);
v_optionFlags_628_ = lean_ctor_get_uint16(v___y_622_, sizeof(void*)*3);
v_suppressElabErrors_629_ = lean_ctor_get_uint8(v___y_622_, sizeof(void*)*3 + 2);
v_checkDeprecated_630_ = lean_ctor_get_uint8(v___y_622_, sizeof(void*)*3 + 3);
v_isRecordingDeps_631_ = lean_ctor_get_uint8(v___y_622_, sizeof(void*)*3 + 4);
v_ref_632_ = l_Lean_replaceRef(v_ref_618_, v_ref_627_);
lean_inc(v_currRecDepth_626_);
lean_inc_ref(v_toCold_625_);
v___x_633_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_633_, 0, v_toCold_625_);
lean_ctor_set(v___x_633_, 1, v_currRecDepth_626_);
lean_ctor_set(v___x_633_, 2, v_ref_632_);
lean_ctor_set_uint16(v___x_633_, sizeof(void*)*3, v_optionFlags_628_);
lean_ctor_set_uint8(v___x_633_, sizeof(void*)*3 + 2, v_suppressElabErrors_629_);
lean_ctor_set_uint8(v___x_633_, sizeof(void*)*3 + 3, v_checkDeprecated_630_);
lean_ctor_set_uint8(v___x_633_, sizeof(void*)*3 + 4, v_isRecordingDeps_631_);
v___x_634_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_619_, v___y_620_, v___y_621_, v___x_633_, v___y_623_);
lean_dec_ref_known(v___x_633_, 3);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object* v_ref_635_, lean_object* v_msg_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg(v_ref_635_, v_msg_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v_ref_635_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___redArg(lean_object* v_declName_643_, uint8_t v_s_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v___x_648_; lean_object* v_env_649_; lean_object* v_nextMacroScope_650_; lean_object* v_ngen_651_; lean_object* v_auxDeclNGen_652_; lean_object* v_traceState_653_; lean_object* v_recordedDeps_654_; lean_object* v_messages_655_; lean_object* v_infoState_656_; lean_object* v_snapshotTasks_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_686_; 
v___x_648_ = lean_st_ref_take(v___y_646_);
v_env_649_ = lean_ctor_get(v___x_648_, 0);
v_nextMacroScope_650_ = lean_ctor_get(v___x_648_, 1);
v_ngen_651_ = lean_ctor_get(v___x_648_, 2);
v_auxDeclNGen_652_ = lean_ctor_get(v___x_648_, 3);
v_traceState_653_ = lean_ctor_get(v___x_648_, 4);
v_recordedDeps_654_ = lean_ctor_get(v___x_648_, 6);
v_messages_655_ = lean_ctor_get(v___x_648_, 7);
v_infoState_656_ = lean_ctor_get(v___x_648_, 8);
v_snapshotTasks_657_ = lean_ctor_get(v___x_648_, 9);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_686_ == 0)
{
lean_object* v_unused_687_; 
v_unused_687_ = lean_ctor_get(v___x_648_, 5);
lean_dec(v_unused_687_);
v___x_659_ = v___x_648_;
v_isShared_660_ = v_isSharedCheck_686_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_snapshotTasks_657_);
lean_inc(v_infoState_656_);
lean_inc(v_messages_655_);
lean_inc(v_recordedDeps_654_);
lean_inc(v_traceState_653_);
lean_inc(v_auxDeclNGen_652_);
lean_inc(v_ngen_651_);
lean_inc(v_nextMacroScope_650_);
lean_inc(v_env_649_);
lean_dec(v___x_648_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_686_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
uint8_t v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_666_; 
v___x_661_ = 0;
v___x_662_ = lean_box(0);
v___x_663_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_649_, v_declName_643_, v_s_644_, v___x_661_, v___x_662_);
v___x_664_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 5, v___x_664_);
lean_ctor_set(v___x_659_, 0, v___x_663_);
v___x_666_ = v___x_659_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_nextMacroScope_650_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v_ngen_651_);
lean_ctor_set(v_reuseFailAlloc_685_, 3, v_auxDeclNGen_652_);
lean_ctor_set(v_reuseFailAlloc_685_, 4, v_traceState_653_);
lean_ctor_set(v_reuseFailAlloc_685_, 5, v___x_664_);
lean_ctor_set(v_reuseFailAlloc_685_, 6, v_recordedDeps_654_);
lean_ctor_set(v_reuseFailAlloc_685_, 7, v_messages_655_);
lean_ctor_set(v_reuseFailAlloc_685_, 8, v_infoState_656_);
lean_ctor_set(v_reuseFailAlloc_685_, 9, v_snapshotTasks_657_);
v___x_666_ = v_reuseFailAlloc_685_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v_mctx_669_; lean_object* v_zetaDeltaFVarIds_670_; lean_object* v_postponed_671_; lean_object* v_diag_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_683_; 
v___x_667_ = lean_st_ref_put(v___y_646_, v___x_666_);
v___x_668_ = lean_st_ref_take(v___y_645_);
v_mctx_669_ = lean_ctor_get(v___x_668_, 0);
v_zetaDeltaFVarIds_670_ = lean_ctor_get(v___x_668_, 2);
v_postponed_671_ = lean_ctor_get(v___x_668_, 3);
v_diag_672_ = lean_ctor_get(v___x_668_, 4);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_683_ == 0)
{
lean_object* v_unused_684_; 
v_unused_684_ = lean_ctor_get(v___x_668_, 1);
lean_dec(v_unused_684_);
v___x_674_ = v___x_668_;
v_isShared_675_ = v_isSharedCheck_683_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_diag_672_);
lean_inc(v_postponed_671_);
lean_inc(v_zetaDeltaFVarIds_670_);
lean_inc(v_mctx_669_);
lean_dec(v___x_668_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_683_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_676_ = lean_box(0);
v___x_677_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 1, v___x_677_);
v___x_679_ = v___x_674_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_mctx_669_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v___x_677_);
lean_ctor_set(v_reuseFailAlloc_682_, 2, v_zetaDeltaFVarIds_670_);
lean_ctor_set(v_reuseFailAlloc_682_, 3, v_postponed_671_);
lean_ctor_set(v_reuseFailAlloc_682_, 4, v_diag_672_);
v___x_679_ = v_reuseFailAlloc_682_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_st_ref_put(v___y_645_, v___x_679_);
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_676_);
return v___x_681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___redArg___boxed(lean_object* v_declName_688_, lean_object* v_s_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
uint8_t v_s_boxed_693_; lean_object* v_res_694_; 
v_s_boxed_693_ = lean_unbox(v_s_689_);
v_res_694_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___redArg(v_declName_688_, v_s_boxed_693_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec(v___y_690_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6(lean_object* v_declName_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
uint8_t v___x_701_; lean_object* v___x_702_; 
v___x_701_ = 0;
v___x_702_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___redArg(v_declName_695_, v___x_701_, v___y_697_, v___y_699_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object* v_declName_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6(v_declName_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
return v_res_709_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__0));
v___x_712_ = l_Lean_stringToMessageData(v___x_711_);
return v___x_712_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__2));
v___x_715_ = l_Lean_stringToMessageData(v___x_714_);
return v___x_715_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__4));
v___x_718_ = l_Lean_stringToMessageData(v___x_717_);
return v___x_718_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__6));
v___x_721_ = l_Lean_stringToMessageData(v___x_720_);
return v___x_721_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__8));
v___x_724_ = l_Lean_stringToMessageData(v___x_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object* v___x_725_, lean_object* v_projName_726_, lean_object* v___x_727_, lean_object* v_a_728_, uint8_t v_instImplicit_729_, lean_object* v___x_730_, lean_object* v_params_731_, lean_object* v_self_732_, lean_object* v_b_733_, uint8_t v___x_734_, lean_object* v_a_735_, lean_object* v___x_736_, lean_object* v_paramInfoOverrides_737_, lean_object* v_n_738_, lean_object* v_ref_739_, lean_object* v___x_740_, uint8_t v_a_741_, lean_object* v_____r_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v___y_749_; lean_object* v___y_750_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; uint8_t v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_819_; uint8_t v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_911_ = l_List_lengthTR___redArg(v_paramInfoOverrides_737_);
v___x_912_ = lean_array_get_size(v_params_731_);
v___x_913_ = lean_nat_dec_le(v___x_911_, v___x_912_);
lean_dec(v___x_911_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_914_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1);
lean_inc(v_projName_726_);
v___x_915_ = l_Lean_MessageData_ofName(v_projName_726_);
v___x_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7);
v___x_918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
lean_inc(v_n_738_);
v___x_919_ = l_Lean_MessageData_ofConstName(v_n_738_, v___x_913_);
v___x_920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__9);
v___x_922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v___x_923_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg(v_ref_739_, v___x_922_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_dec_ref_known(v___x_923_, 1);
goto v___jp_872_;
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v___x_740_);
lean_dec(v_n_738_);
lean_dec_ref(v_a_735_);
lean_dec_ref(v_self_732_);
lean_dec(v___x_730_);
lean_dec(v_a_728_);
lean_dec(v___x_727_);
lean_dec(v_projName_726_);
lean_dec_ref(v___x_725_);
v_a_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
else
{
goto v___jp_872_;
}
v___jp_748_:
{
lean_object* v___x_751_; lean_object* v_env_752_; lean_object* v_nextMacroScope_753_; lean_object* v_ngen_754_; lean_object* v_auxDeclNGen_755_; lean_object* v_traceState_756_; lean_object* v_recordedDeps_757_; lean_object* v_messages_758_; lean_object* v_infoState_759_; lean_object* v_snapshotTasks_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_792_; 
v___x_751_ = lean_st_ref_take(v___y_749_);
v_env_752_ = lean_ctor_get(v___x_751_, 0);
v_nextMacroScope_753_ = lean_ctor_get(v___x_751_, 1);
v_ngen_754_ = lean_ctor_get(v___x_751_, 2);
v_auxDeclNGen_755_ = lean_ctor_get(v___x_751_, 3);
v_traceState_756_ = lean_ctor_get(v___x_751_, 4);
v_recordedDeps_757_ = lean_ctor_get(v___x_751_, 6);
v_messages_758_ = lean_ctor_get(v___x_751_, 7);
v_infoState_759_ = lean_ctor_get(v___x_751_, 8);
v_snapshotTasks_760_ = lean_ctor_get(v___x_751_, 9);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_751_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v___x_751_, 5);
lean_dec(v_unused_793_);
v___x_762_ = v___x_751_;
v_isShared_763_ = v_isSharedCheck_792_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_snapshotTasks_760_);
lean_inc(v_infoState_759_);
lean_inc(v_messages_758_);
lean_inc(v_recordedDeps_757_);
lean_inc(v_traceState_756_);
lean_inc(v_auxDeclNGen_755_);
lean_inc(v_ngen_754_);
lean_inc(v_nextMacroScope_753_);
lean_inc(v_env_752_);
lean_dec(v___x_751_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_792_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v_name_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
v_name_764_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_name_764_);
lean_dec_ref(v___x_725_);
lean_inc(v_projName_726_);
v___x_765_ = l_Lean_addProjectionFnInfo(v_env_752_, v_projName_726_, v_name_764_, v___x_727_, v_a_728_, v_instImplicit_729_);
v___x_766_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__1);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 5, v___x_766_);
lean_ctor_set(v___x_762_, 0, v___x_765_);
v___x_768_ = v___x_762_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v_nextMacroScope_753_);
lean_ctor_set(v_reuseFailAlloc_791_, 2, v_ngen_754_);
lean_ctor_set(v_reuseFailAlloc_791_, 3, v_auxDeclNGen_755_);
lean_ctor_set(v_reuseFailAlloc_791_, 4, v_traceState_756_);
lean_ctor_set(v_reuseFailAlloc_791_, 5, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_791_, 6, v_recordedDeps_757_);
lean_ctor_set(v_reuseFailAlloc_791_, 7, v_messages_758_);
lean_ctor_set(v_reuseFailAlloc_791_, 8, v_infoState_759_);
lean_ctor_set(v_reuseFailAlloc_791_, 9, v_snapshotTasks_760_);
v___x_768_ = v_reuseFailAlloc_791_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v_mctx_771_; lean_object* v_zetaDeltaFVarIds_772_; lean_object* v_postponed_773_; lean_object* v_diag_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_789_; 
v___x_769_ = lean_st_ref_put(v___y_749_, v___x_768_);
v___x_770_ = lean_st_ref_take(v___y_750_);
v_mctx_771_ = lean_ctor_get(v___x_770_, 0);
v_zetaDeltaFVarIds_772_ = lean_ctor_get(v___x_770_, 2);
v_postponed_773_ = lean_ctor_get(v___x_770_, 3);
v_diag_774_ = lean_ctor_get(v___x_770_, 4);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_789_ == 0)
{
lean_object* v_unused_790_; 
v_unused_790_ = lean_ctor_get(v___x_770_, 1);
lean_dec(v_unused_790_);
v___x_776_ = v___x_770_;
v_isShared_777_ = v_isSharedCheck_789_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_diag_774_);
lean_inc(v_postponed_773_);
lean_inc(v_zetaDeltaFVarIds_772_);
lean_inc(v_mctx_771_);
lean_dec(v___x_770_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_789_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_778_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__5);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_778_);
v___x_780_ = v___x_776_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_mctx_771_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v___x_778_);
lean_ctor_set(v_reuseFailAlloc_788_, 2, v_zetaDeltaFVarIds_772_);
lean_ctor_set(v_reuseFailAlloc_788_, 3, v_postponed_773_);
lean_ctor_set(v_reuseFailAlloc_788_, 4, v_diag_774_);
v___x_780_ = v_reuseFailAlloc_788_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_781_ = lean_st_ref_put(v___y_750_, v___x_780_);
v___x_782_ = l_Lean_Expr_const___override(v_projName_726_, v___x_730_);
v___x_783_ = l_Lean_mkAppN(v___x_782_, v_params_731_);
v___x_784_ = l_Lean_Expr_app___override(v___x_783_, v_self_732_);
v___x_785_ = l_Lean_Expr_bindingBody_x21(v_b_733_);
v___x_786_ = lean_expr_instantiate1(v___x_785_, v___x_784_);
lean_dec_ref(v___x_784_);
lean_dec_ref(v___x_785_);
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
}
}
}
v___jp_794_:
{
if (lean_obj_tag(v___y_797_) == 0)
{
lean_dec_ref_known(v___y_797_, 1);
v___y_749_ = v___y_795_;
v___y_750_ = v___y_796_;
goto v___jp_748_;
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v_self_732_);
lean_dec(v___x_730_);
lean_dec(v_a_728_);
lean_dec(v___x_727_);
lean_dec(v_projName_726_);
lean_dec_ref(v___x_725_);
v_a_798_ = lean_ctor_get(v___y_797_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___y_797_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___y_797_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___y_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
v___jp_806_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_813_ = lean_box(0);
lean_inc(v_projName_726_);
v___x_814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_814_, 0, v_projName_726_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_815_, 0, v___y_812_);
lean_ctor_set(v___x_815_, 1, v___y_811_);
lean_ctor_set(v___x_815_, 2, v___x_814_);
lean_ctor_set_uint8(v___x_815_, sizeof(void*)*3, v___x_734_);
v___x_816_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
v___x_817_ = l_Lean_addDecl(v___x_816_, v___y_810_, v___y_808_, v___y_807_);
lean_dec_ref(v___y_808_);
v___y_795_ = v___y_807_;
v___y_796_ = v___y_809_;
v___y_797_ = v___x_817_;
goto v___jp_794_;
}
v___jp_818_:
{
uint8_t v___x_825_; lean_object* v___x_826_; lean_object* v_toCold_827_; lean_object* v_currRecDepth_828_; lean_object* v_ref_829_; uint16_t v_optionFlags_830_; uint8_t v_suppressElabErrors_831_; uint8_t v_checkDeprecated_832_; uint8_t v_isRecordingDeps_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v_ref_838_; lean_object* v___x_839_; 
v___x_825_ = 0;
lean_inc_ref(v_a_735_);
v___x_826_ = l_Lean_LocalContext_mkForall(v_a_735_, v___x_736_, v___y_819_, v___x_734_, v___x_825_);
lean_dec_ref(v___y_819_);
v_toCold_827_ = lean_ctor_get(v___y_823_, 0);
v_currRecDepth_828_ = lean_ctor_get(v___y_823_, 1);
v_ref_829_ = lean_ctor_get(v___y_823_, 2);
v_optionFlags_830_ = lean_ctor_get_uint16(v___y_823_, sizeof(void*)*3);
v_suppressElabErrors_831_ = lean_ctor_get_uint8(v___y_823_, sizeof(void*)*3 + 2);
v_checkDeprecated_832_ = lean_ctor_get_uint8(v___y_823_, sizeof(void*)*3 + 3);
v_isRecordingDeps_833_ = lean_ctor_get_uint8(v___y_823_, sizeof(void*)*3 + 4);
v___x_834_ = l_Lean_Expr_inferImplicit(v___x_826_, v___x_727_, v___x_734_);
v___x_835_ = l_Lean_Expr_updateForallBinderInfos(v___x_834_, v_paramInfoOverrides_737_);
lean_inc_ref(v_self_732_);
lean_inc(v_a_728_);
v___x_836_ = l_Lean_Expr_proj___override(v_n_738_, v_a_728_, v_self_732_);
v___x_837_ = l_Lean_LocalContext_mkLambda(v_a_735_, v___x_736_, v___x_836_, v___x_734_, v___x_825_);
lean_dec_ref(v___x_836_);
v_ref_838_ = l_Lean_replaceRef(v_ref_739_, v_ref_829_);
lean_inc(v_currRecDepth_828_);
lean_inc_ref(v_toCold_827_);
v___x_839_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_839_, 0, v_toCold_827_);
lean_ctor_set(v___x_839_, 1, v_currRecDepth_828_);
lean_ctor_set(v___x_839_, 2, v_ref_838_);
lean_ctor_set_uint16(v___x_839_, sizeof(void*)*3, v_optionFlags_830_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*3 + 2, v_suppressElabErrors_831_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*3 + 3, v_checkDeprecated_832_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*3 + 4, v_isRecordingDeps_833_);
if (v___y_820_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_box(1);
lean_inc(v_projName_726_);
v___x_841_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__5___redArg(v_projName_726_, v___x_740_, v___x_835_, v___x_837_, v___x_840_, v___y_824_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_841_, 1);
v___x_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_843_, 0, v_a_842_);
v___x_844_ = l_Lean_addDecl(v___x_843_, v___x_825_, v___x_839_, v___y_824_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_dec_ref_known(v___x_844_, 1);
if (v_instImplicit_729_ == 0)
{
lean_object* v___x_845_; 
lean_inc(v_projName_726_);
v___x_845_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6(v_projName_726_, v___y_821_, v___y_822_, v___x_839_, v___y_824_);
lean_dec_ref_known(v___x_839_, 3);
v___y_795_ = v___y_824_;
v___y_796_ = v___y_822_;
v___y_797_ = v___x_845_;
goto v___jp_794_;
}
else
{
lean_dec_ref_known(v___x_839_, 3);
v___y_749_ = v___y_824_;
v___y_750_ = v___y_822_;
goto v___jp_748_;
}
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec_ref_known(v___x_839_, 3);
lean_dec_ref(v_self_732_);
lean_dec(v___x_730_);
lean_dec(v_a_728_);
lean_dec(v___x_727_);
lean_dec(v_projName_726_);
lean_dec_ref(v___x_725_);
v_a_846_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_844_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_844_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
lean_dec_ref_known(v___x_839_, 3);
lean_dec_ref(v_self_732_);
lean_dec(v___x_730_);
lean_dec(v_a_728_);
lean_dec(v___x_727_);
lean_dec(v_projName_726_);
lean_dec_ref(v___x_725_);
v_a_854_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_841_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_841_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
else
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v_env_864_; uint8_t v___x_865_; 
lean_inc_ref(v___x_835_);
lean_inc(v_projName_726_);
v___x_862_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_862_, 0, v_projName_726_);
lean_ctor_set(v___x_862_, 1, v___x_740_);
lean_ctor_set(v___x_862_, 2, v___x_835_);
v___x_863_ = lean_st_ref_get(v___y_824_);
v_env_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc_ref_n(v_env_864_, 2);
lean_dec(v___x_863_);
v___x_865_ = l_Lean_Environment_hasUnsafe(v_env_864_, v___x_835_);
lean_dec_ref(v___x_835_);
if (v___x_865_ == 0)
{
uint8_t v___x_866_; 
v___x_866_ = l_Lean_Environment_hasUnsafe(v_env_864_, v___x_837_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_867_ = lean_box(0);
lean_inc(v_projName_726_);
v___x_868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_868_, 0, v_projName_726_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_869_, 0, v___x_862_);
lean_ctor_set(v___x_869_, 1, v___x_837_);
lean_ctor_set(v___x_869_, 2, v___x_868_);
v___x_870_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
v___x_871_ = l_Lean_addDecl(v___x_870_, v___x_825_, v___x_839_, v___y_824_);
lean_dec_ref_known(v___x_839_, 3);
v___y_795_ = v___y_824_;
v___y_796_ = v___y_822_;
v___y_797_ = v___x_871_;
goto v___jp_794_;
}
else
{
v___y_807_ = v___y_824_;
v___y_808_ = v___x_839_;
v___y_809_ = v___y_822_;
v___y_810_ = v___x_825_;
v___y_811_ = v___x_837_;
v___y_812_ = v___x_862_;
goto v___jp_806_;
}
}
else
{
lean_dec_ref(v_env_864_);
v___y_807_ = v___y_824_;
v___y_808_ = v___x_839_;
v___y_809_ = v___y_822_;
v___y_810_ = v___x_825_;
v___y_811_ = v___x_837_;
v___y_812_ = v___x_862_;
goto v___jp_806_;
}
}
}
v___jp_872_:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_873_ = l_Lean_Expr_bindingDomain_x21(v_b_733_);
v___x_874_ = lean_expr_consume_type_annotations(v___x_873_);
lean_inc_ref(v___x_874_);
v___x_875_ = l_Lean_Meta_isProp(v___x_874_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
if (lean_obj_tag(v___x_875_) == 0)
{
if (v_a_741_ == 0)
{
lean_object* v_a_876_; uint8_t v___x_877_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_876_);
lean_dec_ref_known(v___x_875_, 1);
v___x_877_ = lean_unbox(v_a_876_);
lean_dec(v_a_876_);
v___y_819_ = v___x_874_;
v___y_820_ = v___x_877_;
v___y_821_ = v___y_743_;
v___y_822_ = v___y_744_;
v___y_823_ = v___y_745_;
v___y_824_ = v___y_746_;
goto v___jp_818_;
}
else
{
lean_object* v_a_878_; uint8_t v___x_879_; 
v_a_878_ = lean_ctor_get(v___x_875_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_875_, 1);
v___x_879_ = lean_unbox(v_a_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_880_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1);
lean_inc(v_projName_726_);
v___x_881_ = l_Lean_MessageData_ofName(v_projName_726_);
v___x_882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__3);
v___x_884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_882_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = lean_unbox(v_a_878_);
lean_inc(v_n_738_);
v___x_886_ = l_Lean_MessageData_ofConstName(v_n_738_, v___x_885_);
v___x_887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_884_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__5);
v___x_889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_887_);
lean_ctor_set(v___x_889_, 1, v___x_888_);
lean_inc_ref(v___x_874_);
v___x_890_ = l_Lean_indentExpr(v___x_874_);
v___x_891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_889_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg(v_ref_739_, v___x_891_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
if (lean_obj_tag(v___x_892_) == 0)
{
uint8_t v___x_893_; 
lean_dec_ref_known(v___x_892_, 1);
v___x_893_ = lean_unbox(v_a_878_);
lean_dec(v_a_878_);
v___y_819_ = v___x_874_;
v___y_820_ = v___x_893_;
v___y_821_ = v___y_743_;
v___y_822_ = v___y_744_;
v___y_823_ = v___y_745_;
v___y_824_ = v___y_746_;
goto v___jp_818_;
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec(v_a_878_);
lean_dec_ref(v___x_874_);
lean_dec(v___x_740_);
lean_dec(v_n_738_);
lean_dec_ref(v_a_735_);
lean_dec_ref(v_self_732_);
lean_dec(v___x_730_);
lean_dec(v_a_728_);
lean_dec(v___x_727_);
lean_dec(v_projName_726_);
lean_dec_ref(v___x_725_);
v_a_894_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_892_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_892_);
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
else
{
uint8_t v___x_902_; 
v___x_902_ = lean_unbox(v_a_878_);
lean_dec(v_a_878_);
v___y_819_ = v___x_874_;
v___y_820_ = v___x_902_;
v___y_821_ = v___y_743_;
v___y_822_ = v___y_744_;
v___y_823_ = v___y_745_;
v___y_824_ = v___y_746_;
goto v___jp_818_;
}
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v___x_874_);
lean_dec(v___x_740_);
lean_dec(v_n_738_);
lean_dec_ref(v_a_735_);
lean_dec_ref(v_self_732_);
lean_dec(v___x_730_);
lean_dec(v_a_728_);
lean_dec(v___x_727_);
lean_dec(v_projName_726_);
lean_dec_ref(v___x_725_);
v_a_903_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_875_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_875_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_932_ = _args[0];
lean_object* v_projName_933_ = _args[1];
lean_object* v___x_934_ = _args[2];
lean_object* v_a_935_ = _args[3];
lean_object* v_instImplicit_936_ = _args[4];
lean_object* v___x_937_ = _args[5];
lean_object* v_params_938_ = _args[6];
lean_object* v_self_939_ = _args[7];
lean_object* v_b_940_ = _args[8];
lean_object* v___x_941_ = _args[9];
lean_object* v_a_942_ = _args[10];
lean_object* v___x_943_ = _args[11];
lean_object* v_paramInfoOverrides_944_ = _args[12];
lean_object* v_n_945_ = _args[13];
lean_object* v_ref_946_ = _args[14];
lean_object* v___x_947_ = _args[15];
lean_object* v_a_948_ = _args[16];
lean_object* v_____r_949_ = _args[17];
lean_object* v___y_950_ = _args[18];
lean_object* v___y_951_ = _args[19];
lean_object* v___y_952_ = _args[20];
lean_object* v___y_953_ = _args[21];
lean_object* v___y_954_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_955_; uint8_t v___x_19303__boxed_956_; uint8_t v_a_19309__boxed_957_; lean_object* v_res_958_; 
v_instImplicit_boxed_955_ = lean_unbox(v_instImplicit_936_);
v___x_19303__boxed_956_ = lean_unbox(v___x_941_);
v_a_19309__boxed_957_ = lean_unbox(v_a_948_);
v_res_958_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(v___x_932_, v_projName_933_, v___x_934_, v_a_935_, v_instImplicit_boxed_955_, v___x_937_, v_params_938_, v_self_939_, v_b_940_, v___x_19303__boxed_956_, v_a_942_, v___x_943_, v_paramInfoOverrides_944_, v_n_945_, v_ref_946_, v___x_947_, v_a_19309__boxed_957_, v_____r_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v_ref_946_);
lean_dec(v_paramInfoOverrides_944_);
lean_dec_ref(v___x_943_);
lean_dec_ref(v_b_940_);
lean_dec_ref(v_params_938_);
return v_res_958_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__0));
v___x_961_ = l_Lean_stringToMessageData(v___x_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1(uint8_t v___x_962_, lean_object* v_projName_963_, lean_object* v_n_964_, lean_object* v_ref_965_, lean_object* v___f_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
if (v___x_962_ == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_972_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__1);
v___x_973_ = l_Lean_MessageData_ofName(v_projName_963_);
v___x_974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___closed__7);
v___x_976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = l_Lean_MessageData_ofConstName(v_n_964_, v___x_962_);
v___x_978_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___closed__1);
v___x_980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg(v_ref_965_, v___x_980_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v___x_983_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_a_982_);
lean_dec_ref_known(v___x_981_, 1);
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
lean_inc(v___y_968_);
lean_inc_ref(v___y_967_);
v___x_983_ = lean_apply_6(v___f_966_, v_a_982_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, lean_box(0));
return v___x_983_;
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
lean_dec_ref(v___f_966_);
v_a_984_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_981_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_981_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
else
{
lean_object* v___x_992_; lean_object* v___x_993_; 
lean_dec(v_n_964_);
lean_dec(v_projName_963_);
v___x_992_ = lean_box(0);
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
lean_inc(v___y_968_);
lean_inc_ref(v___y_967_);
v___x_993_ = lean_apply_6(v___f_966_, v___x_992_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, lean_box(0));
return v___x_993_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___boxed(lean_object* v___x_994_, lean_object* v_projName_995_, lean_object* v_n_996_, lean_object* v_ref_997_, lean_object* v___f_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v___x_19702__boxed_1004_; lean_object* v_res_1005_; 
v___x_19702__boxed_1004_ = lean_unbox(v___x_994_);
v_res_1005_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1(v___x_19702__boxed_1004_, v_projName_995_, v_n_996_, v_ref_997_, v___f_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v_ref_997_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object* v_upperBound_1006_, lean_object* v_projDecls_1007_, lean_object* v___x_1008_, lean_object* v___x_1009_, uint8_t v_instImplicit_1010_, lean_object* v___x_1011_, lean_object* v_params_1012_, lean_object* v_self_1013_, lean_object* v_a_1014_, lean_object* v___x_1015_, lean_object* v_n_1016_, lean_object* v___x_1017_, uint8_t v_a_1018_, lean_object* v_a_1019_, lean_object* v_b_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
uint8_t v___x_1026_; 
v___x_1026_ = lean_nat_dec_lt(v_a_1019_, v_upperBound_1006_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; 
lean_dec(v_a_1019_);
lean_dec(v___x_1017_);
lean_dec(v_n_1016_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v_a_1014_);
lean_dec_ref(v_self_1013_);
lean_dec_ref(v_params_1012_);
lean_dec(v___x_1011_);
lean_dec(v___x_1009_);
lean_dec_ref(v___x_1008_);
v___x_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1027_, 0, v_b_1020_);
return v___x_1027_;
}
else
{
lean_object* v___x_1028_; lean_object* v_ref_1029_; lean_object* v_projName_1030_; lean_object* v_paramInfoOverrides_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___f_1035_; uint8_t v___x_1036_; lean_object* v___x_1037_; lean_object* v___y_1038_; uint8_t v___x_1039_; lean_object* v___x_1040_; 
v___x_1028_ = lean_array_fget_borrowed(v_projDecls_1007_, v_a_1019_);
v_ref_1029_ = lean_ctor_get(v___x_1028_, 0);
v_projName_1030_ = lean_ctor_get(v___x_1028_, 1);
v_paramInfoOverrides_1031_ = lean_ctor_get(v___x_1028_, 2);
v___x_1032_ = lean_box(v_instImplicit_1010_);
v___x_1033_ = lean_box(v___x_1026_);
v___x_1034_ = lean_box(v_a_1018_);
lean_inc(v___x_1017_);
lean_inc_n(v_ref_1029_, 2);
lean_inc_n(v_n_1016_, 2);
lean_inc(v_paramInfoOverrides_1031_);
lean_inc_ref(v___x_1015_);
lean_inc_ref(v_a_1014_);
lean_inc_ref(v_b_1020_);
lean_inc_ref(v_self_1013_);
lean_inc_ref(v_params_1012_);
lean_inc(v___x_1011_);
lean_inc(v_a_1019_);
lean_inc(v___x_1009_);
lean_inc_n(v_projName_1030_, 2);
lean_inc_ref(v___x_1008_);
v___f_1035_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed), 23, 17);
lean_closure_set(v___f_1035_, 0, v___x_1008_);
lean_closure_set(v___f_1035_, 1, v_projName_1030_);
lean_closure_set(v___f_1035_, 2, v___x_1009_);
lean_closure_set(v___f_1035_, 3, v_a_1019_);
lean_closure_set(v___f_1035_, 4, v___x_1032_);
lean_closure_set(v___f_1035_, 5, v___x_1011_);
lean_closure_set(v___f_1035_, 6, v_params_1012_);
lean_closure_set(v___f_1035_, 7, v_self_1013_);
lean_closure_set(v___f_1035_, 8, v_b_1020_);
lean_closure_set(v___f_1035_, 9, v___x_1033_);
lean_closure_set(v___f_1035_, 10, v_a_1014_);
lean_closure_set(v___f_1035_, 11, v___x_1015_);
lean_closure_set(v___f_1035_, 12, v_paramInfoOverrides_1031_);
lean_closure_set(v___f_1035_, 13, v_n_1016_);
lean_closure_set(v___f_1035_, 14, v_ref_1029_);
lean_closure_set(v___f_1035_, 15, v___x_1017_);
lean_closure_set(v___f_1035_, 16, v___x_1034_);
v___x_1036_ = l_Lean_Expr_isForall(v_b_1020_);
lean_dec_ref(v_b_1020_);
v___x_1037_ = lean_box(v___x_1036_);
v___y_1038_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__1___boxed), 10, 5);
lean_closure_set(v___y_1038_, 0, v___x_1037_);
lean_closure_set(v___y_1038_, 1, v_projName_1030_);
lean_closure_set(v___y_1038_, 2, v_n_1016_);
lean_closure_set(v___y_1038_, 3, v_ref_1029_);
lean_closure_set(v___y_1038_, 4, v___f_1035_);
v___x_1039_ = l_Lean_isPrivateName(v_projName_1030_);
v___x_1040_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___redArg(v___y_1038_, v___x_1039_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = lean_unsigned_to_nat(1u);
v___x_1043_ = lean_nat_add(v_a_1019_, v___x_1042_);
lean_dec(v_a_1019_);
v_a_1019_ = v___x_1043_;
v_b_1020_ = v_a_1041_;
goto _start;
}
else
{
lean_dec(v_a_1019_);
lean_dec(v___x_1017_);
lean_dec(v_n_1016_);
lean_dec_ref(v___x_1015_);
lean_dec_ref(v_a_1014_);
lean_dec_ref(v_self_1013_);
lean_dec_ref(v_params_1012_);
lean_dec(v___x_1011_);
lean_dec(v___x_1009_);
lean_dec_ref(v___x_1008_);
return v___x_1040_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_1045_ = _args[0];
lean_object* v_projDecls_1046_ = _args[1];
lean_object* v___x_1047_ = _args[2];
lean_object* v___x_1048_ = _args[3];
lean_object* v_instImplicit_1049_ = _args[4];
lean_object* v___x_1050_ = _args[5];
lean_object* v_params_1051_ = _args[6];
lean_object* v_self_1052_ = _args[7];
lean_object* v_a_1053_ = _args[8];
lean_object* v___x_1054_ = _args[9];
lean_object* v_n_1055_ = _args[10];
lean_object* v___x_1056_ = _args[11];
lean_object* v_a_1057_ = _args[12];
lean_object* v_a_1058_ = _args[13];
lean_object* v_b_1059_ = _args[14];
lean_object* v___y_1060_ = _args[15];
lean_object* v___y_1061_ = _args[16];
lean_object* v___y_1062_ = _args[17];
lean_object* v___y_1063_ = _args[18];
lean_object* v___y_1064_ = _args[19];
_start:
{
uint8_t v_instImplicit_boxed_1065_; uint8_t v_a_19783__boxed_1066_; lean_object* v_res_1067_; 
v_instImplicit_boxed_1065_ = lean_unbox(v_instImplicit_1049_);
v_a_19783__boxed_1066_ = lean_unbox(v_a_1057_);
v_res_1067_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg(v_upperBound_1045_, v_projDecls_1046_, v___x_1047_, v___x_1048_, v_instImplicit_boxed_1065_, v___x_1050_, v_params_1051_, v_self_1052_, v_a_1053_, v___x_1054_, v_n_1055_, v___x_1056_, v_a_19783__boxed_1066_, v_a_1058_, v_b_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
lean_dec_ref(v_projDecls_1046_);
lean_dec(v_upperBound_1045_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object* v_params_1068_, uint8_t v_instImplicit_1069_, lean_object* v_projDecls_1070_, lean_object* v_toConstantVal_1071_, lean_object* v_numParams_1072_, lean_object* v___x_1073_, lean_object* v_n_1074_, lean_object* v_levelParams_1075_, uint8_t v_a_1076_, lean_object* v_ctorType_1077_, lean_object* v_self_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_lctx_1084_; lean_object* v___x_1085_; size_t v_sz_1086_; size_t v___x_1087_; lean_object* v___x_1088_; 
v_lctx_1084_ = lean_ctor_get(v___y_1079_, 2);
lean_inc_ref(v_self_1078_);
lean_inc_ref(v_params_1068_);
v___x_1085_ = lean_array_push(v_params_1068_, v_self_1078_);
v_sz_1086_ = lean_array_size(v_params_1068_);
v___x_1087_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1084_);
v___x_1088_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1069_, v_params_1068_, v_sz_1086_, v___x_1087_, v_lctx_1084_, v___y_1079_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v___x_1090_ = lean_array_get_size(v_projDecls_1070_);
v___x_1091_ = lean_unsigned_to_nat(0u);
v___x_1092_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg(v___x_1090_, v_projDecls_1070_, v_toConstantVal_1071_, v_numParams_1072_, v_instImplicit_1069_, v___x_1073_, v_params_1068_, v_self_1078_, v_a_1089_, v___x_1085_, v_n_1074_, v_levelParams_1075_, v_a_1076_, v___x_1091_, v_ctorType_1077_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1100_; 
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1100_ == 0)
{
lean_object* v_unused_1101_; 
v_unused_1101_ = lean_ctor_get(v___x_1092_, 0);
lean_dec(v_unused_1101_);
v___x_1094_ = v___x_1092_;
v_isShared_1095_ = v_isSharedCheck_1100_;
goto v_resetjp_1093_;
}
else
{
lean_dec(v___x_1092_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1100_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1096_ = lean_box(0);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1096_);
v___x_1098_ = v___x_1094_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_a_1102_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1092_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1092_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_dec_ref(v___x_1085_);
lean_dec_ref(v_self_1078_);
lean_dec_ref(v_ctorType_1077_);
lean_dec(v_levelParams_1075_);
lean_dec(v_n_1074_);
lean_dec(v___x_1073_);
lean_dec(v_numParams_1072_);
lean_dec_ref(v_toConstantVal_1071_);
lean_dec_ref(v_params_1068_);
v_a_1110_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1088_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1088_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object* v_params_1118_, lean_object* v_instImplicit_1119_, lean_object* v_projDecls_1120_, lean_object* v_toConstantVal_1121_, lean_object* v_numParams_1122_, lean_object* v___x_1123_, lean_object* v_n_1124_, lean_object* v_levelParams_1125_, lean_object* v_a_1126_, lean_object* v_ctorType_1127_, lean_object* v_self_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
uint8_t v_instImplicit_boxed_1134_; uint8_t v_a_19855__boxed_1135_; lean_object* v_res_1136_; 
v_instImplicit_boxed_1134_ = lean_unbox(v_instImplicit_1119_);
v_a_19855__boxed_1135_ = lean_unbox(v_a_1126_);
v_res_1136_ = l_Lean_Meta_mkProjections___lam__0(v_params_1118_, v_instImplicit_boxed_1134_, v_projDecls_1120_, v_toConstantVal_1121_, v_numParams_1122_, v___x_1123_, v_n_1124_, v_levelParams_1125_, v_a_19855__boxed_1135_, v_ctorType_1127_, v_self_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
lean_dec_ref(v_projDecls_1120_);
return v_res_1136_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__2));
v___x_1142_ = l_Lean_stringToMessageData(v___x_1141_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__4));
v___x_1145_ = l_Lean_stringToMessageData(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t v_instImplicit_1146_, lean_object* v_projDecls_1147_, lean_object* v_toConstantVal_1148_, lean_object* v_numParams_1149_, lean_object* v___x_1150_, lean_object* v_n_1151_, lean_object* v_levelParams_1152_, uint8_t v_a_1153_, lean_object* v_params_1154_, lean_object* v_ctorType_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___f_1163_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; lean_object* v___y_1169_; uint8_t v___y_1170_; lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1161_ = lean_box(v_instImplicit_1146_);
v___x_1162_ = lean_box(v_a_1153_);
lean_inc(v_n_1151_);
lean_inc(v___x_1150_);
lean_inc(v_numParams_1149_);
lean_inc_ref(v_params_1154_);
v___f_1163_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__0___boxed), 16, 10);
lean_closure_set(v___f_1163_, 0, v_params_1154_);
lean_closure_set(v___f_1163_, 1, v___x_1161_);
lean_closure_set(v___f_1163_, 2, v_projDecls_1147_);
lean_closure_set(v___f_1163_, 3, v_toConstantVal_1148_);
lean_closure_set(v___f_1163_, 4, v_numParams_1149_);
lean_closure_set(v___f_1163_, 5, v___x_1150_);
lean_closure_set(v___f_1163_, 6, v_n_1151_);
lean_closure_set(v___f_1163_, 7, v_levelParams_1152_);
lean_closure_set(v___f_1163_, 8, v___x_1162_);
lean_closure_set(v___f_1163_, 9, v_ctorType_1155_);
v___x_1179_ = lean_array_get_size(v_params_1154_);
v___x_1180_ = lean_nat_dec_eq(v___x_1179_, v_numParams_1149_);
lean_dec(v_numParams_1149_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
lean_dec_ref(v___f_1163_);
lean_dec_ref(v_params_1154_);
lean_dec(v___x_1150_);
v___x_1181_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__3, &l_Lean_Meta_mkProjections___lam__1___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__3);
v___x_1182_ = l_Lean_MessageData_ofConstName(v_n_1151_, v___x_1180_);
v___x_1183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__5, &l_Lean_Meta_mkProjections___lam__1___closed__5_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__5);
v___x_1185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1183_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1185_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
return v___x_1186_;
}
else
{
goto v___jp_1174_;
}
v___jp_1164_:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__1));
v___x_1172_ = 0;
v___x_1173_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__10___redArg(v___x_1171_, v___y_1170_, v___y_1168_, v___f_1163_, v___x_1172_, v___y_1166_, v___y_1167_, v___y_1165_, v___y_1169_);
return v___x_1173_;
}
v___jp_1174_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = l_Lean_Expr_const___override(v_n_1151_, v___x_1150_);
v___x_1176_ = l_Lean_mkAppN(v___x_1175_, v_params_1154_);
lean_dec_ref(v_params_1154_);
if (v_instImplicit_1146_ == 0)
{
uint8_t v___x_1177_; 
v___x_1177_ = 0;
v___y_1165_ = v___y_1158_;
v___y_1166_ = v___y_1156_;
v___y_1167_ = v___y_1157_;
v___y_1168_ = v___x_1176_;
v___y_1169_ = v___y_1159_;
v___y_1170_ = v___x_1177_;
goto v___jp_1164_;
}
else
{
uint8_t v___x_1178_; 
v___x_1178_ = 3;
v___y_1165_ = v___y_1158_;
v___y_1166_ = v___y_1156_;
v___y_1167_ = v___y_1157_;
v___y_1168_ = v___x_1176_;
v___y_1169_ = v___y_1159_;
v___y_1170_ = v___x_1178_;
goto v___jp_1164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object* v_instImplicit_1187_, lean_object* v_projDecls_1188_, lean_object* v_toConstantVal_1189_, lean_object* v_numParams_1190_, lean_object* v___x_1191_, lean_object* v_n_1192_, lean_object* v_levelParams_1193_, lean_object* v_a_1194_, lean_object* v_params_1195_, lean_object* v_ctorType_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
uint8_t v_instImplicit_boxed_1202_; uint8_t v_a_19959__boxed_1203_; lean_object* v_res_1204_; 
v_instImplicit_boxed_1202_ = lean_unbox(v_instImplicit_1187_);
v_a_19959__boxed_1203_ = lean_unbox(v_a_1194_);
v_res_1204_ = l_Lean_Meta_mkProjections___lam__1(v_instImplicit_boxed_1202_, v_projDecls_1188_, v_toConstantVal_1189_, v_numParams_1190_, v___x_1191_, v_n_1192_, v_levelParams_1193_, v_a_19959__boxed_1203_, v_params_1195_, v_ctorType_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object* v_a_1205_, lean_object* v_a_1206_){
_start:
{
if (lean_obj_tag(v_a_1205_) == 0)
{
lean_object* v___x_1207_; 
v___x_1207_ = l_List_reverse___redArg(v_a_1206_);
return v___x_1207_;
}
else
{
lean_object* v_head_1208_; lean_object* v_tail_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1218_; 
v_head_1208_ = lean_ctor_get(v_a_1205_, 0);
v_tail_1209_ = lean_ctor_get(v_a_1205_, 1);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_a_1205_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1211_ = v_a_1205_;
v_isShared_1212_ = v_isSharedCheck_1218_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_tail_1209_);
lean_inc(v_head_1208_);
lean_dec(v_a_1205_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1218_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; lean_object* v___x_1215_; 
v___x_1213_ = l_Lean_mkLevelParam(v_head_1208_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 1, v_a_1206_);
lean_ctor_set(v___x_1211_, 0, v___x_1213_);
v___x_1215_ = v___x_1211_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1213_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v_a_1206_);
v___x_1215_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
v_a_1205_ = v_tail_1209_;
v_a_1206_ = v___x_1215_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_instMonadEIO___redArg();
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object* v_msg_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v_toApplicative_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1293_; 
v___x_1230_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0);
v___x_1231_ = l_StateRefT_x27_instMonad___redArg(v___x_1230_);
v_toApplicative_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1293_ == 0)
{
lean_object* v_unused_1294_; 
v_unused_1294_ = lean_ctor_get(v___x_1231_, 1);
lean_dec(v_unused_1294_);
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1293_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_toApplicative_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1293_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v_toFunctor_1236_; lean_object* v_toSeq_1237_; lean_object* v_toSeqLeft_1238_; lean_object* v_toSeqRight_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1291_; 
v_toFunctor_1236_ = lean_ctor_get(v_toApplicative_1232_, 0);
v_toSeq_1237_ = lean_ctor_get(v_toApplicative_1232_, 2);
v_toSeqLeft_1238_ = lean_ctor_get(v_toApplicative_1232_, 3);
v_toSeqRight_1239_ = lean_ctor_get(v_toApplicative_1232_, 4);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_toApplicative_1232_);
if (v_isSharedCheck_1291_ == 0)
{
lean_object* v_unused_1292_; 
v_unused_1292_ = lean_ctor_get(v_toApplicative_1232_, 1);
lean_dec(v_unused_1292_);
v___x_1241_ = v_toApplicative_1232_;
v_isShared_1242_ = v_isSharedCheck_1291_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_toSeqRight_1239_);
lean_inc(v_toSeqLeft_1238_);
lean_inc(v_toSeq_1237_);
lean_inc(v_toFunctor_1236_);
lean_dec(v_toApplicative_1232_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1291_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___f_1243_; lean_object* v___f_1244_; lean_object* v___f_1245_; lean_object* v___f_1246_; lean_object* v___x_1247_; lean_object* v___f_1248_; lean_object* v___f_1249_; lean_object* v___f_1250_; lean_object* v___x_1252_; 
v___f_1243_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1));
v___f_1244_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1236_);
v___f_1245_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1245_, 0, v_toFunctor_1236_);
v___f_1246_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1246_, 0, v_toFunctor_1236_);
v___x_1247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___f_1245_);
lean_ctor_set(v___x_1247_, 1, v___f_1246_);
v___f_1248_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1248_, 0, v_toSeqRight_1239_);
v___f_1249_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1249_, 0, v_toSeqLeft_1238_);
v___f_1250_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1250_, 0, v_toSeq_1237_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 4, v___f_1248_);
lean_ctor_set(v___x_1241_, 3, v___f_1249_);
lean_ctor_set(v___x_1241_, 2, v___f_1250_);
lean_ctor_set(v___x_1241_, 1, v___f_1243_);
lean_ctor_set(v___x_1241_, 0, v___x_1247_);
v___x_1252_ = v___x_1241_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___x_1247_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v___f_1243_);
lean_ctor_set(v_reuseFailAlloc_1290_, 2, v___f_1250_);
lean_ctor_set(v_reuseFailAlloc_1290_, 3, v___f_1249_);
lean_ctor_set(v_reuseFailAlloc_1290_, 4, v___f_1248_);
v___x_1252_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
lean_object* v___x_1254_; 
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 1, v___f_1244_);
lean_ctor_set(v___x_1234_, 0, v___x_1252_);
v___x_1254_ = v___x_1234_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1252_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v___f_1244_);
v___x_1254_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
lean_object* v___x_1255_; lean_object* v_toApplicative_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1287_; 
v___x_1255_ = l_StateRefT_x27_instMonad___redArg(v___x_1254_);
v_toApplicative_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1287_ == 0)
{
lean_object* v_unused_1288_; 
v_unused_1288_ = lean_ctor_get(v___x_1255_, 1);
lean_dec(v_unused_1288_);
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1287_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_toApplicative_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1287_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v_toFunctor_1260_; lean_object* v_toSeq_1261_; lean_object* v_toSeqLeft_1262_; lean_object* v_toSeqRight_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1285_; 
v_toFunctor_1260_ = lean_ctor_get(v_toApplicative_1256_, 0);
v_toSeq_1261_ = lean_ctor_get(v_toApplicative_1256_, 2);
v_toSeqLeft_1262_ = lean_ctor_get(v_toApplicative_1256_, 3);
v_toSeqRight_1263_ = lean_ctor_get(v_toApplicative_1256_, 4);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_toApplicative_1256_);
if (v_isSharedCheck_1285_ == 0)
{
lean_object* v_unused_1286_; 
v_unused_1286_ = lean_ctor_get(v_toApplicative_1256_, 1);
lean_dec(v_unused_1286_);
v___x_1265_ = v_toApplicative_1256_;
v_isShared_1266_ = v_isSharedCheck_1285_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_toSeqRight_1263_);
lean_inc(v_toSeqLeft_1262_);
lean_inc(v_toSeq_1261_);
lean_inc(v_toFunctor_1260_);
lean_dec(v_toApplicative_1256_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1285_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___f_1267_; lean_object* v___f_1268_; lean_object* v___f_1269_; lean_object* v___f_1270_; lean_object* v___x_1271_; lean_object* v___f_1272_; lean_object* v___f_1273_; lean_object* v___f_1274_; lean_object* v___x_1276_; 
v___f_1267_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3));
v___f_1268_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1260_);
v___f_1269_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1269_, 0, v_toFunctor_1260_);
v___f_1270_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1270_, 0, v_toFunctor_1260_);
v___x_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___f_1269_);
lean_ctor_set(v___x_1271_, 1, v___f_1270_);
v___f_1272_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1272_, 0, v_toSeqRight_1263_);
v___f_1273_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1273_, 0, v_toSeqLeft_1262_);
v___f_1274_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1274_, 0, v_toSeq_1261_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 4, v___f_1272_);
lean_ctor_set(v___x_1265_, 3, v___f_1273_);
lean_ctor_set(v___x_1265_, 2, v___f_1274_);
lean_ctor_set(v___x_1265_, 1, v___f_1267_);
lean_ctor_set(v___x_1265_, 0, v___x_1271_);
v___x_1276_ = v___x_1265_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1271_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v___f_1267_);
lean_ctor_set(v_reuseFailAlloc_1284_, 2, v___f_1274_);
lean_ctor_set(v_reuseFailAlloc_1284_, 3, v___f_1273_);
lean_ctor_set(v_reuseFailAlloc_1284_, 4, v___f_1272_);
v___x_1276_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1278_; 
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 1, v___f_1268_);
lean_ctor_set(v___x_1258_, 0, v___x_1276_);
v___x_1278_ = v___x_1258_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1276_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v___f_1268_);
v___x_1278_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_14314__overap_1281_; lean_object* v___x_1282_; 
v___x_1279_ = lean_box(0);
v___x_1280_ = l_instInhabitedOfMonad___redArg(v___x_1278_, v___x_1279_);
v___x_14314__overap_1281_ = lean_panic_fn_borrowed(v___x_1280_, v_msg_1224_);
lean_dec(v___x_1280_);
lean_inc(v___y_1228_);
lean_inc_ref(v___y_1227_);
lean_inc(v___y_1226_);
lean_inc_ref(v___y_1225_);
v___x_1282_ = lean_apply_5(v___x_14314__overap_1281_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, lean_box(0));
return v___x_1282_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object* v_msg_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v_msg_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
return v_res_1301_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0));
v___x_1304_ = l_Lean_stringToMessageData(v___x_1303_);
return v___x_1304_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1308_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4));
v___x_1309_ = lean_unsigned_to_nat(11u);
v___x_1310_ = lean_unsigned_to_nat(122u);
v___x_1311_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3));
v___x_1312_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2));
v___x_1313_ = l_mkPanicMessageWithDecl(v___x_1312_, v___x_1311_, v___x_1310_, v___x_1309_, v___x_1308_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object* v_constName_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___x_1328_; lean_object* v_env_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; 
v___x_1328_ = lean_st_ref_get(v___y_1318_);
v_env_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc_ref(v_env_1329_);
lean_dec(v___x_1328_);
v___x_1330_ = 0;
lean_inc(v_constName_1314_);
v___x_1331_ = l_Lean_Environment_findAsync_x3f(v_env_1329_, v_constName_1314_, v___x_1330_);
if (lean_obj_tag(v___x_1331_) == 1)
{
lean_object* v_val_1332_; uint8_t v_kind_1333_; 
v_val_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_val_1332_);
lean_dec_ref_known(v___x_1331_, 1);
v_kind_1333_ = lean_ctor_get_uint8(v_val_1332_, sizeof(void*)*3);
if (v_kind_1333_ == 6)
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1332_);
if (lean_obj_tag(v___x_1334_) == 6)
{
lean_object* v_val_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec(v_constName_1314_);
v_val_1335_ = lean_ctor_get(v___x_1334_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1334_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_val_1335_);
lean_dec(v___x_1334_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
lean_ctor_set_tag(v___x_1337_, 0);
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_val_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
else
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
lean_dec_ref(v___x_1334_);
v___x_1343_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_1344_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_1343_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1353_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1347_ = v___x_1344_;
v_isShared_1348_ = v_isSharedCheck_1353_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1344_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1353_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
if (lean_obj_tag(v_a_1345_) == 0)
{
lean_del_object(v___x_1347_);
goto v___jp_1320_;
}
else
{
lean_object* v_val_1349_; lean_object* v___x_1351_; 
lean_dec(v_constName_1314_);
v_val_1349_ = lean_ctor_get(v_a_1345_, 0);
lean_inc(v_val_1349_);
lean_dec_ref_known(v_a_1345_, 1);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 0, v_val_1349_);
v___x_1351_ = v___x_1347_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_val_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
else
{
lean_object* v_a_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1361_; 
lean_dec(v_constName_1314_);
v_a_1354_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1356_ = v___x_1344_;
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_a_1354_);
lean_dec(v___x_1344_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1359_; 
if (v_isShared_1357_ == 0)
{
v___x_1359_ = v___x_1356_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_a_1354_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
}
else
{
lean_dec(v_val_1332_);
goto v___jp_1320_;
}
}
else
{
lean_dec(v___x_1331_);
goto v___jp_1320_;
}
v___jp_1320_:
{
lean_object* v___x_1321_; uint8_t v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1321_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1322_ = 0;
v___x_1323_ = l_Lean_MessageData_ofConstName(v_constName_1314_, v___x_1322_);
v___x_1324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1321_);
lean_ctor_set(v___x_1324_, 1, v___x_1323_);
v___x_1325_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1);
v___x_1326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1326_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
return v___x_1327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object* v_constName_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v_constName_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
return v_res_1368_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0));
v___x_1371_ = l_Lean_stringToMessageData(v___x_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object* v_constName_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v___x_1378_; lean_object* v_env_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lean_st_ref_get(v___y_1376_);
v_env_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc_ref(v_env_1379_);
lean_dec(v___x_1378_);
lean_inc(v_constName_1372_);
v___x_1380_ = l_Lean_isInductiveCore_x3f(v_env_1379_, v_constName_1372_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v___x_1381_; uint8_t v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1381_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1382_ = 0;
v___x_1383_ = l_Lean_MessageData_ofConstName(v_constName_1372_, v___x_1382_);
v___x_1384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1381_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1);
v___x_1386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1384_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
v___x_1387_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1386_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
return v___x_1387_;
}
else
{
lean_object* v_val_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
lean_dec(v_constName_1372_);
v_val_1388_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1380_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_val_1388_);
lean_dec(v___x_1380_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
lean_ctor_set_tag(v___x_1390_, 0);
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_val_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object* v_constName_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_constName_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
return v_res_1402_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__0));
v___x_1405_ = l_Lean_stringToMessageData(v___x_1404_);
return v___x_1405_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__2));
v___x_1408_ = l_Lean_stringToMessageData(v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object* v_n_1409_, lean_object* v___x_1410_, uint8_t v_instImplicit_1411_, lean_object* v_projDecls_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___x_1418_; 
lean_inc(v_n_1409_);
v___x_1418_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_n_1409_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___x_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v___x_1460_ = l_Lean_InductiveVal_numCtors(v_a_1419_);
v___x_1461_ = lean_unsigned_to_nat(1u);
v___x_1462_ = lean_nat_dec_eq(v___x_1460_, v___x_1461_);
lean_dec(v___x_1460_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
lean_dec(v_a_1419_);
lean_dec_ref(v_projDecls_1412_);
v___x_1463_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__1, &l_Lean_Meta_mkProjections___lam__2___closed__1_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__1);
v___x_1464_ = l_Lean_MessageData_ofConstName(v_n_1409_, v___x_1462_);
v___x_1465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__3, &l_Lean_Meta_mkProjections___lam__2___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__3);
v___x_1467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1465_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
v___x_1468_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1467_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
return v___x_1468_;
}
else
{
v___y_1421_ = v___y_1413_;
v___y_1422_ = v___y_1414_;
v___y_1423_ = v___y_1415_;
v___y_1424_ = v___y_1416_;
goto v___jp_1420_;
}
v___jp_1420_:
{
lean_object* v_toConstantVal_1425_; lean_object* v_numParams_1426_; lean_object* v_ctors_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v_toConstantVal_1425_ = lean_ctor_get(v_a_1419_, 0);
lean_inc_ref(v_toConstantVal_1425_);
v_numParams_1426_ = lean_ctor_get(v_a_1419_, 1);
lean_inc(v_numParams_1426_);
v_ctors_1427_ = lean_ctor_get(v_a_1419_, 4);
lean_inc(v_ctors_1427_);
lean_dec(v_a_1419_);
v___x_1428_ = l_List_head_x21___redArg(v___x_1410_, v_ctors_1427_);
lean_dec(v_ctors_1427_);
v___x_1429_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v___x_1428_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v_levelParams_1431_; lean_object* v_type_1432_; lean_object* v___x_1433_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
lean_inc(v_a_1430_);
lean_dec_ref_known(v___x_1429_, 1);
v_levelParams_1431_ = lean_ctor_get(v_toConstantVal_1425_, 1);
lean_inc(v_levelParams_1431_);
v_type_1432_ = lean_ctor_get(v_toConstantVal_1425_, 2);
lean_inc_ref(v_type_1432_);
lean_dec_ref(v_toConstantVal_1425_);
v___x_1433_ = l_Lean_Meta_isPropFormerType(v_type_1432_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_toConstantVal_1434_; lean_object* v_a_1435_; lean_object* v_type_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___f_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; lean_object* v___x_1443_; 
v_toConstantVal_1434_ = lean_ctor_get(v_a_1430_, 0);
lean_inc_ref(v_toConstantVal_1434_);
lean_dec(v_a_1430_);
v_a_1435_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v___x_1433_, 1);
v_type_1436_ = lean_ctor_get(v_toConstantVal_1434_, 2);
lean_inc_ref(v_type_1436_);
v___x_1437_ = lean_box(0);
lean_inc(v_levelParams_1431_);
v___x_1438_ = l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(v_levelParams_1431_, v___x_1437_);
v___x_1439_ = lean_box(v_instImplicit_1411_);
lean_inc(v_numParams_1426_);
v___f_1440_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__1___boxed), 15, 8);
lean_closure_set(v___f_1440_, 0, v___x_1439_);
lean_closure_set(v___f_1440_, 1, v_projDecls_1412_);
lean_closure_set(v___f_1440_, 2, v_toConstantVal_1434_);
lean_closure_set(v___f_1440_, 3, v_numParams_1426_);
lean_closure_set(v___f_1440_, 4, v___x_1438_);
lean_closure_set(v___f_1440_, 5, v_n_1409_);
lean_closure_set(v___f_1440_, 6, v_levelParams_1431_);
lean_closure_set(v___f_1440_, 7, v_a_1435_);
v___x_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1441_, 0, v_numParams_1426_);
v___x_1442_ = 0;
v___x_1443_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__11___redArg(v_type_1436_, v___x_1441_, v___f_1440_, v___x_1442_, v___x_1442_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
return v___x_1443_;
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec(v_levelParams_1431_);
lean_dec(v_a_1430_);
lean_dec(v_numParams_1426_);
lean_dec_ref(v_projDecls_1412_);
lean_dec(v_n_1409_);
v_a_1444_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1433_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1433_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec(v_numParams_1426_);
lean_dec_ref(v_toConstantVal_1425_);
lean_dec_ref(v_projDecls_1412_);
lean_dec(v_n_1409_);
v_a_1452_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1429_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1429_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec_ref(v_projDecls_1412_);
lean_dec(v_n_1409_);
v_a_1469_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1418_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1418_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object* v_n_1477_, lean_object* v___x_1478_, lean_object* v_instImplicit_1479_, lean_object* v_projDecls_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
uint8_t v_instImplicit_boxed_1486_; lean_object* v_res_1487_; 
v_instImplicit_boxed_1486_ = lean_unbox(v_instImplicit_1479_);
v_res_1487_ = l_Lean_Meta_mkProjections___lam__2(v_n_1477_, v___x_1478_, v_instImplicit_boxed_1486_, v_projDecls_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___x_1478_);
return v_res_1487_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__0(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5___redArg___closed__0);
v___x_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1488_);
return v___x_1489_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__1(void){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1490_ = lean_unsigned_to_nat(32u);
v___x_1491_ = lean_mk_empty_array_with_capacity(v___x_1490_);
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
return v___x_1492_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__2(void){
_start:
{
size_t v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1493_ = ((size_t)5ULL);
v___x_1494_ = lean_unsigned_to_nat(0u);
v___x_1495_ = lean_unsigned_to_nat(32u);
v___x_1496_ = lean_mk_empty_array_with_capacity(v___x_1495_);
v___x_1497_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__1, &l_Lean_Meta_mkProjections___closed__1_once, _init_l_Lean_Meta_mkProjections___closed__1);
v___x_1498_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
lean_ctor_set(v___x_1498_, 1, v___x_1496_);
lean_ctor_set(v___x_1498_, 2, v___x_1494_);
lean_ctor_set(v___x_1498_, 3, v___x_1494_);
lean_ctor_set_usize(v___x_1498_, 4, v___x_1493_);
return v___x_1498_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__3(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1499_ = lean_box(1);
v___x_1500_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__2, &l_Lean_Meta_mkProjections___closed__2_once, _init_l_Lean_Meta_mkProjections___closed__2);
v___x_1501_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__0, &l_Lean_Meta_mkProjections___closed__0_once, _init_l_Lean_Meta_mkProjections___closed__0);
v___x_1502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
lean_ctor_set(v___x_1502_, 1, v___x_1500_);
lean_ctor_set(v___x_1502_, 2, v___x_1499_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object* v_n_1505_, lean_object* v_projDecls_1506_, uint8_t v_instImplicit_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___f_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1513_ = lean_box(0);
v___x_1514_ = lean_box(v_instImplicit_1507_);
v___f_1515_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__2___boxed), 9, 4);
lean_closure_set(v___f_1515_, 0, v_n_1505_);
lean_closure_set(v___f_1515_, 1, v___x_1513_);
lean_closure_set(v___f_1515_, 2, v___x_1514_);
lean_closure_set(v___f_1515_, 3, v_projDecls_1506_);
v___x_1516_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__3, &l_Lean_Meta_mkProjections___closed__3_once, _init_l_Lean_Meta_mkProjections___closed__3);
v___x_1517_ = ((lean_object*)(l_Lean_Meta_mkProjections___closed__4));
v___x_1518_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__12___redArg(v___x_1516_, v___x_1517_, v___f_1515_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object* v_n_1519_, lean_object* v_projDecls_1520_, lean_object* v_instImplicit_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_){
_start:
{
uint8_t v_instImplicit_boxed_1527_; lean_object* v_res_1528_; 
v_instImplicit_boxed_1527_ = lean_unbox(v_instImplicit_1521_);
v_res_1528_ = l_Lean_Meta_mkProjections(v_n_1519_, v_projDecls_1520_, v_instImplicit_boxed_1527_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
lean_dec(v_a_1525_);
lean_dec_ref(v_a_1524_);
lean_dec(v_a_1523_);
lean_dec_ref(v_a_1522_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t v_instImplicit_1529_, lean_object* v_as_1530_, size_t v_sz_1531_, size_t v_i_1532_, lean_object* v_b_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
lean_object* v___x_1539_; 
v___x_1539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1529_, v_as_1530_, v_sz_1531_, v_i_1532_, v_b_1533_, v___y_1534_, v___y_1536_, v___y_1537_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object* v_instImplicit_1540_, lean_object* v_as_1541_, lean_object* v_sz_1542_, lean_object* v_i_1543_, lean_object* v_b_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
uint8_t v_instImplicit_boxed_1550_; size_t v_sz_boxed_1551_; size_t v_i_boxed_1552_; lean_object* v_res_1553_; 
v_instImplicit_boxed_1550_ = lean_unbox(v_instImplicit_1540_);
v_sz_boxed_1551_ = lean_unbox_usize(v_sz_1542_);
lean_dec(v_sz_1542_);
v_i_boxed_1552_ = lean_unbox_usize(v_i_1543_);
lean_dec(v_i_1543_);
v_res_1553_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(v_instImplicit_boxed_1550_, v_as_1541_, v_sz_boxed_1551_, v_i_boxed_1552_, v_b_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec_ref(v_as_1541_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4_spec__5(lean_object* v_00_u03b2_1554_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4___redArg(){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object* v___dummy_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4___redArg();
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_mkProjections_spec__4(lean_object* v_00_u03b2_1560_){
_start:
{
lean_object* v___x_1561_; 
v___x_1561_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg___closed__2);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7(lean_object* v_00_u03b1_1562_, lean_object* v_ref_1563_, lean_object* v_msg_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___redArg(v_ref_1563_, v_msg_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object* v_00_u03b1_1571_, lean_object* v_ref_1572_, lean_object* v_msg_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
lean_object* v_res_1579_; 
v_res_1579_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__7(v_00_u03b1_1571_, v_ref_1572_, v_msg_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v_ref_1572_);
return v_res_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8(lean_object* v_00_u03b1_1580_, lean_object* v_x_1581_, uint8_t v_when_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
lean_object* v___x_1588_; 
v___x_1588_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___redArg(v_x_1581_, v_when_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object* v_00_u03b1_1589_, lean_object* v_x_1590_, lean_object* v_when_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
uint8_t v_when_boxed_1597_; lean_object* v_res_1598_; 
v_when_boxed_1597_ = lean_unbox(v_when_1591_);
v_res_1598_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8(v_00_u03b1_1589_, v_x_1590_, v_when_boxed_1597_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9(lean_object* v_upperBound_1599_, lean_object* v_projDecls_1600_, lean_object* v___x_1601_, lean_object* v___x_1602_, uint8_t v_instImplicit_1603_, lean_object* v___x_1604_, lean_object* v_params_1605_, lean_object* v_self_1606_, lean_object* v_a_1607_, lean_object* v___x_1608_, lean_object* v_n_1609_, lean_object* v___x_1610_, uint8_t v_a_1611_, lean_object* v_inst_1612_, lean_object* v_R_1613_, lean_object* v_a_1614_, lean_object* v_b_1615_, lean_object* v_c_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___redArg(v_upperBound_1599_, v_projDecls_1600_, v___x_1601_, v___x_1602_, v_instImplicit_1603_, v___x_1604_, v_params_1605_, v_self_1606_, v_a_1607_, v___x_1608_, v_n_1609_, v___x_1610_, v_a_1611_, v_a_1614_, v_b_1615_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object** _args){
lean_object* v_upperBound_1623_ = _args[0];
lean_object* v_projDecls_1624_ = _args[1];
lean_object* v___x_1625_ = _args[2];
lean_object* v___x_1626_ = _args[3];
lean_object* v_instImplicit_1627_ = _args[4];
lean_object* v___x_1628_ = _args[5];
lean_object* v_params_1629_ = _args[6];
lean_object* v_self_1630_ = _args[7];
lean_object* v_a_1631_ = _args[8];
lean_object* v___x_1632_ = _args[9];
lean_object* v_n_1633_ = _args[10];
lean_object* v___x_1634_ = _args[11];
lean_object* v_a_1635_ = _args[12];
lean_object* v_inst_1636_ = _args[13];
lean_object* v_R_1637_ = _args[14];
lean_object* v_a_1638_ = _args[15];
lean_object* v_b_1639_ = _args[16];
lean_object* v_c_1640_ = _args[17];
lean_object* v___y_1641_ = _args[18];
lean_object* v___y_1642_ = _args[19];
lean_object* v___y_1643_ = _args[20];
lean_object* v___y_1644_ = _args[21];
lean_object* v___y_1645_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_1646_; uint8_t v_a_20683__boxed_1647_; lean_object* v_res_1648_; 
v_instImplicit_boxed_1646_ = lean_unbox(v_instImplicit_1627_);
v_a_20683__boxed_1647_ = lean_unbox(v_a_1635_);
v_res_1648_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__9(v_upperBound_1623_, v_projDecls_1624_, v___x_1625_, v___x_1626_, v_instImplicit_boxed_1646_, v___x_1628_, v_params_1629_, v_self_1630_, v_a_1631_, v___x_1632_, v_n_1633_, v___x_1634_, v_a_20683__boxed_1647_, v_inst_1636_, v_R_1637_, v_a_1638_, v_b_1639_, v_c_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec_ref(v_projDecls_1624_);
lean_dec(v_upperBound_1623_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8(lean_object* v_declName_1649_, uint8_t v_s_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___redArg(v_declName_1649_, v_s_1650_, v___y_1652_, v___y_1654_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8___boxed(lean_object* v_declName_1657_, lean_object* v_s_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
uint8_t v_s_boxed_1664_; lean_object* v_res_1665_; 
v_s_boxed_1664_ = lean_unbox(v_s_1658_);
v_res_1665_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__6_spec__8(v_declName_1657_, v_s_boxed_1664_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11(lean_object* v_00_u03b1_1666_, lean_object* v_x_1667_, uint8_t v_isExporting_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___redArg(v_x_1667_, v_isExporting_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11___boxed(lean_object* v_00_u03b1_1675_, lean_object* v_x_1676_, lean_object* v_isExporting_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
uint8_t v_isExporting_boxed_1683_; lean_object* v_res_1684_; 
v_isExporting_boxed_1683_ = lean_unbox(v_isExporting_1677_);
v_res_1684_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__8_spec__11(v_00_u03b1_1675_, v_x_1676_, v_isExporting_boxed_1683_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object* v_k_1685_, uint8_t v_allowLevelAssignments_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1686_, v_k_1685_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
else
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1708_; 
v_a_1701_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1703_ = v___x_1692_;
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1692_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1706_; 
if (v_isShared_1704_ == 0)
{
v___x_1706_ = v___x_1703_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1701_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object* v_k_1709_, lean_object* v_allowLevelAssignments_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1716_; lean_object* v_res_1717_; 
v_allowLevelAssignments_boxed_1716_ = lean_unbox(v_allowLevelAssignments_1710_);
v_res_1717_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1709_, v_allowLevelAssignments_boxed_1716_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object* v_00_u03b1_1718_, lean_object* v_k_1719_, uint8_t v_allowLevelAssignments_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1719_, v_allowLevelAssignments_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object* v_00_u03b1_1727_, lean_object* v_k_1728_, lean_object* v_allowLevelAssignments_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1735_; lean_object* v_res_1736_; 
v_allowLevelAssignments_boxed_1735_ = lean_unbox(v_allowLevelAssignments_1729_);
v_res_1736_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(v_00_u03b1_1727_, v_k_1728_, v_allowLevelAssignments_boxed_1735_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object* v_as_1737_, size_t v_sz_1738_, size_t v_i_1739_, lean_object* v_b_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
uint8_t v___x_1746_; 
v___x_1746_ = lean_usize_dec_lt(v_i_1739_, v_sz_1738_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1747_, 0, v_b_1740_);
return v___x_1747_;
}
else
{
lean_object* v_snd_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1803_; 
v_snd_1748_ = lean_ctor_get(v_b_1740_, 1);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_b_1740_);
if (v_isSharedCheck_1803_ == 0)
{
lean_object* v_unused_1804_; 
v_unused_1804_ = lean_ctor_get(v_b_1740_, 0);
lean_dec(v_unused_1804_);
v___x_1750_ = v_b_1740_;
v_isShared_1751_ = v_isSharedCheck_1803_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_snd_1748_);
lean_dec(v_b_1740_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1803_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v_array_1752_; lean_object* v_start_1753_; lean_object* v_stop_1754_; lean_object* v___x_1755_; uint8_t v___x_1756_; 
v_array_1752_ = lean_ctor_get(v_snd_1748_, 0);
v_start_1753_ = lean_ctor_get(v_snd_1748_, 1);
v_stop_1754_ = lean_ctor_get(v_snd_1748_, 2);
v___x_1755_ = lean_box(0);
v___x_1756_ = lean_nat_dec_lt(v_start_1753_, v_stop_1754_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1758_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 0, v___x_1755_);
v___x_1758_ = v___x_1750_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1755_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_snd_1748_);
v___x_1758_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
lean_object* v___x_1759_; 
v___x_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1758_);
return v___x_1759_;
}
}
else
{
lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1799_; 
lean_inc(v_stop_1754_);
lean_inc(v_start_1753_);
lean_inc_ref(v_array_1752_);
v_isSharedCheck_1799_ = !lean_is_exclusive(v_snd_1748_);
if (v_isSharedCheck_1799_ == 0)
{
lean_object* v_unused_1800_; lean_object* v_unused_1801_; lean_object* v_unused_1802_; 
v_unused_1800_ = lean_ctor_get(v_snd_1748_, 2);
lean_dec(v_unused_1800_);
v_unused_1801_ = lean_ctor_get(v_snd_1748_, 1);
lean_dec(v_unused_1801_);
v_unused_1802_ = lean_ctor_get(v_snd_1748_, 0);
lean_dec(v_unused_1802_);
v___x_1762_ = v_snd_1748_;
v_isShared_1763_ = v_isSharedCheck_1799_;
goto v_resetjp_1761_;
}
else
{
lean_dec(v_snd_1748_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1799_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v_a_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1769_; 
v_a_1764_ = lean_array_uget_borrowed(v_as_1737_, v_i_1739_);
v___x_1765_ = lean_array_fget(v_array_1752_, v_start_1753_);
v___x_1766_ = lean_unsigned_to_nat(1u);
v___x_1767_ = lean_nat_add(v_start_1753_, v___x_1766_);
lean_dec(v_start_1753_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 1, v___x_1767_);
v___x_1769_ = v___x_1762_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_array_1752_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1798_, 2, v_stop_1754_);
v___x_1769_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
lean_object* v___x_1770_; 
lean_inc(v_a_1764_);
v___x_1770_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1764_, v___x_1765_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1789_; 
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1773_ = v___x_1770_;
v_isShared_1774_ = v_isSharedCheck_1789_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1789_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
uint8_t v___x_1775_; 
v___x_1775_ = lean_unbox(v_a_1771_);
if (v___x_1775_ == 0)
{
lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1776_, 0, v_a_1771_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 1, v___x_1769_);
lean_ctor_set(v___x_1750_, 0, v___x_1776_);
v___x_1778_ = v___x_1750_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1776_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v___x_1769_);
v___x_1778_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
lean_object* v___x_1780_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1778_);
v___x_1780_ = v___x_1773_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1778_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
else
{
lean_object* v___x_1784_; 
lean_del_object(v___x_1773_);
lean_dec(v_a_1771_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 1, v___x_1769_);
lean_ctor_set(v___x_1750_, 0, v___x_1755_);
v___x_1784_ = v___x_1750_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1755_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v___x_1769_);
v___x_1784_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
size_t v___x_1785_; size_t v___x_1786_; 
v___x_1785_ = ((size_t)1ULL);
v___x_1786_ = lean_usize_add(v_i_1739_, v___x_1785_);
v_i_1739_ = v___x_1786_;
v_b_1740_ = v___x_1784_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
lean_dec_ref(v___x_1769_);
lean_del_object(v___x_1750_);
v_a_1790_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1770_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1770_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object* v_as_1805_, lean_object* v_sz_1806_, lean_object* v_i_1807_, lean_object* v_b_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
size_t v_sz_boxed_1814_; size_t v_i_boxed_1815_; lean_object* v_res_1816_; 
v_sz_boxed_1814_ = lean_unbox_usize(v_sz_1806_);
lean_dec(v_sz_1806_);
v_i_boxed_1815_ = lean_unbox_usize(v_i_1807_);
lean_dec(v_i_1807_);
v_res_1816_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_as_1805_, v_sz_boxed_1814_, v_i_boxed_1815_, v_b_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec_ref(v_as_1805_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t v___x_1817_, lean_object* v_params2_1818_, lean_object* v___x_1819_, lean_object* v_params1_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_){
_start:
{
if (v___x_1817_ == 0)
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
lean_dec(v___x_1819_);
lean_dec_ref(v_params2_1818_);
v___x_1826_ = lean_box(v___x_1817_);
v___x_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
return v___x_1827_;
}
else
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; size_t v_sz_1832_; size_t v___x_1833_; lean_object* v___x_1834_; 
v___x_1828_ = lean_unsigned_to_nat(0u);
v___x_1829_ = l_Array_toSubarray___redArg(v_params2_1818_, v___x_1828_, v___x_1819_);
v___x_1830_ = lean_box(0);
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
lean_ctor_set(v___x_1831_, 1, v___x_1829_);
v_sz_1832_ = lean_array_size(v_params1_1820_);
v___x_1833_ = ((size_t)0ULL);
v___x_1834_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_params1_1820_, v_sz_1832_, v___x_1833_, v___x_1831_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1848_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1837_ = v___x_1834_;
v_isShared_1838_ = v_isSharedCheck_1848_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_a_1835_);
lean_dec(v___x_1834_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1848_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v_fst_1839_; 
v_fst_1839_ = lean_ctor_get(v_a_1835_, 0);
lean_inc(v_fst_1839_);
lean_dec(v_a_1835_);
if (lean_obj_tag(v_fst_1839_) == 0)
{
lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1840_ = lean_box(v___x_1817_);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1840_);
v___x_1842_ = v___x_1837_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
else
{
lean_object* v_val_1844_; lean_object* v___x_1846_; 
v_val_1844_ = lean_ctor_get(v_fst_1839_, 0);
lean_inc(v_val_1844_);
lean_dec_ref_known(v_fst_1839_, 1);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v_val_1844_);
v___x_1846_ = v___x_1837_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_val_1844_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
v_a_1849_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1834_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1834_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object* v___x_1857_, lean_object* v_params2_1858_, lean_object* v___x_1859_, lean_object* v_params1_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
uint8_t v___x_2164__boxed_1866_; lean_object* v_res_1867_; 
v___x_2164__boxed_1866_ = lean_unbox(v___x_1857_);
v_res_1867_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(v___x_2164__boxed_1866_, v_params2_1858_, v___x_1859_, v_params1_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec_ref(v_params1_1860_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object* v_params1_1868_, lean_object* v_params2_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; lean_object* v___x_1878_; lean_object* v___y_1879_; uint8_t v___x_1880_; lean_object* v___x_1881_; 
v___x_1875_ = lean_array_get_size(v_params1_1868_);
v___x_1876_ = lean_array_get_size(v_params2_1869_);
v___x_1877_ = lean_nat_dec_eq(v___x_1875_, v___x_1876_);
v___x_1878_ = lean_box(v___x_1877_);
v___y_1879_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed), 9, 4);
lean_closure_set(v___y_1879_, 0, v___x_1878_);
lean_closure_set(v___y_1879_, 1, v_params2_1869_);
lean_closure_set(v___y_1879_, 2, v___x_1876_);
lean_closure_set(v___y_1879_, 3, v_params1_1868_);
v___x_1880_ = 0;
v___x_1881_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v___y_1879_, v___x_1880_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object* v_params1_1882_, lean_object* v_params2_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params1_1882_, v_params2_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_);
lean_dec(v_a_1887_);
lean_dec_ref(v_a_1886_);
lean_dec(v_a_1885_);
lean_dec_ref(v_a_1884_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object* v_declName_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v___x_1893_; lean_object* v_env_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1893_ = lean_st_ref_get(v___y_1891_);
v_env_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc_ref(v_env_1894_);
lean_dec(v___x_1893_);
v___x_1895_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1894_, v_declName_1890_);
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object* v_declName_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1897_, v___y_1898_);
lean_dec(v___y_1898_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object* v_declName_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
lean_object* v___x_1907_; 
v___x_1907_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1901_, v___y_1905_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object* v_declName_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v_res_1914_; 
v_res_1914_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(v_declName_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
return v_res_1914_;
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0(void){
_start:
{
lean_object* v___x_1915_; lean_object* v_dummy_1916_; 
v___x_1915_ = lean_box(0);
v_dummy_1916_ = l_Lean_Expr_sort___override(v___x_1915_);
return v_dummy_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object* v_ctor_1917_, lean_object* v_induct_1918_, lean_object* v_params_1919_, lean_object* v_idx_1920_, lean_object* v_e_1921_, lean_object* v_x_x3f_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_){
_start:
{
if (lean_obj_tag(v_e_1921_) == 11)
{
lean_object* v_typeName_1934_; lean_object* v_idx_1935_; lean_object* v_struct_1936_; uint8_t v___x_1983_; 
v_typeName_1934_ = lean_ctor_get(v_e_1921_, 0);
v_idx_1935_ = lean_ctor_get(v_e_1921_, 1);
v_struct_1936_ = lean_ctor_get(v_e_1921_, 2);
lean_inc_ref(v_struct_1936_);
v___x_1983_ = lean_nat_dec_eq(v_idx_1935_, v_idx_1920_);
if (v___x_1983_ == 0)
{
lean_dec_ref(v_struct_1936_);
lean_dec_ref_known(v_e_1921_, 3);
lean_dec_ref(v_params_1919_);
goto v___jp_1931_;
}
else
{
uint8_t v___x_1984_; 
v___x_1984_ = lean_name_eq(v_induct_1918_, v_typeName_1934_);
if (v___x_1984_ == 0)
{
lean_dec_ref(v_struct_1936_);
lean_dec_ref_known(v_e_1921_, 3);
lean_dec_ref(v_params_1919_);
goto v___jp_1931_;
}
else
{
if (lean_obj_tag(v_x_x3f_1922_) == 0)
{
goto v___jp_1937_;
}
else
{
lean_object* v_val_1985_; uint8_t v___x_1986_; 
v_val_1985_ = lean_ctor_get(v_x_x3f_1922_, 0);
v___x_1986_ = lean_expr_eqv(v_val_1985_, v_struct_1936_);
if (v___x_1986_ == 0)
{
lean_dec_ref(v_struct_1936_);
lean_dec_ref_known(v_e_1921_, 3);
lean_dec_ref(v_params_1919_);
goto v___jp_1931_;
}
else
{
goto v___jp_1937_;
}
}
}
}
v___jp_1937_:
{
lean_object* v___x_1938_; 
lean_inc(v_a_1926_);
lean_inc_ref(v_a_1925_);
lean_inc(v_a_1924_);
lean_inc_ref(v_a_1923_);
v___x_1938_ = lean_infer_type(v_e_1921_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v___x_1940_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
lean_inc(v_a_1926_);
lean_inc_ref(v_a_1925_);
lean_inc(v_a_1924_);
lean_inc_ref(v_a_1923_);
v___x_1940_ = lean_whnf(v_a_1939_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v_dummy_1942_; lean_object* v_nargs_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v_dummy_1942_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_1943_ = l_Lean_Expr_getAppNumArgs(v_a_1941_);
lean_inc(v_nargs_1943_);
v___x_1944_ = lean_mk_array(v_nargs_1943_, v_dummy_1942_);
v___x_1945_ = lean_unsigned_to_nat(1u);
v___x_1946_ = lean_nat_sub(v_nargs_1943_, v___x_1945_);
lean_dec(v_nargs_1943_);
v___x_1947_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1941_, v___x_1944_, v___x_1946_);
v___x_1948_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1919_, v___x_1947_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1958_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1951_ = v___x_1948_;
v_isShared_1952_ = v_isSharedCheck_1958_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1948_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1958_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
uint8_t v___x_1953_; 
v___x_1953_ = lean_unbox(v_a_1949_);
lean_dec(v_a_1949_);
if (v___x_1953_ == 0)
{
lean_del_object(v___x_1951_);
lean_dec_ref(v_struct_1936_);
goto v___jp_1931_;
}
else
{
lean_object* v___x_1954_; lean_object* v___x_1956_; 
v___x_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1954_, 0, v_struct_1936_);
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 0, v___x_1954_);
v___x_1956_ = v___x_1951_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v___x_1954_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
else
{
lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1966_; 
lean_dec_ref(v_struct_1936_);
v_a_1959_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1966_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1961_ = v___x_1948_;
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1948_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1964_; 
if (v_isShared_1962_ == 0)
{
v___x_1964_ = v___x_1961_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_a_1959_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec_ref(v_struct_1936_);
lean_dec_ref(v_params_1919_);
v_a_1967_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1940_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1940_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_dec_ref(v_struct_1936_);
lean_dec_ref(v_params_1919_);
v_a_1975_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1938_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1938_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
else
{
lean_object* v___x_1987_; 
v___x_1987_ = l_Lean_Expr_getAppFn(v_e_1921_);
if (lean_obj_tag(v___x_1987_) == 4)
{
lean_object* v_declName_1988_; lean_object* v___x_1989_; lean_object* v_a_1990_; 
v_declName_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_declName_1988_);
lean_dec_ref_known(v___x_1987_, 2);
v___x_1989_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1988_, v_a_1926_);
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref(v___x_1989_);
if (lean_obj_tag(v_a_1990_) == 1)
{
lean_object* v_val_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2035_; 
v_val_1991_ = lean_ctor_get(v_a_1990_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v_a_1990_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_1993_ = v_a_1990_;
v_isShared_1994_ = v_isSharedCheck_2035_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_val_1991_);
lean_dec(v_a_1990_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2035_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v_ctorName_1995_; lean_object* v_numParams_1996_; lean_object* v_i_1997_; uint8_t v___x_1998_; 
v_ctorName_1995_ = lean_ctor_get(v_val_1991_, 0);
lean_inc(v_ctorName_1995_);
v_numParams_1996_ = lean_ctor_get(v_val_1991_, 1);
lean_inc(v_numParams_1996_);
v_i_1997_ = lean_ctor_get(v_val_1991_, 2);
lean_inc(v_i_1997_);
lean_dec(v_val_1991_);
v___x_1998_ = lean_name_eq(v_ctorName_1995_, v_ctor_1917_);
lean_dec(v_ctorName_1995_);
if (v___x_1998_ == 0)
{
lean_dec(v_i_1997_);
lean_dec(v_numParams_1996_);
lean_del_object(v___x_1993_);
lean_dec_ref(v_e_1921_);
lean_dec_ref(v_params_1919_);
goto v___jp_1928_;
}
else
{
uint8_t v___x_1999_; 
v___x_1999_ = lean_nat_dec_eq(v_i_1997_, v_idx_1920_);
lean_dec(v_i_1997_);
if (v___x_1999_ == 0)
{
lean_dec(v_numParams_1996_);
lean_del_object(v___x_1993_);
lean_dec_ref(v_e_1921_);
lean_dec_ref(v_params_1919_);
goto v___jp_1928_;
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_2000_ = l_Lean_Expr_getAppNumArgs(v_e_1921_);
v___x_2001_ = lean_unsigned_to_nat(1u);
v___x_2002_ = lean_nat_add(v_numParams_1996_, v___x_2001_);
lean_dec(v_numParams_1996_);
v___x_2003_ = lean_nat_dec_eq(v___x_2000_, v___x_2002_);
lean_dec(v___x_2002_);
lean_dec(v___x_2000_);
if (v___x_2003_ == 0)
{
lean_del_object(v___x_1993_);
lean_dec_ref(v_e_1921_);
lean_dec_ref(v_params_1919_);
goto v___jp_1928_;
}
else
{
lean_object* v___x_2004_; 
v___x_2004_ = l_Lean_Expr_appArg_x21(v_e_1921_);
if (lean_obj_tag(v_x_x3f_1922_) == 0)
{
goto v___jp_2005_;
}
else
{
lean_object* v_val_2033_; uint8_t v___x_2034_; 
v_val_2033_ = lean_ctor_get(v_x_x3f_1922_, 0);
v___x_2034_ = lean_expr_eqv(v_val_2033_, v___x_2004_);
if (v___x_2034_ == 0)
{
lean_dec_ref(v___x_2004_);
lean_del_object(v___x_1993_);
lean_dec_ref(v_e_1921_);
lean_dec_ref(v_params_1919_);
goto v___jp_1928_;
}
else
{
goto v___jp_2005_;
}
}
v___jp_2005_:
{
lean_object* v___x_2006_; lean_object* v_dummy_2007_; lean_object* v_nargs_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2006_ = l_Lean_Expr_appFn_x21(v_e_1921_);
lean_dec_ref(v_e_1921_);
v_dummy_2007_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_2008_ = l_Lean_Expr_getAppNumArgs(v___x_2006_);
lean_inc(v_nargs_2008_);
v___x_2009_ = lean_mk_array(v_nargs_2008_, v_dummy_2007_);
v___x_2010_ = lean_nat_sub(v_nargs_2008_, v___x_2001_);
lean_dec(v_nargs_2008_);
v___x_2011_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_2006_, v___x_2009_, v___x_2010_);
v___x_2012_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1919_, v___x_2011_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2024_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2015_ = v___x_2012_;
v_isShared_2016_ = v_isSharedCheck_2024_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_2012_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2024_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
uint8_t v___x_2017_; 
v___x_2017_ = lean_unbox(v_a_2013_);
lean_dec(v_a_2013_);
if (v___x_2017_ == 0)
{
lean_del_object(v___x_2015_);
lean_dec_ref(v___x_2004_);
lean_del_object(v___x_1993_);
goto v___jp_1928_;
}
else
{
lean_object* v___x_2019_; 
if (v_isShared_1994_ == 0)
{
lean_ctor_set(v___x_1993_, 0, v___x_2004_);
v___x_2019_ = v___x_1993_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_2004_);
v___x_2019_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2021_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 0, v___x_2019_);
v___x_2021_ = v___x_2015_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_dec_ref(v___x_2004_);
lean_del_object(v___x_1993_);
v_a_2025_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2012_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2012_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
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
lean_dec(v_a_1990_);
lean_dec_ref(v_e_1921_);
lean_dec_ref(v_params_1919_);
goto v___jp_1928_;
}
}
else
{
lean_dec_ref(v___x_1987_);
lean_dec_ref(v_e_1921_);
lean_dec_ref(v_params_1919_);
goto v___jp_1928_;
}
}
v___jp_1928_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_box(0);
v___x_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
v___jp_1931_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1932_ = lean_box(0);
v___x_1933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1932_);
return v___x_1933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object* v_ctor_2036_, lean_object* v_induct_2037_, lean_object* v_params_2038_, lean_object* v_idx_2039_, lean_object* v_e_2040_, lean_object* v_x_x3f_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_ctor_2036_, v_induct_2037_, v_params_2038_, v_idx_2039_, v_e_2040_, v_x_x3f_2041_, v_a_2042_, v_a_2043_, v_a_2044_, v_a_2045_);
lean_dec(v_a_2045_);
lean_dec_ref(v_a_2044_);
lean_dec(v_a_2043_);
lean_dec_ref(v_a_2042_);
lean_dec(v_x_x3f_2041_);
lean_dec(v_idx_2039_);
lean_dec(v_induct_2037_);
lean_dec(v_ctor_2036_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object* v_constName_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v___x_2054_; lean_object* v_env_2058_; uint8_t v___x_2059_; lean_object* v___x_2060_; 
v___x_2054_ = lean_st_ref_get(v___y_2052_);
v_env_2058_ = lean_ctor_get(v___x_2054_, 0);
lean_inc_ref(v_env_2058_);
lean_dec(v___x_2054_);
v___x_2059_ = 0;
v___x_2060_ = l_Lean_Environment_findAsync_x3f(v_env_2058_, v_constName_2048_, v___x_2059_);
if (lean_obj_tag(v___x_2060_) == 1)
{
lean_object* v_val_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2080_; 
v_val_2061_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2063_ = v___x_2060_;
v_isShared_2064_ = v_isSharedCheck_2080_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_val_2061_);
lean_dec(v___x_2060_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2080_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
uint8_t v_kind_2065_; 
v_kind_2065_ = lean_ctor_get_uint8(v_val_2061_, sizeof(void*)*3);
if (v_kind_2065_ == 6)
{
lean_object* v___x_2066_; 
v___x_2066_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2061_);
if (lean_obj_tag(v___x_2066_) == 6)
{
lean_object* v_val_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2077_; 
v_val_2067_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2069_ = v___x_2066_;
v_isShared_2070_ = v_isSharedCheck_2077_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_val_2067_);
lean_dec(v___x_2066_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2077_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v_val_2067_);
v___x_2072_ = v___x_2063_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_val_2067_);
v___x_2072_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v___x_2074_; 
if (v_isShared_2070_ == 0)
{
lean_ctor_set_tag(v___x_2069_, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2072_);
v___x_2074_ = v___x_2069_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
else
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
lean_dec_ref(v___x_2066_);
lean_del_object(v___x_2063_);
v___x_2078_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_2079_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_2078_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
return v___x_2079_;
}
}
else
{
lean_del_object(v___x_2063_);
lean_dec(v_val_2061_);
goto v___jp_2055_;
}
}
}
else
{
lean_dec(v___x_2060_);
goto v___jp_2055_;
}
v___jp_2055_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_box(0);
v___x_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
return v___x_2057_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object* v_constName_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_constName_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object* v_upperBound_2096_, lean_object* v___x_2097_, lean_object* v___x_2098_, lean_object* v_declName_2099_, lean_object* v___x_2100_, lean_object* v___x_2101_, lean_object* v_a_2102_, lean_object* v_val_2103_, lean_object* v_a_2104_, lean_object* v_b_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
uint8_t v___x_2111_; 
v___x_2111_ = lean_nat_dec_lt(v_a_2104_, v_upperBound_2096_);
if (v___x_2111_ == 0)
{
lean_object* v___x_2112_; 
lean_dec(v_a_2104_);
lean_dec_ref(v___x_2101_);
v___x_2112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2112_, 0, v_b_2105_);
return v___x_2112_;
}
else
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
lean_dec_ref(v_b_2105_);
v___x_2113_ = l_Lean_instInhabitedExpr;
v___x_2114_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2115_ = lean_nat_add(v___x_2097_, v_a_2104_);
v___x_2116_ = lean_array_get_borrowed(v___x_2113_, v___x_2098_, v___x_2115_);
lean_dec(v___x_2115_);
lean_inc(v___x_2116_);
lean_inc_ref(v___x_2101_);
v___x_2117_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2099_, v___x_2100_, v___x_2101_, v_a_2104_, v___x_2116_, v_a_2102_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2135_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2120_ = v___x_2117_;
v_isShared_2121_ = v_isSharedCheck_2135_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2117_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2135_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
if (lean_obj_tag(v_a_2118_) == 1)
{
lean_object* v_val_2122_; uint8_t v___x_2123_; 
v_val_2122_ = lean_ctor_get(v_a_2118_, 0);
lean_inc(v_val_2122_);
lean_dec_ref_known(v_a_2118_, 1);
v___x_2123_ = lean_expr_eqv(v_val_2122_, v_val_2103_);
lean_dec(v_val_2122_);
if (v___x_2123_ == 0)
{
lean_object* v___x_2124_; lean_object* v___x_2126_; 
lean_dec(v_a_2104_);
lean_dec_ref(v___x_2101_);
v___x_2124_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v___x_2124_);
v___x_2126_ = v___x_2120_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
else
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
lean_del_object(v___x_2120_);
v___x_2128_ = lean_unsigned_to_nat(1u);
v___x_2129_ = lean_nat_add(v_a_2104_, v___x_2128_);
lean_dec(v_a_2104_);
v_a_2104_ = v___x_2129_;
v_b_2105_ = v___x_2114_;
goto _start;
}
}
else
{
lean_object* v___x_2131_; lean_object* v___x_2133_; 
lean_dec(v_a_2118_);
lean_dec(v_a_2104_);
lean_dec_ref(v___x_2101_);
v___x_2131_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v___x_2131_);
v___x_2133_ = v___x_2120_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
lean_dec(v_a_2104_);
lean_dec_ref(v___x_2101_);
v_a_2136_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2117_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2117_);
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
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_2144_, lean_object* v___x_2145_, lean_object* v___x_2146_, lean_object* v_declName_2147_, lean_object* v___x_2148_, lean_object* v___x_2149_, lean_object* v_a_2150_, lean_object* v_val_2151_, lean_object* v_a_2152_, lean_object* v_b_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2144_, v___x_2145_, v___x_2146_, v_declName_2147_, v___x_2148_, v___x_2149_, v_a_2150_, v_val_2151_, v_a_2152_, v_b_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
lean_dec(v___y_2157_);
lean_dec_ref(v___y_2156_);
lean_dec(v___y_2155_);
lean_dec_ref(v___y_2154_);
lean_dec_ref(v_val_2151_);
lean_dec(v_a_2150_);
lean_dec(v___x_2148_);
lean_dec(v_declName_2147_);
lean_dec_ref(v___x_2146_);
lean_dec(v___x_2145_);
lean_dec(v_upperBound_2144_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object* v_e_2160_, lean_object* v_p_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = l_Lean_Expr_getAppFn(v_e_2160_);
if (lean_obj_tag(v___x_2167_) == 4)
{
lean_object* v_declName_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_declName_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc_n(v_declName_2168_, 2);
lean_dec_ref_known(v___x_2167_, 2);
v___x_2169_ = l_Lean_instInhabitedExpr;
v___x_2170_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_declName_2168_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2242_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2242_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2242_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
if (lean_obj_tag(v_a_2171_) == 1)
{
lean_object* v_val_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2239_; 
v_val_2180_ = lean_ctor_get(v_a_2171_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_a_2171_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2182_ = v_a_2171_;
v_isShared_2183_ = v_isSharedCheck_2239_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_val_2180_);
lean_dec(v_a_2171_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2239_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v_induct_2184_; lean_object* v_numParams_2185_; lean_object* v_numFields_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; 
v_induct_2184_ = lean_ctor_get(v_val_2180_, 1);
lean_inc_n(v_induct_2184_, 2);
v_numParams_2185_ = lean_ctor_get(v_val_2180_, 3);
lean_inc(v_numParams_2185_);
v_numFields_2186_ = lean_ctor_get(v_val_2180_, 4);
lean_inc(v_numFields_2186_);
lean_dec(v_val_2180_);
v___x_2187_ = lean_apply_1(v_p_2161_, v_induct_2184_);
v___x_2188_ = lean_unbox(v___x_2187_);
if (v___x_2188_ == 0)
{
lean_object* v___x_2189_; lean_object* v___x_2191_; 
lean_dec(v_numFields_2186_);
lean_dec(v_numParams_2185_);
lean_dec(v_induct_2184_);
lean_del_object(v___x_2173_);
lean_dec(v_declName_2168_);
lean_dec_ref(v_e_2160_);
v___x_2189_ = lean_box(0);
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2189_);
v___x_2191_ = v___x_2182_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2189_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
else
{
lean_object* v___x_2193_; uint8_t v___x_2194_; 
lean_del_object(v___x_2182_);
v___x_2193_ = lean_unsigned_to_nat(0u);
v___x_2194_ = lean_nat_dec_lt(v___x_2193_, v_numFields_2186_);
if (v___x_2194_ == 0)
{
lean_dec(v_numFields_2186_);
lean_dec(v_numParams_2185_);
lean_dec(v_induct_2184_);
lean_dec(v_declName_2168_);
lean_dec_ref(v_e_2160_);
goto v___jp_2175_;
}
else
{
lean_object* v___x_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; 
v___x_2195_ = l_Lean_Expr_getAppNumArgs(v_e_2160_);
v___x_2196_ = lean_nat_add(v_numParams_2185_, v_numFields_2186_);
v___x_2197_ = lean_nat_dec_eq(v___x_2195_, v___x_2196_);
lean_dec(v___x_2196_);
if (v___x_2197_ == 0)
{
lean_dec(v___x_2195_);
lean_dec(v_numFields_2186_);
lean_dec(v_numParams_2185_);
lean_dec(v_induct_2184_);
lean_dec(v_declName_2168_);
lean_dec_ref(v_e_2160_);
goto v___jp_2175_;
}
else
{
lean_object* v_dummy_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
lean_del_object(v___x_2173_);
v_dummy_2198_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
lean_inc(v___x_2195_);
v___x_2199_ = lean_mk_array(v___x_2195_, v_dummy_2198_);
v___x_2200_ = lean_unsigned_to_nat(1u);
v___x_2201_ = lean_nat_sub(v___x_2195_, v___x_2200_);
lean_dec(v___x_2195_);
v___x_2202_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2160_, v___x_2199_, v___x_2201_);
lean_inc(v_numParams_2185_);
v___x_2203_ = l_Array_extract___redArg(v___x_2202_, v___x_2193_, v_numParams_2185_);
v___x_2204_ = lean_array_get_borrowed(v___x_2169_, v___x_2202_, v_numParams_2185_);
v___x_2205_ = lean_box(0);
lean_inc(v___x_2204_);
lean_inc_ref(v___x_2203_);
v___x_2206_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2168_, v_induct_2184_, v___x_2203_, v___x_2193_, v___x_2204_, v___x_2205_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_);
if (lean_obj_tag(v___x_2206_) == 0)
{
lean_object* v_a_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2238_; 
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2209_ = v___x_2206_;
v_isShared_2210_ = v_isSharedCheck_2238_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_a_2207_);
lean_dec(v___x_2206_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2238_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
if (lean_obj_tag(v_a_2207_) == 1)
{
lean_object* v_val_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
lean_del_object(v___x_2209_);
v_val_2211_ = lean_ctor_get(v_a_2207_, 0);
v___x_2212_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2213_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_numFields_2186_, v_numParams_2185_, v___x_2202_, v_declName_2168_, v_induct_2184_, v___x_2203_, v_a_2207_, v_val_2211_, v___x_2200_, v___x_2212_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_);
lean_dec(v_induct_2184_);
lean_dec(v_declName_2168_);
lean_dec_ref(v___x_2202_);
lean_dec(v_numParams_2185_);
lean_dec(v_numFields_2186_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2226_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2216_ = v___x_2213_;
v_isShared_2217_ = v_isSharedCheck_2226_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2213_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2226_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v_fst_2218_; 
v_fst_2218_ = lean_ctor_get(v_a_2214_, 0);
lean_inc(v_fst_2218_);
lean_dec(v_a_2214_);
if (lean_obj_tag(v_fst_2218_) == 0)
{
lean_object* v___x_2220_; 
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v_a_2207_);
v___x_2220_ = v___x_2216_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2207_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
else
{
lean_object* v_val_2222_; lean_object* v___x_2224_; 
lean_dec_ref_known(v_a_2207_, 1);
v_val_2222_ = lean_ctor_get(v_fst_2218_, 0);
lean_inc(v_val_2222_);
lean_dec_ref_known(v_fst_2218_, 1);
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v_val_2222_);
v___x_2224_ = v___x_2216_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_val_2222_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
lean_dec_ref_known(v_a_2207_, 1);
v_a_2227_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2213_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2213_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v___x_2236_; 
lean_dec(v_a_2207_);
lean_dec_ref(v___x_2203_);
lean_dec_ref(v___x_2202_);
lean_dec(v_numFields_2186_);
lean_dec(v_numParams_2185_);
lean_dec(v_induct_2184_);
lean_dec(v_declName_2168_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 0, v___x_2205_);
v___x_2236_ = v___x_2209_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2205_);
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
lean_dec_ref(v___x_2203_);
lean_dec_ref(v___x_2202_);
lean_dec(v_numFields_2186_);
lean_dec(v_numParams_2185_);
lean_dec(v_induct_2184_);
lean_dec(v_declName_2168_);
return v___x_2206_;
}
}
}
}
}
}
else
{
lean_object* v___x_2240_; lean_object* v___x_2241_; 
lean_del_object(v___x_2173_);
lean_dec(v_a_2171_);
lean_dec(v_declName_2168_);
lean_dec_ref(v_p_2161_);
lean_dec_ref(v_e_2160_);
v___x_2240_ = lean_box(0);
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
return v___x_2241_;
}
v___jp_2175_:
{
lean_object* v___x_2176_; lean_object* v___x_2178_; 
v___x_2176_ = lean_box(0);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2176_);
v___x_2178_ = v___x_2173_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
lean_dec(v_declName_2168_);
lean_dec_ref(v_p_2161_);
lean_dec_ref(v_e_2160_);
v_a_2243_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2170_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2170_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_dec_ref(v___x_2167_);
lean_dec_ref(v_p_2161_);
lean_dec_ref(v_e_2160_);
v___x_2251_ = lean_box(0);
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
return v___x_2252_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object* v_e_2253_, lean_object* v_p_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l_Lean_Meta_etaStruct_x3f(v_e_2253_, v_p_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_);
lean_dec(v_a_2258_);
lean_dec_ref(v_a_2257_);
lean_dec(v_a_2256_);
lean_dec_ref(v_a_2255_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object* v_upperBound_2261_, lean_object* v___x_2262_, lean_object* v___x_2263_, lean_object* v_declName_2264_, lean_object* v___x_2265_, lean_object* v___x_2266_, lean_object* v_a_2267_, lean_object* v_val_2268_, lean_object* v_inst_2269_, lean_object* v_R_2270_, lean_object* v_a_2271_, lean_object* v_b_2272_, lean_object* v_c_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2261_, v___x_2262_, v___x_2263_, v_declName_2264_, v___x_2265_, v___x_2266_, v_a_2267_, v_val_2268_, v_a_2271_, v_b_2272_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2280_ = _args[0];
lean_object* v___x_2281_ = _args[1];
lean_object* v___x_2282_ = _args[2];
lean_object* v_declName_2283_ = _args[3];
lean_object* v___x_2284_ = _args[4];
lean_object* v___x_2285_ = _args[5];
lean_object* v_a_2286_ = _args[6];
lean_object* v_val_2287_ = _args[7];
lean_object* v_inst_2288_ = _args[8];
lean_object* v_R_2289_ = _args[9];
lean_object* v_a_2290_ = _args[10];
lean_object* v_b_2291_ = _args[11];
lean_object* v_c_2292_ = _args[12];
lean_object* v___y_2293_ = _args[13];
lean_object* v___y_2294_ = _args[14];
lean_object* v___y_2295_ = _args[15];
lean_object* v___y_2296_ = _args[16];
lean_object* v___y_2297_ = _args[17];
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(v_upperBound_2280_, v___x_2281_, v___x_2282_, v_declName_2283_, v___x_2284_, v___x_2285_, v_a_2286_, v_val_2287_, v_inst_2288_, v_R_2289_, v_a_2290_, v_b_2291_, v_c_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec_ref(v_val_2287_);
lean_dec(v_a_2286_);
lean_dec(v___x_2284_);
lean_dec(v_declName_2283_);
lean_dec_ref(v___x_2282_);
lean_dec(v___x_2281_);
lean_dec(v_upperBound_2280_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object* v_e_2299_, lean_object* v___y_2300_){
_start:
{
uint8_t v___x_2302_; 
v___x_2302_ = l_Lean_Expr_hasMVar(v_e_2299_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; 
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v_e_2299_);
return v___x_2303_;
}
else
{
lean_object* v___x_2304_; lean_object* v_mctx_2305_; lean_object* v___x_2306_; lean_object* v_fst_2307_; lean_object* v_snd_2308_; lean_object* v___x_2309_; lean_object* v_cache_2310_; lean_object* v_zetaDeltaFVarIds_2311_; lean_object* v_postponed_2312_; lean_object* v_diag_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2322_; 
v___x_2304_ = lean_st_ref_get(v___y_2300_);
v_mctx_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc_ref(v_mctx_2305_);
lean_dec(v___x_2304_);
v___x_2306_ = l_Lean_instantiateMVarsCore(v_mctx_2305_, v_e_2299_);
v_fst_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_fst_2307_);
v_snd_2308_ = lean_ctor_get(v___x_2306_, 1);
lean_inc(v_snd_2308_);
lean_dec_ref(v___x_2306_);
v___x_2309_ = lean_st_ref_take(v___y_2300_);
v_cache_2310_ = lean_ctor_get(v___x_2309_, 1);
v_zetaDeltaFVarIds_2311_ = lean_ctor_get(v___x_2309_, 2);
v_postponed_2312_ = lean_ctor_get(v___x_2309_, 3);
v_diag_2313_ = lean_ctor_get(v___x_2309_, 4);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2322_ == 0)
{
lean_object* v_unused_2323_; 
v_unused_2323_ = lean_ctor_get(v___x_2309_, 0);
lean_dec(v_unused_2323_);
v___x_2315_ = v___x_2309_;
v_isShared_2316_ = v_isSharedCheck_2322_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_diag_2313_);
lean_inc(v_postponed_2312_);
lean_inc(v_zetaDeltaFVarIds_2311_);
lean_inc(v_cache_2310_);
lean_dec(v___x_2309_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2322_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 0, v_snd_2308_);
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_snd_2308_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v_cache_2310_);
lean_ctor_set(v_reuseFailAlloc_2321_, 2, v_zetaDeltaFVarIds_2311_);
lean_ctor_set(v_reuseFailAlloc_2321_, 3, v_postponed_2312_);
lean_ctor_set(v_reuseFailAlloc_2321_, 4, v_diag_2313_);
v___x_2318_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = lean_st_ref_put(v___y_2300_, v___x_2318_);
v___x_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2320_, 0, v_fst_2307_);
return v___x_2320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object* v_e_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2324_, v___y_2325_);
lean_dec(v___y_2325_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object* v_e_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2328_, v___y_2330_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object* v_e_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(v_e_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
lean_dec_ref(v___y_2336_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object* v_x_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
v___x_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object* v_x_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lean_Meta_etaStructReduce___lam__0(v_x_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_);
lean_dec(v___y_2356_);
lean_dec_ref(v___y_2355_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec_ref(v_x_2352_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object* v_p_2359_, lean_object* v_e_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v___x_2366_; 
v___x_2366_ = l_Lean_Meta_etaStruct_x3f(v_e_2360_, v_p_2359_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2386_; 
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2369_ = v___x_2366_;
v_isShared_2370_ = v_isSharedCheck_2386_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2366_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2386_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
if (lean_obj_tag(v_a_2367_) == 1)
{
lean_object* v_val_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2381_; 
v_val_2371_ = lean_ctor_get(v_a_2367_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v_a_2367_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2373_ = v_a_2367_;
v_isShared_2374_ = v_isSharedCheck_2381_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_val_2371_);
lean_dec(v_a_2367_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2381_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
lean_ctor_set_tag(v___x_2373_, 0);
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_val_2371_);
v___x_2376_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
lean_object* v___x_2378_; 
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 0, v___x_2376_);
v___x_2378_ = v___x_2369_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
else
{
lean_object* v___x_2382_; lean_object* v___x_2384_; 
lean_dec(v_a_2367_);
v___x_2382_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 0, v___x_2382_);
v___x_2384_ = v___x_2369_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v___x_2382_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
v_a_2387_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2366_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2366_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2392_; 
if (v_isShared_2390_ == 0)
{
v___x_2392_ = v___x_2389_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_a_2387_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object* v_p_2395_, lean_object* v_e_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Lean_Meta_etaStructReduce___lam__1(v_p_2395_, v_e_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object* v_00_u03b1_2403_, lean_object* v_x_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; 
v___x_2410_ = lean_apply_1(v_x_2404_, lean_box(0));
v___x_2411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2411_, 0, v___x_2410_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2412_, lean_object* v_x_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(v_00_u03b1_2412_, v_x_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object* v_a_2420_, lean_object* v_b_2421_, lean_object* v_x_2422_){
_start:
{
if (lean_obj_tag(v_x_2422_) == 0)
{
lean_dec(v_b_2421_);
lean_dec_ref(v_a_2420_);
return v_x_2422_;
}
else
{
lean_object* v_key_2423_; lean_object* v_value_2424_; lean_object* v_tail_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2437_; 
v_key_2423_ = lean_ctor_get(v_x_2422_, 0);
v_value_2424_ = lean_ctor_get(v_x_2422_, 1);
v_tail_2425_ = lean_ctor_get(v_x_2422_, 2);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_x_2422_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2427_ = v_x_2422_;
v_isShared_2428_ = v_isSharedCheck_2437_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_tail_2425_);
lean_inc(v_value_2424_);
lean_inc(v_key_2423_);
lean_dec(v_x_2422_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2437_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
uint8_t v___x_2429_; 
v___x_2429_ = l_Lean_ExprStructEq_beq(v_key_2423_, v_a_2420_);
if (v___x_2429_ == 0)
{
lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2430_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2420_, v_b_2421_, v_tail_2425_);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 2, v___x_2430_);
v___x_2432_ = v___x_2427_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_key_2423_);
lean_ctor_set(v_reuseFailAlloc_2433_, 1, v_value_2424_);
lean_ctor_set(v_reuseFailAlloc_2433_, 2, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
else
{
lean_object* v___x_2435_; 
lean_dec(v_value_2424_);
lean_dec(v_key_2423_);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 1, v_b_2421_);
lean_ctor_set(v___x_2427_, 0, v_a_2420_);
v___x_2435_ = v___x_2427_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_a_2420_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v_b_2421_);
lean_ctor_set(v_reuseFailAlloc_2436_, 2, v_tail_2425_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object* v_x_2438_, lean_object* v_x_2439_){
_start:
{
if (lean_obj_tag(v_x_2439_) == 0)
{
return v_x_2438_;
}
else
{
lean_object* v_key_2440_; lean_object* v_value_2441_; lean_object* v_tail_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2465_; 
v_key_2440_ = lean_ctor_get(v_x_2439_, 0);
v_value_2441_ = lean_ctor_get(v_x_2439_, 1);
v_tail_2442_ = lean_ctor_get(v_x_2439_, 2);
v_isSharedCheck_2465_ = !lean_is_exclusive(v_x_2439_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2444_ = v_x_2439_;
v_isShared_2445_ = v_isSharedCheck_2465_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_tail_2442_);
lean_inc(v_value_2441_);
lean_inc(v_key_2440_);
lean_dec(v_x_2439_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2465_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2446_; uint64_t v___x_2447_; uint64_t v___x_2448_; uint64_t v___x_2449_; uint64_t v_fold_2450_; uint64_t v___x_2451_; uint64_t v___x_2452_; uint64_t v___x_2453_; size_t v___x_2454_; size_t v___x_2455_; size_t v___x_2456_; size_t v___x_2457_; size_t v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2461_; 
v___x_2446_ = lean_array_get_size(v_x_2438_);
v___x_2447_ = l_Lean_ExprStructEq_hash(v_key_2440_);
v___x_2448_ = 32ULL;
v___x_2449_ = lean_uint64_shift_right(v___x_2447_, v___x_2448_);
v_fold_2450_ = lean_uint64_xor(v___x_2447_, v___x_2449_);
v___x_2451_ = 16ULL;
v___x_2452_ = lean_uint64_shift_right(v_fold_2450_, v___x_2451_);
v___x_2453_ = lean_uint64_xor(v_fold_2450_, v___x_2452_);
v___x_2454_ = lean_uint64_to_usize(v___x_2453_);
v___x_2455_ = lean_usize_of_nat(v___x_2446_);
v___x_2456_ = ((size_t)1ULL);
v___x_2457_ = lean_usize_sub(v___x_2455_, v___x_2456_);
v___x_2458_ = lean_usize_land(v___x_2454_, v___x_2457_);
v___x_2459_ = lean_array_uget_borrowed(v_x_2438_, v___x_2458_);
lean_inc(v___x_2459_);
if (v_isShared_2445_ == 0)
{
lean_ctor_set(v___x_2444_, 2, v___x_2459_);
v___x_2461_ = v___x_2444_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_key_2440_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v_value_2441_);
lean_ctor_set(v_reuseFailAlloc_2464_, 2, v___x_2459_);
v___x_2461_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
lean_object* v___x_2462_; 
v___x_2462_ = lean_array_uset(v_x_2438_, v___x_2458_, v___x_2461_);
v_x_2438_ = v___x_2462_;
v_x_2439_ = v_tail_2442_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object* v_i_2466_, lean_object* v_source_2467_, lean_object* v_target_2468_){
_start:
{
lean_object* v___x_2469_; uint8_t v___x_2470_; 
v___x_2469_ = lean_array_get_size(v_source_2467_);
v___x_2470_ = lean_nat_dec_lt(v_i_2466_, v___x_2469_);
if (v___x_2470_ == 0)
{
lean_dec_ref(v_source_2467_);
lean_dec(v_i_2466_);
return v_target_2468_;
}
else
{
lean_object* v_es_2471_; lean_object* v___x_2472_; lean_object* v_source_2473_; lean_object* v_target_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v_es_2471_ = lean_array_fget(v_source_2467_, v_i_2466_);
v___x_2472_ = lean_box(0);
v_source_2473_ = lean_array_fset(v_source_2467_, v_i_2466_, v___x_2472_);
v_target_2474_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_target_2468_, v_es_2471_);
v___x_2475_ = lean_unsigned_to_nat(1u);
v___x_2476_ = lean_nat_add(v_i_2466_, v___x_2475_);
lean_dec(v_i_2466_);
v_i_2466_ = v___x_2476_;
v_source_2467_ = v_source_2473_;
v_target_2468_ = v_target_2474_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object* v_data_2478_){
_start:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v_nbuckets_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2479_ = lean_array_get_size(v_data_2478_);
v___x_2480_ = lean_unsigned_to_nat(2u);
v_nbuckets_2481_ = lean_nat_mul(v___x_2479_, v___x_2480_);
v___x_2482_ = lean_unsigned_to_nat(0u);
v___x_2483_ = lean_box(0);
v___x_2484_ = lean_mk_array(v_nbuckets_2481_, v___x_2483_);
v___x_2485_ = lean_array_propagate_mark(v_data_2478_, v___x_2484_);
v___x_2486_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v___x_2482_, v_data_2478_, v___x_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object* v_a_2487_, lean_object* v_x_2488_){
_start:
{
if (lean_obj_tag(v_x_2488_) == 0)
{
uint8_t v___x_2489_; 
v___x_2489_ = 0;
return v___x_2489_;
}
else
{
lean_object* v_key_2490_; lean_object* v_tail_2491_; uint8_t v___x_2492_; 
v_key_2490_ = lean_ctor_get(v_x_2488_, 0);
v_tail_2491_ = lean_ctor_get(v_x_2488_, 2);
v___x_2492_ = l_Lean_ExprStructEq_beq(v_key_2490_, v_a_2487_);
if (v___x_2492_ == 0)
{
v_x_2488_ = v_tail_2491_;
goto _start;
}
else
{
return v___x_2492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object* v_a_2494_, lean_object* v_x_2495_){
_start:
{
uint8_t v_res_2496_; lean_object* v_r_2497_; 
v_res_2496_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2494_, v_x_2495_);
lean_dec(v_x_2495_);
lean_dec_ref(v_a_2494_);
v_r_2497_ = lean_box(v_res_2496_);
return v_r_2497_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object* v_m_2498_, lean_object* v_a_2499_, lean_object* v_b_2500_){
_start:
{
lean_object* v_size_2501_; lean_object* v_buckets_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2545_; 
v_size_2501_ = lean_ctor_get(v_m_2498_, 0);
v_buckets_2502_ = lean_ctor_get(v_m_2498_, 1);
v_isSharedCheck_2545_ = !lean_is_exclusive(v_m_2498_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2504_ = v_m_2498_;
v_isShared_2505_ = v_isSharedCheck_2545_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_buckets_2502_);
lean_inc(v_size_2501_);
lean_dec(v_m_2498_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2545_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2506_; uint64_t v___x_2507_; uint64_t v___x_2508_; uint64_t v___x_2509_; uint64_t v_fold_2510_; uint64_t v___x_2511_; uint64_t v___x_2512_; uint64_t v___x_2513_; size_t v___x_2514_; size_t v___x_2515_; size_t v___x_2516_; size_t v___x_2517_; size_t v___x_2518_; lean_object* v_bkt_2519_; uint8_t v___x_2520_; 
v___x_2506_ = lean_array_get_size(v_buckets_2502_);
v___x_2507_ = l_Lean_ExprStructEq_hash(v_a_2499_);
v___x_2508_ = 32ULL;
v___x_2509_ = lean_uint64_shift_right(v___x_2507_, v___x_2508_);
v_fold_2510_ = lean_uint64_xor(v___x_2507_, v___x_2509_);
v___x_2511_ = 16ULL;
v___x_2512_ = lean_uint64_shift_right(v_fold_2510_, v___x_2511_);
v___x_2513_ = lean_uint64_xor(v_fold_2510_, v___x_2512_);
v___x_2514_ = lean_uint64_to_usize(v___x_2513_);
v___x_2515_ = lean_usize_of_nat(v___x_2506_);
v___x_2516_ = ((size_t)1ULL);
v___x_2517_ = lean_usize_sub(v___x_2515_, v___x_2516_);
v___x_2518_ = lean_usize_land(v___x_2514_, v___x_2517_);
v_bkt_2519_ = lean_array_uget_borrowed(v_buckets_2502_, v___x_2518_);
v___x_2520_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2499_, v_bkt_2519_);
if (v___x_2520_ == 0)
{
lean_object* v___x_2521_; lean_object* v_size_x27_2522_; lean_object* v___x_2523_; lean_object* v_buckets_x27_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___x_2521_ = lean_unsigned_to_nat(1u);
v_size_x27_2522_ = lean_nat_add(v_size_2501_, v___x_2521_);
lean_dec(v_size_2501_);
lean_inc(v_bkt_2519_);
v___x_2523_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2523_, 0, v_a_2499_);
lean_ctor_set(v___x_2523_, 1, v_b_2500_);
lean_ctor_set(v___x_2523_, 2, v_bkt_2519_);
v_buckets_x27_2524_ = lean_array_uset(v_buckets_2502_, v___x_2518_, v___x_2523_);
v___x_2525_ = lean_unsigned_to_nat(4u);
v___x_2526_ = lean_nat_mul(v_size_x27_2522_, v___x_2525_);
v___x_2527_ = lean_unsigned_to_nat(3u);
v___x_2528_ = lean_nat_div(v___x_2526_, v___x_2527_);
lean_dec(v___x_2526_);
v___x_2529_ = lean_array_get_size(v_buckets_x27_2524_);
v___x_2530_ = lean_nat_dec_le(v___x_2528_, v___x_2529_);
lean_dec(v___x_2528_);
if (v___x_2530_ == 0)
{
lean_object* v_val_2531_; lean_object* v___x_2533_; 
v_val_2531_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_buckets_x27_2524_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 1, v_val_2531_);
lean_ctor_set(v___x_2504_, 0, v_size_x27_2522_);
v___x_2533_ = v___x_2504_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_size_x27_2522_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v_val_2531_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
else
{
lean_object* v___x_2536_; 
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 1, v_buckets_x27_2524_);
lean_ctor_set(v___x_2504_, 0, v_size_x27_2522_);
v___x_2536_ = v___x_2504_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_size_x27_2522_);
lean_ctor_set(v_reuseFailAlloc_2537_, 1, v_buckets_x27_2524_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
else
{
lean_object* v___x_2538_; lean_object* v_buckets_x27_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2543_; 
lean_inc(v_bkt_2519_);
v___x_2538_ = lean_box(0);
v_buckets_x27_2539_ = lean_array_uset(v_buckets_2502_, v___x_2518_, v___x_2538_);
v___x_2540_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2499_, v_b_2500_, v_bkt_2519_);
v___x_2541_ = lean_array_uset(v_buckets_x27_2539_, v___x_2518_, v___x_2540_);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 1, v___x_2541_);
v___x_2543_ = v___x_2504_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_size_2501_);
lean_ctor_set(v_reuseFailAlloc_2544_, 1, v___x_2541_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
return v___x_2543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object* v_a_2546_, lean_object* v_e_2547_, lean_object* v_a_2548_){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2550_ = lean_st_ref_take(v_a_2546_);
v___x_2551_ = lean_box(0);
v___x_2552_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v___x_2550_, v_e_2547_, v_a_2548_);
v___x_2553_ = lean_st_ref_put(v_a_2546_, v___x_2552_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object* v_a_2554_, lean_object* v_e_2555_, lean_object* v_a_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v_res_2558_; 
v_res_2558_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(v_a_2554_, v_e_2555_, v_a_2556_);
lean_dec(v_a_2554_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_2559_, lean_object* v_x_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2566_ = lean_apply_1(v_x_2560_, lean_box(0));
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2568_, lean_object* v_x_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(v_00_u03b1_2568_, v_x_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_a_2576_, lean_object* v_x_2577_){
_start:
{
if (lean_obj_tag(v_x_2577_) == 0)
{
lean_object* v___x_2578_; 
v___x_2578_ = lean_box(0);
return v___x_2578_;
}
else
{
lean_object* v_key_2579_; lean_object* v_value_2580_; lean_object* v_tail_2581_; uint8_t v___x_2582_; 
v_key_2579_ = lean_ctor_get(v_x_2577_, 0);
v_value_2580_ = lean_ctor_get(v_x_2577_, 1);
v_tail_2581_ = lean_ctor_get(v_x_2577_, 2);
v___x_2582_ = l_Lean_ExprStructEq_beq(v_key_2579_, v_a_2576_);
if (v___x_2582_ == 0)
{
v_x_2577_ = v_tail_2581_;
goto _start;
}
else
{
lean_object* v___x_2584_; 
lean_inc(v_value_2580_);
v___x_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_value_2580_);
return v___x_2584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_a_2585_, lean_object* v_x_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2585_, v_x_2586_);
lean_dec(v_x_2586_);
lean_dec_ref(v_a_2585_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object* v_m_2588_, lean_object* v_a_2589_){
_start:
{
lean_object* v_buckets_2590_; lean_object* v___x_2591_; uint64_t v___x_2592_; uint64_t v___x_2593_; uint64_t v___x_2594_; uint64_t v_fold_2595_; uint64_t v___x_2596_; uint64_t v___x_2597_; uint64_t v___x_2598_; size_t v___x_2599_; size_t v___x_2600_; size_t v___x_2601_; size_t v___x_2602_; size_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v_buckets_2590_ = lean_ctor_get(v_m_2588_, 1);
v___x_2591_ = lean_array_get_size(v_buckets_2590_);
v___x_2592_ = l_Lean_ExprStructEq_hash(v_a_2589_);
v___x_2593_ = 32ULL;
v___x_2594_ = lean_uint64_shift_right(v___x_2592_, v___x_2593_);
v_fold_2595_ = lean_uint64_xor(v___x_2592_, v___x_2594_);
v___x_2596_ = 16ULL;
v___x_2597_ = lean_uint64_shift_right(v_fold_2595_, v___x_2596_);
v___x_2598_ = lean_uint64_xor(v_fold_2595_, v___x_2597_);
v___x_2599_ = lean_uint64_to_usize(v___x_2598_);
v___x_2600_ = lean_usize_of_nat(v___x_2591_);
v___x_2601_ = ((size_t)1ULL);
v___x_2602_ = lean_usize_sub(v___x_2600_, v___x_2601_);
v___x_2603_ = lean_usize_land(v___x_2599_, v___x_2602_);
v___x_2604_ = lean_array_uget_borrowed(v_buckets_2590_, v___x_2603_);
v___x_2605_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2589_, v___x_2604_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_m_2606_, lean_object* v_a_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_2606_, v_a_2607_);
lean_dec_ref(v_a_2607_);
lean_dec_ref(v_m_2606_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object* v_k_2609_, lean_object* v___y_2610_, lean_object* v_b_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_){
_start:
{
lean_object* v___x_2617_; 
lean_inc(v___y_2615_);
lean_inc_ref(v___y_2614_);
lean_inc(v___y_2613_);
lean_inc_ref(v___y_2612_);
lean_inc(v___y_2610_);
v___x_2617_ = lean_apply_7(v_k_2609_, v_b_2611_, v___y_2610_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, lean_box(0));
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_2618_, lean_object* v___y_2619_, lean_object* v_b_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_){
_start:
{
lean_object* v_res_2626_; 
v_res_2626_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(v_k_2618_, v___y_2619_, v_b_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_);
lean_dec(v___y_2624_);
lean_dec_ref(v___y_2623_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2619_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object* v_name_2627_, uint8_t v_bi_2628_, lean_object* v_type_2629_, lean_object* v_k_2630_, uint8_t v_kind_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___f_2638_; lean_object* v___x_2639_; 
lean_inc(v___y_2632_);
v___f_2638_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2638_, 0, v_k_2630_);
lean_closure_set(v___f_2638_, 1, v___y_2632_);
v___x_2639_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2627_, v_bi_2628_, v_type_2629_, v___f_2638_, v_kind_2631_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
if (lean_obj_tag(v___x_2639_) == 0)
{
return v___x_2639_;
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2639_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2639_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2640_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object* v_name_2648_, lean_object* v_bi_2649_, lean_object* v_type_2650_, lean_object* v_k_2651_, lean_object* v_kind_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
uint8_t v_bi_boxed_2659_; uint8_t v_kind_boxed_2660_; lean_object* v_res_2661_; 
v_bi_boxed_2659_ = lean_unbox(v_bi_2649_);
v_kind_boxed_2660_ = lean_unbox(v_kind_2652_);
v_res_2661_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_2648_, v_bi_boxed_2659_, v_type_2650_, v_k_2651_, v_kind_boxed_2660_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v___y_2653_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2662_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v_res_2675_; 
v_res_2675_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
lean_dec(v___y_2673_);
lean_dec_ref(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object* v_name_2676_, lean_object* v_type_2677_, lean_object* v_val_2678_, lean_object* v_k_2679_, uint8_t v_nondep_2680_, uint8_t v_kind_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v___f_2688_; lean_object* v___x_2689_; 
lean_inc(v___y_2682_);
v___f_2688_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2688_, 0, v_k_2679_);
lean_closure_set(v___f_2688_, 1, v___y_2682_);
v___x_2689_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2676_, v_type_2677_, v_val_2678_, v___f_2688_, v_nondep_2680_, v_kind_2681_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
if (lean_obj_tag(v___x_2689_) == 0)
{
return v___x_2689_;
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2689_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2689_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object* v_name_2698_, lean_object* v_type_2699_, lean_object* v_val_2700_, lean_object* v_k_2701_, lean_object* v_nondep_2702_, lean_object* v_kind_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
uint8_t v_nondep_boxed_2710_; uint8_t v_kind_boxed_2711_; lean_object* v_res_2712_; 
v_nondep_boxed_2710_ = lean_unbox(v_nondep_2702_);
v_kind_boxed_2711_ = lean_unbox(v_kind_2703_);
v_res_2712_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_2698_, v_type_2699_, v_val_2700_, v_k_2701_, v_nondep_boxed_2710_, v_kind_boxed_2711_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec(v___y_2704_);
return v_res_2712_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3(void){
_start:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2718_ = l_Lean_maxRecDepthErrorMessage;
v___x_2719_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2718_);
return v___x_2719_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3);
v___x_2721_ = l_Lean_MessageData_ofFormat(v___x_2720_);
return v___x_2721_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5(void){
_start:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2722_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4);
v___x_2723_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2));
v___x_2724_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2723_);
lean_ctor_set(v___x_2724_, 1, v___x_2722_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object* v_ref_2725_){
_start:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2727_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5);
v___x_2728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2728_, 0, v_ref_2725_);
lean_ctor_set(v___x_2728_, 1, v___x_2727_);
v___x_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object* v_ref_2730_, lean_object* v___y_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2730_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object* v_x_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v___y_2741_; lean_object* v_toCold_2750_; lean_object* v_currRecDepth_2751_; lean_object* v_ref_2752_; uint16_t v_optionFlags_2753_; uint8_t v_suppressElabErrors_2754_; uint8_t v_checkDeprecated_2755_; uint8_t v_isRecordingDeps_2756_; lean_object* v_maxRecDepth_2762_; lean_object* v___x_2763_; uint8_t v___x_2764_; 
v_toCold_2750_ = lean_ctor_get(v___y_2737_, 0);
v_currRecDepth_2751_ = lean_ctor_get(v___y_2737_, 1);
v_ref_2752_ = lean_ctor_get(v___y_2737_, 2);
v_optionFlags_2753_ = lean_ctor_get_uint16(v___y_2737_, sizeof(void*)*3);
v_suppressElabErrors_2754_ = lean_ctor_get_uint8(v___y_2737_, sizeof(void*)*3 + 2);
v_checkDeprecated_2755_ = lean_ctor_get_uint8(v___y_2737_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2756_ = lean_ctor_get_uint8(v___y_2737_, sizeof(void*)*3 + 4);
v_maxRecDepth_2762_ = lean_ctor_get(v_toCold_2750_, 3);
v___x_2763_ = lean_unsigned_to_nat(0u);
v___x_2764_ = lean_nat_dec_eq(v_maxRecDepth_2762_, v___x_2763_);
if (v___x_2764_ == 0)
{
uint8_t v___x_2765_; 
v___x_2765_ = lean_nat_dec_eq(v_currRecDepth_2751_, v_maxRecDepth_2762_);
if (v___x_2765_ == 0)
{
goto v___jp_2757_;
}
else
{
lean_object* v___x_2766_; 
lean_dec_ref(v_x_2733_);
lean_inc(v_ref_2752_);
v___x_2766_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2752_);
v___y_2741_ = v___x_2766_;
goto v___jp_2740_;
}
}
else
{
goto v___jp_2757_;
}
v___jp_2740_:
{
if (lean_obj_tag(v___y_2741_) == 0)
{
return v___y_2741_;
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
v_a_2742_ = lean_ctor_get(v___y_2741_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___y_2741_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___y_2741_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___y_2741_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
v___jp_2757_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2758_ = lean_unsigned_to_nat(1u);
v___x_2759_ = lean_nat_add(v_currRecDepth_2751_, v___x_2758_);
lean_inc(v_ref_2752_);
lean_inc_ref(v_toCold_2750_);
v___x_2760_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2760_, 0, v_toCold_2750_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
lean_ctor_set(v___x_2760_, 2, v_ref_2752_);
lean_ctor_set_uint16(v___x_2760_, sizeof(void*)*3, v_optionFlags_2753_);
lean_ctor_set_uint8(v___x_2760_, sizeof(void*)*3 + 2, v_suppressElabErrors_2754_);
lean_ctor_set_uint8(v___x_2760_, sizeof(void*)*3 + 3, v_checkDeprecated_2755_);
lean_ctor_set_uint8(v___x_2760_, sizeof(void*)*3 + 4, v_isRecordingDeps_2756_);
lean_inc(v___y_2738_);
lean_inc(v___y_2736_);
lean_inc_ref(v___y_2735_);
lean_inc(v___y_2734_);
v___x_2761_ = lean_apply_6(v_x_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___x_2760_, v___y_2738_, lean_box(0));
v___y_2741_ = v___x_2761_;
goto v___jp_2740_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object* v_x_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v___y_2768_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_2775_, lean_object* v_pre_2776_, lean_object* v_post_2777_, lean_object* v_usedLetOnly_2778_, lean_object* v_skipConstInApp_2779_, lean_object* v_skipInstances_2780_, lean_object* v_body_2781_, lean_object* v_x_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_){
_start:
{
uint8_t v_usedLetOnly_boxed_2789_; uint8_t v_skipConstInApp_boxed_2790_; uint8_t v_skipInstances_boxed_2791_; lean_object* v_res_2792_; 
v_usedLetOnly_boxed_2789_ = lean_unbox(v_usedLetOnly_2778_);
v_skipConstInApp_boxed_2790_ = lean_unbox(v_skipConstInApp_2779_);
v_skipInstances_boxed_2791_ = lean_unbox(v_skipInstances_2780_);
v_res_2792_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_2775_, v_pre_2776_, v_post_2777_, v_usedLetOnly_boxed_2789_, v_skipConstInApp_boxed_2790_, v_skipInstances_boxed_2791_, v_body_2781_, v_x_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
lean_dec(v___y_2787_);
lean_dec_ref(v___y_2786_);
lean_dec(v___y_2785_);
lean_dec_ref(v___y_2784_);
lean_dec(v___y_2783_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_2796_, lean_object* v_pre_2797_, lean_object* v_post_2798_, uint8_t v_usedLetOnly_2799_, uint8_t v_skipConstInApp_2800_, uint8_t v_skipInstances_2801_, lean_object* v_body_2802_, lean_object* v_x_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = lean_array_push(v_fvars_2796_, v_x_2803_);
v___x_2811_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_2797_, v_post_2798_, v_usedLetOnly_2799_, v_skipConstInApp_2800_, v_skipInstances_2801_, v___x_2810_, v_body_2802_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_2812_, lean_object* v_pre_2813_, lean_object* v_post_2814_, lean_object* v_usedLetOnly_2815_, lean_object* v_skipConstInApp_2816_, lean_object* v_skipInstances_2817_, lean_object* v_body_2818_, lean_object* v_x_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
uint8_t v_usedLetOnly_boxed_2826_; uint8_t v_skipConstInApp_boxed_2827_; uint8_t v_skipInstances_boxed_2828_; lean_object* v_res_2829_; 
v_usedLetOnly_boxed_2826_ = lean_unbox(v_usedLetOnly_2815_);
v_skipConstInApp_boxed_2827_ = lean_unbox(v_skipConstInApp_2816_);
v_skipInstances_boxed_2828_ = lean_unbox(v_skipInstances_2817_);
v_res_2829_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_2812_, v_pre_2813_, v_post_2814_, v_usedLetOnly_boxed_2826_, v_skipConstInApp_boxed_2827_, v_skipInstances_boxed_2828_, v_body_2818_, v_x_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object* v_pre_2830_, lean_object* v_post_2831_, uint8_t v_usedLetOnly_2832_, uint8_t v_skipConstInApp_2833_, uint8_t v_skipInstances_2834_, lean_object* v_e_2835_, lean_object* v_a_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v___x_2842_; 
lean_inc_ref(v_post_2831_);
lean_inc(v___y_2840_);
lean_inc_ref(v___y_2839_);
lean_inc(v___y_2838_);
lean_inc_ref(v___y_2837_);
lean_inc_ref(v_e_2835_);
v___x_2842_ = lean_apply_6(v_post_2831_, v_e_2835_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, lean_box(0));
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2861_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2845_ = v___x_2842_;
v_isShared_2846_ = v_isSharedCheck_2861_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2842_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2861_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
switch(lean_obj_tag(v_a_2843_))
{
case 0:
{
lean_object* v_e_2847_; lean_object* v___x_2849_; 
lean_dec_ref(v_e_2835_);
lean_dec_ref(v_post_2831_);
lean_dec_ref(v_pre_2830_);
v_e_2847_ = lean_ctor_get(v_a_2843_, 0);
lean_inc_ref(v_e_2847_);
lean_dec_ref_known(v_a_2843_, 1);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v_e_2847_);
v___x_2849_ = v___x_2845_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_e_2847_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
case 1:
{
lean_object* v_e_2851_; lean_object* v___x_2852_; 
lean_del_object(v___x_2845_);
lean_dec_ref(v_e_2835_);
v_e_2851_ = lean_ctor_get(v_a_2843_, 0);
lean_inc_ref(v_e_2851_);
lean_dec_ref_known(v_a_2843_, 1);
v___x_2852_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2830_, v_post_2831_, v_usedLetOnly_2832_, v_skipConstInApp_2833_, v_skipInstances_2834_, v_e_2851_, v_a_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
return v___x_2852_;
}
default: 
{
lean_object* v_e_x3f_2853_; 
lean_dec_ref(v_post_2831_);
lean_dec_ref(v_pre_2830_);
v_e_x3f_2853_ = lean_ctor_get(v_a_2843_, 0);
lean_inc(v_e_x3f_2853_);
lean_dec_ref_known(v_a_2843_, 1);
if (lean_obj_tag(v_e_x3f_2853_) == 0)
{
lean_object* v___x_2855_; 
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v_e_2835_);
v___x_2855_ = v___x_2845_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_e_2835_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
else
{
lean_object* v_val_2857_; lean_object* v___x_2859_; 
lean_dec_ref(v_e_2835_);
v_val_2857_ = lean_ctor_get(v_e_x3f_2853_, 0);
lean_inc(v_val_2857_);
lean_dec_ref_known(v_e_x3f_2853_, 1);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v_val_2857_);
v___x_2859_ = v___x_2845_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_val_2857_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
}
}
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2869_; 
lean_dec_ref(v_e_2835_);
lean_dec_ref(v_post_2831_);
lean_dec_ref(v_pre_2830_);
v_a_2862_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2864_ = v___x_2842_;
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2842_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object* v_pre_2870_, lean_object* v_post_2871_, uint8_t v_usedLetOnly_2872_, uint8_t v_skipConstInApp_2873_, uint8_t v_skipInstances_2874_, lean_object* v_fvars_2875_, lean_object* v_e_2876_, lean_object* v_a_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
if (lean_obj_tag(v_e_2876_) == 6)
{
lean_object* v_binderName_2883_; lean_object* v_binderType_2884_; lean_object* v_body_2885_; uint8_t v_binderInfo_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___f_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v_binderName_2883_ = lean_ctor_get(v_e_2876_, 0);
lean_inc(v_binderName_2883_);
v_binderType_2884_ = lean_ctor_get(v_e_2876_, 1);
lean_inc_ref(v_binderType_2884_);
v_body_2885_ = lean_ctor_get(v_e_2876_, 2);
lean_inc_ref(v_body_2885_);
v_binderInfo_2886_ = lean_ctor_get_uint8(v_e_2876_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2876_, 3);
v___x_2887_ = lean_box(v_usedLetOnly_2872_);
v___x_2888_ = lean_box(v_skipConstInApp_2873_);
v___x_2889_ = lean_box(v_skipInstances_2874_);
lean_inc_ref(v_post_2871_);
lean_inc_ref(v_pre_2870_);
lean_inc_ref(v_fvars_2875_);
v___f_2890_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2890_, 0, v_fvars_2875_);
lean_closure_set(v___f_2890_, 1, v_pre_2870_);
lean_closure_set(v___f_2890_, 2, v_post_2871_);
lean_closure_set(v___f_2890_, 3, v___x_2887_);
lean_closure_set(v___f_2890_, 4, v___x_2888_);
lean_closure_set(v___f_2890_, 5, v___x_2889_);
lean_closure_set(v___f_2890_, 6, v_body_2885_);
v___x_2891_ = lean_expr_instantiate_rev(v_binderType_2884_, v_fvars_2875_);
lean_dec_ref(v_fvars_2875_);
lean_dec_ref(v_binderType_2884_);
v___x_2892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2870_, v_post_2871_, v_usedLetOnly_2872_, v_skipConstInApp_2873_, v_skipInstances_2874_, v___x_2891_, v_a_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v_a_2893_; uint8_t v___x_2894_; lean_object* v___x_2895_; 
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
lean_inc(v_a_2893_);
lean_dec_ref_known(v___x_2892_, 1);
v___x_2894_ = 0;
v___x_2895_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_2883_, v_binderInfo_2886_, v_a_2893_, v___f_2890_, v___x_2894_, v_a_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
return v___x_2895_;
}
else
{
lean_dec_ref(v___f_2890_);
lean_dec(v_binderName_2883_);
return v___x_2892_;
}
}
else
{
lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2896_ = lean_expr_instantiate_rev(v_e_2876_, v_fvars_2875_);
lean_dec_ref(v_e_2876_);
lean_inc_ref(v_post_2871_);
lean_inc_ref(v_pre_2870_);
v___x_2897_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2870_, v_post_2871_, v_usedLetOnly_2872_, v_skipConstInApp_2873_, v_skipInstances_2874_, v___x_2896_, v_a_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; uint8_t v___x_2899_; uint8_t v___x_2900_; uint8_t v___x_2901_; lean_object* v___x_2902_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_a_2898_);
lean_dec_ref_known(v___x_2897_, 1);
v___x_2899_ = 0;
v___x_2900_ = 1;
v___x_2901_ = 1;
v___x_2902_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2875_, v_a_2898_, v___x_2899_, v_usedLetOnly_2872_, v___x_2899_, v___x_2900_, v___x_2901_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
lean_dec_ref(v_fvars_2875_);
if (lean_obj_tag(v___x_2902_) == 0)
{
lean_object* v_a_2903_; lean_object* v___x_2904_; 
v_a_2903_ = lean_ctor_get(v___x_2902_, 0);
lean_inc(v_a_2903_);
lean_dec_ref_known(v___x_2902_, 1);
v___x_2904_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2870_, v_post_2871_, v_usedLetOnly_2872_, v_skipConstInApp_2873_, v_skipInstances_2874_, v_a_2903_, v_a_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
return v___x_2904_;
}
else
{
lean_dec_ref(v_post_2871_);
lean_dec_ref(v_pre_2870_);
return v___x_2902_;
}
}
else
{
lean_dec_ref(v_fvars_2875_);
lean_dec_ref(v_post_2871_);
lean_dec_ref(v_pre_2870_);
return v___x_2897_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object* v_fvars_2905_, lean_object* v_pre_2906_, lean_object* v_post_2907_, uint8_t v_usedLetOnly_2908_, uint8_t v_skipConstInApp_2909_, uint8_t v_skipInstances_2910_, lean_object* v_body_2911_, lean_object* v_x_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2919_ = lean_array_push(v_fvars_2905_, v_x_2912_);
v___x_2920_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_2906_, v_post_2907_, v_usedLetOnly_2908_, v_skipConstInApp_2909_, v_skipInstances_2910_, v___x_2919_, v_body_2911_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object* v_fvars_2921_, lean_object* v_pre_2922_, lean_object* v_post_2923_, lean_object* v_usedLetOnly_2924_, lean_object* v_skipConstInApp_2925_, lean_object* v_skipInstances_2926_, lean_object* v_body_2927_, lean_object* v_x_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
uint8_t v_usedLetOnly_boxed_2935_; uint8_t v_skipConstInApp_boxed_2936_; uint8_t v_skipInstances_boxed_2937_; lean_object* v_res_2938_; 
v_usedLetOnly_boxed_2935_ = lean_unbox(v_usedLetOnly_2924_);
v_skipConstInApp_boxed_2936_ = lean_unbox(v_skipConstInApp_2925_);
v_skipInstances_boxed_2937_ = lean_unbox(v_skipInstances_2926_);
v_res_2938_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(v_fvars_2921_, v_pre_2922_, v_post_2923_, v_usedLetOnly_boxed_2935_, v_skipConstInApp_boxed_2936_, v_skipInstances_boxed_2937_, v_body_2927_, v_x_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
lean_dec(v___y_2931_);
lean_dec_ref(v___y_2930_);
lean_dec(v___y_2929_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object* v_pre_2939_, lean_object* v_post_2940_, uint8_t v_usedLetOnly_2941_, uint8_t v_skipConstInApp_2942_, uint8_t v_skipInstances_2943_, lean_object* v_fvars_2944_, lean_object* v_e_2945_, lean_object* v_a_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_){
_start:
{
if (lean_obj_tag(v_e_2945_) == 8)
{
lean_object* v_declName_2952_; lean_object* v_type_2953_; lean_object* v_value_2954_; lean_object* v_body_2955_; uint8_t v_nondep_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___f_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v_declName_2952_ = lean_ctor_get(v_e_2945_, 0);
lean_inc(v_declName_2952_);
v_type_2953_ = lean_ctor_get(v_e_2945_, 1);
lean_inc_ref(v_type_2953_);
v_value_2954_ = lean_ctor_get(v_e_2945_, 2);
lean_inc_ref(v_value_2954_);
v_body_2955_ = lean_ctor_get(v_e_2945_, 3);
lean_inc_ref(v_body_2955_);
v_nondep_2956_ = lean_ctor_get_uint8(v_e_2945_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2945_, 4);
v___x_2957_ = lean_box(v_usedLetOnly_2941_);
v___x_2958_ = lean_box(v_skipConstInApp_2942_);
v___x_2959_ = lean_box(v_skipInstances_2943_);
lean_inc_ref_n(v_post_2940_, 2);
lean_inc_ref_n(v_pre_2939_, 2);
lean_inc_ref(v_fvars_2944_);
v___f_2960_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2960_, 0, v_fvars_2944_);
lean_closure_set(v___f_2960_, 1, v_pre_2939_);
lean_closure_set(v___f_2960_, 2, v_post_2940_);
lean_closure_set(v___f_2960_, 3, v___x_2957_);
lean_closure_set(v___f_2960_, 4, v___x_2958_);
lean_closure_set(v___f_2960_, 5, v___x_2959_);
lean_closure_set(v___f_2960_, 6, v_body_2955_);
v___x_2961_ = lean_expr_instantiate_rev(v_type_2953_, v_fvars_2944_);
lean_dec_ref(v_type_2953_);
v___x_2962_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2939_, v_post_2940_, v_usedLetOnly_2941_, v_skipConstInApp_2942_, v_skipInstances_2943_, v___x_2961_, v_a_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2964_ = lean_expr_instantiate_rev(v_value_2954_, v_fvars_2944_);
lean_dec_ref(v_fvars_2944_);
lean_dec_ref(v_value_2954_);
v___x_2965_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2939_, v_post_2940_, v_usedLetOnly_2941_, v_skipConstInApp_2942_, v_skipInstances_2943_, v___x_2964_, v_a_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; uint8_t v___x_2967_; lean_object* v___x_2968_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___x_2965_, 1);
v___x_2967_ = 0;
v___x_2968_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_declName_2952_, v_a_2963_, v_a_2966_, v___f_2960_, v_nondep_2956_, v___x_2967_, v_a_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
return v___x_2968_;
}
else
{
lean_dec(v_a_2963_);
lean_dec_ref(v___f_2960_);
lean_dec(v_declName_2952_);
return v___x_2965_;
}
}
else
{
lean_dec_ref(v___f_2960_);
lean_dec_ref(v_value_2954_);
lean_dec(v_declName_2952_);
lean_dec_ref(v_fvars_2944_);
lean_dec_ref(v_post_2940_);
lean_dec_ref(v_pre_2939_);
return v___x_2962_;
}
}
else
{
lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2969_ = lean_expr_instantiate_rev(v_e_2945_, v_fvars_2944_);
lean_dec_ref(v_e_2945_);
lean_inc_ref(v_post_2940_);
lean_inc_ref(v_pre_2939_);
v___x_2970_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2939_, v_post_2940_, v_usedLetOnly_2941_, v_skipConstInApp_2942_, v_skipInstances_2943_, v___x_2969_, v_a_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; uint8_t v___x_2972_; uint8_t v___x_2973_; lean_object* v___x_2974_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2970_, 1);
v___x_2972_ = 0;
v___x_2973_ = 1;
v___x_2974_ = l_Lean_Meta_mkLetFVars(v_fvars_2944_, v_a_2971_, v_usedLetOnly_2941_, v___x_2972_, v___x_2973_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
lean_dec_ref(v_fvars_2944_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2976_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_2975_);
lean_dec_ref_known(v___x_2974_, 1);
v___x_2976_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2939_, v_post_2940_, v_usedLetOnly_2941_, v_skipConstInApp_2942_, v_skipInstances_2943_, v_a_2975_, v_a_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
return v___x_2976_;
}
else
{
lean_dec_ref(v_post_2940_);
lean_dec_ref(v_pre_2939_);
return v___x_2974_;
}
}
else
{
lean_dec_ref(v_fvars_2944_);
lean_dec_ref(v_post_2940_);
lean_dec_ref(v_pre_2939_);
return v___x_2970_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object* v_pre_2977_, lean_object* v_post_2978_, uint8_t v_usedLetOnly_2979_, uint8_t v_skipConstInApp_2980_, uint8_t v_skipInstances_2981_, size_t v_sz_2982_, size_t v_i_2983_, lean_object* v_bs_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
uint8_t v___x_2991_; 
v___x_2991_ = lean_usize_dec_lt(v_i_2983_, v_sz_2982_);
if (v___x_2991_ == 0)
{
lean_object* v___x_2992_; 
lean_dec_ref(v_post_2978_);
lean_dec_ref(v_pre_2977_);
v___x_2992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2992_, 0, v_bs_2984_);
return v___x_2992_;
}
else
{
lean_object* v_v_2993_; lean_object* v___x_2994_; lean_object* v_bs_x27_2995_; lean_object* v___x_2996_; 
v_v_2993_ = lean_array_uget(v_bs_2984_, v_i_2983_);
v___x_2994_ = lean_unsigned_to_nat(0u);
v_bs_x27_2995_ = lean_array_uset(v_bs_2984_, v_i_2983_, v___x_2994_);
lean_inc_ref(v_post_2978_);
lean_inc_ref(v_pre_2977_);
v___x_2996_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2977_, v_post_2978_, v_usedLetOnly_2979_, v_skipConstInApp_2980_, v_skipInstances_2981_, v_v_2993_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; size_t v___x_2998_; size_t v___x_2999_; lean_object* v___x_3000_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_a_2997_);
lean_dec_ref_known(v___x_2996_, 1);
v___x_2998_ = ((size_t)1ULL);
v___x_2999_ = lean_usize_add(v_i_2983_, v___x_2998_);
v___x_3000_ = lean_array_uset(v_bs_x27_2995_, v_i_2983_, v_a_2997_);
v_i_2983_ = v___x_2999_;
v_bs_2984_ = v___x_3000_;
goto _start;
}
else
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3009_; 
lean_dec_ref(v_bs_x27_2995_);
lean_dec_ref(v_post_2978_);
lean_dec_ref(v_pre_2977_);
v_a_3002_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3004_ = v___x_2996_;
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_2996_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3007_; 
if (v_isShared_3005_ == 0)
{
v___x_3007_ = v___x_3004_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_a_3002_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_3010_, lean_object* v_post_3011_, uint8_t v_usedLetOnly_3012_, uint8_t v_skipConstInApp_3013_, uint8_t v_skipInstances_3014_, lean_object* v___x_3015_, lean_object* v___y_3016_, lean_object* v_b_3017_, lean_object* v_a_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v___x_3024_; 
v___x_3024_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3010_, v_post_3011_, v_usedLetOnly_3012_, v_skipConstInApp_3013_, v_skipInstances_3014_, v___x_3015_, v___y_3016_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3034_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3027_ = v___x_3024_;
v_isShared_3028_ = v_isSharedCheck_3034_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_3024_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3034_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3032_; 
v___x_3029_ = lean_array_fset(v_b_3017_, v_a_3018_, v_a_3025_);
v___x_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 0, v___x_3030_);
v___x_3032_ = v___x_3027_;
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
else
{
lean_object* v_a_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3042_; 
lean_dec_ref(v_b_3017_);
v_a_3035_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3037_ = v___x_3024_;
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_a_3035_);
lean_dec(v___x_3024_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3040_; 
if (v_isShared_3038_ == 0)
{
v___x_3040_ = v___x_3037_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3035_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_3043_, lean_object* v_post_3044_, lean_object* v_usedLetOnly_3045_, lean_object* v_skipConstInApp_3046_, lean_object* v_skipInstances_3047_, lean_object* v___x_3048_, lean_object* v___y_3049_, lean_object* v_b_3050_, lean_object* v_a_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_){
_start:
{
uint8_t v_usedLetOnly_boxed_3057_; uint8_t v_skipConstInApp_boxed_3058_; uint8_t v_skipInstances_boxed_3059_; lean_object* v_res_3060_; 
v_usedLetOnly_boxed_3057_ = lean_unbox(v_usedLetOnly_3045_);
v_skipConstInApp_boxed_3058_ = lean_unbox(v_skipConstInApp_3046_);
v_skipInstances_boxed_3059_ = lean_unbox(v_skipInstances_3047_);
v_res_3060_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_3043_, v_post_3044_, v_usedLetOnly_boxed_3057_, v_skipConstInApp_boxed_3058_, v_skipInstances_boxed_3059_, v___x_3048_, v___y_3049_, v_b_3050_, v_a_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v___y_3053_);
lean_dec_ref(v___y_3052_);
lean_dec(v_a_3051_);
lean_dec(v___y_3049_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_3061_, lean_object* v___x_3062_, lean_object* v_pre_3063_, lean_object* v_post_3064_, uint8_t v_usedLetOnly_3065_, uint8_t v_skipConstInApp_3066_, uint8_t v_skipInstances_3067_, lean_object* v_a_3068_, lean_object* v_b_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v___y_3077_; uint8_t v___x_3100_; 
v___x_3100_ = lean_nat_dec_lt(v_a_3068_, v_upperBound_3061_);
if (v___x_3100_ == 0)
{
lean_object* v___x_3101_; 
lean_dec(v_a_3068_);
lean_dec_ref(v_post_3064_);
lean_dec_ref(v_pre_3063_);
v___x_3101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3101_, 0, v_b_3069_);
return v___x_3101_;
}
else
{
lean_object* v___x_3102_; lean_object* v___x_3103_; uint8_t v___x_3104_; 
v___x_3102_ = lean_array_fget_borrowed(v_b_3069_, v_a_3068_);
v___x_3103_ = lean_array_get_size(v___x_3062_);
v___x_3104_ = lean_nat_dec_lt(v_a_3068_, v___x_3103_);
if (v___x_3104_ == 0)
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___f_3108_; 
lean_inc(v___x_3102_);
v___x_3105_ = lean_box(v_usedLetOnly_3065_);
v___x_3106_ = lean_box(v_skipConstInApp_3066_);
v___x_3107_ = lean_box(v_skipInstances_3067_);
lean_inc(v_a_3068_);
lean_inc(v___y_3070_);
lean_inc_ref(v_post_3064_);
lean_inc_ref(v_pre_3063_);
v___f_3108_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3108_, 0, v_pre_3063_);
lean_closure_set(v___f_3108_, 1, v_post_3064_);
lean_closure_set(v___f_3108_, 2, v___x_3105_);
lean_closure_set(v___f_3108_, 3, v___x_3106_);
lean_closure_set(v___f_3108_, 4, v___x_3107_);
lean_closure_set(v___f_3108_, 5, v___x_3102_);
lean_closure_set(v___f_3108_, 6, v___y_3070_);
lean_closure_set(v___f_3108_, 7, v_b_3069_);
lean_closure_set(v___f_3108_, 8, v_a_3068_);
v___y_3077_ = v___f_3108_;
goto v___jp_3076_;
}
else
{
lean_object* v___x_3109_; uint8_t v_isInstance_3110_; 
v___x_3109_ = lean_array_fget_borrowed(v___x_3062_, v_a_3068_);
v_isInstance_3110_ = lean_ctor_get_uint8(v___x_3109_, sizeof(void*)*1 + 4);
if (v_isInstance_3110_ == 0)
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___f_3114_; 
lean_inc(v___x_3102_);
v___x_3111_ = lean_box(v_usedLetOnly_3065_);
v___x_3112_ = lean_box(v_skipConstInApp_3066_);
v___x_3113_ = lean_box(v_skipInstances_3067_);
lean_inc(v_a_3068_);
lean_inc(v___y_3070_);
lean_inc_ref(v_post_3064_);
lean_inc_ref(v_pre_3063_);
v___f_3114_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3114_, 0, v_pre_3063_);
lean_closure_set(v___f_3114_, 1, v_post_3064_);
lean_closure_set(v___f_3114_, 2, v___x_3111_);
lean_closure_set(v___f_3114_, 3, v___x_3112_);
lean_closure_set(v___f_3114_, 4, v___x_3113_);
lean_closure_set(v___f_3114_, 5, v___x_3102_);
lean_closure_set(v___f_3114_, 6, v___y_3070_);
lean_closure_set(v___f_3114_, 7, v_b_3069_);
lean_closure_set(v___f_3114_, 8, v_a_3068_);
v___y_3077_ = v___f_3114_;
goto v___jp_3076_;
}
else
{
lean_object* v___x_3115_; lean_object* v___f_3116_; 
v___x_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3115_, 0, v_b_3069_);
v___f_3116_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3116_, 0, v___x_3115_);
v___y_3077_ = v___f_3116_;
goto v___jp_3076_;
}
}
}
v___jp_3076_:
{
lean_object* v___x_3078_; 
lean_inc(v___y_3074_);
lean_inc_ref(v___y_3073_);
lean_inc(v___y_3072_);
lean_inc_ref(v___y_3071_);
v___x_3078_ = lean_apply_5(v___y_3077_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, lean_box(0));
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3091_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3081_ = v___x_3078_;
v_isShared_3082_ = v_isSharedCheck_3091_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3078_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3091_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
if (lean_obj_tag(v_a_3079_) == 0)
{
lean_object* v_a_3083_; lean_object* v___x_3085_; 
lean_dec(v_a_3068_);
lean_dec_ref(v_post_3064_);
lean_dec_ref(v_pre_3063_);
v_a_3083_ = lean_ctor_get(v_a_3079_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v_a_3079_, 1);
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 0, v_a_3083_);
v___x_3085_ = v___x_3081_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_a_3083_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
lean_del_object(v___x_3081_);
v_a_3087_ = lean_ctor_get(v_a_3079_, 0);
lean_inc(v_a_3087_);
lean_dec_ref_known(v_a_3079_, 1);
v___x_3088_ = lean_unsigned_to_nat(1u);
v___x_3089_ = lean_nat_add(v_a_3068_, v___x_3088_);
lean_dec(v_a_3068_);
v_a_3068_ = v___x_3089_;
v_b_3069_ = v_a_3087_;
goto _start;
}
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec(v_a_3068_);
lean_dec_ref(v_post_3064_);
lean_dec_ref(v_pre_3063_);
v_a_3092_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3078_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3078_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t v_skipInstances_3117_, lean_object* v_pre_3118_, lean_object* v_post_3119_, uint8_t v_usedLetOnly_3120_, uint8_t v_skipConstInApp_3121_, lean_object* v_x_3122_, lean_object* v_x_3123_, lean_object* v_x_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v_f_3132_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3136_; lean_object* v___y_3137_; 
if (lean_obj_tag(v_x_3122_) == 5)
{
lean_object* v_fn_3180_; lean_object* v_arg_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v_fn_3180_ = lean_ctor_get(v_x_3122_, 0);
lean_inc_ref(v_fn_3180_);
v_arg_3181_ = lean_ctor_get(v_x_3122_, 1);
lean_inc_ref(v_arg_3181_);
lean_dec_ref_known(v_x_3122_, 2);
v___x_3182_ = lean_array_set(v_x_3123_, v_x_3124_, v_arg_3181_);
v___x_3183_ = lean_unsigned_to_nat(1u);
v___x_3184_ = lean_nat_sub(v_x_3124_, v___x_3183_);
lean_dec(v_x_3124_);
v_x_3122_ = v_fn_3180_;
v_x_3123_ = v___x_3182_;
v_x_3124_ = v___x_3184_;
goto _start;
}
else
{
lean_dec(v_x_3124_);
if (v_skipConstInApp_3121_ == 0)
{
goto v___jp_3177_;
}
else
{
uint8_t v___x_3186_; 
v___x_3186_ = l_Lean_Expr_isConst(v_x_3122_);
if (v___x_3186_ == 0)
{
goto v___jp_3177_;
}
else
{
v_f_3132_ = v_x_3122_;
v___y_3133_ = v___y_3125_;
v___y_3134_ = v___y_3126_;
v___y_3135_ = v___y_3127_;
v___y_3136_ = v___y_3128_;
v___y_3137_ = v___y_3129_;
goto v___jp_3131_;
}
}
}
v___jp_3131_:
{
if (v_skipInstances_3117_ == 0)
{
size_t v_sz_3138_; size_t v___x_3139_; lean_object* v___x_3140_; 
v_sz_3138_ = lean_array_size(v_x_3123_);
v___x_3139_ = ((size_t)0ULL);
lean_inc_ref(v_post_3119_);
lean_inc_ref(v_pre_3118_);
v___x_3140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3118_, v_post_3119_, v_usedLetOnly_3120_, v_skipConstInApp_3121_, v_skipInstances_3117_, v_sz_3138_, v___x_3139_, v_x_3123_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3140_, 1);
v___x_3142_ = l_Lean_mkAppN(v_f_3132_, v_a_3141_);
lean_dec(v_a_3141_);
v___x_3143_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3118_, v_post_3119_, v_usedLetOnly_3120_, v_skipConstInApp_3121_, v_skipInstances_3117_, v___x_3142_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
return v___x_3143_;
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec_ref(v_f_3132_);
lean_dec_ref(v_post_3119_);
lean_dec_ref(v_pre_3118_);
v_a_3144_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3140_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3140_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
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
else
{
lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3152_ = lean_array_get_size(v_x_3123_);
lean_inc_ref(v_f_3132_);
v___x_3153_ = l_Lean_Meta_getFunInfoNArgs(v_f_3132_, v___x_3152_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
if (lean_obj_tag(v___x_3153_) == 0)
{
lean_object* v_a_3154_; lean_object* v_paramInfo_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
lean_inc(v_a_3154_);
lean_dec_ref_known(v___x_3153_, 1);
v_paramInfo_3155_ = lean_ctor_get(v_a_3154_, 0);
lean_inc_ref(v_paramInfo_3155_);
lean_dec(v_a_3154_);
v___x_3156_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3119_);
lean_inc_ref(v_pre_3118_);
v___x_3157_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v___x_3152_, v_paramInfo_3155_, v_pre_3118_, v_post_3119_, v_usedLetOnly_3120_, v_skipConstInApp_3121_, v_skipInstances_3117_, v___x_3156_, v_x_3123_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
lean_dec_ref(v_paramInfo_3155_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v_a_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v_a_3158_ = lean_ctor_get(v___x_3157_, 0);
lean_inc(v_a_3158_);
lean_dec_ref_known(v___x_3157_, 1);
v___x_3159_ = l_Lean_mkAppN(v_f_3132_, v_a_3158_);
lean_dec(v_a_3158_);
v___x_3160_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3118_, v_post_3119_, v_usedLetOnly_3120_, v_skipConstInApp_3121_, v_skipInstances_3117_, v___x_3159_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
return v___x_3160_;
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
lean_dec_ref(v_f_3132_);
lean_dec_ref(v_post_3119_);
lean_dec_ref(v_pre_3118_);
v_a_3161_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3157_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3157_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec_ref(v_f_3132_);
lean_dec_ref(v_x_3123_);
lean_dec_ref(v_post_3119_);
lean_dec_ref(v_pre_3118_);
v_a_3169_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3153_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3153_);
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
v___jp_3177_:
{
lean_object* v___x_3178_; 
lean_inc_ref(v_post_3119_);
lean_inc_ref(v_pre_3118_);
v___x_3178_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3118_, v_post_3119_, v_usedLetOnly_3120_, v_skipConstInApp_3121_, v_skipInstances_3117_, v_x_3122_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref_known(v___x_3178_, 1);
v_f_3132_ = v_a_3179_;
v___y_3133_ = v___y_3125_;
v___y_3134_ = v___y_3126_;
v___y_3135_ = v___y_3127_;
v___y_3136_ = v___y_3128_;
v___y_3137_ = v___y_3129_;
goto v___jp_3131_;
}
else
{
lean_dec_ref(v_x_3123_);
lean_dec_ref(v_post_3119_);
lean_dec_ref(v_pre_3118_);
return v___x_3178_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object* v___x_3187_, lean_object* v_pre_3188_, lean_object* v_e_3189_, lean_object* v_post_3190_, uint8_t v_usedLetOnly_3191_, uint8_t v_skipConstInApp_3192_, uint8_t v_skipInstances_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_){
_start:
{
lean_object* v___x_3200_; 
v___x_3200_ = l_Lean_Core_checkSystem(v___x_3187_, v___y_3197_, v___y_3198_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v___x_3201_; 
lean_dec_ref_known(v___x_3200_, 1);
lean_inc_ref(v_pre_3188_);
lean_inc(v___y_3198_);
lean_inc_ref(v___y_3197_);
lean_inc(v___y_3196_);
lean_inc_ref(v___y_3195_);
lean_inc_ref(v_e_3189_);
v___x_3201_ = lean_apply_6(v_pre_3188_, v_e_3189_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, lean_box(0));
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3250_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3204_ = v___x_3201_;
v_isShared_3205_ = v_isSharedCheck_3250_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3201_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3250_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___y_3207_; 
switch(lean_obj_tag(v_a_3202_))
{
case 0:
{
lean_object* v_e_3242_; lean_object* v___x_3244_; 
lean_dec_ref(v_post_3190_);
lean_dec_ref(v_e_3189_);
lean_dec_ref(v_pre_3188_);
v_e_3242_ = lean_ctor_get(v_a_3202_, 0);
lean_inc_ref(v_e_3242_);
lean_dec_ref_known(v_a_3202_, 1);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v_e_3242_);
v___x_3244_ = v___x_3204_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_e_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
case 1:
{
lean_object* v_e_3246_; lean_object* v___x_3247_; 
lean_del_object(v___x_3204_);
lean_dec_ref(v_e_3189_);
v_e_3246_ = lean_ctor_get(v_a_3202_, 0);
lean_inc_ref(v_e_3246_);
lean_dec_ref_known(v_a_3202_, 1);
v___x_3247_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v_e_3246_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3247_;
}
default: 
{
lean_object* v_e_x3f_3248_; 
lean_del_object(v___x_3204_);
v_e_x3f_3248_ = lean_ctor_get(v_a_3202_, 0);
lean_inc(v_e_x3f_3248_);
lean_dec_ref_known(v_a_3202_, 1);
if (lean_obj_tag(v_e_x3f_3248_) == 0)
{
v___y_3207_ = v_e_3189_;
goto v___jp_3206_;
}
else
{
lean_object* v_val_3249_; 
lean_dec_ref(v_e_3189_);
v_val_3249_ = lean_ctor_get(v_e_x3f_3248_, 0);
lean_inc(v_val_3249_);
lean_dec_ref_known(v_e_x3f_3248_, 1);
v___y_3207_ = v_val_3249_;
goto v___jp_3206_;
}
}
}
v___jp_3206_:
{
switch(lean_obj_tag(v___y_3207_))
{
case 7:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3208_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3209_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___x_3208_, v___y_3207_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3209_;
}
case 6:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3210_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3211_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___x_3210_, v___y_3207_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3211_;
}
case 8:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3212_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3213_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___x_3212_, v___y_3207_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3213_;
}
case 5:
{
lean_object* v_dummy_3214_; lean_object* v_nargs_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v_dummy_3214_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_3215_ = l_Lean_Expr_getAppNumArgs(v___y_3207_);
lean_inc(v_nargs_3215_);
v___x_3216_ = lean_mk_array(v_nargs_3215_, v_dummy_3214_);
v___x_3217_ = lean_unsigned_to_nat(1u);
v___x_3218_ = lean_nat_sub(v_nargs_3215_, v___x_3217_);
lean_dec(v_nargs_3215_);
v___x_3219_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_3193_, v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v___y_3207_, v___x_3216_, v___x_3218_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3219_;
}
case 10:
{
lean_object* v_data_3220_; lean_object* v_expr_3221_; lean_object* v___x_3222_; 
v_data_3220_ = lean_ctor_get(v___y_3207_, 0);
v_expr_3221_ = lean_ctor_get(v___y_3207_, 1);
lean_inc_ref(v_expr_3221_);
lean_inc_ref(v_post_3190_);
lean_inc_ref(v_pre_3188_);
v___x_3222_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v_expr_3221_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3223_; size_t v___x_3224_; size_t v___x_3225_; uint8_t v___x_3226_; 
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3223_);
lean_dec_ref_known(v___x_3222_, 1);
v___x_3224_ = lean_ptr_addr(v_expr_3221_);
v___x_3225_ = lean_ptr_addr(v_a_3223_);
v___x_3226_ = lean_usize_dec_eq(v___x_3224_, v___x_3225_);
if (v___x_3226_ == 0)
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
lean_inc(v_data_3220_);
lean_dec_ref_known(v___y_3207_, 2);
v___x_3227_ = l_Lean_Expr_mdata___override(v_data_3220_, v_a_3223_);
v___x_3228_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___x_3227_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3228_;
}
else
{
lean_object* v___x_3229_; 
lean_dec(v_a_3223_);
v___x_3229_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___y_3207_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3229_;
}
}
else
{
lean_dec_ref_known(v___y_3207_, 2);
lean_dec_ref(v_post_3190_);
lean_dec_ref(v_pre_3188_);
return v___x_3222_;
}
}
case 11:
{
lean_object* v_typeName_3230_; lean_object* v_idx_3231_; lean_object* v_struct_3232_; lean_object* v___x_3233_; 
v_typeName_3230_ = lean_ctor_get(v___y_3207_, 0);
v_idx_3231_ = lean_ctor_get(v___y_3207_, 1);
v_struct_3232_ = lean_ctor_get(v___y_3207_, 2);
lean_inc_ref(v_struct_3232_);
lean_inc_ref(v_post_3190_);
lean_inc_ref(v_pre_3188_);
v___x_3233_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v_struct_3232_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v_a_3234_; size_t v___x_3235_; size_t v___x_3236_; uint8_t v___x_3237_; 
v_a_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3233_, 1);
v___x_3235_ = lean_ptr_addr(v_struct_3232_);
v___x_3236_ = lean_ptr_addr(v_a_3234_);
v___x_3237_ = lean_usize_dec_eq(v___x_3235_, v___x_3236_);
if (v___x_3237_ == 0)
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
lean_inc(v_idx_3231_);
lean_inc(v_typeName_3230_);
lean_dec_ref_known(v___y_3207_, 3);
v___x_3238_ = l_Lean_Expr_proj___override(v_typeName_3230_, v_idx_3231_, v_a_3234_);
v___x_3239_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___x_3238_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3239_;
}
else
{
lean_object* v___x_3240_; 
lean_dec(v_a_3234_);
v___x_3240_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___y_3207_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3240_;
}
}
else
{
lean_dec_ref_known(v___y_3207_, 3);
lean_dec_ref(v_post_3190_);
lean_dec_ref(v_pre_3188_);
return v___x_3233_;
}
}
default: 
{
lean_object* v___x_3241_; 
v___x_3241_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3188_, v_post_3190_, v_usedLetOnly_3191_, v_skipConstInApp_3192_, v_skipInstances_3193_, v___y_3207_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3241_;
}
}
}
}
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
lean_dec_ref(v_post_3190_);
lean_dec_ref(v_e_3189_);
lean_dec_ref(v_pre_3188_);
v_a_3251_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3201_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3201_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
else
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
lean_dec_ref(v_post_3190_);
lean_dec_ref(v_e_3189_);
lean_dec_ref(v_pre_3188_);
v_a_3259_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3200_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3200_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_3267_, lean_object* v_pre_3268_, lean_object* v_e_3269_, lean_object* v_post_3270_, lean_object* v_usedLetOnly_3271_, lean_object* v_skipConstInApp_3272_, lean_object* v_skipInstances_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_){
_start:
{
uint8_t v_usedLetOnly_boxed_3280_; uint8_t v_skipConstInApp_boxed_3281_; uint8_t v_skipInstances_boxed_3282_; lean_object* v_res_3283_; 
v_usedLetOnly_boxed_3280_ = lean_unbox(v_usedLetOnly_3271_);
v_skipConstInApp_boxed_3281_ = lean_unbox(v_skipConstInApp_3272_);
v_skipInstances_boxed_3282_ = lean_unbox(v_skipInstances_3273_);
v_res_3283_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(v___x_3267_, v_pre_3268_, v_e_3269_, v_post_3270_, v_usedLetOnly_boxed_3280_, v_skipConstInApp_boxed_3281_, v_skipInstances_boxed_3282_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
lean_dec(v___y_3274_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object* v_pre_3284_, lean_object* v_post_3285_, uint8_t v_usedLetOnly_3286_, uint8_t v_skipConstInApp_3287_, uint8_t v_skipInstances_3288_, lean_object* v_e_3289_, lean_object* v_a_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
lean_inc(v_a_3290_);
v___x_3296_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3296_, 0, lean_box(0));
lean_closure_set(v___x_3296_, 1, lean_box(0));
lean_closure_set(v___x_3296_, 2, v_a_3290_);
v___x_3297_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_3296_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3332_; 
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3300_ = v___x_3297_;
v_isShared_3301_ = v_isSharedCheck_3332_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3297_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3332_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3302_; 
v___x_3302_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_a_3298_, v_e_3289_);
lean_dec(v_a_3298_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___f_3307_; lean_object* v___x_3308_; 
lean_del_object(v___x_3300_);
v___x_3303_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0));
v___x_3304_ = lean_box(v_usedLetOnly_3286_);
v___x_3305_ = lean_box(v_skipConstInApp_3287_);
v___x_3306_ = lean_box(v_skipInstances_3288_);
lean_inc_ref(v_e_3289_);
v___f_3307_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_3307_, 0, v___x_3303_);
lean_closure_set(v___f_3307_, 1, v_pre_3284_);
lean_closure_set(v___f_3307_, 2, v_e_3289_);
lean_closure_set(v___f_3307_, 3, v_post_3285_);
lean_closure_set(v___f_3307_, 4, v___x_3304_);
lean_closure_set(v___f_3307_, 5, v___x_3305_);
lean_closure_set(v___f_3307_, 6, v___x_3306_);
v___x_3308_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v___f_3307_, v_a_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; lean_object* v___f_3310_; lean_object* v___x_3311_; 
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc_n(v_a_3309_, 2);
lean_dec_ref_known(v___x_3308_, 1);
lean_inc(v_a_3290_);
v___f_3310_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3310_, 0, v_a_3290_);
lean_closure_set(v___f_3310_, 1, v_e_3289_);
lean_closure_set(v___f_3310_, 2, v_a_3309_);
v___x_3311_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_3310_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3318_ == 0)
{
lean_object* v_unused_3319_; 
v_unused_3319_ = lean_ctor_get(v___x_3311_, 0);
lean_dec(v_unused_3319_);
v___x_3313_ = v___x_3311_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_dec(v___x_3311_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
lean_ctor_set(v___x_3313_, 0, v_a_3309_);
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3309_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
else
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3327_; 
lean_dec(v_a_3309_);
v_a_3320_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3322_ = v___x_3311_;
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v___x_3311_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v___x_3325_; 
if (v_isShared_3323_ == 0)
{
v___x_3325_ = v___x_3322_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3320_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
else
{
lean_dec_ref(v_e_3289_);
return v___x_3308_;
}
}
else
{
lean_object* v_val_3328_; lean_object* v___x_3330_; 
lean_dec_ref(v_e_3289_);
lean_dec_ref(v_post_3285_);
lean_dec_ref(v_pre_3284_);
v_val_3328_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_val_3328_);
lean_dec_ref_known(v___x_3302_, 1);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 0, v_val_3328_);
v___x_3330_ = v___x_3300_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_val_3328_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3340_; 
lean_dec_ref(v_e_3289_);
lean_dec_ref(v_post_3285_);
lean_dec_ref(v_pre_3284_);
v_a_3333_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3335_ = v___x_3297_;
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3297_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3338_; 
if (v_isShared_3336_ == 0)
{
v___x_3338_ = v___x_3335_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3333_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3341_, lean_object* v_post_3342_, uint8_t v_usedLetOnly_3343_, uint8_t v_skipConstInApp_3344_, uint8_t v_skipInstances_3345_, lean_object* v_fvars_3346_, lean_object* v_e_3347_, lean_object* v_a_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_){
_start:
{
if (lean_obj_tag(v_e_3347_) == 7)
{
lean_object* v_binderName_3354_; lean_object* v_binderType_3355_; lean_object* v_body_3356_; uint8_t v_binderInfo_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___f_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v_binderName_3354_ = lean_ctor_get(v_e_3347_, 0);
lean_inc(v_binderName_3354_);
v_binderType_3355_ = lean_ctor_get(v_e_3347_, 1);
lean_inc_ref(v_binderType_3355_);
v_body_3356_ = lean_ctor_get(v_e_3347_, 2);
lean_inc_ref(v_body_3356_);
v_binderInfo_3357_ = lean_ctor_get_uint8(v_e_3347_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3347_, 3);
v___x_3358_ = lean_box(v_usedLetOnly_3343_);
v___x_3359_ = lean_box(v_skipConstInApp_3344_);
v___x_3360_ = lean_box(v_skipInstances_3345_);
lean_inc_ref(v_post_3342_);
lean_inc_ref(v_pre_3341_);
lean_inc_ref(v_fvars_3346_);
v___f_3361_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3361_, 0, v_fvars_3346_);
lean_closure_set(v___f_3361_, 1, v_pre_3341_);
lean_closure_set(v___f_3361_, 2, v_post_3342_);
lean_closure_set(v___f_3361_, 3, v___x_3358_);
lean_closure_set(v___f_3361_, 4, v___x_3359_);
lean_closure_set(v___f_3361_, 5, v___x_3360_);
lean_closure_set(v___f_3361_, 6, v_body_3356_);
v___x_3362_ = lean_expr_instantiate_rev(v_binderType_3355_, v_fvars_3346_);
lean_dec_ref(v_fvars_3346_);
lean_dec_ref(v_binderType_3355_);
v___x_3363_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3341_, v_post_3342_, v_usedLetOnly_3343_, v_skipConstInApp_3344_, v_skipInstances_3345_, v___x_3362_, v_a_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; uint8_t v___x_3365_; lean_object* v___x_3366_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3364_);
lean_dec_ref_known(v___x_3363_, 1);
v___x_3365_ = 0;
v___x_3366_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_3354_, v_binderInfo_3357_, v_a_3364_, v___f_3361_, v___x_3365_, v_a_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
return v___x_3366_;
}
else
{
lean_dec_ref(v___f_3361_);
lean_dec(v_binderName_3354_);
return v___x_3363_;
}
}
else
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3367_ = lean_expr_instantiate_rev(v_e_3347_, v_fvars_3346_);
lean_dec_ref(v_e_3347_);
lean_inc_ref(v_post_3342_);
lean_inc_ref(v_pre_3341_);
v___x_3368_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3341_, v_post_3342_, v_usedLetOnly_3343_, v_skipConstInApp_3344_, v_skipInstances_3345_, v___x_3367_, v_a_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_a_3369_; uint8_t v___x_3370_; uint8_t v___x_3371_; uint8_t v___x_3372_; lean_object* v___x_3373_; 
v_a_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3369_);
lean_dec_ref_known(v___x_3368_, 1);
v___x_3370_ = 0;
v___x_3371_ = 1;
v___x_3372_ = 1;
v___x_3373_ = l_Lean_Meta_mkForallFVars(v_fvars_3346_, v_a_3369_, v___x_3370_, v_usedLetOnly_3343_, v___x_3371_, v___x_3372_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
lean_dec_ref(v_fvars_3346_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; lean_object* v___x_3375_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3373_, 1);
v___x_3375_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3341_, v_post_3342_, v_usedLetOnly_3343_, v_skipConstInApp_3344_, v_skipInstances_3345_, v_a_3374_, v_a_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
return v___x_3375_;
}
else
{
lean_dec_ref(v_post_3342_);
lean_dec_ref(v_pre_3341_);
return v___x_3373_;
}
}
else
{
lean_dec_ref(v_fvars_3346_);
lean_dec_ref(v_post_3342_);
lean_dec_ref(v_pre_3341_);
return v___x_3368_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3376_, lean_object* v_pre_3377_, lean_object* v_post_3378_, uint8_t v_usedLetOnly_3379_, uint8_t v_skipConstInApp_3380_, uint8_t v_skipInstances_3381_, lean_object* v_body_3382_, lean_object* v_x_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3390_ = lean_array_push(v_fvars_3376_, v_x_3383_);
v___x_3391_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3377_, v_post_3378_, v_usedLetOnly_3379_, v_skipConstInApp_3380_, v_skipInstances_3381_, v___x_3390_, v_body_3382_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_, v___y_3388_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_3392_, lean_object* v_post_3393_, lean_object* v_usedLetOnly_3394_, lean_object* v_skipConstInApp_3395_, lean_object* v_skipInstances_3396_, lean_object* v_e_3397_, lean_object* v_a_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
uint8_t v_usedLetOnly_boxed_3404_; uint8_t v_skipConstInApp_boxed_3405_; uint8_t v_skipInstances_boxed_3406_; lean_object* v_res_3407_; 
v_usedLetOnly_boxed_3404_ = lean_unbox(v_usedLetOnly_3394_);
v_skipConstInApp_boxed_3405_ = lean_unbox(v_skipConstInApp_3395_);
v_skipInstances_boxed_3406_ = lean_unbox(v_skipInstances_3396_);
v_res_3407_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3392_, v_post_3393_, v_usedLetOnly_boxed_3404_, v_skipConstInApp_boxed_3405_, v_skipInstances_boxed_3406_, v_e_3397_, v_a_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v___y_3400_);
lean_dec_ref(v___y_3399_);
lean_dec(v_a_3398_);
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_3408_, lean_object* v_post_3409_, lean_object* v_usedLetOnly_3410_, lean_object* v_skipConstInApp_3411_, lean_object* v_skipInstances_3412_, lean_object* v_sz_3413_, lean_object* v_i_3414_, lean_object* v_bs_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_){
_start:
{
uint8_t v_usedLetOnly_boxed_3422_; uint8_t v_skipConstInApp_boxed_3423_; uint8_t v_skipInstances_boxed_3424_; size_t v_sz_boxed_3425_; size_t v_i_boxed_3426_; lean_object* v_res_3427_; 
v_usedLetOnly_boxed_3422_ = lean_unbox(v_usedLetOnly_3410_);
v_skipConstInApp_boxed_3423_ = lean_unbox(v_skipConstInApp_3411_);
v_skipInstances_boxed_3424_ = lean_unbox(v_skipInstances_3412_);
v_sz_boxed_3425_ = lean_unbox_usize(v_sz_3413_);
lean_dec(v_sz_3413_);
v_i_boxed_3426_ = lean_unbox_usize(v_i_3414_);
lean_dec(v_i_3414_);
v_res_3427_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3408_, v_post_3409_, v_usedLetOnly_boxed_3422_, v_skipConstInApp_boxed_3423_, v_skipInstances_boxed_3424_, v_sz_boxed_3425_, v_i_boxed_3426_, v_bs_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_);
lean_dec(v___y_3420_);
lean_dec_ref(v___y_3419_);
lean_dec(v___y_3418_);
lean_dec_ref(v___y_3417_);
lean_dec(v___y_3416_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object* v_pre_3428_, lean_object* v_post_3429_, lean_object* v_usedLetOnly_3430_, lean_object* v_skipConstInApp_3431_, lean_object* v_skipInstances_3432_, lean_object* v_e_3433_, lean_object* v_a_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
uint8_t v_usedLetOnly_boxed_3440_; uint8_t v_skipConstInApp_boxed_3441_; uint8_t v_skipInstances_boxed_3442_; lean_object* v_res_3443_; 
v_usedLetOnly_boxed_3440_ = lean_unbox(v_usedLetOnly_3430_);
v_skipConstInApp_boxed_3441_ = lean_unbox(v_skipConstInApp_3431_);
v_skipInstances_boxed_3442_ = lean_unbox(v_skipInstances_3432_);
v_res_3443_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3428_, v_post_3429_, v_usedLetOnly_boxed_3440_, v_skipConstInApp_boxed_3441_, v_skipInstances_boxed_3442_, v_e_3433_, v_a_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v_a_3434_);
return v_res_3443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_3444_, lean_object* v_post_3445_, lean_object* v_usedLetOnly_3446_, lean_object* v_skipConstInApp_3447_, lean_object* v_skipInstances_3448_, lean_object* v_fvars_3449_, lean_object* v_e_3450_, lean_object* v_a_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_){
_start:
{
uint8_t v_usedLetOnly_boxed_3457_; uint8_t v_skipConstInApp_boxed_3458_; uint8_t v_skipInstances_boxed_3459_; lean_object* v_res_3460_; 
v_usedLetOnly_boxed_3457_ = lean_unbox(v_usedLetOnly_3446_);
v_skipConstInApp_boxed_3458_ = lean_unbox(v_skipConstInApp_3447_);
v_skipInstances_boxed_3459_ = lean_unbox(v_skipInstances_3448_);
v_res_3460_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3444_, v_post_3445_, v_usedLetOnly_boxed_3457_, v_skipConstInApp_boxed_3458_, v_skipInstances_boxed_3459_, v_fvars_3449_, v_e_3450_, v_a_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3454_);
lean_dec(v___y_3453_);
lean_dec_ref(v___y_3452_);
lean_dec(v_a_3451_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_3461_, lean_object* v_post_3462_, lean_object* v_usedLetOnly_3463_, lean_object* v_skipConstInApp_3464_, lean_object* v_skipInstances_3465_, lean_object* v_fvars_3466_, lean_object* v_e_3467_, lean_object* v_a_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
uint8_t v_usedLetOnly_boxed_3474_; uint8_t v_skipConstInApp_boxed_3475_; uint8_t v_skipInstances_boxed_3476_; lean_object* v_res_3477_; 
v_usedLetOnly_boxed_3474_ = lean_unbox(v_usedLetOnly_3463_);
v_skipConstInApp_boxed_3475_ = lean_unbox(v_skipConstInApp_3464_);
v_skipInstances_boxed_3476_ = lean_unbox(v_skipInstances_3465_);
v_res_3477_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3461_, v_post_3462_, v_usedLetOnly_boxed_3474_, v_skipConstInApp_boxed_3475_, v_skipInstances_boxed_3476_, v_fvars_3466_, v_e_3467_, v_a_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec(v_a_3468_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_pre_3478_, lean_object* v_post_3479_, lean_object* v_usedLetOnly_3480_, lean_object* v_skipConstInApp_3481_, lean_object* v_skipInstances_3482_, lean_object* v_fvars_3483_, lean_object* v_e_3484_, lean_object* v_a_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_){
_start:
{
uint8_t v_usedLetOnly_boxed_3491_; uint8_t v_skipConstInApp_boxed_3492_; uint8_t v_skipInstances_boxed_3493_; lean_object* v_res_3494_; 
v_usedLetOnly_boxed_3491_ = lean_unbox(v_usedLetOnly_3480_);
v_skipConstInApp_boxed_3492_ = lean_unbox(v_skipConstInApp_3481_);
v_skipInstances_boxed_3493_ = lean_unbox(v_skipInstances_3482_);
v_res_3494_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3478_, v_post_3479_, v_usedLetOnly_boxed_3491_, v_skipConstInApp_boxed_3492_, v_skipInstances_boxed_3493_, v_fvars_3483_, v_e_3484_, v_a_3485_, v___y_3486_, v___y_3487_, v___y_3488_, v___y_3489_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
lean_dec(v___y_3487_);
lean_dec_ref(v___y_3486_);
lean_dec(v_a_3485_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_3495_, lean_object* v___x_3496_, lean_object* v_pre_3497_, lean_object* v_post_3498_, lean_object* v_usedLetOnly_3499_, lean_object* v_skipConstInApp_3500_, lean_object* v_skipInstances_3501_, lean_object* v_a_3502_, lean_object* v_b_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_){
_start:
{
uint8_t v_usedLetOnly_boxed_3510_; uint8_t v_skipConstInApp_boxed_3511_; uint8_t v_skipInstances_boxed_3512_; lean_object* v_res_3513_; 
v_usedLetOnly_boxed_3510_ = lean_unbox(v_usedLetOnly_3499_);
v_skipConstInApp_boxed_3511_ = lean_unbox(v_skipConstInApp_3500_);
v_skipInstances_boxed_3512_ = lean_unbox(v_skipInstances_3501_);
v_res_3513_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3495_, v___x_3496_, v_pre_3497_, v_post_3498_, v_usedLetOnly_boxed_3510_, v_skipConstInApp_boxed_3511_, v_skipInstances_boxed_3512_, v_a_3502_, v_b_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v___y_3506_);
lean_dec_ref(v___y_3505_);
lean_dec(v___y_3504_);
lean_dec_ref(v___x_3496_);
lean_dec(v_upperBound_3495_);
return v_res_3513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_skipInstances_3514_, lean_object* v_pre_3515_, lean_object* v_post_3516_, lean_object* v_usedLetOnly_3517_, lean_object* v_skipConstInApp_3518_, lean_object* v_x_3519_, lean_object* v_x_3520_, lean_object* v_x_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_){
_start:
{
uint8_t v_skipInstances_boxed_3528_; uint8_t v_usedLetOnly_boxed_3529_; uint8_t v_skipConstInApp_boxed_3530_; lean_object* v_res_3531_; 
v_skipInstances_boxed_3528_ = lean_unbox(v_skipInstances_3514_);
v_usedLetOnly_boxed_3529_ = lean_unbox(v_usedLetOnly_3517_);
v_skipConstInApp_boxed_3530_ = lean_unbox(v_skipConstInApp_3518_);
v_res_3531_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_boxed_3528_, v_pre_3515_, v_post_3516_, v_usedLetOnly_boxed_3529_, v_skipConstInApp_boxed_3530_, v_x_3519_, v_x_3520_, v_x_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec(v___y_3522_);
return v_res_3531_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3532_ = lean_box(0);
v___x_3533_ = lean_unsigned_to_nat(16u);
v___x_3534_ = lean_mk_array(v___x_3533_, v___x_3532_);
return v___x_3534_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3535_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0);
v___x_3536_ = lean_unsigned_to_nat(0u);
v___x_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3536_);
lean_ctor_set(v___x_3537_, 1, v___x_3535_);
return v___x_3537_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3538_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1);
v___x_3539_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3539_, 0, lean_box(0));
lean_closure_set(v___x_3539_, 1, lean_box(0));
lean_closure_set(v___x_3539_, 2, v___x_3538_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object* v_input_3540_, lean_object* v_pre_3541_, lean_object* v_post_3542_, uint8_t v_usedLetOnly_3543_, uint8_t v_skipConstInApp_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
uint8_t v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v_a_3553_; lean_object* v___x_3554_; 
v___x_3550_ = 0;
v___x_3551_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2);
v___x_3552_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3551_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_);
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_a_3553_);
lean_dec_ref(v___x_3552_);
v___x_3554_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3541_, v_post_3542_, v_usedLetOnly_3543_, v_skipConstInApp_3544_, v___x_3550_, v_input_3540_, v_a_3553_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3564_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3554_, 1);
v___x_3556_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3556_, 0, lean_box(0));
lean_closure_set(v___x_3556_, 1, lean_box(0));
lean_closure_set(v___x_3556_, 2, v_a_3553_);
v___x_3557_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3556_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3564_ == 0)
{
lean_object* v_unused_3565_; 
v_unused_3565_ = lean_ctor_get(v___x_3557_, 0);
lean_dec(v_unused_3565_);
v___x_3559_ = v___x_3557_;
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
else
{
lean_dec(v___x_3557_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v_a_3555_);
v___x_3562_ = v___x_3559_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v_a_3555_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
else
{
lean_dec(v_a_3553_);
return v___x_3554_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object* v_input_3566_, lean_object* v_pre_3567_, lean_object* v_post_3568_, lean_object* v_usedLetOnly_3569_, lean_object* v_skipConstInApp_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_){
_start:
{
uint8_t v_usedLetOnly_boxed_3576_; uint8_t v_skipConstInApp_boxed_3577_; lean_object* v_res_3578_; 
v_usedLetOnly_boxed_3576_ = lean_unbox(v_usedLetOnly_3569_);
v_skipConstInApp_boxed_3577_ = lean_unbox(v_skipConstInApp_3570_);
v_res_3578_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_input_3566_, v_pre_3567_, v_post_3568_, v_usedLetOnly_boxed_3576_, v_skipConstInApp_boxed_3577_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_);
lean_dec(v___y_3574_);
lean_dec_ref(v___y_3573_);
lean_dec(v___y_3572_);
lean_dec_ref(v___y_3571_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object* v_e_3580_, lean_object* v_p_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_, lean_object* v_a_3584_, lean_object* v_a_3585_){
_start:
{
lean_object* v___f_3587_; lean_object* v___f_3588_; lean_object* v___x_3589_; lean_object* v_a_3590_; uint8_t v___x_3591_; lean_object* v___x_3592_; 
v___f_3587_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___closed__0));
v___f_3588_ = lean_alloc_closure((void*)(l_Lean_Meta_etaStructReduce___lam__1___boxed), 7, 1);
lean_closure_set(v___f_3588_, 0, v_p_3581_);
v___x_3589_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_3580_, v_a_3583_);
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
lean_inc(v_a_3590_);
lean_dec_ref(v___x_3589_);
v___x_3591_ = 0;
v___x_3592_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_a_3590_, v___f_3587_, v___f_3588_, v___x_3591_, v___x_3591_, v_a_3582_, v_a_3583_, v_a_3584_, v_a_3585_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object* v_e_3593_, lean_object* v_p_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_){
_start:
{
lean_object* v_res_3600_; 
v_res_3600_ = l_Lean_Meta_etaStructReduce(v_e_3593_, v_p_3594_, v_a_3595_, v_a_3596_, v_a_3597_, v_a_3598_);
lean_dec(v_a_3598_);
lean_dec_ref(v_a_3597_);
lean_dec(v_a_3596_);
lean_dec_ref(v_a_3595_);
return v_res_3600_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_3601_, lean_object* v___x_3602_, lean_object* v_pre_3603_, lean_object* v_post_3604_, uint8_t v_usedLetOnly_3605_, uint8_t v_skipConstInApp_3606_, uint8_t v_skipInstances_3607_, lean_object* v___x_3608_, lean_object* v_inst_3609_, lean_object* v_R_3610_, lean_object* v_a_3611_, lean_object* v_b_3612_, lean_object* v_c_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v___x_3620_; 
v___x_3620_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3601_, v___x_3602_, v_pre_3603_, v_post_3604_, v_usedLetOnly_3605_, v_skipConstInApp_3606_, v_skipInstances_3607_, v_a_3611_, v_b_3612_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
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
v_res_3643_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(v_upperBound_3621_, v___x_3622_, v_pre_3623_, v_post_3624_, v_usedLetOnly_boxed_3640_, v_skipConstInApp_boxed_3641_, v_skipInstances_boxed_3642_, v___x_3628_, v_inst_3629_, v_R_3630_, v_a_3631_, v_b_3632_, v_c_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3644_, lean_object* v_m_3645_, lean_object* v_a_3646_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_3645_, v_a_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3648_, lean_object* v_m_3649_, lean_object* v_a_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(v_00_u03b2_3648_, v_m_3649_, v_a_3650_);
lean_dec_ref(v_a_3650_);
lean_dec_ref(v_m_3649_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object* v_00_u03b1_3652_, lean_object* v_name_3653_, uint8_t v_bi_3654_, lean_object* v_type_3655_, lean_object* v_k_3656_, uint8_t v_kind_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v___x_3664_; 
v___x_3664_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_3653_, v_bi_3654_, v_type_3655_, v_k_3656_, v_kind_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_, v___y_3662_);
return v___x_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3665_, lean_object* v_name_3666_, lean_object* v_bi_3667_, lean_object* v_type_3668_, lean_object* v_k_3669_, lean_object* v_kind_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
uint8_t v_bi_boxed_3677_; uint8_t v_kind_boxed_3678_; lean_object* v_res_3679_; 
v_bi_boxed_3677_ = lean_unbox(v_bi_3667_);
v_kind_boxed_3678_ = lean_unbox(v_kind_3670_);
v_res_3679_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(v_00_u03b1_3665_, v_name_3666_, v_bi_boxed_3677_, v_type_3668_, v_k_3669_, v_kind_boxed_3678_, v___y_3671_, v___y_3672_, v___y_3673_, v___y_3674_, v___y_3675_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object* v_00_u03b1_3680_, lean_object* v_name_3681_, lean_object* v_type_3682_, lean_object* v_val_3683_, lean_object* v_k_3684_, uint8_t v_nondep_3685_, uint8_t v_kind_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v___x_3693_; 
v___x_3693_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_3681_, v_type_3682_, v_val_3683_, v_k_3684_, v_nondep_3685_, v_kind_3686_, v___y_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object* v_00_u03b1_3694_, lean_object* v_name_3695_, lean_object* v_type_3696_, lean_object* v_val_3697_, lean_object* v_k_3698_, lean_object* v_nondep_3699_, lean_object* v_kind_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
uint8_t v_nondep_boxed_3707_; uint8_t v_kind_boxed_3708_; lean_object* v_res_3709_; 
v_nondep_boxed_3707_ = lean_unbox(v_nondep_3699_);
v_kind_boxed_3708_ = lean_unbox(v_kind_3700_);
v_res_3709_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(v_00_u03b1_3694_, v_name_3695_, v_type_3696_, v_val_3697_, v_k_3698_, v_nondep_boxed_3707_, v_kind_boxed_3708_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec(v___y_3701_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object* v_00_u03b1_3710_, lean_object* v_ref_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_3711_);
return v___x_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object* v_00_u03b1_3718_, lean_object* v_ref_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(v_00_u03b1_3718_, v_ref_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_);
lean_dec(v___y_3723_);
lean_dec_ref(v___y_3722_);
lean_dec(v___y_3721_);
lean_dec_ref(v___y_3720_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object* v_00_u03b1_3726_, lean_object* v_x_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_){
_start:
{
lean_object* v___x_3734_; 
v___x_3734_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object* v_00_u03b1_3735_, lean_object* v_x_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(v_00_u03b1_3735_, v_x_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
lean_dec(v___y_3739_);
lean_dec_ref(v___y_3738_);
lean_dec(v___y_3737_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object* v_00_u03b2_3744_, lean_object* v_m_3745_, lean_object* v_a_3746_, lean_object* v_b_3747_){
_start:
{
lean_object* v___x_3748_; 
v___x_3748_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v_m_3745_, v_a_3746_, v_b_3747_);
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b2_3749_, lean_object* v_a_3750_, lean_object* v_x_3751_){
_start:
{
lean_object* v___x_3752_; 
v___x_3752_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_3750_, v_x_3751_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b2_3753_, lean_object* v_a_3754_, lean_object* v_x_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b2_3753_, v_a_3754_, v_x_3755_);
lean_dec(v_x_3755_);
lean_dec_ref(v_a_3754_);
return v_res_3756_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object* v_00_u03b2_3757_, lean_object* v_a_3758_, lean_object* v_x_3759_){
_start:
{
uint8_t v___x_3760_; 
v___x_3760_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_3758_, v_x_3759_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object* v_00_u03b2_3761_, lean_object* v_a_3762_, lean_object* v_x_3763_){
_start:
{
uint8_t v_res_3764_; lean_object* v_r_3765_; 
v_res_3764_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(v_00_u03b2_3761_, v_a_3762_, v_x_3763_);
lean_dec(v_x_3763_);
lean_dec_ref(v_a_3762_);
v_r_3765_ = lean_box(v_res_3764_);
return v_r_3765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object* v_00_u03b2_3766_, lean_object* v_data_3767_){
_start:
{
lean_object* v___x_3768_; 
v___x_3768_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_data_3767_);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object* v_00_u03b2_3769_, lean_object* v_a_3770_, lean_object* v_b_3771_, lean_object* v_x_3772_){
_start:
{
lean_object* v___x_3773_; 
v___x_3773_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_3770_, v_b_3771_, v_x_3772_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object* v_00_u03b2_3774_, lean_object* v_i_3775_, lean_object* v_source_3776_, lean_object* v_target_3777_){
_start:
{
lean_object* v___x_3778_; 
v___x_3778_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v_i_3775_, v_source_3776_, v_target_3777_);
return v___x_3778_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_3779_, lean_object* v_x_3780_, lean_object* v_x_3781_){
_start:
{
lean_object* v___x_3782_; 
v___x_3782_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_x_3780_, v_x_3781_);
return v___x_3782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object* v_binderType_3783_, lean_object* v_inst_3784_, lean_object* v_toBind_3785_, lean_object* v___f_3786_, lean_object* v_____do__lift_3787_){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
v___x_3788_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3788_, 0, v_____do__lift_3787_);
lean_closure_set(v___x_3788_, 1, v_binderType_3783_);
v___x_3789_ = lean_apply_2(v_inst_3784_, lean_box(0), v___x_3788_);
v___x_3790_ = lean_apply_4(v_toBind_3785_, lean_box(0), lean_box(0), v___x_3789_, v___f_3786_);
return v___x_3790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object* v_toPure_3791_, lean_object* v_usedFields_3792_, lean_object* v_binderName_3793_, lean_object* v_body_3794_, lean_object* v_val_3795_, lean_object* v_inst_3796_, lean_object* v_inst_3797_, lean_object* v_fieldVal_x3f_3798_, lean_object* v_____do__lift_3799_){
_start:
{
uint8_t v_____do__lift_314__boxed_3800_; lean_object* v_res_3801_; 
v_____do__lift_314__boxed_3800_ = lean_unbox(v_____do__lift_3799_);
v_res_3801_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(v_toPure_3791_, v_usedFields_3792_, v_binderName_3793_, v_body_3794_, v_val_3795_, v_inst_3796_, v_inst_3797_, v_fieldVal_x3f_3798_, v_____do__lift_314__boxed_3800_);
lean_dec_ref(v_val_3795_);
lean_dec_ref(v_body_3794_);
return v_res_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object* v_toPure_3802_, lean_object* v_usedFields_3803_, lean_object* v_binderName_3804_, lean_object* v_body_3805_, lean_object* v_inst_3806_, lean_object* v_inst_3807_, lean_object* v_fieldVal_x3f_3808_, lean_object* v_binderType_3809_, lean_object* v_toBind_3810_, lean_object* v_____x_3811_){
_start:
{
if (lean_obj_tag(v_____x_3811_) == 1)
{
lean_object* v_val_3812_; lean_object* v___f_3813_; lean_object* v___f_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v_val_3812_ = lean_ctor_get(v_____x_3811_, 0);
lean_inc_n(v_val_3812_, 2);
lean_dec_ref_known(v_____x_3811_, 1);
lean_inc_n(v_inst_3807_, 2);
v___f_3813_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3813_, 0, v_toPure_3802_);
lean_closure_set(v___f_3813_, 1, v_usedFields_3803_);
lean_closure_set(v___f_3813_, 2, v_binderName_3804_);
lean_closure_set(v___f_3813_, 3, v_body_3805_);
lean_closure_set(v___f_3813_, 4, v_val_3812_);
lean_closure_set(v___f_3813_, 5, v_inst_3806_);
lean_closure_set(v___f_3813_, 6, v_inst_3807_);
lean_closure_set(v___f_3813_, 7, v_fieldVal_x3f_3808_);
lean_inc(v_toBind_3810_);
v___f_3814_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3814_, 0, v_binderType_3809_);
lean_closure_set(v___f_3814_, 1, v_inst_3807_);
lean_closure_set(v___f_3814_, 2, v_toBind_3810_);
lean_closure_set(v___f_3814_, 3, v___f_3813_);
v___x_3815_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3815_, 0, v_val_3812_);
v___x_3816_ = lean_apply_2(v_inst_3807_, lean_box(0), v___x_3815_);
v___x_3817_ = lean_apply_4(v_toBind_3810_, lean_box(0), lean_box(0), v___x_3816_, v___f_3814_);
return v___x_3817_;
}
else
{
lean_object* v___x_3818_; lean_object* v___x_3819_; 
lean_dec(v_____x_3811_);
lean_dec(v_toBind_3810_);
lean_dec_ref(v_binderType_3809_);
lean_dec(v_fieldVal_x3f_3808_);
lean_dec(v_inst_3807_);
lean_dec_ref(v_inst_3806_);
lean_dec_ref(v_body_3805_);
lean_dec(v_binderName_3804_);
lean_dec(v_usedFields_3803_);
v___x_3818_ = lean_box(0);
v___x_3819_ = lean_apply_2(v_toPure_3802_, lean_box(0), v___x_3818_);
return v___x_3819_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object* v_inst_3823_, lean_object* v_inst_3824_, lean_object* v_fieldVal_x3f_3825_, lean_object* v_usedFields_3826_, lean_object* v_e_3827_){
_start:
{
lean_object* v_toApplicative_3828_; lean_object* v_toBind_3829_; lean_object* v_toPure_3830_; 
v_toApplicative_3828_ = lean_ctor_get(v_inst_3823_, 0);
v_toBind_3829_ = lean_ctor_get(v_inst_3823_, 1);
v_toPure_3830_ = lean_ctor_get(v_toApplicative_3828_, 1);
lean_inc(v_toPure_3830_);
if (lean_obj_tag(v_e_3827_) == 6)
{
lean_object* v_binderName_3835_; lean_object* v_binderType_3836_; lean_object* v_body_3837_; lean_object* v___f_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; 
lean_inc_n(v_toBind_3829_, 2);
v_binderName_3835_ = lean_ctor_get(v_e_3827_, 0);
lean_inc_n(v_binderName_3835_, 2);
v_binderType_3836_ = lean_ctor_get(v_e_3827_, 1);
lean_inc_ref(v_binderType_3836_);
v_body_3837_ = lean_ctor_get(v_e_3827_, 2);
lean_inc_ref(v_body_3837_);
lean_dec_ref_known(v_e_3827_, 3);
lean_inc(v_fieldVal_x3f_3825_);
v___f_3838_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3838_, 0, v_toPure_3830_);
lean_closure_set(v___f_3838_, 1, v_usedFields_3826_);
lean_closure_set(v___f_3838_, 2, v_binderName_3835_);
lean_closure_set(v___f_3838_, 3, v_body_3837_);
lean_closure_set(v___f_3838_, 4, v_inst_3823_);
lean_closure_set(v___f_3838_, 5, v_inst_3824_);
lean_closure_set(v___f_3838_, 6, v_fieldVal_x3f_3825_);
lean_closure_set(v___f_3838_, 7, v_binderType_3836_);
lean_closure_set(v___f_3838_, 8, v_toBind_3829_);
v___x_3839_ = lean_apply_1(v_fieldVal_x3f_3825_, v_binderName_3835_);
v___x_3840_ = lean_apply_4(v_toBind_3829_, lean_box(0), lean_box(0), v___x_3839_, v___f_3838_);
return v___x_3840_;
}
else
{
lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3857_; 
lean_dec(v_fieldVal_x3f_3825_);
lean_dec(v_inst_3824_);
v_isSharedCheck_3857_ = !lean_is_exclusive(v_inst_3823_);
if (v_isSharedCheck_3857_ == 0)
{
lean_object* v_unused_3858_; lean_object* v_unused_3859_; 
v_unused_3858_ = lean_ctor_get(v_inst_3823_, 1);
lean_dec(v_unused_3858_);
v_unused_3859_ = lean_ctor_get(v_inst_3823_, 0);
lean_dec(v_unused_3859_);
v___x_3842_ = v_inst_3823_;
v_isShared_3843_ = v_isSharedCheck_3857_;
goto v_resetjp_3841_;
}
else
{
lean_dec(v_inst_3823_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3857_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3844_; uint8_t v___x_3845_; 
v___x_3844_ = l_Lean_Expr_cleanupAnnotations(v_e_3827_);
v___x_3845_ = l_Lean_Expr_isApp(v___x_3844_);
if (v___x_3845_ == 0)
{
lean_dec_ref(v___x_3844_);
lean_del_object(v___x_3842_);
goto v___jp_3831_;
}
else
{
lean_object* v___x_3846_; uint8_t v___x_3847_; 
v___x_3846_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3844_);
v___x_3847_ = l_Lean_Expr_isApp(v___x_3846_);
if (v___x_3847_ == 0)
{
lean_dec_ref(v___x_3846_);
lean_dec_ref(v___x_3844_);
lean_del_object(v___x_3842_);
goto v___jp_3831_;
}
else
{
lean_object* v___x_3848_; lean_object* v___x_3849_; uint8_t v___x_3850_; 
v___x_3848_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3846_);
lean_dec_ref(v___x_3846_);
v___x_3849_ = ((lean_object*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1));
v___x_3850_ = l_Lean_Expr_isConstOf(v___x_3848_, v___x_3849_);
lean_dec_ref(v___x_3848_);
if (v___x_3850_ == 0)
{
lean_dec_ref(v___x_3844_);
lean_del_object(v___x_3842_);
goto v___jp_3831_;
}
else
{
lean_object* v_arg_3851_; lean_object* v___x_3853_; 
lean_dec_ref(v_e_3827_);
v_arg_3851_ = lean_ctor_get(v___x_3844_, 1);
lean_inc_ref(v_arg_3851_);
lean_dec_ref(v___x_3844_);
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 1, v_arg_3851_);
lean_ctor_set(v___x_3842_, 0, v_usedFields_3826_);
v___x_3853_ = v___x_3842_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v_usedFields_3826_);
lean_ctor_set(v_reuseFailAlloc_3856_, 1, v_arg_3851_);
v___x_3853_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
v___x_3855_ = lean_apply_2(v_toPure_3830_, lean_box(0), v___x_3854_);
return v___x_3855_;
}
}
}
}
}
}
v___jp_3831_:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
v___x_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3832_, 0, v_usedFields_3826_);
lean_ctor_set(v___x_3832_, 1, v_e_3827_);
v___x_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
v___x_3834_ = lean_apply_2(v_toPure_3830_, lean_box(0), v___x_3833_);
return v___x_3834_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object* v_toPure_3860_, lean_object* v_usedFields_3861_, lean_object* v_binderName_3862_, lean_object* v_body_3863_, lean_object* v_val_3864_, lean_object* v_inst_3865_, lean_object* v_inst_3866_, lean_object* v_fieldVal_x3f_3867_, uint8_t v_____do__lift_3868_){
_start:
{
if (v_____do__lift_3868_ == 0)
{
lean_object* v___x_3869_; lean_object* v___x_3870_; 
lean_dec(v_fieldVal_x3f_3867_);
lean_dec(v_inst_3866_);
lean_dec_ref(v_inst_3865_);
lean_dec(v_binderName_3862_);
lean_dec(v_usedFields_3861_);
v___x_3869_ = lean_box(0);
v___x_3870_ = lean_apply_2(v_toPure_3860_, lean_box(0), v___x_3869_);
return v___x_3870_;
}
else
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
lean_dec(v_toPure_3860_);
v___x_3871_ = l_Lean_NameSet_insert(v_usedFields_3861_, v_binderName_3862_);
v___x_3872_ = lean_expr_instantiate1(v_body_3863_, v_val_3864_);
v___x_3873_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3865_, v_inst_3866_, v_fieldVal_x3f_3867_, v___x_3871_, v___x_3872_);
return v___x_3873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object* v_m_3874_, lean_object* v_inst_3875_, lean_object* v_inst_3876_, lean_object* v_fieldVal_x3f_3877_, lean_object* v_usedFields_3878_, lean_object* v_e_3879_){
_start:
{
lean_object* v___x_3880_; 
v___x_3880_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3875_, v_inst_3876_, v_fieldVal_x3f_3877_, v_usedFields_3878_, v_e_3879_);
return v___x_3880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object* v_inst_3881_, lean_object* v_inst_3882_, lean_object* v_fieldVal_x3f_3883_, lean_object* v_toPure_3884_, lean_object* v_____s_3885_){
_start:
{
lean_object* v_fst_3886_; 
v_fst_3886_ = lean_ctor_get(v_____s_3885_, 0);
if (lean_obj_tag(v_fst_3886_) == 0)
{
lean_object* v_snd_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
lean_dec(v_toPure_3884_);
v_snd_3887_ = lean_ctor_get(v_____s_3885_, 1);
lean_inc(v_snd_3887_);
lean_dec_ref(v_____s_3885_);
v___x_3888_ = l_Lean_NameSet_empty;
v___x_3889_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3881_, v_inst_3882_, v_fieldVal_x3f_3883_, v___x_3888_, v_snd_3887_);
return v___x_3889_;
}
else
{
lean_object* v_val_3890_; lean_object* v___x_3891_; 
lean_inc_ref(v_fst_3886_);
lean_dec_ref(v_____s_3885_);
lean_dec(v_fieldVal_x3f_3883_);
lean_dec(v_inst_3882_);
lean_dec_ref(v_inst_3881_);
v_val_3890_ = lean_ctor_get(v_fst_3886_, 0);
lean_inc(v_val_3890_);
lean_dec_ref_known(v_fst_3886_, 1);
v___x_3891_ = lean_apply_2(v_toPure_3884_, lean_box(0), v_val_3890_);
return v___x_3891_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object* v_body_3892_, lean_object* v_a_3893_, lean_object* v___x_3894_, lean_object* v_toPure_3895_, lean_object* v_____r_3896_){
_start:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3897_ = lean_expr_instantiate1(v_body_3892_, v_a_3893_);
v___x_3898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3894_);
lean_ctor_set(v___x_3898_, 1, v___x_3897_);
v___x_3899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
v___x_3900_ = lean_apply_2(v_toPure_3895_, lean_box(0), v___x_3899_);
return v___x_3900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object* v_body_3901_, lean_object* v_a_3902_, lean_object* v___x_3903_, lean_object* v_toPure_3904_, lean_object* v_____r_3905_){
_start:
{
lean_object* v_res_3906_; 
v_res_3906_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3901_, v_a_3902_, v___x_3903_, v_toPure_3904_, v_____r_3905_);
lean_dec_ref(v_a_3902_);
lean_dec_ref(v_body_3901_);
return v_res_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object* v_snd_3909_, lean_object* v_toPure_3910_, lean_object* v___f_3911_, uint8_t v_____do__lift_3912_){
_start:
{
if (v_____do__lift_3912_ == 0)
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
lean_dec(v___f_3911_);
v___x_3913_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
v___x_3914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3913_);
lean_ctor_set(v___x_3914_, 1, v_snd_3909_);
v___x_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
v___x_3916_ = lean_apply_2(v_toPure_3910_, lean_box(0), v___x_3915_);
return v___x_3916_;
}
else
{
lean_object* v___x_3917_; lean_object* v___x_3918_; 
lean_dec(v_toPure_3910_);
lean_dec(v_snd_3909_);
v___x_3917_ = lean_box(0);
v___x_3918_ = lean_apply_1(v___f_3911_, v___x_3917_);
return v___x_3918_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object* v_snd_3919_, lean_object* v_toPure_3920_, lean_object* v___f_3921_, lean_object* v_____do__lift_3922_){
_start:
{
uint8_t v_____do__lift_725__boxed_3923_; lean_object* v_res_3924_; 
v_____do__lift_725__boxed_3923_ = lean_unbox(v_____do__lift_3922_);
v_res_3924_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(v_snd_3919_, v_toPure_3920_, v___f_3921_, v_____do__lift_725__boxed_3923_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object* v_binderType_3925_, lean_object* v_inst_3926_, lean_object* v_toBind_3927_, lean_object* v___f_3928_, lean_object* v_____do__lift_3929_){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3930_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3930_, 0, v_____do__lift_3929_);
lean_closure_set(v___x_3930_, 1, v_binderType_3925_);
v___x_3931_ = lean_apply_2(v_inst_3926_, lean_box(0), v___x_3930_);
v___x_3932_ = lean_apply_4(v_toBind_3927_, lean_box(0), lean_box(0), v___x_3931_, v___f_3928_);
return v___x_3932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object* v___x_3933_, lean_object* v_toPure_3934_, lean_object* v_levels_x3f_3935_, lean_object* v_inst_3936_, lean_object* v_toBind_3937_, lean_object* v_a_3938_, lean_object* v_x_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v_snd_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3961_; 
v_snd_3941_ = lean_ctor_get(v___y_3940_, 1);
v_isSharedCheck_3961_ = !lean_is_exclusive(v___y_3940_);
if (v_isSharedCheck_3961_ == 0)
{
lean_object* v_unused_3962_; 
v_unused_3962_ = lean_ctor_get(v___y_3940_, 0);
lean_dec(v_unused_3962_);
v___x_3943_ = v___y_3940_;
v_isShared_3944_ = v_isSharedCheck_3961_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_snd_3941_);
lean_dec(v___y_3940_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3961_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
if (lean_obj_tag(v_snd_3941_) == 6)
{
lean_object* v_binderType_3945_; lean_object* v_body_3946_; lean_object* v___f_3947_; 
lean_del_object(v___x_3943_);
v_binderType_3945_ = lean_ctor_get(v_snd_3941_, 1);
lean_inc_ref(v_binderType_3945_);
v_body_3946_ = lean_ctor_get(v_snd_3941_, 2);
lean_inc(v_toPure_3934_);
lean_inc(v___x_3933_);
lean_inc_ref(v_a_3938_);
lean_inc_ref(v_body_3946_);
v___f_3947_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3947_, 0, v_body_3946_);
lean_closure_set(v___f_3947_, 1, v_a_3938_);
lean_closure_set(v___f_3947_, 2, v___x_3933_);
lean_closure_set(v___f_3947_, 3, v_toPure_3934_);
if (lean_obj_tag(v_levels_x3f_3935_) == 0)
{
lean_object* v___f_3948_; lean_object* v___f_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_dec(v___x_3933_);
v___f_3948_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3948_, 0, v_snd_3941_);
lean_closure_set(v___f_3948_, 1, v_toPure_3934_);
lean_closure_set(v___f_3948_, 2, v___f_3947_);
lean_inc(v_toBind_3937_);
lean_inc(v_inst_3936_);
v___f_3949_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3949_, 0, v_binderType_3945_);
lean_closure_set(v___f_3949_, 1, v_inst_3936_);
lean_closure_set(v___f_3949_, 2, v_toBind_3937_);
lean_closure_set(v___f_3949_, 3, v___f_3948_);
v___x_3950_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3950_, 0, v_a_3938_);
v___x_3951_ = lean_apply_2(v_inst_3936_, lean_box(0), v___x_3950_);
v___x_3952_ = lean_apply_4(v_toBind_3937_, lean_box(0), lean_box(0), v___x_3951_, v___f_3949_);
return v___x_3952_;
}
else
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
lean_inc_ref(v_body_3946_);
lean_dec_ref(v___f_3947_);
lean_dec_ref_known(v_snd_3941_, 3);
lean_dec_ref(v_binderType_3945_);
lean_dec(v_toBind_3937_);
lean_dec(v_inst_3936_);
v___x_3953_ = lean_box(0);
v___x_3954_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3946_, v_a_3938_, v___x_3933_, v_toPure_3934_, v___x_3953_);
lean_dec_ref(v_a_3938_);
lean_dec_ref(v_body_3946_);
return v___x_3954_;
}
}
else
{
lean_object* v___x_3955_; lean_object* v___x_3957_; 
lean_dec_ref(v_a_3938_);
lean_dec(v_toBind_3937_);
lean_dec(v_inst_3936_);
lean_dec(v___x_3933_);
v___x_3955_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v___x_3955_);
v___x_3957_ = v___x_3943_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v___x_3955_);
lean_ctor_set(v_reuseFailAlloc_3960_, 1, v_snd_3941_);
v___x_3957_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3957_);
v___x_3959_ = lean_apply_2(v_toPure_3934_, lean_box(0), v___x_3958_);
return v___x_3959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object* v___x_3963_, lean_object* v_toPure_3964_, lean_object* v_levels_x3f_3965_, lean_object* v_inst_3966_, lean_object* v_toBind_3967_, lean_object* v_a_3968_, lean_object* v_x_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(v___x_3963_, v_toPure_3964_, v_levels_x3f_3965_, v_inst_3966_, v_toBind_3967_, v_a_3968_, v_x_3969_, v___y_3970_);
lean_dec(v_levels_x3f_3965_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object* v_toPure_3972_, lean_object* v_levels_x3f_3973_, lean_object* v_inst_3974_, lean_object* v_toBind_3975_, lean_object* v_params_3976_, lean_object* v_inst_3977_, lean_object* v___f_3978_, lean_object* v_val_3979_){
_start:
{
lean_object* v___x_3980_; lean_object* v___f_3981_; lean_object* v___x_3982_; size_t v_sz_3983_; size_t v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; 
v___x_3980_ = lean_box(0);
lean_inc(v_toBind_3975_);
v___f_3981_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed), 8, 5);
lean_closure_set(v___f_3981_, 0, v___x_3980_);
lean_closure_set(v___f_3981_, 1, v_toPure_3972_);
lean_closure_set(v___f_3981_, 2, v_levels_x3f_3973_);
lean_closure_set(v___f_3981_, 3, v_inst_3974_);
lean_closure_set(v___f_3981_, 4, v_toBind_3975_);
v___x_3982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3980_);
lean_ctor_set(v___x_3982_, 1, v_val_3979_);
v_sz_3983_ = lean_array_size(v_params_3976_);
v___x_3984_ = ((size_t)0ULL);
v___x_3985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3977_, v_params_3976_, v___f_3981_, v_sz_3983_, v___x_3984_, v___x_3982_);
v___x_3986_ = lean_apply_4(v_toBind_3975_, lean_box(0), lean_box(0), v___x_3985_, v___f_3978_);
return v___x_3986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object* v_cinfo_3987_, lean_object* v_us_3988_, uint8_t v___x_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_){
_start:
{
lean_object* v___x_3995_; 
v___x_3995_ = l_Lean_Core_instantiateValueLevelParams(v_cinfo_3987_, v_us_3988_, v___x_3989_, v___y_3992_, v___y_3993_);
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object* v_cinfo_3996_, lean_object* v_us_3997_, lean_object* v___x_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
uint8_t v___x_836__boxed_4004_; lean_object* v_res_4005_; 
v___x_836__boxed_4004_ = lean_unbox(v___x_3998_);
v_res_4005_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(v_cinfo_3996_, v_us_3997_, v___x_836__boxed_4004_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec(v___y_4000_);
lean_dec_ref(v___y_3999_);
lean_dec_ref(v_cinfo_3996_);
return v_res_4005_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3(void){
_start:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4009_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2));
v___x_4010_ = lean_unsigned_to_nat(2u);
v___x_4011_ = lean_unsigned_to_nat(202u);
v___x_4012_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1));
v___x_4013_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0));
v___x_4014_ = l_mkPanicMessageWithDecl(v___x_4013_, v___x_4012_, v___x_4011_, v___x_4010_, v___x_4009_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object* v_cinfo_4015_, lean_object* v___x_4016_, lean_object* v_inst_4017_, lean_object* v_toBind_4018_, lean_object* v___f_4019_, lean_object* v_us_4020_){
_start:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; uint8_t v___x_4024_; 
v___x_4021_ = l_List_lengthTR___redArg(v_us_4020_);
v___x_4022_ = l_Lean_ConstantInfo_levelParams(v_cinfo_4015_);
v___x_4023_ = l_List_lengthTR___redArg(v___x_4022_);
lean_dec(v___x_4022_);
v___x_4024_ = lean_nat_dec_eq(v___x_4021_, v___x_4023_);
lean_dec(v___x_4023_);
lean_dec(v___x_4021_);
if (v___x_4024_ == 0)
{
lean_object* v___x_4025_; lean_object* v___x_4026_; 
lean_dec(v_us_4020_);
lean_dec(v___f_4019_);
lean_dec(v_toBind_4018_);
lean_dec(v_inst_4017_);
lean_dec_ref(v_cinfo_4015_);
v___x_4025_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3);
v___x_4026_ = l_panic___redArg(v___x_4016_, v___x_4025_);
return v___x_4026_;
}
else
{
uint8_t v___x_4027_; lean_object* v___x_4028_; lean_object* v___f_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; 
v___x_4027_ = 0;
v___x_4028_ = lean_box(v___x_4027_);
v___f_4029_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed), 8, 3);
lean_closure_set(v___f_4029_, 0, v_cinfo_4015_);
lean_closure_set(v___f_4029_, 1, v_us_4020_);
lean_closure_set(v___f_4029_, 2, v___x_4028_);
v___x_4030_ = lean_apply_2(v_inst_4017_, lean_box(0), v___f_4029_);
v___x_4031_ = lean_apply_4(v_toBind_4018_, lean_box(0), lean_box(0), v___x_4030_, v___f_4019_);
return v___x_4031_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object* v_cinfo_4032_, lean_object* v___x_4033_, lean_object* v_inst_4034_, lean_object* v_toBind_4035_, lean_object* v___f_4036_, lean_object* v_us_4037_){
_start:
{
lean_object* v_res_4038_; 
v_res_4038_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(v_cinfo_4032_, v___x_4033_, v_inst_4034_, v_toBind_4035_, v___f_4036_, v_us_4037_);
lean_dec(v___x_4033_);
return v_res_4038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object* v___x_4039_, lean_object* v_inst_4040_, lean_object* v_toBind_4041_, lean_object* v___f_4042_, lean_object* v_levels_x3f_4043_, lean_object* v_toPure_4044_, lean_object* v_cinfo_4045_){
_start:
{
lean_object* v___f_4046_; 
lean_inc(v_toBind_4041_);
lean_inc(v_inst_4040_);
lean_inc_ref(v_cinfo_4045_);
v___f_4046_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_4046_, 0, v_cinfo_4045_);
lean_closure_set(v___f_4046_, 1, v___x_4039_);
lean_closure_set(v___f_4046_, 2, v_inst_4040_);
lean_closure_set(v___f_4046_, 3, v_toBind_4041_);
lean_closure_set(v___f_4046_, 4, v___f_4042_);
if (lean_obj_tag(v_levels_x3f_4043_) == 0)
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
lean_dec(v_toPure_4044_);
v___x_4047_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVarsFor___boxed), 6, 1);
lean_closure_set(v___x_4047_, 0, v_cinfo_4045_);
v___x_4048_ = lean_apply_2(v_inst_4040_, lean_box(0), v___x_4047_);
v___x_4049_ = lean_apply_4(v_toBind_4041_, lean_box(0), lean_box(0), v___x_4048_, v___f_4046_);
return v___x_4049_;
}
else
{
lean_object* v_val_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
lean_dec_ref(v_cinfo_4045_);
lean_dec(v_inst_4040_);
v_val_4050_ = lean_ctor_get(v_levels_x3f_4043_, 0);
lean_inc(v_val_4050_);
lean_dec_ref_known(v_levels_x3f_4043_, 1);
v___x_4051_ = lean_apply_2(v_toPure_4044_, lean_box(0), v_val_4050_);
v___x_4052_ = lean_apply_4(v_toBind_4041_, lean_box(0), lean_box(0), v___x_4051_, v___f_4046_);
return v___x_4052_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object* v_inst_4053_, lean_object* v_inst_4054_, lean_object* v_inst_4055_, lean_object* v_inst_4056_, lean_object* v_defaultFn_4057_, lean_object* v_levels_x3f_4058_, lean_object* v_params_4059_, lean_object* v_fieldVal_x3f_4060_){
_start:
{
lean_object* v_toApplicative_4061_; lean_object* v_toBind_4062_; lean_object* v_toPure_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___f_4066_; lean_object* v___f_4067_; lean_object* v___x_4068_; lean_object* v___f_4069_; lean_object* v___x_4070_; 
v_toApplicative_4061_ = lean_ctor_get(v_inst_4053_, 0);
v_toBind_4062_ = lean_ctor_get(v_inst_4053_, 1);
lean_inc_n(v_toBind_4062_, 3);
v_toPure_4063_ = lean_ctor_get(v_toApplicative_4061_, 1);
lean_inc_n(v_toPure_4063_, 3);
v___x_4064_ = lean_box(0);
lean_inc_ref_n(v_inst_4053_, 3);
v___x_4065_ = l_Lean_getConstInfo___redArg(v_inst_4053_, v_inst_4054_, v_inst_4055_, v_defaultFn_4057_);
lean_inc_n(v_inst_4056_, 2);
v___f_4066_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_4066_, 0, v_inst_4053_);
lean_closure_set(v___f_4066_, 1, v_inst_4056_);
lean_closure_set(v___f_4066_, 2, v_fieldVal_x3f_4060_);
lean_closure_set(v___f_4066_, 3, v_toPure_4063_);
lean_inc(v_levels_x3f_4058_);
v___f_4067_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5), 8, 7);
lean_closure_set(v___f_4067_, 0, v_toPure_4063_);
lean_closure_set(v___f_4067_, 1, v_levels_x3f_4058_);
lean_closure_set(v___f_4067_, 2, v_inst_4056_);
lean_closure_set(v___f_4067_, 3, v_toBind_4062_);
lean_closure_set(v___f_4067_, 4, v_params_4059_);
lean_closure_set(v___f_4067_, 5, v_inst_4053_);
lean_closure_set(v___f_4067_, 6, v___f_4066_);
v___x_4068_ = l_instInhabitedOfMonad___redArg(v_inst_4053_, v___x_4064_);
v___f_4069_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8), 7, 6);
lean_closure_set(v___f_4069_, 0, v___x_4068_);
lean_closure_set(v___f_4069_, 1, v_inst_4056_);
lean_closure_set(v___f_4069_, 2, v_toBind_4062_);
lean_closure_set(v___f_4069_, 3, v___f_4067_);
lean_closure_set(v___f_4069_, 4, v_levels_x3f_4058_);
lean_closure_set(v___f_4069_, 5, v_toPure_4063_);
v___x_4070_ = lean_apply_4(v_toBind_4062_, lean_box(0), lean_box(0), v___x_4065_, v___f_4069_);
return v___x_4070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object* v_m_4071_, lean_object* v_inst_4072_, lean_object* v_inst_4073_, lean_object* v_inst_4074_, lean_object* v_inst_4075_, lean_object* v_inst_4076_, lean_object* v_defaultFn_4077_, lean_object* v_levels_x3f_4078_, lean_object* v_params_4079_, lean_object* v_fieldVal_x3f_4080_){
_start:
{
lean_object* v___x_4081_; 
v___x_4081_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(v_inst_4072_, v_inst_4073_, v_inst_4074_, v_inst_4075_, v_defaultFn_4077_, v_levels_x3f_4078_, v_params_4079_, v_fieldVal_x3f_4080_);
return v___x_4081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object* v_m_4082_, lean_object* v_inst_4083_, lean_object* v_inst_4084_, lean_object* v_inst_4085_, lean_object* v_inst_4086_, lean_object* v_inst_4087_, lean_object* v_defaultFn_4088_, lean_object* v_levels_x3f_4089_, lean_object* v_params_4090_, lean_object* v_fieldVal_x3f_4091_){
_start:
{
lean_object* v_res_4092_; 
v_res_4092_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f(v_m_4082_, v_inst_4083_, v_inst_4084_, v_inst_4085_, v_inst_4086_, v_inst_4087_, v_defaultFn_4088_, v_levels_x3f_4089_, v_params_4090_, v_fieldVal_x3f_4091_);
lean_dec_ref(v_inst_4087_);
return v_res_4092_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Structure(builtin);
}
#ifdef __cplusplus
}
#endif
