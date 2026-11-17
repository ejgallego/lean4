// Lean compiler output
// Module: Lean.Meta.HaveTelescope
// Imports: public import Lean.Meta.Basic public import Lean.Meta.MonadSimp import Lean.Util.CollectFVars import Lean.Util.CollectLooseBVars import Lean.Meta.AppBuilder import Init.While
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
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectLooseBVars(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_State_ofFVarSet(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* lean_obj_tag_nat(lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__0;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__1;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveInfo_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveInfo;
static const lean_array_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0_value;
static const lean_string_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "_have_telescope_info_dummy_"};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(6, 236, 171, 204, 19, 216, 21, 195)}};
static const lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2 = (const lean_object*)&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4;
static lean_once_cell_t l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedHaveTelescopeInfo;
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0 = (const lean_object*)&l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2;
static lean_once_cell_t l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedSimpHaveResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_unused_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "have_unused'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "have_body_congr_dep'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "have_val_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "have_body_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "have_congr'"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "have telescope; simplifying body "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(224, 171, 76, 175, 220, 234, 86, 123)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(203, 102, 186, 241, 230, 68, 112, 189)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(231, 39, 204, 185, 148, 242, 27, 8)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "have telescope; unused "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "have telescope; fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "have telescope; non-fixed "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Debug"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 248, 27, 31, 3, 126, 142, 13)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__1_value),LEAN_SCALAR_PTR_LITERAL(119, 140, 6, 58, 231, 192, 8, 160)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 39, 251, 153, 6, 255, 160, 132)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__3_value),LEAN_SCALAR_PTR_LITERAL(66, 96, 215, 110, 82, 218, 253, 207)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object**);
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(255, 213, 12, 50, 85, 170, 122, 222)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(238, 251, 30, 34, 208, 131, 54, 223)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(33, 35, 129, 148, 230, 9, 239, 46)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.HaveTelescope"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "_private.Lean.Meta.HaveTelescope.0.Lean.Meta.simpHaveTelescopeAux"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4_value;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "assertion violation: !rb.exprType.hasLooseBVar 0\n        "};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "_simp_let_unused_dummy"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 140, 102, 13, 80, 16, 156, 102)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12;
static const lean_closure_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13;
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 198, 234, 16, 168, 79, 243)}};
static const lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1 = (const lean_object*)&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.simpHaveTelescope"};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "assertion violation: !info.haveInfo.isEmpty\n  "};
static const lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__0, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__0_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_Lean_instInhabitedLocalDecl_default;
v___x_9_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_10_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v___x_7_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo_default(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__2, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__2_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__2);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveInfo(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Meta_instInhabitedHaveInfo_default;
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_18_ = lean_box(0);
v___x_19_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2));
v___x_20_ = l_Lean_Expr_const___override(v___x_19_, v___x_18_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__2));
v___x_22_ = l_Lean_Level_param___override(v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_23_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__4);
v___x_24_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__3);
v___x_25_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_26_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0));
v___x_27_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___x_25_);
lean_ctor_set(v___x_27_, 2, v___x_25_);
lean_ctor_set(v___x_27_, 3, v___x_24_);
lean_ctor_set(v___x_27_, 4, v___x_24_);
lean_ctor_set(v___x_27_, 5, v___x_23_);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5);
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo(void){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Meta_instInhabitedHaveTelescopeInfo_default;
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(lean_object* v_lctx_30_, lean_object* v_x_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_keyedConfig_37_; uint8_t v_trackZetaDelta_38_; lean_object* v_zetaDeltaSet_39_; lean_object* v_localInstances_40_; lean_object* v_defEqCtx_x3f_41_; lean_object* v_synthPendingDepth_42_; lean_object* v_customCanUnfoldPredicate_x3f_43_; uint8_t v_univApprox_44_; uint8_t v_inTypeClassResolution_45_; uint8_t v_cacheInferType_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_keyedConfig_37_ = lean_ctor_get(v___y_32_, 0);
v_trackZetaDelta_38_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7);
v_zetaDeltaSet_39_ = lean_ctor_get(v___y_32_, 1);
v_localInstances_40_ = lean_ctor_get(v___y_32_, 3);
v_defEqCtx_x3f_41_ = lean_ctor_get(v___y_32_, 4);
v_synthPendingDepth_42_ = lean_ctor_get(v___y_32_, 5);
v_customCanUnfoldPredicate_x3f_43_ = lean_ctor_get(v___y_32_, 6);
v_univApprox_44_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_45_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7 + 2);
v_cacheInferType_46_ = lean_ctor_get_uint8(v___y_32_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_43_);
lean_inc(v_synthPendingDepth_42_);
lean_inc(v_defEqCtx_x3f_41_);
lean_inc_ref(v_localInstances_40_);
lean_inc(v_zetaDeltaSet_39_);
lean_inc_ref(v_keyedConfig_37_);
v___x_47_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_47_, 0, v_keyedConfig_37_);
lean_ctor_set(v___x_47_, 1, v_zetaDeltaSet_39_);
lean_ctor_set(v___x_47_, 2, v_lctx_30_);
lean_ctor_set(v___x_47_, 3, v_localInstances_40_);
lean_ctor_set(v___x_47_, 4, v_defEqCtx_x3f_41_);
lean_ctor_set(v___x_47_, 5, v_synthPendingDepth_42_);
lean_ctor_set(v___x_47_, 6, v_customCanUnfoldPredicate_x3f_43_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7, v_trackZetaDelta_38_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7 + 1, v_univApprox_44_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7 + 2, v_inTypeClassResolution_45_);
lean_ctor_set_uint8(v___x_47_, sizeof(void*)*7 + 3, v_cacheInferType_46_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
v___x_48_ = lean_apply_5(v_x_31_, v___x_47_, v___y_33_, v___y_34_, v___y_35_, lean_box(0));
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg___boxed(lean_object* v_lctx_49_, lean_object* v_x_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_49_, v_x_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(lean_object* v_00_u03b1_57_, lean_object* v_lctx_58_, lean_object* v_x_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_58_, v_x_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___boxed(lean_object* v_00_u03b1_66_, lean_object* v_lctx_67_, lean_object* v_x_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5(v_00_u03b1_66_, v_lctx_67_, v_x_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(lean_object* v_x_75_, lean_object* v_x_76_){
_start:
{
if (lean_obj_tag(v_x_76_) == 0)
{
return v_x_75_;
}
else
{
lean_object* v_key_77_; lean_object* v_value_78_; lean_object* v_tail_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_102_; 
v_key_77_ = lean_ctor_get(v_x_76_, 0);
v_value_78_ = lean_ctor_get(v_x_76_, 1);
v_tail_79_ = lean_ctor_get(v_x_76_, 2);
v_isSharedCheck_102_ = !lean_is_exclusive(v_x_76_);
if (v_isSharedCheck_102_ == 0)
{
v___x_81_ = v_x_76_;
v_isShared_82_ = v_isSharedCheck_102_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_tail_79_);
lean_inc(v_value_78_);
lean_inc(v_key_77_);
lean_dec(v_x_76_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_102_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; uint64_t v___x_84_; uint64_t v___x_85_; uint64_t v___x_86_; uint64_t v_fold_87_; uint64_t v___x_88_; uint64_t v___x_89_; uint64_t v___x_90_; size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_83_ = lean_array_get_size(v_x_75_);
v___x_84_ = lean_uint64_of_nat(v_key_77_);
v___x_85_ = 32ULL;
v___x_86_ = lean_uint64_shift_right(v___x_84_, v___x_85_);
v_fold_87_ = lean_uint64_xor(v___x_84_, v___x_86_);
v___x_88_ = 16ULL;
v___x_89_ = lean_uint64_shift_right(v_fold_87_, v___x_88_);
v___x_90_ = lean_uint64_xor(v_fold_87_, v___x_89_);
v___x_91_ = lean_uint64_to_usize(v___x_90_);
v___x_92_ = lean_usize_of_nat(v___x_83_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_sub(v___x_92_, v___x_93_);
v___x_95_ = lean_usize_land(v___x_91_, v___x_94_);
v___x_96_ = lean_array_uget_borrowed(v_x_75_, v___x_95_);
lean_inc(v___x_96_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 2, v___x_96_);
v___x_98_ = v___x_81_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_key_77_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_value_78_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v___x_96_);
v___x_98_ = v_reuseFailAlloc_101_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_array_uset(v_x_75_, v___x_95_, v___x_98_);
v_x_75_ = v___x_99_;
v_x_76_ = v_tail_79_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(lean_object* v_i_103_, lean_object* v_source_104_, lean_object* v_target_105_){
_start:
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_array_get_size(v_source_104_);
v___x_107_ = lean_nat_dec_lt(v_i_103_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_source_104_);
lean_dec(v_i_103_);
return v_target_105_;
}
else
{
lean_object* v_es_108_; lean_object* v___x_109_; lean_object* v_source_110_; lean_object* v_target_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_es_108_ = lean_array_fget(v_source_104_, v_i_103_);
v___x_109_ = lean_box(0);
v_source_110_ = lean_array_fset(v_source_104_, v_i_103_, v___x_109_);
v_target_111_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(v_target_105_, v_es_108_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_add(v_i_103_, v___x_112_);
lean_dec(v_i_103_);
v_i_103_ = v___x_113_;
v_source_104_ = v_source_110_;
v_target_105_ = v_target_111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(lean_object* v_data_115_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_nbuckets_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_116_ = lean_array_get_size(v_data_115_);
v___x_117_ = lean_unsigned_to_nat(2u);
v_nbuckets_118_ = lean_nat_mul(v___x_116_, v___x_117_);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_box(0);
v___x_121_ = lean_mk_array(v_nbuckets_118_, v___x_120_);
v___x_122_ = lean_array_propagate_mark(v_data_115_, v___x_121_);
v___x_123_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v___x_119_, v_data_115_, v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(lean_object* v_a_124_, lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
else
{
lean_object* v_key_127_; lean_object* v_tail_128_; uint8_t v___x_129_; 
v_key_127_ = lean_ctor_get(v_x_125_, 0);
v_tail_128_ = lean_ctor_get(v_x_125_, 2);
v___x_129_ = lean_nat_dec_eq(v_key_127_, v_a_124_);
if (v___x_129_ == 0)
{
v_x_125_ = v_tail_128_;
goto _start;
}
else
{
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg___boxed(lean_object* v_a_131_, lean_object* v_x_132_){
_start:
{
uint8_t v_res_133_; lean_object* v_r_134_; 
v_res_133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_131_, v_x_132_);
lean_dec(v_x_132_);
lean_dec(v_a_131_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(lean_object* v_m_135_, lean_object* v_a_136_, lean_object* v_b_137_){
_start:
{
lean_object* v_size_138_; lean_object* v_buckets_139_; lean_object* v___x_140_; uint64_t v___x_141_; uint64_t v___x_142_; uint64_t v___x_143_; uint64_t v_fold_144_; uint64_t v___x_145_; uint64_t v___x_146_; uint64_t v___x_147_; size_t v___x_148_; size_t v___x_149_; size_t v___x_150_; size_t v___x_151_; size_t v___x_152_; lean_object* v_bkt_153_; uint8_t v___x_154_; 
v_size_138_ = lean_ctor_get(v_m_135_, 0);
v_buckets_139_ = lean_ctor_get(v_m_135_, 1);
v___x_140_ = lean_array_get_size(v_buckets_139_);
v___x_141_ = lean_uint64_of_nat(v_a_136_);
v___x_142_ = 32ULL;
v___x_143_ = lean_uint64_shift_right(v___x_141_, v___x_142_);
v_fold_144_ = lean_uint64_xor(v___x_141_, v___x_143_);
v___x_145_ = 16ULL;
v___x_146_ = lean_uint64_shift_right(v_fold_144_, v___x_145_);
v___x_147_ = lean_uint64_xor(v_fold_144_, v___x_146_);
v___x_148_ = lean_uint64_to_usize(v___x_147_);
v___x_149_ = lean_usize_of_nat(v___x_140_);
v___x_150_ = ((size_t)1ULL);
v___x_151_ = lean_usize_sub(v___x_149_, v___x_150_);
v___x_152_ = lean_usize_land(v___x_148_, v___x_151_);
v_bkt_153_ = lean_array_uget_borrowed(v_buckets_139_, v___x_152_);
v___x_154_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_136_, v_bkt_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_175_; 
lean_inc_ref(v_buckets_139_);
lean_inc(v_size_138_);
v_isSharedCheck_175_ = !lean_is_exclusive(v_m_135_);
if (v_isSharedCheck_175_ == 0)
{
lean_object* v_unused_176_; lean_object* v_unused_177_; 
v_unused_176_ = lean_ctor_get(v_m_135_, 1);
lean_dec(v_unused_176_);
v_unused_177_ = lean_ctor_get(v_m_135_, 0);
lean_dec(v_unused_177_);
v___x_156_ = v_m_135_;
v_isShared_157_ = v_isSharedCheck_175_;
goto v_resetjp_155_;
}
else
{
lean_dec(v_m_135_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_175_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_158_; lean_object* v_size_x27_159_; lean_object* v___x_160_; lean_object* v_buckets_x27_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_158_ = lean_unsigned_to_nat(1u);
v_size_x27_159_ = lean_nat_add(v_size_138_, v___x_158_);
lean_dec(v_size_138_);
lean_inc(v_bkt_153_);
v___x_160_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_160_, 0, v_a_136_);
lean_ctor_set(v___x_160_, 1, v_b_137_);
lean_ctor_set(v___x_160_, 2, v_bkt_153_);
v_buckets_x27_161_ = lean_array_uset(v_buckets_139_, v___x_152_, v___x_160_);
v___x_162_ = lean_unsigned_to_nat(4u);
v___x_163_ = lean_nat_mul(v_size_x27_159_, v___x_162_);
v___x_164_ = lean_unsigned_to_nat(3u);
v___x_165_ = lean_nat_div(v___x_163_, v___x_164_);
lean_dec(v___x_163_);
v___x_166_ = lean_array_get_size(v_buckets_x27_161_);
v___x_167_ = lean_nat_dec_le(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
if (v___x_167_ == 0)
{
lean_object* v_val_168_; lean_object* v___x_170_; 
v_val_168_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_buckets_x27_161_);
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 1, v_val_168_);
lean_ctor_set(v___x_156_, 0, v_size_x27_159_);
v___x_170_ = v___x_156_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_size_x27_159_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v_val_168_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
else
{
lean_object* v___x_173_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 1, v_buckets_x27_161_);
lean_ctor_set(v___x_156_, 0, v_size_x27_159_);
v___x_173_ = v___x_156_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_size_x27_159_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_buckets_x27_161_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
else
{
lean_dec(v_b_137_);
lean_dec(v_a_136_);
return v_m_135_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(lean_object* v_numHaves_178_, lean_object* v_x_179_, lean_object* v_x_180_){
_start:
{
if (lean_obj_tag(v_x_180_) == 0)
{
return v_x_179_;
}
else
{
lean_object* v_key_181_; lean_object* v_tail_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v_key_181_ = lean_ctor_get(v_x_180_, 0);
v_tail_182_ = lean_ctor_get(v_x_180_, 2);
v___x_183_ = lean_nat_sub(v_numHaves_178_, v_key_181_);
v___x_184_ = lean_unsigned_to_nat(1u);
v___x_185_ = lean_nat_sub(v___x_183_, v___x_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_x_179_, v___x_185_, v___x_186_);
v_x_179_ = v___x_187_;
v_x_180_ = v_tail_182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1___boxed(lean_object* v_numHaves_189_, lean_object* v_x_190_, lean_object* v_x_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_189_, v_x_190_, v_x_191_);
lean_dec(v_x_191_);
lean_dec(v_numHaves_189_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(lean_object* v_numHaves_193_, lean_object* v_as_194_, size_t v_i_195_, size_t v_stop_196_, lean_object* v_b_197_){
_start:
{
uint8_t v___x_198_; 
v___x_198_ = lean_usize_dec_eq(v_i_195_, v_stop_196_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; size_t v___x_201_; size_t v___x_202_; 
v___x_199_ = lean_array_uget_borrowed(v_as_194_, v_i_195_);
v___x_200_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__1(v_numHaves_193_, v_b_197_, v___x_199_);
v___x_201_ = ((size_t)1ULL);
v___x_202_ = lean_usize_add(v_i_195_, v___x_201_);
v_i_195_ = v___x_202_;
v_b_197_ = v___x_200_;
goto _start;
}
else
{
return v_b_197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2___boxed(lean_object* v_numHaves_204_, lean_object* v_as_205_, lean_object* v_i_206_, lean_object* v_stop_207_, lean_object* v_b_208_){
_start:
{
size_t v_i_boxed_209_; size_t v_stop_boxed_210_; lean_object* v_res_211_; 
v_i_boxed_209_ = lean_unbox_usize(v_i_206_);
lean_dec(v_i_206_);
v_stop_boxed_210_ = lean_unbox_usize(v_stop_207_);
lean_dec(v_stop_207_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_204_, v_as_205_, v_i_boxed_209_, v_stop_boxed_210_, v_b_208_);
lean_dec_ref(v_as_205_);
lean_dec(v_numHaves_204_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(lean_object* v_numHaves_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_buckets_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_216_ = l_Lean_Expr_collectLooseBVars(v_a_213_, v___x_214_);
v_buckets_217_ = lean_ctor_get(v___x_216_, 1);
lean_inc_ref(v_buckets_217_);
lean_dec_ref(v___x_216_);
v___x_218_ = lean_array_get_size(v_buckets_217_);
v___x_219_ = lean_nat_dec_lt(v___x_214_, v___x_218_);
if (v___x_219_ == 0)
{
lean_dec_ref(v_buckets_217_);
return v___x_215_;
}
else
{
size_t v___x_220_; size_t v___x_221_; lean_object* v___x_222_; 
v___x_220_ = ((size_t)0ULL);
v___x_221_ = lean_usize_of_nat(v___x_218_);
v___x_222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__2(v_numHaves_212_, v_buckets_217_, v___x_220_, v___x_221_, v___x_215_);
lean_dec_ref(v_buckets_217_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0___boxed(lean_object* v_numHaves_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_223_, v_a_224_);
lean_dec(v_numHaves_223_);
return v_res_225_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(lean_object* v_k_226_, lean_object* v_t_227_){
_start:
{
if (lean_obj_tag(v_t_227_) == 0)
{
lean_object* v_k_228_; lean_object* v_l_229_; lean_object* v_r_230_; uint8_t v___x_231_; 
v_k_228_ = lean_ctor_get(v_t_227_, 1);
v_l_229_ = lean_ctor_get(v_t_227_, 3);
v_r_230_ = lean_ctor_get(v_t_227_, 4);
v___x_231_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_226_, v_k_228_);
switch(v___x_231_)
{
case 0:
{
v_t_227_ = v_l_229_;
goto _start;
}
case 1:
{
uint8_t v___x_233_; 
v___x_233_ = 1;
return v___x_233_;
}
default: 
{
v_t_227_ = v_r_230_;
goto _start;
}
}
}
else
{
uint8_t v___x_235_; 
v___x_235_ = 0;
return v___x_235_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg___boxed(lean_object* v_k_236_, lean_object* v_t_237_){
_start:
{
uint8_t v_res_238_; lean_object* v_r_239_; 
v_res_238_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_k_236_, v_t_237_);
lean_dec(v_t_237_);
lean_dec(v_k_236_);
v_r_239_ = lean_box(v_res_238_);
return v_r_239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(lean_object* v_fvars_240_, lean_object* v___x_241_, lean_object* v_n_242_, lean_object* v_j_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_zero_245_; uint8_t v_isZero_246_; 
v_zero_245_ = lean_unsigned_to_nat(0u);
v_isZero_246_ = lean_nat_dec_eq(v_j_243_, v_zero_245_);
if (v_isZero_246_ == 1)
{
lean_dec(v_j_243_);
return v_a_244_;
}
else
{
lean_object* v_one_247_; lean_object* v_n_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v_one_247_ = lean_unsigned_to_nat(1u);
v_n_248_ = lean_nat_sub(v_j_243_, v_one_247_);
v___x_249_ = lean_nat_sub(v_n_242_, v_j_243_);
lean_dec(v_j_243_);
v___x_250_ = lean_array_fget_borrowed(v_fvars_240_, v___x_249_);
v___x_251_ = l_Lean_Expr_fvarId_x21(v___x_250_);
v___x_252_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v___x_251_, v___x_241_);
lean_dec(v___x_251_);
if (v___x_252_ == 0)
{
lean_dec(v___x_249_);
v_j_243_ = v_n_248_;
goto _start;
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_box(0);
v___x_255_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_a_244_, v___x_249_, v___x_254_);
v_j_243_ = v_n_248_;
v_a_244_ = v___x_255_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg___boxed(lean_object* v_fvars_257_, lean_object* v___x_258_, lean_object* v_n_259_, lean_object* v_j_260_, lean_object* v_a_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_257_, v___x_258_, v_n_259_, v_j_260_, v_a_261_);
lean_dec(v_n_259_);
lean_dec(v___x_258_);
lean_dec_ref(v_fvars_257_);
return v_res_262_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_265_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0));
v___x_266_ = lean_box(1);
v___x_267_ = l_Lean_CollectFVars_State_ofFVarSet(v___x_266_, v___x_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(lean_object* v_body_268_, lean_object* v_fvars_269_, lean_object* v_info_270_, lean_object* v_bodyDeps_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
lean_object* v___x_277_; 
lean_inc(v___y_275_);
lean_inc_ref(v___y_274_);
lean_inc(v___y_273_);
lean_inc_ref(v___y_272_);
lean_inc_ref(v_body_268_);
v___x_277_ = lean_infer_type(v_body_268_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; lean_object* v___x_279_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc_n(v_a_278_, 2);
lean_dec_ref_known(v___x_277_, 1);
v___x_279_ = l_Lean_Meta_getLevel(v_a_278_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_306_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_306_ == 0)
{
v___x_282_ = v___x_279_;
v_isShared_283_ = v_isSharedCheck_306_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_279_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_306_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_fvarSet_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v_haveInfo_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_300_; 
v___x_284_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
lean_inc(v_a_278_);
v___x_285_ = l_Lean_collectFVars(v___x_284_, v_a_278_);
v_fvarSet_286_ = lean_ctor_get(v___x_285_, 1);
lean_inc(v_fvarSet_286_);
lean_dec_ref(v___x_285_);
v___x_287_ = lean_array_get_size(v_fvars_269_);
v___x_288_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveInfo_default___closed__1, &l_Lean_Meta_instInhabitedHaveInfo_default___closed__1_once, _init_l_Lean_Meta_instInhabitedHaveInfo_default___closed__1);
v___x_289_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_269_, v_fvarSet_286_, v___x_287_, v___x_287_, v___x_288_);
lean_dec(v_fvarSet_286_);
v_haveInfo_290_ = lean_ctor_get(v_info_270_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v_info_270_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; lean_object* v_unused_302_; lean_object* v_unused_303_; lean_object* v_unused_304_; lean_object* v_unused_305_; 
v_unused_301_ = lean_ctor_get(v_info_270_, 5);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v_info_270_, 4);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_info_270_, 3);
lean_dec(v_unused_303_);
v_unused_304_ = lean_ctor_get(v_info_270_, 2);
lean_dec(v_unused_304_);
v_unused_305_ = lean_ctor_get(v_info_270_, 1);
lean_dec(v_unused_305_);
v___x_292_ = v_info_270_;
v_isShared_293_ = v_isSharedCheck_300_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_haveInfo_290_);
lean_dec(v_info_270_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_300_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 5, v_a_280_);
lean_ctor_set(v___x_292_, 4, v_a_278_);
lean_ctor_set(v___x_292_, 3, v_body_268_);
lean_ctor_set(v___x_292_, 2, v___x_289_);
lean_ctor_set(v___x_292_, 1, v_bodyDeps_271_);
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_haveInfo_290_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_bodyDeps_271_);
lean_ctor_set(v_reuseFailAlloc_299_, 2, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_299_, 3, v_body_268_);
lean_ctor_set(v_reuseFailAlloc_299_, 4, v_a_278_);
lean_ctor_set(v_reuseFailAlloc_299_, 5, v_a_280_);
v___x_295_ = v_reuseFailAlloc_299_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_297_; 
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_295_);
v___x_297_ = v___x_282_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
else
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
lean_dec(v_a_278_);
lean_dec_ref(v_bodyDeps_271_);
lean_dec_ref(v_info_270_);
lean_dec_ref(v_body_268_);
v_a_307_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_314_ == 0)
{
v___x_309_ = v___x_279_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_279_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec_ref(v_bodyDeps_271_);
lean_dec_ref(v_info_270_);
lean_dec_ref(v_body_268_);
v_a_315_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_277_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_277_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed(lean_object* v_body_323_, lean_object* v_fvars_324_, lean_object* v_info_325_, lean_object* v_bodyDeps_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1(v_body_323_, v_fvars_324_, v_info_325_, v_bodyDeps_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_);
lean_dec_ref(v_fvars_324_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(lean_object* v___y_333_){
_start:
{
lean_object* v___x_335_; lean_object* v_ngen_336_; lean_object* v_namePrefix_337_; lean_object* v_idx_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_368_; 
v___x_335_ = lean_st_ref_get(v___y_333_);
v_ngen_336_ = lean_ctor_get(v___x_335_, 2);
lean_inc_ref(v_ngen_336_);
lean_dec(v___x_335_);
v_namePrefix_337_ = lean_ctor_get(v_ngen_336_, 0);
v_idx_338_ = lean_ctor_get(v_ngen_336_, 1);
v_isSharedCheck_368_ = !lean_is_exclusive(v_ngen_336_);
if (v_isSharedCheck_368_ == 0)
{
v___x_340_ = v_ngen_336_;
v_isShared_341_ = v_isSharedCheck_368_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_idx_338_);
lean_inc(v_namePrefix_337_);
lean_dec(v_ngen_336_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_368_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v_r_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_346_; 
lean_inc(v_idx_338_);
lean_inc(v_namePrefix_337_);
v_r_342_ = l_Lean_Name_num___override(v_namePrefix_337_, v_idx_338_);
v___x_343_ = lean_unsigned_to_nat(1u);
v___x_344_ = lean_nat_add(v_idx_338_, v___x_343_);
lean_dec(v_idx_338_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 1, v___x_344_);
v___x_346_ = v___x_340_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_namePrefix_337_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_344_);
v___x_346_ = v_reuseFailAlloc_367_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_347_; lean_object* v_env_348_; lean_object* v_nextMacroScope_349_; lean_object* v_auxDeclNGen_350_; lean_object* v_traceState_351_; lean_object* v_cache_352_; lean_object* v_recordedDeps_353_; lean_object* v_messages_354_; lean_object* v_infoState_355_; lean_object* v_snapshotTasks_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_365_; 
v___x_347_ = lean_st_ref_take(v___y_333_);
v_env_348_ = lean_ctor_get(v___x_347_, 0);
v_nextMacroScope_349_ = lean_ctor_get(v___x_347_, 1);
v_auxDeclNGen_350_ = lean_ctor_get(v___x_347_, 3);
v_traceState_351_ = lean_ctor_get(v___x_347_, 4);
v_cache_352_ = lean_ctor_get(v___x_347_, 5);
v_recordedDeps_353_ = lean_ctor_get(v___x_347_, 6);
v_messages_354_ = lean_ctor_get(v___x_347_, 7);
v_infoState_355_ = lean_ctor_get(v___x_347_, 8);
v_snapshotTasks_356_ = lean_ctor_get(v___x_347_, 9);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_365_ == 0)
{
lean_object* v_unused_366_; 
v_unused_366_ = lean_ctor_get(v___x_347_, 2);
lean_dec(v_unused_366_);
v___x_358_ = v___x_347_;
v_isShared_359_ = v_isSharedCheck_365_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_snapshotTasks_356_);
lean_inc(v_infoState_355_);
lean_inc(v_messages_354_);
lean_inc(v_recordedDeps_353_);
lean_inc(v_cache_352_);
lean_inc(v_traceState_351_);
lean_inc(v_auxDeclNGen_350_);
lean_inc(v_nextMacroScope_349_);
lean_inc(v_env_348_);
lean_dec(v___x_347_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_365_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 2, v___x_346_);
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_env_348_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_nextMacroScope_349_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_364_, 3, v_auxDeclNGen_350_);
lean_ctor_set(v_reuseFailAlloc_364_, 4, v_traceState_351_);
lean_ctor_set(v_reuseFailAlloc_364_, 5, v_cache_352_);
lean_ctor_set(v_reuseFailAlloc_364_, 6, v_recordedDeps_353_);
lean_ctor_set(v_reuseFailAlloc_364_, 7, v_messages_354_);
lean_ctor_set(v_reuseFailAlloc_364_, 8, v_infoState_355_);
lean_ctor_set(v_reuseFailAlloc_364_, 9, v_snapshotTasks_356_);
v___x_361_ = v_reuseFailAlloc_364_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_st_ref_put(v___y_333_, v___x_361_);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v_r_342_);
return v___x_363_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg___boxed(lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_369_);
lean_dec(v___y_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
v___x_377_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_375_);
v_a_378_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_377_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_377_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6___boxed(lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(lean_object* v_e_392_, lean_object* v_numHaves_393_, lean_object* v_info_394_, lean_object* v_lctx_395_, lean_object* v_fvars_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; 
if (lean_obj_tag(v_e_392_) == 8)
{
uint8_t v_nondep_411_; 
v_nondep_411_ = lean_ctor_get_uint8(v_e_392_, sizeof(void*)*4 + 8);
if (v_nondep_411_ == 1)
{
lean_object* v_declName_412_; lean_object* v_type_413_; lean_object* v_value_414_; lean_object* v_body_415_; lean_object* v_typeBackDeps_416_; lean_object* v_valueBackDeps_417_; lean_object* v_t_418_; lean_object* v_v_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v_declName_412_ = lean_ctor_get(v_e_392_, 0);
lean_inc(v_declName_412_);
v_type_413_ = lean_ctor_get(v_e_392_, 1);
lean_inc_ref_n(v_type_413_, 2);
v_value_414_ = lean_ctor_get(v_e_392_, 2);
lean_inc_ref_n(v_value_414_, 2);
v_body_415_ = lean_ctor_get(v_e_392_, 3);
lean_inc_ref(v_body_415_);
lean_dec_ref_known(v_e_392_, 4);
v_typeBackDeps_416_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_393_, v_type_413_);
v_valueBackDeps_417_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_393_, v_value_414_);
v_t_418_ = lean_expr_instantiate_rev(v_type_413_, v_fvars_396_);
lean_dec_ref(v_type_413_);
v_v_419_ = lean_expr_instantiate_rev(v_value_414_, v_fvars_396_);
lean_dec_ref(v_value_414_);
lean_inc_ref(v_t_418_);
v___x_420_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_420_, 0, v_t_418_);
lean_inc_ref(v_lctx_395_);
v___x_421_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_395_, v___x_420_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_423_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v___x_421_, 1);
v___x_423_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6(v_a_397_, v_a_398_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v_haveInfo_425_; lean_object* v_bodyDeps_426_; lean_object* v_bodyTypeDeps_427_; lean_object* v_body_428_; lean_object* v_bodyType_429_; lean_object* v_level_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_448_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_423_, 1);
v_haveInfo_425_ = lean_ctor_get(v_info_394_, 0);
v_bodyDeps_426_ = lean_ctor_get(v_info_394_, 1);
v_bodyTypeDeps_427_ = lean_ctor_get(v_info_394_, 2);
v_body_428_ = lean_ctor_get(v_info_394_, 3);
v_bodyType_429_ = lean_ctor_get(v_info_394_, 4);
v_level_430_ = lean_ctor_get(v_info_394_, 5);
v_isSharedCheck_448_ = !lean_is_exclusive(v_info_394_);
if (v_isSharedCheck_448_ == 0)
{
v___x_432_ = v_info_394_;
v_isShared_433_ = v_isSharedCheck_448_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_level_430_);
lean_inc(v_bodyType_429_);
lean_inc(v_body_428_);
lean_inc(v_bodyTypeDeps_427_);
lean_inc(v_bodyDeps_426_);
lean_inc(v_haveInfo_425_);
lean_dec(v_info_394_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_448_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; uint8_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_440_; 
v___x_434_ = lean_unsigned_to_nat(0u);
v___x_435_ = 0;
lean_inc(v_a_424_);
v___x_436_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v___x_436_, 0, v___x_434_);
lean_ctor_set(v___x_436_, 1, v_a_424_);
lean_ctor_set(v___x_436_, 2, v_declName_412_);
lean_ctor_set(v___x_436_, 3, v_t_418_);
lean_ctor_set(v___x_436_, 4, v_v_419_);
lean_ctor_set_uint8(v___x_436_, sizeof(void*)*5, v_nondep_411_);
lean_ctor_set_uint8(v___x_436_, sizeof(void*)*5 + 1, v___x_435_);
lean_inc_ref(v___x_436_);
v___x_437_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_437_, 0, v_typeBackDeps_416_);
lean_ctor_set(v___x_437_, 1, v_valueBackDeps_417_);
lean_ctor_set(v___x_437_, 2, v___x_436_);
lean_ctor_set(v___x_437_, 3, v_a_422_);
v___x_438_ = lean_array_push(v_haveInfo_425_, v___x_437_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_438_);
v___x_440_ = v___x_432_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v_bodyDeps_426_);
lean_ctor_set(v_reuseFailAlloc_447_, 2, v_bodyTypeDeps_427_);
lean_ctor_set(v_reuseFailAlloc_447_, 3, v_body_428_);
lean_ctor_set(v_reuseFailAlloc_447_, 4, v_bodyType_429_);
lean_ctor_set(v_reuseFailAlloc_447_, 5, v_level_430_);
v___x_440_ = v_reuseFailAlloc_447_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_441_ = l_Lean_LocalContext_addDecl(v_lctx_395_, v___x_436_);
v___x_442_ = l_Lean_mkFVar(v_a_424_);
v___x_443_ = lean_array_push(v_fvars_396_, v___x_442_);
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = lean_nat_add(v_numHaves_393_, v___x_444_);
lean_dec(v_numHaves_393_);
v_e_392_ = v_body_415_;
v_numHaves_393_ = v___x_445_;
v_info_394_ = v___x_440_;
v_lctx_395_ = v___x_441_;
v_fvars_396_ = v___x_443_;
goto _start;
}
}
}
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
lean_dec(v_a_422_);
lean_dec_ref(v_v_419_);
lean_dec_ref(v_t_418_);
lean_dec_ref(v_valueBackDeps_417_);
lean_dec_ref(v_typeBackDeps_416_);
lean_dec_ref(v_body_415_);
lean_dec(v_declName_412_);
lean_dec_ref(v_fvars_396_);
lean_dec_ref(v_lctx_395_);
lean_dec_ref(v_info_394_);
lean_dec(v_numHaves_393_);
v_a_449_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_423_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_423_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v_v_419_);
lean_dec_ref(v_t_418_);
lean_dec_ref(v_valueBackDeps_417_);
lean_dec_ref(v_typeBackDeps_416_);
lean_dec_ref(v_body_415_);
lean_dec(v_declName_412_);
lean_dec_ref(v_fvars_396_);
lean_dec_ref(v_lctx_395_);
lean_dec_ref(v_info_394_);
lean_dec(v_numHaves_393_);
v_a_457_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_421_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_421_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
v___y_403_ = v_a_397_;
v___y_404_ = v_a_398_;
v___y_405_ = v_a_399_;
v___y_406_ = v_a_400_;
goto v___jp_402_;
}
}
else
{
v___y_403_ = v_a_397_;
v___y_404_ = v_a_398_;
v___y_405_ = v_a_399_;
v___y_406_ = v_a_400_;
goto v___jp_402_;
}
v___jp_402_:
{
lean_object* v_bodyDeps_407_; lean_object* v_body_408_; lean_object* v___f_409_; lean_object* v___x_410_; 
lean_inc_ref(v_e_392_);
v_bodyDeps_407_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__0(v_numHaves_393_, v_e_392_);
lean_dec(v_numHaves_393_);
v_body_408_ = lean_expr_instantiate_rev(v_e_392_, v_fvars_396_);
lean_dec_ref(v_e_392_);
v___f_409_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___boxed), 9, 4);
lean_closure_set(v___f_409_, 0, v_body_408_);
lean_closure_set(v___f_409_, 1, v_fvars_396_);
lean_closure_set(v___f_409_, 2, v_info_394_);
lean_closure_set(v___f_409_, 3, v_bodyDeps_407_);
v___x_410_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__5___redArg(v_lctx_395_, v___f_409_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___boxed(lean_object* v_e_465_, lean_object* v_numHaves_466_, lean_object* v_info_467_, lean_object* v_lctx_468_, lean_object* v_fvars_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_465_, v_numHaves_466_, v_info_467_, v_lctx_468_, v_fvars_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_);
lean_dec(v_a_473_);
lean_dec_ref(v_a_472_);
lean_dec(v_a_471_);
lean_dec_ref(v_a_470_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0(lean_object* v_00_u03b2_476_, lean_object* v_m_477_, lean_object* v_a_478_, lean_object* v_b_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0___redArg(v_m_477_, v_a_478_, v_b_479_);
return v___x_480_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(lean_object* v_00_u03b2_481_, lean_object* v_k_482_, lean_object* v_t_483_){
_start:
{
uint8_t v___x_484_; 
v___x_484_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v_k_482_, v_t_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___boxed(lean_object* v_00_u03b2_485_, lean_object* v_k_486_, lean_object* v_t_487_){
_start:
{
uint8_t v_res_488_; lean_object* v_r_489_; 
v_res_488_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3(v_00_u03b2_485_, v_k_486_, v_t_487_);
lean_dec(v_t_487_);
lean_dec(v_k_486_);
v_r_489_ = lean_box(v_res_488_);
return v_r_489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(lean_object* v_fvars_490_, lean_object* v___x_491_, lean_object* v_n_492_, lean_object* v_j_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___redArg(v_fvars_490_, v___x_491_, v_n_492_, v_j_493_, v_a_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4___boxed(lean_object* v_fvars_497_, lean_object* v___x_498_, lean_object* v_n_499_, lean_object* v_j_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__4(v_fvars_497_, v___x_498_, v_n_499_, v_j_500_, v_a_501_, v_a_502_);
lean_dec(v_n_499_);
lean_dec(v___x_498_);
lean_dec_ref(v_fvars_497_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___redArg(v___y_507_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8___boxed(lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__6_spec__8(v___y_510_, v___y_511_, v___y_512_, v___y_513_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
return v_res_515_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(lean_object* v_00_u03b2_516_, lean_object* v_a_517_, lean_object* v_x_518_){
_start:
{
uint8_t v___x_519_; 
v___x_519_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___redArg(v_a_517_, v_x_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0___boxed(lean_object* v_00_u03b2_520_, lean_object* v_a_521_, lean_object* v_x_522_){
_start:
{
uint8_t v_res_523_; lean_object* v_r_524_; 
v_res_523_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__0(v_00_u03b2_520_, v_a_521_, v_x_522_);
lean_dec(v_x_522_);
lean_dec(v_a_521_);
v_r_524_ = lean_box(v_res_523_);
return v_r_524_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1(lean_object* v_00_u03b2_525_, lean_object* v_data_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1___redArg(v_data_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_528_, lean_object* v_i_529_, lean_object* v_source_530_, lean_object* v_target_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3___redArg(v_i_529_, v_source_530_, v_target_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10(lean_object* v_00_u03b2_533_, lean_object* v_x_534_, lean_object* v_x_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__0_spec__1_spec__3_spec__10___redArg(v_x_534_, v_x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo(lean_object* v_e_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_lctx_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_lctx_543_ = lean_ctor_get(v_a_538_, 2);
v___x_544_ = lean_unsigned_to_nat(0u);
v___x_545_ = ((lean_object*)(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__0));
v___x_546_ = lean_obj_once(&l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5, &l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5_once, _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default___closed__5);
lean_inc_ref(v_lctx_543_);
v___x_547_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect(v_e_537_, v___x_544_, v___x_546_, v_lctx_543_, v___x_545_, v_a_538_, v_a_539_, v_a_540_, v_a_541_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getHaveTelescopeInfo___boxed(lean_object* v_e_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Lean_Meta_getHaveTelescopeInfo(v_e_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_);
lean_dec(v_a_552_);
lean_dec_ref(v_a_551_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
if (lean_obj_tag(v_x_556_) == 0)
{
return v_x_555_;
}
else
{
lean_object* v_key_557_; lean_object* v_tail_558_; uint8_t v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_key_557_ = lean_ctor_get(v_x_556_, 0);
v_tail_558_ = lean_ctor_get(v_x_556_, 2);
v___x_559_ = 1;
v___x_560_ = lean_box(v___x_559_);
v___x_561_ = lean_array_set(v_x_555_, v_key_557_, v___x_560_);
v_x_555_ = v___x_561_;
v_x_556_ = v_tail_558_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0___boxed(lean_object* v_x_563_, lean_object* v_x_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_x_563_, v_x_564_);
lean_dec(v_x_564_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(lean_object* v_as_566_, size_t v_i_567_, size_t v_stop_568_, lean_object* v_b_569_){
_start:
{
uint8_t v___x_570_; 
v___x_570_ = lean_usize_dec_eq(v_i_567_, v_stop_568_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; lean_object* v___x_572_; size_t v___x_573_; size_t v___x_574_; 
v___x_571_ = lean_array_uget_borrowed(v_as_566_, v_i_567_);
v___x_572_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__0(v_b_569_, v___x_571_);
v___x_573_ = ((size_t)1ULL);
v___x_574_ = lean_usize_add(v_i_567_, v___x_573_);
v_i_567_ = v___x_574_;
v_b_569_ = v___x_572_;
goto _start;
}
else
{
return v_b_569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1___boxed(lean_object* v_as_576_, lean_object* v_i_577_, lean_object* v_stop_578_, lean_object* v_b_579_){
_start:
{
size_t v_i_boxed_580_; size_t v_stop_boxed_581_; lean_object* v_res_582_; 
v_i_boxed_580_ = lean_unbox_usize(v_i_577_);
lean_dec(v_i_577_);
v_stop_boxed_581_ = lean_unbox_usize(v_stop_578_);
lean_dec(v_stop_578_);
v_res_582_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_as_576_, v_i_boxed_580_, v_stop_boxed_581_, v_b_579_);
lean_dec_ref(v_as_576_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(lean_object* v_arr_583_, lean_object* v_s_584_){
_start:
{
lean_object* v_buckets_585_; lean_object* v___x_586_; lean_object* v___x_587_; uint8_t v___x_588_; 
v_buckets_585_ = lean_ctor_get(v_s_584_, 1);
v___x_586_ = lean_unsigned_to_nat(0u);
v___x_587_ = lean_array_get_size(v_buckets_585_);
v___x_588_ = lean_nat_dec_lt(v___x_586_, v___x_587_);
if (v___x_588_ == 0)
{
return v_arr_583_;
}
else
{
size_t v___x_589_; size_t v___x_590_; lean_object* v___x_591_; 
v___x_589_ = ((size_t)0ULL);
v___x_590_ = lean_usize_of_nat(v___x_587_);
v___x_591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps_spec__1(v_buckets_585_, v___x_589_, v___x_590_, v_arr_583_);
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps___boxed(lean_object* v_arr_592_, lean_object* v_s_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_arr_592_, v_s_593_);
lean_dec_ref(v_s_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(lean_object* v_upperBound_595_, lean_object* v_numHaves_596_, lean_object* v___x_597_, lean_object* v_a_598_, lean_object* v_b_599_){
_start:
{
lean_object* v_a_602_; uint8_t v___x_606_; 
v___x_606_ = lean_nat_dec_lt(v_a_598_, v_upperBound_595_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
lean_dec(v_a_598_);
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v_b_599_);
return v___x_607_;
}
else
{
uint8_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_608_ = 0;
v___x_609_ = lean_nat_sub(v_numHaves_596_, v_a_598_);
v___x_610_ = lean_unsigned_to_nat(1u);
v___x_611_ = lean_nat_sub(v___x_609_, v___x_610_);
lean_dec(v___x_609_);
v___x_612_ = lean_box(v___x_608_);
v___x_613_ = lean_array_get(v___x_612_, v_b_599_, v___x_611_);
lean_dec(v___x_612_);
v___x_614_ = lean_unbox(v___x_613_);
lean_dec(v___x_613_);
if (v___x_614_ == 0)
{
lean_dec(v___x_611_);
v_a_602_ = v_b_599_;
goto v___jp_601_;
}
else
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v_typeBackDeps_617_; lean_object* v_valueBackDeps_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_615_ = l_Lean_Meta_instInhabitedHaveInfo_default;
v___x_616_ = lean_array_get_borrowed(v___x_615_, v___x_597_, v___x_611_);
lean_dec(v___x_611_);
v_typeBackDeps_617_ = lean_ctor_get(v___x_616_, 0);
v_valueBackDeps_618_ = lean_ctor_get(v___x_616_, 1);
v___x_619_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_b_599_, v_typeBackDeps_617_);
v___x_620_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v___x_619_, v_valueBackDeps_618_);
v_a_602_ = v___x_620_;
goto v___jp_601_;
}
}
v___jp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = lean_nat_add(v_a_598_, v___x_603_);
lean_dec(v_a_598_);
v_a_598_ = v___x_604_;
v_b_599_ = v_a_602_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg___boxed(lean_object* v_upperBound_621_, lean_object* v_numHaves_622_, lean_object* v___x_623_, lean_object* v_a_624_, lean_object* v_b_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_621_, v_numHaves_622_, v___x_623_, v_a_624_, v_b_625_);
lean_dec_ref(v___x_623_);
lean_dec(v_numHaves_622_);
lean_dec(v_upperBound_621_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(lean_object* v_info_628_, lean_object* v_init_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_haveInfo_635_; lean_object* v_numHaves_636_; uint8_t v___x_637_; lean_object* v___x_638_; lean_object* v_used_639_; lean_object* v___x_640_; lean_object* v_used_641_; lean_object* v___x_642_; 
v_haveInfo_635_ = lean_ctor_get(v_info_628_, 0);
v_numHaves_636_ = lean_array_get_size(v_haveInfo_635_);
v___x_637_ = 0;
v___x_638_ = lean_box(v___x_637_);
v_used_639_ = lean_mk_array(v_numHaves_636_, v___x_638_);
v___x_640_ = lean_unsigned_to_nat(0u);
v_used_641_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_updateArrayFromBackDeps(v_used_639_, v_init_629_);
v___x_642_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_numHaves_636_, v_numHaves_636_, v_haveInfo_635_, v___x_640_, v_used_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go___boxed(lean_object* v_info_643_, lean_object* v_init_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_643_, v_init_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec_ref(v_init_644_);
lean_dec_ref(v_info_643_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(lean_object* v_upperBound_651_, lean_object* v_numHaves_652_, lean_object* v___x_653_, lean_object* v_inst_654_, lean_object* v_R_655_, lean_object* v_a_656_, lean_object* v_b_657_, lean_object* v_c_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___redArg(v_upperBound_651_, v_numHaves_652_, v___x_653_, v_a_656_, v_b_657_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0___boxed(lean_object* v_upperBound_665_, lean_object* v_numHaves_666_, lean_object* v___x_667_, lean_object* v_inst_668_, lean_object* v_R_669_, lean_object* v_a_670_, lean_object* v_b_671_, lean_object* v_c_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go_spec__0(v_upperBound_665_, v_numHaves_666_, v___x_667_, v_inst_668_, v_R_669_, v_a_670_, v_b_671_, v_c_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec_ref(v___x_667_);
lean_dec(v_numHaves_666_);
lean_dec(v_upperBound_665_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(lean_object* v_info_681_, uint8_t v_keepUnused_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_){
_start:
{
lean_object* v_bodyDeps_688_; lean_object* v_bodyTypeDeps_689_; lean_object* v___x_690_; 
v_bodyDeps_688_ = lean_ctor_get(v_info_681_, 1);
v_bodyTypeDeps_689_ = lean_ctor_get(v_info_681_, 2);
v___x_690_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_681_, v_bodyTypeDeps_689_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
if (lean_obj_tag(v___x_690_) == 0)
{
if (v_keepUnused_682_ == 0)
{
lean_object* v_a_691_; lean_object* v___x_692_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
v___x_692_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_HaveTelescopeInfo_computeFixedUsed_go(v_info_681_, v_bodyDeps_688_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_701_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_701_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_701_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_701_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_697_, 0, v_a_691_);
lean_ctor_set(v___x_697_, 1, v_a_693_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v___x_697_);
v___x_699_ = v___x_695_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v___x_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
else
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
lean_dec(v_a_691_);
v_a_702_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_692_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_692_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_719_; 
v_a_710_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_719_ == 0)
{
v___x_712_ = v___x_690_;
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_690_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_717_; 
v___x_714_ = ((lean_object*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___closed__0));
v___x_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_715_, 0, v_a_710_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 0, v___x_715_);
v___x_717_ = v___x_712_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_715_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
v_a_720_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_690_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_690_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed(lean_object* v_info_728_, lean_object* v_keepUnused_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_){
_start:
{
uint8_t v_keepUnused_boxed_735_; lean_object* v_res_736_; 
v_keepUnused_boxed_735_ = lean_unbox(v_keepUnused_729_);
v_res_736_ = l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed(v_info_728_, v_keepUnused_boxed_735_, v_a_730_, v_a_731_, v_a_732_, v_a_733_);
lean_dec(v_a_733_);
lean_dec_ref(v_a_732_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
lean_dec_ref(v_info_728_);
return v_res_736_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2(void){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_740_ = lean_box(0);
v___x_741_ = ((lean_object*)(l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__1));
v___x_742_ = l_Lean_Expr_const___override(v___x_741_, v___x_740_);
return v___x_742_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3(void){
_start:
{
uint8_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_743_ = 0;
v___x_744_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2, &l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2_once, _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__2);
v___x_745_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_745_, 0, v___x_744_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
lean_ctor_set(v___x_745_, 2, v___x_744_);
lean_ctor_set(v___x_745_, 3, v___x_744_);
lean_ctor_set(v___x_745_, 4, v___x_744_);
lean_ctor_set_uint8(v___x_745_, sizeof(void*)*5, v___x_743_);
return v___x_745_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpHaveResult_default(void){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = lean_obj_once(&l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3, &l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3_once, _init_l_Lean_Meta_instInhabitedSimpHaveResult_default___closed__3);
return v___x_746_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l_Lean_Meta_instInhabitedSimpHaveResult_default;
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(lean_object* v_level_764_, lean_object* v_exprType_765_, lean_object* v_e_766_, uint8_t v___x_767_, lean_object* v_toPure_768_, lean_object* v_xs_769_, lean_object* v_____do__lift_770_){
_start:
{
if (lean_obj_tag(v_____do__lift_770_) == 0)
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v_proof_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_771_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_772_ = lean_box(0);
v___x_773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_773_, 0, v_level_764_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v___x_774_ = l_Lean_mkConst(v___x_771_, v___x_773_);
lean_inc_ref_n(v_e_766_, 3);
lean_inc_ref(v_exprType_765_);
v_proof_775_ = l_Lean_mkAppB(v___x_774_, v_exprType_765_, v_e_766_);
v___x_776_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_776_, 0, v_e_766_);
lean_ctor_set(v___x_776_, 1, v_exprType_765_);
lean_ctor_set(v___x_776_, 2, v_e_766_);
lean_ctor_set(v___x_776_, 3, v_e_766_);
lean_ctor_set(v___x_776_, 4, v_proof_775_);
lean_ctor_set_uint8(v___x_776_, sizeof(void*)*5, v___x_767_);
v___x_777_ = lean_apply_2(v_toPure_768_, lean_box(0), v___x_776_);
return v___x_777_;
}
else
{
lean_object* v_e_778_; lean_object* v_h_779_; lean_object* v_expr_780_; lean_object* v_proof_781_; lean_object* v___x_786_; uint8_t v___x_787_; 
lean_dec(v_level_764_);
v_e_778_ = lean_ctor_get(v_____do__lift_770_, 0);
v_h_779_ = lean_ctor_get(v_____do__lift_770_, 1);
v_expr_780_ = lean_expr_abstract(v_e_778_, v_xs_769_);
v_proof_781_ = lean_expr_abstract(v_h_779_, v_xs_769_);
v___x_786_ = l_Lean_Expr_cleanupAnnotations(v_proof_781_);
v___x_787_ = l_Lean_Expr_isApp(v___x_786_);
if (v___x_787_ == 0)
{
lean_dec_ref(v___x_786_);
goto v___jp_782_;
}
else
{
lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_788_ = l_Lean_Expr_appFnCleanup___redArg(v___x_786_);
v___x_789_ = l_Lean_Expr_isApp(v___x_788_);
if (v___x_789_ == 0)
{
lean_dec_ref(v___x_788_);
lean_dec_ref(v___x_786_);
goto v___jp_782_;
}
else
{
lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_790_ = l_Lean_Expr_appFnCleanup___redArg(v___x_788_);
v___x_791_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__4));
v___x_792_ = l_Lean_Expr_isConstOf(v___x_790_, v___x_791_);
lean_dec_ref(v___x_790_);
if (v___x_792_ == 0)
{
lean_dec_ref(v___x_788_);
lean_dec_ref(v___x_786_);
goto v___jp_782_;
}
else
{
lean_object* v_arg_793_; lean_object* v___x_794_; lean_object* v___x_795_; uint8_t v___x_796_; 
v_arg_793_ = lean_ctor_get(v___x_788_, 1);
lean_inc_ref(v_arg_793_);
lean_dec_ref(v___x_788_);
v___x_794_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_795_ = lean_unsigned_to_nat(3u);
v___x_796_ = l_Lean_Expr_isAppOfArity(v_arg_793_, v___x_794_, v___x_795_);
lean_dec_ref(v_arg_793_);
if (v___x_796_ == 0)
{
lean_dec_ref(v___x_786_);
goto v___jp_782_;
}
else
{
lean_object* v_arg_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v_arg_797_ = lean_ctor_get(v___x_786_, 1);
lean_inc_ref(v_arg_797_);
lean_dec_ref(v___x_786_);
v___x_798_ = l_Lean_Expr_cleanupAnnotations(v_arg_797_);
lean_dec_ref(v_arg_797_);
v___x_799_ = l_Lean_Expr_isApp(v___x_798_);
if (v___x_799_ == 0)
{
lean_dec_ref(v___x_798_);
goto v___jp_782_;
}
else
{
lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_800_ = l_Lean_Expr_appFnCleanup___redArg(v___x_798_);
v___x_801_ = l_Lean_Expr_isApp(v___x_800_);
if (v___x_801_ == 0)
{
lean_dec_ref(v___x_800_);
lean_dec_ref(v___x_798_);
goto v___jp_782_;
}
else
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = l_Lean_Expr_appFnCleanup___redArg(v___x_800_);
v___x_803_ = l_Lean_Expr_isConstOf(v___x_802_, v___x_791_);
lean_dec_ref(v___x_802_);
if (v___x_803_ == 0)
{
lean_dec_ref(v___x_800_);
lean_dec_ref(v___x_798_);
goto v___jp_782_;
}
else
{
lean_object* v_arg_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v_arg_804_ = lean_ctor_get(v___x_800_, 1);
lean_inc_ref(v_arg_804_);
lean_dec_ref(v___x_800_);
v___x_805_ = l_Lean_Expr_cleanupAnnotations(v_arg_804_);
lean_dec_ref(v_arg_804_);
v___x_806_ = l_Lean_Expr_isApp(v___x_805_);
if (v___x_806_ == 0)
{
lean_dec_ref(v___x_805_);
lean_dec_ref(v___x_798_);
goto v___jp_782_;
}
else
{
lean_object* v___x_807_; uint8_t v___x_808_; 
v___x_807_ = l_Lean_Expr_appFnCleanup___redArg(v___x_805_);
v___x_808_ = l_Lean_Expr_isApp(v___x_807_);
if (v___x_808_ == 0)
{
lean_dec_ref(v___x_807_);
lean_dec_ref(v___x_805_);
lean_dec_ref(v___x_798_);
goto v___jp_782_;
}
else
{
lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_809_ = l_Lean_Expr_appFnCleanup___redArg(v___x_807_);
v___x_810_ = l_Lean_Expr_isApp(v___x_809_);
if (v___x_810_ == 0)
{
lean_dec_ref(v___x_809_);
lean_dec_ref(v___x_807_);
lean_dec_ref(v___x_805_);
lean_dec_ref(v___x_798_);
goto v___jp_782_;
}
else
{
lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_811_ = l_Lean_Expr_appFnCleanup___redArg(v___x_809_);
lean_dec_ref(v___x_809_);
v___x_812_ = l_Lean_Expr_isConstOf(v___x_811_, v___x_794_);
lean_dec_ref(v___x_811_);
if (v___x_812_ == 0)
{
lean_dec_ref(v___x_807_);
lean_dec_ref(v___x_805_);
lean_dec_ref(v___x_798_);
goto v___jp_782_;
}
else
{
lean_object* v_arg_813_; lean_object* v___x_814_; 
v_arg_813_ = lean_ctor_get(v___x_798_, 1);
lean_inc_ref(v_arg_813_);
lean_dec_ref(v___x_798_);
v___x_814_ = l_Lean_Expr_getAppFn(v_arg_813_);
if (lean_obj_tag(v___x_814_) == 4)
{
lean_object* v_declName_815_; 
v_declName_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_declName_815_);
lean_dec_ref_known(v___x_814_, 2);
if (lean_obj_tag(v_declName_815_) == 1)
{
lean_object* v_pre_816_; 
v_pre_816_ = lean_ctor_get(v_declName_815_, 0);
if (lean_obj_tag(v_pre_816_) == 0)
{
lean_object* v_str_817_; lean_object* v_arg_818_; lean_object* v_arg_819_; lean_object* v___x_823_; uint8_t v___x_824_; 
v_str_817_ = lean_ctor_get(v_declName_815_, 1);
lean_inc_ref(v_str_817_);
lean_dec_ref_known(v_declName_815_, 2);
v_arg_818_ = lean_ctor_get(v___x_805_, 1);
lean_inc_ref(v_arg_818_);
lean_dec_ref(v___x_805_);
v_arg_819_ = lean_ctor_get(v___x_807_, 1);
lean_inc_ref(v_arg_819_);
lean_dec_ref(v___x_807_);
v___x_823_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__6));
v___x_824_ = lean_string_dec_eq(v_str_817_, v___x_823_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__7));
v___x_826_ = lean_string_dec_eq(v_str_817_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__8));
v___x_828_ = lean_string_dec_eq(v_str_817_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; uint8_t v___x_830_; 
v___x_829_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__9));
v___x_830_ = lean_string_dec_eq(v_str_817_, v___x_829_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_831_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__10));
v___x_832_ = lean_string_dec_eq(v_str_817_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_833_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__11));
v___x_834_ = lean_string_dec_eq(v_str_817_, v___x_833_);
lean_dec_ref(v_str_817_);
if (v___x_834_ == 0)
{
lean_dec_ref(v_arg_819_);
lean_dec_ref(v_arg_818_);
lean_dec_ref(v_arg_813_);
goto v___jp_782_;
}
else
{
lean_dec_ref(v_proof_781_);
lean_dec_ref(v_e_766_);
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_817_);
lean_dec_ref(v_proof_781_);
lean_dec_ref(v_e_766_);
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_817_);
lean_dec_ref(v_proof_781_);
lean_dec_ref(v_e_766_);
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_817_);
lean_dec_ref(v_proof_781_);
lean_dec_ref(v_e_766_);
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_817_);
lean_dec_ref(v_proof_781_);
lean_dec_ref(v_e_766_);
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_str_817_);
lean_dec_ref(v_proof_781_);
lean_dec_ref(v_e_766_);
goto v___jp_820_;
}
v___jp_820_:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_821_, 0, v_arg_818_);
lean_ctor_set(v___x_821_, 1, v_exprType_765_);
lean_ctor_set(v___x_821_, 2, v_arg_819_);
lean_ctor_set(v___x_821_, 3, v_expr_780_);
lean_ctor_set(v___x_821_, 4, v_arg_813_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*5, v___x_792_);
v___x_822_ = lean_apply_2(v_toPure_768_, lean_box(0), v___x_821_);
return v___x_822_;
}
}
else
{
lean_dec_ref_known(v_declName_815_, 2);
lean_dec_ref(v_arg_813_);
lean_dec_ref(v___x_807_);
lean_dec_ref(v___x_805_);
goto v___jp_782_;
}
}
else
{
lean_dec(v_declName_815_);
lean_dec_ref(v_arg_813_);
lean_dec_ref(v___x_807_);
lean_dec_ref(v___x_805_);
goto v___jp_782_;
}
}
else
{
lean_dec_ref(v___x_814_);
lean_dec_ref(v_arg_813_);
lean_dec_ref(v___x_807_);
lean_dec_ref(v___x_805_);
goto v___jp_782_;
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
v___jp_782_:
{
uint8_t v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = 1;
lean_inc_ref(v_expr_780_);
v___x_784_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_784_, 0, v_expr_780_);
lean_ctor_set(v___x_784_, 1, v_exprType_765_);
lean_ctor_set(v___x_784_, 2, v_e_766_);
lean_ctor_set(v___x_784_, 3, v_expr_780_);
lean_ctor_set(v___x_784_, 4, v_proof_781_);
lean_ctor_set_uint8(v___x_784_, sizeof(void*)*5, v___x_783_);
v___x_785_ = lean_apply_2(v_toPure_768_, lean_box(0), v___x_784_);
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed(lean_object* v_level_835_, lean_object* v_exprType_836_, lean_object* v_e_837_, lean_object* v___x_838_, lean_object* v_toPure_839_, lean_object* v_xs_840_, lean_object* v_____do__lift_841_){
_start:
{
uint8_t v___x_8312__boxed_842_; lean_object* v_res_843_; 
v___x_8312__boxed_842_ = lean_unbox(v___x_838_);
v_res_843_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0(v_level_835_, v_exprType_836_, v_e_837_, v___x_8312__boxed_842_, v_toPure_839_, v_xs_840_, v_____do__lift_841_);
lean_dec(v_____do__lift_841_);
lean_dec_ref(v_xs_840_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(lean_object* v_inst_844_, lean_object* v_bodyType_845_, lean_object* v_xs_846_, lean_object* v_level_847_, lean_object* v_e_848_, uint8_t v___x_849_, lean_object* v_toPure_850_, lean_object* v_body_851_, lean_object* v_toBind_852_, lean_object* v_____r_853_){
_start:
{
lean_object* v_simp_854_; lean_object* v_exprType_855_; lean_object* v___x_856_; lean_object* v___f_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v_simp_854_ = lean_ctor_get(v_inst_844_, 2);
lean_inc(v_simp_854_);
lean_dec_ref(v_inst_844_);
v_exprType_855_ = lean_expr_abstract(v_bodyType_845_, v_xs_846_);
v___x_856_ = lean_box(v___x_849_);
v___f_857_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_857_, 0, v_level_847_);
lean_closure_set(v___f_857_, 1, v_exprType_855_);
lean_closure_set(v___f_857_, 2, v_e_848_);
lean_closure_set(v___f_857_, 3, v___x_856_);
lean_closure_set(v___f_857_, 4, v_toPure_850_);
lean_closure_set(v___f_857_, 5, v_xs_846_);
v___x_858_ = lean_apply_1(v_simp_854_, v_body_851_);
v___x_859_ = lean_apply_4(v_toBind_852_, lean_box(0), lean_box(0), v___x_858_, v___f_857_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed(lean_object* v_inst_860_, lean_object* v_bodyType_861_, lean_object* v_xs_862_, lean_object* v_level_863_, lean_object* v_e_864_, lean_object* v___x_865_, lean_object* v_toPure_866_, lean_object* v_body_867_, lean_object* v_toBind_868_, lean_object* v_____r_869_){
_start:
{
uint8_t v___x_8462__boxed_870_; lean_object* v_res_871_; 
v___x_8462__boxed_870_ = lean_unbox(v___x_865_);
v_res_871_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1(v_inst_860_, v_bodyType_861_, v_xs_862_, v_level_863_, v_e_864_, v___x_8462__boxed_870_, v_toPure_866_, v_body_867_, v_toBind_868_, v_____r_869_);
lean_dec_ref(v_bodyType_861_);
return v_res_871_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__2));
v___x_877_ = l_Lean_stringToMessageData(v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(lean_object* v_cls_878_, lean_object* v_body_879_, lean_object* v___x_880_, lean_object* v___x_881_, lean_object* v_toMonadRef_882_, lean_object* v___x_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_toCold_892_; lean_object* v_options_893_; uint8_t v_hasTrace_894_; 
v_toCold_892_ = lean_ctor_get(v___y_886_, 0);
v_options_893_ = lean_ctor_get(v_toCold_892_, 2);
v_hasTrace_894_ = lean_ctor_get_uint8(v_options_893_, sizeof(void*)*1);
if (v_hasTrace_894_ == 0)
{
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec_ref(v___x_883_);
lean_dec_ref(v_toMonadRef_882_);
lean_dec_ref(v___x_881_);
lean_dec_ref(v___x_880_);
lean_dec_ref(v_body_879_);
lean_dec(v_cls_878_);
goto v___jp_889_;
}
else
{
lean_object* v_inheritedTraceOptions_895_; lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; 
v_inheritedTraceOptions_895_ = lean_ctor_get(v_toCold_892_, 11);
v___x_896_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_878_);
v___x_897_ = l_Lean_Name_append(v___x_896_, v_cls_878_);
v___x_898_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_895_, v_options_893_, v___x_897_);
lean_dec(v___x_897_);
if (v___x_898_ == 0)
{
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec_ref(v___x_883_);
lean_dec_ref(v_toMonadRef_882_);
lean_dec_ref(v___x_881_);
lean_dec_ref(v___x_880_);
lean_dec_ref(v_body_879_);
lean_dec(v_cls_878_);
goto v___jp_889_;
}
else
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_7940__overap_902_; lean_object* v___x_903_; 
v___x_899_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__3);
v___x_900_ = l_Lean_MessageData_ofExpr(v_body_879_);
v___x_901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_7940__overap_902_ = l_Lean_addTrace___redArg(v___x_880_, v___x_881_, v_toMonadRef_882_, v___x_883_, v_cls_878_, v___x_901_);
v___x_903_ = lean_apply_5(v___x_7940__overap_902_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, lean_box(0));
return v___x_903_;
}
}
v___jp_889_:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_box(0);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed(lean_object* v_cls_904_, lean_object* v_body_905_, lean_object* v___x_906_, lean_object* v___x_907_, lean_object* v_toMonadRef_908_, lean_object* v___x_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2(v_cls_904_, v_body_905_, v___x_906_, v___x_907_, v_toMonadRef_908_, v___x_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(lean_object* v_declName_918_, lean_object* v_type_919_, lean_object* v___y_920_, lean_object* v_value_921_, uint8_t v___x_922_, lean_object* v___x_923_, uint8_t v___y_924_, lean_object* v_toPure_925_, lean_object* v_us_926_, lean_object* v_rb_927_){
_start:
{
lean_object* v_expr_928_; lean_object* v_exprType_929_; lean_object* v_exprInit_930_; lean_object* v_exprResult_931_; lean_object* v_proof_932_; uint8_t v_modified_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_960_; 
v_expr_928_ = lean_ctor_get(v_rb_927_, 0);
v_exprType_929_ = lean_ctor_get(v_rb_927_, 1);
v_exprInit_930_ = lean_ctor_get(v_rb_927_, 2);
v_exprResult_931_ = lean_ctor_get(v_rb_927_, 3);
v_proof_932_ = lean_ctor_get(v_rb_927_, 4);
v_modified_933_ = lean_ctor_get_uint8(v_rb_927_, sizeof(void*)*5);
v_isSharedCheck_960_ = !lean_is_exclusive(v_rb_927_);
if (v_isSharedCheck_960_ == 0)
{
v___x_935_ = v_rb_927_;
v_isShared_936_ = v_isSharedCheck_960_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_proof_932_);
lean_inc(v_exprResult_931_);
lean_inc(v_exprInit_930_);
lean_inc(v_exprType_929_);
lean_inc(v_expr_928_);
lean_dec(v_rb_927_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_960_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
uint8_t v___x_937_; lean_object* v___x_938_; lean_object* v_expr_939_; lean_object* v___x_940_; lean_object* v_exprType_941_; lean_object* v___x_942_; lean_object* v_exprInit_943_; lean_object* v_exprResult_944_; 
v___x_937_ = 0;
lean_inc_ref_n(v_type_919_, 4);
lean_inc_n(v_declName_918_, 4);
v___x_938_ = l_Lean_mkLambda(v_declName_918_, v___x_937_, v_type_919_, v_expr_928_);
lean_inc_ref_n(v___y_920_, 3);
lean_inc_ref(v___x_938_);
v_expr_939_ = l_Lean_Expr_app___override(v___x_938_, v___y_920_);
v___x_940_ = l_Lean_mkLambda(v_declName_918_, v___x_937_, v_type_919_, v_exprType_929_);
lean_inc_ref(v___x_940_);
v_exprType_941_ = l_Lean_Expr_app___override(v___x_940_, v___y_920_);
v___x_942_ = l_Lean_mkLambda(v_declName_918_, v___x_937_, v_type_919_, v_exprInit_930_);
lean_inc_ref(v___x_942_);
v_exprInit_943_ = l_Lean_Expr_app___override(v___x_942_, v_value_921_);
v_exprResult_944_ = l_Lean_Expr_letE___override(v_declName_918_, v_type_919_, v___y_920_, v_exprResult_931_, v___x_922_);
if (v_modified_933_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_proof_947_; lean_object* v___x_949_; 
lean_dec_ref(v___x_942_);
lean_dec_ref(v___x_940_);
lean_dec_ref(v___x_938_);
lean_dec_ref(v_proof_932_);
lean_dec(v_us_926_);
lean_dec_ref(v___y_920_);
lean_dec_ref(v_type_919_);
lean_dec(v_declName_918_);
v___x_945_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_946_ = l_Lean_mkConst(v___x_945_, v___x_923_);
lean_inc_ref(v_expr_939_);
lean_inc_ref(v_exprType_941_);
v_proof_947_ = l_Lean_mkAppB(v___x_946_, v_exprType_941_, v_expr_939_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 4, v_proof_947_);
lean_ctor_set(v___x_935_, 3, v_exprResult_944_);
lean_ctor_set(v___x_935_, 2, v_exprInit_943_);
lean_ctor_set(v___x_935_, 1, v_exprType_941_);
lean_ctor_set(v___x_935_, 0, v_expr_939_);
v___x_949_ = v___x_935_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_expr_939_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_exprType_941_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_exprInit_943_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_exprResult_944_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v_proof_947_);
v___x_949_ = v_reuseFailAlloc_951_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_950_; 
lean_ctor_set_uint8(v___x_949_, sizeof(void*)*5, v___y_924_);
v___x_950_ = lean_apply_2(v_toPure_925_, lean_box(0), v___x_949_);
return v___x_950_;
}
}
else
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v_proof_955_; lean_object* v___x_957_; 
lean_dec(v___x_923_);
v___x_952_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___closed__0));
v___x_953_ = l_Lean_mkConst(v___x_952_, v_us_926_);
lean_inc_ref(v_type_919_);
v___x_954_ = l_Lean_mkLambda(v_declName_918_, v___x_937_, v_type_919_, v_proof_932_);
v_proof_955_ = l_Lean_mkApp6(v___x_953_, v_type_919_, v___x_940_, v___y_920_, v___x_942_, v___x_938_, v___x_954_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 4, v_proof_955_);
lean_ctor_set(v___x_935_, 3, v_exprResult_944_);
lean_ctor_set(v___x_935_, 2, v_exprInit_943_);
lean_ctor_set(v___x_935_, 1, v_exprType_941_);
lean_ctor_set(v___x_935_, 0, v_expr_939_);
v___x_957_ = v___x_935_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_expr_939_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_exprType_941_);
lean_ctor_set(v_reuseFailAlloc_959_, 2, v_exprInit_943_);
lean_ctor_set(v_reuseFailAlloc_959_, 3, v_exprResult_944_);
lean_ctor_set(v_reuseFailAlloc_959_, 4, v_proof_955_);
v___x_957_ = v_reuseFailAlloc_959_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_958_; 
lean_ctor_set_uint8(v___x_957_, sizeof(void*)*5, v___x_922_);
v___x_958_ = lean_apply_2(v_toPure_925_, lean_box(0), v___x_957_);
return v___x_958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed(lean_object* v_declName_961_, lean_object* v_type_962_, lean_object* v___y_963_, lean_object* v_value_964_, lean_object* v___x_965_, lean_object* v___x_966_, lean_object* v___y_967_, lean_object* v_toPure_968_, lean_object* v_us_969_, lean_object* v_rb_970_){
_start:
{
uint8_t v___x_8557__boxed_971_; uint8_t v___y_8559__boxed_972_; lean_object* v_res_973_; 
v___x_8557__boxed_971_ = lean_unbox(v___x_965_);
v___y_8559__boxed_972_ = lean_unbox(v___y_967_);
v_res_973_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3(v_declName_961_, v_type_962_, v___y_963_, v_value_964_, v___x_8557__boxed_971_, v___x_966_, v___y_8559__boxed_972_, v_toPure_968_, v_us_969_, v_rb_970_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9(lean_object* v___f_974_, lean_object* v_____x_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lean_apply_1(v___f_974_, v_____x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(lean_object* v___x_981_, lean_object* v_declName_982_, lean_object* v_type_983_, lean_object* v_value_984_, lean_object* v_us_985_, lean_object* v___x_986_, uint8_t v___x_987_, lean_object* v_toPure_988_, lean_object* v_rb_989_){
_start:
{
lean_object* v_expr_990_; lean_object* v_exprType_991_; lean_object* v_exprInit_992_; lean_object* v_exprResult_993_; lean_object* v_proof_994_; uint8_t v_modified_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1023_; 
v_expr_990_ = lean_ctor_get(v_rb_989_, 0);
v_exprType_991_ = lean_ctor_get(v_rb_989_, 1);
v_exprInit_992_ = lean_ctor_get(v_rb_989_, 2);
v_exprResult_993_ = lean_ctor_get(v_rb_989_, 3);
v_proof_994_ = lean_ctor_get(v_rb_989_, 4);
v_modified_995_ = lean_ctor_get_uint8(v_rb_989_, sizeof(void*)*5);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_rb_989_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_997_ = v_rb_989_;
v_isShared_998_ = v_isSharedCheck_1023_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_proof_994_);
lean_inc(v_exprResult_993_);
lean_inc(v_exprInit_992_);
lean_inc(v_exprType_991_);
lean_inc(v_expr_990_);
lean_dec(v_rb_989_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1023_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v_expr_999_; lean_object* v_exprType_1000_; uint8_t v___x_1001_; lean_object* v___x_1002_; lean_object* v_exprInit_1003_; lean_object* v_exprResult_1004_; 
v_expr_999_ = lean_expr_lower_loose_bvars(v_expr_990_, v___x_981_, v___x_981_);
lean_dec_ref(v_expr_990_);
v_exprType_1000_ = lean_expr_lower_loose_bvars(v_exprType_991_, v___x_981_, v___x_981_);
lean_dec_ref(v_exprType_991_);
v___x_1001_ = 0;
lean_inc_ref(v_type_983_);
lean_inc(v_declName_982_);
v___x_1002_ = l_Lean_mkLambda(v_declName_982_, v___x_1001_, v_type_983_, v_exprInit_992_);
lean_inc_ref(v_value_984_);
lean_inc_ref(v___x_1002_);
v_exprInit_1003_ = l_Lean_Expr_app___override(v___x_1002_, v_value_984_);
v_exprResult_1004_ = lean_expr_lower_loose_bvars(v_exprResult_993_, v___x_981_, v___x_981_);
lean_dec_ref(v_exprResult_993_);
if (v_modified_995_ == 0)
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v_proof_1010_; lean_object* v___x_1012_; 
lean_dec_ref(v___x_1002_);
lean_dec_ref(v_proof_994_);
lean_dec(v_declName_982_);
v___x_1005_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__0));
v___x_1006_ = l_Lean_mkConst(v___x_1005_, v_us_985_);
v___x_1007_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1008_ = l_Lean_mkConst(v___x_1007_, v___x_986_);
lean_inc_ref_n(v_expr_999_, 3);
lean_inc_ref_n(v_exprType_1000_, 2);
v___x_1009_ = l_Lean_mkAppB(v___x_1008_, v_exprType_1000_, v_expr_999_);
v_proof_1010_ = l_Lean_mkApp6(v___x_1006_, v_type_983_, v_exprType_1000_, v_value_984_, v_expr_999_, v_expr_999_, v___x_1009_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 4, v_proof_1010_);
lean_ctor_set(v___x_997_, 3, v_exprResult_1004_);
lean_ctor_set(v___x_997_, 2, v_exprInit_1003_);
lean_ctor_set(v___x_997_, 1, v_exprType_1000_);
lean_ctor_set(v___x_997_, 0, v_expr_999_);
v___x_1012_ = v___x_997_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_expr_999_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_exprType_1000_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v_exprInit_1003_);
lean_ctor_set(v_reuseFailAlloc_1014_, 3, v_exprResult_1004_);
lean_ctor_set(v_reuseFailAlloc_1014_, 4, v_proof_1010_);
v___x_1012_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; 
lean_ctor_set_uint8(v___x_1012_, sizeof(void*)*5, v___x_987_);
v___x_1013_ = lean_apply_2(v_toPure_988_, lean_box(0), v___x_1012_);
return v___x_1013_;
}
}
else
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v_proof_1018_; lean_object* v___x_1020_; 
lean_dec(v___x_986_);
v___x_1015_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___closed__1));
v___x_1016_ = l_Lean_mkConst(v___x_1015_, v_us_985_);
lean_inc_ref(v_type_983_);
v___x_1017_ = l_Lean_mkLambda(v_declName_982_, v___x_1001_, v_type_983_, v_proof_994_);
lean_inc_ref(v_expr_999_);
lean_inc_ref(v_exprType_1000_);
v_proof_1018_ = l_Lean_mkApp6(v___x_1016_, v_type_983_, v_exprType_1000_, v_value_984_, v___x_1002_, v_expr_999_, v___x_1017_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 4, v_proof_1018_);
lean_ctor_set(v___x_997_, 3, v_exprResult_1004_);
lean_ctor_set(v___x_997_, 2, v_exprInit_1003_);
lean_ctor_set(v___x_997_, 1, v_exprType_1000_);
lean_ctor_set(v___x_997_, 0, v_expr_999_);
v___x_1020_ = v___x_997_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_expr_999_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v_exprType_1000_);
lean_ctor_set(v_reuseFailAlloc_1022_, 2, v_exprInit_1003_);
lean_ctor_set(v_reuseFailAlloc_1022_, 3, v_exprResult_1004_);
lean_ctor_set(v_reuseFailAlloc_1022_, 4, v_proof_1018_);
v___x_1020_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1021_; 
lean_ctor_set_uint8(v___x_1020_, sizeof(void*)*5, v___x_987_);
v___x_1021_ = lean_apply_2(v_toPure_988_, lean_box(0), v___x_1020_);
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed(lean_object* v___x_1024_, lean_object* v_declName_1025_, lean_object* v_type_1026_, lean_object* v_value_1027_, lean_object* v_us_1028_, lean_object* v___x_1029_, lean_object* v___x_1030_, lean_object* v_toPure_1031_, lean_object* v_rb_1032_){
_start:
{
uint8_t v___x_8644__boxed_1033_; lean_object* v_res_1034_; 
v___x_8644__boxed_1033_ = lean_unbox(v___x_1030_);
v_res_1034_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13(v___x_1024_, v_declName_1025_, v_type_1026_, v_value_1027_, v_us_1028_, v___x_1029_, v___x_8644__boxed_1033_, v_toPure_1031_, v_rb_1032_);
lean_dec(v___x_1024_);
return v_res_1034_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__0));
v___x_1037_ = l_Lean_stringToMessageData(v___x_1036_);
return v___x_1037_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__2));
v___x_1040_ = l_Lean_stringToMessageData(v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(lean_object* v_cls_1041_, lean_object* v_declName_1042_, lean_object* v_val_1043_, lean_object* v___x_1044_, lean_object* v___x_1045_, lean_object* v_toMonadRef_1046_, lean_object* v___x_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_toCold_1056_; lean_object* v_options_1057_; uint8_t v_hasTrace_1058_; 
v_toCold_1056_ = lean_ctor_get(v___y_1050_, 0);
v_options_1057_ = lean_ctor_get(v_toCold_1056_, 2);
v_hasTrace_1058_ = lean_ctor_get_uint8(v_options_1057_, sizeof(void*)*1);
if (v_hasTrace_1058_ == 0)
{
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec_ref(v___x_1047_);
lean_dec_ref(v_toMonadRef_1046_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___x_1044_);
lean_dec_ref(v_val_1043_);
lean_dec(v_declName_1042_);
lean_dec(v_cls_1041_);
goto v___jp_1053_;
}
else
{
lean_object* v_inheritedTraceOptions_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; 
v_inheritedTraceOptions_1059_ = lean_ctor_get(v_toCold_1056_, 11);
v___x_1060_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1041_);
v___x_1061_ = l_Lean_Name_append(v___x_1060_, v_cls_1041_);
v___x_1062_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1059_, v_options_1057_, v___x_1061_);
lean_dec(v___x_1061_);
if (v___x_1062_ == 0)
{
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec_ref(v___x_1047_);
lean_dec_ref(v_toMonadRef_1046_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___x_1044_);
lean_dec_ref(v_val_1043_);
lean_dec(v_declName_1042_);
lean_dec(v_cls_1041_);
goto v___jp_1053_;
}
else
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_8278__overap_1070_; lean_object* v___x_1071_; 
v___x_1063_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__1);
v___x_1064_ = l_Lean_MessageData_ofName(v_declName_1042_);
v___x_1065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
v___x_1066_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = l_Lean_MessageData_ofExpr(v_val_1043_);
v___x_1069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_8278__overap_1070_ = l_Lean_addTrace___redArg(v___x_1044_, v___x_1045_, v_toMonadRef_1046_, v___x_1047_, v_cls_1041_, v___x_1069_);
v___x_1071_ = lean_apply_5(v___x_8278__overap_1070_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, lean_box(0));
return v___x_1071_;
}
}
v___jp_1053_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = lean_box(0);
v___x_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
return v___x_1055_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed(lean_object* v_cls_1072_, lean_object* v_declName_1073_, lean_object* v_val_1074_, lean_object* v___x_1075_, lean_object* v___x_1076_, lean_object* v_toMonadRef_1077_, lean_object* v___x_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15(v_cls_1072_, v_declName_1073_, v_val_1074_, v___x_1075_, v___x_1076_, v_toMonadRef_1077_, v___x_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
return v_res_1084_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__0));
v___x_1087_ = l_Lean_stringToMessageData(v___x_1086_);
return v___x_1087_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__2));
v___x_1090_ = l_Lean_stringToMessageData(v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(lean_object* v_cls_1091_, lean_object* v_declName_1092_, lean_object* v_val_1093_, lean_object* v_val_x27_1094_, lean_object* v___x_1095_, lean_object* v___x_1096_, lean_object* v_toMonadRef_1097_, lean_object* v___x_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v_toCold_1107_; lean_object* v_options_1108_; uint8_t v_hasTrace_1109_; 
v_toCold_1107_ = lean_ctor_get(v___y_1101_, 0);
v_options_1108_ = lean_ctor_get(v_toCold_1107_, 2);
v_hasTrace_1109_ = lean_ctor_get_uint8(v_options_1108_, sizeof(void*)*1);
if (v_hasTrace_1109_ == 0)
{
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec_ref(v___x_1098_);
lean_dec_ref(v_toMonadRef_1097_);
lean_dec_ref(v___x_1096_);
lean_dec_ref(v___x_1095_);
lean_dec_ref(v_val_x27_1094_);
lean_dec_ref(v_val_1093_);
lean_dec(v_declName_1092_);
lean_dec(v_cls_1091_);
goto v___jp_1104_;
}
else
{
lean_object* v_inheritedTraceOptions_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v_inheritedTraceOptions_1110_ = lean_ctor_get(v_toCold_1107_, 11);
v___x_1111_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1091_);
v___x_1112_ = l_Lean_Name_append(v___x_1111_, v_cls_1091_);
v___x_1113_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1110_, v_options_1108_, v___x_1112_);
lean_dec(v___x_1112_);
if (v___x_1113_ == 0)
{
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec_ref(v___x_1098_);
lean_dec_ref(v_toMonadRef_1097_);
lean_dec_ref(v___x_1096_);
lean_dec_ref(v___x_1095_);
lean_dec_ref(v_val_x27_1094_);
lean_dec_ref(v_val_1093_);
lean_dec(v_declName_1092_);
lean_dec(v_cls_1091_);
goto v___jp_1104_;
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_8026__overap_1125_; lean_object* v___x_1126_; 
v___x_1114_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__1);
v___x_1115_ = l_Lean_MessageData_ofName(v_declName_1092_);
v___x_1116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = l_Lean_MessageData_ofExpr(v_val_1093_);
v___x_1120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1118_);
lean_ctor_set(v___x_1120_, 1, v___x_1119_);
v___x_1121_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1120_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
v___x_1123_ = l_Lean_MessageData_ofExpr(v_val_x27_1094_);
v___x_1124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1122_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_8026__overap_1125_ = l_Lean_addTrace___redArg(v___x_1095_, v___x_1096_, v_toMonadRef_1097_, v___x_1098_, v_cls_1091_, v___x_1124_);
v___x_1126_ = lean_apply_5(v___x_8026__overap_1125_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, lean_box(0));
return v___x_1126_;
}
}
v___jp_1104_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = lean_box(0);
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed(lean_object* v_cls_1127_, lean_object* v_declName_1128_, lean_object* v_val_1129_, lean_object* v_val_x27_1130_, lean_object* v___x_1131_, lean_object* v___x_1132_, lean_object* v_toMonadRef_1133_, lean_object* v___x_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5(v_cls_1127_, v_declName_1128_, v_val_1129_, v_val_x27_1130_, v___x_1131_, v___x_1132_, v_toMonadRef_1133_, v___x_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(lean_object* v_e_1141_, lean_object* v_xs_1142_, lean_object* v_h_1143_, uint8_t v___x_1144_, lean_object* v_toPure_1145_, lean_object* v_toBind_1146_, lean_object* v___f_1147_, lean_object* v_____r_1148_){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1149_ = lean_expr_abstract(v_e_1141_, v_xs_1142_);
v___x_1150_ = lean_expr_abstract(v_h_1143_, v_xs_1142_);
v___x_1151_ = lean_box(v___x_1144_);
v___x_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
lean_ctor_set(v___x_1152_, 1, v___x_1150_);
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1149_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = lean_apply_2(v_toPure_1145_, lean_box(0), v___x_1153_);
v___x_1155_ = lean_apply_4(v_toBind_1146_, lean_box(0), lean_box(0), v___x_1154_, v___f_1147_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed(lean_object* v_e_1156_, lean_object* v_xs_1157_, lean_object* v_h_1158_, lean_object* v___x_1159_, lean_object* v_toPure_1160_, lean_object* v_toBind_1161_, lean_object* v___f_1162_, lean_object* v_____r_1163_){
_start:
{
uint8_t v___x_8876__boxed_1164_; lean_object* v_res_1165_; 
v___x_8876__boxed_1164_ = lean_unbox(v___x_1159_);
v_res_1165_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11(v_e_1156_, v_xs_1157_, v_h_1158_, v___x_8876__boxed_1164_, v_toPure_1160_, v_toBind_1161_, v___f_1162_, v_____r_1163_);
lean_dec_ref(v_h_1158_);
lean_dec_ref(v_xs_1157_);
lean_dec_ref(v_e_1156_);
return v_res_1165_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__0));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(lean_object* v_cls_1169_, lean_object* v_declName_1170_, lean_object* v_val_1171_, lean_object* v_e_1172_, lean_object* v___x_1173_, lean_object* v___x_1174_, lean_object* v_toMonadRef_1175_, lean_object* v___x_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_toCold_1185_; lean_object* v_options_1186_; uint8_t v_hasTrace_1187_; 
v_toCold_1185_ = lean_ctor_get(v___y_1179_, 0);
v_options_1186_ = lean_ctor_get(v_toCold_1185_, 2);
v_hasTrace_1187_ = lean_ctor_get_uint8(v_options_1186_, sizeof(void*)*1);
if (v_hasTrace_1187_ == 0)
{
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec_ref(v___x_1176_);
lean_dec_ref(v_toMonadRef_1175_);
lean_dec_ref(v___x_1174_);
lean_dec_ref(v___x_1173_);
lean_dec_ref(v_e_1172_);
lean_dec_ref(v_val_1171_);
lean_dec(v_declName_1170_);
lean_dec(v_cls_1169_);
goto v___jp_1182_;
}
else
{
lean_object* v_inheritedTraceOptions_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; 
v_inheritedTraceOptions_1188_ = lean_ctor_get(v_toCold_1185_, 11);
v___x_1189_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___closed__1));
lean_inc(v_cls_1169_);
v___x_1190_ = l_Lean_Name_append(v___x_1189_, v_cls_1169_);
v___x_1191_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1188_, v_options_1186_, v___x_1190_);
lean_dec(v___x_1190_);
if (v___x_1191_ == 0)
{
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec_ref(v___x_1176_);
lean_dec_ref(v_toMonadRef_1175_);
lean_dec_ref(v___x_1174_);
lean_dec_ref(v___x_1173_);
lean_dec_ref(v_e_1172_);
lean_dec_ref(v_val_1171_);
lean_dec(v_declName_1170_);
lean_dec(v_cls_1169_);
goto v___jp_1182_;
}
else
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_8172__overap_1203_; lean_object* v___x_1204_; 
v___x_1192_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___closed__1);
v___x_1193_ = l_Lean_MessageData_ofName(v_declName_1170_);
v___x_1194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1192_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
v___x_1195_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___closed__3);
v___x_1196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1194_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
v___x_1197_ = l_Lean_MessageData_ofExpr(v_val_1171_);
v___x_1198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___closed__3);
v___x_1200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1198_);
lean_ctor_set(v___x_1200_, 1, v___x_1199_);
v___x_1201_ = l_Lean_MessageData_ofExpr(v_e_1172_);
v___x_1202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1200_);
lean_ctor_set(v___x_1202_, 1, v___x_1201_);
v___x_8172__overap_1203_ = l_Lean_addTrace___redArg(v___x_1173_, v___x_1174_, v_toMonadRef_1175_, v___x_1176_, v_cls_1169_, v___x_1202_);
v___x_1204_ = lean_apply_5(v___x_8172__overap_1203_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, lean_box(0));
return v___x_1204_;
}
}
v___jp_1182_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = lean_box(0);
v___x_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed(lean_object* v_cls_1205_, lean_object* v_declName_1206_, lean_object* v_val_1207_, lean_object* v_e_1208_, lean_object* v___x_1209_, lean_object* v___x_1210_, lean_object* v_toMonadRef_1211_, lean_object* v___x_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10(v_cls_1205_, v_declName_1206_, v_val_1207_, v_e_1208_, v___x_1209_, v___x_1210_, v_toMonadRef_1211_, v___x_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(lean_object* v_level_1228_, lean_object* v___x_1229_, lean_object* v_type_1230_, lean_object* v_value_1231_, uint8_t v___x_1232_, lean_object* v_toPure_1233_, lean_object* v_toBind_1234_, lean_object* v___f_1235_, lean_object* v_xs_1236_, uint8_t v___x_1237_, lean_object* v___f_1238_, lean_object* v_declName_1239_, lean_object* v_val_1240_, lean_object* v___x_1241_, lean_object* v___x_1242_, lean_object* v_toMonadRef_1243_, lean_object* v___x_1244_, lean_object* v_inst_1245_, lean_object* v_____do__lift_1246_){
_start:
{
if (lean_obj_tag(v_____do__lift_1246_) == 0)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
lean_dec(v_inst_1245_);
lean_dec_ref(v___x_1244_);
lean_dec_ref(v_toMonadRef_1243_);
lean_dec_ref(v___x_1242_);
lean_dec_ref(v___x_1241_);
lean_dec_ref(v_val_1240_);
lean_dec(v_declName_1239_);
lean_dec(v___f_1238_);
lean_dec_ref(v_xs_1236_);
v___x_1247_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1248_, 0, v_level_1228_);
lean_ctor_set(v___x_1248_, 1, v___x_1229_);
v___x_1249_ = l_Lean_mkConst(v___x_1247_, v___x_1248_);
lean_inc_ref(v_value_1231_);
v___x_1250_ = l_Lean_mkAppB(v___x_1249_, v_type_1230_, v_value_1231_);
v___x_1251_ = lean_box(v___x_1232_);
v___x_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
lean_ctor_set(v___x_1252_, 1, v___x_1250_);
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v_value_1231_);
lean_ctor_set(v___x_1253_, 1, v___x_1252_);
v___x_1254_ = lean_apply_2(v_toPure_1233_, lean_box(0), v___x_1253_);
v___x_1255_ = lean_apply_4(v_toBind_1234_, lean_box(0), lean_box(0), v___x_1254_, v___f_1235_);
return v___x_1255_;
}
else
{
lean_object* v_e_1256_; lean_object* v_h_1257_; lean_object* v___x_1258_; lean_object* v___f_1259_; lean_object* v_cls_1260_; lean_object* v___f_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec(v___f_1235_);
lean_dec_ref(v_value_1231_);
lean_dec_ref(v_type_1230_);
lean_dec(v___x_1229_);
lean_dec(v_level_1228_);
v_e_1256_ = lean_ctor_get(v_____do__lift_1246_, 0);
lean_inc_ref_n(v_e_1256_, 2);
v_h_1257_ = lean_ctor_get(v_____do__lift_1246_, 1);
lean_inc_ref(v_h_1257_);
lean_dec_ref_known(v_____do__lift_1246_, 2);
v___x_1258_ = lean_box(v___x_1237_);
lean_inc(v_toBind_1234_);
v___f_1259_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_1259_, 0, v_e_1256_);
lean_closure_set(v___f_1259_, 1, v_xs_1236_);
lean_closure_set(v___f_1259_, 2, v_h_1257_);
lean_closure_set(v___f_1259_, 3, v___x_1258_);
lean_closure_set(v___f_1259_, 4, v_toPure_1233_);
lean_closure_set(v___f_1259_, 5, v_toBind_1234_);
lean_closure_set(v___f_1259_, 6, v___f_1238_);
v_cls_1260_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
v___f_1261_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__10___boxed), 13, 8);
lean_closure_set(v___f_1261_, 0, v_cls_1260_);
lean_closure_set(v___f_1261_, 1, v_declName_1239_);
lean_closure_set(v___f_1261_, 2, v_val_1240_);
lean_closure_set(v___f_1261_, 3, v_e_1256_);
lean_closure_set(v___f_1261_, 4, v___x_1241_);
lean_closure_set(v___f_1261_, 5, v___x_1242_);
lean_closure_set(v___f_1261_, 6, v_toMonadRef_1243_);
lean_closure_set(v___f_1261_, 7, v___x_1244_);
v___x_1262_ = lean_apply_2(v_inst_1245_, lean_box(0), v___f_1261_);
v___x_1263_ = lean_apply_4(v_toBind_1234_, lean_box(0), lean_box(0), v___x_1262_, v___f_1259_);
return v___x_1263_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_level_1264_ = _args[0];
lean_object* v___x_1265_ = _args[1];
lean_object* v_type_1266_ = _args[2];
lean_object* v_value_1267_ = _args[3];
lean_object* v___x_1268_ = _args[4];
lean_object* v_toPure_1269_ = _args[5];
lean_object* v_toBind_1270_ = _args[6];
lean_object* v___f_1271_ = _args[7];
lean_object* v_xs_1272_ = _args[8];
lean_object* v___x_1273_ = _args[9];
lean_object* v___f_1274_ = _args[10];
lean_object* v_declName_1275_ = _args[11];
lean_object* v_val_1276_ = _args[12];
lean_object* v___x_1277_ = _args[13];
lean_object* v___x_1278_ = _args[14];
lean_object* v_toMonadRef_1279_ = _args[15];
lean_object* v___x_1280_ = _args[16];
lean_object* v_inst_1281_ = _args[17];
lean_object* v_____do__lift_1282_ = _args[18];
_start:
{
uint8_t v___x_9016__boxed_1283_; uint8_t v___x_9018__boxed_1284_; lean_object* v_res_1285_; 
v___x_9016__boxed_1283_ = lean_unbox(v___x_1268_);
v___x_9018__boxed_1284_ = lean_unbox(v___x_1273_);
v_res_1285_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12(v_level_1264_, v___x_1265_, v_type_1266_, v_value_1267_, v___x_9016__boxed_1283_, v_toPure_1269_, v_toBind_1270_, v___f_1271_, v_xs_1272_, v___x_9018__boxed_1284_, v___f_1274_, v_declName_1275_, v_val_1276_, v___x_1277_, v___x_1278_, v_toMonadRef_1279_, v___x_1280_, v_inst_1281_, v_____do__lift_1282_);
return v_res_1285_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1295_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__5));
v___x_1296_ = lean_unsigned_to_nat(8u);
v___x_1297_ = lean_unsigned_to_nat(287u);
v___x_1298_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1299_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1300_ = l_mkPanicMessageWithDecl(v___x_1299_, v___x_1298_, v___x_1297_, v___x_1296_, v___x_1295_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(lean_object* v_declName_1301_, lean_object* v_type_1302_, lean_object* v_fst_1303_, lean_object* v___x_1304_, lean_object* v_value_1305_, uint8_t v___x_1306_, uint8_t v_fst_1307_, lean_object* v___x_1308_, lean_object* v_toPure_1309_, lean_object* v_us_1310_, lean_object* v_snd_1311_, lean_object* v___x_1312_, lean_object* v_rb_1313_){
_start:
{
lean_object* v_expr_1314_; lean_object* v_exprType_1315_; lean_object* v_exprInit_1316_; lean_object* v_exprResult_1317_; lean_object* v_proof_1318_; uint8_t v_modified_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1364_; 
v_expr_1314_ = lean_ctor_get(v_rb_1313_, 0);
v_exprType_1315_ = lean_ctor_get(v_rb_1313_, 1);
v_exprInit_1316_ = lean_ctor_get(v_rb_1313_, 2);
v_exprResult_1317_ = lean_ctor_get(v_rb_1313_, 3);
v_proof_1318_ = lean_ctor_get(v_rb_1313_, 4);
v_modified_1319_ = lean_ctor_get_uint8(v_rb_1313_, sizeof(void*)*5);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_rb_1313_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1321_ = v_rb_1313_;
v_isShared_1322_ = v_isSharedCheck_1364_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_proof_1318_);
lean_inc(v_exprResult_1317_);
lean_inc(v_exprInit_1316_);
lean_inc(v_exprType_1315_);
lean_inc(v_expr_1314_);
lean_dec(v_rb_1313_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1364_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1323_; uint8_t v___x_1324_; 
v___x_1323_ = lean_unsigned_to_nat(0u);
v___x_1324_ = lean_expr_has_loose_bvar(v_exprType_1315_, v___x_1323_);
if (v___x_1324_ == 0)
{
uint8_t v___x_1325_; lean_object* v___x_1326_; lean_object* v_expr_1327_; lean_object* v_exprType_1328_; lean_object* v___x_1329_; lean_object* v_exprInit_1330_; lean_object* v_exprResult_1331_; 
v___x_1325_ = 0;
lean_inc_ref_n(v_type_1302_, 3);
lean_inc_n(v_declName_1301_, 3);
v___x_1326_ = l_Lean_mkLambda(v_declName_1301_, v___x_1325_, v_type_1302_, v_expr_1314_);
lean_inc_ref_n(v_fst_1303_, 2);
lean_inc_ref(v___x_1326_);
v_expr_1327_ = l_Lean_Expr_app___override(v___x_1326_, v_fst_1303_);
v_exprType_1328_ = lean_expr_lower_loose_bvars(v_exprType_1315_, v___x_1304_, v___x_1304_);
lean_dec_ref(v_exprType_1315_);
v___x_1329_ = l_Lean_mkLambda(v_declName_1301_, v___x_1325_, v_type_1302_, v_exprInit_1316_);
lean_inc_ref(v_value_1305_);
lean_inc_ref(v___x_1329_);
v_exprInit_1330_ = l_Lean_Expr_app___override(v___x_1329_, v_value_1305_);
v_exprResult_1331_ = l_Lean_Expr_letE___override(v_declName_1301_, v_type_1302_, v_fst_1303_, v_exprResult_1317_, v___x_1306_);
if (v_fst_1307_ == 0)
{
lean_dec_ref(v_snd_1311_);
lean_dec_ref(v_fst_1303_);
if (v_modified_1319_ == 0)
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v_proof_1334_; lean_object* v___x_1336_; 
lean_dec_ref(v___x_1329_);
lean_dec_ref(v___x_1326_);
lean_dec_ref(v_proof_1318_);
lean_dec(v_us_1310_);
lean_dec_ref(v_value_1305_);
lean_dec_ref(v_type_1302_);
lean_dec(v_declName_1301_);
v___x_1332_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_1333_ = l_Lean_mkConst(v___x_1332_, v___x_1308_);
lean_inc_ref(v_expr_1327_);
lean_inc_ref(v_exprType_1328_);
v_proof_1334_ = l_Lean_mkAppB(v___x_1333_, v_exprType_1328_, v_expr_1327_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 4, v_proof_1334_);
lean_ctor_set(v___x_1321_, 3, v_exprResult_1331_);
lean_ctor_set(v___x_1321_, 2, v_exprInit_1330_);
lean_ctor_set(v___x_1321_, 1, v_exprType_1328_);
lean_ctor_set(v___x_1321_, 0, v_expr_1327_);
v___x_1336_ = v___x_1321_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_expr_1327_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_exprType_1328_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_exprInit_1330_);
lean_ctor_set(v_reuseFailAlloc_1338_, 3, v_exprResult_1331_);
lean_ctor_set(v_reuseFailAlloc_1338_, 4, v_proof_1334_);
lean_ctor_set_uint8(v_reuseFailAlloc_1338_, sizeof(void*)*5, v_modified_1319_);
v___x_1336_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_apply_2(v_toPure_1309_, lean_box(0), v___x_1336_);
return v___x_1337_;
}
}
else
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v_proof_1342_; lean_object* v___x_1344_; 
lean_dec(v___x_1308_);
v___x_1339_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__0));
v___x_1340_ = l_Lean_mkConst(v___x_1339_, v_us_1310_);
lean_inc_ref(v_type_1302_);
v___x_1341_ = l_Lean_mkLambda(v_declName_1301_, v___x_1325_, v_type_1302_, v_proof_1318_);
lean_inc_ref(v_exprType_1328_);
v_proof_1342_ = l_Lean_mkApp6(v___x_1340_, v_type_1302_, v_exprType_1328_, v_value_1305_, v___x_1329_, v___x_1326_, v___x_1341_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 4, v_proof_1342_);
lean_ctor_set(v___x_1321_, 3, v_exprResult_1331_);
lean_ctor_set(v___x_1321_, 2, v_exprInit_1330_);
lean_ctor_set(v___x_1321_, 1, v_exprType_1328_);
lean_ctor_set(v___x_1321_, 0, v_expr_1327_);
v___x_1344_ = v___x_1321_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_expr_1327_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v_exprType_1328_);
lean_ctor_set(v_reuseFailAlloc_1346_, 2, v_exprInit_1330_);
lean_ctor_set(v_reuseFailAlloc_1346_, 3, v_exprResult_1331_);
lean_ctor_set(v_reuseFailAlloc_1346_, 4, v_proof_1342_);
v___x_1344_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
lean_object* v___x_1345_; 
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*5, v___x_1306_);
v___x_1345_ = lean_apply_2(v_toPure_1309_, lean_box(0), v___x_1344_);
return v___x_1345_;
}
}
}
else
{
lean_dec(v___x_1308_);
if (v_modified_1319_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v_proof_1349_; lean_object* v___x_1351_; 
lean_dec_ref(v___x_1326_);
lean_dec_ref(v_proof_1318_);
lean_dec(v_declName_1301_);
v___x_1347_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__1));
v___x_1348_ = l_Lean_mkConst(v___x_1347_, v_us_1310_);
lean_inc_ref(v_exprType_1328_);
v_proof_1349_ = l_Lean_mkApp6(v___x_1348_, v_type_1302_, v_exprType_1328_, v_value_1305_, v_fst_1303_, v___x_1329_, v_snd_1311_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 4, v_proof_1349_);
lean_ctor_set(v___x_1321_, 3, v_exprResult_1331_);
lean_ctor_set(v___x_1321_, 2, v_exprInit_1330_);
lean_ctor_set(v___x_1321_, 1, v_exprType_1328_);
lean_ctor_set(v___x_1321_, 0, v_expr_1327_);
v___x_1351_ = v___x_1321_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_expr_1327_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_exprType_1328_);
lean_ctor_set(v_reuseFailAlloc_1353_, 2, v_exprInit_1330_);
lean_ctor_set(v_reuseFailAlloc_1353_, 3, v_exprResult_1331_);
lean_ctor_set(v_reuseFailAlloc_1353_, 4, v_proof_1349_);
v___x_1351_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
lean_object* v___x_1352_; 
lean_ctor_set_uint8(v___x_1351_, sizeof(void*)*5, v___x_1306_);
v___x_1352_ = lean_apply_2(v_toPure_1309_, lean_box(0), v___x_1351_);
return v___x_1352_;
}
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v_proof_1357_; lean_object* v___x_1359_; 
v___x_1354_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__2));
v___x_1355_ = l_Lean_mkConst(v___x_1354_, v_us_1310_);
lean_inc_ref(v_type_1302_);
v___x_1356_ = l_Lean_mkLambda(v_declName_1301_, v___x_1325_, v_type_1302_, v_proof_1318_);
lean_inc_ref(v_exprType_1328_);
v_proof_1357_ = l_Lean_mkApp8(v___x_1355_, v_type_1302_, v_exprType_1328_, v_value_1305_, v_fst_1303_, v___x_1329_, v___x_1326_, v_snd_1311_, v___x_1356_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 4, v_proof_1357_);
lean_ctor_set(v___x_1321_, 3, v_exprResult_1331_);
lean_ctor_set(v___x_1321_, 2, v_exprInit_1330_);
lean_ctor_set(v___x_1321_, 1, v_exprType_1328_);
lean_ctor_set(v___x_1321_, 0, v_expr_1327_);
v___x_1359_ = v___x_1321_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_expr_1327_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v_exprType_1328_);
lean_ctor_set(v_reuseFailAlloc_1361_, 2, v_exprInit_1330_);
lean_ctor_set(v_reuseFailAlloc_1361_, 3, v_exprResult_1331_);
lean_ctor_set(v_reuseFailAlloc_1361_, 4, v_proof_1357_);
v___x_1359_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
lean_object* v___x_1360_; 
lean_ctor_set_uint8(v___x_1359_, sizeof(void*)*5, v___x_1306_);
v___x_1360_ = lean_apply_2(v_toPure_1309_, lean_box(0), v___x_1359_);
return v___x_1360_;
}
}
}
}
else
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_del_object(v___x_1321_);
lean_dec_ref(v_proof_1318_);
lean_dec_ref(v_exprResult_1317_);
lean_dec_ref(v_exprInit_1316_);
lean_dec_ref(v_exprType_1315_);
lean_dec_ref(v_expr_1314_);
lean_dec_ref(v_snd_1311_);
lean_dec(v_us_1310_);
lean_dec(v_toPure_1309_);
lean_dec(v___x_1308_);
lean_dec_ref(v_value_1305_);
lean_dec_ref(v_fst_1303_);
lean_dec_ref(v_type_1302_);
lean_dec(v_declName_1301_);
v___x_1362_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__6);
v___x_1363_ = l_panic___redArg(v___x_1312_, v___x_1362_);
return v___x_1363_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed(lean_object* v_declName_1365_, lean_object* v_type_1366_, lean_object* v_fst_1367_, lean_object* v___x_1368_, lean_object* v_value_1369_, lean_object* v___x_1370_, lean_object* v_fst_1371_, lean_object* v___x_1372_, lean_object* v_toPure_1373_, lean_object* v_us_1374_, lean_object* v_snd_1375_, lean_object* v___x_1376_, lean_object* v_rb_1377_){
_start:
{
uint8_t v___x_9138__boxed_1378_; uint8_t v_fst_9139__boxed_1379_; lean_object* v_res_1380_; 
v___x_9138__boxed_1378_ = lean_unbox(v___x_1370_);
v_fst_9139__boxed_1379_ = lean_unbox(v_fst_1371_);
v_res_1380_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7(v_declName_1365_, v_type_1366_, v_fst_1367_, v___x_1368_, v_value_1369_, v___x_9138__boxed_1378_, v_fst_9139__boxed_1379_, v___x_1372_, v_toPure_1373_, v_us_1374_, v_snd_1375_, v___x_1376_, v_rb_1377_);
lean_dec(v___x_1376_);
lean_dec(v___x_1368_);
return v_res_1380_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0(void){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = l_instMonadEIO___redArg();
return v___x_1384_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1(void){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__0);
v___x_1386_ = l_StateRefT_x27_instMonad___redArg(v___x_1385_);
return v___x_1386_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1392_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1393_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7));
v___x_1394_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1393_, v___x_1392_);
return v___x_1394_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___f_1397_; lean_object* v___x_1398_; 
v___x_1396_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__8);
v___f_1397_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6));
v___x_1398_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1397_, v___x_1396_);
return v___x_1398_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1400_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1401_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__7));
v___x_1402_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__11));
v___x_1403_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1402_, v___x_1401_, v___x_1400_);
return v___x_1403_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13(void){
_start:
{
lean_object* v___x_1405_; lean_object* v___f_1406_; lean_object* v___f_1407_; lean_object* v___x_1408_; 
v___x_1405_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__12);
v___f_1406_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__6));
v___f_1407_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__10));
v___x_1408_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1407_, v___f_1406_, v___x_1405_);
return v___x_1408_;
}
}
static lean_object* _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15(void){
_start:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1410_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__14));
v___x_1411_ = lean_unsigned_to_nat(34u);
v___x_1412_ = lean_unsigned_to_nat(217u);
v___x_1413_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__4));
v___x_1414_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_1415_ = l_mkPanicMessageWithDecl(v___x_1414_, v___x_1413_, v___x_1412_, v___x_1411_, v___x_1410_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(lean_object* v_inst_1416_, lean_object* v_declName_1417_, lean_object* v_type_1418_, lean_object* v_value_1419_, uint8_t v___x_1420_, lean_object* v___x_1421_, lean_object* v_toPure_1422_, lean_object* v_us_1423_, lean_object* v_decl_1424_, lean_object* v_x_1425_, lean_object* v_i_1426_, lean_object* v_xs_1427_, lean_object* v_inst_1428_, lean_object* v_inst_1429_, lean_object* v_inst_1430_, lean_object* v_info_1431_, lean_object* v_fixed_1432_, lean_object* v_used_1433_, lean_object* v_body_1434_, lean_object* v_toBind_1435_, lean_object* v_val_x27_1436_, lean_object* v_val_1437_, lean_object* v_____r_1438_){
_start:
{
uint8_t v___y_1440_; lean_object* v___y_1441_; uint8_t v___x_1457_; 
v___x_1457_ = lean_expr_eqv(v_val_1437_, v_val_x27_1436_);
if (v___x_1457_ == 0)
{
if (v___x_1420_ == 0)
{
lean_inc_ref(v_value_1419_);
v___y_1440_ = v___x_1420_;
v___y_1441_ = v_value_1419_;
goto v___jp_1439_;
}
else
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_expr_abstract(v_val_x27_1436_, v_xs_1427_);
v___y_1440_ = v___x_1420_;
v___y_1441_ = v___x_1458_;
goto v___jp_1439_;
}
}
else
{
uint8_t v___x_1459_; 
v___x_1459_ = 0;
lean_inc_ref(v_value_1419_);
v___y_1440_ = v___x_1459_;
v___y_1441_ = v_value_1419_;
goto v___jp_1439_;
}
v___jp_1439_:
{
lean_object* v_withNewLemmas_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___f_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v_withNewLemmas_1442_ = lean_ctor_get(v_inst_1416_, 0);
lean_inc(v_withNewLemmas_1442_);
v___x_1443_ = lean_box(v___x_1420_);
v___x_1444_ = lean_box(v___y_1440_);
v___f_1445_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__3___boxed), 10, 9);
lean_closure_set(v___f_1445_, 0, v_declName_1417_);
lean_closure_set(v___f_1445_, 1, v_type_1418_);
lean_closure_set(v___f_1445_, 2, v___y_1441_);
lean_closure_set(v___f_1445_, 3, v_value_1419_);
lean_closure_set(v___f_1445_, 4, v___x_1443_);
lean_closure_set(v___f_1445_, 5, v___x_1421_);
lean_closure_set(v___f_1445_, 6, v___x_1444_);
lean_closure_set(v___f_1445_, 7, v_toPure_1422_);
lean_closure_set(v___f_1445_, 8, v_us_1423_);
v___x_1446_ = lean_box(0);
v___x_1447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1447_, 0, v_decl_1424_);
lean_ctor_set(v___x_1447_, 1, v___x_1446_);
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_mk_empty_array_with_capacity(v___x_1448_);
lean_inc_ref(v_x_1425_);
v___x_1450_ = lean_array_push(v___x_1449_, v_x_1425_);
v___x_1451_ = lean_nat_add(v_i_1426_, v___x_1448_);
v___x_1452_ = lean_array_push(v_xs_1427_, v_x_1425_);
lean_inc_ref(v_inst_1430_);
lean_inc_ref(v_inst_1428_);
v___x_1453_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1428_, v_inst_1429_, v_inst_1430_, v_inst_1416_, v_info_1431_, v_fixed_1432_, v_used_1433_, v_body_1434_, v___x_1451_, v___x_1452_);
v___x_1454_ = lean_apply_4(v_toBind_1435_, lean_box(0), lean_box(0), v___x_1453_, v___f_1445_);
v___x_1455_ = lean_apply_3(v_withNewLemmas_1442_, lean_box(0), v___x_1450_, v___x_1454_);
v___x_1456_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1430_, v_inst_1428_, v___x_1447_, v___x_1455_);
return v___x_1456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_1460_ = _args[0];
lean_object* v_declName_1461_ = _args[1];
lean_object* v_type_1462_ = _args[2];
lean_object* v_value_1463_ = _args[3];
lean_object* v___x_1464_ = _args[4];
lean_object* v___x_1465_ = _args[5];
lean_object* v_toPure_1466_ = _args[6];
lean_object* v_us_1467_ = _args[7];
lean_object* v_decl_1468_ = _args[8];
lean_object* v_x_1469_ = _args[9];
lean_object* v_i_1470_ = _args[10];
lean_object* v_xs_1471_ = _args[11];
lean_object* v_inst_1472_ = _args[12];
lean_object* v_inst_1473_ = _args[13];
lean_object* v_inst_1474_ = _args[14];
lean_object* v_info_1475_ = _args[15];
lean_object* v_fixed_1476_ = _args[16];
lean_object* v_used_1477_ = _args[17];
lean_object* v_body_1478_ = _args[18];
lean_object* v_toBind_1479_ = _args[19];
lean_object* v_val_x27_1480_ = _args[20];
lean_object* v_val_1481_ = _args[21];
lean_object* v_____r_1482_ = _args[22];
_start:
{
uint8_t v___x_9396__boxed_1483_; lean_object* v_res_1484_; 
v___x_9396__boxed_1483_ = lean_unbox(v___x_1464_);
v_res_1484_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4(v_inst_1460_, v_declName_1461_, v_type_1462_, v_value_1463_, v___x_9396__boxed_1483_, v___x_1465_, v_toPure_1466_, v_us_1467_, v_decl_1468_, v_x_1469_, v_i_1470_, v_xs_1471_, v_inst_1472_, v_inst_1473_, v_inst_1474_, v_info_1475_, v_fixed_1476_, v_used_1477_, v_body_1478_, v_toBind_1479_, v_val_x27_1480_, v_val_1481_, v_____r_1482_);
lean_dec_ref(v_val_1481_);
lean_dec_ref(v_val_x27_1480_);
lean_dec(v_i_1470_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(lean_object* v_inst_1485_, lean_object* v_declName_1486_, lean_object* v_type_1487_, lean_object* v_value_1488_, uint8_t v___x_1489_, lean_object* v___x_1490_, lean_object* v_toPure_1491_, lean_object* v_us_1492_, lean_object* v_decl_1493_, lean_object* v_x_1494_, lean_object* v_i_1495_, lean_object* v_xs_1496_, lean_object* v_inst_1497_, lean_object* v_inst_1498_, lean_object* v_inst_1499_, lean_object* v_info_1500_, lean_object* v_fixed_1501_, lean_object* v_used_1502_, lean_object* v_body_1503_, lean_object* v_toBind_1504_, lean_object* v_val_1505_, lean_object* v___x_1506_, lean_object* v___x_1507_, lean_object* v_toMonadRef_1508_, lean_object* v___x_1509_, lean_object* v_val_x27_1510_){
_start:
{
lean_object* v___x_1511_; lean_object* v___f_1512_; lean_object* v_cls_1513_; lean_object* v___f_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1511_ = lean_box(v___x_1489_);
lean_inc_ref(v_val_1505_);
lean_inc_ref(v_val_x27_1510_);
lean_inc(v_toBind_1504_);
lean_inc(v_inst_1498_);
lean_inc(v_declName_1486_);
v___f_1512_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__4___boxed), 23, 22);
lean_closure_set(v___f_1512_, 0, v_inst_1485_);
lean_closure_set(v___f_1512_, 1, v_declName_1486_);
lean_closure_set(v___f_1512_, 2, v_type_1487_);
lean_closure_set(v___f_1512_, 3, v_value_1488_);
lean_closure_set(v___f_1512_, 4, v___x_1511_);
lean_closure_set(v___f_1512_, 5, v___x_1490_);
lean_closure_set(v___f_1512_, 6, v_toPure_1491_);
lean_closure_set(v___f_1512_, 7, v_us_1492_);
lean_closure_set(v___f_1512_, 8, v_decl_1493_);
lean_closure_set(v___f_1512_, 9, v_x_1494_);
lean_closure_set(v___f_1512_, 10, v_i_1495_);
lean_closure_set(v___f_1512_, 11, v_xs_1496_);
lean_closure_set(v___f_1512_, 12, v_inst_1497_);
lean_closure_set(v___f_1512_, 13, v_inst_1498_);
lean_closure_set(v___f_1512_, 14, v_inst_1499_);
lean_closure_set(v___f_1512_, 15, v_info_1500_);
lean_closure_set(v___f_1512_, 16, v_fixed_1501_);
lean_closure_set(v___f_1512_, 17, v_used_1502_);
lean_closure_set(v___f_1512_, 18, v_body_1503_);
lean_closure_set(v___f_1512_, 19, v_toBind_1504_);
lean_closure_set(v___f_1512_, 20, v_val_x27_1510_);
lean_closure_set(v___f_1512_, 21, v_val_1505_);
v_cls_1513_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
v___f_1514_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_1514_, 0, v_cls_1513_);
lean_closure_set(v___f_1514_, 1, v_declName_1486_);
lean_closure_set(v___f_1514_, 2, v_val_1505_);
lean_closure_set(v___f_1514_, 3, v_val_x27_1510_);
lean_closure_set(v___f_1514_, 4, v___x_1506_);
lean_closure_set(v___f_1514_, 5, v___x_1507_);
lean_closure_set(v___f_1514_, 6, v_toMonadRef_1508_);
lean_closure_set(v___f_1514_, 7, v___x_1509_);
v___x_1515_ = lean_apply_2(v_inst_1498_, lean_box(0), v___f_1514_);
v___x_1516_ = lean_apply_4(v_toBind_1504_, lean_box(0), lean_box(0), v___x_1515_, v___f_1512_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_inst_1517_ = _args[0];
lean_object* v_declName_1518_ = _args[1];
lean_object* v_type_1519_ = _args[2];
lean_object* v_value_1520_ = _args[3];
lean_object* v___x_1521_ = _args[4];
lean_object* v___x_1522_ = _args[5];
lean_object* v_toPure_1523_ = _args[6];
lean_object* v_us_1524_ = _args[7];
lean_object* v_decl_1525_ = _args[8];
lean_object* v_x_1526_ = _args[9];
lean_object* v_i_1527_ = _args[10];
lean_object* v_xs_1528_ = _args[11];
lean_object* v_inst_1529_ = _args[12];
lean_object* v_inst_1530_ = _args[13];
lean_object* v_inst_1531_ = _args[14];
lean_object* v_info_1532_ = _args[15];
lean_object* v_fixed_1533_ = _args[16];
lean_object* v_used_1534_ = _args[17];
lean_object* v_body_1535_ = _args[18];
lean_object* v_toBind_1536_ = _args[19];
lean_object* v_val_1537_ = _args[20];
lean_object* v___x_1538_ = _args[21];
lean_object* v___x_1539_ = _args[22];
lean_object* v_toMonadRef_1540_ = _args[23];
lean_object* v___x_1541_ = _args[24];
lean_object* v_val_x27_1542_ = _args[25];
_start:
{
uint8_t v___x_9346__boxed_1543_; lean_object* v_res_1544_; 
v___x_9346__boxed_1543_ = lean_unbox(v___x_1521_);
v_res_1544_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6(v_inst_1517_, v_declName_1518_, v_type_1519_, v_value_1520_, v___x_9346__boxed_1543_, v___x_1522_, v_toPure_1523_, v_us_1524_, v_decl_1525_, v_x_1526_, v_i_1527_, v_xs_1528_, v_inst_1529_, v_inst_1530_, v_inst_1531_, v_info_1532_, v_fixed_1533_, v_used_1534_, v_body_1535_, v_toBind_1536_, v_val_1537_, v___x_1538_, v___x_1539_, v_toMonadRef_1540_, v___x_1541_, v_val_x27_1542_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(lean_object* v_inst_1545_, lean_object* v_decl_1546_, lean_object* v_declName_1547_, lean_object* v_type_1548_, lean_object* v_value_1549_, uint8_t v___x_1550_, lean_object* v___x_1551_, lean_object* v_toPure_1552_, lean_object* v_us_1553_, lean_object* v___x_1554_, lean_object* v_x_1555_, lean_object* v_i_1556_, lean_object* v_xs_1557_, lean_object* v_inst_1558_, lean_object* v_inst_1559_, lean_object* v_inst_1560_, lean_object* v_info_1561_, lean_object* v_fixed_1562_, lean_object* v_used_1563_, lean_object* v_body_1564_, lean_object* v_toBind_1565_, lean_object* v_____x_1566_){
_start:
{
lean_object* v_snd_1567_; lean_object* v_fst_1568_; lean_object* v_fst_1569_; lean_object* v_snd_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1590_; 
v_snd_1567_ = lean_ctor_get(v_____x_1566_, 1);
lean_inc(v_snd_1567_);
v_fst_1568_ = lean_ctor_get(v_____x_1566_, 0);
lean_inc(v_fst_1568_);
lean_dec_ref(v_____x_1566_);
v_fst_1569_ = lean_ctor_get(v_snd_1567_, 0);
v_snd_1570_ = lean_ctor_get(v_snd_1567_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_snd_1567_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1572_ = v_snd_1567_;
v_isShared_1573_ = v_isSharedCheck_1590_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_snd_1570_);
lean_inc(v_fst_1569_);
lean_dec(v_snd_1567_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1590_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v_withNewLemmas_1574_; lean_object* v___x_1575_; lean_object* v___x_1577_; 
v_withNewLemmas_1574_ = lean_ctor_get(v_inst_1545_, 0);
lean_inc(v_withNewLemmas_1574_);
v___x_1575_ = lean_box(0);
if (v_isShared_1573_ == 0)
{
lean_ctor_set_tag(v___x_1572_, 1);
lean_ctor_set(v___x_1572_, 1, v___x_1575_);
lean_ctor_set(v___x_1572_, 0, v_decl_1546_);
v___x_1577_ = v___x_1572_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_decl_1546_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v___x_1575_);
v___x_1577_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___f_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1578_ = lean_unsigned_to_nat(1u);
v___x_1579_ = lean_box(v___x_1550_);
v___f_1580_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___boxed), 13, 12);
lean_closure_set(v___f_1580_, 0, v_declName_1547_);
lean_closure_set(v___f_1580_, 1, v_type_1548_);
lean_closure_set(v___f_1580_, 2, v_fst_1568_);
lean_closure_set(v___f_1580_, 3, v___x_1578_);
lean_closure_set(v___f_1580_, 4, v_value_1549_);
lean_closure_set(v___f_1580_, 5, v___x_1579_);
lean_closure_set(v___f_1580_, 6, v_fst_1569_);
lean_closure_set(v___f_1580_, 7, v___x_1551_);
lean_closure_set(v___f_1580_, 8, v_toPure_1552_);
lean_closure_set(v___f_1580_, 9, v_us_1553_);
lean_closure_set(v___f_1580_, 10, v_snd_1570_);
lean_closure_set(v___f_1580_, 11, v___x_1554_);
v___x_1581_ = lean_mk_empty_array_with_capacity(v___x_1578_);
lean_inc_ref(v_x_1555_);
v___x_1582_ = lean_array_push(v___x_1581_, v_x_1555_);
v___x_1583_ = lean_nat_add(v_i_1556_, v___x_1578_);
v___x_1584_ = lean_array_push(v_xs_1557_, v_x_1555_);
lean_inc_ref(v_inst_1560_);
lean_inc_ref(v_inst_1558_);
v___x_1585_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1558_, v_inst_1559_, v_inst_1560_, v_inst_1545_, v_info_1561_, v_fixed_1562_, v_used_1563_, v_body_1564_, v___x_1583_, v___x_1584_);
v___x_1586_ = lean_apply_4(v_toBind_1565_, lean_box(0), lean_box(0), v___x_1585_, v___f_1580_);
v___x_1587_ = lean_apply_3(v_withNewLemmas_1574_, lean_box(0), v___x_1582_, v___x_1586_);
v___x_1588_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_1560_, v_inst_1558_, v___x_1577_, v___x_1587_);
return v___x_1588_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_inst_1591_ = _args[0];
lean_object* v_decl_1592_ = _args[1];
lean_object* v_declName_1593_ = _args[2];
lean_object* v_type_1594_ = _args[3];
lean_object* v_value_1595_ = _args[4];
lean_object* v___x_1596_ = _args[5];
lean_object* v___x_1597_ = _args[6];
lean_object* v_toPure_1598_ = _args[7];
lean_object* v_us_1599_ = _args[8];
lean_object* v___x_1600_ = _args[9];
lean_object* v_x_1601_ = _args[10];
lean_object* v_i_1602_ = _args[11];
lean_object* v_xs_1603_ = _args[12];
lean_object* v_inst_1604_ = _args[13];
lean_object* v_inst_1605_ = _args[14];
lean_object* v_inst_1606_ = _args[15];
lean_object* v_info_1607_ = _args[16];
lean_object* v_fixed_1608_ = _args[17];
lean_object* v_used_1609_ = _args[18];
lean_object* v_body_1610_ = _args[19];
lean_object* v_toBind_1611_ = _args[20];
lean_object* v_____x_1612_ = _args[21];
_start:
{
uint8_t v___x_9368__boxed_1613_; lean_object* v_res_1614_; 
v___x_9368__boxed_1613_ = lean_unbox(v___x_1596_);
v_res_1614_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8(v_inst_1591_, v_decl_1592_, v_declName_1593_, v_type_1594_, v_value_1595_, v___x_9368__boxed_1613_, v___x_1597_, v_toPure_1598_, v_us_1599_, v___x_1600_, v_x_1601_, v_i_1602_, v_xs_1603_, v_inst_1604_, v_inst_1605_, v_inst_1606_, v_info_1607_, v_fixed_1608_, v_used_1609_, v_body_1610_, v_toBind_1611_, v_____x_1612_);
lean_dec(v_i_1602_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed(lean_object** _args){
lean_object* v___x_1615_ = _args[0];
lean_object* v_declName_1616_ = _args[1];
lean_object* v_type_1617_ = _args[2];
lean_object* v_value_1618_ = _args[3];
lean_object* v_us_1619_ = _args[4];
lean_object* v___x_1620_ = _args[5];
lean_object* v___x_1621_ = _args[6];
lean_object* v_toPure_1622_ = _args[7];
lean_object* v_i_1623_ = _args[8];
lean_object* v_xs_1624_ = _args[9];
lean_object* v_inst_1625_ = _args[10];
lean_object* v_inst_1626_ = _args[11];
lean_object* v_inst_1627_ = _args[12];
lean_object* v_inst_1628_ = _args[13];
lean_object* v_info_1629_ = _args[14];
lean_object* v_fixed_1630_ = _args[15];
lean_object* v_used_1631_ = _args[16];
lean_object* v_body_1632_ = _args[17];
lean_object* v_toBind_1633_ = _args[18];
lean_object* v_____r_1634_ = _args[19];
_start:
{
uint8_t v___x_9328__boxed_1635_; lean_object* v_res_1636_; 
v___x_9328__boxed_1635_ = lean_unbox(v___x_1621_);
v_res_1636_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(v___x_1615_, v_declName_1616_, v_type_1617_, v_value_1618_, v_us_1619_, v___x_1620_, v___x_9328__boxed_1635_, v_toPure_1622_, v_i_1623_, v_xs_1624_, v_inst_1625_, v_inst_1626_, v_inst_1627_, v_inst_1628_, v_info_1629_, v_fixed_1630_, v_used_1631_, v_body_1632_, v_toBind_1633_, v_____r_1634_);
lean_dec(v_i_1623_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(lean_object* v_inst_1637_, lean_object* v_inst_1638_, lean_object* v_inst_1639_, lean_object* v_inst_1640_, lean_object* v_info_1641_, lean_object* v_fixed_1642_, lean_object* v_used_1643_, lean_object* v_e_1644_, lean_object* v_i_1645_, lean_object* v_xs_1646_){
_start:
{
lean_object* v___x_1647_; lean_object* v_toApplicative_1648_; lean_object* v_toFunctor_1649_; lean_object* v_toSeq_1650_; lean_object* v_toSeqLeft_1651_; lean_object* v_toSeqRight_1652_; lean_object* v___f_1653_; lean_object* v___f_1654_; lean_object* v___f_1655_; lean_object* v___f_1656_; lean_object* v___x_1657_; lean_object* v___f_1658_; lean_object* v___f_1659_; lean_object* v___f_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v_toApplicative_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1757_; 
v___x_1647_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__1);
v_toApplicative_1648_ = lean_ctor_get(v___x_1647_, 0);
v_toFunctor_1649_ = lean_ctor_get(v_toApplicative_1648_, 0);
v_toSeq_1650_ = lean_ctor_get(v_toApplicative_1648_, 2);
v_toSeqLeft_1651_ = lean_ctor_get(v_toApplicative_1648_, 3);
v_toSeqRight_1652_ = lean_ctor_get(v_toApplicative_1648_, 4);
v___f_1653_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__2));
v___f_1654_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1649_, 2);
v___f_1655_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1655_, 0, v_toFunctor_1649_);
v___f_1656_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1656_, 0, v_toFunctor_1649_);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___f_1655_);
lean_ctor_set(v___x_1657_, 1, v___f_1656_);
lean_inc(v_toSeqRight_1652_);
v___f_1658_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1658_, 0, v_toSeqRight_1652_);
lean_inc(v_toSeqLeft_1651_);
v___f_1659_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1659_, 0, v_toSeqLeft_1651_);
lean_inc(v_toSeq_1650_);
v___f_1660_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1660_, 0, v_toSeq_1650_);
v___x_1661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1657_);
lean_ctor_set(v___x_1661_, 1, v___f_1653_);
lean_ctor_set(v___x_1661_, 2, v___f_1660_);
lean_ctor_set(v___x_1661_, 3, v___f_1659_);
lean_ctor_set(v___x_1661_, 4, v___f_1658_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
lean_ctor_set(v___x_1662_, 1, v___f_1654_);
v___x_1663_ = l_StateRefT_x27_instMonad___redArg(v___x_1662_);
v_toApplicative_1664_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1757_ == 0)
{
lean_object* v_unused_1758_; 
v_unused_1758_ = lean_ctor_get(v___x_1663_, 1);
lean_dec(v_unused_1758_);
v___x_1666_ = v___x_1663_;
v_isShared_1667_ = v_isSharedCheck_1757_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_toApplicative_1664_);
lean_dec(v___x_1663_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1757_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v_toFunctor_1668_; lean_object* v_toSeq_1669_; lean_object* v_toSeqLeft_1670_; lean_object* v_toSeqRight_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1755_; 
v_toFunctor_1668_ = lean_ctor_get(v_toApplicative_1664_, 0);
v_toSeq_1669_ = lean_ctor_get(v_toApplicative_1664_, 2);
v_toSeqLeft_1670_ = lean_ctor_get(v_toApplicative_1664_, 3);
v_toSeqRight_1671_ = lean_ctor_get(v_toApplicative_1664_, 4);
v_isSharedCheck_1755_ = !lean_is_exclusive(v_toApplicative_1664_);
if (v_isSharedCheck_1755_ == 0)
{
lean_object* v_unused_1756_; 
v_unused_1756_ = lean_ctor_get(v_toApplicative_1664_, 1);
lean_dec(v_unused_1756_);
v___x_1673_ = v_toApplicative_1664_;
v_isShared_1674_ = v_isSharedCheck_1755_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_toSeqRight_1671_);
lean_inc(v_toSeqLeft_1670_);
lean_inc(v_toSeq_1669_);
lean_inc(v_toFunctor_1668_);
lean_dec(v_toApplicative_1664_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1755_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___f_1675_; lean_object* v___f_1676_; lean_object* v___f_1677_; lean_object* v___f_1678_; lean_object* v___x_1679_; lean_object* v___f_1680_; lean_object* v___f_1681_; lean_object* v___f_1682_; lean_object* v___x_1684_; 
v___f_1675_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__4));
v___f_1676_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__5));
lean_inc_ref(v_toFunctor_1668_);
v___f_1677_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1677_, 0, v_toFunctor_1668_);
v___f_1678_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1678_, 0, v_toFunctor_1668_);
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___f_1677_);
lean_ctor_set(v___x_1679_, 1, v___f_1678_);
v___f_1680_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1680_, 0, v_toSeqRight_1671_);
v___f_1681_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1681_, 0, v_toSeqLeft_1670_);
v___f_1682_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1682_, 0, v_toSeq_1669_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 4, v___f_1680_);
lean_ctor_set(v___x_1673_, 3, v___f_1681_);
lean_ctor_set(v___x_1673_, 2, v___f_1682_);
lean_ctor_set(v___x_1673_, 1, v___f_1675_);
lean_ctor_set(v___x_1673_, 0, v___x_1679_);
v___x_1684_ = v___x_1673_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1679_);
lean_ctor_set(v_reuseFailAlloc_1754_, 1, v___f_1675_);
lean_ctor_set(v_reuseFailAlloc_1754_, 2, v___f_1682_);
lean_ctor_set(v_reuseFailAlloc_1754_, 3, v___f_1681_);
lean_ctor_set(v_reuseFailAlloc_1754_, 4, v___f_1680_);
v___x_1684_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v___x_1686_; 
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 1, v___f_1676_);
lean_ctor_set(v___x_1666_, 0, v___x_1684_);
v___x_1686_ = v___x_1666_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v___f_1676_);
v___x_1686_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v_toApplicative_1689_; lean_object* v_toMonadRef_1690_; lean_object* v_haveInfo_1691_; lean_object* v_body_1692_; lean_object* v_bodyType_1693_; lean_object* v_level_1694_; lean_object* v_toBind_1695_; lean_object* v_toPure_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; 
v___x_1687_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__9);
v___x_1688_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__13);
v_toApplicative_1689_ = lean_ctor_get(v_inst_1637_, 0);
v_toMonadRef_1690_ = lean_ctor_get(v___x_1688_, 0);
v_haveInfo_1691_ = lean_ctor_get(v_info_1641_, 0);
v_body_1692_ = lean_ctor_get(v_info_1641_, 3);
v_bodyType_1693_ = lean_ctor_get(v_info_1641_, 4);
v_level_1694_ = lean_ctor_get(v_info_1641_, 5);
v_toBind_1695_ = lean_ctor_get(v_inst_1637_, 1);
lean_inc(v_toBind_1695_);
v_toPure_1696_ = lean_ctor_get(v_toApplicative_1689_, 1);
lean_inc(v_toPure_1696_);
v___x_1697_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1698_ = lean_array_get_size(v_haveInfo_1691_);
v___x_1699_ = lean_nat_dec_lt(v_i_1645_, v___x_1698_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; lean_object* v___f_1701_; lean_object* v_cls_1702_; lean_object* v___f_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
lean_inc(v_level_1694_);
lean_inc_ref(v_bodyType_1693_);
lean_inc_ref_n(v_body_1692_, 2);
lean_dec(v_i_1645_);
lean_dec_ref(v_used_1643_);
lean_dec_ref(v_fixed_1642_);
lean_dec_ref(v_info_1641_);
lean_dec_ref(v_inst_1639_);
lean_dec_ref(v_inst_1637_);
v___x_1700_ = lean_box(v___x_1699_);
lean_inc(v_toBind_1695_);
v___f_1701_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__1___boxed), 10, 9);
lean_closure_set(v___f_1701_, 0, v_inst_1640_);
lean_closure_set(v___f_1701_, 1, v_bodyType_1693_);
lean_closure_set(v___f_1701_, 2, v_xs_1646_);
lean_closure_set(v___f_1701_, 3, v_level_1694_);
lean_closure_set(v___f_1701_, 4, v_e_1644_);
lean_closure_set(v___f_1701_, 5, v___x_1700_);
lean_closure_set(v___f_1701_, 6, v_toPure_1696_);
lean_closure_set(v___f_1701_, 7, v_body_1692_);
lean_closure_set(v___f_1701_, 8, v_toBind_1695_);
v_cls_1702_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
lean_inc_ref(v_toMonadRef_1690_);
v___f_1703_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__2___boxed), 11, 6);
lean_closure_set(v___f_1703_, 0, v_cls_1702_);
lean_closure_set(v___f_1703_, 1, v_body_1692_);
lean_closure_set(v___f_1703_, 2, v___x_1686_);
lean_closure_set(v___f_1703_, 3, v___x_1687_);
lean_closure_set(v___f_1703_, 4, v_toMonadRef_1690_);
lean_closure_set(v___f_1703_, 5, v___x_1697_);
v___x_1704_ = lean_apply_2(v_inst_1638_, lean_box(0), v___f_1703_);
v___x_1705_ = lean_apply_4(v_toBind_1695_, lean_box(0), lean_box(0), v___x_1704_, v___f_1701_);
return v___x_1705_;
}
else
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = l_Lean_Meta_instInhabitedSimpHaveResult_default;
lean_inc_ref(v_inst_1637_);
v___x_1707_ = l_instInhabitedOfMonad___redArg(v_inst_1637_, v___x_1706_);
if (lean_obj_tag(v_e_1644_) == 8)
{
uint8_t v_nondep_1711_; 
v_nondep_1711_ = lean_ctor_get_uint8(v_e_1644_, sizeof(void*)*4 + 8);
if (v_nondep_1711_ == 1)
{
lean_object* v_declName_1712_; lean_object* v_type_1713_; lean_object* v_value_1714_; lean_object* v_body_1715_; lean_object* v_hinfo_1716_; lean_object* v_decl_1717_; lean_object* v_level_1718_; lean_object* v_x_1719_; lean_object* v_val_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v_us_1723_; lean_object* v___x_1724_; lean_object* v___f_1725_; lean_object* v___x_1730_; lean_object* v___f_1731_; lean_object* v___f_1732_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v_declName_1712_ = lean_ctor_get(v_e_1644_, 0);
lean_inc_n(v_declName_1712_, 3);
v_type_1713_ = lean_ctor_get(v_e_1644_, 1);
lean_inc_ref_n(v_type_1713_, 3);
v_value_1714_ = lean_ctor_get(v_e_1644_, 2);
lean_inc_ref_n(v_value_1714_, 3);
v_body_1715_ = lean_ctor_get(v_e_1644_, 3);
lean_inc_ref_n(v_body_1715_, 3);
lean_dec_ref_known(v_e_1644_, 4);
v_hinfo_1716_ = lean_array_fget_borrowed(v_haveInfo_1691_, v_i_1645_);
v_decl_1717_ = lean_ctor_get(v_hinfo_1716_, 2);
v_level_1718_ = lean_ctor_get(v_hinfo_1716_, 3);
lean_inc_ref_n(v_decl_1717_, 3);
v_x_1719_ = l_Lean_LocalDecl_toExpr(v_decl_1717_);
v_val_1720_ = l_Lean_LocalDecl_value(v_decl_1717_, v___x_1699_);
v___x_1721_ = lean_box(0);
lean_inc(v_level_1694_);
v___x_1722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_level_1694_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
lean_inc_ref_n(v___x_1722_, 3);
lean_inc(v_level_1718_);
v_us_1723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_us_1723_, 0, v_level_1718_);
lean_ctor_set(v_us_1723_, 1, v___x_1722_);
v___x_1724_ = lean_box(v___x_1699_);
lean_inc_ref(v_toMonadRef_1690_);
lean_inc_ref(v___x_1686_);
lean_inc_ref(v_val_1720_);
lean_inc_n(v_toBind_1695_, 2);
lean_inc_ref_n(v_used_1643_, 2);
lean_inc_ref_n(v_fixed_1642_, 2);
lean_inc_ref_n(v_info_1641_, 2);
lean_inc_ref_n(v_inst_1639_, 2);
lean_inc_n(v_inst_1638_, 2);
lean_inc_ref_n(v_inst_1637_, 2);
lean_inc_ref_n(v_xs_1646_, 2);
lean_inc_n(v_i_1645_, 2);
lean_inc_ref(v_x_1719_);
lean_inc_ref_n(v_us_1723_, 2);
lean_inc_n(v_toPure_1696_, 2);
lean_inc_ref_n(v_inst_1640_, 2);
v___f_1725_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__6___boxed), 26, 25);
lean_closure_set(v___f_1725_, 0, v_inst_1640_);
lean_closure_set(v___f_1725_, 1, v_declName_1712_);
lean_closure_set(v___f_1725_, 2, v_type_1713_);
lean_closure_set(v___f_1725_, 3, v_value_1714_);
lean_closure_set(v___f_1725_, 4, v___x_1724_);
lean_closure_set(v___f_1725_, 5, v___x_1722_);
lean_closure_set(v___f_1725_, 6, v_toPure_1696_);
lean_closure_set(v___f_1725_, 7, v_us_1723_);
lean_closure_set(v___f_1725_, 8, v_decl_1717_);
lean_closure_set(v___f_1725_, 9, v_x_1719_);
lean_closure_set(v___f_1725_, 10, v_i_1645_);
lean_closure_set(v___f_1725_, 11, v_xs_1646_);
lean_closure_set(v___f_1725_, 12, v_inst_1637_);
lean_closure_set(v___f_1725_, 13, v_inst_1638_);
lean_closure_set(v___f_1725_, 14, v_inst_1639_);
lean_closure_set(v___f_1725_, 15, v_info_1641_);
lean_closure_set(v___f_1725_, 16, v_fixed_1642_);
lean_closure_set(v___f_1725_, 17, v_used_1643_);
lean_closure_set(v___f_1725_, 18, v_body_1715_);
lean_closure_set(v___f_1725_, 19, v_toBind_1695_);
lean_closure_set(v___f_1725_, 20, v_val_1720_);
lean_closure_set(v___f_1725_, 21, v___x_1686_);
lean_closure_set(v___f_1725_, 22, v___x_1687_);
lean_closure_set(v___f_1725_, 23, v_toMonadRef_1690_);
lean_closure_set(v___f_1725_, 24, v___x_1697_);
v___x_1730_ = lean_box(v___x_1699_);
v___f_1731_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__8___boxed), 22, 21);
lean_closure_set(v___f_1731_, 0, v_inst_1640_);
lean_closure_set(v___f_1731_, 1, v_decl_1717_);
lean_closure_set(v___f_1731_, 2, v_declName_1712_);
lean_closure_set(v___f_1731_, 3, v_type_1713_);
lean_closure_set(v___f_1731_, 4, v_value_1714_);
lean_closure_set(v___f_1731_, 5, v___x_1730_);
lean_closure_set(v___f_1731_, 6, v___x_1722_);
lean_closure_set(v___f_1731_, 7, v_toPure_1696_);
lean_closure_set(v___f_1731_, 8, v_us_1723_);
lean_closure_set(v___f_1731_, 9, v___x_1707_);
lean_closure_set(v___f_1731_, 10, v_x_1719_);
lean_closure_set(v___f_1731_, 11, v_i_1645_);
lean_closure_set(v___f_1731_, 12, v_xs_1646_);
lean_closure_set(v___f_1731_, 13, v_inst_1637_);
lean_closure_set(v___f_1731_, 14, v_inst_1638_);
lean_closure_set(v___f_1731_, 15, v_inst_1639_);
lean_closure_set(v___f_1731_, 16, v_info_1641_);
lean_closure_set(v___f_1731_, 17, v_fixed_1642_);
lean_closure_set(v___f_1731_, 18, v_used_1643_);
lean_closure_set(v___f_1731_, 19, v_body_1715_);
lean_closure_set(v___f_1731_, 20, v_toBind_1695_);
v___f_1732_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__9), 2, 1);
lean_closure_set(v___f_1732_, 0, v___f_1731_);
v___x_1743_ = lean_array_get_size(v_used_1643_);
v___x_1744_ = lean_nat_dec_lt(v_i_1645_, v___x_1743_);
if (v___x_1744_ == 0)
{
lean_inc(v_level_1718_);
lean_dec_ref_known(v_us_1723_, 2);
lean_dec_ref_known(v___x_1722_, 2);
lean_dec_ref(v_body_1715_);
lean_dec_ref(v_used_1643_);
lean_dec_ref(v_info_1641_);
lean_dec_ref(v_inst_1639_);
lean_dec_ref(v_inst_1637_);
goto v___jp_1733_;
}
else
{
lean_object* v___x_1745_; uint8_t v___x_1746_; 
v___x_1745_ = lean_array_fget_borrowed(v_used_1643_, v_i_1645_);
v___x_1746_ = lean_unbox(v___x_1745_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; lean_object* v___f_1748_; lean_object* v_cls_1749_; lean_object* v___f_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec_ref(v___f_1732_);
lean_dec_ref(v___f_1725_);
v___x_1747_ = lean_box(v___x_1699_);
lean_inc(v_toBind_1695_);
lean_inc(v_inst_1638_);
lean_inc(v_declName_1712_);
v___f_1748_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___boxed), 20, 19);
lean_closure_set(v___f_1748_, 0, v___x_1721_);
lean_closure_set(v___f_1748_, 1, v_declName_1712_);
lean_closure_set(v___f_1748_, 2, v_type_1713_);
lean_closure_set(v___f_1748_, 3, v_value_1714_);
lean_closure_set(v___f_1748_, 4, v_us_1723_);
lean_closure_set(v___f_1748_, 5, v___x_1722_);
lean_closure_set(v___f_1748_, 6, v___x_1747_);
lean_closure_set(v___f_1748_, 7, v_toPure_1696_);
lean_closure_set(v___f_1748_, 8, v_i_1645_);
lean_closure_set(v___f_1748_, 9, v_xs_1646_);
lean_closure_set(v___f_1748_, 10, v_inst_1637_);
lean_closure_set(v___f_1748_, 11, v_inst_1638_);
lean_closure_set(v___f_1748_, 12, v_inst_1639_);
lean_closure_set(v___f_1748_, 13, v_inst_1640_);
lean_closure_set(v___f_1748_, 14, v_info_1641_);
lean_closure_set(v___f_1748_, 15, v_fixed_1642_);
lean_closure_set(v___f_1748_, 16, v_used_1643_);
lean_closure_set(v___f_1748_, 17, v_body_1715_);
lean_closure_set(v___f_1748_, 18, v_toBind_1695_);
v_cls_1749_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___closed__4));
lean_inc_ref(v_toMonadRef_1690_);
v___f_1750_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__15___boxed), 12, 7);
lean_closure_set(v___f_1750_, 0, v_cls_1749_);
lean_closure_set(v___f_1750_, 1, v_declName_1712_);
lean_closure_set(v___f_1750_, 2, v_val_1720_);
lean_closure_set(v___f_1750_, 3, v___x_1686_);
lean_closure_set(v___f_1750_, 4, v___x_1687_);
lean_closure_set(v___f_1750_, 5, v_toMonadRef_1690_);
lean_closure_set(v___f_1750_, 6, v___x_1697_);
v___x_1751_ = lean_apply_2(v_inst_1638_, lean_box(0), v___f_1750_);
v___x_1752_ = lean_apply_4(v_toBind_1695_, lean_box(0), lean_box(0), v___x_1751_, v___f_1748_);
return v___x_1752_;
}
else
{
lean_inc(v_level_1718_);
lean_dec_ref_known(v_us_1723_, 2);
lean_dec_ref_known(v___x_1722_, 2);
lean_dec_ref(v_body_1715_);
lean_dec_ref(v_used_1643_);
lean_dec_ref(v_info_1641_);
lean_dec_ref(v_inst_1639_);
lean_dec_ref(v_inst_1637_);
goto v___jp_1733_;
}
}
v___jp_1726_:
{
lean_object* v_dsimp_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v_dsimp_1727_ = lean_ctor_get(v_inst_1640_, 1);
lean_inc(v_dsimp_1727_);
lean_dec_ref(v_inst_1640_);
v___x_1728_ = lean_apply_1(v_dsimp_1727_, v_val_1720_);
v___x_1729_ = lean_apply_4(v_toBind_1695_, lean_box(0), lean_box(0), v___x_1728_, v___f_1725_);
return v___x_1729_;
}
v___jp_1733_:
{
lean_object* v___x_1734_; uint8_t v___x_1735_; 
v___x_1734_ = lean_array_get_size(v_fixed_1642_);
v___x_1735_ = lean_nat_dec_lt(v_i_1645_, v___x_1734_);
if (v___x_1735_ == 0)
{
lean_dec_ref(v___f_1732_);
lean_dec(v_level_1718_);
lean_dec_ref(v_value_1714_);
lean_dec_ref(v_type_1713_);
lean_dec(v_declName_1712_);
lean_dec(v_toPure_1696_);
lean_dec_ref(v___x_1686_);
lean_dec_ref(v_xs_1646_);
lean_dec(v_i_1645_);
lean_dec_ref(v_fixed_1642_);
lean_dec(v_inst_1638_);
goto v___jp_1726_;
}
else
{
lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = lean_array_fget(v_fixed_1642_, v_i_1645_);
lean_dec(v_i_1645_);
lean_dec_ref(v_fixed_1642_);
v___x_1737_ = lean_unbox(v___x_1736_);
if (v___x_1737_ == 0)
{
lean_object* v_simp_1738_; lean_object* v___x_1739_; lean_object* v___f_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
lean_dec_ref(v___f_1725_);
v_simp_1738_ = lean_ctor_get(v_inst_1640_, 2);
lean_inc(v_simp_1738_);
lean_dec_ref(v_inst_1640_);
v___x_1739_ = lean_box(v___x_1699_);
lean_inc_ref(v_toMonadRef_1690_);
lean_inc_ref(v_val_1720_);
lean_inc_ref(v___f_1732_);
lean_inc(v_toBind_1695_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__12___boxed), 19, 18);
lean_closure_set(v___f_1740_, 0, v_level_1718_);
lean_closure_set(v___f_1740_, 1, v___x_1721_);
lean_closure_set(v___f_1740_, 2, v_type_1713_);
lean_closure_set(v___f_1740_, 3, v_value_1714_);
lean_closure_set(v___f_1740_, 4, v___x_1736_);
lean_closure_set(v___f_1740_, 5, v_toPure_1696_);
lean_closure_set(v___f_1740_, 6, v_toBind_1695_);
lean_closure_set(v___f_1740_, 7, v___f_1732_);
lean_closure_set(v___f_1740_, 8, v_xs_1646_);
lean_closure_set(v___f_1740_, 9, v___x_1739_);
lean_closure_set(v___f_1740_, 10, v___f_1732_);
lean_closure_set(v___f_1740_, 11, v_declName_1712_);
lean_closure_set(v___f_1740_, 12, v_val_1720_);
lean_closure_set(v___f_1740_, 13, v___x_1686_);
lean_closure_set(v___f_1740_, 14, v___x_1687_);
lean_closure_set(v___f_1740_, 15, v_toMonadRef_1690_);
lean_closure_set(v___f_1740_, 16, v___x_1697_);
lean_closure_set(v___f_1740_, 17, v_inst_1638_);
v___x_1741_ = lean_apply_1(v_simp_1738_, v_val_1720_);
v___x_1742_ = lean_apply_4(v_toBind_1695_, lean_box(0), lean_box(0), v___x_1741_, v___f_1740_);
return v___x_1742_;
}
else
{
lean_dec(v___x_1736_);
lean_dec_ref(v___f_1732_);
lean_dec(v_level_1718_);
lean_dec_ref(v_value_1714_);
lean_dec_ref(v_type_1713_);
lean_dec(v_declName_1712_);
lean_dec(v_toPure_1696_);
lean_dec_ref(v___x_1686_);
lean_dec_ref(v_xs_1646_);
lean_dec(v_inst_1638_);
goto v___jp_1726_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1644_, 4);
lean_dec(v_toPure_1696_);
lean_dec(v_toBind_1695_);
lean_dec_ref(v___x_1686_);
lean_dec_ref(v_xs_1646_);
lean_dec(v_i_1645_);
lean_dec_ref(v_used_1643_);
lean_dec_ref(v_fixed_1642_);
lean_dec_ref(v_info_1641_);
lean_dec_ref(v_inst_1640_);
lean_dec_ref(v_inst_1639_);
lean_dec(v_inst_1638_);
lean_dec_ref(v_inst_1637_);
goto v___jp_1708_;
}
}
else
{
lean_dec(v_toPure_1696_);
lean_dec(v_toBind_1695_);
lean_dec_ref(v___x_1686_);
lean_dec_ref(v_xs_1646_);
lean_dec(v_i_1645_);
lean_dec_ref(v_e_1644_);
lean_dec_ref(v_used_1643_);
lean_dec_ref(v_fixed_1642_);
lean_dec_ref(v_info_1641_);
lean_dec_ref(v_inst_1640_);
lean_dec_ref(v_inst_1639_);
lean_dec(v_inst_1638_);
lean_dec_ref(v_inst_1637_);
goto v___jp_1708_;
}
v___jp_1708_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___closed__15);
v___x_1710_ = l_panic___redArg(v___x_1707_, v___x_1709_);
lean_dec(v___x_1707_);
return v___x_1710_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14(lean_object* v___x_1759_, lean_object* v_declName_1760_, lean_object* v_type_1761_, lean_object* v_value_1762_, lean_object* v_us_1763_, lean_object* v___x_1764_, uint8_t v___x_1765_, lean_object* v_toPure_1766_, lean_object* v_i_1767_, lean_object* v_xs_1768_, lean_object* v_inst_1769_, lean_object* v_inst_1770_, lean_object* v_inst_1771_, lean_object* v_inst_1772_, lean_object* v_info_1773_, lean_object* v_fixed_1774_, lean_object* v_used_1775_, lean_object* v_body_1776_, lean_object* v_toBind_1777_, lean_object* v_____r_1778_){
_start:
{
lean_object* v___x_1779_; lean_object* v_x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___f_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1779_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__14___closed__1));
v_x_1780_ = l_Lean_mkConst(v___x_1779_, v___x_1759_);
v___x_1781_ = lean_unsigned_to_nat(1u);
v___x_1782_ = lean_box(v___x_1765_);
v___f_1783_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__13___boxed), 9, 8);
lean_closure_set(v___f_1783_, 0, v___x_1781_);
lean_closure_set(v___f_1783_, 1, v_declName_1760_);
lean_closure_set(v___f_1783_, 2, v_type_1761_);
lean_closure_set(v___f_1783_, 3, v_value_1762_);
lean_closure_set(v___f_1783_, 4, v_us_1763_);
lean_closure_set(v___f_1783_, 5, v___x_1764_);
lean_closure_set(v___f_1783_, 6, v___x_1782_);
lean_closure_set(v___f_1783_, 7, v_toPure_1766_);
v___x_1784_ = lean_nat_add(v_i_1767_, v___x_1781_);
v___x_1785_ = lean_array_push(v_xs_1768_, v_x_1780_);
v___x_1786_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1769_, v_inst_1770_, v_inst_1771_, v_inst_1772_, v_info_1773_, v_fixed_1774_, v_used_1775_, v_body_1776_, v___x_1784_, v___x_1785_);
v___x_1787_ = lean_apply_4(v_toBind_1777_, lean_box(0), lean_box(0), v___x_1786_, v___f_1783_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux(lean_object* v_m_1788_, lean_object* v_inst_1789_, lean_object* v_inst_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_info_1793_, lean_object* v_fixed_1794_, lean_object* v_used_1795_, lean_object* v_e_1796_, lean_object* v_i_1797_, lean_object* v_xs_1798_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_1789_, v_inst_1790_, v_inst_1791_, v_inst_1792_, v_info_1793_, v_fixed_1794_, v_used_1795_, v_e_1796_, v_i_1797_, v_xs_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___impl(uint8_t v_x_1800_){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = lean_box(v_x_1800_);
v___x_1802_ = lean_obj_tag_nat(v___x_1801_);
lean_dec(v___x_1801_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorIdx___impl___boxed(lean_object* v_x_1803_){
_start:
{
uint8_t v_x_4__boxed_1804_; lean_object* v_res_1805_; 
v_x_4__boxed_1804_ = lean_unbox(v_x_1803_);
v_res_1805_ = l_Lean_Meta_ZetaUnusedMode_ctorIdx___impl(v_x_4__boxed_1804_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(lean_object* v_k_1806_){
_start:
{
lean_inc(v_k_1806_);
return v_k_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg___boxed(lean_object* v_k_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lean_Meta_ZetaUnusedMode_ctorElim___redArg(v_k_1807_);
lean_dec(v_k_1807_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim(lean_object* v_motive_1809_, lean_object* v_ctorIdx_1810_, uint8_t v_t_1811_, lean_object* v_h_1812_, lean_object* v_k_1813_){
_start:
{
lean_inc(v_k_1813_);
return v_k_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_ctorElim___boxed(lean_object* v_motive_1814_, lean_object* v_ctorIdx_1815_, lean_object* v_t_1816_, lean_object* v_h_1817_, lean_object* v_k_1818_){
_start:
{
uint8_t v_t_boxed_1819_; lean_object* v_res_1820_; 
v_t_boxed_1819_ = lean_unbox(v_t_1816_);
v_res_1820_ = l_Lean_Meta_ZetaUnusedMode_ctorElim(v_motive_1814_, v_ctorIdx_1815_, v_t_boxed_1819_, v_h_1817_, v_k_1818_);
lean_dec(v_k_1818_);
lean_dec(v_ctorIdx_1815_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(lean_object* v_no_1821_){
_start:
{
lean_inc(v_no_1821_);
return v_no_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___redArg___boxed(lean_object* v_no_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lean_Meta_ZetaUnusedMode_no_elim___redArg(v_no_1822_);
lean_dec(v_no_1822_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim(lean_object* v_motive_1824_, uint8_t v_t_1825_, lean_object* v_h_1826_, lean_object* v_no_1827_){
_start:
{
lean_inc(v_no_1827_);
return v_no_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_no_elim___boxed(lean_object* v_motive_1828_, lean_object* v_t_1829_, lean_object* v_h_1830_, lean_object* v_no_1831_){
_start:
{
uint8_t v_t_boxed_1832_; lean_object* v_res_1833_; 
v_t_boxed_1832_ = lean_unbox(v_t_1829_);
v_res_1833_ = l_Lean_Meta_ZetaUnusedMode_no_elim(v_motive_1828_, v_t_boxed_1832_, v_h_1830_, v_no_1831_);
lean_dec(v_no_1831_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(lean_object* v_singlePass_1834_){
_start:
{
lean_inc(v_singlePass_1834_);
return v_singlePass_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg___boxed(lean_object* v_singlePass_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim___redArg(v_singlePass_1835_);
lean_dec(v_singlePass_1835_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim(lean_object* v_motive_1837_, uint8_t v_t_1838_, lean_object* v_h_1839_, lean_object* v_singlePass_1840_){
_start:
{
lean_inc(v_singlePass_1840_);
return v_singlePass_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_singlePass_elim___boxed(lean_object* v_motive_1841_, lean_object* v_t_1842_, lean_object* v_h_1843_, lean_object* v_singlePass_1844_){
_start:
{
uint8_t v_t_boxed_1845_; lean_object* v_res_1846_; 
v_t_boxed_1845_ = lean_unbox(v_t_1842_);
v_res_1846_ = l_Lean_Meta_ZetaUnusedMode_singlePass_elim(v_motive_1841_, v_t_boxed_1845_, v_h_1843_, v_singlePass_1844_);
lean_dec(v_singlePass_1844_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(lean_object* v_twoPasses_1847_){
_start:
{
lean_inc(v_twoPasses_1847_);
return v_twoPasses_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg___boxed(lean_object* v_twoPasses_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___redArg(v_twoPasses_1848_);
lean_dec(v_twoPasses_1848_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(lean_object* v_motive_1850_, uint8_t v_t_1851_, lean_object* v_h_1852_, lean_object* v_twoPasses_1853_){
_start:
{
lean_inc(v_twoPasses_1853_);
return v_twoPasses_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ZetaUnusedMode_twoPasses_elim___boxed(lean_object* v_motive_1854_, lean_object* v_t_1855_, lean_object* v_h_1856_, lean_object* v_twoPasses_1857_){
_start:
{
uint8_t v_t_boxed_1858_; lean_object* v_res_1859_; 
v_t_boxed_1858_ = lean_unbox(v_t_1855_);
v_res_1859_ = l_Lean_Meta_ZetaUnusedMode_twoPasses_elim(v_motive_1854_, v_t_boxed_1858_, v_h_1856_, v_twoPasses_1857_);
lean_dec(v_twoPasses_1857_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(lean_object* v_k_1860_, lean_object* v_b_1861_, lean_object* v_c_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v___x_1868_; 
lean_inc(v___y_1866_);
lean_inc_ref(v___y_1865_);
lean_inc(v___y_1864_);
lean_inc_ref(v___y_1863_);
v___x_1868_ = lean_apply_7(v_k_1860_, v_b_1861_, v_c_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, lean_box(0));
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed(lean_object* v_k_1869_, lean_object* v_b_1870_, lean_object* v_c_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0(v_k_1869_, v_b_1870_, v_c_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(lean_object* v_e_1878_, lean_object* v_k_1879_, uint8_t v_cleanupAnnotations_1880_, uint8_t v_preserveNondepLet_1881_, uint8_t v_nondepLetOnly_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v___f_1888_; uint8_t v___x_1889_; uint8_t v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___f_1888_ = lean_alloc_closure((void*)(l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1888_, 0, v_k_1879_);
v___x_1889_ = 0;
v___x_1890_ = 1;
v___x_1891_ = lean_box(0);
v___x_1892_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1878_, v___x_1889_, v___x_1890_, v_preserveNondepLet_1881_, v_nondepLetOnly_1882_, v___x_1891_, v___f_1888_, v_cleanupAnnotations_1880_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1892_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_a_1901_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1892_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1892_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg___boxed(lean_object* v_e_1909_, lean_object* v_k_1910_, lean_object* v_cleanupAnnotations_1911_, lean_object* v_preserveNondepLet_1912_, lean_object* v_nondepLetOnly_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1919_; uint8_t v_preserveNondepLet_boxed_1920_; uint8_t v_nondepLetOnly_boxed_1921_; lean_object* v_res_1922_; 
v_cleanupAnnotations_boxed_1919_ = lean_unbox(v_cleanupAnnotations_1911_);
v_preserveNondepLet_boxed_1920_ = lean_unbox(v_preserveNondepLet_1912_);
v_nondepLetOnly_boxed_1921_ = lean_unbox(v_nondepLetOnly_1913_);
v_res_1922_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_1909_, v_k_1910_, v_cleanupAnnotations_boxed_1919_, v_preserveNondepLet_boxed_1920_, v_nondepLetOnly_boxed_1921_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec_ref(v___y_1914_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(lean_object* v_00_u03b1_1923_, lean_object* v_e_1924_, lean_object* v_k_1925_, uint8_t v_cleanupAnnotations_1926_, uint8_t v_preserveNondepLet_1927_, uint8_t v_nondepLetOnly_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_1924_, v_k_1925_, v_cleanupAnnotations_1926_, v_preserveNondepLet_1927_, v_nondepLetOnly_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___boxed(lean_object* v_00_u03b1_1935_, lean_object* v_e_1936_, lean_object* v_k_1937_, lean_object* v_cleanupAnnotations_1938_, lean_object* v_preserveNondepLet_1939_, lean_object* v_nondepLetOnly_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1946_; uint8_t v_preserveNondepLet_boxed_1947_; uint8_t v_nondepLetOnly_boxed_1948_; lean_object* v_res_1949_; 
v_cleanupAnnotations_boxed_1946_ = lean_unbox(v_cleanupAnnotations_1938_);
v_preserveNondepLet_boxed_1947_ = lean_unbox(v_preserveNondepLet_1939_);
v_nondepLetOnly_boxed_1948_ = lean_unbox(v_nondepLetOnly_1940_);
v_res_1949_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1(v_00_u03b1_1935_, v_e_1936_, v_k_1937_, v_cleanupAnnotations_boxed_1946_, v_preserveNondepLet_boxed_1947_, v_nondepLetOnly_boxed_1948_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(lean_object* v_xs_1950_, lean_object* v_a_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v_snd_1956_; lean_object* v_fst_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_2012_; 
v_snd_1956_ = lean_ctor_get(v_a_1951_, 1);
v_fst_1957_ = lean_ctor_get(v_a_1951_, 0);
v_isSharedCheck_2012_ = !lean_is_exclusive(v_a_1951_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_1959_ = v_a_1951_;
v_isShared_1960_ = v_isSharedCheck_2012_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_snd_1956_);
lean_inc(v_fst_1957_);
lean_dec(v_a_1951_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_2012_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v_fst_1961_; lean_object* v_snd_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_2011_; 
v_fst_1961_ = lean_ctor_get(v_snd_1956_, 0);
v_snd_1962_ = lean_ctor_get(v_snd_1956_, 1);
v_isSharedCheck_2011_ = !lean_is_exclusive(v_snd_1956_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_1964_ = v_snd_1956_;
v_isShared_1965_ = v_isSharedCheck_2011_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_snd_1962_);
lean_inc(v_fst_1961_);
lean_dec(v_snd_1956_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_2011_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1966_; uint8_t v___x_1967_; 
v___x_1966_ = lean_unsigned_to_nat(0u);
v___x_1967_ = lean_nat_dec_lt(v___x_1966_, v_snd_1962_);
if (v___x_1967_ == 0)
{
lean_object* v___x_1969_; 
if (v_isShared_1965_ == 0)
{
v___x_1969_ = v___x_1964_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_fst_1961_);
lean_ctor_set(v_reuseFailAlloc_1974_, 1, v_snd_1962_);
v___x_1969_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1971_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v___x_1969_);
v___x_1971_ = v___x_1959_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_fst_1957_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1971_);
return v___x_1972_;
}
}
}
else
{
lean_object* v_fvarSet_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; uint8_t v___x_1981_; 
v_fvarSet_1975_ = lean_ctor_get(v_fst_1957_, 1);
v___x_1976_ = l_Lean_instInhabitedExpr;
v___x_1977_ = lean_unsigned_to_nat(1u);
v___x_1978_ = lean_nat_sub(v_snd_1962_, v___x_1977_);
lean_dec(v_snd_1962_);
v___x_1979_ = lean_array_get_borrowed(v___x_1976_, v_xs_1950_, v___x_1978_);
v___x_1980_ = l_Lean_Expr_fvarId_x21(v___x_1979_);
v___x_1981_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect_spec__3___redArg(v___x_1980_, v_fvarSet_1975_);
if (v___x_1981_ == 0)
{
lean_object* v___x_1983_; 
lean_dec(v___x_1980_);
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 1, v___x_1978_);
v___x_1983_ = v___x_1964_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_fst_1961_);
lean_ctor_set(v_reuseFailAlloc_1988_, 1, v___x_1978_);
v___x_1983_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v___x_1985_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v___x_1983_);
v___x_1985_ = v___x_1959_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_fst_1957_);
lean_ctor_set(v_reuseFailAlloc_1987_, 1, v___x_1983_);
v___x_1985_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
v_a_1951_ = v___x_1985_;
goto _start;
}
}
}
else
{
lean_object* v___x_1989_; 
v___x_1989_ = l_Lean_FVarId_getDecl___redArg(v___x_1980_, v___y_1952_, v___y_1953_, v___y_1954_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1997_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = l_Lean_LocalDecl_type(v_a_1990_);
v___x_1992_ = l_Lean_collectFVars(v_fst_1957_, v___x_1991_);
v___x_1993_ = l_Lean_LocalDecl_value(v_a_1990_, v___x_1981_);
lean_dec(v_a_1990_);
v___x_1994_ = l_Lean_collectFVars(v___x_1992_, v___x_1993_);
lean_inc(v___x_1979_);
v___x_1995_ = lean_array_push(v_fst_1961_, v___x_1979_);
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 1, v___x_1978_);
lean_ctor_set(v___x_1964_, 0, v___x_1995_);
v___x_1997_ = v___x_1964_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1995_);
lean_ctor_set(v_reuseFailAlloc_2002_, 1, v___x_1978_);
v___x_1997_ = v_reuseFailAlloc_2002_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1999_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v___x_1997_);
lean_ctor_set(v___x_1959_, 0, v___x_1994_);
v___x_1999_ = v___x_1959_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
v_a_1951_ = v___x_1999_;
goto _start;
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2010_; 
lean_dec(v___x_1978_);
lean_del_object(v___x_1964_);
lean_dec(v_fst_1961_);
lean_del_object(v___x_1959_);
lean_dec(v_fst_1957_);
v_a_2003_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2005_ = v___x_1989_;
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_1989_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg___boxed(lean_object* v_xs_2013_, lean_object* v_a_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2013_, v_a_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
lean_dec(v___y_2017_);
lean_dec_ref(v___y_2016_);
lean_dec_ref(v___y_2015_);
lean_dec_ref(v_xs_2013_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0(lean_object* v_e_2020_, lean_object* v_xs_2021_, lean_object* v_body_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v_s_2030_; lean_object* v_i_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2028_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__0));
v___x_2029_ = lean_obj_once(&l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1, &l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1_once, _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_getHaveTelescopeInfo_collect___lam__1___closed__1);
lean_inc_ref(v_body_2022_);
v_s_2030_ = l_Lean_collectFVars(v___x_2029_, v_body_2022_);
v_i_2031_ = lean_array_get_size(v_xs_2021_);
v___x_2032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2032_, 0, v___x_2028_);
lean_ctor_set(v___x_2032_, 1, v_i_2031_);
v___x_2033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2033_, 0, v_s_2030_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
v___x_2034_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2021_, v___x_2033_, v___y_2023_, v___y_2025_, v___y_2026_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2050_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2037_ = v___x_2034_;
v_isShared_2038_ = v_isSharedCheck_2050_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2034_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2050_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v_snd_2039_; lean_object* v_fst_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v_snd_2039_ = lean_ctor_get(v_a_2035_, 1);
lean_inc(v_snd_2039_);
lean_dec(v_a_2035_);
v_fst_2040_ = lean_ctor_get(v_snd_2039_, 0);
lean_inc(v_fst_2040_);
lean_dec(v_snd_2039_);
v___x_2041_ = lean_array_get_size(v_fst_2040_);
v___x_2042_ = lean_nat_dec_eq(v___x_2041_, v_i_2031_);
if (v___x_2042_ == 0)
{
lean_object* v___x_2043_; uint8_t v___x_2044_; uint8_t v___x_2045_; lean_object* v___x_2046_; 
lean_del_object(v___x_2037_);
lean_dec_ref(v_e_2020_);
v___x_2043_ = l_Array_reverse___redArg(v_fst_2040_);
v___x_2044_ = 1;
v___x_2045_ = 1;
v___x_2046_ = l_Lean_Meta_mkLetFVars(v___x_2043_, v_body_2022_, v___x_2044_, v___x_2042_, v___x_2045_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
lean_dec_ref(v___x_2043_);
return v___x_2046_;
}
else
{
lean_object* v___x_2048_; 
lean_dec(v_fst_2040_);
lean_dec_ref(v_body_2022_);
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 0, v_e_2020_);
v___x_2048_ = v___x_2037_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_e_2020_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec_ref(v_body_2022_);
lean_dec_ref(v_e_2020_);
v_a_2051_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2034_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2034_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___lam__0___boxed(lean_object* v_e_2059_, lean_object* v_xs_2060_, lean_object* v_body_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lean_Meta_zetaUnused___lam__0(v_e_2059_, v_xs_2060_, v_body_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec_ref(v_xs_2060_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused(lean_object* v_e_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_){
_start:
{
lean_object* v___f_2074_; uint8_t v___x_2075_; uint8_t v___x_2076_; lean_object* v___x_2077_; 
lean_inc_ref(v_e_2068_);
v___f_2074_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaUnused___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2074_, 0, v_e_2068_);
v___x_2075_ = 0;
v___x_2076_ = 1;
v___x_2077_ = l_Lean_Meta_letTelescope___at___00Lean_Meta_zetaUnused_spec__1___redArg(v_e_2068_, v___f_2074_, v___x_2075_, v___x_2076_, v___x_2075_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_);
return v___x_2077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaUnused___boxed(lean_object* v_e_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lean_Meta_zetaUnused(v_e_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_);
lean_dec(v_a_2082_);
lean_dec_ref(v_a_2081_);
lean_dec(v_a_2080_);
lean_dec_ref(v_a_2079_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(lean_object* v_xs_2085_, lean_object* v_inst_2086_, lean_object* v_a_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___redArg(v_xs_2085_, v_a_2087_, v___y_2088_, v___y_2090_, v___y_2091_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0___boxed(lean_object* v_xs_2094_, lean_object* v_inst_2095_, lean_object* v_a_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_zetaUnused_spec__0(v_xs_2094_, v_inst_2095_, v_a_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec_ref(v_xs_2094_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(lean_object* v_u_2107_, lean_object* v_source_2108_, lean_object* v_result_2109_, uint8_t v_keepUnused_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
uint8_t v_modified_2119_; 
v_modified_2119_ = lean_ctor_get_uint8(v_result_2109_, sizeof(void*)*5);
if (v_modified_2119_ == 0)
{
if (v_keepUnused_2110_ == 0)
{
lean_object* v_exprType_2120_; lean_object* v___x_2121_; 
v_exprType_2120_ = lean_ctor_get(v_result_2109_, 1);
lean_inc_ref(v_exprType_2120_);
lean_dec_ref(v_result_2109_);
lean_inc_ref(v_source_2108_);
v___x_2121_ = l_Lean_Meta_zetaUnused(v_source_2108_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2136_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2124_ = v___x_2121_;
v_isShared_2125_ = v_isSharedCheck_2136_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2121_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2136_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
uint8_t v___x_2126_; 
v___x_2126_ = lean_expr_eqv(v_a_2122_, v_source_2108_);
lean_dec_ref(v_source_2108_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2127_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2128_ = lean_box(0);
v___x_2129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2129_, 0, v_u_2107_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = l_Lean_mkConst(v___x_2127_, v___x_2129_);
lean_inc(v_a_2122_);
v___x_2131_ = l_Lean_mkAppB(v___x_2130_, v_exprType_2120_, v_a_2122_);
v___x_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2132_, 0, v_a_2122_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v___x_2132_);
v___x_2134_ = v___x_2124_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
else
{
lean_del_object(v___x_2124_);
lean_dec(v_a_2122_);
lean_dec_ref(v_exprType_2120_);
lean_dec(v_u_2107_);
goto v___jp_2116_;
}
}
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v_exprType_2120_);
lean_dec_ref(v_source_2108_);
lean_dec(v_u_2107_);
v_a_2137_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2121_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2121_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
else
{
lean_dec_ref(v_result_2109_);
lean_dec_ref(v_source_2108_);
lean_dec(v_u_2107_);
goto v___jp_2116_;
}
}
else
{
lean_object* v_expr_2145_; lean_object* v_exprType_2146_; lean_object* v_exprInit_2147_; lean_object* v_exprResult_2148_; lean_object* v_proof_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v_proof_2157_; 
v_expr_2145_ = lean_ctor_get(v_result_2109_, 0);
lean_inc_ref(v_expr_2145_);
v_exprType_2146_ = lean_ctor_get(v_result_2109_, 1);
lean_inc_ref_n(v_exprType_2146_, 3);
v_exprInit_2147_ = lean_ctor_get(v_result_2109_, 2);
lean_inc_ref(v_exprInit_2147_);
v_exprResult_2148_ = lean_ctor_get(v_result_2109_, 3);
lean_inc_ref_n(v_exprResult_2148_, 2);
v_proof_2149_ = lean_ctor_get(v_result_2109_, 4);
lean_inc_ref(v_proof_2149_);
lean_dec_ref(v_result_2109_);
v___x_2150_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__5));
v___x_2151_ = lean_box(0);
v___x_2152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2152_, 0, v_u_2107_);
lean_ctor_set(v___x_2152_, 1, v___x_2151_);
lean_inc_ref(v___x_2152_);
v___x_2153_ = l_Lean_mkConst(v___x_2150_, v___x_2152_);
lean_inc_ref(v___x_2153_);
v___x_2154_ = l_Lean_mkApp3(v___x_2153_, v_exprType_2146_, v_exprInit_2147_, v_expr_2145_);
v___x_2155_ = l_Lean_Meta_mkExpectedPropHint(v_proof_2149_, v___x_2154_);
lean_inc_ref(v_source_2108_);
v___x_2156_ = l_Lean_mkApp3(v___x_2153_, v_exprType_2146_, v_source_2108_, v_exprResult_2148_);
v_proof_2157_ = l_Lean_Meta_mkExpectedPropHint(v___x_2155_, v___x_2156_);
if (v_keepUnused_2110_ == 0)
{
lean_object* v___x_2161_; 
lean_inc_ref(v_exprResult_2148_);
v___x_2161_ = l_Lean_Meta_zetaUnused(v_exprResult_2148_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2177_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2164_ = v___x_2161_;
v_isShared_2165_ = v_isSharedCheck_2177_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2177_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
uint8_t v___x_2166_; 
v___x_2166_ = lean_expr_eqv(v_a_2162_, v_exprResult_2148_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2167_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___closed__1));
lean_inc_ref(v___x_2152_);
v___x_2168_ = l_Lean_mkConst(v___x_2167_, v___x_2152_);
v___x_2169_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__0___closed__2));
v___x_2170_ = l_Lean_mkConst(v___x_2169_, v___x_2152_);
lean_inc_n(v_a_2162_, 2);
lean_inc_ref(v_exprType_2146_);
v___x_2171_ = l_Lean_mkAppB(v___x_2170_, v_exprType_2146_, v_a_2162_);
v___x_2172_ = l_Lean_mkApp6(v___x_2168_, v_exprType_2146_, v_source_2108_, v_exprResult_2148_, v_a_2162_, v_proof_2157_, v___x_2171_);
v___x_2173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2173_, 0, v_a_2162_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 0, v___x_2173_);
v___x_2175_ = v___x_2164_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
else
{
lean_del_object(v___x_2164_);
lean_dec(v_a_2162_);
lean_dec_ref_known(v___x_2152_, 2);
lean_dec_ref(v_exprType_2146_);
lean_dec_ref(v_source_2108_);
goto v___jp_2158_;
}
}
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2185_; 
lean_dec_ref(v_proof_2157_);
lean_dec_ref_known(v___x_2152_, 2);
lean_dec_ref(v_exprResult_2148_);
lean_dec_ref(v_exprType_2146_);
lean_dec_ref(v_source_2108_);
v_a_2178_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2180_ = v___x_2161_;
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2161_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_2152_, 2);
lean_dec_ref(v_exprType_2146_);
lean_dec_ref(v_source_2108_);
goto v___jp_2158_;
}
v___jp_2158_:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2159_, 0, v_exprResult_2148_);
lean_ctor_set(v___x_2159_, 1, v_proof_2157_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
return v___x_2160_;
}
}
v___jp_2116_:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = lean_box(0);
v___x_2118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
return v___x_2118_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed(lean_object* v_u_2186_, lean_object* v_source_2187_, lean_object* v_result_2188_, lean_object* v_keepUnused_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_){
_start:
{
uint8_t v_keepUnused_boxed_2195_; lean_object* v_res_2196_; 
v_keepUnused_boxed_2195_ = lean_unbox(v_keepUnused_2189_);
v_res_2196_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult(v_u_2186_, v_source_2187_, v_result_2188_, v_keepUnused_boxed_2195_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_);
lean_dec(v_a_2193_);
lean_dec_ref(v_a_2192_);
lean_dec(v_a_2191_);
lean_dec_ref(v_a_2190_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0(lean_object* v_level_2197_, lean_object* v_e_2198_, lean_object* v_inst_2199_, uint8_t v_zetaUnusedMode_2200_, uint8_t v___x_2201_, lean_object* v_r_2202_){
_start:
{
uint8_t v___y_2204_; 
switch(v_zetaUnusedMode_2200_)
{
case 0:
{
uint8_t v___x_2208_; 
v___x_2208_ = 1;
v___y_2204_ = v___x_2208_;
goto v___jp_2203_;
}
case 1:
{
uint8_t v___x_2209_; 
v___x_2209_ = 1;
v___y_2204_ = v___x_2209_;
goto v___jp_2203_;
}
default: 
{
v___y_2204_ = v___x_2201_;
goto v___jp_2203_;
}
}
v___jp_2203_:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = lean_box(v___y_2204_);
v___x_2206_ = lean_alloc_closure((void*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_SimpHaveResult_toResult___boxed), 9, 4);
lean_closure_set(v___x_2206_, 0, v_level_2197_);
lean_closure_set(v___x_2206_, 1, v_e_2198_);
lean_closure_set(v___x_2206_, 2, v_r_2202_);
lean_closure_set(v___x_2206_, 3, v___x_2205_);
v___x_2207_ = lean_apply_2(v_inst_2199_, lean_box(0), v___x_2206_);
return v___x_2207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed(lean_object* v_level_2210_, lean_object* v_e_2211_, lean_object* v_inst_2212_, lean_object* v_zetaUnusedMode_2213_, lean_object* v___x_2214_, lean_object* v_r_2215_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2216_; uint8_t v___x_318__boxed_2217_; lean_object* v_res_2218_; 
v_zetaUnusedMode_boxed_2216_ = lean_unbox(v_zetaUnusedMode_2213_);
v___x_318__boxed_2217_ = lean_unbox(v___x_2214_);
v_res_2218_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__0(v_level_2210_, v_e_2211_, v_inst_2212_, v_zetaUnusedMode_boxed_2216_, v___x_318__boxed_2217_, v_r_2215_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1(lean_object* v___x_2219_, lean_object* v_inst_2220_, lean_object* v_inst_2221_, lean_object* v_inst_2222_, lean_object* v_inst_2223_, lean_object* v_info_2224_, lean_object* v_e_2225_, lean_object* v___x_2226_, lean_object* v_toBind_2227_, lean_object* v___f_2228_, lean_object* v_____x_2229_){
_start:
{
lean_object* v_fst_2230_; lean_object* v_snd_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_fst_2230_ = lean_ctor_get(v_____x_2229_, 0);
lean_inc(v_fst_2230_);
v_snd_2231_ = lean_ctor_get(v_____x_2229_, 1);
lean_inc(v_snd_2231_);
lean_dec_ref(v_____x_2229_);
v___x_2232_ = lean_mk_empty_array_with_capacity(v___x_2219_);
v___x_2233_ = l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg(v_inst_2220_, v_inst_2221_, v_inst_2222_, v_inst_2223_, v_info_2224_, v_fst_2230_, v_snd_2231_, v_e_2225_, v___x_2226_, v___x_2232_);
v___x_2234_ = lean_apply_4(v_toBind_2227_, lean_box(0), lean_box(0), v___x_2233_, v___f_2228_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed(lean_object* v___x_2235_, lean_object* v_inst_2236_, lean_object* v_inst_2237_, lean_object* v_inst_2238_, lean_object* v_inst_2239_, lean_object* v_info_2240_, lean_object* v_e_2241_, lean_object* v___x_2242_, lean_object* v_toBind_2243_, lean_object* v___f_2244_, lean_object* v_____x_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__1(v___x_2235_, v_inst_2236_, v_inst_2237_, v_inst_2238_, v_inst_2239_, v_info_2240_, v_e_2241_, v___x_2242_, v_toBind_2243_, v___f_2244_, v_____x_2245_);
lean_dec(v___x_2235_);
return v_res_2246_;
}
}
static lean_object* _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2249_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__1));
v___x_2250_ = lean_unsigned_to_nat(2u);
v___x_2251_ = lean_unsigned_to_nat(456u);
v___x_2252_ = ((lean_object*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__0));
v___x_2253_ = ((lean_object*)(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_simpHaveTelescopeAux___redArg___lam__7___closed__3));
v___x_2254_ = l_mkPanicMessageWithDecl(v___x_2253_, v___x_2252_, v___x_2251_, v___x_2250_, v___x_2249_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2(lean_object* v_e_2255_, lean_object* v_inst_2256_, uint8_t v_zetaUnusedMode_2257_, lean_object* v_inst_2258_, lean_object* v_inst_2259_, lean_object* v_inst_2260_, lean_object* v_toBind_2261_, lean_object* v___x_2262_, lean_object* v_info_2263_){
_start:
{
lean_object* v_haveInfo_2264_; lean_object* v_level_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v_haveInfo_2264_ = lean_ctor_get(v_info_2263_, 0);
v_level_2265_ = lean_ctor_get(v_info_2263_, 5);
v___x_2266_ = lean_array_get_size(v_haveInfo_2264_);
v___x_2267_ = lean_unsigned_to_nat(0u);
v___x_2268_ = lean_nat_dec_eq(v___x_2266_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___f_2271_; lean_object* v___f_2272_; uint8_t v___y_2274_; 
v___x_2269_ = lean_box(v_zetaUnusedMode_2257_);
v___x_2270_ = lean_box(v___x_2268_);
lean_inc_n(v_inst_2256_, 2);
lean_inc_ref(v_e_2255_);
lean_inc(v_level_2265_);
v___f_2271_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2271_, 0, v_level_2265_);
lean_closure_set(v___f_2271_, 1, v_e_2255_);
lean_closure_set(v___f_2271_, 2, v_inst_2256_);
lean_closure_set(v___f_2271_, 3, v___x_2269_);
lean_closure_set(v___f_2271_, 4, v___x_2270_);
lean_inc(v_toBind_2261_);
lean_inc_ref(v_info_2263_);
v___f_2272_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_2272_, 0, v___x_2266_);
lean_closure_set(v___f_2272_, 1, v_inst_2258_);
lean_closure_set(v___f_2272_, 2, v_inst_2256_);
lean_closure_set(v___f_2272_, 3, v_inst_2259_);
lean_closure_set(v___f_2272_, 4, v_inst_2260_);
lean_closure_set(v___f_2272_, 5, v_info_2263_);
lean_closure_set(v___f_2272_, 6, v_e_2255_);
lean_closure_set(v___f_2272_, 7, v___x_2267_);
lean_closure_set(v___f_2272_, 8, v_toBind_2261_);
lean_closure_set(v___f_2272_, 9, v___f_2271_);
switch(v_zetaUnusedMode_2257_)
{
case 0:
{
uint8_t v___x_2279_; 
v___x_2279_ = 1;
v___y_2274_ = v___x_2279_;
goto v___jp_2273_;
}
case 2:
{
uint8_t v___x_2280_; 
v___x_2280_ = 1;
v___y_2274_ = v___x_2280_;
goto v___jp_2273_;
}
default: 
{
v___y_2274_ = v___x_2268_;
goto v___jp_2273_;
}
}
v___jp_2273_:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2275_ = lean_box(v___y_2274_);
v___x_2276_ = lean_alloc_closure((void*)(l_Lean_Meta_HaveTelescopeInfo_computeFixedUsed___boxed), 7, 2);
lean_closure_set(v___x_2276_, 0, v_info_2263_);
lean_closure_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = lean_apply_2(v_inst_2256_, lean_box(0), v___x_2276_);
v___x_2278_ = lean_apply_4(v_toBind_2261_, lean_box(0), lean_box(0), v___x_2277_, v___f_2272_);
return v___x_2278_;
}
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
lean_dec_ref(v_info_2263_);
lean_dec(v_toBind_2261_);
lean_dec_ref(v_inst_2260_);
lean_dec_ref(v_inst_2259_);
lean_dec_ref(v_inst_2258_);
lean_dec(v_inst_2256_);
lean_dec_ref(v_e_2255_);
v___x_2281_ = lean_obj_once(&l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2, &l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2_once, _init_l_Lean_Meta_simpHaveTelescope___redArg___lam__2___closed__2);
v___x_2282_ = l_panic___redArg(v___x_2262_, v___x_2281_);
return v___x_2282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed(lean_object* v_e_2283_, lean_object* v_inst_2284_, lean_object* v_zetaUnusedMode_2285_, lean_object* v_inst_2286_, lean_object* v_inst_2287_, lean_object* v_inst_2288_, lean_object* v_toBind_2289_, lean_object* v___x_2290_, lean_object* v_info_2291_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2292_; lean_object* v_res_2293_; 
v_zetaUnusedMode_boxed_2292_ = lean_unbox(v_zetaUnusedMode_2285_);
v_res_2293_ = l_Lean_Meta_simpHaveTelescope___redArg___lam__2(v_e_2283_, v_inst_2284_, v_zetaUnusedMode_boxed_2292_, v_inst_2286_, v_inst_2287_, v_inst_2288_, v_toBind_2289_, v___x_2290_, v_info_2291_);
lean_dec(v___x_2290_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg(lean_object* v_inst_2294_, lean_object* v_inst_2295_, lean_object* v_inst_2296_, lean_object* v_inst_2297_, lean_object* v_e_2298_, uint8_t v_zetaUnusedMode_2299_){
_start:
{
lean_object* v_toBind_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___f_2306_; lean_object* v___x_2307_; 
v_toBind_2300_ = lean_ctor_get(v_inst_2294_, 1);
lean_inc_n(v_toBind_2300_, 2);
v___x_2301_ = lean_box(0);
lean_inc_ref(v_e_2298_);
v___x_2302_ = lean_alloc_closure((void*)(l_Lean_Meta_getHaveTelescopeInfo___boxed), 6, 1);
lean_closure_set(v___x_2302_, 0, v_e_2298_);
lean_inc(v_inst_2295_);
v___x_2303_ = lean_apply_2(v_inst_2295_, lean_box(0), v___x_2302_);
lean_inc_ref(v_inst_2294_);
v___x_2304_ = l_instInhabitedOfMonad___redArg(v_inst_2294_, v___x_2301_);
v___x_2305_ = lean_box(v_zetaUnusedMode_2299_);
v___f_2306_ = lean_alloc_closure((void*)(l_Lean_Meta_simpHaveTelescope___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2306_, 0, v_e_2298_);
lean_closure_set(v___f_2306_, 1, v_inst_2295_);
lean_closure_set(v___f_2306_, 2, v___x_2305_);
lean_closure_set(v___f_2306_, 3, v_inst_2294_);
lean_closure_set(v___f_2306_, 4, v_inst_2296_);
lean_closure_set(v___f_2306_, 5, v_inst_2297_);
lean_closure_set(v___f_2306_, 6, v_toBind_2300_);
lean_closure_set(v___f_2306_, 7, v___x_2304_);
v___x_2307_ = lean_apply_4(v_toBind_2300_, lean_box(0), lean_box(0), v___x_2303_, v___f_2306_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___redArg___boxed(lean_object* v_inst_2308_, lean_object* v_inst_2309_, lean_object* v_inst_2310_, lean_object* v_inst_2311_, lean_object* v_e_2312_, lean_object* v_zetaUnusedMode_2313_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2314_; lean_object* v_res_2315_; 
v_zetaUnusedMode_boxed_2314_ = lean_unbox(v_zetaUnusedMode_2313_);
v_res_2315_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2308_, v_inst_2309_, v_inst_2310_, v_inst_2311_, v_e_2312_, v_zetaUnusedMode_boxed_2314_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope(lean_object* v_m_2316_, lean_object* v_inst_2317_, lean_object* v_inst_2318_, lean_object* v_inst_2319_, lean_object* v_inst_2320_, lean_object* v_e_2321_, uint8_t v_zetaUnusedMode_2322_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Lean_Meta_simpHaveTelescope___redArg(v_inst_2317_, v_inst_2318_, v_inst_2319_, v_inst_2320_, v_e_2321_, v_zetaUnusedMode_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_simpHaveTelescope___boxed(lean_object* v_m_2324_, lean_object* v_inst_2325_, lean_object* v_inst_2326_, lean_object* v_inst_2327_, lean_object* v_inst_2328_, lean_object* v_e_2329_, lean_object* v_zetaUnusedMode_2330_){
_start:
{
uint8_t v_zetaUnusedMode_boxed_2331_; lean_object* v_res_2332_; 
v_zetaUnusedMode_boxed_2331_ = lean_unbox(v_zetaUnusedMode_2330_);
v_res_2332_ = l_Lean_Meta_simpHaveTelescope(v_m_2324_, v_inst_2325_, v_inst_2326_, v_inst_2327_, v_inst_2328_, v_e_2329_, v_zetaUnusedMode_boxed_2331_);
return v_res_2332_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedHaveInfo_default = _init_l_Lean_Meta_instInhabitedHaveInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo_default);
l_Lean_Meta_instInhabitedHaveInfo = _init_l_Lean_Meta_instInhabitedHaveInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveInfo);
l_Lean_Meta_instInhabitedHaveTelescopeInfo_default = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo_default);
l_Lean_Meta_instInhabitedHaveTelescopeInfo = _init_l_Lean_Meta_instInhabitedHaveTelescopeInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedHaveTelescopeInfo);
l_Lean_Meta_instInhabitedSimpHaveResult_default = _init_l_Lean_Meta_instInhabitedSimpHaveResult_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpHaveResult_default);
l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult = _init_l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult();
lean_mark_persistent(l___private_Lean_Meta_HaveTelescope_0__Lean_Meta_instInhabitedSimpHaveResult);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_MonadSimp(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLooseBVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_HaveTelescope(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MonadSimp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLooseBVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_HaveTelescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_HaveTelescope(builtin);
}
#ifdef __cplusplus
}
#endif
