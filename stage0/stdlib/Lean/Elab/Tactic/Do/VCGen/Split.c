// Lean compiler output
// Module: Lean.Elab.Tactic.Do.VCGen.Split
// Imports: public import Lean.Meta.Tactic.Simp.Types public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Data.Array import Lean.Meta.Match.Rewrite import Lean.Meta.Tactic.Simp.Rewrite public import Lean.Meta.Decidable import Lean.Meta.Tactic.Assumption
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
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getGuardDecision___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsDND___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Array_mask___redArg(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_withLocalDeclsD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_rwIfWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rwMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getGuardDecision(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Expr_looseBVarRange(lean_object*);
lean_object* l_Lean_Meta_Simp_simpMatchDiscrs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_resTy(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_expr(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 154, 90, 102, 217, 192, 49, 255)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 228, 43, 115, 146, 126, 91, 53)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 128, 245, 49, 225, 62, 36, 86)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "discr"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 61, 20, 168, 108, 94, 13, 165)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaExpand___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_MatcherApp_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Failed to find proof for if condition "};
static const lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
lean_object* v_e_7_; lean_object* v___x_8_; 
v_e_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_e_7_);
lean_dec_ref(v_t_5_);
v___x_8_ = lean_apply_1(v_k_6_, v_e_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim___redArg(lean_object* v_t_21_, lean_object* v_ite_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_21_, v_ite_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_ite_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_ite_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_25_, v_ite_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim___redArg(lean_object* v_t_29_, lean_object* v_dite_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_29_, v_dite_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_dite_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_dite_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_33_, v_dite_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim___redArg(lean_object* v_t_37_, lean_object* v_cond_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_37_, v_cond_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_cond_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_cond_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_41_, v_cond_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim___redArg(lean_object* v_t_45_, lean_object* v_matcher_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_45_, v_matcher_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_matcher_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_matcher_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Elab_Tactic_Do_SplitInfo_ctorElim___redArg(v_t_49_, v_matcher_51_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = lean_box(0);
v___x_57_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__1));
v___x_58_ = l_Lean_Expr_const___override(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__2);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default(void){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3, &l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3_once, _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default___closed__3);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default;
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(lean_object* v_x_63_, lean_object* v_x_64_){
_start:
{
lean_object* v_zero_65_; uint8_t v_isZero_66_; 
v_zero_65_ = lean_unsigned_to_nat(0u);
v_isZero_66_ = lean_nat_dec_eq(v_x_63_, v_zero_65_);
if (v_isZero_66_ == 1)
{
lean_dec(v_x_63_);
return v_x_64_;
}
else
{
lean_object* v_one_67_; lean_object* v_n_68_; 
v_one_67_ = lean_unsigned_to_nat(1u);
v_n_68_ = lean_nat_sub(v_x_63_, v_one_67_);
lean_dec(v_x_63_);
if (lean_obj_tag(v_x_64_) == 1)
{
lean_object* v_val_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_80_; 
v_val_69_ = lean_ctor_get(v_x_64_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v_x_64_);
if (v_isSharedCheck_80_ == 0)
{
v___x_71_ = v_x_64_;
v_isShared_72_ = v_isSharedCheck_80_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_val_69_);
lean_dec(v_x_64_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_80_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
if (lean_obj_tag(v_val_69_) == 6)
{
lean_object* v_body_73_; lean_object* v___x_75_; 
v_body_73_ = lean_ctor_get(v_val_69_, 2);
lean_inc_ref(v_body_73_);
lean_dec_ref_known(v_val_69_, 3);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v_body_73_);
v___x_75_ = v___x_71_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_body_73_);
v___x_75_ = v_reuseFailAlloc_77_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
v_x_63_ = v_n_68_;
v_x_64_ = v___x_75_;
goto _start;
}
}
else
{
lean_object* v___x_78_; 
lean_del_object(v___x_71_);
lean_dec(v_val_69_);
v___x_78_ = lean_box(0);
v_x_63_ = v_n_68_;
v_x_64_ = v___x_78_;
goto _start;
}
}
}
else
{
lean_object* v___x_81_; 
lean_dec(v_x_64_);
v___x_81_ = lean_box(0);
v_x_63_ = v_n_68_;
v_x_64_ = v___x_81_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_resTy(lean_object* v_info_83_){
_start:
{
lean_object* v_e_85_; 
if (lean_obj_tag(v_info_83_) == 3)
{
lean_object* v_matcherApp_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_108_; 
v_matcherApp_91_ = lean_ctor_get(v_info_83_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v_info_83_);
if (v_isSharedCheck_108_ == 0)
{
v___x_93_ = v_info_83_;
v_isShared_94_ = v_isSharedCheck_108_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_matcherApp_91_);
lean_dec(v_info_83_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_108_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_toMatcherInfo_95_; lean_object* v_motive_96_; lean_object* v_discrInfos_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v_toMatcherInfo_95_ = lean_ctor_get(v_matcherApp_91_, 0);
lean_inc_ref(v_toMatcherInfo_95_);
v_motive_96_ = lean_ctor_get(v_matcherApp_91_, 4);
lean_inc_ref_n(v_motive_96_, 2);
lean_dec_ref(v_matcherApp_91_);
v_discrInfos_97_ = lean_ctor_get(v_toMatcherInfo_95_, 4);
lean_inc_ref(v_discrInfos_97_);
lean_dec_ref(v_toMatcherInfo_95_);
v___x_98_ = lean_array_get_size(v_discrInfos_97_);
lean_dec_ref(v_discrInfos_97_);
if (v_isShared_94_ == 0)
{
lean_ctor_set_tag(v___x_93_, 1);
lean_ctor_set(v___x_93_, 0, v_motive_96_);
v___x_100_ = v___x_93_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_motive_96_);
v___x_100_ = v_reuseFailAlloc_107_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
lean_object* v___x_101_; 
v___x_101_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Elab_Tactic_Do_SplitInfo_resTy_spec__0(v___x_98_, v___x_100_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_dec_ref(v_motive_96_);
return v___x_101_;
}
else
{
lean_object* v_val_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_val_102_ = lean_ctor_get(v___x_101_, 0);
v___x_103_ = l_Lean_Expr_looseBVarRange(v_val_102_);
v___x_104_ = l_Lean_Expr_looseBVarRange(v_motive_96_);
lean_dec_ref(v_motive_96_);
v___x_105_ = lean_nat_dec_eq(v___x_103_, v___x_104_);
lean_dec(v___x_104_);
lean_dec(v___x_103_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
lean_dec_ref_known(v___x_101_, 1);
v___x_106_ = lean_box(0);
return v___x_106_;
}
else
{
return v___x_101_;
}
}
}
}
}
else
{
lean_object* v_e_109_; 
v_e_109_ = lean_ctor_get(v_info_83_, 0);
lean_inc_ref(v_e_109_);
lean_dec_ref(v_info_83_);
v_e_85_ = v_e_109_;
goto v___jp_84_;
}
v___jp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_86_ = l_Lean_Expr_getAppNumArgs(v_e_85_);
v___x_87_ = lean_unsigned_to_nat(1u);
v___x_88_ = lean_nat_sub(v___x_86_, v___x_87_);
lean_dec(v___x_86_);
v___x_89_ = l_Lean_Expr_getRevArg_x21(v_e_85_, v___x_88_);
lean_dec_ref(v_e_85_);
v___x_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(lean_object* v_matcherApp_110_, size_t v_sz_111_, size_t v_i_112_, lean_object* v_bs_113_){
_start:
{
uint8_t v___x_114_; 
v___x_114_ = lean_usize_dec_lt(v_i_112_, v_sz_111_);
if (v___x_114_ == 0)
{
return v_bs_113_;
}
else
{
lean_object* v_v_115_; lean_object* v_alts_116_; lean_object* v___x_117_; lean_object* v_bs_x27_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; size_t v___x_123_; size_t v___x_124_; lean_object* v___x_125_; 
v_v_115_ = lean_array_uget(v_bs_113_, v_i_112_);
v_alts_116_ = lean_ctor_get(v_matcherApp_110_, 6);
v___x_117_ = lean_unsigned_to_nat(0u);
v_bs_x27_118_ = lean_array_uset(v_bs_113_, v_i_112_, v___x_117_);
v___x_119_ = l_Lean_instInhabitedExpr;
v___x_120_ = lean_usize_to_nat(v_i_112_);
v___x_121_ = lean_array_get_borrowed(v___x_119_, v_alts_116_, v___x_120_);
lean_dec(v___x_120_);
lean_inc(v___x_121_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v_v_115_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = ((size_t)1ULL);
v___x_124_ = lean_usize_add(v_i_112_, v___x_123_);
v___x_125_ = lean_array_uset(v_bs_x27_118_, v_i_112_, v___x_122_);
v_i_112_ = v___x_124_;
v_bs_113_ = v___x_125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg___boxed(lean_object* v_matcherApp_127_, lean_object* v_sz_128_, lean_object* v_i_129_, lean_object* v_bs_130_){
_start:
{
size_t v_sz_boxed_131_; size_t v_i_boxed_132_; lean_object* v_res_133_; 
v_sz_boxed_131_ = lean_unbox_usize(v_sz_128_);
lean_dec(v_sz_128_);
v_i_boxed_132_ = lean_unbox_usize(v_i_129_);
lean_dec(v_i_129_);
v_res_133_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_127_, v_sz_boxed_131_, v_i_boxed_132_, v_bs_130_);
lean_dec_ref(v_matcherApp_127_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object* v_info_134_){
_start:
{
switch(lean_obj_tag(v_info_134_))
{
case 0:
{
lean_object* v_e_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_e_135_ = lean_ctor_get(v_info_134_, 0);
lean_inc_ref(v_e_135_);
lean_dec_ref_known(v_info_134_, 1);
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_unsigned_to_nat(3u);
v___x_138_ = l_Lean_Expr_getAppNumArgs(v_e_135_);
v___x_139_ = lean_nat_sub(v___x_138_, v___x_137_);
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = lean_nat_sub(v___x_139_, v___x_140_);
lean_dec(v___x_139_);
v___x_142_ = l_Lean_Expr_getRevArg_x21(v_e_135_, v___x_141_);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_136_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = lean_unsigned_to_nat(4u);
v___x_145_ = lean_nat_sub(v___x_138_, v___x_144_);
lean_dec(v___x_138_);
v___x_146_ = lean_nat_sub(v___x_145_, v___x_140_);
lean_dec(v___x_145_);
v___x_147_ = l_Lean_Expr_getRevArg_x21(v_e_135_, v___x_146_);
lean_dec_ref(v_e_135_);
v___x_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_136_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = lean_unsigned_to_nat(2u);
v___x_150_ = lean_mk_empty_array_with_capacity(v___x_149_);
v___x_151_ = lean_array_push(v___x_150_, v___x_143_);
v___x_152_ = lean_array_push(v___x_151_, v___x_148_);
return v___x_152_;
}
case 1:
{
lean_object* v_e_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v_e_153_ = lean_ctor_get(v_info_134_, 0);
lean_inc_ref(v_e_153_);
lean_dec_ref_known(v_info_134_, 1);
v___x_154_ = lean_unsigned_to_nat(1u);
v___x_155_ = lean_unsigned_to_nat(3u);
v___x_156_ = l_Lean_Expr_getAppNumArgs(v_e_153_);
v___x_157_ = lean_nat_sub(v___x_156_, v___x_155_);
v___x_158_ = lean_nat_sub(v___x_157_, v___x_154_);
lean_dec(v___x_157_);
v___x_159_ = l_Lean_Expr_getRevArg_x21(v_e_153_, v___x_158_);
v___x_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_154_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_unsigned_to_nat(4u);
v___x_162_ = lean_nat_sub(v___x_156_, v___x_161_);
lean_dec(v___x_156_);
v___x_163_ = lean_nat_sub(v___x_162_, v___x_154_);
lean_dec(v___x_162_);
v___x_164_ = l_Lean_Expr_getRevArg_x21(v_e_153_, v___x_163_);
lean_dec_ref(v_e_153_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_154_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = lean_unsigned_to_nat(2u);
v___x_167_ = lean_mk_empty_array_with_capacity(v___x_166_);
v___x_168_ = lean_array_push(v___x_167_, v___x_160_);
v___x_169_ = lean_array_push(v___x_168_, v___x_165_);
return v___x_169_;
}
case 2:
{
lean_object* v_e_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_e_170_ = lean_ctor_get(v_info_134_, 0);
lean_inc_ref(v_e_170_);
lean_dec_ref_known(v_info_134_, 1);
v___x_171_ = lean_unsigned_to_nat(0u);
v___x_172_ = lean_unsigned_to_nat(2u);
v___x_173_ = l_Lean_Expr_getAppNumArgs(v_e_170_);
v___x_174_ = lean_nat_sub(v___x_173_, v___x_172_);
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_sub(v___x_174_, v___x_175_);
lean_dec(v___x_174_);
v___x_177_ = l_Lean_Expr_getRevArg_x21(v_e_170_, v___x_176_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_171_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = lean_unsigned_to_nat(3u);
v___x_180_ = lean_nat_sub(v___x_173_, v___x_179_);
lean_dec(v___x_173_);
v___x_181_ = lean_nat_sub(v___x_180_, v___x_175_);
lean_dec(v___x_180_);
v___x_182_ = l_Lean_Expr_getRevArg_x21(v_e_170_, v___x_181_);
lean_dec_ref(v_e_170_);
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_171_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = lean_mk_empty_array_with_capacity(v___x_172_);
v___x_185_ = lean_array_push(v___x_184_, v___x_178_);
v___x_186_ = lean_array_push(v___x_185_, v___x_183_);
return v___x_186_;
}
default: 
{
lean_object* v_matcherApp_187_; lean_object* v___x_188_; size_t v_sz_189_; size_t v___x_190_; lean_object* v___x_191_; 
v_matcherApp_187_ = lean_ctor_get(v_info_134_, 0);
lean_inc_ref_n(v_matcherApp_187_, 2);
lean_dec_ref_known(v_info_134_, 1);
v___x_188_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_187_);
v_sz_189_ = lean_array_size(v___x_188_);
v___x_190_ = ((size_t)0ULL);
v___x_191_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_187_, v_sz_189_, v___x_190_, v___x_188_);
lean_dec_ref(v_matcherApp_187_);
return v___x_191_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(lean_object* v_matcherApp_192_, lean_object* v_as_193_, size_t v_sz_194_, size_t v_i_195_, lean_object* v_bs_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___redArg(v_matcherApp_192_, v_sz_194_, v_i_195_, v_bs_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0___boxed(lean_object* v_matcherApp_198_, lean_object* v_as_199_, lean_object* v_sz_200_, lean_object* v_i_201_, lean_object* v_bs_202_){
_start:
{
size_t v_sz_boxed_203_; size_t v_i_boxed_204_; lean_object* v_res_205_; 
v_sz_boxed_203_ = lean_unbox_usize(v_sz_200_);
lean_dec(v_sz_200_);
v_i_boxed_204_ = lean_unbox_usize(v_i_201_);
lean_dec(v_i_201_);
v_res_205_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_altInfos_spec__0(v_matcherApp_198_, v_as_199_, v_sz_boxed_203_, v_i_boxed_204_, v_bs_202_);
lean_dec_ref(v_as_199_);
lean_dec_ref(v_matcherApp_198_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_expr(lean_object* v_x_206_){
_start:
{
if (lean_obj_tag(v_x_206_) == 3)
{
lean_object* v_matcherApp_207_; lean_object* v___x_208_; 
v_matcherApp_207_ = lean_ctor_get(v_x_206_, 0);
lean_inc_ref(v_matcherApp_207_);
lean_dec_ref_known(v_x_206_, 1);
v___x_208_ = l_Lean_Meta_MatcherApp_toExpr(v_matcherApp_207_);
return v___x_208_;
}
else
{
lean_object* v_e_209_; 
v_e_209_ = lean_ctor_get(v_x_206_, 0);
lean_inc_ref(v_e_209_);
lean_dec_ref(v_x_206_);
return v_e_209_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0(lean_object* v___x_213_, lean_object* v_resTy_214_, lean_object* v_c_215_, lean_object* v_dec_216_, lean_object* v_t_217_, lean_object* v_e_218_, lean_object* v_k_219_, lean_object* v_u_220_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_221_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_222_, 0, v_u_220_);
lean_ctor_set(v___x_222_, 1, v___x_213_);
v___x_223_ = l_Lean_mkConst(v___x_221_, v___x_222_);
lean_inc_ref(v_e_218_);
lean_inc_ref(v_t_217_);
lean_inc_ref(v_dec_216_);
lean_inc_ref(v_c_215_);
v___x_224_ = l_Lean_mkApp5(v___x_223_, v_resTy_214_, v_c_215_, v_dec_216_, v_t_217_, v_e_218_);
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
v___x_226_ = lean_unsigned_to_nat(4u);
v___x_227_ = lean_mk_empty_array_with_capacity(v___x_226_);
v___x_228_ = lean_array_push(v___x_227_, v_c_215_);
v___x_229_ = lean_array_push(v___x_228_, v_dec_216_);
v___x_230_ = lean_array_push(v___x_229_, v_t_217_);
v___x_231_ = lean_array_push(v___x_230_, v_e_218_);
v___x_232_ = lean_apply_2(v_k_219_, v___x_225_, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1(lean_object* v___x_233_, lean_object* v_resTy_234_, lean_object* v_c_235_, lean_object* v_dec_236_, lean_object* v_t_237_, lean_object* v_k_238_, lean_object* v_inst_239_, lean_object* v_toBind_240_, lean_object* v_e_241_){
_start:
{
lean_object* v___f_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
lean_inc_ref(v_resTy_234_);
v___f_242_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0), 8, 7);
lean_closure_set(v___f_242_, 0, v___x_233_);
lean_closure_set(v___f_242_, 1, v_resTy_234_);
lean_closure_set(v___f_242_, 2, v_c_235_);
lean_closure_set(v___f_242_, 3, v_dec_236_);
lean_closure_set(v___f_242_, 4, v_t_237_);
lean_closure_set(v___f_242_, 5, v_e_241_);
lean_closure_set(v___f_242_, 6, v_k_238_);
v___x_243_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_243_, 0, v_resTy_234_);
v___x_244_ = lean_apply_2(v_inst_239_, lean_box(0), v___x_243_);
v___x_245_ = lean_apply_4(v_toBind_240_, lean_box(0), lean_box(0), v___x_244_, v___f_242_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2(lean_object* v___x_249_, lean_object* v_resTy_250_, lean_object* v_c_251_, lean_object* v_dec_252_, lean_object* v_k_253_, lean_object* v_inst_254_, lean_object* v_toBind_255_, lean_object* v_inst_256_, lean_object* v_inst_257_, lean_object* v_t_258_){
_start:
{
lean_object* v___f_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
lean_inc_ref(v_resTy_250_);
v___f_259_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__1), 9, 8);
lean_closure_set(v___f_259_, 0, v___x_249_);
lean_closure_set(v___f_259_, 1, v_resTy_250_);
lean_closure_set(v___f_259_, 2, v_c_251_);
lean_closure_set(v___f_259_, 3, v_dec_252_);
lean_closure_set(v___f_259_, 4, v_t_258_);
lean_closure_set(v___f_259_, 5, v_k_253_);
lean_closure_set(v___f_259_, 6, v_inst_254_);
lean_closure_set(v___f_259_, 7, v_toBind_255_);
v___x_260_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_261_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_256_, v_inst_257_, v___x_260_, v_resTy_250_, v___f_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3(lean_object* v___x_265_, lean_object* v_resTy_266_, lean_object* v_c_267_, lean_object* v_k_268_, lean_object* v_inst_269_, lean_object* v_toBind_270_, lean_object* v_inst_271_, lean_object* v_inst_272_, lean_object* v_dec_273_){
_start:
{
lean_object* v___f_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
lean_inc_ref(v_inst_272_);
lean_inc_ref(v_inst_271_);
lean_inc_ref(v_resTy_266_);
v___f_274_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2), 10, 9);
lean_closure_set(v___f_274_, 0, v___x_265_);
lean_closure_set(v___f_274_, 1, v_resTy_266_);
lean_closure_set(v___f_274_, 2, v_c_267_);
lean_closure_set(v___f_274_, 3, v_dec_273_);
lean_closure_set(v___f_274_, 4, v_k_268_);
lean_closure_set(v___f_274_, 5, v_inst_269_);
lean_closure_set(v___f_274_, 6, v_toBind_270_);
lean_closure_set(v___f_274_, 7, v_inst_271_);
lean_closure_set(v___f_274_, 8, v_inst_272_);
v___x_275_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_276_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_271_, v_inst_272_, v___x_275_, v_resTy_266_, v___f_274_);
return v___x_276_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = lean_box(0);
v___x_284_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3));
v___x_285_ = l_Lean_mkConst(v___x_284_, v___x_283_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4(lean_object* v_resTy_286_, lean_object* v_k_287_, lean_object* v_inst_288_, lean_object* v_toBind_289_, lean_object* v_inst_290_, lean_object* v_inst_291_, lean_object* v_c_292_){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___f_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_293_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_294_ = lean_box(0);
lean_inc_ref(v_inst_291_);
lean_inc_ref(v_inst_290_);
lean_inc_ref(v_c_292_);
v___f_295_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3), 9, 8);
lean_closure_set(v___f_295_, 0, v___x_294_);
lean_closure_set(v___f_295_, 1, v_resTy_286_);
lean_closure_set(v___f_295_, 2, v_c_292_);
lean_closure_set(v___f_295_, 3, v_k_287_);
lean_closure_set(v___f_295_, 4, v_inst_288_);
lean_closure_set(v___f_295_, 5, v_toBind_289_);
lean_closure_set(v___f_295_, 6, v_inst_290_);
lean_closure_set(v___f_295_, 7, v_inst_291_);
v___x_296_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_297_ = l_Lean_Expr_app___override(v___x_296_, v_c_292_);
v___x_298_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_290_, v_inst_291_, v___x_293_, v___x_297_, v___f_295_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(lean_object* v_c_299_, lean_object* v_resTy_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_Lean_mkArrow(v_c_299_, v_resTy_300_, v___y_303_, v___y_304_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed(lean_object* v_c_307_, lean_object* v_resTy_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5(v_c_307_, v_resTy_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6(lean_object* v___x_318_, lean_object* v_resTy_319_, lean_object* v_c_320_, lean_object* v_dec_321_, lean_object* v_t_322_, lean_object* v_e_323_, lean_object* v_k_324_, lean_object* v_u_325_){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_326_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_327_, 0, v_u_325_);
lean_ctor_set(v___x_327_, 1, v___x_318_);
v___x_328_ = l_Lean_mkConst(v___x_326_, v___x_327_);
lean_inc_ref(v_e_323_);
lean_inc_ref(v_t_322_);
lean_inc_ref(v_dec_321_);
lean_inc_ref(v_c_320_);
v___x_329_ = l_Lean_mkApp5(v___x_328_, v_resTy_319_, v_c_320_, v_dec_321_, v_t_322_, v_e_323_);
v___x_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
v___x_331_ = lean_unsigned_to_nat(4u);
v___x_332_ = lean_mk_empty_array_with_capacity(v___x_331_);
v___x_333_ = lean_array_push(v___x_332_, v_c_320_);
v___x_334_ = lean_array_push(v___x_333_, v_dec_321_);
v___x_335_ = lean_array_push(v___x_334_, v_t_322_);
v___x_336_ = lean_array_push(v___x_335_, v_e_323_);
v___x_337_ = lean_apply_2(v_k_324_, v___x_330_, v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7(lean_object* v___x_338_, lean_object* v_resTy_339_, lean_object* v_c_340_, lean_object* v_dec_341_, lean_object* v_t_342_, lean_object* v_k_343_, lean_object* v_inst_344_, lean_object* v_toBind_345_, lean_object* v_e_346_){
_start:
{
lean_object* v___f_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
lean_inc_ref(v_resTy_339_);
v___f_347_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6), 8, 7);
lean_closure_set(v___f_347_, 0, v___x_338_);
lean_closure_set(v___f_347_, 1, v_resTy_339_);
lean_closure_set(v___f_347_, 2, v_c_340_);
lean_closure_set(v___f_347_, 3, v_dec_341_);
lean_closure_set(v___f_347_, 4, v_t_342_);
lean_closure_set(v___f_347_, 5, v_e_346_);
lean_closure_set(v___f_347_, 6, v_k_343_);
v___x_348_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_348_, 0, v_resTy_339_);
v___x_349_ = lean_apply_2(v_inst_344_, lean_box(0), v___x_348_);
v___x_350_ = lean_apply_4(v_toBind_345_, lean_box(0), lean_box(0), v___x_349_, v___f_347_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8(lean_object* v___x_351_, lean_object* v_resTy_352_, lean_object* v_c_353_, lean_object* v_dec_354_, lean_object* v_k_355_, lean_object* v_inst_356_, lean_object* v_toBind_357_, lean_object* v_inst_358_, lean_object* v_inst_359_, lean_object* v_eTy_360_, lean_object* v_t_361_){
_start:
{
lean_object* v___f_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___f_362_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__7), 9, 8);
lean_closure_set(v___f_362_, 0, v___x_351_);
lean_closure_set(v___f_362_, 1, v_resTy_352_);
lean_closure_set(v___f_362_, 2, v_c_353_);
lean_closure_set(v___f_362_, 3, v_dec_354_);
lean_closure_set(v___f_362_, 4, v_t_361_);
lean_closure_set(v___f_362_, 5, v_k_355_);
lean_closure_set(v___f_362_, 6, v_inst_356_);
lean_closure_set(v___f_362_, 7, v_toBind_357_);
v___x_363_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_364_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_358_, v_inst_359_, v___x_363_, v_eTy_360_, v___f_362_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9(lean_object* v___x_365_, lean_object* v_resTy_366_, lean_object* v_c_367_, lean_object* v_dec_368_, lean_object* v_k_369_, lean_object* v_inst_370_, lean_object* v_toBind_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_tTy_374_, lean_object* v_eTy_375_){
_start:
{
lean_object* v___f_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
lean_inc_ref(v_inst_373_);
lean_inc_ref(v_inst_372_);
v___f_376_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__8), 11, 10);
lean_closure_set(v___f_376_, 0, v___x_365_);
lean_closure_set(v___f_376_, 1, v_resTy_366_);
lean_closure_set(v___f_376_, 2, v_c_367_);
lean_closure_set(v___f_376_, 3, v_dec_368_);
lean_closure_set(v___f_376_, 4, v_k_369_);
lean_closure_set(v___f_376_, 5, v_inst_370_);
lean_closure_set(v___f_376_, 6, v_toBind_371_);
lean_closure_set(v___f_376_, 7, v_inst_372_);
lean_closure_set(v___f_376_, 8, v_inst_373_);
lean_closure_set(v___f_376_, 9, v_eTy_375_);
v___x_377_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_378_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_372_, v_inst_373_, v___x_377_, v_tTy_374_, v___f_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(lean_object* v___x_379_, lean_object* v_resTy_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_mkArrow(v___x_379_, v_resTy_380_, v___y_383_, v___y_384_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed(lean_object* v___x_387_, lean_object* v_resTy_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10(v___x_387_, v_resTy_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11(lean_object* v___x_395_, lean_object* v_resTy_396_, lean_object* v_c_397_, lean_object* v_dec_398_, lean_object* v_k_399_, lean_object* v_inst_400_, lean_object* v_toBind_401_, lean_object* v_inst_402_, lean_object* v_inst_403_, lean_object* v_tTy_404_){
_start:
{
lean_object* v___f_405_; lean_object* v___x_406_; lean_object* v___f_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
lean_inc(v_toBind_401_);
lean_inc(v_inst_400_);
lean_inc_ref(v_c_397_);
lean_inc_ref(v_resTy_396_);
v___f_405_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__9), 11, 10);
lean_closure_set(v___f_405_, 0, v___x_395_);
lean_closure_set(v___f_405_, 1, v_resTy_396_);
lean_closure_set(v___f_405_, 2, v_c_397_);
lean_closure_set(v___f_405_, 3, v_dec_398_);
lean_closure_set(v___f_405_, 4, v_k_399_);
lean_closure_set(v___f_405_, 5, v_inst_400_);
lean_closure_set(v___f_405_, 6, v_toBind_401_);
lean_closure_set(v___f_405_, 7, v_inst_402_);
lean_closure_set(v___f_405_, 8, v_inst_403_);
lean_closure_set(v___f_405_, 9, v_tTy_404_);
v___x_406_ = l_Lean_mkNot(v_c_397_);
v___f_407_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__10___boxed), 7, 2);
lean_closure_set(v___f_407_, 0, v___x_406_);
lean_closure_set(v___f_407_, 1, v_resTy_396_);
v___x_408_ = lean_apply_2(v_inst_400_, lean_box(0), v___f_407_);
v___x_409_ = lean_apply_4(v_toBind_401_, lean_box(0), lean_box(0), v___x_408_, v___f_405_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12(lean_object* v___x_410_, lean_object* v_resTy_411_, lean_object* v_c_412_, lean_object* v_k_413_, lean_object* v_inst_414_, lean_object* v_toBind_415_, lean_object* v_inst_416_, lean_object* v_inst_417_, lean_object* v___f_418_, lean_object* v_dec_419_){
_start:
{
lean_object* v___f_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
lean_inc(v_toBind_415_);
lean_inc(v_inst_414_);
v___f_420_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__11), 10, 9);
lean_closure_set(v___f_420_, 0, v___x_410_);
lean_closure_set(v___f_420_, 1, v_resTy_411_);
lean_closure_set(v___f_420_, 2, v_c_412_);
lean_closure_set(v___f_420_, 3, v_dec_419_);
lean_closure_set(v___f_420_, 4, v_k_413_);
lean_closure_set(v___f_420_, 5, v_inst_414_);
lean_closure_set(v___f_420_, 6, v_toBind_415_);
lean_closure_set(v___f_420_, 7, v_inst_416_);
lean_closure_set(v___f_420_, 8, v_inst_417_);
v___x_421_ = lean_apply_2(v_inst_414_, lean_box(0), v___f_418_);
v___x_422_ = lean_apply_4(v_toBind_415_, lean_box(0), lean_box(0), v___x_421_, v___f_420_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13(lean_object* v_resTy_423_, lean_object* v_k_424_, lean_object* v_inst_425_, lean_object* v_toBind_426_, lean_object* v_inst_427_, lean_object* v_inst_428_, lean_object* v_c_429_){
_start:
{
lean_object* v___f_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___f_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
lean_inc_ref(v_resTy_423_);
lean_inc_ref_n(v_c_429_, 2);
v___f_430_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__5___boxed), 7, 2);
lean_closure_set(v___f_430_, 0, v_c_429_);
lean_closure_set(v___f_430_, 1, v_resTy_423_);
v___x_431_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_432_ = lean_box(0);
lean_inc_ref(v_inst_428_);
lean_inc_ref(v_inst_427_);
v___f_433_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__12), 10, 9);
lean_closure_set(v___f_433_, 0, v___x_432_);
lean_closure_set(v___f_433_, 1, v_resTy_423_);
lean_closure_set(v___f_433_, 2, v_c_429_);
lean_closure_set(v___f_433_, 3, v_k_424_);
lean_closure_set(v___f_433_, 4, v_inst_425_);
lean_closure_set(v___f_433_, 5, v_toBind_426_);
lean_closure_set(v___f_433_, 6, v_inst_427_);
lean_closure_set(v___f_433_, 7, v_inst_428_);
lean_closure_set(v___f_433_, 8, v___f_430_);
v___x_434_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_435_ = l_Lean_Expr_app___override(v___x_434_, v_c_429_);
v___x_436_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_427_, v_inst_428_, v___x_431_, v___x_435_, v___f_433_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14(lean_object* v___x_440_, lean_object* v_resTy_441_, lean_object* v_c_442_, lean_object* v_t_443_, lean_object* v_e_444_, lean_object* v_k_445_, lean_object* v_u_446_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_447_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_448_, 0, v_u_446_);
lean_ctor_set(v___x_448_, 1, v___x_440_);
v___x_449_ = l_Lean_mkConst(v___x_447_, v___x_448_);
lean_inc_ref(v_e_444_);
lean_inc_ref(v_t_443_);
lean_inc_ref(v_c_442_);
v___x_450_ = l_Lean_mkApp4(v___x_449_, v_resTy_441_, v_c_442_, v_t_443_, v_e_444_);
v___x_451_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
v___x_452_ = lean_unsigned_to_nat(3u);
v___x_453_ = lean_mk_empty_array_with_capacity(v___x_452_);
v___x_454_ = lean_array_push(v___x_453_, v_c_442_);
v___x_455_ = lean_array_push(v___x_454_, v_t_443_);
v___x_456_ = lean_array_push(v___x_455_, v_e_444_);
v___x_457_ = lean_apply_2(v_k_445_, v___x_451_, v___x_456_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15(lean_object* v___x_458_, lean_object* v_resTy_459_, lean_object* v_c_460_, lean_object* v_t_461_, lean_object* v_k_462_, lean_object* v_inst_463_, lean_object* v_toBind_464_, lean_object* v_e_465_){
_start:
{
lean_object* v___f_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
lean_inc_ref(v_resTy_459_);
v___f_466_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14), 7, 6);
lean_closure_set(v___f_466_, 0, v___x_458_);
lean_closure_set(v___f_466_, 1, v_resTy_459_);
lean_closure_set(v___f_466_, 2, v_c_460_);
lean_closure_set(v___f_466_, 3, v_t_461_);
lean_closure_set(v___f_466_, 4, v_e_465_);
lean_closure_set(v___f_466_, 5, v_k_462_);
v___x_467_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_467_, 0, v_resTy_459_);
v___x_468_ = lean_apply_2(v_inst_463_, lean_box(0), v___x_467_);
v___x_469_ = lean_apply_4(v_toBind_464_, lean_box(0), lean_box(0), v___x_468_, v___f_466_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16(lean_object* v___x_470_, lean_object* v_resTy_471_, lean_object* v_c_472_, lean_object* v_k_473_, lean_object* v_inst_474_, lean_object* v_toBind_475_, lean_object* v_inst_476_, lean_object* v_inst_477_, lean_object* v_t_478_){
_start:
{
lean_object* v___f_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
lean_inc_ref(v_resTy_471_);
v___f_479_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__15), 8, 7);
lean_closure_set(v___f_479_, 0, v___x_470_);
lean_closure_set(v___f_479_, 1, v_resTy_471_);
lean_closure_set(v___f_479_, 2, v_c_472_);
lean_closure_set(v___f_479_, 3, v_t_478_);
lean_closure_set(v___f_479_, 4, v_k_473_);
lean_closure_set(v___f_479_, 5, v_inst_474_);
lean_closure_set(v___f_479_, 6, v_toBind_475_);
v___x_480_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_481_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_476_, v_inst_477_, v___x_480_, v_resTy_471_, v___f_479_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17(lean_object* v___x_482_, lean_object* v_resTy_483_, lean_object* v_k_484_, lean_object* v_inst_485_, lean_object* v_toBind_486_, lean_object* v_inst_487_, lean_object* v_inst_488_, lean_object* v_c_489_){
_start:
{
lean_object* v___f_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
lean_inc_ref(v_inst_488_);
lean_inc_ref(v_inst_487_);
lean_inc_ref(v_resTy_483_);
v___f_490_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__16), 9, 8);
lean_closure_set(v___f_490_, 0, v___x_482_);
lean_closure_set(v___f_490_, 1, v_resTy_483_);
lean_closure_set(v___f_490_, 2, v_c_489_);
lean_closure_set(v___f_490_, 3, v_k_484_);
lean_closure_set(v___f_490_, 4, v_inst_485_);
lean_closure_set(v___f_490_, 5, v_toBind_486_);
lean_closure_set(v___f_490_, 6, v_inst_487_);
lean_closure_set(v___f_490_, 7, v_inst_488_);
v___x_491_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_492_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_487_, v_inst_488_, v___x_491_, v_resTy_483_, v___f_490_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18(lean_object* v___x_493_, lean_object* v___x_494_, lean_object* v___x_495_, lean_object* v_dec_496_, lean_object* v_resTy_497_, lean_object* v_t_498_, lean_object* v_e_499_, lean_object* v_c_500_, lean_object* v_k_501_, lean_object* v_u_502_){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_503_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_504_, 0, v_u_502_);
lean_ctor_set(v___x_504_, 1, v___x_493_);
v___x_505_ = l_Lean_mkConst(v___x_503_, v___x_504_);
lean_inc_ref(v_dec_496_);
v___x_506_ = l_Lean_mkProj(v___x_494_, v___x_495_, v_dec_496_);
lean_inc_ref(v_e_499_);
lean_inc_ref(v_t_498_);
v___x_507_ = l_Lean_mkApp4(v___x_505_, v_resTy_497_, v___x_506_, v_t_498_, v_e_499_);
v___x_508_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
v___x_509_ = lean_unsigned_to_nat(4u);
v___x_510_ = lean_mk_empty_array_with_capacity(v___x_509_);
v___x_511_ = lean_array_push(v___x_510_, v_c_500_);
v___x_512_ = lean_array_push(v___x_511_, v_dec_496_);
v___x_513_ = lean_array_push(v___x_512_, v_t_498_);
v___x_514_ = lean_array_push(v___x_513_, v_e_499_);
v___x_515_ = lean_apply_2(v_k_501_, v___x_508_, v___x_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19(lean_object* v___x_516_, lean_object* v___x_517_, lean_object* v___x_518_, lean_object* v_dec_519_, lean_object* v_resTy_520_, lean_object* v_t_521_, lean_object* v_c_522_, lean_object* v_k_523_, lean_object* v_inst_524_, lean_object* v_toBind_525_, lean_object* v_e_526_){
_start:
{
lean_object* v___f_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
lean_inc_ref(v_resTy_520_);
v___f_527_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__18), 10, 9);
lean_closure_set(v___f_527_, 0, v___x_516_);
lean_closure_set(v___f_527_, 1, v___x_517_);
lean_closure_set(v___f_527_, 2, v___x_518_);
lean_closure_set(v___f_527_, 3, v_dec_519_);
lean_closure_set(v___f_527_, 4, v_resTy_520_);
lean_closure_set(v___f_527_, 5, v_t_521_);
lean_closure_set(v___f_527_, 6, v_e_526_);
lean_closure_set(v___f_527_, 7, v_c_522_);
lean_closure_set(v___f_527_, 8, v_k_523_);
v___x_528_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_528_, 0, v_resTy_520_);
v___x_529_ = lean_apply_2(v_inst_524_, lean_box(0), v___x_528_);
v___x_530_ = lean_apply_4(v_toBind_525_, lean_box(0), lean_box(0), v___x_529_, v___f_527_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20(lean_object* v___x_531_, lean_object* v___x_532_, lean_object* v___x_533_, lean_object* v_dec_534_, lean_object* v_resTy_535_, lean_object* v_c_536_, lean_object* v_k_537_, lean_object* v_inst_538_, lean_object* v_toBind_539_, lean_object* v_inst_540_, lean_object* v_inst_541_, lean_object* v_t_542_){
_start:
{
lean_object* v___f_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
lean_inc_ref(v_resTy_535_);
v___f_543_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__19), 11, 10);
lean_closure_set(v___f_543_, 0, v___x_531_);
lean_closure_set(v___f_543_, 1, v___x_532_);
lean_closure_set(v___f_543_, 2, v___x_533_);
lean_closure_set(v___f_543_, 3, v_dec_534_);
lean_closure_set(v___f_543_, 4, v_resTy_535_);
lean_closure_set(v___f_543_, 5, v_t_542_);
lean_closure_set(v___f_543_, 6, v_c_536_);
lean_closure_set(v___f_543_, 7, v_k_537_);
lean_closure_set(v___f_543_, 8, v_inst_538_);
lean_closure_set(v___f_543_, 9, v_toBind_539_);
v___x_544_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__2___closed__1));
v___x_545_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_540_, v_inst_541_, v___x_544_, v_resTy_535_, v___f_543_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21(lean_object* v___x_546_, lean_object* v___x_547_, lean_object* v___x_548_, lean_object* v_resTy_549_, lean_object* v_c_550_, lean_object* v_k_551_, lean_object* v_inst_552_, lean_object* v_toBind_553_, lean_object* v_inst_554_, lean_object* v_inst_555_, lean_object* v_dec_556_){
_start:
{
lean_object* v___f_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
lean_inc_ref(v_inst_555_);
lean_inc_ref(v_inst_554_);
lean_inc_ref(v_resTy_549_);
v___f_557_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__20), 12, 11);
lean_closure_set(v___f_557_, 0, v___x_546_);
lean_closure_set(v___f_557_, 1, v___x_547_);
lean_closure_set(v___f_557_, 2, v___x_548_);
lean_closure_set(v___f_557_, 3, v_dec_556_);
lean_closure_set(v___f_557_, 4, v_resTy_549_);
lean_closure_set(v___f_557_, 5, v_c_550_);
lean_closure_set(v___f_557_, 6, v_k_551_);
lean_closure_set(v___f_557_, 7, v_inst_552_);
lean_closure_set(v___f_557_, 8, v_toBind_553_);
lean_closure_set(v___f_557_, 9, v_inst_554_);
lean_closure_set(v___f_557_, 10, v_inst_555_);
v___x_558_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__3___closed__1));
v___x_559_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_554_, v_inst_555_, v___x_558_, v_resTy_549_, v___f_557_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22(lean_object* v___x_560_, lean_object* v_resTy_561_, lean_object* v_k_562_, lean_object* v_inst_563_, lean_object* v_toBind_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_c_567_){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___f_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_568_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__1));
v___x_569_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__3));
v___x_570_ = lean_box(0);
lean_inc_ref(v_inst_566_);
lean_inc_ref(v_inst_565_);
lean_inc_ref(v_c_567_);
v___f_571_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__21), 11, 10);
lean_closure_set(v___f_571_, 0, v___x_570_);
lean_closure_set(v___f_571_, 1, v___x_569_);
lean_closure_set(v___f_571_, 2, v___x_560_);
lean_closure_set(v___f_571_, 3, v_resTy_561_);
lean_closure_set(v___f_571_, 4, v_c_567_);
lean_closure_set(v___f_571_, 5, v_k_562_);
lean_closure_set(v___f_571_, 6, v_inst_563_);
lean_closure_set(v___f_571_, 7, v_toBind_564_);
lean_closure_set(v___f_571_, 8, v_inst_565_);
lean_closure_set(v___f_571_, 9, v_inst_566_);
v___x_572_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4___closed__4);
v___x_573_ = l_Lean_Expr_app___override(v___x_572_, v_c_567_);
v___x_574_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_565_, v_inst_566_, v___x_568_, v___x_573_, v___f_571_);
return v___x_574_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__4(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_581_ = lean_box(0);
v___x_582_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__3));
v___x_583_ = l_Lean_mkConst(v___x_582_, v___x_581_);
return v___x_583_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__5(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = l_Lean_Level_ofNat(v___x_584_);
return v___x_585_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__5, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__5_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__5);
v___x_587_ = l_Lean_mkSort(v___x_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(lean_object* v_resTy_588_, lean_object* v_k_589_, lean_object* v_inst_590_, lean_object* v_toBind_591_, lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_____do__lift_594_){
_start:
{
if (lean_obj_tag(v_____do__lift_594_) == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___f_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_595_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1));
v___x_596_ = lean_box(0);
lean_inc_ref(v_inst_593_);
lean_inc_ref(v_inst_592_);
v___f_597_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__17), 8, 7);
lean_closure_set(v___f_597_, 0, v___x_596_);
lean_closure_set(v___f_597_, 1, v_resTy_588_);
lean_closure_set(v___f_597_, 2, v_k_589_);
lean_closure_set(v___f_597_, 3, v_inst_590_);
lean_closure_set(v___f_597_, 4, v_toBind_591_);
lean_closure_set(v___f_597_, 5, v_inst_592_);
lean_closure_set(v___f_597_, 6, v_inst_593_);
v___x_598_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__4);
v___x_599_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_592_, v_inst_593_, v___x_595_, v___x_598_, v___f_597_);
return v___x_599_;
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___f_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_600_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1));
v___x_601_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_inst_593_);
lean_inc_ref(v_inst_592_);
v___f_602_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__22), 8, 7);
lean_closure_set(v___f_602_, 0, v___x_601_);
lean_closure_set(v___f_602_, 1, v_resTy_588_);
lean_closure_set(v___f_602_, 2, v_k_589_);
lean_closure_set(v___f_602_, 3, v_inst_590_);
lean_closure_set(v___f_602_, 4, v_toBind_591_);
lean_closure_set(v___f_602_, 5, v_inst_592_);
lean_closure_set(v___f_602_, 6, v_inst_593_);
v___x_603_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6);
v___x_604_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_592_, v_inst_593_, v___x_600_, v___x_603_, v___f_602_);
return v___x_604_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___boxed(lean_object* v_resTy_605_, lean_object* v_k_606_, lean_object* v_inst_607_, lean_object* v_toBind_608_, lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_____do__lift_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23(v_resTy_605_, v_k_606_, v_inst_607_, v_toBind_608_, v_inst_609_, v_inst_610_, v_____do__lift_611_);
lean_dec(v_____do__lift_611_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(lean_object* v_i_616_, lean_object* v_a_617_, lean_object* v_x_618_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_619_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___closed__1));
v___x_620_ = lean_unsigned_to_nat(1u);
v___x_621_ = lean_nat_add(v_i_616_, v___x_620_);
v___x_622_ = lean_name_append_index_after(v___x_619_, v___x_621_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
lean_ctor_set(v___x_623_, 1, v_a_617_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24___boxed(lean_object* v_i_624_, lean_object* v_a_625_, lean_object* v_x_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__24(v_i_624_, v_a_625_, v_x_626_);
lean_dec(v_i_624_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(lean_object* v_resTy_628_, lean_object* v_motiveArgs_629_, lean_object* v_x_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
uint8_t v___x_636_; uint8_t v___x_637_; uint8_t v___x_638_; lean_object* v___x_639_; 
v___x_636_ = 0;
v___x_637_ = 1;
v___x_638_ = 1;
v___x_639_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_629_, v_resTy_628_, v___x_636_, v___x_637_, v___x_636_, v___x_637_, v___x_638_, v___y_631_, v___y_632_, v___y_633_, v___y_634_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___boxed(lean_object* v_resTy_640_, lean_object* v_motiveArgs_641_, lean_object* v_x_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25(v_resTy_640_, v_motiveArgs_641_, v_x_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec_ref(v_x_642_);
lean_dec_ref(v_motiveArgs_641_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(lean_object* v_i_649_, lean_object* v___x_650_, lean_object* v_discrs_651_, lean_object* v_prior_652_, lean_object* v_next_653_, lean_object* v_acc_654_, lean_object* v_h_655_, lean_object* v_G_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_a_663_; uint8_t v___x_667_; 
v___x_667_ = lean_nat_dec_lt(v_next_653_, v_i_649_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; 
lean_dec_ref(v_G_656_);
v___x_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_668_, 0, v_acc_654_);
return v___x_668_;
}
else
{
lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_669_ = lean_array_get_borrowed(v___x_650_, v_discrs_651_, v_next_653_);
v___x_670_ = l_Lean_Expr_isFVar(v___x_669_);
if (v___x_670_ == 0)
{
v_a_663_ = v_acc_654_;
goto v___jp_662_;
}
else
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_array_get_borrowed(v___x_650_, v_prior_652_, v_next_653_);
lean_inc(v___x_669_);
v___x_672_ = l_Lean_Expr_replaceFVar(v_acc_654_, v___x_669_, v___x_671_);
lean_dec_ref(v_acc_654_);
v_a_663_ = v___x_672_;
goto v___jp_662_;
}
}
v___jp_662_:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_664_ = lean_unsigned_to_nat(1u);
v___x_665_ = lean_nat_add(v_next_653_, v___x_664_);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
lean_inc(v___y_658_);
lean_inc_ref(v___y_657_);
v___x_666_ = lean_apply_9(v_G_656_, v___x_665_, v_a_663_, lean_box(0), lean_box(0), v___y_657_, v___y_658_, v___y_659_, v___y_660_, lean_box(0));
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___boxed(lean_object* v_i_673_, lean_object* v___x_674_, lean_object* v_discrs_675_, lean_object* v_prior_676_, lean_object* v_next_677_, lean_object* v_acc_678_, lean_object* v_h_679_, lean_object* v_G_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26(v_i_673_, v___x_674_, v_discrs_675_, v_prior_676_, v_next_677_, v_acc_678_, v_h_679_, v_G_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec(v_next_677_);
lean_dec_ref(v_prior_676_);
lean_dec_ref(v_discrs_675_);
lean_dec_ref(v___x_674_);
lean_dec(v_i_673_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(lean_object* v_a_687_, lean_object* v___f_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v___x_694_; 
lean_inc(v___y_692_);
lean_inc_ref(v___y_691_);
lean_inc(v___y_690_);
lean_inc_ref(v___y_689_);
v___x_694_ = lean_infer_type(v_a_687_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_696_; lean_object* v___x_2914__overap_697_; lean_object* v___x_698_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_2914__overap_697_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_688_, v___x_696_, v_a_695_, lean_box(0));
v___x_698_ = lean_apply_5(v___x_2914__overap_697_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, lean_box(0));
return v___x_698_;
}
else
{
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec_ref(v___f_688_);
return v___x_694_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed(lean_object* v_a_699_, lean_object* v___f_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27(v_a_699_, v___f_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28(lean_object* v_i_707_, lean_object* v___x_708_, lean_object* v_discrs_709_, lean_object* v_a_710_, lean_object* v_inst_711_, lean_object* v_prior_712_){
_start:
{
lean_object* v___f_713_; lean_object* v___f_714_; lean_object* v___x_715_; 
v___f_713_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__26___boxed), 13, 4);
lean_closure_set(v___f_713_, 0, v_i_707_);
lean_closure_set(v___f_713_, 1, v___x_708_);
lean_closure_set(v___f_713_, 2, v_discrs_709_);
lean_closure_set(v___f_713_, 3, v_prior_712_);
v___f_714_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__27___boxed), 7, 2);
lean_closure_set(v___f_714_, 0, v_a_710_);
lean_closure_set(v___f_714_, 1, v___f_713_);
v___x_715_ = lean_apply_2(v_inst_711_, lean_box(0), v___f_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29(lean_object* v___x_719_, lean_object* v_discrs_720_, lean_object* v_inst_721_, lean_object* v_i_722_, lean_object* v_a_723_, lean_object* v_x_724_){
_start:
{
lean_object* v___f_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
lean_inc(v_i_722_);
v___f_725_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__28), 6, 5);
lean_closure_set(v___f_725_, 0, v_i_722_);
lean_closure_set(v___f_725_, 1, v___x_719_);
lean_closure_set(v___f_725_, 2, v_discrs_720_);
lean_closure_set(v___f_725_, 3, v_a_723_);
lean_closure_set(v___f_725_, 4, v_inst_721_);
v___x_726_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29___closed__1));
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = lean_nat_add(v_i_722_, v___x_727_);
lean_dec(v_i_722_);
v___x_729_ = lean_name_append_index_after(v___x_726_, v___x_728_);
v___x_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
lean_ctor_set(v___x_730_, 1, v___f_725_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(lean_object* v_toMatcherInfo_733_, lean_object* v_matcherName_734_, lean_object* v_matcherLevels_735_, lean_object* v_params_736_, lean_object* v_motive_737_, lean_object* v_discrs_738_, lean_object* v_alts_739_, lean_object* v_k_740_, lean_object* v_____do__lift_741_){
_start:
{
lean_object* v___x_742_; lean_object* v_abstractMatcherApp_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_742_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0));
lean_inc_ref(v_discrs_738_);
v_abstractMatcherApp_743_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_abstractMatcherApp_743_, 0, v_toMatcherInfo_733_);
lean_ctor_set(v_abstractMatcherApp_743_, 1, v_matcherName_734_);
lean_ctor_set(v_abstractMatcherApp_743_, 2, v_matcherLevels_735_);
lean_ctor_set(v_abstractMatcherApp_743_, 3, v_params_736_);
lean_ctor_set(v_abstractMatcherApp_743_, 4, v_motive_737_);
lean_ctor_set(v_abstractMatcherApp_743_, 5, v_discrs_738_);
lean_ctor_set(v_abstractMatcherApp_743_, 6, v_____do__lift_741_);
lean_ctor_set(v_abstractMatcherApp_743_, 7, v___x_742_);
v___x_744_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_744_, 0, v_abstractMatcherApp_743_);
v___x_745_ = l_Array_append___redArg(v_discrs_738_, v_alts_739_);
v___x_746_ = lean_apply_2(v_k_740_, v___x_744_, v___x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed(lean_object* v_toMatcherInfo_747_, lean_object* v_matcherName_748_, lean_object* v_matcherLevels_749_, lean_object* v_params_750_, lean_object* v_motive_751_, lean_object* v_discrs_752_, lean_object* v_alts_753_, lean_object* v_k_754_, lean_object* v_____do__lift_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30(v_toMatcherInfo_747_, v_matcherName_748_, v_matcherLevels_749_, v_params_750_, v_motive_751_, v_discrs_752_, v_alts_753_, v_k_754_, v_____do__lift_755_);
lean_dec_ref(v_alts_753_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31(lean_object* v_toMatcherInfo_758_, lean_object* v_matcherName_759_, lean_object* v_matcherLevels_760_, lean_object* v_params_761_, lean_object* v_motive_762_, lean_object* v_discrs_763_, lean_object* v_k_764_, lean_object* v___x_765_, lean_object* v_inst_766_, lean_object* v_toBind_767_, lean_object* v_alts_768_){
_start:
{
lean_object* v___f_769_; lean_object* v___x_770_; size_t v_sz_771_; size_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
lean_inc_ref(v_alts_768_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___boxed), 9, 8);
lean_closure_set(v___f_769_, 0, v_toMatcherInfo_758_);
lean_closure_set(v___f_769_, 1, v_matcherName_759_);
lean_closure_set(v___f_769_, 2, v_matcherLevels_760_);
lean_closure_set(v___f_769_, 3, v_params_761_);
lean_closure_set(v___f_769_, 4, v_motive_762_);
lean_closure_set(v___f_769_, 5, v_discrs_763_);
lean_closure_set(v___f_769_, 6, v_alts_768_);
lean_closure_set(v___f_769_, 7, v_k_764_);
v___x_770_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31___closed__0));
v_sz_771_ = lean_array_size(v_alts_768_);
v___x_772_ = ((size_t)0ULL);
v___x_773_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_765_, v___x_770_, v_sz_771_, v___x_772_, v_alts_768_);
v___x_774_ = lean_apply_2(v_inst_766_, lean_box(0), v___x_773_);
v___x_775_ = lean_apply_4(v_toBind_767_, lean_box(0), lean_box(0), v___x_774_, v___f_769_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32(lean_object* v___f_795_, lean_object* v_inst_796_, lean_object* v_inst_797_, lean_object* v___f_798_, lean_object* v_origAltTypes_799_){
_start:
{
lean_object* v___x_800_; size_t v_sz_801_; size_t v___x_802_; lean_object* v_altNamesTypes_803_; uint8_t v___x_804_; lean_object* v___x_805_; 
v___x_800_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__9));
v_sz_801_ = lean_array_size(v_origAltTypes_799_);
v___x_802_ = ((size_t)0ULL);
lean_inc_ref(v_origAltTypes_799_);
v_altNamesTypes_803_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_800_, v_origAltTypes_799_, v___f_795_, v_sz_801_, v___x_802_, v_origAltTypes_799_);
lean_dec_ref(v_origAltTypes_799_);
v___x_804_ = 0;
v___x_805_ = l_Lean_Meta_withLocalDeclsDND___redArg(v_inst_796_, v_inst_797_, v_altNamesTypes_803_, v___f_798_, v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33(lean_object* v_toMatcherInfo_806_, lean_object* v_matcherName_807_, lean_object* v_params_808_, lean_object* v_motive_809_, lean_object* v_discrs_810_, lean_object* v_k_811_, lean_object* v___x_812_, lean_object* v_inst_813_, lean_object* v_toBind_814_, lean_object* v___f_815_, lean_object* v_inst_816_, lean_object* v_inst_817_, lean_object* v_alts_818_, lean_object* v_matcherLevels_819_){
_start:
{
lean_object* v___f_820_; lean_object* v___f_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v_matcherPartial_824_; lean_object* v_matcherPartial_825_; lean_object* v_matcherPartial_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
lean_inc(v_toBind_814_);
lean_inc(v_inst_813_);
lean_inc_ref(v_discrs_810_);
lean_inc_ref(v_motive_809_);
lean_inc_ref(v_params_808_);
lean_inc_ref(v_matcherLevels_819_);
lean_inc(v_matcherName_807_);
v___f_820_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__31), 11, 10);
lean_closure_set(v___f_820_, 0, v_toMatcherInfo_806_);
lean_closure_set(v___f_820_, 1, v_matcherName_807_);
lean_closure_set(v___f_820_, 2, v_matcherLevels_819_);
lean_closure_set(v___f_820_, 3, v_params_808_);
lean_closure_set(v___f_820_, 4, v_motive_809_);
lean_closure_set(v___f_820_, 5, v_discrs_810_);
lean_closure_set(v___f_820_, 6, v_k_811_);
lean_closure_set(v___f_820_, 7, v___x_812_);
lean_closure_set(v___f_820_, 8, v_inst_813_);
lean_closure_set(v___f_820_, 9, v_toBind_814_);
v___f_821_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32), 5, 4);
lean_closure_set(v___f_821_, 0, v___f_815_);
lean_closure_set(v___f_821_, 1, v_inst_816_);
lean_closure_set(v___f_821_, 2, v_inst_817_);
lean_closure_set(v___f_821_, 3, v___f_820_);
v___x_822_ = lean_array_to_list(v_matcherLevels_819_);
v___x_823_ = l_Lean_mkConst(v_matcherName_807_, v___x_822_);
v_matcherPartial_824_ = l_Lean_mkAppN(v___x_823_, v_params_808_);
lean_dec_ref(v_params_808_);
v_matcherPartial_825_ = l_Lean_Expr_app___override(v_matcherPartial_824_, v_motive_809_);
v_matcherPartial_826_ = l_Lean_mkAppN(v_matcherPartial_825_, v_discrs_810_);
lean_dec_ref(v_discrs_810_);
v___x_827_ = lean_array_get_size(v_alts_818_);
v___x_828_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_828_, 0, v___x_827_);
lean_closure_set(v___x_828_, 1, v_matcherPartial_826_);
v___x_829_ = lean_apply_2(v_inst_813_, lean_box(0), v___x_828_);
v___x_830_ = lean_apply_4(v_toBind_814_, lean_box(0), lean_box(0), v___x_829_, v___f_821_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33___boxed(lean_object* v_toMatcherInfo_831_, lean_object* v_matcherName_832_, lean_object* v_params_833_, lean_object* v_motive_834_, lean_object* v_discrs_835_, lean_object* v_k_836_, lean_object* v___x_837_, lean_object* v_inst_838_, lean_object* v_toBind_839_, lean_object* v___f_840_, lean_object* v_inst_841_, lean_object* v_inst_842_, lean_object* v_alts_843_, lean_object* v_matcherLevels_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33(v_toMatcherInfo_831_, v_matcherName_832_, v_params_833_, v_motive_834_, v_discrs_835_, v_k_836_, v___x_837_, v_inst_838_, v_toBind_839_, v___f_840_, v_inst_841_, v_inst_842_, v_alts_843_, v_matcherLevels_844_);
lean_dec_ref(v_alts_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34(lean_object* v___f_846_, lean_object* v_matcherLevels_847_){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = lean_apply_1(v___f_846_, v_matcherLevels_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36(lean_object* v_matcherLevels_849_, lean_object* v_val_850_, lean_object* v_toPure_851_, lean_object* v_toBind_852_, lean_object* v___f_853_, lean_object* v_uElim_854_){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = lean_array_set(v_matcherLevels_849_, v_val_850_, v_uElim_854_);
v___x_856_ = lean_apply_2(v_toPure_851_, lean_box(0), v___x_855_);
v___x_857_ = lean_apply_4(v_toBind_852_, lean_box(0), lean_box(0), v___x_856_, v___f_853_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___boxed(lean_object* v_matcherLevels_858_, lean_object* v_val_859_, lean_object* v_toPure_860_, lean_object* v_toBind_861_, lean_object* v___f_862_, lean_object* v_uElim_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36(v_matcherLevels_858_, v_val_859_, v_toPure_860_, v_toBind_861_, v___f_862_, v_uElim_863_);
lean_dec(v_val_859_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__35(lean_object* v_toMatcherInfo_865_, lean_object* v_matcherName_866_, lean_object* v_params_867_, lean_object* v_discrs_868_, lean_object* v_k_869_, lean_object* v___x_870_, lean_object* v_inst_871_, lean_object* v_toBind_872_, lean_object* v___f_873_, lean_object* v_inst_874_, lean_object* v_inst_875_, lean_object* v_alts_876_, lean_object* v_toPure_877_, lean_object* v_matcherLevels_878_, lean_object* v_resTy_879_, lean_object* v_motive_880_){
_start:
{
lean_object* v_uElimPos_x3f_881_; lean_object* v___f_882_; 
v_uElimPos_x3f_881_ = lean_ctor_get(v_toMatcherInfo_865_, 3);
lean_inc(v_uElimPos_x3f_881_);
lean_inc(v_toBind_872_);
lean_inc(v_inst_871_);
v___f_882_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__33___boxed), 14, 13);
lean_closure_set(v___f_882_, 0, v_toMatcherInfo_865_);
lean_closure_set(v___f_882_, 1, v_matcherName_866_);
lean_closure_set(v___f_882_, 2, v_params_867_);
lean_closure_set(v___f_882_, 3, v_motive_880_);
lean_closure_set(v___f_882_, 4, v_discrs_868_);
lean_closure_set(v___f_882_, 5, v_k_869_);
lean_closure_set(v___f_882_, 6, v___x_870_);
lean_closure_set(v___f_882_, 7, v_inst_871_);
lean_closure_set(v___f_882_, 8, v_toBind_872_);
lean_closure_set(v___f_882_, 9, v___f_873_);
lean_closure_set(v___f_882_, 10, v_inst_874_);
lean_closure_set(v___f_882_, 11, v_inst_875_);
lean_closure_set(v___f_882_, 12, v_alts_876_);
if (lean_obj_tag(v_uElimPos_x3f_881_) == 0)
{
lean_object* v___f_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec_ref(v_resTy_879_);
lean_dec(v_inst_871_);
v___f_883_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34), 2, 1);
lean_closure_set(v___f_883_, 0, v___f_882_);
v___x_884_ = lean_apply_2(v_toPure_877_, lean_box(0), v_matcherLevels_878_);
v___x_885_ = lean_apply_4(v_toBind_872_, lean_box(0), lean_box(0), v___x_884_, v___f_883_);
return v___x_885_;
}
else
{
lean_object* v_val_886_; lean_object* v___f_887_; lean_object* v___f_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_val_886_ = lean_ctor_get(v_uElimPos_x3f_881_, 0);
lean_inc(v_val_886_);
lean_dec_ref_known(v_uElimPos_x3f_881_, 1);
v___f_887_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__34), 2, 1);
lean_closure_set(v___f_887_, 0, v___f_882_);
lean_inc(v_toBind_872_);
v___f_888_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__36___boxed), 6, 5);
lean_closure_set(v___f_888_, 0, v_matcherLevels_878_);
lean_closure_set(v___f_888_, 1, v_val_886_);
lean_closure_set(v___f_888_, 2, v_toPure_877_);
lean_closure_set(v___f_888_, 3, v_toBind_872_);
lean_closure_set(v___f_888_, 4, v___f_887_);
v___x_889_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_889_, 0, v_resTy_879_);
v___x_890_ = lean_apply_2(v_inst_871_, lean_box(0), v___x_889_);
v___x_891_ = lean_apply_4(v_toBind_872_, lean_box(0), lean_box(0), v___x_890_, v___f_888_);
return v___x_891_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37(lean_object* v_toMatcherInfo_892_, lean_object* v_matcherName_893_, lean_object* v_params_894_, lean_object* v_k_895_, lean_object* v___x_896_, lean_object* v_inst_897_, lean_object* v_toBind_898_, lean_object* v___f_899_, lean_object* v_inst_900_, lean_object* v_inst_901_, lean_object* v_alts_902_, lean_object* v_toPure_903_, lean_object* v_matcherLevels_904_, lean_object* v_resTy_905_, lean_object* v___x_906_, lean_object* v_motive_907_, lean_object* v___f_908_, lean_object* v_discrs_909_){
_start:
{
lean_object* v___f_910_; uint8_t v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
lean_inc(v_toBind_898_);
lean_inc(v_inst_897_);
lean_inc_ref(v___x_896_);
v___f_910_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__35), 16, 15);
lean_closure_set(v___f_910_, 0, v_toMatcherInfo_892_);
lean_closure_set(v___f_910_, 1, v_matcherName_893_);
lean_closure_set(v___f_910_, 2, v_params_894_);
lean_closure_set(v___f_910_, 3, v_discrs_909_);
lean_closure_set(v___f_910_, 4, v_k_895_);
lean_closure_set(v___f_910_, 5, v___x_896_);
lean_closure_set(v___f_910_, 6, v_inst_897_);
lean_closure_set(v___f_910_, 7, v_toBind_898_);
lean_closure_set(v___f_910_, 8, v___f_899_);
lean_closure_set(v___f_910_, 9, v_inst_900_);
lean_closure_set(v___f_910_, 10, v_inst_901_);
lean_closure_set(v___f_910_, 11, v_alts_902_);
lean_closure_set(v___f_910_, 12, v_toPure_903_);
lean_closure_set(v___f_910_, 13, v_matcherLevels_904_);
lean_closure_set(v___f_910_, 14, v_resTy_905_);
v___x_911_ = 0;
v___x_912_ = l_Lean_Meta_lambdaTelescope___redArg(v___x_906_, v___x_896_, v_motive_907_, v___f_908_, v___x_911_);
v___x_913_ = lean_apply_2(v_inst_897_, lean_box(0), v___x_912_);
v___x_914_ = lean_apply_4(v_toBind_898_, lean_box(0), lean_box(0), v___x_913_, v___f_910_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_915_ = _args[0];
lean_object* v_matcherName_916_ = _args[1];
lean_object* v_params_917_ = _args[2];
lean_object* v_k_918_ = _args[3];
lean_object* v___x_919_ = _args[4];
lean_object* v_inst_920_ = _args[5];
lean_object* v_toBind_921_ = _args[6];
lean_object* v___f_922_ = _args[7];
lean_object* v_inst_923_ = _args[8];
lean_object* v_inst_924_ = _args[9];
lean_object* v_alts_925_ = _args[10];
lean_object* v_toPure_926_ = _args[11];
lean_object* v_matcherLevels_927_ = _args[12];
lean_object* v_resTy_928_ = _args[13];
lean_object* v___x_929_ = _args[14];
lean_object* v_motive_930_ = _args[15];
lean_object* v___f_931_ = _args[16];
lean_object* v_discrs_932_ = _args[17];
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37(v_toMatcherInfo_915_, v_matcherName_916_, v_params_917_, v_k_918_, v___x_919_, v_inst_920_, v_toBind_921_, v___f_922_, v_inst_923_, v_inst_924_, v_alts_925_, v_toPure_926_, v_matcherLevels_927_, v_resTy_928_, v___x_929_, v_motive_930_, v___f_931_, v_discrs_932_);
return v_res_933_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0(void){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_instMonadEIO___redArg();
return v___x_934_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__0);
v___x_936_ = l_StateRefT_x27_instMonad___redArg(v___x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(lean_object* v_inst_942_, lean_object* v_inst_943_, lean_object* v_inst_944_, lean_object* v_info_945_, lean_object* v_resTy_946_, lean_object* v_k_947_){
_start:
{
lean_object* v___x_948_; lean_object* v_toApplicative_949_; lean_object* v_toFunctor_950_; lean_object* v_toSeq_951_; lean_object* v_toSeqLeft_952_; lean_object* v_toSeqRight_953_; lean_object* v___f_954_; lean_object* v___f_955_; lean_object* v___f_956_; lean_object* v___f_957_; lean_object* v___x_958_; lean_object* v___f_959_; lean_object* v___f_960_; lean_object* v___f_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_toApplicative_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_1051_; 
v___x_948_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1);
v_toApplicative_949_ = lean_ctor_get(v___x_948_, 0);
v_toFunctor_950_ = lean_ctor_get(v_toApplicative_949_, 0);
v_toSeq_951_ = lean_ctor_get(v_toApplicative_949_, 2);
v_toSeqLeft_952_ = lean_ctor_get(v_toApplicative_949_, 3);
v_toSeqRight_953_ = lean_ctor_get(v_toApplicative_949_, 4);
v___f_954_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2));
v___f_955_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_950_, 2);
v___f_956_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_956_, 0, v_toFunctor_950_);
v___f_957_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_957_, 0, v_toFunctor_950_);
v___x_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_958_, 0, v___f_956_);
lean_ctor_set(v___x_958_, 1, v___f_957_);
lean_inc(v_toSeqRight_953_);
v___f_959_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_959_, 0, v_toSeqRight_953_);
lean_inc(v_toSeqLeft_952_);
v___f_960_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_960_, 0, v_toSeqLeft_952_);
lean_inc(v_toSeq_951_);
v___f_961_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_961_, 0, v_toSeq_951_);
v___x_962_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_962_, 0, v___x_958_);
lean_ctor_set(v___x_962_, 1, v___f_954_);
lean_ctor_set(v___x_962_, 2, v___f_961_);
lean_ctor_set(v___x_962_, 3, v___f_960_);
lean_ctor_set(v___x_962_, 4, v___f_959_);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
lean_ctor_set(v___x_963_, 1, v___f_955_);
v___x_964_ = l_StateRefT_x27_instMonad___redArg(v___x_963_);
v_toApplicative_965_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_1051_ == 0)
{
lean_object* v_unused_1052_; 
v_unused_1052_ = lean_ctor_get(v___x_964_, 1);
lean_dec(v_unused_1052_);
v___x_967_ = v___x_964_;
v_isShared_968_ = v_isSharedCheck_1051_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_toApplicative_965_);
lean_dec(v___x_964_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_1051_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v_toFunctor_969_; lean_object* v_toSeq_970_; lean_object* v_toSeqLeft_971_; lean_object* v_toSeqRight_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_1049_; 
v_toFunctor_969_ = lean_ctor_get(v_toApplicative_965_, 0);
v_toSeq_970_ = lean_ctor_get(v_toApplicative_965_, 2);
v_toSeqLeft_971_ = lean_ctor_get(v_toApplicative_965_, 3);
v_toSeqRight_972_ = lean_ctor_get(v_toApplicative_965_, 4);
v_isSharedCheck_1049_ = !lean_is_exclusive(v_toApplicative_965_);
if (v_isSharedCheck_1049_ == 0)
{
lean_object* v_unused_1050_; 
v_unused_1050_ = lean_ctor_get(v_toApplicative_965_, 1);
lean_dec(v_unused_1050_);
v___x_974_ = v_toApplicative_965_;
v_isShared_975_ = v_isSharedCheck_1049_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_toSeqRight_972_);
lean_inc(v_toSeqLeft_971_);
lean_inc(v_toSeq_970_);
lean_inc(v_toFunctor_969_);
lean_dec(v_toApplicative_965_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_1049_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___f_976_; lean_object* v___f_977_; lean_object* v___f_978_; lean_object* v___f_979_; lean_object* v___x_980_; lean_object* v___f_981_; lean_object* v___f_982_; lean_object* v___f_983_; lean_object* v___x_985_; 
v___f_976_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4));
v___f_977_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5));
lean_inc_ref(v_toFunctor_969_);
v___f_978_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_978_, 0, v_toFunctor_969_);
v___f_979_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_979_, 0, v_toFunctor_969_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___f_978_);
lean_ctor_set(v___x_980_, 1, v___f_979_);
v___f_981_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_981_, 0, v_toSeqRight_972_);
v___f_982_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_982_, 0, v_toSeqLeft_971_);
v___f_983_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_983_, 0, v_toSeq_970_);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 4, v___f_981_);
lean_ctor_set(v___x_974_, 3, v___f_982_);
lean_ctor_set(v___x_974_, 2, v___f_983_);
lean_ctor_set(v___x_974_, 1, v___f_976_);
lean_ctor_set(v___x_974_, 0, v___x_980_);
v___x_985_ = v___x_974_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_980_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v___f_976_);
lean_ctor_set(v_reuseFailAlloc_1048_, 2, v___f_983_);
lean_ctor_set(v_reuseFailAlloc_1048_, 3, v___f_982_);
lean_ctor_set(v_reuseFailAlloc_1048_, 4, v___f_981_);
v___x_985_ = v_reuseFailAlloc_1048_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_987_; 
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 1, v___f_977_);
lean_ctor_set(v___x_967_, 0, v___x_985_);
v___x_987_ = v___x_967_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v___f_977_);
v___x_987_ = v_reuseFailAlloc_1047_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v_toApplicative_988_; lean_object* v_toFunctor_989_; lean_object* v_toSeq_990_; lean_object* v_toSeqLeft_991_; lean_object* v_toSeqRight_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___x_995_; lean_object* v___f_996_; lean_object* v___f_997_; lean_object* v___f_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v_toApplicative_988_ = lean_ctor_get(v___x_948_, 0);
v_toFunctor_989_ = lean_ctor_get(v_toApplicative_988_, 0);
v_toSeq_990_ = lean_ctor_get(v_toApplicative_988_, 2);
v_toSeqLeft_991_ = lean_ctor_get(v_toApplicative_988_, 3);
v_toSeqRight_992_ = lean_ctor_get(v_toApplicative_988_, 4);
lean_inc_ref_n(v_toFunctor_989_, 2);
v___f_993_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_993_, 0, v_toFunctor_989_);
v___f_994_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_994_, 0, v_toFunctor_989_);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___f_993_);
lean_ctor_set(v___x_995_, 1, v___f_994_);
lean_inc(v_toSeqRight_992_);
v___f_996_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_996_, 0, v_toSeqRight_992_);
lean_inc(v_toSeqLeft_991_);
v___f_997_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_997_, 0, v_toSeqLeft_991_);
lean_inc(v_toSeq_990_);
v___f_998_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_998_, 0, v_toSeq_990_);
v___x_999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_999_, 0, v___x_995_);
lean_ctor_set(v___x_999_, 1, v___f_954_);
lean_ctor_set(v___x_999_, 2, v___f_998_);
lean_ctor_set(v___x_999_, 3, v___f_997_);
lean_ctor_set(v___x_999_, 4, v___f_996_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
lean_ctor_set(v___x_1000_, 1, v___f_955_);
v___x_1001_ = l_StateRefT_x27_instMonad___redArg(v___x_1000_);
v___x_1002_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1002_, 0, lean_box(0));
lean_closure_set(v___x_1002_, 1, lean_box(0));
lean_closure_set(v___x_1002_, 2, v___x_1001_);
v___x_1003_ = l_instMonadControlTOfPure___redArg(v___x_1002_);
switch(lean_obj_tag(v_info_945_))
{
case 0:
{
lean_object* v_toBind_1004_; lean_object* v___f_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec_ref_known(v_info_945_, 1);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___x_987_);
v_toBind_1004_ = lean_ctor_get(v_inst_944_, 1);
lean_inc_ref(v_inst_944_);
lean_inc_ref(v_inst_943_);
lean_inc(v_toBind_1004_);
v___f_1005_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1005_, 0, v_resTy_946_);
lean_closure_set(v___f_1005_, 1, v_k_947_);
lean_closure_set(v___f_1005_, 2, v_inst_942_);
lean_closure_set(v___f_1005_, 3, v_toBind_1004_);
lean_closure_set(v___f_1005_, 4, v_inst_943_);
lean_closure_set(v___f_1005_, 5, v_inst_944_);
v___x_1006_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1));
v___x_1007_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6);
v___x_1008_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_943_, v_inst_944_, v___x_1006_, v___x_1007_, v___f_1005_);
return v___x_1008_;
}
case 1:
{
lean_object* v_toBind_1009_; lean_object* v___f_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
lean_dec_ref_known(v_info_945_, 1);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___x_987_);
v_toBind_1009_ = lean_ctor_get(v_inst_944_, 1);
lean_inc_ref(v_inst_944_);
lean_inc_ref(v_inst_943_);
lean_inc(v_toBind_1009_);
v___f_1010_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__13), 7, 6);
lean_closure_set(v___f_1010_, 0, v_resTy_946_);
lean_closure_set(v___f_1010_, 1, v_k_947_);
lean_closure_set(v___f_1010_, 2, v_inst_942_);
lean_closure_set(v___f_1010_, 3, v_toBind_1009_);
lean_closure_set(v___f_1010_, 4, v_inst_943_);
lean_closure_set(v___f_1010_, 5, v_inst_944_);
v___x_1011_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__1));
v___x_1012_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___closed__6);
v___x_1013_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_943_, v_inst_944_, v___x_1011_, v___x_1012_, v___f_1010_);
return v___x_1013_;
}
case 2:
{
lean_object* v_toBind_1014_; lean_object* v_e_1015_; lean_object* v___f_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___x_987_);
v_toBind_1014_ = lean_ctor_get(v_inst_944_, 1);
lean_inc_n(v_toBind_1014_, 2);
v_e_1015_ = lean_ctor_get(v_info_945_, 0);
lean_inc_ref(v_e_1015_);
lean_dec_ref_known(v_info_945_, 1);
lean_inc(v_inst_942_);
v___f_1016_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__23___boxed), 7, 6);
lean_closure_set(v___f_1016_, 0, v_resTy_946_);
lean_closure_set(v___f_1016_, 1, v_k_947_);
lean_closure_set(v___f_1016_, 2, v_inst_942_);
lean_closure_set(v___f_1016_, 3, v_toBind_1014_);
lean_closure_set(v___f_1016_, 4, v_inst_943_);
lean_closure_set(v___f_1016_, 5, v_inst_944_);
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = l_Lean_Expr_getAppNumArgs(v_e_1015_);
v___x_1019_ = lean_nat_sub(v___x_1018_, v___x_1017_);
lean_dec(v___x_1018_);
v___x_1020_ = lean_nat_sub(v___x_1019_, v___x_1017_);
lean_dec(v___x_1019_);
v___x_1021_ = l_Lean_Expr_getRevArg_x21(v_e_1015_, v___x_1020_);
lean_dec_ref(v_e_1015_);
v___x_1022_ = lean_alloc_closure((void*)(l_Lean_Meta_getBoolDecision_x3f___boxed), 6, 1);
lean_closure_set(v___x_1022_, 0, v___x_1021_);
v___x_1023_ = lean_apply_2(v_inst_942_, lean_box(0), v___x_1022_);
v___x_1024_ = lean_apply_4(v_toBind_1014_, lean_box(0), lean_box(0), v___x_1023_, v___f_1016_);
return v___x_1024_;
}
default: 
{
lean_object* v_toApplicative_1025_; lean_object* v_matcherApp_1026_; lean_object* v_toBind_1027_; lean_object* v_toPure_1028_; lean_object* v_toMatcherInfo_1029_; lean_object* v_matcherName_1030_; lean_object* v_matcherLevels_1031_; lean_object* v_params_1032_; lean_object* v_motive_1033_; lean_object* v_discrs_1034_; lean_object* v_alts_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___x_1038_; lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___x_1041_; size_t v_sz_1042_; size_t v___x_1043_; lean_object* v_discrDecls_1044_; uint8_t v___x_1045_; lean_object* v___x_1046_; 
v_toApplicative_1025_ = lean_ctor_get(v_inst_944_, 0);
v_matcherApp_1026_ = lean_ctor_get(v_info_945_, 0);
lean_inc_ref(v_matcherApp_1026_);
lean_dec_ref_known(v_info_945_, 1);
v_toBind_1027_ = lean_ctor_get(v_inst_944_, 1);
v_toPure_1028_ = lean_ctor_get(v_toApplicative_1025_, 1);
v_toMatcherInfo_1029_ = lean_ctor_get(v_matcherApp_1026_, 0);
lean_inc_ref(v_toMatcherInfo_1029_);
v_matcherName_1030_ = lean_ctor_get(v_matcherApp_1026_, 1);
lean_inc(v_matcherName_1030_);
v_matcherLevels_1031_ = lean_ctor_get(v_matcherApp_1026_, 2);
lean_inc_ref(v_matcherLevels_1031_);
v_params_1032_ = lean_ctor_get(v_matcherApp_1026_, 3);
lean_inc_ref(v_params_1032_);
v_motive_1033_ = lean_ctor_get(v_matcherApp_1026_, 4);
lean_inc_ref(v_motive_1033_);
v_discrs_1034_ = lean_ctor_get(v_matcherApp_1026_, 5);
lean_inc_ref_n(v_discrs_1034_, 3);
v_alts_1035_ = lean_ctor_get(v_matcherApp_1026_, 6);
lean_inc_ref(v_alts_1035_);
lean_dec_ref(v_matcherApp_1026_);
v___f_1036_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__6));
lean_inc_ref(v_resTy_946_);
v___f_1037_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__25___boxed), 8, 1);
lean_closure_set(v___f_1037_, 0, v_resTy_946_);
v___x_1038_ = l_Lean_instInhabitedExpr;
lean_inc(v_inst_942_);
v___f_1039_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__29), 6, 3);
lean_closure_set(v___f_1039_, 0, v___x_1038_);
lean_closure_set(v___f_1039_, 1, v_discrs_1034_);
lean_closure_set(v___f_1039_, 2, v_inst_942_);
lean_inc(v_toPure_1028_);
lean_inc_ref(v_inst_944_);
lean_inc_ref(v_inst_943_);
lean_inc(v_toBind_1027_);
v___f_1040_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__37___boxed), 18, 17);
lean_closure_set(v___f_1040_, 0, v_toMatcherInfo_1029_);
lean_closure_set(v___f_1040_, 1, v_matcherName_1030_);
lean_closure_set(v___f_1040_, 2, v_params_1032_);
lean_closure_set(v___f_1040_, 3, v_k_947_);
lean_closure_set(v___f_1040_, 4, v___x_987_);
lean_closure_set(v___f_1040_, 5, v_inst_942_);
lean_closure_set(v___f_1040_, 6, v_toBind_1027_);
lean_closure_set(v___f_1040_, 7, v___f_1036_);
lean_closure_set(v___f_1040_, 8, v_inst_943_);
lean_closure_set(v___f_1040_, 9, v_inst_944_);
lean_closure_set(v___f_1040_, 10, v_alts_1035_);
lean_closure_set(v___f_1040_, 11, v_toPure_1028_);
lean_closure_set(v___f_1040_, 12, v_matcherLevels_1031_);
lean_closure_set(v___f_1040_, 13, v_resTy_946_);
lean_closure_set(v___f_1040_, 14, v___x_1003_);
lean_closure_set(v___f_1040_, 15, v_motive_1033_);
lean_closure_set(v___f_1040_, 16, v___f_1037_);
v___x_1041_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__9));
v_sz_1042_ = lean_array_size(v_discrs_1034_);
v___x_1043_ = ((size_t)0ULL);
v_discrDecls_1044_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1041_, v_discrs_1034_, v___f_1039_, v_sz_1042_, v___x_1043_, v_discrs_1034_);
lean_dec_ref(v_discrs_1034_);
v___x_1045_ = 0;
v___x_1046_ = l_Lean_Meta_withLocalDeclsD___redArg(v_inst_943_, v_inst_944_, v_discrDecls_1044_, v___f_1040_, v___x_1045_);
return v___x_1046_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(lean_object* v_n_1053_, lean_object* v_00_u03b1_1054_, lean_object* v_inst_1055_, lean_object* v_inst_1056_, lean_object* v_inst_1057_, lean_object* v_inst_1058_, lean_object* v_info_1059_, lean_object* v_resTy_1060_, lean_object* v_k_1061_){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg(v_inst_1055_, v_inst_1056_, v_inst_1057_, v_info_1059_, v_resTy_1060_, v_k_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___boxed(lean_object* v_n_1063_, lean_object* v_00_u03b1_1064_, lean_object* v_inst_1065_, lean_object* v_inst_1066_, lean_object* v_inst_1067_, lean_object* v_inst_1068_, lean_object* v_info_1069_, lean_object* v_resTy_1070_, lean_object* v_k_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract(v_n_1063_, v_00_u03b1_1064_, v_inst_1065_, v_inst_1066_, v_inst_1067_, v_inst_1068_, v_info_1069_, v_resTy_1070_, v_k_1071_);
lean_dec(v_inst_1068_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(lean_object* v___x_1073_, uint8_t v_useSplitter_1074_, lean_object* v_inst_1075_, lean_object* v_____do__lift_1076_){
_start:
{
uint8_t v___x_1077_; uint8_t v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1077_ = 0;
v___x_1078_ = 1;
v___x_1079_ = lean_box(v___x_1077_);
v___x_1080_ = lean_box(v_useSplitter_1074_);
v___x_1081_ = lean_box(v___x_1077_);
v___x_1082_ = lean_box(v_useSplitter_1074_);
v___x_1083_ = lean_box(v___x_1078_);
v___x_1084_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1084_, 0, v___x_1073_);
lean_closure_set(v___x_1084_, 1, v_____do__lift_1076_);
lean_closure_set(v___x_1084_, 2, v___x_1079_);
lean_closure_set(v___x_1084_, 3, v___x_1080_);
lean_closure_set(v___x_1084_, 4, v___x_1081_);
lean_closure_set(v___x_1084_, 5, v___x_1082_);
lean_closure_set(v___x_1084_, 6, v___x_1083_);
v___x_1085_ = lean_apply_2(v_inst_1075_, lean_box(0), v___x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0___boxed(lean_object* v___x_1086_, lean_object* v_useSplitter_1087_, lean_object* v_inst_1088_, lean_object* v_____do__lift_1089_){
_start:
{
uint8_t v_useSplitter_boxed_1090_; lean_object* v_res_1091_; 
v_useSplitter_boxed_1090_ = lean_unbox(v_useSplitter_1087_);
v_res_1091_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0(v___x_1086_, v_useSplitter_boxed_1090_, v_inst_1088_, v_____do__lift_1089_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(uint8_t v_useSplitter_1095_, lean_object* v_inst_1096_, lean_object* v_onAlt_1097_, lean_object* v_resTy_1098_, lean_object* v_toBind_1099_, lean_object* v_h_1100_){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___f_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1101_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1102_ = lean_unsigned_to_nat(0u);
v___x_1103_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0));
v___x_1104_ = lean_unsigned_to_nat(1u);
v___x_1105_ = lean_mk_empty_array_with_capacity(v___x_1104_);
v___x_1106_ = lean_array_push(v___x_1105_, v_h_1100_);
v___x_1107_ = lean_box(v_useSplitter_1095_);
lean_inc_ref(v___x_1106_);
v___f_1108_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1108_, 0, v___x_1106_);
lean_closure_set(v___f_1108_, 1, v___x_1107_);
lean_closure_set(v___f_1108_, 2, v_inst_1096_);
v___x_1109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1103_);
lean_ctor_set(v___x_1109_, 1, v___x_1106_);
lean_ctor_set(v___x_1109_, 2, v___x_1103_);
lean_ctor_set(v___x_1109_, 3, v___x_1103_);
lean_ctor_set(v___x_1109_, 4, v___x_1103_);
v___x_1110_ = lean_apply_4(v_onAlt_1097_, v___x_1101_, v_resTy_1098_, v___x_1102_, v___x_1109_);
v___x_1111_ = lean_apply_4(v_toBind_1099_, lean_box(0), lean_box(0), v___x_1110_, v___f_1108_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___boxed(lean_object* v_useSplitter_1112_, lean_object* v_inst_1113_, lean_object* v_onAlt_1114_, lean_object* v_resTy_1115_, lean_object* v_toBind_1116_, lean_object* v_h_1117_){
_start:
{
uint8_t v_useSplitter_boxed_1118_; lean_object* v_res_1119_; 
v_useSplitter_boxed_1118_ = lean_unbox(v_useSplitter_1112_);
v_res_1119_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1(v_useSplitter_boxed_1118_, v_inst_1113_, v_onAlt_1114_, v_resTy_1115_, v_toBind_1116_, v_h_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2(lean_object* v_u_1120_, lean_object* v_resTy_1121_, lean_object* v_c_1122_, lean_object* v_h_1123_, lean_object* v_t_1124_, lean_object* v_toPure_1125_, lean_object* v_e_1126_){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1127_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_1128_ = lean_box(0);
v___x_1129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1129_, 0, v_u_1120_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = l_Lean_mkConst(v___x_1127_, v___x_1129_);
v___x_1131_ = l_Lean_mkApp5(v___x_1130_, v_resTy_1121_, v_c_1122_, v_h_1123_, v_t_1124_, v_e_1126_);
v___x_1132_ = lean_apply_2(v_toPure_1125_, lean_box(0), v___x_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3(lean_object* v_u_1136_, lean_object* v_resTy_1137_, lean_object* v_c_1138_, lean_object* v_h_1139_, lean_object* v_toPure_1140_, lean_object* v_onAlt_1141_, lean_object* v___x_1142_, lean_object* v___x_1143_, lean_object* v_toBind_1144_, lean_object* v_t_1145_){
_start:
{
lean_object* v___f_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
lean_inc_ref(v_resTy_1137_);
v___f_1146_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__2), 7, 6);
lean_closure_set(v___f_1146_, 0, v_u_1136_);
lean_closure_set(v___f_1146_, 1, v_resTy_1137_);
lean_closure_set(v___f_1146_, 2, v_c_1138_);
lean_closure_set(v___f_1146_, 3, v_h_1139_);
lean_closure_set(v___f_1146_, 4, v_t_1145_);
lean_closure_set(v___f_1146_, 5, v_toPure_1140_);
v___x_1147_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1148_ = lean_apply_4(v_onAlt_1141_, v___x_1147_, v_resTy_1137_, v___x_1142_, v___x_1143_);
v___x_1149_ = lean_apply_4(v_toBind_1144_, lean_box(0), lean_box(0), v___x_1148_, v___f_1146_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(lean_object* v___x_1150_, uint8_t v_useSplitter_1151_, lean_object* v_inst_1152_, lean_object* v_onAlt_1153_, lean_object* v_resTy_1154_, lean_object* v_toBind_1155_, lean_object* v_h_1156_){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___f_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1157_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1158_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0));
v___x_1159_ = lean_mk_empty_array_with_capacity(v___x_1150_);
v___x_1160_ = lean_array_push(v___x_1159_, v_h_1156_);
v___x_1161_ = lean_box(v_useSplitter_1151_);
lean_inc_ref(v___x_1160_);
v___f_1162_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1162_, 0, v___x_1160_);
lean_closure_set(v___f_1162_, 1, v___x_1161_);
lean_closure_set(v___f_1162_, 2, v_inst_1152_);
v___x_1163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1158_);
lean_ctor_set(v___x_1163_, 1, v___x_1160_);
lean_ctor_set(v___x_1163_, 2, v___x_1158_);
lean_ctor_set(v___x_1163_, 3, v___x_1158_);
lean_ctor_set(v___x_1163_, 4, v___x_1158_);
v___x_1164_ = lean_apply_4(v_onAlt_1153_, v___x_1157_, v_resTy_1154_, v___x_1150_, v___x_1163_);
v___x_1165_ = lean_apply_4(v_toBind_1155_, lean_box(0), lean_box(0), v___x_1164_, v___f_1162_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed(lean_object* v___x_1166_, lean_object* v_useSplitter_1167_, lean_object* v_inst_1168_, lean_object* v_onAlt_1169_, lean_object* v_resTy_1170_, lean_object* v_toBind_1171_, lean_object* v_h_1172_){
_start:
{
uint8_t v_useSplitter_boxed_1173_; lean_object* v_res_1174_; 
v_useSplitter_boxed_1173_ = lean_unbox(v_useSplitter_1167_);
v_res_1174_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5(v___x_1166_, v_useSplitter_boxed_1173_, v_inst_1168_, v_onAlt_1169_, v_resTy_1170_, v_toBind_1171_, v_h_1172_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4(lean_object* v_u_1175_, lean_object* v_resTy_1176_, lean_object* v_c_1177_, lean_object* v_h_1178_, lean_object* v_t_1179_, lean_object* v_toPure_1180_, lean_object* v_e_1181_){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1182_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_1183_ = lean_box(0);
v___x_1184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1184_, 0, v_u_1175_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
v___x_1185_ = l_Lean_mkConst(v___x_1182_, v___x_1184_);
v___x_1186_ = l_Lean_mkApp5(v___x_1185_, v_resTy_1176_, v_c_1177_, v_h_1178_, v_t_1179_, v_e_1181_);
v___x_1187_ = lean_apply_2(v_toPure_1180_, lean_box(0), v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(lean_object* v_u_1188_, lean_object* v_resTy_1189_, lean_object* v_c_1190_, lean_object* v_h_1191_, lean_object* v_toPure_1192_, lean_object* v_inst_1193_, lean_object* v_inst_1194_, lean_object* v_n_1195_, uint8_t v___x_1196_, lean_object* v___f_1197_, uint8_t v___x_1198_, lean_object* v_toBind_1199_, lean_object* v_t_1200_){
_start:
{
lean_object* v___f_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
lean_inc_ref(v_c_1190_);
v___f_1201_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1201_, 0, v_u_1188_);
lean_closure_set(v___f_1201_, 1, v_resTy_1189_);
lean_closure_set(v___f_1201_, 2, v_c_1190_);
lean_closure_set(v___f_1201_, 3, v_h_1191_);
lean_closure_set(v___f_1201_, 4, v_t_1200_);
lean_closure_set(v___f_1201_, 5, v_toPure_1192_);
v___x_1202_ = l_Lean_mkNot(v_c_1190_);
v___x_1203_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1193_, v_inst_1194_, v_n_1195_, v___x_1196_, v___x_1202_, v___f_1197_, v___x_1198_);
v___x_1204_ = lean_apply_4(v_toBind_1199_, lean_box(0), lean_box(0), v___x_1203_, v___f_1201_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed(lean_object* v_u_1205_, lean_object* v_resTy_1206_, lean_object* v_c_1207_, lean_object* v_h_1208_, lean_object* v_toPure_1209_, lean_object* v_inst_1210_, lean_object* v_inst_1211_, lean_object* v_n_1212_, lean_object* v___x_1213_, lean_object* v___f_1214_, lean_object* v___x_1215_, lean_object* v_toBind_1216_, lean_object* v_t_1217_){
_start:
{
uint8_t v___x_1945__boxed_1218_; uint8_t v___x_1947__boxed_1219_; lean_object* v_res_1220_; 
v___x_1945__boxed_1218_ = lean_unbox(v___x_1213_);
v___x_1947__boxed_1219_ = lean_unbox(v___x_1215_);
v_res_1220_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6(v_u_1205_, v_resTy_1206_, v_c_1207_, v_h_1208_, v_toPure_1209_, v_inst_1210_, v_inst_1211_, v_n_1212_, v___x_1945__boxed_1218_, v___f_1214_, v___x_1947__boxed_1219_, v_toBind_1216_, v_t_1217_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7(lean_object* v_u_1221_, lean_object* v_resTy_1222_, lean_object* v_c_1223_, lean_object* v_h_1224_, lean_object* v_toPure_1225_, lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v___f_1228_, lean_object* v_toBind_1229_, lean_object* v___f_1230_, lean_object* v_n_1231_){
_start:
{
uint8_t v___x_1232_; uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___f_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1232_ = 0;
v___x_1233_ = 0;
v___x_1234_ = lean_box(v___x_1232_);
v___x_1235_ = lean_box(v___x_1233_);
lean_inc(v_toBind_1229_);
lean_inc(v_n_1231_);
lean_inc_ref(v_inst_1227_);
lean_inc_ref(v_inst_1226_);
lean_inc_ref(v_c_1223_);
v___f_1236_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__6___boxed), 13, 12);
lean_closure_set(v___f_1236_, 0, v_u_1221_);
lean_closure_set(v___f_1236_, 1, v_resTy_1222_);
lean_closure_set(v___f_1236_, 2, v_c_1223_);
lean_closure_set(v___f_1236_, 3, v_h_1224_);
lean_closure_set(v___f_1236_, 4, v_toPure_1225_);
lean_closure_set(v___f_1236_, 5, v_inst_1226_);
lean_closure_set(v___f_1236_, 6, v_inst_1227_);
lean_closure_set(v___f_1236_, 7, v_n_1231_);
lean_closure_set(v___f_1236_, 8, v___x_1234_);
lean_closure_set(v___f_1236_, 9, v___f_1228_);
lean_closure_set(v___f_1236_, 10, v___x_1235_);
lean_closure_set(v___f_1236_, 11, v_toBind_1229_);
v___x_1237_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1226_, v_inst_1227_, v_n_1231_, v___x_1232_, v_c_1223_, v___f_1230_, v___x_1233_);
v___x_1238_ = lean_apply_4(v_toBind_1229_, lean_box(0), lean_box(0), v___x_1237_, v___f_1236_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(lean_object* v___x_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Lean_Core_mkFreshUserName(v___x_1239_, v___y_1242_, v___y_1243_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8___boxed(lean_object* v___x_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__8(v___x_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(lean_object* v_e_1260_, uint8_t v_useSplitter_1261_, lean_object* v_resTy_1262_, lean_object* v_toPure_1263_, lean_object* v_onAlt_1264_, lean_object* v_toBind_1265_, lean_object* v_inst_1266_, lean_object* v_inst_1267_, lean_object* v_inst_1268_, lean_object* v___f_1269_, lean_object* v_u_1270_){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v_c_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v_h_1279_; 
v___x_1271_ = lean_unsigned_to_nat(1u);
v___x_1272_ = l_Lean_Expr_getAppNumArgs(v_e_1260_);
v___x_1273_ = lean_nat_sub(v___x_1272_, v___x_1271_);
v___x_1274_ = lean_nat_sub(v___x_1273_, v___x_1271_);
lean_dec(v___x_1273_);
v_c_1275_ = l_Lean_Expr_getRevArg_x21(v_e_1260_, v___x_1274_);
v___x_1276_ = lean_unsigned_to_nat(2u);
v___x_1277_ = lean_nat_sub(v___x_1272_, v___x_1276_);
lean_dec(v___x_1272_);
v___x_1278_ = lean_nat_sub(v___x_1277_, v___x_1271_);
lean_dec(v___x_1277_);
v_h_1279_ = l_Lean_Expr_getRevArg_x21(v_e_1260_, v___x_1278_);
if (v_useSplitter_1261_ == 0)
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___f_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
lean_dec(v___f_1269_);
lean_dec_ref(v_inst_1268_);
lean_dec_ref(v_inst_1267_);
lean_dec(v_inst_1266_);
v___x_1280_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1265_);
lean_inc(v_onAlt_1264_);
lean_inc_ref(v_resTy_1262_);
v___f_1283_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3), 10, 9);
lean_closure_set(v___f_1283_, 0, v_u_1270_);
lean_closure_set(v___f_1283_, 1, v_resTy_1262_);
lean_closure_set(v___f_1283_, 2, v_c_1275_);
lean_closure_set(v___f_1283_, 3, v_h_1279_);
lean_closure_set(v___f_1283_, 4, v_toPure_1263_);
lean_closure_set(v___f_1283_, 5, v_onAlt_1264_);
lean_closure_set(v___f_1283_, 6, v___x_1271_);
lean_closure_set(v___f_1283_, 7, v___x_1282_);
lean_closure_set(v___f_1283_, 8, v_toBind_1265_);
v___x_1284_ = lean_apply_4(v_onAlt_1264_, v___x_1280_, v_resTy_1262_, v___x_1281_, v___x_1282_);
v___x_1285_ = lean_apply_4(v_toBind_1265_, lean_box(0), lean_box(0), v___x_1284_, v___f_1283_);
return v___x_1285_;
}
else
{
lean_object* v___x_1286_; lean_object* v___f_1287_; lean_object* v___f_1288_; lean_object* v___f_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1286_ = lean_box(v_useSplitter_1261_);
lean_inc_n(v_toBind_1265_, 2);
lean_inc_ref(v_resTy_1262_);
lean_inc(v_inst_1266_);
v___f_1287_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1287_, 0, v___x_1271_);
lean_closure_set(v___f_1287_, 1, v___x_1286_);
lean_closure_set(v___f_1287_, 2, v_inst_1266_);
lean_closure_set(v___f_1287_, 3, v_onAlt_1264_);
lean_closure_set(v___f_1287_, 4, v_resTy_1262_);
lean_closure_set(v___f_1287_, 5, v_toBind_1265_);
v___f_1288_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1288_, 0, v_u_1270_);
lean_closure_set(v___f_1288_, 1, v_resTy_1262_);
lean_closure_set(v___f_1288_, 2, v_c_1275_);
lean_closure_set(v___f_1288_, 3, v_h_1279_);
lean_closure_set(v___f_1288_, 4, v_toPure_1263_);
lean_closure_set(v___f_1288_, 5, v_inst_1267_);
lean_closure_set(v___f_1288_, 6, v_inst_1268_);
lean_closure_set(v___f_1288_, 7, v___f_1287_);
lean_closure_set(v___f_1288_, 8, v_toBind_1265_);
lean_closure_set(v___f_1288_, 9, v___f_1269_);
v___f_1289_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1290_ = lean_apply_2(v_inst_1266_, lean_box(0), v___f_1289_);
v___x_1291_ = lean_apply_4(v_toBind_1265_, lean_box(0), lean_box(0), v___x_1290_, v___f_1288_);
return v___x_1291_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed(lean_object* v_e_1292_, lean_object* v_useSplitter_1293_, lean_object* v_resTy_1294_, lean_object* v_toPure_1295_, lean_object* v_onAlt_1296_, lean_object* v_toBind_1297_, lean_object* v_inst_1298_, lean_object* v_inst_1299_, lean_object* v_inst_1300_, lean_object* v___f_1301_, lean_object* v_u_1302_){
_start:
{
uint8_t v_useSplitter_boxed_1303_; lean_object* v_res_1304_; 
v_useSplitter_boxed_1303_ = lean_unbox(v_useSplitter_1293_);
v_res_1304_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9(v_e_1292_, v_useSplitter_boxed_1303_, v_resTy_1294_, v_toPure_1295_, v_onAlt_1296_, v_toBind_1297_, v_inst_1298_, v_inst_1299_, v_inst_1300_, v___f_1301_, v_u_1302_);
lean_dec_ref(v_e_1292_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10(lean_object* v___x_1305_, lean_object* v_inst_1306_, lean_object* v_____do__lift_1307_){
_start:
{
uint8_t v___x_1308_; uint8_t v___x_1309_; uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1308_ = 0;
v___x_1309_ = 1;
v___x_1310_ = 1;
v___x_1311_ = lean_box(v___x_1308_);
v___x_1312_ = lean_box(v___x_1309_);
v___x_1313_ = lean_box(v___x_1308_);
v___x_1314_ = lean_box(v___x_1309_);
v___x_1315_ = lean_box(v___x_1310_);
v___x_1316_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1316_, 0, v___x_1305_);
lean_closure_set(v___x_1316_, 1, v_____do__lift_1307_);
lean_closure_set(v___x_1316_, 2, v___x_1311_);
lean_closure_set(v___x_1316_, 3, v___x_1312_);
lean_closure_set(v___x_1316_, 4, v___x_1313_);
lean_closure_set(v___x_1316_, 5, v___x_1314_);
lean_closure_set(v___x_1316_, 6, v___x_1315_);
v___x_1317_ = lean_apply_2(v_inst_1306_, lean_box(0), v___x_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11(lean_object* v_inst_1318_, lean_object* v_onAlt_1319_, lean_object* v_resTy_1320_, lean_object* v_toBind_1321_, lean_object* v_h_1322_){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___f_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1323_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1324_ = lean_unsigned_to_nat(0u);
v___x_1325_ = lean_unsigned_to_nat(1u);
v___x_1326_ = lean_mk_empty_array_with_capacity(v___x_1325_);
v___x_1327_ = lean_array_push(v___x_1326_, v_h_1322_);
lean_inc_ref_n(v___x_1327_, 2);
v___f_1328_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1328_, 0, v___x_1327_);
lean_closure_set(v___f_1328_, 1, v_inst_1318_);
v___x_1329_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0));
v___x_1330_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1327_);
lean_ctor_set(v___x_1330_, 1, v___x_1327_);
lean_ctor_set(v___x_1330_, 2, v___x_1329_);
lean_ctor_set(v___x_1330_, 3, v___x_1329_);
lean_ctor_set(v___x_1330_, 4, v___x_1329_);
v___x_1331_ = lean_apply_4(v_onAlt_1319_, v___x_1323_, v_resTy_1320_, v___x_1324_, v___x_1330_);
v___x_1332_ = lean_apply_4(v_toBind_1321_, lean_box(0), lean_box(0), v___x_1331_, v___f_1328_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13(lean_object* v___x_1333_, lean_object* v_inst_1334_, lean_object* v_onAlt_1335_, lean_object* v_resTy_1336_, lean_object* v_toBind_1337_, lean_object* v_h_1338_){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___f_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1339_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1340_ = lean_mk_empty_array_with_capacity(v___x_1333_);
v___x_1341_ = lean_array_push(v___x_1340_, v_h_1338_);
lean_inc_ref_n(v___x_1341_, 2);
v___f_1342_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__10), 3, 2);
lean_closure_set(v___f_1342_, 0, v___x_1341_);
lean_closure_set(v___f_1342_, 1, v_inst_1334_);
v___x_1343_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__30___closed__0));
v___x_1344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1341_);
lean_ctor_set(v___x_1344_, 1, v___x_1341_);
lean_ctor_set(v___x_1344_, 2, v___x_1343_);
lean_ctor_set(v___x_1344_, 3, v___x_1343_);
lean_ctor_set(v___x_1344_, 4, v___x_1343_);
v___x_1345_ = lean_apply_4(v_onAlt_1335_, v___x_1339_, v_resTy_1336_, v___x_1333_, v___x_1344_);
v___x_1346_ = lean_apply_4(v_toBind_1337_, lean_box(0), lean_box(0), v___x_1345_, v___f_1342_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(lean_object* v_inst_1347_, lean_object* v_onAlt_1348_, lean_object* v_resTy_1349_, lean_object* v_toBind_1350_, lean_object* v_e_1351_, lean_object* v_toPure_1352_, lean_object* v_inst_1353_, lean_object* v_inst_1354_, lean_object* v___f_1355_, lean_object* v_u_1356_){
_start:
{
lean_object* v___x_1357_; lean_object* v___f_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v_c_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v_h_1366_; lean_object* v___f_1367_; lean_object* v___f_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1357_ = lean_unsigned_to_nat(1u);
lean_inc_n(v_toBind_1350_, 2);
lean_inc_ref(v_resTy_1349_);
lean_inc(v_inst_1347_);
v___f_1358_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__13), 6, 5);
lean_closure_set(v___f_1358_, 0, v___x_1357_);
lean_closure_set(v___f_1358_, 1, v_inst_1347_);
lean_closure_set(v___f_1358_, 2, v_onAlt_1348_);
lean_closure_set(v___f_1358_, 3, v_resTy_1349_);
lean_closure_set(v___f_1358_, 4, v_toBind_1350_);
v___x_1359_ = l_Lean_Expr_getAppNumArgs(v_e_1351_);
v___x_1360_ = lean_nat_sub(v___x_1359_, v___x_1357_);
v___x_1361_ = lean_nat_sub(v___x_1360_, v___x_1357_);
lean_dec(v___x_1360_);
v_c_1362_ = l_Lean_Expr_getRevArg_x21(v_e_1351_, v___x_1361_);
v___x_1363_ = lean_unsigned_to_nat(2u);
v___x_1364_ = lean_nat_sub(v___x_1359_, v___x_1363_);
lean_dec(v___x_1359_);
v___x_1365_ = lean_nat_sub(v___x_1364_, v___x_1357_);
lean_dec(v___x_1364_);
v_h_1366_ = l_Lean_Expr_getRevArg_x21(v_e_1351_, v___x_1365_);
v___f_1367_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__7), 11, 10);
lean_closure_set(v___f_1367_, 0, v_u_1356_);
lean_closure_set(v___f_1367_, 1, v_resTy_1349_);
lean_closure_set(v___f_1367_, 2, v_c_1362_);
lean_closure_set(v___f_1367_, 3, v_h_1366_);
lean_closure_set(v___f_1367_, 4, v_toPure_1352_);
lean_closure_set(v___f_1367_, 5, v_inst_1353_);
lean_closure_set(v___f_1367_, 6, v_inst_1354_);
lean_closure_set(v___f_1367_, 7, v___f_1358_);
lean_closure_set(v___f_1367_, 8, v_toBind_1350_);
lean_closure_set(v___f_1367_, 9, v___f_1355_);
v___f_1368_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1369_ = lean_apply_2(v_inst_1347_, lean_box(0), v___f_1368_);
v___x_1370_ = lean_apply_4(v_toBind_1350_, lean_box(0), lean_box(0), v___x_1369_, v___f_1367_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed(lean_object* v_inst_1371_, lean_object* v_onAlt_1372_, lean_object* v_resTy_1373_, lean_object* v_toBind_1374_, lean_object* v_e_1375_, lean_object* v_toPure_1376_, lean_object* v_inst_1377_, lean_object* v_inst_1378_, lean_object* v___f_1379_, lean_object* v_u_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17(v_inst_1371_, v_onAlt_1372_, v_resTy_1373_, v_toBind_1374_, v_e_1375_, v_toPure_1376_, v_inst_1377_, v_inst_1378_, v___f_1379_, v_u_1380_);
lean_dec_ref(v_e_1375_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15(lean_object* v_u_1382_, lean_object* v_resTy_1383_, lean_object* v_c_1384_, lean_object* v_t_1385_, lean_object* v_toPure_1386_, lean_object* v_e_1387_){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1388_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_1389_ = lean_box(0);
v___x_1390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1390_, 0, v_u_1382_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
v___x_1391_ = l_Lean_mkConst(v___x_1388_, v___x_1390_);
v___x_1392_ = l_Lean_mkApp4(v___x_1391_, v_resTy_1383_, v_c_1384_, v_t_1385_, v_e_1387_);
v___x_1393_ = lean_apply_2(v_toPure_1386_, lean_box(0), v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12(lean_object* v_u_1394_, lean_object* v_resTy_1395_, lean_object* v_c_1396_, lean_object* v_toPure_1397_, lean_object* v_onAlt_1398_, lean_object* v___x_1399_, lean_object* v___x_1400_, lean_object* v_toBind_1401_, lean_object* v_t_1402_){
_start:
{
lean_object* v___f_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_inc_ref(v_resTy_1395_);
v___f_1403_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__15), 6, 5);
lean_closure_set(v___f_1403_, 0, v_u_1394_);
lean_closure_set(v___f_1403_, 1, v_resTy_1395_);
lean_closure_set(v___f_1403_, 2, v_c_1396_);
lean_closure_set(v___f_1403_, 3, v_t_1402_);
lean_closure_set(v___f_1403_, 4, v_toPure_1397_);
v___x_1404_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__3___closed__1));
v___x_1405_ = lean_apply_4(v_onAlt_1398_, v___x_1404_, v_resTy_1395_, v___x_1399_, v___x_1400_);
v___x_1406_ = lean_apply_4(v_toBind_1401_, lean_box(0), lean_box(0), v___x_1405_, v___f_1403_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18(lean_object* v_u_1407_, lean_object* v_resTy_1408_, lean_object* v_fst_1409_, lean_object* v_snd_1410_, lean_object* v_t_1411_, lean_object* v_toPure_1412_, lean_object* v_e_1413_){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1414_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_1415_ = lean_box(0);
v___x_1416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1416_, 0, v_u_1407_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = l_Lean_mkConst(v___x_1414_, v___x_1416_);
v___x_1418_ = l_Lean_mkApp5(v___x_1417_, v_resTy_1408_, v_fst_1409_, v_snd_1410_, v_t_1411_, v_e_1413_);
v___x_1419_ = lean_apply_2(v_toPure_1412_, lean_box(0), v___x_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(lean_object* v_u_1420_, lean_object* v_resTy_1421_, lean_object* v_fst_1422_, lean_object* v_snd_1423_, lean_object* v_toPure_1424_, lean_object* v_inst_1425_, lean_object* v_inst_1426_, lean_object* v_n_1427_, uint8_t v___x_1428_, lean_object* v___f_1429_, uint8_t v___x_1430_, lean_object* v_toBind_1431_, lean_object* v_t_1432_){
_start:
{
lean_object* v___f_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
lean_inc_ref(v_fst_1422_);
v___f_1433_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__18), 7, 6);
lean_closure_set(v___f_1433_, 0, v_u_1420_);
lean_closure_set(v___f_1433_, 1, v_resTy_1421_);
lean_closure_set(v___f_1433_, 2, v_fst_1422_);
lean_closure_set(v___f_1433_, 3, v_snd_1423_);
lean_closure_set(v___f_1433_, 4, v_t_1432_);
lean_closure_set(v___f_1433_, 5, v_toPure_1424_);
v___x_1434_ = l_Lean_mkNot(v_fst_1422_);
v___x_1435_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1425_, v_inst_1426_, v_n_1427_, v___x_1428_, v___x_1434_, v___f_1429_, v___x_1430_);
v___x_1436_ = lean_apply_4(v_toBind_1431_, lean_box(0), lean_box(0), v___x_1435_, v___f_1433_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14___boxed(lean_object* v_u_1437_, lean_object* v_resTy_1438_, lean_object* v_fst_1439_, lean_object* v_snd_1440_, lean_object* v_toPure_1441_, lean_object* v_inst_1442_, lean_object* v_inst_1443_, lean_object* v_n_1444_, lean_object* v___x_1445_, lean_object* v___f_1446_, lean_object* v___x_1447_, lean_object* v_toBind_1448_, lean_object* v_t_1449_){
_start:
{
uint8_t v___x_2278__boxed_1450_; uint8_t v___x_2280__boxed_1451_; lean_object* v_res_1452_; 
v___x_2278__boxed_1450_ = lean_unbox(v___x_1445_);
v___x_2280__boxed_1451_ = lean_unbox(v___x_1447_);
v_res_1452_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14(v_u_1437_, v_resTy_1438_, v_fst_1439_, v_snd_1440_, v_toPure_1441_, v_inst_1442_, v_inst_1443_, v_n_1444_, v___x_2278__boxed_1450_, v___f_1446_, v___x_2280__boxed_1451_, v_toBind_1448_, v_t_1449_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16(lean_object* v_u_1453_, lean_object* v_resTy_1454_, lean_object* v_fst_1455_, lean_object* v_snd_1456_, lean_object* v_toPure_1457_, lean_object* v_inst_1458_, lean_object* v_inst_1459_, lean_object* v___f_1460_, lean_object* v_toBind_1461_, lean_object* v___f_1462_, lean_object* v_n_1463_){
_start:
{
uint8_t v___x_1464_; uint8_t v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___f_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1464_ = 0;
v___x_1465_ = 0;
v___x_1466_ = lean_box(v___x_1464_);
v___x_1467_ = lean_box(v___x_1465_);
lean_inc(v_toBind_1461_);
lean_inc(v_n_1463_);
lean_inc_ref(v_inst_1459_);
lean_inc_ref(v_inst_1458_);
lean_inc_ref(v_fst_1455_);
v___f_1468_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__14___boxed), 13, 12);
lean_closure_set(v___f_1468_, 0, v_u_1453_);
lean_closure_set(v___f_1468_, 1, v_resTy_1454_);
lean_closure_set(v___f_1468_, 2, v_fst_1455_);
lean_closure_set(v___f_1468_, 3, v_snd_1456_);
lean_closure_set(v___f_1468_, 4, v_toPure_1457_);
lean_closure_set(v___f_1468_, 5, v_inst_1458_);
lean_closure_set(v___f_1468_, 6, v_inst_1459_);
lean_closure_set(v___f_1468_, 7, v_n_1463_);
lean_closure_set(v___f_1468_, 8, v___x_1466_);
lean_closure_set(v___f_1468_, 9, v___f_1460_);
lean_closure_set(v___f_1468_, 10, v___x_1467_);
lean_closure_set(v___f_1468_, 11, v_toBind_1461_);
v___x_1469_ = l_Lean_Meta_withLocalDecl___redArg(v_inst_1458_, v_inst_1459_, v_n_1463_, v___x_1464_, v_fst_1455_, v___f_1462_, v___x_1465_);
v___x_1470_ = lean_apply_4(v_toBind_1461_, lean_box(0), lean_box(0), v___x_1469_, v___f_1468_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20(lean_object* v_u_1471_, lean_object* v_resTy_1472_, lean_object* v_toPure_1473_, lean_object* v_inst_1474_, lean_object* v_inst_1475_, lean_object* v___f_1476_, lean_object* v_toBind_1477_, lean_object* v___f_1478_, lean_object* v_inst_1479_, lean_object* v_____x_1480_){
_start:
{
lean_object* v_fst_1481_; lean_object* v_snd_1482_; lean_object* v___f_1483_; lean_object* v___f_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v_fst_1481_ = lean_ctor_get(v_____x_1480_, 0);
lean_inc(v_fst_1481_);
v_snd_1482_ = lean_ctor_get(v_____x_1480_, 1);
lean_inc(v_snd_1482_);
lean_dec_ref(v_____x_1480_);
lean_inc(v_toBind_1477_);
v___f_1483_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__16), 11, 10);
lean_closure_set(v___f_1483_, 0, v_u_1471_);
lean_closure_set(v___f_1483_, 1, v_resTy_1472_);
lean_closure_set(v___f_1483_, 2, v_fst_1481_);
lean_closure_set(v___f_1483_, 3, v_snd_1482_);
lean_closure_set(v___f_1483_, 4, v_toPure_1473_);
lean_closure_set(v___f_1483_, 5, v_inst_1474_);
lean_closure_set(v___f_1483_, 6, v_inst_1475_);
lean_closure_set(v___f_1483_, 7, v___f_1476_);
lean_closure_set(v___f_1483_, 8, v_toBind_1477_);
lean_closure_set(v___f_1483_, 9, v___f_1478_);
v___f_1484_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__3));
v___x_1485_ = lean_apply_2(v_inst_1479_, lean_box(0), v___f_1484_);
v___x_1486_ = lean_apply_4(v_toBind_1477_, lean_box(0), lean_box(0), v___x_1485_, v___f_1483_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(lean_object* v_e_1487_, uint8_t v_useSplitter_1488_, lean_object* v_resTy_1489_, lean_object* v_toPure_1490_, lean_object* v_onAlt_1491_, lean_object* v_toBind_1492_, lean_object* v_inst_1493_, lean_object* v_inst_1494_, lean_object* v_inst_1495_, lean_object* v___f_1496_, lean_object* v_u_1497_){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v_c_1502_; 
v___x_1498_ = lean_unsigned_to_nat(1u);
v___x_1499_ = l_Lean_Expr_getAppNumArgs(v_e_1487_);
v___x_1500_ = lean_nat_sub(v___x_1499_, v___x_1498_);
lean_dec(v___x_1499_);
v___x_1501_ = lean_nat_sub(v___x_1500_, v___x_1498_);
lean_dec(v___x_1500_);
v_c_1502_ = l_Lean_Expr_getRevArg_x21(v_e_1487_, v___x_1501_);
if (v_useSplitter_1488_ == 0)
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___f_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_dec(v___f_1496_);
lean_dec_ref(v_inst_1495_);
lean_dec_ref(v_inst_1494_);
lean_dec(v_inst_1493_);
v___x_1503_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___closed__1));
v___x_1504_ = lean_unsigned_to_nat(0u);
v___x_1505_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__0));
lean_inc(v_toBind_1492_);
lean_inc(v_onAlt_1491_);
lean_inc_ref(v_resTy_1489_);
v___f_1506_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__12), 9, 8);
lean_closure_set(v___f_1506_, 0, v_u_1497_);
lean_closure_set(v___f_1506_, 1, v_resTy_1489_);
lean_closure_set(v___f_1506_, 2, v_c_1502_);
lean_closure_set(v___f_1506_, 3, v_toPure_1490_);
lean_closure_set(v___f_1506_, 4, v_onAlt_1491_);
lean_closure_set(v___f_1506_, 5, v___x_1498_);
lean_closure_set(v___f_1506_, 6, v___x_1505_);
lean_closure_set(v___f_1506_, 7, v_toBind_1492_);
v___x_1507_ = lean_apply_4(v_onAlt_1491_, v___x_1503_, v_resTy_1489_, v___x_1504_, v___x_1505_);
v___x_1508_ = lean_apply_4(v_toBind_1492_, lean_box(0), lean_box(0), v___x_1507_, v___f_1506_);
return v___x_1508_;
}
else
{
lean_object* v___x_1509_; lean_object* v___f_1510_; lean_object* v___f_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1509_ = lean_box(v_useSplitter_1488_);
lean_inc_n(v_toBind_1492_, 2);
lean_inc_ref(v_resTy_1489_);
lean_inc_n(v_inst_1493_, 2);
v___f_1510_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1510_, 0, v___x_1498_);
lean_closure_set(v___f_1510_, 1, v___x_1509_);
lean_closure_set(v___f_1510_, 2, v_inst_1493_);
lean_closure_set(v___f_1510_, 3, v_onAlt_1491_);
lean_closure_set(v___f_1510_, 4, v_resTy_1489_);
lean_closure_set(v___f_1510_, 5, v_toBind_1492_);
v___f_1511_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__20), 10, 9);
lean_closure_set(v___f_1511_, 0, v_u_1497_);
lean_closure_set(v___f_1511_, 1, v_resTy_1489_);
lean_closure_set(v___f_1511_, 2, v_toPure_1490_);
lean_closure_set(v___f_1511_, 3, v_inst_1494_);
lean_closure_set(v___f_1511_, 4, v_inst_1495_);
lean_closure_set(v___f_1511_, 5, v___f_1510_);
lean_closure_set(v___f_1511_, 6, v_toBind_1492_);
lean_closure_set(v___f_1511_, 7, v___f_1496_);
lean_closure_set(v___f_1511_, 8, v_inst_1493_);
v___x_1512_ = lean_alloc_closure((void*)(l_Lean_Meta_getGuardDecision___boxed), 6, 1);
lean_closure_set(v___x_1512_, 0, v_c_1502_);
v___x_1513_ = lean_apply_2(v_inst_1493_, lean_box(0), v___x_1512_);
v___x_1514_ = lean_apply_4(v_toBind_1492_, lean_box(0), lean_box(0), v___x_1513_, v___f_1511_);
return v___x_1514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___boxed(lean_object* v_e_1515_, lean_object* v_useSplitter_1516_, lean_object* v_resTy_1517_, lean_object* v_toPure_1518_, lean_object* v_onAlt_1519_, lean_object* v_toBind_1520_, lean_object* v_inst_1521_, lean_object* v_inst_1522_, lean_object* v_inst_1523_, lean_object* v___f_1524_, lean_object* v_u_1525_){
_start:
{
uint8_t v_useSplitter_boxed_1526_; lean_object* v_res_1527_; 
v_useSplitter_boxed_1526_ = lean_unbox(v_useSplitter_1516_);
v_res_1527_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19(v_e_1515_, v_useSplitter_boxed_1526_, v_resTy_1517_, v_toPure_1518_, v_onAlt_1519_, v_toBind_1520_, v_inst_1521_, v_inst_1522_, v_inst_1523_, v___f_1524_, v_u_1525_);
lean_dec_ref(v_e_1515_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(lean_object* v_onAlt_1528_, lean_object* v_idx_1529_, lean_object* v_expAltType_1530_, lean_object* v_altFVars_1531_, lean_object* v___alt_1532_){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1533_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___closed__2));
v___x_1534_ = lean_unsigned_to_nat(1u);
v___x_1535_ = lean_nat_add(v_idx_1529_, v___x_1534_);
v___x_1536_ = lean_name_append_index_after(v___x_1533_, v___x_1535_);
v___x_1537_ = lean_apply_4(v_onAlt_1528_, v___x_1536_, v_expAltType_1530_, v_idx_1529_, v_altFVars_1531_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed(lean_object* v_onAlt_1538_, lean_object* v_idx_1539_, lean_object* v_expAltType_1540_, lean_object* v_altFVars_1541_, lean_object* v___alt_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21(v_onAlt_1538_, v_idx_1539_, v_expAltType_1540_, v_altFVars_1541_, v___alt_1542_);
lean_dec_ref(v___alt_1542_);
return v_res_1543_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(lean_object* v_toMatcherInfo_1544_, lean_object* v_i_1545_, lean_object* v_a_1546_, lean_object* v_x_1547_){
_start:
{
uint8_t v___x_1548_; 
v___x_1548_ = l_Lean_Expr_isFVar(v_a_1546_);
if (v___x_1548_ == 0)
{
return v___x_1548_;
}
else
{
lean_object* v_discrInfos_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; 
v_discrInfos_1549_ = lean_ctor_get(v_toMatcherInfo_1544_, 4);
v___x_1550_ = lean_array_get_size(v_discrInfos_1549_);
v___x_1551_ = lean_nat_dec_lt(v_i_1545_, v___x_1550_);
if (v___x_1551_ == 0)
{
return v___x_1548_;
}
else
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_array_fget_borrowed(v_discrInfos_1549_, v_i_1545_);
if (lean_obj_tag(v___x_1552_) == 0)
{
return v___x_1548_;
}
else
{
uint8_t v___x_1553_; 
v___x_1553_ = 0;
return v___x_1553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed(lean_object* v_toMatcherInfo_1554_, lean_object* v_i_1555_, lean_object* v_a_1556_, lean_object* v_x_1557_){
_start:
{
uint8_t v_res_1558_; lean_object* v_r_1559_; 
v_res_1558_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22(v_toMatcherInfo_1554_, v_i_1555_, v_a_1556_, v_x_1557_);
lean_dec_ref(v_a_1556_);
lean_dec(v_i_1555_);
lean_dec_ref(v_toMatcherInfo_1554_);
v_r_1559_ = lean_box(v_res_1558_);
return v_r_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(lean_object* v_mask_1560_, lean_object* v_absMotiveBody_1561_, lean_object* v_toPure_1562_, lean_object* v_xs_1563_, lean_object* v___body_1564_){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1565_ = l_Lean_Array_mask___redArg(v_mask_1560_, v_xs_1563_);
v___x_1566_ = lean_expr_instantiate_rev(v_absMotiveBody_1561_, v___x_1565_);
lean_dec(v___x_1565_);
v___x_1567_ = lean_apply_2(v_toPure_1562_, lean_box(0), v___x_1566_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed(lean_object* v_mask_1568_, lean_object* v_absMotiveBody_1569_, lean_object* v_toPure_1570_, lean_object* v_xs_1571_, lean_object* v___body_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23(v_mask_1568_, v_absMotiveBody_1569_, v_toPure_1570_, v_xs_1571_, v___body_1572_);
lean_dec_ref(v___body_1572_);
lean_dec_ref(v_absMotiveBody_1569_);
lean_dec_ref(v_mask_1568_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(lean_object* v_toFunctor_1574_, lean_object* v_mask_1575_, lean_object* v_toPure_1576_, lean_object* v_inst_1577_, lean_object* v_inst_1578_, lean_object* v_inst_1579_, lean_object* v_inst_1580_, lean_object* v_inst_1581_, lean_object* v_matcherApp_1582_, uint8_t v_useSplitter_1583_, lean_object* v___f_1584_, lean_object* v___f_1585_, lean_object* v_absMotiveBody_1586_){
_start:
{
lean_object* v_map_1587_; lean_object* v___f_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v_map_1587_ = lean_ctor_get(v_toFunctor_1574_, 0);
lean_inc(v_map_1587_);
lean_dec_ref(v_toFunctor_1574_);
lean_inc(v_toPure_1576_);
v___f_1588_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__23___boxed), 5, 3);
lean_closure_set(v___f_1588_, 0, v_mask_1575_);
lean_closure_set(v___f_1588_, 1, v_absMotiveBody_1586_);
lean_closure_set(v___f_1588_, 2, v_toPure_1576_);
v___x_1589_ = lean_apply_1(v_toPure_1576_, lean_box(0));
lean_inc(v___x_1589_);
v___x_1590_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_1577_, v_inst_1578_, v_inst_1579_, v_inst_1580_, v_inst_1581_, v_matcherApp_1582_, v_useSplitter_1583_, v_useSplitter_1583_, v___x_1589_, v___f_1588_, v___f_1584_, v___x_1589_);
v___x_1591_ = lean_apply_4(v_map_1587_, lean_box(0), lean_box(0), v___f_1585_, v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed(lean_object* v_toFunctor_1592_, lean_object* v_mask_1593_, lean_object* v_toPure_1594_, lean_object* v_inst_1595_, lean_object* v_inst_1596_, lean_object* v_inst_1597_, lean_object* v_inst_1598_, lean_object* v_inst_1599_, lean_object* v_matcherApp_1600_, lean_object* v_useSplitter_1601_, lean_object* v___f_1602_, lean_object* v___f_1603_, lean_object* v_absMotiveBody_1604_){
_start:
{
uint8_t v_useSplitter_boxed_1605_; lean_object* v_res_1606_; 
v_useSplitter_boxed_1605_ = lean_unbox(v_useSplitter_1601_);
v_res_1606_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24(v_toFunctor_1592_, v_mask_1593_, v_toPure_1594_, v_inst_1595_, v_inst_1596_, v_inst_1597_, v_inst_1598_, v_inst_1599_, v_matcherApp_1600_, v_useSplitter_boxed_1605_, v___f_1602_, v___f_1603_, v_absMotiveBody_1604_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(lean_object* v_inst_1608_, lean_object* v_inst_1609_, lean_object* v_inst_1610_, lean_object* v_inst_1611_, lean_object* v_inst_1612_, lean_object* v_info_1613_, lean_object* v_resTy_1614_, lean_object* v_onAlt_1615_, uint8_t v_useSplitter_1616_){
_start:
{
switch(lean_obj_tag(v_info_1613_))
{
case 0:
{
lean_object* v_toApplicative_1617_; lean_object* v_toBind_1618_; lean_object* v_toPure_1619_; lean_object* v_e_1620_; lean_object* v___x_1621_; lean_object* v___f_1622_; lean_object* v___x_1623_; lean_object* v___f_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v_toApplicative_1617_ = lean_ctor_get(v_inst_1610_, 0);
lean_dec_ref(v_inst_1612_);
lean_dec_ref(v_inst_1611_);
v_toBind_1618_ = lean_ctor_get(v_inst_1610_, 1);
lean_inc_n(v_toBind_1618_, 3);
v_toPure_1619_ = lean_ctor_get(v_toApplicative_1617_, 1);
lean_inc(v_toPure_1619_);
v_e_1620_ = lean_ctor_get(v_info_1613_, 0);
lean_inc_ref(v_e_1620_);
lean_dec_ref_known(v_info_1613_, 1);
v___x_1621_ = lean_box(v_useSplitter_1616_);
lean_inc_ref_n(v_resTy_1614_, 2);
lean_inc(v_onAlt_1615_);
lean_inc_n(v_inst_1608_, 2);
v___f_1622_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1622_, 0, v___x_1621_);
lean_closure_set(v___f_1622_, 1, v_inst_1608_);
lean_closure_set(v___f_1622_, 2, v_onAlt_1615_);
lean_closure_set(v___f_1622_, 3, v_resTy_1614_);
lean_closure_set(v___f_1622_, 4, v_toBind_1618_);
v___x_1623_ = lean_box(v_useSplitter_1616_);
v___f_1624_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__9___boxed), 11, 10);
lean_closure_set(v___f_1624_, 0, v_e_1620_);
lean_closure_set(v___f_1624_, 1, v___x_1623_);
lean_closure_set(v___f_1624_, 2, v_resTy_1614_);
lean_closure_set(v___f_1624_, 3, v_toPure_1619_);
lean_closure_set(v___f_1624_, 4, v_onAlt_1615_);
lean_closure_set(v___f_1624_, 5, v_toBind_1618_);
lean_closure_set(v___f_1624_, 6, v_inst_1608_);
lean_closure_set(v___f_1624_, 7, v_inst_1609_);
lean_closure_set(v___f_1624_, 8, v_inst_1610_);
lean_closure_set(v___f_1624_, 9, v___f_1622_);
v___x_1625_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1625_, 0, v_resTy_1614_);
v___x_1626_ = lean_apply_2(v_inst_1608_, lean_box(0), v___x_1625_);
v___x_1627_ = lean_apply_4(v_toBind_1618_, lean_box(0), lean_box(0), v___x_1626_, v___f_1624_);
return v___x_1627_;
}
case 1:
{
lean_object* v_toApplicative_1628_; lean_object* v_toBind_1629_; lean_object* v_toPure_1630_; lean_object* v_e_1631_; lean_object* v___f_1632_; lean_object* v___f_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v_toApplicative_1628_ = lean_ctor_get(v_inst_1610_, 0);
lean_dec_ref(v_inst_1612_);
lean_dec_ref(v_inst_1611_);
v_toBind_1629_ = lean_ctor_get(v_inst_1610_, 1);
lean_inc_n(v_toBind_1629_, 3);
v_toPure_1630_ = lean_ctor_get(v_toApplicative_1628_, 1);
lean_inc(v_toPure_1630_);
v_e_1631_ = lean_ctor_get(v_info_1613_, 0);
lean_inc_ref(v_e_1631_);
lean_dec_ref_known(v_info_1613_, 1);
lean_inc_ref_n(v_resTy_1614_, 2);
lean_inc(v_onAlt_1615_);
lean_inc_n(v_inst_1608_, 2);
v___f_1632_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__11), 5, 4);
lean_closure_set(v___f_1632_, 0, v_inst_1608_);
lean_closure_set(v___f_1632_, 1, v_onAlt_1615_);
lean_closure_set(v___f_1632_, 2, v_resTy_1614_);
lean_closure_set(v___f_1632_, 3, v_toBind_1629_);
v___f_1633_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__17___boxed), 10, 9);
lean_closure_set(v___f_1633_, 0, v_inst_1608_);
lean_closure_set(v___f_1633_, 1, v_onAlt_1615_);
lean_closure_set(v___f_1633_, 2, v_resTy_1614_);
lean_closure_set(v___f_1633_, 3, v_toBind_1629_);
lean_closure_set(v___f_1633_, 4, v_e_1631_);
lean_closure_set(v___f_1633_, 5, v_toPure_1630_);
lean_closure_set(v___f_1633_, 6, v_inst_1609_);
lean_closure_set(v___f_1633_, 7, v_inst_1610_);
lean_closure_set(v___f_1633_, 8, v___f_1632_);
v___x_1634_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1634_, 0, v_resTy_1614_);
v___x_1635_ = lean_apply_2(v_inst_1608_, lean_box(0), v___x_1634_);
v___x_1636_ = lean_apply_4(v_toBind_1629_, lean_box(0), lean_box(0), v___x_1635_, v___f_1633_);
return v___x_1636_;
}
case 2:
{
lean_object* v_toApplicative_1637_; lean_object* v_toBind_1638_; lean_object* v_toPure_1639_; lean_object* v_e_1640_; lean_object* v___x_1641_; lean_object* v___f_1642_; lean_object* v___x_1643_; lean_object* v___f_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v_toApplicative_1637_ = lean_ctor_get(v_inst_1610_, 0);
lean_dec_ref(v_inst_1612_);
lean_dec_ref(v_inst_1611_);
v_toBind_1638_ = lean_ctor_get(v_inst_1610_, 1);
lean_inc_n(v_toBind_1638_, 3);
v_toPure_1639_ = lean_ctor_get(v_toApplicative_1637_, 1);
lean_inc(v_toPure_1639_);
v_e_1640_ = lean_ctor_get(v_info_1613_, 0);
lean_inc_ref(v_e_1640_);
lean_dec_ref_known(v_info_1613_, 1);
v___x_1641_ = lean_box(v_useSplitter_1616_);
lean_inc_ref_n(v_resTy_1614_, 2);
lean_inc(v_onAlt_1615_);
lean_inc_n(v_inst_1608_, 2);
v___f_1642_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1642_, 0, v___x_1641_);
lean_closure_set(v___f_1642_, 1, v_inst_1608_);
lean_closure_set(v___f_1642_, 2, v_onAlt_1615_);
lean_closure_set(v___f_1642_, 3, v_resTy_1614_);
lean_closure_set(v___f_1642_, 4, v_toBind_1638_);
v___x_1643_ = lean_box(v_useSplitter_1616_);
v___f_1644_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__19___boxed), 11, 10);
lean_closure_set(v___f_1644_, 0, v_e_1640_);
lean_closure_set(v___f_1644_, 1, v___x_1643_);
lean_closure_set(v___f_1644_, 2, v_resTy_1614_);
lean_closure_set(v___f_1644_, 3, v_toPure_1639_);
lean_closure_set(v___f_1644_, 4, v_onAlt_1615_);
lean_closure_set(v___f_1644_, 5, v_toBind_1638_);
lean_closure_set(v___f_1644_, 6, v_inst_1608_);
lean_closure_set(v___f_1644_, 7, v_inst_1609_);
lean_closure_set(v___f_1644_, 8, v_inst_1610_);
lean_closure_set(v___f_1644_, 9, v___f_1642_);
v___x_1645_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1645_, 0, v_resTy_1614_);
v___x_1646_ = lean_apply_2(v_inst_1608_, lean_box(0), v___x_1645_);
v___x_1647_ = lean_apply_4(v_toBind_1638_, lean_box(0), lean_box(0), v___x_1646_, v___f_1644_);
return v___x_1647_;
}
default: 
{
lean_object* v_toApplicative_1648_; lean_object* v_matcherApp_1649_; lean_object* v_toBind_1650_; lean_object* v_toFunctor_1651_; lean_object* v_toPure_1652_; lean_object* v_toMatcherInfo_1653_; lean_object* v_discrs_1654_; lean_object* v___f_1655_; lean_object* v___f_1656_; lean_object* v___f_1657_; lean_object* v___x_1658_; size_t v_sz_1659_; size_t v___x_1660_; lean_object* v_mask_1661_; lean_object* v___x_1662_; lean_object* v___f_1663_; lean_object* v_maskedDiscrs_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v_toApplicative_1648_ = lean_ctor_get(v_inst_1610_, 0);
v_matcherApp_1649_ = lean_ctor_get(v_info_1613_, 0);
lean_inc_ref(v_matcherApp_1649_);
lean_dec_ref_known(v_info_1613_, 1);
v_toBind_1650_ = lean_ctor_get(v_inst_1610_, 1);
lean_inc(v_toBind_1650_);
v_toFunctor_1651_ = lean_ctor_get(v_toApplicative_1648_, 0);
lean_inc_ref(v_toFunctor_1651_);
v_toPure_1652_ = lean_ctor_get(v_toApplicative_1648_, 1);
lean_inc(v_toPure_1652_);
v_toMatcherInfo_1653_ = lean_ctor_get(v_matcherApp_1649_, 0);
v_discrs_1654_ = lean_ctor_get(v_matcherApp_1649_, 5);
lean_inc_ref_n(v_discrs_1654_, 2);
v___f_1655_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__21___boxed), 5, 1);
lean_closure_set(v___f_1655_, 0, v_onAlt_1615_);
v___f_1656_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___closed__0));
lean_inc_ref(v_toMatcherInfo_1653_);
v___f_1657_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__22___boxed), 4, 1);
lean_closure_set(v___f_1657_, 0, v_toMatcherInfo_1653_);
v___x_1658_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__32___closed__9));
v_sz_1659_ = lean_array_size(v_discrs_1654_);
v___x_1660_ = ((size_t)0ULL);
v_mask_1661_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1658_, v_discrs_1654_, v___f_1657_, v_sz_1659_, v___x_1660_, v_discrs_1654_);
v___x_1662_ = lean_box(v_useSplitter_1616_);
lean_inc(v_inst_1608_);
lean_inc(v_mask_1661_);
v___f_1663_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___lam__24___boxed), 13, 12);
lean_closure_set(v___f_1663_, 0, v_toFunctor_1651_);
lean_closure_set(v___f_1663_, 1, v_mask_1661_);
lean_closure_set(v___f_1663_, 2, v_toPure_1652_);
lean_closure_set(v___f_1663_, 3, v_inst_1608_);
lean_closure_set(v___f_1663_, 4, v_inst_1609_);
lean_closure_set(v___f_1663_, 5, v_inst_1610_);
lean_closure_set(v___f_1663_, 6, v_inst_1611_);
lean_closure_set(v___f_1663_, 7, v_inst_1612_);
lean_closure_set(v___f_1663_, 8, v_matcherApp_1649_);
lean_closure_set(v___f_1663_, 9, v___x_1662_);
lean_closure_set(v___f_1663_, 10, v___f_1655_);
lean_closure_set(v___f_1663_, 11, v___f_1656_);
v_maskedDiscrs_1664_ = l_Lean_Array_mask___redArg(v_mask_1661_, v_discrs_1654_);
lean_dec(v_mask_1661_);
v___x_1665_ = lean_alloc_closure((void*)(l_Lean_Expr_abstractM___boxed), 7, 2);
lean_closure_set(v___x_1665_, 0, v_resTy_1614_);
lean_closure_set(v___x_1665_, 1, v_maskedDiscrs_1664_);
v___x_1666_ = lean_apply_2(v_inst_1608_, lean_box(0), v___x_1665_);
v___x_1667_ = lean_apply_4(v_toBind_1650_, lean_box(0), lean_box(0), v___x_1666_, v___f_1663_);
return v___x_1667_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg___boxed(lean_object* v_inst_1668_, lean_object* v_inst_1669_, lean_object* v_inst_1670_, lean_object* v_inst_1671_, lean_object* v_inst_1672_, lean_object* v_info_1673_, lean_object* v_resTy_1674_, lean_object* v_onAlt_1675_, lean_object* v_useSplitter_1676_){
_start:
{
uint8_t v_useSplitter_boxed_1677_; lean_object* v_res_1678_; 
v_useSplitter_boxed_1677_ = lean_unbox(v_useSplitter_1676_);
v_res_1678_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_1668_, v_inst_1669_, v_inst_1670_, v_inst_1671_, v_inst_1672_, v_info_1673_, v_resTy_1674_, v_onAlt_1675_, v_useSplitter_boxed_1677_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(lean_object* v_n_1679_, lean_object* v_inst_1680_, lean_object* v_inst_1681_, lean_object* v_inst_1682_, lean_object* v_inst_1683_, lean_object* v_inst_1684_, lean_object* v_inst_1685_, lean_object* v_inst_1686_, lean_object* v_inst_1687_, lean_object* v_info_1688_, lean_object* v_resTy_1689_, lean_object* v_onAlt_1690_, uint8_t v_useSplitter_1691_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___redArg(v_inst_1680_, v_inst_1681_, v_inst_1682_, v_inst_1683_, v_inst_1684_, v_info_1688_, v_resTy_1689_, v_onAlt_1690_, v_useSplitter_1691_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___boxed(lean_object* v_n_1693_, lean_object* v_inst_1694_, lean_object* v_inst_1695_, lean_object* v_inst_1696_, lean_object* v_inst_1697_, lean_object* v_inst_1698_, lean_object* v_inst_1699_, lean_object* v_inst_1700_, lean_object* v_inst_1701_, lean_object* v_info_1702_, lean_object* v_resTy_1703_, lean_object* v_onAlt_1704_, lean_object* v_useSplitter_1705_){
_start:
{
uint8_t v_useSplitter_boxed_1706_; lean_object* v_res_1707_; 
v_useSplitter_boxed_1706_ = lean_unbox(v_useSplitter_1705_);
v_res_1707_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith(v_n_1693_, v_inst_1694_, v_inst_1695_, v_inst_1696_, v_inst_1697_, v_inst_1698_, v_inst_1699_, v_inst_1700_, v_inst_1701_, v_info_1702_, v_resTy_1703_, v_onAlt_1704_, v_useSplitter_boxed_1706_);
lean_dec_ref(v_inst_1701_);
lean_dec(v_inst_1700_);
lean_dec_ref(v_inst_1699_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(lean_object* v_info_1708_, lean_object* v_e_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_){
_start:
{
if (lean_obj_tag(v_info_1708_) == 3)
{
lean_object* v_matcherApp_1718_; lean_object* v_toMatcherInfo_1719_; lean_object* v___x_1720_; 
v_matcherApp_1718_ = lean_ctor_get(v_info_1708_, 0);
lean_inc_ref(v_matcherApp_1718_);
lean_dec_ref_known(v_info_1708_, 1);
v_toMatcherInfo_1719_ = lean_ctor_get(v_matcherApp_1718_, 0);
lean_inc_ref(v_toMatcherInfo_1719_);
lean_dec_ref(v_matcherApp_1718_);
v___x_1720_ = l_Lean_Meta_Simp_simpMatchDiscrs_x3f(v_toMatcherInfo_1719_, v_e_1709_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_);
return v___x_1720_;
}
else
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
lean_dec_ref(v_e_1709_);
lean_dec_ref(v_info_1708_);
v___x_1721_ = lean_box(0);
v___x_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1722_, 0, v___x_1721_);
return v___x_1722_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f___boxed(lean_object* v_info_1723_, lean_object* v_e_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l_Lean_Elab_Tactic_Do_SplitInfo_simpDiscrs_x3f(v_info_1723_, v_e_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
lean_dec(v_a_1731_);
lean_dec_ref(v_a_1730_);
lean_dec(v_a_1729_);
lean_dec_ref(v_a_1728_);
lean_dec(v_a_1727_);
lean_dec_ref(v_a_1726_);
lean_dec(v_a_1725_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(lean_object* v_declName_1734_, lean_object* v___y_1735_){
_start:
{
lean_object* v___x_1737_; lean_object* v_env_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1737_ = lean_st_ref_get(v___y_1735_);
v_env_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc_ref(v_env_1738_);
lean_dec(v___x_1737_);
v___x_1739_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1738_, v_declName_1734_);
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1739_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg___boxed(lean_object* v_declName_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_1741_, v___y_1742_);
lean_dec(v___y_1742_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(lean_object* v_msgData_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v___x_1751_; lean_object* v_env_1752_; uint8_t v___x_1753_; lean_object* v_env_1754_; lean_object* v___x_1755_; lean_object* v_toCold_1756_; lean_object* v_mctx_1757_; lean_object* v_lctx_1758_; lean_object* v_options_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1751_ = lean_st_ref_get(v___y_1749_);
v_env_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc_ref(v_env_1752_);
lean_dec(v___x_1751_);
v___x_1753_ = 0;
v_env_1754_ = l_Lean_Environment_setRecordingDeps(v_env_1752_, v___x_1753_);
v___x_1755_ = lean_st_ref_get(v___y_1747_);
v_toCold_1756_ = lean_ctor_get(v___y_1748_, 0);
v_mctx_1757_ = lean_ctor_get(v___x_1755_, 0);
lean_inc_ref(v_mctx_1757_);
lean_dec(v___x_1755_);
v_lctx_1758_ = lean_ctor_get(v___y_1746_, 2);
v_options_1759_ = lean_ctor_get(v_toCold_1756_, 2);
lean_inc_ref(v_options_1759_);
lean_inc_ref(v_lctx_1758_);
v___x_1760_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1760_, 0, v_env_1754_);
lean_ctor_set(v___x_1760_, 1, v_mctx_1757_);
lean_ctor_set(v___x_1760_, 2, v_lctx_1758_);
lean_ctor_set(v___x_1760_, 3, v_options_1759_);
v___x_1761_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
lean_ctor_set(v___x_1761_, 1, v_msgData_1745_);
v___x_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11___boxed(lean_object* v_msgData_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msgData_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(lean_object* v_msg_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_ref_1776_; lean_object* v___x_1777_; lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1786_; 
v_ref_1776_ = lean_ctor_get(v___y_1773_, 2);
v___x_1777_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10_spec__11(v_msg_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_);
v_a_1778_ = lean_ctor_get(v___x_1777_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1780_ = v___x_1777_;
v_isShared_1781_ = v_isSharedCheck_1786_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1777_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1786_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1784_; 
lean_inc(v_ref_1776_);
v___x_1782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1782_, 0, v_ref_1776_);
lean_ctor_set(v___x_1782_, 1, v_a_1778_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set_tag(v___x_1780_, 1);
lean_ctor_set(v___x_1780_, 0, v___x_1782_);
v___x_1784_ = v___x_1780_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_msg_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(lean_object* v_ref_1794_, lean_object* v_msg_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v_toCold_1801_; lean_object* v_currRecDepth_1802_; lean_object* v_ref_1803_; uint16_t v_optionFlags_1804_; uint8_t v_suppressElabErrors_1805_; uint8_t v_checkDeprecated_1806_; uint8_t v_isRecordingDeps_1807_; lean_object* v_ref_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v_toCold_1801_ = lean_ctor_get(v___y_1798_, 0);
v_currRecDepth_1802_ = lean_ctor_get(v___y_1798_, 1);
v_ref_1803_ = lean_ctor_get(v___y_1798_, 2);
v_optionFlags_1804_ = lean_ctor_get_uint16(v___y_1798_, sizeof(void*)*3);
v_suppressElabErrors_1805_ = lean_ctor_get_uint8(v___y_1798_, sizeof(void*)*3 + 2);
v_checkDeprecated_1806_ = lean_ctor_get_uint8(v___y_1798_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1807_ = lean_ctor_get_uint8(v___y_1798_, sizeof(void*)*3 + 4);
v_ref_1808_ = l_Lean_replaceRef(v_ref_1794_, v_ref_1803_);
lean_inc(v_currRecDepth_1802_);
lean_inc_ref(v_toCold_1801_);
v___x_1809_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1809_, 0, v_toCold_1801_);
lean_ctor_set(v___x_1809_, 1, v_currRecDepth_1802_);
lean_ctor_set(v___x_1809_, 2, v_ref_1808_);
lean_ctor_set_uint16(v___x_1809_, sizeof(void*)*3, v_optionFlags_1804_);
lean_ctor_set_uint8(v___x_1809_, sizeof(void*)*3 + 2, v_suppressElabErrors_1805_);
lean_ctor_set_uint8(v___x_1809_, sizeof(void*)*3 + 3, v_checkDeprecated_1806_);
lean_ctor_set_uint8(v___x_1809_, sizeof(void*)*3 + 4, v_isRecordingDeps_1807_);
v___x_1810_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_1795_, v___y_1796_, v___y_1797_, v___x_1809_, v___y_1799_);
lean_dec_ref_known(v___x_1809_, 3);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg___boxed(lean_object* v_ref_1811_, lean_object* v_msg_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_1811_, v_msg_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v_ref_1811_);
return v_res_1818_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1819_; 
v___x_1819_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1819_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__0);
v___x_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1820_);
return v___x_1821_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1822_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1823_ = lean_unsigned_to_nat(0u);
v___x_1824_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1823_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
lean_ctor_set(v___x_1824_, 2, v___x_1823_);
lean_ctor_set(v___x_1824_, 3, v___x_1823_);
lean_ctor_set(v___x_1824_, 4, v___x_1822_);
lean_ctor_set(v___x_1824_, 5, v___x_1822_);
lean_ctor_set(v___x_1824_, 6, v___x_1822_);
lean_ctor_set(v___x_1824_, 7, v___x_1822_);
lean_ctor_set(v___x_1824_, 8, v___x_1822_);
lean_ctor_set(v___x_1824_, 9, v___x_1822_);
lean_ctor_set(v___x_1824_, 10, v___x_1822_);
return v___x_1824_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1825_ = lean_unsigned_to_nat(32u);
v___x_1826_ = lean_mk_empty_array_with_capacity(v___x_1825_);
v___x_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
return v___x_1827_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4(void){
_start:
{
size_t v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1828_ = ((size_t)5ULL);
v___x_1829_ = lean_unsigned_to_nat(0u);
v___x_1830_ = lean_unsigned_to_nat(32u);
v___x_1831_ = lean_mk_empty_array_with_capacity(v___x_1830_);
v___x_1832_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__3);
v___x_1833_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1833_, 0, v___x_1832_);
lean_ctor_set(v___x_1833_, 1, v___x_1831_);
lean_ctor_set(v___x_1833_, 2, v___x_1829_);
lean_ctor_set(v___x_1833_, 3, v___x_1829_);
lean_ctor_set_usize(v___x_1833_, 4, v___x_1828_);
return v___x_1833_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1834_ = lean_box(1);
v___x_1835_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__4);
v___x_1836_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__1);
v___x_1837_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
lean_ctor_set(v___x_1837_, 1, v___x_1835_);
lean_ctor_set(v___x_1837_, 2, v___x_1834_);
return v___x_1837_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7(void){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__6));
v___x_1840_ = l_Lean_stringToMessageData(v___x_1839_);
return v___x_1840_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__8));
v___x_1843_ = l_Lean_stringToMessageData(v___x_1842_);
return v___x_1843_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11(void){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1845_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__10));
v___x_1846_ = l_Lean_stringToMessageData(v___x_1845_);
return v___x_1846_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13(void){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__12));
v___x_1849_ = l_Lean_stringToMessageData(v___x_1848_);
return v___x_1849_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15(void){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__14));
v___x_1852_ = l_Lean_stringToMessageData(v___x_1851_);
return v___x_1852_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17(void){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1854_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__16));
v___x_1855_ = l_Lean_stringToMessageData(v___x_1854_);
return v___x_1855_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19(void){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__18));
v___x_1858_ = l_Lean_stringToMessageData(v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(lean_object* v_msg_1859_, lean_object* v_declHint_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v_env_1865_; uint8_t v___x_1866_; 
v___x_1863_ = lean_box(0);
v___x_1864_ = lean_st_ref_get(v___y_1861_);
v_env_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc_ref(v_env_1865_);
lean_dec(v___x_1864_);
v___x_1866_ = l_Lean_Name_isAnonymous(v_declHint_1860_);
if (v___x_1866_ == 0)
{
uint8_t v_isExporting_1867_; 
v_isExporting_1867_ = lean_ctor_get_uint8(v_env_1865_, sizeof(void*)*13);
if (v_isExporting_1867_ == 0)
{
lean_object* v___x_1868_; 
lean_dec_ref(v_env_1865_);
lean_dec(v_declHint_1860_);
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v_msg_1859_);
return v___x_1868_;
}
else
{
lean_object* v___x_1869_; uint8_t v___x_1870_; 
lean_inc_ref(v_env_1865_);
v___x_1869_ = l_Lean_Environment_setExporting(v_env_1865_, v___x_1866_);
lean_inc(v_declHint_1860_);
lean_inc_ref(v___x_1869_);
v___x_1870_ = l_Lean_Environment_contains(v___x_1869_, v_declHint_1860_, v_isExporting_1867_);
if (v___x_1870_ == 0)
{
lean_object* v___x_1871_; 
lean_dec_ref(v___x_1869_);
lean_dec_ref(v_env_1865_);
lean_dec(v_declHint_1860_);
v___x_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1871_, 0, v_msg_1859_);
return v___x_1871_;
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v_c_1877_; lean_object* v___x_1878_; 
v___x_1872_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__2);
v___x_1873_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__5);
v___x_1874_ = l_Lean_Options_empty;
lean_inc_ref(v___x_1869_);
v___x_1875_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1869_);
lean_ctor_set(v___x_1875_, 1, v___x_1872_);
lean_ctor_set(v___x_1875_, 2, v___x_1873_);
lean_ctor_set(v___x_1875_, 3, v___x_1874_);
lean_inc(v_declHint_1860_);
v___x_1876_ = l_Lean_MessageData_ofConstName(v_declHint_1860_, v___x_1866_);
v_c_1877_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1877_, 0, v___x_1875_);
lean_ctor_set(v_c_1877_, 1, v___x_1876_);
v___x_1878_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_1869_, v_declHint_1860_);
lean_dec_ref(v___x_1869_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
lean_dec_ref(v_env_1865_);
lean_dec(v_declHint_1860_);
v___x_1879_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_1880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
lean_ctor_set(v___x_1880_, 1, v_c_1877_);
v___x_1881_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__9);
v___x_1882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1880_);
lean_ctor_set(v___x_1882_, 1, v___x_1881_);
v___x_1883_ = l_Lean_MessageData_note(v___x_1882_);
v___x_1884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1884_, 0, v_msg_1859_);
lean_ctor_set(v___x_1884_, 1, v___x_1883_);
v___x_1885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1884_);
return v___x_1885_;
}
else
{
lean_object* v_val_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1920_; 
v_val_1886_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1888_ = v___x_1878_;
v_isShared_1889_ = v_isSharedCheck_1920_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_val_1886_);
lean_dec(v___x_1878_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1920_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1890_; lean_object* v_moduleNames_1891_; lean_object* v_mod_1892_; uint8_t v___x_1893_; 
v___x_1890_ = l_Lean_Environment_header(v_env_1865_);
lean_dec_ref(v_env_1865_);
v_moduleNames_1891_ = lean_ctor_get(v___x_1890_, 4);
lean_inc_ref(v_moduleNames_1891_);
lean_dec_ref(v___x_1890_);
v_mod_1892_ = lean_array_get(v___x_1863_, v_moduleNames_1891_, v_val_1886_);
lean_dec(v_val_1886_);
lean_dec_ref(v_moduleNames_1891_);
v___x_1893_ = l_Lean_isPrivateName(v_declHint_1860_);
lean_dec(v_declHint_1860_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1905_; 
v___x_1894_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__11);
v___x_1895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
lean_ctor_set(v___x_1895_, 1, v_c_1877_);
v___x_1896_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__13);
v___x_1897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1895_);
lean_ctor_set(v___x_1897_, 1, v___x_1896_);
v___x_1898_ = l_Lean_MessageData_ofName(v_mod_1892_);
v___x_1899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1897_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
v___x_1900_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__15);
v___x_1901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1899_);
lean_ctor_set(v___x_1901_, 1, v___x_1900_);
v___x_1902_ = l_Lean_MessageData_note(v___x_1901_);
v___x_1903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1903_, 0, v_msg_1859_);
lean_ctor_set(v___x_1903_, 1, v___x_1902_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set_tag(v___x_1888_, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1903_);
v___x_1905_ = v___x_1888_;
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
else
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1918_; 
v___x_1907_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__7);
v___x_1908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
lean_ctor_set(v___x_1908_, 1, v_c_1877_);
v___x_1909_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__17);
v___x_1910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1908_);
lean_ctor_set(v___x_1910_, 1, v___x_1909_);
v___x_1911_ = l_Lean_MessageData_ofName(v_mod_1892_);
v___x_1912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1910_);
lean_ctor_set(v___x_1912_, 1, v___x_1911_);
v___x_1913_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___closed__19);
v___x_1914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1912_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v___x_1915_ = l_Lean_MessageData_note(v___x_1914_);
v___x_1916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1916_, 0, v_msg_1859_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set_tag(v___x_1888_, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1916_);
v___x_1918_ = v___x_1888_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v___x_1916_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1921_; 
lean_dec_ref(v_env_1865_);
lean_dec(v_declHint_1860_);
v___x_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1921_, 0, v_msg_1859_);
return v___x_1921_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_msg_1922_, lean_object* v_declHint_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_1922_, v_declHint_1923_, v___y_1924_);
lean_dec(v___y_1924_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(lean_object* v_msg_1927_, lean_object* v_declHint_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v___x_1934_; lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1944_; 
v___x_1934_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_1927_, v_declHint_1928_, v___y_1932_);
v_a_1935_ = lean_ctor_get(v___x_1934_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1937_ = v___x_1934_;
v_isShared_1938_ = v_isSharedCheck_1944_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1934_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1944_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1939_ = l_Lean_unknownIdentifierMessageTag;
v___x_1940_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1939_);
lean_ctor_set(v___x_1940_, 1, v_a_1935_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 0, v___x_1940_);
v___x_1942_ = v___x_1937_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7___boxed(lean_object* v_msg_1945_, lean_object* v_declHint_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_1945_, v_declHint_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_1953_, lean_object* v_msg_1954_, lean_object* v_declHint_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v___x_1961_; lean_object* v_a_1962_; lean_object* v___x_1963_; 
v___x_1961_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7(v_msg_1954_, v_declHint_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref(v___x_1961_);
v___x_1963_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_1953_, v_a_1962_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1964_, lean_object* v_msg_1965_, lean_object* v_declHint_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1964_, v_msg_1965_, v_declHint_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v_ref_1964_);
return v_res_1972_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__0));
v___x_1975_ = l_Lean_stringToMessageData(v___x_1974_);
return v___x_1975_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__2));
v___x_1978_ = l_Lean_stringToMessageData(v___x_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_1979_, lean_object* v_constName_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v___x_1986_; uint8_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1986_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__1);
v___x_1987_ = 0;
lean_inc(v_constName_1980_);
v___x_1988_ = l_Lean_MessageData_ofConstName(v_constName_1980_, v___x_1987_);
v___x_1989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1986_);
lean_ctor_set(v___x_1989_, 1, v___x_1988_);
v___x_1990_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___closed__3);
v___x_1991_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1989_);
lean_ctor_set(v___x_1991_, 1, v___x_1990_);
v___x_1992_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1979_, v___x_1991_, v_constName_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1993_, lean_object* v_constName_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v_res_2000_; 
v_res_2000_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1993_, v_constName_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec(v___y_1996_);
lean_dec_ref(v___y_1995_);
lean_dec(v_ref_1993_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_constName_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_){
_start:
{
lean_object* v_ref_2007_; lean_object* v___x_2008_; 
v_ref_2007_ = lean_ctor_get(v___y_2004_, 2);
v___x_2008_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2007_, v_constName_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_constName_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(lean_object* v_constName_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v___x_2022_; lean_object* v_env_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; 
v___x_2022_ = lean_st_ref_get(v___y_2020_);
v_env_2023_ = lean_ctor_get(v___x_2022_, 0);
lean_inc_ref(v_env_2023_);
lean_dec(v___x_2022_);
v___x_2024_ = 0;
lean_inc(v_constName_2016_);
v___x_2025_ = l_Lean_Environment_find_x3f(v_env_2023_, v_constName_2016_, v___x_2024_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v___x_2026_; 
v___x_2026_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
return v___x_2026_;
}
else
{
lean_object* v_val_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_dec(v_constName_2016_);
v_val_2027_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_2025_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_val_2027_);
lean_dec(v___x_2025_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
lean_ctor_set_tag(v___x_2029_, 0);
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_val_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0___boxed(lean_object* v_constName_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_constName_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(lean_object* v_msg_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v___x_2048_; lean_object* v_toApplicative_2049_; lean_object* v_toFunctor_2050_; lean_object* v_toSeq_2051_; lean_object* v_toSeqLeft_2052_; lean_object* v_toSeqRight_2053_; lean_object* v___f_2054_; lean_object* v___f_2055_; lean_object* v___f_2056_; lean_object* v___f_2057_; lean_object* v___x_2058_; lean_object* v___f_2059_; lean_object* v___f_2060_; lean_object* v___f_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v_toApplicative_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2096_; 
v___x_2048_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__1);
v_toApplicative_2049_ = lean_ctor_get(v___x_2048_, 0);
v_toFunctor_2050_ = lean_ctor_get(v_toApplicative_2049_, 0);
v_toSeq_2051_ = lean_ctor_get(v_toApplicative_2049_, 2);
v_toSeqLeft_2052_ = lean_ctor_get(v_toApplicative_2049_, 3);
v_toSeqRight_2053_ = lean_ctor_get(v_toApplicative_2049_, 4);
v___f_2054_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__2));
v___f_2055_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2050_, 2);
v___f_2056_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2056_, 0, v_toFunctor_2050_);
v___f_2057_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2057_, 0, v_toFunctor_2050_);
v___x_2058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2058_, 0, v___f_2056_);
lean_ctor_set(v___x_2058_, 1, v___f_2057_);
lean_inc(v_toSeqRight_2053_);
v___f_2059_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2059_, 0, v_toSeqRight_2053_);
lean_inc(v_toSeqLeft_2052_);
v___f_2060_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2060_, 0, v_toSeqLeft_2052_);
lean_inc(v_toSeq_2051_);
v___f_2061_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2061_, 0, v_toSeq_2051_);
v___x_2062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2058_);
lean_ctor_set(v___x_2062_, 1, v___f_2054_);
lean_ctor_set(v___x_2062_, 2, v___f_2061_);
lean_ctor_set(v___x_2062_, 3, v___f_2060_);
lean_ctor_set(v___x_2062_, 4, v___f_2059_);
v___x_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
lean_ctor_set(v___x_2063_, 1, v___f_2055_);
v___x_2064_ = l_StateRefT_x27_instMonad___redArg(v___x_2063_);
v_toApplicative_2065_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2096_ == 0)
{
lean_object* v_unused_2097_; 
v_unused_2097_ = lean_ctor_get(v___x_2064_, 1);
lean_dec(v_unused_2097_);
v___x_2067_ = v___x_2064_;
v_isShared_2068_ = v_isSharedCheck_2096_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_toApplicative_2065_);
lean_dec(v___x_2064_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2096_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v_toFunctor_2069_; lean_object* v_toSeq_2070_; lean_object* v_toSeqLeft_2071_; lean_object* v_toSeqRight_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2094_; 
v_toFunctor_2069_ = lean_ctor_get(v_toApplicative_2065_, 0);
v_toSeq_2070_ = lean_ctor_get(v_toApplicative_2065_, 2);
v_toSeqLeft_2071_ = lean_ctor_get(v_toApplicative_2065_, 3);
v_toSeqRight_2072_ = lean_ctor_get(v_toApplicative_2065_, 4);
v_isSharedCheck_2094_ = !lean_is_exclusive(v_toApplicative_2065_);
if (v_isSharedCheck_2094_ == 0)
{
lean_object* v_unused_2095_; 
v_unused_2095_ = lean_ctor_get(v_toApplicative_2065_, 1);
lean_dec(v_unused_2095_);
v___x_2074_ = v_toApplicative_2065_;
v_isShared_2075_ = v_isSharedCheck_2094_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_toSeqRight_2072_);
lean_inc(v_toSeqLeft_2071_);
lean_inc(v_toSeq_2070_);
lean_inc(v_toFunctor_2069_);
lean_dec(v_toApplicative_2065_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2094_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___f_2076_; lean_object* v___f_2077_; lean_object* v___f_2078_; lean_object* v___f_2079_; lean_object* v___x_2080_; lean_object* v___f_2081_; lean_object* v___f_2082_; lean_object* v___f_2083_; lean_object* v___x_2085_; 
v___f_2076_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__4));
v___f_2077_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___closed__5));
lean_inc_ref(v_toFunctor_2069_);
v___f_2078_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2078_, 0, v_toFunctor_2069_);
v___f_2079_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2079_, 0, v_toFunctor_2069_);
v___x_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___f_2078_);
lean_ctor_set(v___x_2080_, 1, v___f_2079_);
v___f_2081_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2081_, 0, v_toSeqRight_2072_);
v___f_2082_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2082_, 0, v_toSeqLeft_2071_);
v___f_2083_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2083_, 0, v_toSeq_2070_);
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 4, v___f_2081_);
lean_ctor_set(v___x_2074_, 3, v___f_2082_);
lean_ctor_set(v___x_2074_, 2, v___f_2083_);
lean_ctor_set(v___x_2074_, 1, v___f_2076_);
lean_ctor_set(v___x_2074_, 0, v___x_2080_);
v___x_2085_ = v___x_2074_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2080_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v___f_2076_);
lean_ctor_set(v_reuseFailAlloc_2093_, 2, v___f_2083_);
lean_ctor_set(v_reuseFailAlloc_2093_, 3, v___f_2082_);
lean_ctor_set(v_reuseFailAlloc_2093_, 4, v___f_2081_);
v___x_2085_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2087_; 
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 1, v___f_2077_);
lean_ctor_set(v___x_2067_, 0, v___x_2085_);
v___x_2087_ = v___x_2067_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2085_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v___f_2077_);
v___x_2087_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2847__overap_2090_; lean_object* v___x_2091_; 
v___x_2088_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2089_ = l_instInhabitedOfMonad___redArg(v___x_2087_, v___x_2088_);
v___x_2847__overap_2090_ = lean_panic_fn_borrowed(v___x_2089_, v_msg_2042_);
lean_dec(v___x_2089_);
lean_inc(v___y_2046_);
lean_inc_ref(v___y_2045_);
lean_inc(v___y_2044_);
lean_inc_ref(v___y_2043_);
v___x_2091_ = lean_apply_5(v___x_2847__overap_2090_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, lean_box(0));
return v___x_2091_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1___boxed(lean_object* v_msg_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v_msg_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
return v_res_2104_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2108_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__2));
v___x_2109_ = lean_unsigned_to_nat(53u);
v___x_2110_ = lean_unsigned_to_nat(62u);
v___x_2111_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__1));
v___x_2112_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__0));
v___x_2113_ = l_mkPanicMessageWithDecl(v___x_2112_, v___x_2111_, v___x_2110_, v___x_2109_, v___x_2108_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(size_t v_sz_2114_, size_t v_i_2115_, lean_object* v_bs_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_){
_start:
{
uint8_t v___x_2122_; 
v___x_2122_ = lean_usize_dec_lt(v_i_2115_, v_sz_2114_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2123_, 0, v_bs_2116_);
return v___x_2123_;
}
else
{
lean_object* v_v_2124_; lean_object* v___x_2125_; lean_object* v_bs_x27_2126_; lean_object* v_a_2128_; lean_object* v___x_2133_; 
v_v_2124_ = lean_array_uget(v_bs_2116_, v_i_2115_);
v___x_2125_ = lean_unsigned_to_nat(0u);
v_bs_x27_2126_ = lean_array_uset(v_bs_2116_, v_i_2115_, v___x_2125_);
v___x_2133_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_v_2124_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref_known(v___x_2133_, 1);
if (lean_obj_tag(v_a_2134_) == 6)
{
lean_object* v_val_2135_; lean_object* v_numFields_2136_; uint8_t v___x_2137_; lean_object* v___x_2138_; 
v_val_2135_ = lean_ctor_get(v_a_2134_, 0);
lean_inc_ref(v_val_2135_);
lean_dec_ref_known(v_a_2134_, 1);
v_numFields_2136_ = lean_ctor_get(v_val_2135_, 4);
lean_inc(v_numFields_2136_);
lean_dec_ref(v_val_2135_);
v___x_2137_ = 0;
v___x_2138_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2138_, 0, v_numFields_2136_);
lean_ctor_set(v___x_2138_, 1, v___x_2125_);
lean_ctor_set_uint8(v___x_2138_, sizeof(void*)*2, v___x_2137_);
v_a_2128_ = v___x_2138_;
goto v___jp_2127_;
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_dec(v_a_2134_);
v___x_2139_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___closed__3);
v___x_2140_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__1(v___x_2139_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
v_a_2128_ = v_a_2141_;
goto v___jp_2127_;
}
else
{
lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2149_; 
lean_dec_ref(v_bs_x27_2126_);
v_a_2142_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2144_ = v___x_2140_;
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2140_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2147_; 
if (v_isShared_2145_ == 0)
{
v___x_2147_ = v___x_2144_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_a_2142_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
}
else
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
lean_dec_ref(v_bs_x27_2126_);
v_a_2150_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2133_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___x_2133_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_a_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
v___jp_2127_:
{
size_t v___x_2129_; size_t v___x_2130_; lean_object* v___x_2131_; 
v___x_2129_ = ((size_t)1ULL);
v___x_2130_ = lean_usize_add(v_i_2115_, v___x_2129_);
v___x_2131_ = lean_array_uset(v_bs_x27_2126_, v_i_2115_, v_a_2128_);
v_i_2115_ = v___x_2130_;
v_bs_2116_ = v___x_2131_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3___boxed(lean_object* v_sz_2158_, lean_object* v_i_2159_, lean_object* v_bs_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
size_t v_sz_boxed_2166_; size_t v_i_boxed_2167_; lean_object* v_res_2168_; 
v_sz_boxed_2166_ = lean_unbox_usize(v_sz_2158_);
lean_dec(v_sz_2158_);
v_i_boxed_2167_ = lean_unbox_usize(v_i_2159_);
lean_dec(v_i_2159_);
v_res_2168_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_boxed_2166_, v_i_boxed_2167_, v_bs_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
return v_res_2168_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2169_; lean_object* v_dummy_2170_; 
v___x_2169_ = lean_box(0);
v_dummy_2170_ = l_Lean_Expr_sort___override(v___x_2169_);
return v_dummy_2170_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = lean_box(0);
v___x_2172_ = lean_unsigned_to_nat(16u);
v___x_2173_ = lean_mk_array(v___x_2172_, v___x_2171_);
return v___x_2173_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2174_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__1);
v___x_2175_ = lean_unsigned_to_nat(0u);
v___x_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2175_);
lean_ctor_set(v___x_2176_, 1, v___x_2174_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(lean_object* v_e_2179_, uint8_t v_alsoCasesOn_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
uint8_t v___x_2189_; 
v___x_2189_ = l_Lean_Expr_isApp(v_e_2179_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
lean_dec_ref(v_e_2179_);
v___x_2190_ = lean_box(0);
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2190_);
return v___x_2191_;
}
else
{
lean_object* v___x_2192_; 
v___x_2192_ = l_Lean_Expr_getAppFn(v_e_2179_);
if (lean_obj_tag(v___x_2192_) == 4)
{
lean_object* v_declName_2193_; lean_object* v_us_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2341_; 
v_declName_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc_n(v_declName_2193_, 2);
v_us_2194_ = lean_ctor_get(v___x_2192_, 1);
lean_inc(v_us_2194_);
lean_dec_ref_known(v___x_2192_, 2);
v___x_2195_ = l_Lean_instInhabitedExpr;
v___x_2196_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2193_, v___y_2184_);
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2199_ = v___x_2196_;
v_isShared_2200_ = v_isSharedCheck_2341_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2196_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2341_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
if (lean_obj_tag(v_a_2197_) == 1)
{
lean_object* v_val_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2238_; 
v_val_2201_ = lean_ctor_get(v_a_2197_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_a_2197_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2203_ = v_a_2197_;
v_isShared_2204_ = v_isSharedCheck_2238_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_val_2201_);
lean_dec(v_a_2197_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2238_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v_dummy_2205_; lean_object* v_nargs_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v_args_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; uint8_t v___x_2213_; 
v_dummy_2205_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
v_nargs_2206_ = l_Lean_Expr_getAppNumArgs(v_e_2179_);
lean_inc(v_nargs_2206_);
v___x_2207_ = lean_mk_array(v_nargs_2206_, v_dummy_2205_);
v___x_2208_ = lean_unsigned_to_nat(1u);
v___x_2209_ = lean_nat_sub(v_nargs_2206_, v___x_2208_);
lean_dec(v_nargs_2206_);
v_args_2210_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2179_, v___x_2207_, v___x_2209_);
v___x_2211_ = lean_array_get_size(v_args_2210_);
v___x_2212_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2201_);
v___x_2213_ = lean_nat_dec_lt(v___x_2211_, v___x_2212_);
lean_dec(v___x_2212_);
if (v___x_2213_ == 0)
{
lean_object* v_numParams_2214_; lean_object* v_numDiscrs_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2233_; 
v_numParams_2214_ = lean_ctor_get(v_val_2201_, 0);
v_numDiscrs_2215_ = lean_ctor_get(v_val_2201_, 1);
v___x_2216_ = lean_array_mk(v_us_2194_);
v___x_2217_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2214_);
v___x_2218_ = l_Array_extract___redArg(v_args_2210_, v___x_2217_, v_numParams_2214_);
v___x_2219_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2201_);
v___x_2220_ = lean_array_get(v___x_2195_, v_args_2210_, v___x_2219_);
lean_dec(v___x_2219_);
v___x_2221_ = lean_nat_add(v_numParams_2214_, v___x_2208_);
v___x_2222_ = lean_nat_add(v___x_2221_, v_numDiscrs_2215_);
lean_inc(v___x_2222_);
lean_inc_ref_n(v_args_2210_, 2);
v___x_2223_ = l_Array_toSubarray___redArg(v_args_2210_, v___x_2221_, v___x_2222_);
v___x_2224_ = l_Subarray_copy___redArg(v___x_2223_);
v___x_2225_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2201_);
v___x_2226_ = lean_nat_add(v___x_2222_, v___x_2225_);
lean_dec(v___x_2225_);
lean_inc(v___x_2226_);
v___x_2227_ = l_Array_toSubarray___redArg(v_args_2210_, v___x_2222_, v___x_2226_);
v___x_2228_ = l_Subarray_copy___redArg(v___x_2227_);
v___x_2229_ = l_Array_toSubarray___redArg(v_args_2210_, v___x_2226_, v___x_2211_);
v___x_2230_ = l_Subarray_copy___redArg(v___x_2229_);
v___x_2231_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2231_, 0, v_val_2201_);
lean_ctor_set(v___x_2231_, 1, v_declName_2193_);
lean_ctor_set(v___x_2231_, 2, v___x_2216_);
lean_ctor_set(v___x_2231_, 3, v___x_2218_);
lean_ctor_set(v___x_2231_, 4, v___x_2220_);
lean_ctor_set(v___x_2231_, 5, v___x_2224_);
lean_ctor_set(v___x_2231_, 6, v___x_2228_);
lean_ctor_set(v___x_2231_, 7, v___x_2230_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v___x_2231_);
v___x_2233_ = v___x_2203_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2231_);
v___x_2233_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
lean_object* v___x_2235_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v___x_2233_);
v___x_2235_ = v___x_2199_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2233_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
else
{
lean_dec_ref(v_args_2210_);
lean_del_object(v___x_2203_);
lean_dec(v_val_2201_);
lean_del_object(v___x_2199_);
lean_dec(v_us_2194_);
lean_dec(v_declName_2193_);
goto v___jp_2186_;
}
}
}
else
{
lean_object* v___x_2239_; 
lean_del_object(v___x_2199_);
lean_dec(v_a_2197_);
v___x_2239_ = lean_st_ref_get(v___y_2184_);
if (v_alsoCasesOn_2180_ == 0)
{
lean_dec(v___x_2239_);
lean_dec(v_us_2194_);
lean_dec(v_declName_2193_);
lean_dec_ref(v_e_2179_);
goto v___jp_2186_;
}
else
{
lean_object* v_env_2240_; uint8_t v___x_2241_; 
v_env_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc_ref(v_env_2240_);
lean_dec(v___x_2239_);
lean_inc(v_declName_2193_);
v___x_2241_ = l_Lean_isCasesOnRecursor(v_env_2240_, v_declName_2193_);
if (v___x_2241_ == 0)
{
lean_dec(v_us_2194_);
lean_dec(v_declName_2193_);
lean_dec_ref(v_e_2179_);
goto v___jp_2186_;
}
else
{
lean_object* v_indName_2242_; lean_object* v___x_2243_; 
v_indName_2242_ = l_Lean_Name_getPrefix(v_declName_2193_);
v___x_2243_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0(v_indName_2242_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2332_; 
v_a_2244_ = lean_ctor_get(v___x_2243_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2246_ = v___x_2243_;
v_isShared_2247_ = v_isSharedCheck_2332_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2243_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2332_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
if (lean_obj_tag(v_a_2244_) == 5)
{
lean_object* v_val_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2327_; 
lean_del_object(v___x_2246_);
v_val_2248_ = lean_ctor_get(v_a_2244_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_a_2244_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2250_ = v_a_2244_;
v_isShared_2251_ = v_isSharedCheck_2327_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_val_2248_);
lean_dec(v_a_2244_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2327_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v_toConstantVal_2252_; lean_object* v_numParams_2253_; lean_object* v_numIndices_2254_; lean_object* v_ctors_2255_; lean_object* v_nargs_2256_; lean_object* v_dummy_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v_args_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; uint8_t v___x_2268_; 
v_toConstantVal_2252_ = lean_ctor_get(v_val_2248_, 0);
lean_inc_ref(v_toConstantVal_2252_);
v_numParams_2253_ = lean_ctor_get(v_val_2248_, 1);
lean_inc(v_numParams_2253_);
v_numIndices_2254_ = lean_ctor_get(v_val_2248_, 2);
lean_inc(v_numIndices_2254_);
v_ctors_2255_ = lean_ctor_get(v_val_2248_, 4);
lean_inc(v_ctors_2255_);
v_nargs_2256_ = l_Lean_Expr_getAppNumArgs(v_e_2179_);
v_dummy_2257_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__0);
lean_inc(v_nargs_2256_);
v___x_2258_ = lean_mk_array(v_nargs_2256_, v_dummy_2257_);
v___x_2259_ = lean_unsigned_to_nat(1u);
v___x_2260_ = lean_nat_sub(v_nargs_2256_, v___x_2259_);
lean_dec(v_nargs_2256_);
v_args_2261_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2179_, v___x_2258_, v___x_2260_);
v___x_2262_ = lean_nat_add(v_numParams_2253_, v___x_2259_);
v___x_2263_ = lean_nat_add(v___x_2262_, v_numIndices_2254_);
v___x_2264_ = lean_nat_add(v___x_2263_, v___x_2259_);
lean_dec(v___x_2263_);
v___x_2265_ = l_Lean_InductiveVal_numCtors(v_val_2248_);
lean_dec_ref(v_val_2248_);
v___x_2266_ = lean_nat_add(v___x_2264_, v___x_2265_);
lean_dec(v___x_2265_);
v___x_2267_ = lean_array_get_size(v_args_2261_);
v___x_2268_ = lean_nat_dec_le(v___x_2266_, v___x_2267_);
if (v___x_2268_ == 0)
{
lean_dec(v___x_2266_);
lean_dec(v___x_2264_);
lean_dec(v___x_2262_);
lean_dec_ref(v_args_2261_);
lean_dec(v_ctors_2255_);
lean_dec(v_numIndices_2254_);
lean_dec(v_numParams_2253_);
lean_dec_ref(v_toConstantVal_2252_);
lean_del_object(v___x_2250_);
lean_dec(v_us_2194_);
lean_dec(v_declName_2193_);
goto v___jp_2186_;
}
else
{
lean_object* v___x_2269_; lean_object* v_params_2270_; lean_object* v_motive_2271_; lean_object* v_discrs_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v_discrInfos_2275_; lean_object* v_alts_2276_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v_lower_2318_; lean_object* v_upper_2319_; uint8_t v___x_2326_; 
v___x_2269_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2253_);
lean_inc_ref_n(v_args_2261_, 3);
v_params_2270_ = l_Array_toSubarray___redArg(v_args_2261_, v___x_2269_, v_numParams_2253_);
v_motive_2271_ = lean_array_get(v___x_2195_, v_args_2261_, v_numParams_2253_);
lean_dec(v_numParams_2253_);
lean_inc(v___x_2264_);
v_discrs_2272_ = l_Array_toSubarray___redArg(v_args_2261_, v___x_2262_, v___x_2264_);
v___x_2273_ = lean_nat_add(v_numIndices_2254_, v___x_2259_);
lean_dec(v_numIndices_2254_);
v___x_2274_ = lean_box(0);
v_discrInfos_2275_ = lean_mk_array(v___x_2273_, v___x_2274_);
lean_inc(v___x_2266_);
v_alts_2276_ = l_Array_toSubarray___redArg(v_args_2261_, v___x_2264_, v___x_2266_);
v___x_2326_ = lean_nat_dec_le(v___x_2266_, v___x_2269_);
if (v___x_2326_ == 0)
{
v_lower_2318_ = v___x_2266_;
v_upper_2319_ = v___x_2267_;
goto v___jp_2317_;
}
else
{
lean_dec(v___x_2266_);
v_lower_2318_ = v___x_2269_;
v_upper_2319_ = v___x_2267_;
goto v___jp_2317_;
}
v___jp_2277_:
{
lean_object* v___x_2280_; size_t v_sz_2281_; size_t v___x_2282_; lean_object* v___x_2283_; 
v___x_2280_ = lean_array_mk(v_ctors_2255_);
v_sz_2281_ = lean_array_size(v___x_2280_);
v___x_2282_ = ((size_t)0ULL);
v___x_2283_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__3(v_sz_2281_, v___x_2282_, v___x_2280_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2308_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2286_ = v___x_2283_;
v_isShared_2287_ = v_isSharedCheck_2308_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2283_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2308_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v_start_2288_; lean_object* v_stop_2289_; lean_object* v_start_2290_; lean_object* v_stop_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2303_; 
v_start_2288_ = lean_ctor_get(v_params_2270_, 1);
v_stop_2289_ = lean_ctor_get(v_params_2270_, 2);
v_start_2290_ = lean_ctor_get(v_discrs_2272_, 1);
v_stop_2291_ = lean_ctor_get(v_discrs_2272_, 2);
v___x_2292_ = lean_nat_sub(v_stop_2289_, v_start_2288_);
v___x_2293_ = lean_nat_sub(v_stop_2291_, v_start_2290_);
v___x_2294_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__2);
v___x_2295_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2292_);
lean_ctor_set(v___x_2295_, 1, v___x_2293_);
lean_ctor_set(v___x_2295_, 2, v_a_2284_);
lean_ctor_set(v___x_2295_, 3, v___y_2279_);
lean_ctor_set(v___x_2295_, 4, v_discrInfos_2275_);
lean_ctor_set(v___x_2295_, 5, v___x_2294_);
v___x_2296_ = lean_array_mk(v_us_2194_);
v___x_2297_ = l_Subarray_copy___redArg(v_params_2270_);
v___x_2298_ = l_Subarray_copy___redArg(v_discrs_2272_);
v___x_2299_ = l_Subarray_copy___redArg(v_alts_2276_);
v___x_2300_ = l_Subarray_copy___redArg(v___y_2278_);
v___x_2301_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2295_);
lean_ctor_set(v___x_2301_, 1, v_declName_2193_);
lean_ctor_set(v___x_2301_, 2, v___x_2296_);
lean_ctor_set(v___x_2301_, 3, v___x_2297_);
lean_ctor_set(v___x_2301_, 4, v_motive_2271_);
lean_ctor_set(v___x_2301_, 5, v___x_2298_);
lean_ctor_set(v___x_2301_, 6, v___x_2299_);
lean_ctor_set(v___x_2301_, 7, v___x_2300_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set_tag(v___x_2250_, 1);
lean_ctor_set(v___x_2250_, 0, v___x_2301_);
v___x_2303_ = v___x_2250_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v___x_2301_);
v___x_2303_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
lean_object* v___x_2305_; 
if (v_isShared_2287_ == 0)
{
lean_ctor_set(v___x_2286_, 0, v___x_2303_);
v___x_2305_ = v___x_2286_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v___x_2303_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
else
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2316_; 
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec_ref(v_alts_2276_);
lean_dec_ref(v_discrInfos_2275_);
lean_dec_ref(v_discrs_2272_);
lean_dec(v_motive_2271_);
lean_dec_ref(v_params_2270_);
lean_del_object(v___x_2250_);
lean_dec(v_us_2194_);
lean_dec(v_declName_2193_);
v_a_2309_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2311_ = v___x_2283_;
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___x_2283_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_a_2309_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
}
v___jp_2317_:
{
lean_object* v_levelParams_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; uint8_t v___x_2324_; 
v_levelParams_2320_ = lean_ctor_get(v_toConstantVal_2252_, 1);
lean_inc(v_levelParams_2320_);
lean_dec_ref(v_toConstantVal_2252_);
v___x_2321_ = l_Array_toSubarray___redArg(v_args_2261_, v_lower_2318_, v_upper_2319_);
v___x_2322_ = l_List_lengthTR___redArg(v_levelParams_2320_);
lean_dec(v_levelParams_2320_);
v___x_2323_ = l_List_lengthTR___redArg(v_us_2194_);
v___x_2324_ = lean_nat_dec_eq(v___x_2322_, v___x_2323_);
lean_dec(v___x_2323_);
lean_dec(v___x_2322_);
if (v___x_2324_ == 0)
{
lean_object* v___x_2325_; 
v___x_2325_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___closed__3));
v___y_2278_ = v___x_2321_;
v___y_2279_ = v___x_2325_;
goto v___jp_2277_;
}
else
{
v___y_2278_ = v___x_2321_;
v___y_2279_ = v___x_2274_;
goto v___jp_2277_;
}
}
}
}
}
else
{
lean_object* v___x_2328_; lean_object* v___x_2330_; 
lean_dec(v_a_2244_);
lean_dec(v_us_2194_);
lean_dec(v_declName_2193_);
lean_dec_ref(v_e_2179_);
v___x_2328_ = lean_box(0);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 0, v___x_2328_);
v___x_2330_ = v___x_2246_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2340_; 
lean_dec(v_us_2194_);
lean_dec(v_declName_2193_);
lean_dec_ref(v_e_2179_);
v_a_2333_ = lean_ctor_get(v___x_2243_, 0);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2335_ = v___x_2243_;
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2243_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2340_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2338_; 
if (v_isShared_2336_ == 0)
{
v___x_2338_ = v___x_2335_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_a_2333_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
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
lean_dec_ref(v___x_2192_);
lean_dec_ref(v_e_2179_);
goto v___jp_2186_;
}
}
v___jp_2186_:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2187_ = lean_box(0);
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2187_);
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0___boxed(lean_object* v_e_2342_, lean_object* v_alsoCasesOn_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
uint8_t v_alsoCasesOn_boxed_2349_; lean_object* v_res_2350_; 
v_alsoCasesOn_boxed_2349_ = lean_unbox(v_alsoCasesOn_2343_);
v_res_2350_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2342_, v_alsoCasesOn_boxed_2349_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
return v_res_2350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object* v_e_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_){
_start:
{
lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2357_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_2358_ = l_Lean_Expr_isAppOf(v_e_2351_, v___x_2357_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_2360_ = l_Lean_Expr_isAppOf(v_e_2351_, v___x_2359_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2361_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_2362_ = l_Lean_Expr_isAppOf(v_e_2351_, v___x_2361_);
if (v___x_2362_ == 0)
{
uint8_t v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = 1;
v___x_2364_ = l_Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0(v_e_2351_, v___x_2363_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_);
if (lean_obj_tag(v___x_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2385_; 
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2367_ = v___x_2364_;
v_isShared_2368_ = v_isSharedCheck_2385_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2364_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2385_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
if (lean_obj_tag(v_a_2365_) == 1)
{
lean_object* v_val_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2380_; 
v_val_2369_ = lean_ctor_get(v_a_2365_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v_a_2365_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2371_ = v_a_2365_;
v_isShared_2372_ = v_isSharedCheck_2380_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_val_2369_);
lean_dec(v_a_2365_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2380_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2373_; lean_object* v___x_2375_; 
v___x_2373_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2373_, 0, v_val_2369_);
if (v_isShared_2372_ == 0)
{
lean_ctor_set(v___x_2371_, 0, v___x_2373_);
v___x_2375_ = v___x_2371_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
lean_object* v___x_2377_; 
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2375_);
v___x_2377_ = v___x_2367_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v___x_2375_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
}
else
{
lean_object* v___x_2381_; lean_object* v___x_2383_; 
lean_dec(v_a_2365_);
v___x_2381_ = lean_box(0);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2381_);
v___x_2383_ = v___x_2367_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
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
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
v_a_2386_ = lean_ctor_get(v___x_2364_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2364_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2364_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
else
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2394_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2394_, 0, v_e_2351_);
v___x_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2394_);
v___x_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
return v___x_2396_;
}
}
else
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2397_, 0, v_e_2351_);
v___x_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2398_, 0, v___x_2397_);
v___x_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2398_);
return v___x_2399_;
}
}
else
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2400_, 0, v_e_2351_);
v___x_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2400_);
v___x_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2401_);
return v___x_2402_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f___boxed(lean_object* v_e_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(v_e_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
lean_dec(v_a_2407_);
lean_dec_ref(v_a_2406_);
lean_dec(v_a_2405_);
lean_dec_ref(v_a_2404_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(lean_object* v_declName_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v___x_2416_; 
v___x_2416_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___redArg(v_declName_2410_, v___y_2414_);
return v___x_2416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2___boxed(lean_object* v_declName_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__2(v_declName_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2424_, lean_object* v_constName_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v___x_2431_; 
v___x_2431_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___redArg(v_constName_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2432_, lean_object* v_constName_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1(v_00_u03b1_2432_, v_constName_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_2440_, lean_object* v_ref_2441_, lean_object* v_constName_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v___x_2448_; 
v___x_2448_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_2441_, v_constName_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_2449_, lean_object* v_ref_2450_, lean_object* v_constName_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_2449_, v_ref_2450_, v_constName_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v_ref_2450_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_2458_, lean_object* v_ref_2459_, lean_object* v_msg_2460_, lean_object* v_declHint_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_2459_, v_msg_2460_, v_declHint_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_2468_, lean_object* v_ref_2469_, lean_object* v_msg_2470_, lean_object* v_declHint_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_2468_, v_ref_2469_, v_msg_2470_, v_declHint_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v_ref_2469_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(lean_object* v_msg_2478_, lean_object* v_declHint_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___redArg(v_msg_2478_, v_declHint_2479_, v___y_2483_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8___boxed(lean_object* v_msg_2486_, lean_object* v_declHint_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__7_spec__8(v_msg_2486_, v_declHint_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(lean_object* v_00_u03b1_2494_, lean_object* v_ref_2495_, lean_object* v_msg_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_){
_start:
{
lean_object* v___x_2502_; 
v___x_2502_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___redArg(v_ref_2495_, v_msg_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8___boxed(lean_object* v_00_u03b1_2503_, lean_object* v_ref_2504_, lean_object* v_msg_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8(v_00_u03b1_2503_, v_ref_2504_, v_msg_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v_ref_2504_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(lean_object* v_00_u03b1_2512_, lean_object* v_msg_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v_msg_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03b1_2520_, lean_object* v_msg_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10(v_00_u03b1_2520_, v_msg_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
return v_res_2527_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__0));
v___x_2530_ = l_Lean_stringToMessageData(v___x_2529_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object* v_idx_2531_, lean_object* v_e_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_){
_start:
{
lean_object* v___y_2539_; lean_object* v___x_2566_; uint8_t v___x_2567_; 
v___x_2566_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__0___closed__1));
v___x_2567_ = l_Lean_Expr_isAppOf(v_e_2532_, v___x_2566_);
if (v___x_2567_ == 0)
{
lean_object* v___x_2568_; uint8_t v___x_2569_; 
v___x_2568_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__6___closed__1));
v___x_2569_ = l_Lean_Expr_isAppOf(v_e_2532_, v___x_2568_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2570_; uint8_t v___x_2571_; 
v___x_2570_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___redArg___lam__14___closed__1));
v___x_2571_ = l_Lean_Expr_isAppOf(v_e_2532_, v___x_2570_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lean_Meta_rwMatcher(v_idx_2531_, v_e_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
return v___x_2572_;
}
else
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v_c_2577_; lean_object* v___x_2578_; 
v___x_2573_ = lean_unsigned_to_nat(1u);
v___x_2574_ = l_Lean_Expr_getAppNumArgs(v_e_2532_);
v___x_2575_ = lean_nat_sub(v___x_2574_, v___x_2573_);
lean_dec(v___x_2574_);
v___x_2576_ = lean_nat_sub(v___x_2575_, v___x_2573_);
lean_dec(v___x_2575_);
v_c_2577_ = l_Lean_Expr_getRevArg_x21(v_e_2532_, v___x_2576_);
v___x_2578_ = l_Lean_Meta_getGuardDecision(v_c_2577_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___y_2581_; lean_object* v_fst_2599_; lean_object* v___x_2600_; uint8_t v___x_2601_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v_fst_2599_ = lean_ctor_get(v_a_2579_, 0);
lean_inc(v_fst_2599_);
lean_dec(v_a_2579_);
v___x_2600_ = lean_unsigned_to_nat(0u);
v___x_2601_ = lean_nat_dec_eq(v_idx_2531_, v___x_2600_);
lean_dec(v_idx_2531_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; 
v___x_2602_ = l_Lean_mkNot(v_fst_2599_);
v___y_2581_ = v___x_2602_;
goto v___jp_2580_;
}
else
{
v___y_2581_ = v_fst_2599_;
goto v___jp_2580_;
}
v___jp_2580_:
{
lean_object* v___x_2582_; 
lean_inc_ref(v___y_2581_);
v___x_2582_ = l_Lean_Meta_findLocalDeclWithType_x3f(v___y_2581_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
if (lean_obj_tag(v_a_2583_) == 1)
{
lean_object* v_val_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_dec_ref(v___y_2581_);
v_val_2584_ = lean_ctor_get(v_a_2583_, 0);
lean_inc(v_val_2584_);
lean_dec_ref_known(v_a_2583_, 1);
v___x_2585_ = l_Lean_mkFVar(v_val_2584_);
v___x_2586_ = l_Lean_Meta_rwIfWith(v___x_2585_, v_e_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
return v___x_2586_;
}
else
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
lean_dec(v_a_2583_);
lean_dec_ref(v_e_2532_);
v___x_2587_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1);
v___x_2588_ = l_Lean_MessageData_ofExpr(v___y_2581_);
v___x_2589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_2589_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
return v___x_2590_;
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_dec_ref(v___y_2581_);
lean_dec_ref(v_e_2532_);
v_a_2591_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2582_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2582_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec_ref(v_e_2532_);
lean_dec(v_idx_2531_);
v_a_2603_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2578_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2578_);
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
}
else
{
goto v___jp_2557_;
}
}
else
{
goto v___jp_2557_;
}
v___jp_2538_:
{
lean_object* v___x_2540_; 
lean_inc_ref(v___y_2539_);
v___x_2540_ = l_Lean_Meta_findLocalDeclWithType_x3f(v___y_2539_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2540_, 1);
if (lean_obj_tag(v_a_2541_) == 1)
{
lean_object* v_val_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
lean_dec_ref(v___y_2539_);
v_val_2542_ = lean_ctor_get(v_a_2541_, 0);
lean_inc(v_val_2542_);
lean_dec_ref_known(v_a_2541_, 1);
v___x_2543_ = l_Lean_mkFVar(v_val_2542_);
v___x_2544_ = l_Lean_Meta_rwIfWith(v___x_2543_, v_e_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
return v___x_2544_;
}
else
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
lean_dec(v_a_2541_);
lean_dec_ref(v_e_2532_);
v___x_2545_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1, &l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1_once, _init_l_Lean_Elab_Tactic_Do_rwIfOrMatcher___closed__1);
v___x_2546_ = l_Lean_MessageData_ofExpr(v___y_2539_);
v___x_2547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2545_);
lean_ctor_set(v___x_2547_, 1, v___x_2546_);
v___x_2548_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00Lean_Elab_Tactic_Do_getSplitInfo_x3f_spec__0_spec__0_spec__1_spec__4_spec__6_spec__8_spec__10___redArg(v___x_2547_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
return v___x_2548_;
}
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
lean_dec_ref(v___y_2539_);
lean_dec_ref(v_e_2532_);
v_a_2549_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2540_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2540_);
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
v___jp_2557_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v_c_2562_; lean_object* v___x_2563_; uint8_t v___x_2564_; 
v___x_2558_ = lean_unsigned_to_nat(1u);
v___x_2559_ = l_Lean_Expr_getAppNumArgs(v_e_2532_);
v___x_2560_ = lean_nat_sub(v___x_2559_, v___x_2558_);
lean_dec(v___x_2559_);
v___x_2561_ = lean_nat_sub(v___x_2560_, v___x_2558_);
lean_dec(v___x_2560_);
v_c_2562_ = l_Lean_Expr_getRevArg_x21(v_e_2532_, v___x_2561_);
v___x_2563_ = lean_unsigned_to_nat(0u);
v___x_2564_ = lean_nat_dec_eq(v_idx_2531_, v___x_2563_);
lean_dec(v_idx_2531_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2565_; 
v___x_2565_ = l_Lean_mkNot(v_c_2562_);
v___y_2539_ = v___x_2565_;
goto v___jp_2538_;
}
else
{
v___y_2539_ = v_c_2562_;
goto v___jp_2538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher___boxed(lean_object* v_idx_2611_, lean_object* v_e_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_){
_start:
{
lean_object* v_res_2618_; 
v_res_2618_ = l_Lean_Elab_Tactic_Do_rwIfOrMatcher(v_idx_2611_, v_e_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_);
lean_dec(v_a_2616_);
lean_dec_ref(v_a_2615_);
lean_dec(v_a_2614_);
lean_dec_ref(v_a_2613_);
return v_res_2618_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default = _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo_default);
l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo = _init_l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_instInhabitedSplitInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Data_Array(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
}
#ifdef __cplusplus
}
#endif
