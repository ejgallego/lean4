// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Congr
// Imports: public import Lean.Meta.Tactic.Simp.Main public import Lean.Meta.Tactic.Congr public import Lean.Elab.Tactic.Conv.Basic
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
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
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
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_mkConvGoalFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_markAsConvGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhsRhsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getCongrSimpKindsForArgZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimpCore_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Meta_getCongrSimpKinds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedParamInfo_default;
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isExplicit(lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Conv"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(5, 180, 41, 36, 18, 201, 24, 192)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "evalSkip"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(179, 156, 141, 182, 43, 233, 45, 238)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(95) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(95) << 1) | 1)),((lean_object*)(((size_t)(88) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__0_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__1_value),((lean_object*)(((size_t)(88) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(95) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(95) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__3_value),((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__4_value),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "'apply implies_congr' unexpected result"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "implies_congr"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__2_value),LEAN_SCALAR_PTR_LITERAL(141, 71, 54, 187, 9, 73, 178, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_isImplies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_isImplies___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Elab.Tactic.Conv.Congr"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "_private.Lean.Elab.Tactic.Conv.Congr.0.Lean.Elab.Tactic.Conv.mkCongrThm"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__0_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "`congr` conv tactic failed to create congruence theorem"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "invalid `"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "` conv tactic, failed to resolve"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\n=\?="};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "` conv tactic failed, equality expected"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Conv_congr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "invalid `congr` conv tactic, application or implication expected"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Elab_Tactic_Conv_evalCongr_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Conv_evalCongr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalCongr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(16, 182, 72, 178, 102, 27, 55, 200)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalCongr"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 20, 53, 193, 93, 21, 59, 83)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(75) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(76) << 1) | 1)),((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__0_value),((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__1_value),((lean_object*)(((size_t)(64) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(75) << 1) | 1)),((lean_object*)(((size_t)(52) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(75) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__3_value),((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__4_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arg 0"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "invalid `arg 0` conv tactic, application expected"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__0(lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Elab.Tactic.Conv.Congr.0.Lean.Elab.Tactic.Conv.mkCongrArgZeroThm"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "` conv tactic failed, cannot select argument"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__3;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalCongr___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "` conv tactic failed to create congruence theorem"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pi_congr"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 59, 165, 47, 128, 36, 68, 242)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_congrArgForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` conv tactic failed, cannot select domain"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congrArgForall___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Conv_congrArgForall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "forall_prop_congr_dom"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_congrArgForall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___closed__2_value),LEAN_SCALAR_PTR_LITERAL(79, 60, 41, 113, 120, 179, 141, 84)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_congrArgForall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Elab.Tactic.Conv.congrArgForall"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgForall___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congrArgForall___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__0(lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` tactic, application has "};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = " explicit argument(s) but the index is out of bounds"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = " argument(s) but the index is out of bounds"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrArgN_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrArgN_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "` conv tactic, index is out of bounds for pi type"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` conv tactic, application or implication expected"};
static const lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_elabArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l_Lean_Elab_Tactic_Conv_elabArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 63, 45, 128, 216, 102, 81, 96)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_elabArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_elabArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Elab_Tactic_Conv_elabArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_elabArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_elabArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "argArg"};
static const lean_object* l_Lean_Elab_Tactic_Conv_elabArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(59, 211, 157, 2, 56, 142, 56, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_elabArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_elabArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_elabArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_elabArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "elabArg"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 95, 76, 95, 147, 62, 85, 157)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalLhs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lhs"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalLhs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalLhs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 125, 121, 151, 86, 248, 18, 33)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "evalLhs"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(36, 180, 193, 203, 66, 121, 65, 51)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(97) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(99) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__0_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__1_value),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(97) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(97) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__3_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__4_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rhs"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 199, 30, 64, 233, 37, 34, 201)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "evalRhs"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(157, 201, 21, 170, 65, 49, 26, 144)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(101) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(103) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__0_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__1_value),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(101) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(101) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__3_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__4_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid `fun` conv tactic, application expected"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 22, 157, 83, 164, 254, 43, 206)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "evalFun"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(221, 184, 52, 9, 127, 172, 81, 46)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(131) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(143) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__0_value),((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__1_value),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(131) << 1) | 1)),((lean_object*)(((size_t)(52) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(131) << 1) | 1)),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__3_value),((lean_object*)(((size_t)(52) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__4_value),((lean_object*)(((size_t)(59) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "failed to go inside let-declaration, type error"};
static const lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "let_body_congr"};
static const lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 115, 150, 132, 106, 100, 45, 219)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "failed to abstract let-expression, result is not type correct"};
static const lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ext"};
static const lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "`apply funext` unexpected result"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "funext"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(226, 251, 226, 140, 5, 134, 146, 130)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_congr"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(213, 145, 235, 56, 9, 236, 160, 253)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "invalid `ext` conv tactic, function or arrow expected"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value_aux_3),((lean_object*)&l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 59, 213, 100, 231, 162, 190, 80)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "evalExt"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(185, 56, 176, 81, 52, 37, 42, 176)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(207) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(213) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__0_value),((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__1_value),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(207) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(207) << 1) | 1)),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__3_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__4_value),((lean_object*)(((size_t)(57) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__0___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "enterArg"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value_aux_3),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(185, 39, 81, 184, 62, 123, 191, 109)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalEnter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalEnter___lam__0___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalEnter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "enter"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 212, 211, 21, 88, 173, 115, 108)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalEnter"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 6, 123, 114, 206, 36, 216, 145)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip___redArg(){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip___redArg___boxed(lean_object* v_a_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Elab_Tactic_Conv_evalSkip___redArg();
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip(lean_object* v_x_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Elab_Tactic_Conv_evalSkip___redArg();
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalSkip___boxed(lean_object* v_x_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Elab_Tactic_Conv_evalSkip(v_x_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_, v_a_25_);
lean_dec(v_a_25_);
lean_dec_ref(v_a_24_);
lean_dec(v_a_23_);
lean_dec_ref(v_a_22_);
lean_dec(v_a_21_);
lean_dec_ref(v_a_20_);
lean_dec(v_a_19_);
lean_dec_ref(v_a_18_);
lean_dec(v_x_17_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1(){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_48_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_49_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__5));
v___x_50_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8));
v___x_51_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalSkip___boxed), 10, 0);
v___x_52_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_48_, v___x_49_, v___x_50_, v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___boxed(lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1();
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3(){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__8));
v___x_82_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___closed__6));
v___x_83_ = l_Lean_addBuiltinDeclarationRanges(v___x_81_, v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3___boxed(lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3();
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0_spec__0(lean_object* v_msgData_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v_env_93_; uint8_t v___x_94_; lean_object* v_env_95_; lean_object* v___x_96_; lean_object* v_toCold_97_; lean_object* v_mctx_98_; lean_object* v_lctx_99_; lean_object* v_options_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_92_ = lean_st_ref_get(v___y_90_);
v_env_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc_ref(v_env_93_);
lean_dec(v___x_92_);
v___x_94_ = 0;
v_env_95_ = l_Lean_Environment_setRecordingDeps(v_env_93_, v___x_94_);
v___x_96_ = lean_st_ref_get(v___y_88_);
v_toCold_97_ = lean_ctor_get(v___y_89_, 0);
v_mctx_98_ = lean_ctor_get(v___x_96_, 0);
lean_inc_ref(v_mctx_98_);
lean_dec(v___x_96_);
v_lctx_99_ = lean_ctor_get(v___y_87_, 2);
v_options_100_ = lean_ctor_get(v_toCold_97_, 2);
lean_inc_ref(v_options_100_);
lean_inc_ref(v_lctx_99_);
v___x_101_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_101_, 0, v_env_95_);
lean_ctor_set(v___x_101_, 1, v_mctx_98_);
lean_ctor_set(v___x_101_, 2, v_lctx_99_);
lean_ctor_set(v___x_101_, 3, v_options_100_);
v___x_102_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v_msgData_86_);
v___x_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0_spec__0___boxed(lean_object* v_msgData_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0_spec__0(v_msgData_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
lean_dec(v___y_108_);
lean_dec_ref(v___y_107_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(lean_object* v_msg_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_ref_117_; lean_object* v___x_118_; lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_127_; 
v_ref_117_ = lean_ctor_get(v___y_114_, 2);
v___x_118_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0_spec__0(v_msg_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
v_a_119_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_127_ == 0)
{
v___x_121_ = v___x_118_;
v_isShared_122_ = v_isSharedCheck_127_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_127_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
lean_inc(v_ref_117_);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v_ref_117_);
lean_ctor_set(v___x_123_, 1, v_a_119_);
if (v_isShared_122_ == 0)
{
lean_ctor_set_tag(v___x_121_, 1);
lean_ctor_set(v___x_121_, 0, v___x_123_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg___boxed(lean_object* v_msg_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v_msg_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
return v_res_134_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__1(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__0));
v___x_137_ = l_Lean_stringToMessageData(v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies(lean_object* v_mvarId_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___y_152_; lean_object* v___y_153_; lean_object* v___y_154_; lean_object* v___y_155_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__3));
v___x_159_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v___x_158_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v___x_159_, 1);
v___x_161_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__4));
v___x_162_ = lean_box(0);
v___x_163_ = l_Lean_MVarId_apply(v_mvarId_145_, v_a_160_, v___x_161_, v___x_162_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_a_164_);
lean_dec_ref_known(v___x_163_, 1);
if (lean_obj_tag(v_a_164_) == 1)
{
lean_object* v_tail_165_; 
v_tail_165_ = lean_ctor_get(v_a_164_, 1);
lean_inc(v_tail_165_);
if (lean_obj_tag(v_tail_165_) == 1)
{
lean_object* v_tail_166_; 
v_tail_166_ = lean_ctor_get(v_tail_165_, 1);
lean_inc(v_tail_166_);
if (lean_obj_tag(v_tail_166_) == 1)
{
lean_object* v_tail_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_212_; 
v_tail_167_ = lean_ctor_get(v_tail_166_, 1);
v_isSharedCheck_212_ = !lean_is_exclusive(v_tail_166_);
if (v_isSharedCheck_212_ == 0)
{
lean_object* v_unused_213_; 
v_unused_213_ = lean_ctor_get(v_tail_166_, 0);
lean_dec(v_unused_213_);
v___x_169_ = v_tail_166_;
v_isShared_170_ = v_isSharedCheck_212_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_tail_167_);
lean_dec(v_tail_166_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_212_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
if (lean_obj_tag(v_tail_167_) == 1)
{
lean_object* v_tail_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_210_; 
v_tail_171_ = lean_ctor_get(v_tail_167_, 1);
v_isSharedCheck_210_ = !lean_is_exclusive(v_tail_167_);
if (v_isSharedCheck_210_ == 0)
{
lean_object* v_unused_211_; 
v_unused_211_ = lean_ctor_get(v_tail_167_, 0);
lean_dec(v_unused_211_);
v___x_173_ = v_tail_167_;
v_isShared_174_ = v_isSharedCheck_210_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_tail_171_);
lean_dec(v_tail_167_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_210_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
if (lean_obj_tag(v_tail_171_) == 0)
{
lean_object* v_head_175_; lean_object* v_head_176_; lean_object* v___x_177_; 
v_head_175_ = lean_ctor_get(v_a_164_, 0);
lean_inc(v_head_175_);
lean_dec_ref_known(v_a_164_, 2);
v_head_176_ = lean_ctor_get(v_tail_165_, 0);
lean_inc(v_head_176_);
lean_dec_ref_known(v_tail_165_, 2);
v___x_177_ = l_Lean_Elab_Tactic_Conv_markAsConvGoal(v_head_175_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_179_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref_known(v___x_177_, 1);
v___x_179_ = l_Lean_Elab_Tactic_Conv_markAsConvGoal(v_head_176_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_193_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_193_ == 0)
{
v___x_182_ = v___x_179_;
v_isShared_183_ = v_isSharedCheck_193_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_179_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_193_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 0, v_a_180_);
v___x_185_ = v___x_173_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_180_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_tail_171_);
v___x_185_ = v_reuseFailAlloc_192_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_187_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 1, v___x_185_);
lean_ctor_set(v___x_169_, 0, v_a_178_);
v___x_187_ = v___x_169_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_178_);
lean_ctor_set(v_reuseFailAlloc_191_, 1, v___x_185_);
v___x_187_ = v_reuseFailAlloc_191_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_187_);
v___x_189_ = v___x_182_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
lean_dec(v_a_178_);
lean_del_object(v___x_173_);
lean_del_object(v___x_169_);
v_a_194_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_179_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_179_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_194_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
lean_dec(v_head_176_);
lean_del_object(v___x_173_);
lean_del_object(v___x_169_);
v_a_202_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_177_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_177_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
else
{
lean_del_object(v___x_173_);
lean_dec(v_tail_171_);
lean_del_object(v___x_169_);
lean_dec_ref_known(v_tail_165_, 2);
lean_dec_ref_known(v_a_164_, 2);
v___y_152_ = v_a_146_;
v___y_153_ = v_a_147_;
v___y_154_ = v_a_148_;
v___y_155_ = v_a_149_;
goto v___jp_151_;
}
}
}
else
{
lean_del_object(v___x_169_);
lean_dec(v_tail_167_);
lean_dec_ref_known(v_tail_165_, 2);
lean_dec_ref_known(v_a_164_, 2);
v___y_152_ = v_a_146_;
v___y_153_ = v_a_147_;
v___y_154_ = v_a_148_;
v___y_155_ = v_a_149_;
goto v___jp_151_;
}
}
}
else
{
lean_dec_ref_known(v_tail_165_, 2);
lean_dec(v_tail_166_);
lean_dec_ref_known(v_a_164_, 2);
v___y_152_ = v_a_146_;
v___y_153_ = v_a_147_;
v___y_154_ = v_a_148_;
v___y_155_ = v_a_149_;
goto v___jp_151_;
}
}
else
{
lean_dec(v_tail_165_);
lean_dec_ref_known(v_a_164_, 2);
v___y_152_ = v_a_146_;
v___y_153_ = v_a_147_;
v___y_154_ = v_a_148_;
v___y_155_ = v_a_149_;
goto v___jp_151_;
}
}
else
{
lean_dec(v_a_164_);
v___y_152_ = v_a_146_;
v___y_153_ = v_a_147_;
v___y_154_ = v_a_148_;
v___y_155_ = v_a_149_;
goto v___jp_151_;
}
}
else
{
return v___x_163_;
}
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_dec(v_mvarId_145_);
v_a_214_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_159_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_159_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
v___jp_151_:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__1, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__1);
v___x_157_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_156_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___boxed(lean_object* v_mvarId_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies(v_mvarId_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0(lean_object* v_00_u03b1_229_, lean_object* v_msg_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v_msg_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___boxed(lean_object* v_00_u03b1_237_, lean_object* v_msg_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0(v_00_u03b1_237_, v_msg_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_isImplies(lean_object* v_e_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
uint8_t v___x_251_; 
v___x_251_ = l_Lean_Expr_isArrow(v_e_245_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_box(v___x_251_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = l_Lean_Expr_bindingDomain_x21(v_e_245_);
v___x_255_ = l_Lean_Meta_isProp(v___x_254_, v_a_246_, v_a_247_, v_a_248_, v_a_249_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; uint8_t v___x_257_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v___x_257_ = lean_unbox(v_a_256_);
if (v___x_257_ == 0)
{
return v___x_255_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; 
lean_dec_ref_known(v___x_255_, 1);
v___x_258_ = l_Lean_Expr_bindingBody_x21(v_e_245_);
v___x_259_ = l_Lean_Meta_isProp(v___x_258_, v_a_246_, v_a_247_, v_a_248_, v_a_249_);
return v___x_259_;
}
}
else
{
return v___x_255_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_isImplies___boxed(lean_object* v_e_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_isImplies(v_e_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_);
lean_dec(v_a_264_);
lean_dec_ref(v_a_263_);
lean_dec(v_a_262_);
lean_dec_ref(v_a_261_);
lean_dec_ref(v_e_260_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1(lean_object* v_msg_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v___f_274_; lean_object* v___x_8767__overap_275_; lean_object* v___x_276_; 
v___f_274_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1___closed__0));
v___x_8767__overap_275_ = lean_panic_fn_borrowed(v___f_274_, v_msg_268_);
lean_inc(v___y_272_);
lean_inc_ref(v___y_271_);
lean_inc(v___y_270_);
lean_inc_ref(v___y_269_);
v___x_276_ = lean_apply_5(v___x_8767__overap_275_, v___y_269_, v___y_270_, v___y_271_, v___y_272_, lean_box(0));
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1___boxed(lean_object* v_msg_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1(v_msg_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__1(lean_object* v___x_284_, lean_object* v_fst_285_, lean_object* v_fst_286_, lean_object* v_fst_287_, lean_object* v_snd_288_, lean_object* v_tag_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v___x_295_; 
lean_inc_ref(v___x_284_);
v___x_295_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v___x_284_, v_tag_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_320_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_320_ == 0)
{
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_320_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_320_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v_fst_300_; lean_object* v_snd_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_319_; 
v_fst_300_ = lean_ctor_get(v_a_296_, 0);
v_snd_301_ = lean_ctor_get(v_a_296_, 1);
v_isSharedCheck_319_ = !lean_is_exclusive(v_a_296_);
if (v_isSharedCheck_319_ == 0)
{
v___x_303_ = v_a_296_;
v_isShared_304_ = v_isSharedCheck_319_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_snd_301_);
lean_inc(v_fst_300_);
lean_dec(v_a_296_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_319_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_311_; 
lean_inc(v_fst_300_);
v___x_305_ = l_Lean_Expr_app___override(v_fst_285_, v_fst_300_);
lean_inc(v_snd_301_);
v___x_306_ = l_Lean_mkApp3(v_fst_286_, v___x_284_, v_fst_300_, v_snd_301_);
v___x_307_ = l_Lean_Expr_mvarId_x21(v_snd_301_);
lean_dec(v_snd_301_);
v___x_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
v___x_309_ = lean_array_push(v_fst_287_, v___x_308_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 1, v_snd_288_);
lean_ctor_set(v___x_303_, 0, v___x_309_);
v___x_311_ = v___x_303_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v_snd_288_);
v___x_311_ = v_reuseFailAlloc_318_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_306_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_305_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v___x_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_314_, 0, v___x_313_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v___x_314_);
v___x_316_ = v___x_298_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_dec(v_snd_288_);
lean_dec(v_fst_287_);
lean_dec(v_fst_286_);
lean_dec(v_fst_285_);
lean_dec_ref(v___x_284_);
v_a_321_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_295_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_295_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__1___boxed(lean_object* v___x_329_, lean_object* v_fst_330_, lean_object* v_fst_331_, lean_object* v_fst_332_, lean_object* v_snd_333_, lean_object* v_tag_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__1(v___x_329_, v_fst_330_, v_fst_331_, v_fst_332_, v_snd_333_, v_tag_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
return v_res_340_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_344_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__2));
v___x_345_ = lean_unsigned_to_nat(30u);
v___x_346_ = lean_unsigned_to_nat(68u);
v___x_347_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__1));
v___x_348_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__0));
v___x_349_ = l_mkPanicMessageWithDecl(v___x_348_, v___x_347_, v___x_346_, v___x_345_, v___x_344_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0(lean_object* v_fst_350_, lean_object* v_snd_351_, lean_object* v_fst_352_, lean_object* v_fst_353_, lean_object* v_00___354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__3);
v___x_361_ = l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1(v___x_360_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_372_; 
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; 
v_unused_373_ = lean_ctor_get(v___x_361_, 0);
lean_dec(v_unused_373_);
v___x_363_ = v___x_361_;
v_isShared_364_ = v_isSharedCheck_372_;
goto v_resetjp_362_;
}
else
{
lean_dec(v___x_361_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_372_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v_fst_350_);
lean_ctor_set(v___x_365_, 1, v_snd_351_);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v_fst_352_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_367_, 0, v_fst_353_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_368_);
v___x_370_ = v___x_363_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_368_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
else
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
lean_dec(v_fst_353_);
lean_dec(v_fst_352_);
lean_dec(v_snd_351_);
lean_dec(v_fst_350_);
v_a_374_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_361_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_361_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___boxed(lean_object* v_fst_382_, lean_object* v_snd_383_, lean_object* v_fst_384_, lean_object* v_fst_385_, lean_object* v_00___386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0(v_fst_382_, v_snd_383_, v_fst_384_, v_fst_385_, v_00___386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg(lean_object* v_upperBound_393_, lean_object* v_args_394_, uint8_t v_nameSubgoals_395_, lean_object* v_origTag_396_, lean_object* v_a_397_, lean_object* v___x_398_, uint8_t v_addImplicitArgs_399_, lean_object* v_a_400_, lean_object* v_b_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_a_408_; lean_object* v___y_413_; uint8_t v___x_432_; 
v___x_432_ = lean_nat_dec_lt(v_a_400_, v_upperBound_393_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v_b_401_);
return v___x_433_;
}
else
{
lean_object* v_snd_434_; lean_object* v_snd_435_; lean_object* v_fst_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_577_; 
v_snd_434_ = lean_ctor_get(v_b_401_, 1);
lean_inc(v_snd_434_);
v_snd_435_ = lean_ctor_get(v_snd_434_, 1);
lean_inc(v_snd_435_);
v_fst_436_ = lean_ctor_get(v_b_401_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_b_401_);
if (v_isSharedCheck_577_ == 0)
{
lean_object* v_unused_578_; 
v_unused_578_ = lean_ctor_get(v_b_401_, 1);
lean_dec(v_unused_578_);
v___x_438_ = v_b_401_;
v_isShared_439_ = v_isSharedCheck_577_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_fst_436_);
lean_dec(v_b_401_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_577_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v_fst_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_575_; 
v_fst_440_ = lean_ctor_get(v_snd_434_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v_snd_434_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; 
v_unused_576_ = lean_ctor_get(v_snd_434_, 1);
lean_dec(v_unused_576_);
v___x_442_ = v_snd_434_;
v_isShared_443_ = v_isSharedCheck_575_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_fst_440_);
lean_dec(v_snd_434_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_575_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v_fst_444_; lean_object* v_snd_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_574_; 
v_fst_444_ = lean_ctor_get(v_snd_435_, 0);
v_snd_445_ = lean_ctor_get(v_snd_435_, 1);
v_isSharedCheck_574_ = !lean_is_exclusive(v_snd_435_);
if (v_isSharedCheck_574_ == 0)
{
v___x_447_ = v_snd_435_;
v_isShared_448_ = v_isSharedCheck_574_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_snd_445_);
lean_inc(v_fst_444_);
lean_dec(v_snd_435_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_574_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v_paramInfo_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v_paramInfo_449_ = lean_ctor_get(v_a_397_, 0);
v___x_450_ = l_Lean_instInhabitedExpr;
v___x_451_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_452_ = lean_array_get_borrowed(v___x_450_, v_args_394_, v_a_400_);
v___x_453_ = lean_array_get_borrowed(v___x_451_, v_paramInfo_449_, v_a_400_);
v___x_454_ = lean_array_fget_borrowed(v___x_398_, v_a_400_);
v___x_455_ = lean_unbox(v___x_454_);
switch(v___x_455_)
{
case 1:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_del_object(v___x_447_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
v___x_456_ = lean_box(0);
v___x_457_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0(v_fst_444_, v_snd_445_, v_fst_440_, v_fst_436_, v___x_456_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
v___y_413_ = v___x_457_;
goto v___jp_412_;
}
case 2:
{
if (v_addImplicitArgs_399_ == 0)
{
uint8_t v___x_483_; 
v___x_483_ = l_Lean_Meta_ParamInfo_isExplicit(v___x_453_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; lean_object* v___x_485_; 
lean_inc_n(v___x_452_, 2);
v___x_484_ = l_Lean_Expr_app___override(v_fst_436_, v___x_452_);
v___x_485_ = l_Lean_Meta_mkEqRefl(v___x_452_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_485_, 1);
lean_inc_n(v___x_452_, 2);
v___x_487_ = l_Lean_mkApp3(v_fst_440_, v___x_452_, v___x_452_, v_a_486_);
if (v_isShared_448_ == 0)
{
v___x_489_ = v___x_447_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_fst_444_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_snd_445_);
v___x_489_ = v_reuseFailAlloc_496_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_491_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 1, v___x_489_);
lean_ctor_set(v___x_442_, 0, v___x_487_);
v___x_491_ = v___x_442_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v___x_489_);
v___x_491_ = v_reuseFailAlloc_495_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_493_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_491_);
lean_ctor_set(v___x_438_, 0, v___x_484_);
v___x_493_ = v___x_438_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v___x_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_a_408_ = v___x_493_;
goto v___jp_407_;
}
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec_ref(v___x_484_);
lean_del_object(v___x_447_);
lean_dec(v_snd_445_);
lean_dec(v_fst_444_);
lean_del_object(v___x_442_);
lean_dec(v_fst_440_);
lean_del_object(v___x_438_);
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_497_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_485_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_485_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
else
{
lean_del_object(v___x_447_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_458_;
}
}
else
{
lean_del_object(v___x_447_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
goto v___jp_458_;
}
v___jp_458_:
{
if (v_nameSubgoals_395_ == 0)
{
lean_object* v___x_459_; 
lean_inc(v_origTag_396_);
lean_inc(v___x_452_);
v___x_459_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__1(v___x_452_, v_fst_436_, v_fst_440_, v_fst_444_, v_snd_445_, v_origTag_396_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
v___y_413_ = v___x_459_;
goto v___jp_412_;
}
else
{
lean_object* v___x_460_; 
lean_inc(v___y_405_);
lean_inc_ref(v___y_404_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
lean_inc(v_fst_440_);
v___x_460_ = lean_infer_type(v_fst_440_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_462_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
lean_inc(v___y_405_);
lean_inc_ref(v___y_404_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
v___x_462_ = lean_whnf(v_a_461_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref_known(v___x_462_, 1);
v___x_464_ = l_Lean_Expr_bindingName_x21(v_a_463_);
lean_dec(v_a_463_);
lean_inc(v_origTag_396_);
v___x_465_ = l_Lean_Meta_appendTag(v_origTag_396_, v___x_464_);
lean_dec(v___x_464_);
lean_inc(v___x_452_);
v___x_466_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__1(v___x_452_, v_fst_436_, v_fst_440_, v_fst_444_, v_snd_445_, v___x_465_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
v___y_413_ = v___x_466_;
goto v___jp_412_;
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
lean_dec(v_snd_445_);
lean_dec(v_fst_444_);
lean_dec(v_fst_440_);
lean_dec(v_fst_436_);
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_467_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_462_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_462_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_snd_445_);
lean_dec(v_fst_444_);
lean_dec(v_fst_440_);
lean_dec(v_fst_436_);
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_475_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_460_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_460_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
}
case 4:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
lean_del_object(v___x_447_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
v___x_505_ = lean_box(0);
v___x_506_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0(v_fst_444_, v_snd_445_, v_fst_440_, v_fst_436_, v___x_505_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
v___y_413_ = v___x_506_;
goto v___jp_412_;
}
case 5:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
lean_inc(v___x_452_);
v___x_507_ = l_Lean_Expr_app___override(v_fst_440_, v___x_452_);
lean_inc(v___y_405_);
lean_inc_ref(v___y_404_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
lean_inc_ref(v___x_507_);
v___x_508_ = lean_infer_type(v___x_507_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_510_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref_known(v___x_508_, 1);
lean_inc(v___y_405_);
lean_inc_ref(v___y_404_);
lean_inc(v___y_403_);
lean_inc_ref(v___y_402_);
v___x_510_ = lean_whnf(v_a_509_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_object* v_a_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_510_, 1);
v___x_512_ = l_Lean_Expr_bindingDomain_x21(v_a_511_);
lean_dec(v_a_511_);
v___x_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
v___x_514_ = 0;
v___x_515_ = lean_box(0);
v___x_516_ = l_Lean_Meta_mkFreshExprMVar(v___x_513_, v___x_514_, v___x_515_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc_n(v_a_517_, 3);
lean_dec_ref_known(v___x_516_, 1);
v___x_518_ = l_Lean_Expr_app___override(v_fst_436_, v_a_517_);
v___x_519_ = l_Lean_Expr_app___override(v___x_507_, v_a_517_);
v___x_520_ = l_Lean_Expr_mvarId_x21(v_a_517_);
lean_dec(v_a_517_);
v___x_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
v___x_522_ = lean_array_push(v_snd_445_, v___x_521_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v___x_522_);
v___x_524_ = v___x_447_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_fst_444_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v___x_522_);
v___x_524_ = v_reuseFailAlloc_531_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_526_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 1, v___x_524_);
lean_ctor_set(v___x_442_, 0, v___x_519_);
v___x_526_ = v___x_442_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v___x_524_);
v___x_526_ = v_reuseFailAlloc_530_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
lean_object* v___x_528_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_526_);
lean_ctor_set(v___x_438_, 0, v___x_518_);
v___x_528_ = v___x_438_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
v_a_408_ = v___x_528_;
goto v___jp_407_;
}
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec_ref(v___x_507_);
lean_del_object(v___x_447_);
lean_dec(v_snd_445_);
lean_dec(v_fst_444_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
lean_dec(v_fst_436_);
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_532_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_516_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_516_);
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
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec_ref(v___x_507_);
lean_del_object(v___x_447_);
lean_dec(v_snd_445_);
lean_dec(v_fst_444_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
lean_dec(v_fst_436_);
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_540_ = lean_ctor_get(v___x_510_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_510_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_510_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec_ref(v___x_507_);
lean_del_object(v___x_447_);
lean_dec(v_snd_445_);
lean_dec(v_fst_444_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
lean_dec(v_fst_436_);
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_548_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_508_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_508_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
default: 
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_inc_n(v___x_452_, 2);
v___x_556_ = l_Lean_Expr_app___override(v_fst_436_, v___x_452_);
v___x_557_ = l_Lean_Expr_app___override(v_fst_440_, v___x_452_);
if (v_addImplicitArgs_399_ == 0)
{
uint8_t v___x_570_; 
v___x_570_ = l_Lean_Meta_ParamInfo_isExplicit(v___x_453_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
lean_del_object(v___x_447_);
lean_del_object(v___x_442_);
lean_del_object(v___x_438_);
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v_fst_444_);
lean_ctor_set(v___x_571_, 1, v_snd_445_);
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_557_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_556_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v_a_408_ = v___x_573_;
goto v___jp_407_;
}
else
{
goto v___jp_558_;
}
}
else
{
goto v___jp_558_;
}
v___jp_558_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_559_ = lean_box(0);
v___x_560_ = lean_array_push(v_fst_444_, v___x_559_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_560_);
v___x_562_ = v___x_447_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v_snd_445_);
v___x_562_ = v_reuseFailAlloc_569_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_564_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 1, v___x_562_);
lean_ctor_set(v___x_442_, 0, v___x_557_);
v___x_564_ = v___x_442_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v___x_562_);
v___x_564_ = v_reuseFailAlloc_568_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
lean_object* v___x_566_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_564_);
lean_ctor_set(v___x_438_, 0, v___x_556_);
v___x_566_ = v___x_438_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_556_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v___x_564_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
v_a_408_ = v___x_566_;
goto v___jp_407_;
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
v___jp_407_:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = lean_nat_add(v_a_400_, v___x_409_);
lean_dec(v_a_400_);
v_a_400_ = v___x_410_;
v_b_401_ = v_a_408_;
goto _start;
}
v___jp_412_:
{
if (lean_obj_tag(v___y_413_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_423_; 
v_a_414_ = lean_ctor_get(v___y_413_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___y_413_);
if (v_isSharedCheck_423_ == 0)
{
v___x_416_ = v___y_413_;
v_isShared_417_ = v_isSharedCheck_423_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___y_413_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_423_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
if (lean_obj_tag(v_a_414_) == 0)
{
lean_object* v_a_418_; lean_object* v___x_420_; 
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_418_ = lean_ctor_get(v_a_414_, 0);
lean_inc(v_a_418_);
lean_dec_ref_known(v_a_414_, 1);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v_a_418_);
v___x_420_ = v___x_416_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_418_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
else
{
lean_object* v_a_422_; 
lean_del_object(v___x_416_);
v_a_422_ = lean_ctor_get(v_a_414_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v_a_414_, 1);
v_a_408_ = v_a_422_;
goto v___jp_407_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
lean_dec(v_a_400_);
lean_dec(v_origTag_396_);
v_a_424_ = lean_ctor_get(v___y_413_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___y_413_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___y_413_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___y_413_);
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
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___boxed(lean_object* v_upperBound_579_, lean_object* v_args_580_, lean_object* v_nameSubgoals_581_, lean_object* v_origTag_582_, lean_object* v_a_583_, lean_object* v___x_584_, lean_object* v_addImplicitArgs_585_, lean_object* v_a_586_, lean_object* v_b_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
uint8_t v_nameSubgoals_boxed_593_; uint8_t v_addImplicitArgs_boxed_594_; lean_object* v_res_595_; 
v_nameSubgoals_boxed_593_ = lean_unbox(v_nameSubgoals_581_);
v_addImplicitArgs_boxed_594_ = lean_unbox(v_addImplicitArgs_585_);
v_res_595_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg(v_upperBound_579_, v_args_580_, v_nameSubgoals_boxed_593_, v_origTag_582_, v_a_583_, v___x_584_, v_addImplicitArgs_boxed_594_, v_a_586_, v_b_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec_ref(v___x_584_);
lean_dec_ref(v_a_583_);
lean_dec_ref(v_args_580_);
lean_dec(v_upperBound_579_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg(lean_object* v_a_596_, lean_object* v_b_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_array_603_; lean_object* v_start_604_; lean_object* v_stop_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_620_; 
v_array_603_ = lean_ctor_get(v_a_596_, 0);
v_start_604_ = lean_ctor_get(v_a_596_, 1);
v_stop_605_ = lean_ctor_get(v_a_596_, 2);
v_isSharedCheck_620_ = !lean_is_exclusive(v_a_596_);
if (v_isSharedCheck_620_ == 0)
{
v___x_607_ = v_a_596_;
v_isShared_608_ = v_isSharedCheck_620_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_stop_605_);
lean_inc(v_start_604_);
lean_inc(v_array_603_);
lean_dec(v_a_596_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_620_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
uint8_t v___x_609_; 
v___x_609_ = lean_nat_dec_lt(v_start_604_, v_stop_605_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
lean_del_object(v___x_607_);
lean_dec(v_stop_605_);
lean_dec(v_start_604_);
lean_dec_ref(v_array_603_);
v___x_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_610_, 0, v_b_597_);
return v___x_610_;
}
else
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_611_ = lean_unsigned_to_nat(1u);
v___x_612_ = lean_nat_add(v_start_604_, v___x_611_);
lean_inc_ref(v_array_603_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 1, v___x_612_);
v___x_614_ = v___x_607_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_array_603_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_stop_605_);
v___x_614_ = v_reuseFailAlloc_619_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = lean_array_fget(v_array_603_, v_start_604_);
lean_dec(v_start_604_);
lean_dec_ref(v_array_603_);
v___x_616_ = l_Lean_Meta_mkCongrFun(v_b_597_, v___x_615_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
if (lean_obj_tag(v___x_616_) == 0)
{
lean_object* v_a_617_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc(v_a_617_);
lean_dec_ref_known(v___x_616_, 1);
v_a_596_ = v___x_614_;
v_b_597_ = v_a_617_;
goto _start;
}
else
{
lean_dec_ref(v___x_614_);
return v___x_616_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg___boxed(lean_object* v_a_621_, lean_object* v_b_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg(v_a_621_, v_b_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
return v_res_628_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__2));
v___x_635_ = l_Lean_stringToMessageData(v___x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm(lean_object* v_origTag_636_, lean_object* v_f_637_, lean_object* v_args_638_, uint8_t v_addImplicitArgs_639_, uint8_t v_nameSubgoals_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_proof_647_; lean_object* v_mvarIdsNew_648_; lean_object* v_mvarIdsNewInsts_649_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_array_get_size(v_args_638_);
lean_inc_ref(v_f_637_);
v___x_654_ = l_Lean_Meta_getFunInfoNArgs(v_f_637_, v___x_653_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_656_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_a_655_);
lean_dec_ref_known(v___x_654_, 1);
lean_inc_ref(v_f_637_);
v___x_656_ = l_Lean_Meta_getCongrSimpKinds(v_f_637_, v_a_655_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; uint8_t v___x_658_; lean_object* v___x_659_; 
v_a_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_657_);
lean_dec_ref_known(v___x_656_, 1);
v___x_658_ = 0;
lean_inc(v_a_655_);
lean_inc_ref(v_f_637_);
v___x_659_ = l_Lean_Meta_mkCongrSimpCore_x3f(v_f_637_, v_a_655_, v_a_657_, v___x_658_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v___x_659_, 1);
if (lean_obj_tag(v_a_660_) == 1)
{
lean_object* v_val_661_; lean_object* v_proof_662_; lean_object* v_argKinds_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_val_661_ = lean_ctor_get(v_a_660_, 0);
lean_inc(v_val_661_);
lean_dec_ref_known(v_a_660_, 1);
v_proof_662_ = lean_ctor_get(v_val_661_, 1);
lean_inc_ref(v_proof_662_);
v_argKinds_663_ = lean_ctor_get(v_val_661_, 2);
lean_inc_ref(v_argKinds_663_);
lean_dec(v_val_661_);
v___x_664_ = lean_unsigned_to_nat(0u);
v___x_665_ = lean_array_get_size(v_argKinds_663_);
v___x_666_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__1));
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v_proof_662_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v_f_637_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
lean_inc(v_origTag_636_);
v___x_669_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg(v___x_665_, v_args_638_, v_nameSubgoals_640_, v_origTag_636_, v_a_655_, v_argKinds_663_, v_addImplicitArgs_639_, v___x_664_, v___x_668_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
lean_dec_ref(v_argKinds_663_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v_snd_671_; lean_object* v_snd_672_; lean_object* v_fst_673_; lean_object* v_fst_674_; lean_object* v_fst_675_; lean_object* v_snd_676_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v_lower_682_; lean_object* v_upper_683_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_718_; uint8_t v___x_721_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v_snd_671_ = lean_ctor_get(v_a_670_, 1);
lean_inc(v_snd_671_);
v_snd_672_ = lean_ctor_get(v_snd_671_, 1);
lean_inc(v_snd_672_);
v_fst_673_ = lean_ctor_get(v_a_670_, 0);
lean_inc(v_fst_673_);
lean_dec(v_a_670_);
v_fst_674_ = lean_ctor_get(v_snd_671_, 0);
lean_inc(v_fst_674_);
lean_dec(v_snd_671_);
v_fst_675_ = lean_ctor_get(v_snd_672_, 0);
lean_inc(v_fst_675_);
v_snd_676_ = lean_ctor_get(v_snd_672_, 1);
lean_inc(v_snd_676_);
lean_dec(v_snd_672_);
v___x_721_ = lean_nat_dec_lt(v___x_665_, v___x_653_);
if (v___x_721_ == 0)
{
lean_dec(v_fst_673_);
lean_dec(v_a_655_);
lean_dec_ref(v_args_638_);
lean_dec(v_origTag_636_);
v_proof_647_ = v_fst_674_;
v_mvarIdsNew_648_ = v_fst_675_;
v_mvarIdsNewInsts_649_ = v_snd_676_;
goto v___jp_646_;
}
else
{
uint8_t v___x_722_; 
v___x_722_ = lean_nat_dec_eq(v___x_665_, v___x_664_);
if (v___x_722_ == 0)
{
v___y_715_ = v_a_641_;
v___y_716_ = v_a_642_;
v___y_717_ = v_a_643_;
v___y_718_ = v_a_644_;
goto v___jp_714_;
}
else
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3);
v___x_724_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_723_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_dec_ref_known(v___x_724_, 1);
v___y_715_ = v_a_641_;
v___y_716_ = v_a_642_;
v___y_717_ = v_a_643_;
v___y_718_ = v_a_644_;
goto v___jp_714_;
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
lean_dec(v_snd_676_);
lean_dec(v_fst_675_);
lean_dec(v_fst_674_);
lean_dec(v_fst_673_);
lean_dec(v_a_655_);
lean_dec_ref(v_args_638_);
lean_dec(v_origTag_636_);
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
v___jp_677_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = l_Array_toSubarray___redArg(v_args_638_, v_lower_682_, v_upper_683_);
lean_inc_ref(v___x_684_);
v___x_685_ = l_Subarray_copy___redArg(v___x_684_);
v___x_686_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm(v_origTag_636_, v_fst_673_, v___x_685_, v_addImplicitArgs_639_, v_nameSubgoals_640_, v___y_680_, v___y_678_, v___y_681_, v___y_679_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v_snd_688_; lean_object* v_fst_689_; lean_object* v_fst_690_; lean_object* v_snd_691_; lean_object* v___x_692_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v_snd_688_ = lean_ctor_get(v_a_687_, 1);
lean_inc(v_snd_688_);
v_fst_689_ = lean_ctor_get(v_a_687_, 0);
lean_inc(v_fst_689_);
lean_dec(v_a_687_);
v_fst_690_ = lean_ctor_get(v_snd_688_, 0);
lean_inc(v_fst_690_);
v_snd_691_ = lean_ctor_get(v_snd_688_, 1);
lean_inc(v_snd_691_);
lean_dec(v_snd_688_);
v___x_692_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg(v___x_684_, v_fst_674_, v___y_680_, v___y_678_, v___y_681_, v___y_679_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_694_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_a_693_);
lean_dec_ref_known(v___x_692_, 1);
v___x_694_ = l_Lean_Meta_mkEqTrans(v_a_693_, v_fst_689_, v___y_680_, v___y_678_, v___y_681_, v___y_679_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = l_Array_append___redArg(v_fst_675_, v_fst_690_);
lean_dec(v_fst_690_);
v___x_697_ = l_Array_append___redArg(v_snd_676_, v_snd_691_);
lean_dec(v_snd_691_);
v_proof_647_ = v_a_695_;
v_mvarIdsNew_648_ = v___x_696_;
v_mvarIdsNewInsts_649_ = v___x_697_;
goto v___jp_646_;
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec(v_snd_691_);
lean_dec(v_fst_690_);
lean_dec(v_snd_676_);
lean_dec(v_fst_675_);
v_a_698_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_694_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_694_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
else
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_713_; 
lean_dec(v_snd_691_);
lean_dec(v_fst_690_);
lean_dec(v_fst_689_);
lean_dec(v_snd_676_);
lean_dec(v_fst_675_);
v_a_706_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_713_ == 0)
{
v___x_708_ = v___x_692_;
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_692_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_713_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_711_; 
if (v_isShared_709_ == 0)
{
v___x_711_ = v___x_708_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v_a_706_);
v___x_711_ = v_reuseFailAlloc_712_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
return v___x_711_;
}
}
}
}
else
{
lean_dec_ref(v___x_684_);
lean_dec(v_snd_676_);
lean_dec(v_fst_675_);
lean_dec(v_fst_674_);
return v___x_686_;
}
}
v___jp_714_:
{
lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_719_ = l_Lean_Meta_FunInfo_getArity(v_a_655_);
lean_dec(v_a_655_);
v___x_720_ = lean_nat_dec_le(v___x_719_, v___x_664_);
if (v___x_720_ == 0)
{
v___y_678_ = v___y_716_;
v___y_679_ = v___y_718_;
v___y_680_ = v___y_715_;
v___y_681_ = v___y_717_;
v_lower_682_ = v___x_719_;
v_upper_683_ = v___x_653_;
goto v___jp_677_;
}
else
{
lean_dec(v___x_719_);
v___y_678_ = v___y_716_;
v___y_679_ = v___y_718_;
v___y_680_ = v___y_715_;
v___y_681_ = v___y_717_;
v_lower_682_ = v___x_664_;
v_upper_683_ = v___x_653_;
goto v___jp_677_;
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec(v_a_655_);
lean_dec_ref(v_args_638_);
lean_dec(v_origTag_636_);
v_a_733_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_669_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_669_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec(v_a_660_);
lean_dec(v_a_655_);
lean_dec_ref(v_args_638_);
lean_dec_ref(v_f_637_);
lean_dec(v_origTag_636_);
v___x_741_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___closed__3);
v___x_742_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_741_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
return v___x_742_;
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_a_655_);
lean_dec_ref(v_args_638_);
lean_dec_ref(v_f_637_);
lean_dec(v_origTag_636_);
v_a_743_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_659_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_659_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec(v_a_655_);
lean_dec_ref(v_args_638_);
lean_dec_ref(v_f_637_);
lean_dec(v_origTag_636_);
v_a_751_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_656_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_656_);
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
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
lean_dec_ref(v_args_638_);
lean_dec_ref(v_f_637_);
lean_dec(v_origTag_636_);
v_a_759_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_654_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_654_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
v___jp_646_:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v_mvarIdsNew_648_);
lean_ctor_set(v___x_650_, 1, v_mvarIdsNewInsts_649_);
v___x_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_651_, 0, v_proof_647_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm___boxed(lean_object* v_origTag_767_, lean_object* v_f_768_, lean_object* v_args_769_, lean_object* v_addImplicitArgs_770_, lean_object* v_nameSubgoals_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
uint8_t v_addImplicitArgs_boxed_777_; uint8_t v_nameSubgoals_boxed_778_; lean_object* v_res_779_; 
v_addImplicitArgs_boxed_777_ = lean_unbox(v_addImplicitArgs_770_);
v_nameSubgoals_boxed_778_ = lean_unbox(v_nameSubgoals_771_);
v_res_779_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm(v_origTag_767_, v_f_768_, v_args_769_, v_addImplicitArgs_boxed_777_, v_nameSubgoals_boxed_778_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0(lean_object* v_inst_780_, lean_object* v_R_781_, lean_object* v_a_782_, lean_object* v_b_783_, lean_object* v_c_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg(v_a_782_, v_b_783_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___boxed(lean_object* v_inst_791_, lean_object* v_R_792_, lean_object* v_a_793_, lean_object* v_b_794_, lean_object* v_c_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0(v_inst_791_, v_R_792_, v_a_793_, v_b_794_, v_c_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2(lean_object* v_upperBound_802_, lean_object* v_args_803_, uint8_t v_nameSubgoals_804_, lean_object* v_origTag_805_, lean_object* v_a_806_, lean_object* v___x_807_, uint8_t v_addImplicitArgs_808_, lean_object* v_inst_809_, lean_object* v_R_810_, lean_object* v_a_811_, lean_object* v_b_812_, lean_object* v_c_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v___x_819_; 
v___x_819_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg(v_upperBound_802_, v_args_803_, v_nameSubgoals_804_, v_origTag_805_, v_a_806_, v___x_807_, v_addImplicitArgs_808_, v_a_811_, v_b_812_, v___y_814_, v___y_815_, v___y_816_, v___y_817_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___boxed(lean_object** _args){
lean_object* v_upperBound_820_ = _args[0];
lean_object* v_args_821_ = _args[1];
lean_object* v_nameSubgoals_822_ = _args[2];
lean_object* v_origTag_823_ = _args[3];
lean_object* v_a_824_ = _args[4];
lean_object* v___x_825_ = _args[5];
lean_object* v_addImplicitArgs_826_ = _args[6];
lean_object* v_inst_827_ = _args[7];
lean_object* v_R_828_ = _args[8];
lean_object* v_a_829_ = _args[9];
lean_object* v_b_830_ = _args[10];
lean_object* v_c_831_ = _args[11];
lean_object* v___y_832_ = _args[12];
lean_object* v___y_833_ = _args[13];
lean_object* v___y_834_ = _args[14];
lean_object* v___y_835_ = _args[15];
lean_object* v___y_836_ = _args[16];
_start:
{
uint8_t v_nameSubgoals_boxed_837_; uint8_t v_addImplicitArgs_boxed_838_; lean_object* v_res_839_; 
v_nameSubgoals_boxed_837_ = lean_unbox(v_nameSubgoals_822_);
v_addImplicitArgs_boxed_838_ = lean_unbox(v_addImplicitArgs_826_);
v_res_839_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2(v_upperBound_820_, v_args_821_, v_nameSubgoals_boxed_837_, v_origTag_823_, v_a_824_, v___x_825_, v_addImplicitArgs_boxed_838_, v_inst_827_, v_R_828_, v_a_829_, v_b_830_, v_c_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v___x_825_);
lean_dec_ref(v_a_824_);
lean_dec_ref(v_args_821_);
lean_dec(v_upperBound_820_);
return v_res_839_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__0));
v___x_842_ = l_Lean_stringToMessageData(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__3(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__2));
v___x_845_ = l_Lean_stringToMessageData(v___x_844_);
return v___x_845_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__5(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__4));
v___x_848_ = l_Lean_stringToMessageData(v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(lean_object* v_tacticName_849_, lean_object* v_rhs_850_, lean_object* v_rhs_x27_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
lean_object* v___x_857_; 
lean_inc_ref(v_rhs_x27_851_);
lean_inc_ref(v_rhs_850_);
v___x_857_ = l_Lean_Meta_isExprDefEqGuarded(v_rhs_850_, v_rhs_x27_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_879_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_879_ == 0)
{
v___x_860_ = v___x_857_;
v_isShared_861_ = v_isSharedCheck_879_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_879_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
uint8_t v___x_862_; 
v___x_862_ = lean_unbox(v_a_858_);
lean_dec(v_a_858_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_del_object(v___x_860_);
v___x_863_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1);
v___x_864_ = l_Lean_stringToMessageData(v_tacticName_849_);
v___x_865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__3);
v___x_867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_865_);
lean_ctor_set(v___x_867_, 1, v___x_866_);
v___x_868_ = l_Lean_indentExpr(v_rhs_850_);
v___x_869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_869_, 0, v___x_867_);
lean_ctor_set(v___x_869_, 1, v___x_868_);
v___x_870_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__5, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__5_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__5);
v___x_871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_869_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = l_Lean_indentExpr(v_rhs_x27_851_);
v___x_873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_873_, v_a_852_, v_a_853_, v_a_854_, v_a_855_);
return v___x_874_;
}
else
{
lean_object* v___x_875_; lean_object* v___x_877_; 
lean_dec_ref(v_rhs_x27_851_);
lean_dec_ref(v_rhs_850_);
lean_dec_ref(v_tacticName_849_);
v___x_875_ = lean_box(0);
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 0, v___x_875_);
v___x_877_ = v___x_860_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec_ref(v_rhs_x27_851_);
lean_dec_ref(v_rhs_850_);
lean_dec_ref(v_tacticName_849_);
v_a_880_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_857_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_857_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___boxed(lean_object* v_tacticName_888_, lean_object* v_rhs_889_, lean_object* v_rhs_x27_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(v_tacticName_888_, v_rhs_889_, v_rhs_x27_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_);
lean_dec(v_a_894_);
lean_dec_ref(v_a_893_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
return v_res_896_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__2));
v___x_902_ = l_Lean_stringToMessageData(v___x_901_);
return v___x_902_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__5(void){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__4));
v___x_905_ = l_Lean_stringToMessageData(v___x_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof(lean_object* v_tacticName_906_, lean_object* v_rhs_907_, lean_object* v_proof_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
lean_object* v___x_914_; 
lean_inc(v_a_912_);
lean_inc_ref(v_a_911_);
lean_inc(v_a_910_);
lean_inc_ref(v_a_909_);
v___x_914_ = lean_infer_type(v_proof_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_916_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
lean_inc(v_a_912_);
lean_inc_ref(v_a_911_);
lean_inc(v_a_910_);
lean_inc_ref(v_a_909_);
v___x_916_ = lean_whnf(v_a_915_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_917_);
lean_dec_ref_known(v___x_916_, 1);
v___x_918_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__1));
v___x_919_ = lean_unsigned_to_nat(3u);
v___x_920_ = l_Lean_Expr_isAppOfArity(v_a_917_, v___x_918_, v___x_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec(v_a_917_);
lean_dec_ref(v_rhs_907_);
v___x_921_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3);
v___x_922_ = l_Lean_stringToMessageData(v_tacticName_906_);
v___x_923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__5, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__5_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__5);
v___x_925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_923_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_925_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
return v___x_926_;
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = l_Lean_Expr_appArg_x21(v_a_917_);
lean_dec(v_a_917_);
v___x_928_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(v_tacticName_906_, v_rhs_907_, v___x_927_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
return v___x_928_;
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec_ref(v_rhs_907_);
lean_dec_ref(v_tacticName_906_);
v_a_929_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_916_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_916_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec_ref(v_rhs_907_);
lean_dec_ref(v_tacticName_906_);
v_a_937_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_914_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_914_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___boxed(lean_object* v_tacticName_945_, lean_object* v_rhs_946_, lean_object* v_proof_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof(v_tacticName_945_, v_rhs_946_, v_proof_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
lean_dec_ref(v_a_948_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(lean_object* v_e_954_, lean_object* v___y_955_){
_start:
{
uint8_t v___x_957_; 
v___x_957_ = l_Lean_Expr_hasMVar(v_e_954_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
v___x_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_958_, 0, v_e_954_);
return v___x_958_;
}
else
{
lean_object* v___x_959_; lean_object* v_mctx_960_; lean_object* v___x_961_; lean_object* v_fst_962_; lean_object* v_snd_963_; lean_object* v___x_964_; lean_object* v_cache_965_; lean_object* v_zetaDeltaFVarIds_966_; lean_object* v_postponed_967_; lean_object* v_diag_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_977_; 
v___x_959_ = lean_st_ref_get(v___y_955_);
v_mctx_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc_ref(v_mctx_960_);
lean_dec(v___x_959_);
v___x_961_ = l_Lean_instantiateMVarsCore(v_mctx_960_, v_e_954_);
v_fst_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_fst_962_);
v_snd_963_ = lean_ctor_get(v___x_961_, 1);
lean_inc(v_snd_963_);
lean_dec_ref(v___x_961_);
v___x_964_ = lean_st_ref_take(v___y_955_);
v_cache_965_ = lean_ctor_get(v___x_964_, 1);
v_zetaDeltaFVarIds_966_ = lean_ctor_get(v___x_964_, 2);
v_postponed_967_ = lean_ctor_get(v___x_964_, 3);
v_diag_968_ = lean_ctor_get(v___x_964_, 4);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_977_ == 0)
{
lean_object* v_unused_978_; 
v_unused_978_ = lean_ctor_get(v___x_964_, 0);
lean_dec(v_unused_978_);
v___x_970_ = v___x_964_;
v_isShared_971_ = v_isSharedCheck_977_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_diag_968_);
lean_inc(v_postponed_967_);
lean_inc(v_zetaDeltaFVarIds_966_);
lean_inc(v_cache_965_);
lean_dec(v___x_964_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_977_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 0, v_snd_963_);
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_snd_963_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_cache_965_);
lean_ctor_set(v_reuseFailAlloc_976_, 2, v_zetaDeltaFVarIds_966_);
lean_ctor_set(v_reuseFailAlloc_976_, 3, v_postponed_967_);
lean_ctor_set(v_reuseFailAlloc_976_, 4, v_diag_968_);
v___x_973_ = v_reuseFailAlloc_976_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = lean_st_ref_put(v___y_955_, v___x_973_);
v___x_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_975_, 0, v_fst_962_);
return v___x_975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg___boxed(lean_object* v_e_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(v_e_979_, v___y_980_);
lean_dec(v___y_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0(lean_object* v_e_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(v_e_983_, v___y_985_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___boxed(lean_object* v_e_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0(v_e_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(lean_object* v_mvarId_997_, lean_object* v_x_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_997_, v_x_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1007_ = v___x_1004_;
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_1004_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_1005_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
v_a_1013_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1004_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1004_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg___boxed(lean_object* v_mvarId_1021_, lean_object* v_x_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(v_mvarId_1021_, v_x_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3(lean_object* v_00_u03b1_1029_, lean_object* v_mvarId_1030_, lean_object* v_x_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(v_mvarId_1030_, v_x_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___boxed(lean_object* v_00_u03b1_1038_, lean_object* v_mvarId_1039_, lean_object* v_x_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3(v_00_u03b1_1038_, v_mvarId_1039_, v_x_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Conv_congr_spec__2(lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
if (lean_obj_tag(v_a_1047_) == 0)
{
lean_object* v___x_1049_; 
v___x_1049_ = l_List_reverse___redArg(v_a_1048_);
return v___x_1049_;
}
else
{
lean_object* v_head_1050_; lean_object* v_tail_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1060_; 
v_head_1050_ = lean_ctor_get(v_a_1047_, 0);
v_tail_1051_ = lean_ctor_get(v_a_1047_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_a_1047_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1053_ = v_a_1047_;
v_isShared_1054_ = v_isSharedCheck_1060_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_tail_1051_);
lean_inc(v_head_1050_);
lean_dec(v_a_1047_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1060_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
v___x_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1055_, 0, v_head_1050_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 1, v_a_1048_);
lean_ctor_set(v___x_1053_, 0, v___x_1055_);
v___x_1057_ = v___x_1053_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1055_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v_a_1048_);
v___x_1057_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
v_a_1047_ = v_tail_1051_;
v_a_1048_ = v___x_1057_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5_spec__6___redArg(lean_object* v_x_1061_, lean_object* v_x_1062_, lean_object* v_x_1063_, lean_object* v_x_1064_){
_start:
{
lean_object* v_ks_1065_; lean_object* v_vs_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1090_; 
v_ks_1065_ = lean_ctor_get(v_x_1061_, 0);
v_vs_1066_ = lean_ctor_get(v_x_1061_, 1);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_x_1061_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1068_ = v_x_1061_;
v_isShared_1069_ = v_isSharedCheck_1090_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_vs_1066_);
lean_inc(v_ks_1065_);
lean_dec(v_x_1061_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1090_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; uint8_t v___x_1071_; 
v___x_1070_ = lean_array_get_size(v_ks_1065_);
v___x_1071_ = lean_nat_dec_lt(v_x_1062_, v___x_1070_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
lean_dec(v_x_1062_);
v___x_1072_ = lean_array_push(v_ks_1065_, v_x_1063_);
v___x_1073_ = lean_array_push(v_vs_1066_, v_x_1064_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 1, v___x_1073_);
lean_ctor_set(v___x_1068_, 0, v___x_1072_);
v___x_1075_ = v___x_1068_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
else
{
lean_object* v_k_x27_1077_; uint8_t v___x_1078_; 
v_k_x27_1077_ = lean_array_fget_borrowed(v_ks_1065_, v_x_1062_);
v___x_1078_ = l_Lean_instBEqMVarId_beq(v_x_1063_, v_k_x27_1077_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1080_; 
if (v_isShared_1069_ == 0)
{
v___x_1080_ = v___x_1068_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_ks_1065_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_vs_1066_);
v___x_1080_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_unsigned_to_nat(1u);
v___x_1082_ = lean_nat_add(v_x_1062_, v___x_1081_);
lean_dec(v_x_1062_);
v_x_1061_ = v___x_1080_;
v_x_1062_ = v___x_1082_;
goto _start;
}
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1085_ = lean_array_fset(v_ks_1065_, v_x_1062_, v_x_1063_);
v___x_1086_ = lean_array_fset(v_vs_1066_, v_x_1062_, v_x_1064_);
lean_dec(v_x_1062_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 1, v___x_1086_);
lean_ctor_set(v___x_1068_, 0, v___x_1085_);
v___x_1088_ = v___x_1068_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1085_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5___redArg(lean_object* v_n_1091_, lean_object* v_k_1092_, lean_object* v_v_1093_){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = lean_unsigned_to_nat(0u);
v___x_1095_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5_spec__6___redArg(v_n_1091_, v___x_1094_, v_k_1092_, v_v_1093_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg(lean_object* v_x_1097_, size_t v_x_1098_, size_t v_x_1099_, lean_object* v_x_1100_, lean_object* v_x_1101_){
_start:
{
if (lean_obj_tag(v_x_1097_) == 0)
{
lean_object* v_es_1102_; size_t v___x_1103_; size_t v___x_1104_; lean_object* v_j_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v_es_1102_ = lean_ctor_get(v_x_1097_, 0);
v___x_1103_ = ((size_t)31ULL);
v___x_1104_ = lean_usize_land(v_x_1098_, v___x_1103_);
v_j_1105_ = lean_usize_to_nat(v___x_1104_);
v___x_1106_ = lean_array_get_size(v_es_1102_);
v___x_1107_ = lean_nat_dec_lt(v_j_1105_, v___x_1106_);
if (v___x_1107_ == 0)
{
lean_dec(v_j_1105_);
lean_dec(v_x_1101_);
lean_dec(v_x_1100_);
return v_x_1097_;
}
else
{
lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1146_; 
lean_inc_ref(v_es_1102_);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_x_1097_);
if (v_isSharedCheck_1146_ == 0)
{
lean_object* v_unused_1147_; 
v_unused_1147_ = lean_ctor_get(v_x_1097_, 0);
lean_dec(v_unused_1147_);
v___x_1109_ = v_x_1097_;
v_isShared_1110_ = v_isSharedCheck_1146_;
goto v_resetjp_1108_;
}
else
{
lean_dec(v_x_1097_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1146_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v_v_1111_; lean_object* v___x_1112_; lean_object* v_xs_x27_1113_; lean_object* v___y_1115_; 
v_v_1111_ = lean_array_fget(v_es_1102_, v_j_1105_);
v___x_1112_ = lean_box(0);
v_xs_x27_1113_ = lean_array_fset(v_es_1102_, v_j_1105_, v___x_1112_);
switch(lean_obj_tag(v_v_1111_))
{
case 0:
{
lean_object* v_key_1120_; lean_object* v_val_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1131_; 
v_key_1120_ = lean_ctor_get(v_v_1111_, 0);
v_val_1121_ = lean_ctor_get(v_v_1111_, 1);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_v_1111_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1123_ = v_v_1111_;
v_isShared_1124_ = v_isSharedCheck_1131_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_val_1121_);
lean_inc(v_key_1120_);
lean_dec(v_v_1111_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1131_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
uint8_t v___x_1125_; 
v___x_1125_ = l_Lean_instBEqMVarId_beq(v_x_1100_, v_key_1120_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
lean_del_object(v___x_1123_);
v___x_1126_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1120_, v_val_1121_, v_x_1100_, v_x_1101_);
v___x_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
v___y_1115_ = v___x_1127_;
goto v___jp_1114_;
}
else
{
lean_object* v___x_1129_; 
lean_dec(v_val_1121_);
lean_dec(v_key_1120_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 1, v_x_1101_);
lean_ctor_set(v___x_1123_, 0, v_x_1100_);
v___x_1129_ = v___x_1123_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_x_1100_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_x_1101_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
v___y_1115_ = v___x_1129_;
goto v___jp_1114_;
}
}
}
}
case 1:
{
lean_object* v_node_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1144_; 
v_node_1132_ = lean_ctor_get(v_v_1111_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_v_1111_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1134_ = v_v_1111_;
v_isShared_1135_ = v_isSharedCheck_1144_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_node_1132_);
lean_dec(v_v_1111_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1144_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
size_t v___x_1136_; size_t v___x_1137_; size_t v___x_1138_; size_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1136_ = ((size_t)5ULL);
v___x_1137_ = lean_usize_shift_right(v_x_1098_, v___x_1136_);
v___x_1138_ = ((size_t)1ULL);
v___x_1139_ = lean_usize_add(v_x_1099_, v___x_1138_);
v___x_1140_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg(v_node_1132_, v___x_1137_, v___x_1139_, v_x_1100_, v_x_1101_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v___x_1140_);
v___x_1142_ = v___x_1134_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
v___y_1115_ = v___x_1142_;
goto v___jp_1114_;
}
}
}
default: 
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_x_1100_);
lean_ctor_set(v___x_1145_, 1, v_x_1101_);
v___y_1115_ = v___x_1145_;
goto v___jp_1114_;
}
}
v___jp_1114_:
{
lean_object* v___x_1116_; lean_object* v___x_1118_; 
v___x_1116_ = lean_array_fset(v_xs_x27_1113_, v_j_1105_, v___y_1115_);
lean_dec(v_j_1105_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 0, v___x_1116_);
v___x_1118_ = v___x_1109_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
}
else
{
lean_object* v_ks_1148_; lean_object* v_vs_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1167_; 
v_ks_1148_ = lean_ctor_get(v_x_1097_, 0);
v_vs_1149_ = lean_ctor_get(v_x_1097_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_x_1097_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1151_ = v_x_1097_;
v_isShared_1152_ = v_isSharedCheck_1167_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_vs_1149_);
lean_inc(v_ks_1148_);
lean_dec(v_x_1097_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1167_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_ks_1148_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_vs_1149_);
v___x_1154_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
lean_object* v_newNode_1155_; size_t v___x_1156_; uint8_t v___x_1157_; 
v_newNode_1155_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5___redArg(v___x_1154_, v_x_1100_, v_x_1101_);
v___x_1156_ = ((size_t)7ULL);
v___x_1157_ = lean_usize_dec_le(v___x_1156_, v_x_1099_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1158_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1155_);
v___x_1159_ = lean_unsigned_to_nat(4u);
v___x_1160_ = lean_nat_dec_lt(v___x_1158_, v___x_1159_);
lean_dec(v___x_1158_);
if (v___x_1160_ == 0)
{
lean_object* v_ks_1161_; lean_object* v_vs_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v_ks_1161_ = lean_ctor_get(v_newNode_1155_, 0);
lean_inc_ref(v_ks_1161_);
v_vs_1162_ = lean_ctor_get(v_newNode_1155_, 1);
lean_inc_ref(v_vs_1162_);
lean_dec_ref(v_newNode_1155_);
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1165_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___redArg(v_x_1099_, v_ks_1161_, v_vs_1162_, v___x_1163_, v___x_1164_);
lean_dec_ref(v_vs_1162_);
lean_dec_ref(v_ks_1161_);
return v___x_1165_;
}
else
{
return v_newNode_1155_;
}
}
else
{
return v_newNode_1155_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___redArg(size_t v_depth_1168_, lean_object* v_keys_1169_, lean_object* v_vals_1170_, lean_object* v_i_1171_, lean_object* v_entries_1172_){
_start:
{
lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1173_ = lean_array_get_size(v_keys_1169_);
v___x_1174_ = lean_nat_dec_lt(v_i_1171_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_dec(v_i_1171_);
return v_entries_1172_;
}
else
{
lean_object* v_k_1175_; lean_object* v_v_1176_; uint64_t v___x_1177_; size_t v_h_1178_; size_t v___x_1179_; lean_object* v___x_1180_; size_t v___x_1181_; size_t v___x_1182_; size_t v___x_1183_; size_t v_h_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v_k_1175_ = lean_array_fget_borrowed(v_keys_1169_, v_i_1171_);
v_v_1176_ = lean_array_fget_borrowed(v_vals_1170_, v_i_1171_);
v___x_1177_ = l_Lean_instHashableMVarId_hash(v_k_1175_);
v_h_1178_ = lean_uint64_to_usize(v___x_1177_);
v___x_1179_ = ((size_t)5ULL);
v___x_1180_ = lean_unsigned_to_nat(1u);
v___x_1181_ = ((size_t)1ULL);
v___x_1182_ = lean_usize_sub(v_depth_1168_, v___x_1181_);
v___x_1183_ = lean_usize_mul(v___x_1179_, v___x_1182_);
v_h_1184_ = lean_usize_shift_right(v_h_1178_, v___x_1183_);
v___x_1185_ = lean_nat_add(v_i_1171_, v___x_1180_);
lean_dec(v_i_1171_);
lean_inc(v_v_1176_);
lean_inc(v_k_1175_);
v___x_1186_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg(v_entries_1172_, v_h_1184_, v_depth_1168_, v_k_1175_, v_v_1176_);
v_i_1171_ = v___x_1185_;
v_entries_1172_ = v___x_1186_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_depth_1188_, lean_object* v_keys_1189_, lean_object* v_vals_1190_, lean_object* v_i_1191_, lean_object* v_entries_1192_){
_start:
{
size_t v_depth_boxed_1193_; lean_object* v_res_1194_; 
v_depth_boxed_1193_ = lean_unbox_usize(v_depth_1188_);
lean_dec(v_depth_1188_);
v_res_1194_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___redArg(v_depth_boxed_1193_, v_keys_1189_, v_vals_1190_, v_i_1191_, v_entries_1192_);
lean_dec_ref(v_vals_1190_);
lean_dec_ref(v_keys_1189_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_1195_, lean_object* v_x_1196_, lean_object* v_x_1197_, lean_object* v_x_1198_, lean_object* v_x_1199_){
_start:
{
size_t v_x_2869__boxed_1200_; size_t v_x_2870__boxed_1201_; lean_object* v_res_1202_; 
v_x_2869__boxed_1200_ = lean_unbox_usize(v_x_1196_);
lean_dec(v_x_1196_);
v_x_2870__boxed_1201_ = lean_unbox_usize(v_x_1197_);
lean_dec(v_x_1197_);
v_res_1202_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg(v_x_1195_, v_x_2869__boxed_1200_, v_x_2870__boxed_1201_, v_x_1198_, v_x_1199_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1___redArg(lean_object* v_x_1203_, lean_object* v_x_1204_, lean_object* v_x_1205_){
_start:
{
uint64_t v___x_1206_; size_t v___x_1207_; size_t v___x_1208_; lean_object* v___x_1209_; 
v___x_1206_ = l_Lean_instHashableMVarId_hash(v_x_1204_);
v___x_1207_ = lean_uint64_to_usize(v___x_1206_);
v___x_1208_ = ((size_t)1ULL);
v___x_1209_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg(v_x_1203_, v___x_1207_, v___x_1208_, v_x_1204_, v_x_1205_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(lean_object* v_mvarId_1210_, lean_object* v_val_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v___x_1214_; lean_object* v_mctx_1215_; lean_object* v_cache_1216_; lean_object* v_zetaDeltaFVarIds_1217_; lean_object* v_postponed_1218_; lean_object* v_diag_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1248_; 
v___x_1214_ = lean_st_ref_take(v___y_1212_);
v_mctx_1215_ = lean_ctor_get(v___x_1214_, 0);
v_cache_1216_ = lean_ctor_get(v___x_1214_, 1);
v_zetaDeltaFVarIds_1217_ = lean_ctor_get(v___x_1214_, 2);
v_postponed_1218_ = lean_ctor_get(v___x_1214_, 3);
v_diag_1219_ = lean_ctor_get(v___x_1214_, 4);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1221_ = v___x_1214_;
v_isShared_1222_ = v_isSharedCheck_1248_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_diag_1219_);
lean_inc(v_postponed_1218_);
lean_inc(v_zetaDeltaFVarIds_1217_);
lean_inc(v_cache_1216_);
lean_inc(v_mctx_1215_);
lean_dec(v___x_1214_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1248_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v_depth_1223_; lean_object* v_levelAssignDepth_1224_; lean_object* v_lmvarCounter_1225_; lean_object* v_mvarCounter_1226_; lean_object* v_lDecls_1227_; lean_object* v_decls_1228_; lean_object* v_userNames_1229_; lean_object* v_lAssignment_1230_; lean_object* v_eAssignment_1231_; lean_object* v_dAssignment_1232_; lean_object* v_instanceTypedMVars_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1247_; 
v_depth_1223_ = lean_ctor_get(v_mctx_1215_, 0);
v_levelAssignDepth_1224_ = lean_ctor_get(v_mctx_1215_, 1);
v_lmvarCounter_1225_ = lean_ctor_get(v_mctx_1215_, 2);
v_mvarCounter_1226_ = lean_ctor_get(v_mctx_1215_, 3);
v_lDecls_1227_ = lean_ctor_get(v_mctx_1215_, 4);
v_decls_1228_ = lean_ctor_get(v_mctx_1215_, 5);
v_userNames_1229_ = lean_ctor_get(v_mctx_1215_, 6);
v_lAssignment_1230_ = lean_ctor_get(v_mctx_1215_, 7);
v_eAssignment_1231_ = lean_ctor_get(v_mctx_1215_, 8);
v_dAssignment_1232_ = lean_ctor_get(v_mctx_1215_, 9);
v_instanceTypedMVars_1233_ = lean_ctor_get(v_mctx_1215_, 10);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_mctx_1215_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1235_ = v_mctx_1215_;
v_isShared_1236_ = v_isSharedCheck_1247_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_instanceTypedMVars_1233_);
lean_inc(v_dAssignment_1232_);
lean_inc(v_eAssignment_1231_);
lean_inc(v_lAssignment_1230_);
lean_inc(v_userNames_1229_);
lean_inc(v_decls_1228_);
lean_inc(v_lDecls_1227_);
lean_inc(v_mvarCounter_1226_);
lean_inc(v_lmvarCounter_1225_);
lean_inc(v_levelAssignDepth_1224_);
lean_inc(v_depth_1223_);
lean_dec(v_mctx_1215_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1247_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1240_; 
v___x_1237_ = lean_box(0);
v___x_1238_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1___redArg(v_eAssignment_1231_, v_mvarId_1210_, v_val_1211_);
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 8, v___x_1238_);
v___x_1240_ = v___x_1235_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_depth_1223_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v_levelAssignDepth_1224_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v_lmvarCounter_1225_);
lean_ctor_set(v_reuseFailAlloc_1246_, 3, v_mvarCounter_1226_);
lean_ctor_set(v_reuseFailAlloc_1246_, 4, v_lDecls_1227_);
lean_ctor_set(v_reuseFailAlloc_1246_, 5, v_decls_1228_);
lean_ctor_set(v_reuseFailAlloc_1246_, 6, v_userNames_1229_);
lean_ctor_set(v_reuseFailAlloc_1246_, 7, v_lAssignment_1230_);
lean_ctor_set(v_reuseFailAlloc_1246_, 8, v___x_1238_);
lean_ctor_set(v_reuseFailAlloc_1246_, 9, v_dAssignment_1232_);
lean_ctor_set(v_reuseFailAlloc_1246_, 10, v_instanceTypedMVars_1233_);
v___x_1240_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1242_; 
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 0, v___x_1240_);
v___x_1242_ = v___x_1221_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v_cache_1216_);
lean_ctor_set(v_reuseFailAlloc_1245_, 2, v_zetaDeltaFVarIds_1217_);
lean_ctor_set(v_reuseFailAlloc_1245_, 3, v_postponed_1218_);
lean_ctor_set(v_reuseFailAlloc_1245_, 4, v_diag_1219_);
v___x_1242_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = lean_st_ref_put(v___y_1212_, v___x_1242_);
v___x_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1237_);
return v___x_1244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg___boxed(lean_object* v_mvarId_1249_, lean_object* v_val_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_1249_, v_val_1250_, v___y_1251_);
lean_dec(v___y_1251_);
return v_res_1253_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__0));
v___x_1256_ = l_Lean_stringToMessageData(v___x_1255_);
return v___x_1256_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1257_; lean_object* v_dummy_1258_; 
v___x_1257_ = lean_box(0);
v_dummy_1258_ = l_Lean_Expr_sort___override(v___x_1257_);
return v_dummy_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0(lean_object* v_mvarId_1260_, uint8_t v_addImplicitArgs_1261_, uint8_t v_nameSubgoals_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v___x_1268_; 
lean_inc(v_mvarId_1260_);
v___x_1268_ = l_Lean_MVarId_getTag(v_mvarId_1260_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1270_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v___x_1268_, 1);
lean_inc(v_mvarId_1260_);
v___x_1270_ = l_Lean_Elab_Tactic_Conv_getLhsRhsCore(v_mvarId_1260_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v_a_1271_; lean_object* v_fst_1272_; lean_object* v_snd_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1360_; 
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_a_1271_);
lean_dec_ref_known(v___x_1270_, 1);
v_fst_1272_ = lean_ctor_get(v_a_1271_, 0);
v_snd_1273_ = lean_ctor_get(v_a_1271_, 1);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_a_1271_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1275_ = v_a_1271_;
v_isShared_1276_ = v_isSharedCheck_1360_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_snd_1273_);
lean_inc(v_fst_1272_);
lean_dec(v_a_1271_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1360_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1277_; lean_object* v_a_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1277_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(v_fst_1272_, v___y_1264_);
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref(v___x_1277_);
v___x_1279_ = l_Lean_Expr_cleanupAnnotations(v_a_1278_);
lean_dec(v_a_1278_);
v___x_1280_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_isImplies(v___x_1279_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; uint8_t v___x_1282_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1280_, 1);
v___x_1282_ = lean_unbox(v_a_1281_);
lean_dec(v_a_1281_);
if (v___x_1282_ == 0)
{
uint8_t v___x_1283_; 
v___x_1283_ = l_Lean_Expr_isApp(v___x_1279_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1287_; 
lean_dec(v_snd_1273_);
lean_dec(v_a_1269_);
lean_dec(v_mvarId_1260_);
v___x_1284_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__1);
v___x_1285_ = l_Lean_indentExpr(v___x_1279_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set_tag(v___x_1275_, 7);
lean_ctor_set(v___x_1275_, 1, v___x_1285_);
lean_ctor_set(v___x_1275_, 0, v___x_1284_);
v___x_1287_ = v___x_1275_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1284_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v___x_1285_);
v___x_1287_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_1287_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
return v___x_1288_;
}
}
else
{
lean_object* v___x_1290_; lean_object* v_dummy_1291_; lean_object* v_nargs_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
lean_del_object(v___x_1275_);
v___x_1290_ = l_Lean_Expr_getAppFn(v___x_1279_);
v_dummy_1291_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2, &l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2);
v_nargs_1292_ = l_Lean_Expr_getAppNumArgs(v___x_1279_);
lean_inc(v_nargs_1292_);
v___x_1293_ = lean_mk_array(v_nargs_1292_, v_dummy_1291_);
v___x_1294_ = lean_unsigned_to_nat(1u);
v___x_1295_ = lean_nat_sub(v_nargs_1292_, v___x_1294_);
lean_dec(v_nargs_1292_);
v___x_1296_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1279_, v___x_1293_, v___x_1295_);
v___x_1297_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm(v_a_1269_, v___x_1290_, v___x_1296_, v_addImplicitArgs_1261_, v_nameSubgoals_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
if (lean_obj_tag(v___x_1297_) == 0)
{
lean_object* v_a_1298_; lean_object* v_snd_1299_; lean_object* v_fst_1300_; lean_object* v_fst_1301_; lean_object* v_snd_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v_a_1298_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_a_1298_);
lean_dec_ref_known(v___x_1297_, 1);
v_snd_1299_ = lean_ctor_get(v_a_1298_, 1);
lean_inc(v_snd_1299_);
v_fst_1300_ = lean_ctor_get(v_a_1298_, 0);
lean_inc_n(v_fst_1300_, 2);
lean_dec(v_a_1298_);
v_fst_1301_ = lean_ctor_get(v_snd_1299_, 0);
lean_inc(v_fst_1301_);
v_snd_1302_ = lean_ctor_get(v_snd_1299_, 1);
lean_inc(v_snd_1302_);
lean_dec(v_snd_1299_);
v___x_1303_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__3));
v___x_1304_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof(v___x_1303_, v_snd_1273_, v_fst_1300_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v___x_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1315_; 
lean_dec_ref_known(v___x_1304_, 1);
v___x_1305_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_1260_, v_fst_1300_, v___y_1264_);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1315_ == 0)
{
lean_object* v_unused_1316_; 
v_unused_1316_ = lean_ctor_get(v___x_1305_, 0);
lean_dec(v_unused_1316_);
v___x_1307_ = v___x_1305_;
v_isShared_1308_ = v_isSharedCheck_1315_;
goto v_resetjp_1306_;
}
else
{
lean_dec(v___x_1305_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1315_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1309_ = lean_array_to_list(v_fst_1301_);
v___x_1310_ = lean_array_to_list(v_snd_1302_);
v___x_1311_ = l_List_appendTR___redArg(v___x_1309_, v___x_1310_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v___x_1311_);
v___x_1313_ = v___x_1307_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v___x_1311_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
else
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec(v_snd_1302_);
lean_dec(v_fst_1301_);
lean_dec(v_fst_1300_);
lean_dec(v_mvarId_1260_);
v_a_1317_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1304_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1304_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
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
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v_snd_1273_);
lean_dec(v_mvarId_1260_);
v_a_1325_ = lean_ctor_get(v___x_1297_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1297_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1297_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
else
{
lean_object* v___x_1333_; 
lean_dec_ref(v___x_1279_);
lean_del_object(v___x_1275_);
lean_dec(v_snd_1273_);
lean_dec(v_a_1269_);
v___x_1333_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies(v_mvarId_1260_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1343_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1336_ = v___x_1333_;
v_isShared_1337_ = v_isSharedCheck_1343_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1333_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1343_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1341_; 
v___x_1338_ = lean_box(0);
v___x_1339_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Conv_congr_spec__2(v_a_1334_, v___x_1338_);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1339_);
v___x_1341_ = v___x_1336_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
v_a_1344_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1346_ = v___x_1333_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1333_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
lean_dec_ref(v___x_1279_);
lean_del_object(v___x_1275_);
lean_dec(v_snd_1273_);
lean_dec(v_a_1269_);
lean_dec(v_mvarId_1260_);
v_a_1352_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1280_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1280_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec(v_a_1269_);
lean_dec(v_mvarId_1260_);
v_a_1361_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1270_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1270_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1376_; 
lean_dec(v_mvarId_1260_);
v_a_1369_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1371_ = v___x_1268_;
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1268_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
if (v_isShared_1372_ == 0)
{
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1369_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr___lam__0___boxed(lean_object* v_mvarId_1377_, lean_object* v_addImplicitArgs_1378_, lean_object* v_nameSubgoals_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
uint8_t v_addImplicitArgs_boxed_1385_; uint8_t v_nameSubgoals_boxed_1386_; lean_object* v_res_1387_; 
v_addImplicitArgs_boxed_1385_ = lean_unbox(v_addImplicitArgs_1378_);
v_nameSubgoals_boxed_1386_ = lean_unbox(v_nameSubgoals_1379_);
v_res_1387_ = l_Lean_Elab_Tactic_Conv_congr___lam__0(v_mvarId_1377_, v_addImplicitArgs_boxed_1385_, v_nameSubgoals_boxed_1386_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr(lean_object* v_mvarId_1388_, uint8_t v_addImplicitArgs_1389_, uint8_t v_nameSubgoals_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___f_1398_; lean_object* v___x_1399_; 
v___x_1396_ = lean_box(v_addImplicitArgs_1389_);
v___x_1397_ = lean_box(v_nameSubgoals_1390_);
lean_inc(v_mvarId_1388_);
v___f_1398_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_congr___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1398_, 0, v_mvarId_1388_);
lean_closure_set(v___f_1398_, 1, v___x_1396_);
lean_closure_set(v___f_1398_, 2, v___x_1397_);
v___x_1399_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(v_mvarId_1388_, v___f_1398_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congr___boxed(lean_object* v_mvarId_1400_, lean_object* v_addImplicitArgs_1401_, lean_object* v_nameSubgoals_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_){
_start:
{
uint8_t v_addImplicitArgs_boxed_1408_; uint8_t v_nameSubgoals_boxed_1409_; lean_object* v_res_1410_; 
v_addImplicitArgs_boxed_1408_ = lean_unbox(v_addImplicitArgs_1401_);
v_nameSubgoals_boxed_1409_ = lean_unbox(v_nameSubgoals_1402_);
v_res_1410_ = l_Lean_Elab_Tactic_Conv_congr(v_mvarId_1400_, v_addImplicitArgs_boxed_1408_, v_nameSubgoals_boxed_1409_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_);
lean_dec(v_a_1406_);
lean_dec_ref(v_a_1405_);
lean_dec(v_a_1404_);
lean_dec_ref(v_a_1403_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1(lean_object* v_mvarId_1411_, lean_object* v_val_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_1411_, v_val_1412_, v___y_1414_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___boxed(lean_object* v_mvarId_1419_, lean_object* v_val_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1(v_mvarId_1419_, v_val_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1(lean_object* v_00_u03b2_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_, lean_object* v_x_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1___redArg(v_x_1428_, v_x_1429_, v_x_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1432_, lean_object* v_x_1433_, size_t v_x_1434_, size_t v_x_1435_, lean_object* v_x_1436_, lean_object* v_x_1437_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___redArg(v_x_1433_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1439_, lean_object* v_x_1440_, lean_object* v_x_1441_, lean_object* v_x_1442_, lean_object* v_x_1443_, lean_object* v_x_1444_){
_start:
{
size_t v_x_3363__boxed_1445_; size_t v_x_3364__boxed_1446_; lean_object* v_res_1447_; 
v_x_3363__boxed_1445_ = lean_unbox_usize(v_x_1441_);
lean_dec(v_x_1441_);
v_x_3364__boxed_1446_ = lean_unbox_usize(v_x_1442_);
lean_dec(v_x_1442_);
v_res_1447_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3(v_00_u03b2_1439_, v_x_1440_, v_x_3363__boxed_1445_, v_x_3364__boxed_1446_, v_x_1443_, v_x_1444_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1448_, lean_object* v_n_1449_, lean_object* v_k_1450_, lean_object* v_v_1451_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5___redArg(v_n_1449_, v_k_1450_, v_v_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_1453_, size_t v_depth_1454_, lean_object* v_keys_1455_, lean_object* v_vals_1456_, lean_object* v_heq_1457_, lean_object* v_i_1458_, lean_object* v_entries_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___redArg(v_depth_1454_, v_keys_1455_, v_vals_1456_, v_i_1458_, v_entries_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03b2_1461_, lean_object* v_depth_1462_, lean_object* v_keys_1463_, lean_object* v_vals_1464_, lean_object* v_heq_1465_, lean_object* v_i_1466_, lean_object* v_entries_1467_){
_start:
{
size_t v_depth_boxed_1468_; lean_object* v_res_1469_; 
v_depth_boxed_1468_ = lean_unbox_usize(v_depth_1462_);
lean_dec(v_depth_1462_);
v_res_1469_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__6(v_00_u03b2_1461_, v_depth_boxed_1468_, v_keys_1463_, v_vals_1464_, v_heq_1465_, v_i_1466_, v_entries_1467_);
lean_dec_ref(v_vals_1464_);
lean_dec_ref(v_keys_1463_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_1470_, lean_object* v_x_1471_, lean_object* v_x_1472_, lean_object* v_x_1473_, lean_object* v_x_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1_spec__3_spec__5_spec__6___redArg(v_x_1471_, v_x_1472_, v_x_1473_, v_x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_Elab_Tactic_Conv_evalCongr_spec__0(lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
if (lean_obj_tag(v_a_1476_) == 0)
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_array_to_list(v_a_1477_);
return v___x_1478_;
}
else
{
lean_object* v_head_1479_; 
v_head_1479_ = lean_ctor_get(v_a_1476_, 0);
if (lean_obj_tag(v_head_1479_) == 0)
{
lean_object* v_tail_1480_; 
v_tail_1480_ = lean_ctor_get(v_a_1476_, 1);
lean_inc(v_tail_1480_);
lean_dec_ref_known(v_a_1476_, 2);
v_a_1476_ = v_tail_1480_;
goto _start;
}
else
{
lean_object* v_tail_1482_; lean_object* v_val_1483_; lean_object* v___x_1484_; 
lean_inc_ref(v_head_1479_);
v_tail_1482_ = lean_ctor_get(v_a_1476_, 1);
lean_inc(v_tail_1482_);
lean_dec_ref_known(v_a_1476_, 2);
v_val_1483_ = lean_ctor_get(v_head_1479_, 0);
lean_inc(v_val_1483_);
lean_dec_ref_known(v_head_1479_, 1);
v___x_1484_ = lean_array_push(v_a_1477_, v_val_1483_);
v_a_1476_ = v_tail_1482_;
v_a_1477_ = v___x_1484_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___redArg(lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; uint8_t v___x_1496_; uint8_t v___x_1497_; lean_object* v___x_1498_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v___x_1496_ = 0;
v___x_1497_ = 1;
v___x_1498_ = l_Lean_Elab_Tactic_Conv_congr(v_a_1495_, v___x_1496_, v___x_1497_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1500_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalCongr___redArg___closed__0));
v___x_1501_ = l_List_filterMapTR_go___at___00Lean_Elab_Tactic_Conv_evalCongr_spec__0(v_a_1499_, v___x_1500_);
v___x_1502_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1501_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v___x_1502_;
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_a_1503_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1498_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1498_);
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
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
v_a_1511_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1513_ = v___x_1494_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1494_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1511_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___redArg___boxed(lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_Elab_Tactic_Conv_evalCongr___redArg(v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
lean_dec(v_a_1523_);
lean_dec_ref(v_a_1522_);
lean_dec(v_a_1521_);
lean_dec_ref(v_a_1520_);
lean_dec(v_a_1519_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr(lean_object* v_x_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lean_Elab_Tactic_Conv_evalCongr___redArg(v_a_1528_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalCongr___boxed(lean_object* v_x_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_Elab_Tactic_Conv_evalCongr(v_x_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec(v_a_1543_);
lean_dec_ref(v_a_1542_);
lean_dec(v_a_1541_);
lean_dec_ref(v_a_1540_);
lean_dec(v_a_1539_);
lean_dec_ref(v_a_1538_);
lean_dec(v_x_1537_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1(){
_start:
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1562_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1563_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__0));
v___x_1564_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2));
v___x_1565_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalCongr___boxed), 10, 0);
v___x_1566_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1562_, v___x_1563_, v___x_1564_, v___x_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___boxed(lean_object* v_a_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1();
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3(){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1595_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1___closed__2));
v___x_1596_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___closed__6));
v___x_1597_ = l_Lean_addBuiltinDeclarationRanges(v___x_1595_, v___x_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3___boxed(lean_object* v_a_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3();
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__0(lean_object* v_as_1600_, size_t v_i_1601_, size_t v_stop_1602_, lean_object* v_b_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
uint8_t v___x_1609_; 
v___x_1609_ = lean_usize_dec_eq(v_i_1601_, v_stop_1602_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = lean_array_uget_borrowed(v_as_1600_, v_i_1601_);
lean_inc(v___x_1610_);
v___x_1611_ = l_Lean_Meta_mkCongrFun(v_b_1603_, v___x_1610_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; size_t v___x_1613_; size_t v___x_1614_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1611_, 1);
v___x_1613_ = ((size_t)1ULL);
v___x_1614_ = lean_usize_add(v_i_1601_, v___x_1613_);
v_i_1601_ = v___x_1614_;
v_b_1603_ = v_a_1612_;
goto _start;
}
else
{
return v___x_1611_;
}
}
else
{
lean_object* v___x_1616_; 
v___x_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1616_, 0, v_b_1603_);
return v___x_1616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__0___boxed(lean_object* v_as_1617_, lean_object* v_i_1618_, lean_object* v_stop_1619_, lean_object* v_b_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
size_t v_i_boxed_1626_; size_t v_stop_boxed_1627_; lean_object* v_res_1628_; 
v_i_boxed_1626_ = lean_unbox_usize(v_i_1618_);
lean_dec(v_i_1618_);
v_stop_boxed_1627_ = lean_unbox_usize(v_stop_1619_);
lean_dec(v_stop_1619_);
v_res_1628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__0(v_as_1617_, v_i_boxed_1626_, v_stop_boxed_1627_, v_b_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
lean_dec_ref(v_as_1617_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1(lean_object* v_mvarId_1630_, lean_object* v_snd_1631_, lean_object* v_x_1632_, lean_object* v_x_1633_, lean_object* v_x_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
if (lean_obj_tag(v_x_1632_) == 5)
{
lean_object* v_fn_1640_; lean_object* v_arg_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v_fn_1640_ = lean_ctor_get(v_x_1632_, 0);
lean_inc_ref(v_fn_1640_);
v_arg_1641_ = lean_ctor_get(v_x_1632_, 1);
lean_inc_ref(v_arg_1641_);
lean_dec_ref_known(v_x_1632_, 2);
v___x_1642_ = lean_array_set(v_x_1633_, v_x_1634_, v_arg_1641_);
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = lean_nat_sub(v_x_1634_, v___x_1643_);
lean_dec(v_x_1634_);
v_x_1632_ = v_fn_1640_;
v_x_1633_ = v___x_1642_;
v_x_1634_ = v___x_1644_;
goto _start;
}
else
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
lean_dec(v_x_1634_);
v___x_1646_ = lean_box(0);
v___x_1647_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v_x_1632_, v___x_1646_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; lean_object* v_fst_1649_; lean_object* v_snd_1650_; lean_object* v_a_1652_; lean_object* v___x_1674_; lean_object* v___x_1675_; uint8_t v___x_1676_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
v_fst_1649_ = lean_ctor_get(v_a_1648_, 0);
lean_inc(v_fst_1649_);
v_snd_1650_ = lean_ctor_get(v_a_1648_, 1);
lean_inc(v_snd_1650_);
lean_dec(v_a_1648_);
v___x_1674_ = lean_unsigned_to_nat(0u);
v___x_1675_ = lean_array_get_size(v_x_1633_);
v___x_1676_ = lean_nat_dec_lt(v___x_1674_, v___x_1675_);
if (v___x_1676_ == 0)
{
lean_inc(v_snd_1650_);
v_a_1652_ = v_snd_1650_;
goto v___jp_1651_;
}
else
{
size_t v___x_1677_; size_t v___x_1678_; lean_object* v___x_1679_; 
v___x_1677_ = ((size_t)0ULL);
v___x_1678_ = lean_usize_of_nat(v___x_1675_);
lean_inc(v_snd_1650_);
v___x_1679_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__0(v_x_1633_, v___x_1677_, v___x_1678_, v_snd_1650_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; 
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
lean_inc(v_a_1680_);
lean_dec_ref_known(v___x_1679_, 1);
v_a_1652_ = v_a_1680_;
goto v___jp_1651_;
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1688_; 
lean_dec(v_snd_1650_);
lean_dec(v_fst_1649_);
lean_dec_ref(v_x_1633_);
lean_dec_ref(v_snd_1631_);
lean_dec(v_mvarId_1630_);
v_a_1681_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1683_ = v___x_1679_;
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_dec(v___x_1679_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1686_; 
if (v_isShared_1684_ == 0)
{
v___x_1686_ = v___x_1683_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_a_1681_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
v___jp_1651_:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1653_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_1630_, v_a_1652_, v___y_1636_);
lean_dec_ref(v___x_1653_);
v___x_1654_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1___closed__0));
v___x_1655_ = l_Lean_mkAppN(v_fst_1649_, v_x_1633_);
lean_dec_ref(v_x_1633_);
v___x_1656_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(v___x_1654_, v_snd_1631_, v___x_1655_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1664_; 
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1664_ == 0)
{
lean_object* v_unused_1665_; 
v_unused_1665_ = lean_ctor_get(v___x_1656_, 0);
lean_dec(v_unused_1665_);
v___x_1658_ = v___x_1656_;
v_isShared_1659_ = v_isSharedCheck_1664_;
goto v_resetjp_1657_;
}
else
{
lean_dec(v___x_1656_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1664_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1660_ = l_Lean_Expr_mvarId_x21(v_snd_1650_);
lean_dec(v_snd_1650_);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 0, v___x_1660_);
v___x_1662_ = v___x_1658_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec(v_snd_1650_);
v_a_1666_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1656_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1656_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
}
else
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
lean_dec_ref(v_x_1633_);
lean_dec_ref(v_snd_1631_);
lean_dec(v_mvarId_1630_);
v_a_1689_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v___x_1647_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1647_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1___boxed(lean_object* v_mvarId_1697_, lean_object* v_snd_1698_, lean_object* v_x_1699_, lean_object* v_x_1700_, lean_object* v_x_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1(v_mvarId_1697_, v_snd_1698_, v_x_1699_, v_x_1700_, v_x_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
return v_res_1707_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__0));
v___x_1710_ = l_Lean_stringToMessageData(v___x_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___lam__0(lean_object* v_mvarId_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v___x_1717_; 
lean_inc(v_mvarId_1711_);
v___x_1717_ = l_Lean_Elab_Tactic_Conv_getLhsRhsCore(v_mvarId_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1717_) == 0)
{
lean_object* v_a_1718_; lean_object* v_fst_1719_; lean_object* v_snd_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1753_; 
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
lean_inc(v_a_1718_);
lean_dec_ref_known(v___x_1717_, 1);
v_fst_1719_ = lean_ctor_get(v_a_1718_, 0);
v_snd_1720_ = lean_ctor_get(v_a_1718_, 1);
v_isSharedCheck_1753_ = !lean_is_exclusive(v_a_1718_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1722_ = v_a_1718_;
v_isShared_1723_ = v_isSharedCheck_1753_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_snd_1720_);
lean_inc(v_fst_1719_);
lean_dec(v_a_1718_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1753_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1724_; lean_object* v_a_1725_; lean_object* v___x_1726_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; uint8_t v___x_1738_; 
v___x_1724_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(v_fst_1719_, v___y_1713_);
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref(v___x_1724_);
v___x_1726_ = l_Lean_Expr_cleanupAnnotations(v_a_1725_);
lean_dec(v_a_1725_);
v___x_1738_ = l_Lean_Expr_isApp(v___x_1726_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1742_; 
lean_dec(v_snd_1720_);
lean_dec(v_mvarId_1711_);
v___x_1739_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___closed__1);
v___x_1740_ = l_Lean_indentExpr(v___x_1726_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set_tag(v___x_1722_, 7);
lean_ctor_set(v___x_1722_, 1, v___x_1740_);
lean_ctor_set(v___x_1722_, 0, v___x_1739_);
v___x_1742_ = v___x_1722_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1739_);
lean_ctor_set(v_reuseFailAlloc_1752_, 1, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_object* v___x_1743_; lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
v___x_1743_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_1742_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___x_1743_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1743_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
else
{
lean_del_object(v___x_1722_);
v___y_1728_ = v___y_1712_;
v___y_1729_ = v___y_1713_;
v___y_1730_ = v___y_1714_;
v___y_1731_ = v___y_1715_;
goto v___jp_1727_;
}
v___jp_1727_:
{
lean_object* v_dummy_1732_; lean_object* v_nargs_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v_dummy_1732_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2, &l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2);
v_nargs_1733_ = l_Lean_Expr_getAppNumArgs(v___x_1726_);
lean_inc(v_nargs_1733_);
v___x_1734_ = lean_mk_array(v_nargs_1733_, v_dummy_1732_);
v___x_1735_ = lean_unsigned_to_nat(1u);
v___x_1736_ = lean_nat_sub(v_nargs_1733_, v___x_1735_);
lean_dec(v_nargs_1733_);
v___x_1737_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrFunN_spec__1(v_mvarId_1711_, v_snd_1720_, v___x_1726_, v___x_1734_, v___x_1736_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
return v___x_1737_;
}
}
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec(v_mvarId_1711_);
v_a_1754_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1717_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1717_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___boxed(lean_object* v_mvarId_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lean_Elab_Tactic_Conv_congrFunN___lam__0(v_mvarId_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
lean_dec(v___y_1764_);
lean_dec_ref(v___y_1763_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN(lean_object* v_mvarId_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v___f_1775_; lean_object* v___x_1776_; 
lean_inc(v_mvarId_1769_);
v___f_1775_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_congrFunN___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1775_, 0, v_mvarId_1769_);
v___x_1776_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(v_mvarId_1769_, v___f_1775_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrFunN___boxed(lean_object* v_mvarId_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l_Lean_Elab_Tactic_Conv_congrFunN(v_mvarId_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_);
lean_dec(v_a_1781_);
lean_dec_ref(v_a_1780_);
lean_dec(v_a_1779_);
lean_dec_ref(v_a_1778_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__0(lean_object* v_msg_1784_){
_start:
{
lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1785_ = lean_box(0);
v___x_1786_ = lean_panic_fn_borrowed(v___x_1785_, v_msg_1784_);
return v___x_1786_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1788_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__2));
v___x_1789_ = lean_unsigned_to_nat(30u);
v___x_1790_ = lean_unsigned_to_nat(150u);
v___x_1791_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__0));
v___x_1792_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__0));
v___x_1793_ = l_mkPanicMessageWithDecl(v___x_1792_, v___x_1791_, v___x_1790_, v___x_1789_, v___x_1788_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0(lean_object* v_fst_1794_, lean_object* v_snd_1795_, lean_object* v_fst_1796_, lean_object* v_fst_1797_, lean_object* v_00___1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___closed__1);
v___x_1805_ = l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1(v___x_1804_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1816_; 
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1816_ == 0)
{
lean_object* v_unused_1817_; 
v_unused_1817_ = lean_ctor_get(v___x_1805_, 0);
lean_dec(v_unused_1817_);
v___x_1807_ = v___x_1805_;
v_isShared_1808_ = v_isSharedCheck_1816_;
goto v_resetjp_1806_;
}
else
{
lean_dec(v___x_1805_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1816_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1809_, 0, v_fst_1794_);
lean_ctor_set(v___x_1809_, 1, v_snd_1795_);
v___x_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1810_, 0, v_fst_1796_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1811_, 0, v_fst_1797_);
lean_ctor_set(v___x_1811_, 1, v___x_1810_);
v___x_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v___x_1812_);
v___x_1814_ = v___x_1807_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1812_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
lean_dec(v_fst_1797_);
lean_dec(v_fst_1796_);
lean_dec(v_snd_1795_);
lean_dec(v_fst_1794_);
v_a_1818_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1805_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1805_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0___boxed(lean_object* v_fst_1826_, lean_object* v_snd_1827_, lean_object* v_fst_1828_, lean_object* v_fst_1829_, lean_object* v_00___1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0(v_fst_1826_, v_snd_1827_, v_fst_1828_, v_fst_1829_, v_00___1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__1(lean_object* v_snd_1837_, lean_object* v_snd_1838_, lean_object* v___x_1839_, lean_object* v___x_1840_, lean_object* v_____r_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1847_ = l_Lean_Expr_mvarId_x21(v_snd_1837_);
v___x_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
v___x_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
lean_ctor_set(v___x_1849_, 1, v_snd_1838_);
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1839_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1840_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__1___boxed(lean_object* v_snd_1854_, lean_object* v_snd_1855_, lean_object* v___x_1856_, lean_object* v___x_1857_, lean_object* v_____r_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__1(v_snd_1854_, v_snd_1855_, v___x_1856_, v___x_1857_, v_____r_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec_ref(v_snd_1854_);
return v_res_1864_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__0));
v___x_1867_ = l_Lean_stringToMessageData(v___x_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg(lean_object* v_upperBound_1868_, lean_object* v_args_1869_, lean_object* v___x_1870_, lean_object* v_origTag_1871_, lean_object* v_tacticName_1872_, lean_object* v_a_1873_, lean_object* v_b_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v_a_1881_; lean_object* v___y_1886_; uint8_t v___x_1905_; 
v___x_1905_ = lean_nat_dec_lt(v_a_1873_, v_upperBound_1868_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; 
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v___x_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_b_1874_);
return v___x_1906_;
}
else
{
lean_object* v_snd_1907_; lean_object* v_snd_1908_; lean_object* v_fst_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_2030_; 
v_snd_1907_ = lean_ctor_get(v_b_1874_, 1);
lean_inc(v_snd_1907_);
v_snd_1908_ = lean_ctor_get(v_snd_1907_, 1);
lean_inc(v_snd_1908_);
v_fst_1909_ = lean_ctor_get(v_b_1874_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v_b_1874_);
if (v_isSharedCheck_2030_ == 0)
{
lean_object* v_unused_2031_; 
v_unused_2031_ = lean_ctor_get(v_b_1874_, 1);
lean_dec(v_unused_2031_);
v___x_1911_ = v_b_1874_;
v_isShared_1912_ = v_isSharedCheck_2030_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_fst_1909_);
lean_dec(v_b_1874_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_2030_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v_fst_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_2028_; 
v_fst_1913_ = lean_ctor_get(v_snd_1907_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_snd_1907_);
if (v_isSharedCheck_2028_ == 0)
{
lean_object* v_unused_2029_; 
v_unused_2029_ = lean_ctor_get(v_snd_1907_, 1);
lean_dec(v_unused_2029_);
v___x_1915_ = v_snd_1907_;
v_isShared_1916_ = v_isSharedCheck_2028_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_fst_1913_);
lean_dec(v_snd_1907_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_2028_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v_fst_1917_; lean_object* v_snd_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_2027_; 
v_fst_1917_ = lean_ctor_get(v_snd_1908_, 0);
v_snd_1918_ = lean_ctor_get(v_snd_1908_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_snd_1908_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_1920_ = v_snd_1908_;
v_isShared_1921_ = v_isSharedCheck_2027_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_snd_1918_);
lean_inc(v_fst_1917_);
lean_dec(v_snd_1908_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_2027_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; 
v___x_1922_ = l_Lean_instInhabitedExpr;
v___x_1923_ = lean_array_get_borrowed(v___x_1922_, v_args_1869_, v_a_1873_);
v___x_1924_ = lean_array_fget_borrowed(v___x_1870_, v_a_1873_);
v___x_1925_ = lean_unbox(v___x_1924_);
switch(v___x_1925_)
{
case 1:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
lean_del_object(v___x_1920_);
lean_del_object(v___x_1915_);
lean_del_object(v___x_1911_);
v___x_1926_ = lean_box(0);
v___x_1927_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0(v_fst_1917_, v_snd_1918_, v_fst_1913_, v_fst_1909_, v___x_1926_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
v___y_1886_ = v___x_1927_;
goto v___jp_1885_;
}
case 2:
{
lean_object* v___x_1928_; 
lean_del_object(v___x_1920_);
lean_del_object(v___x_1915_);
lean_del_object(v___x_1911_);
lean_inc(v_origTag_1871_);
lean_inc(v___x_1923_);
v___x_1928_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v___x_1923_, v_origTag_1871_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v_fst_1930_; lean_object* v_snd_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1957_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v_fst_1930_ = lean_ctor_get(v_a_1929_, 0);
v_snd_1931_ = lean_ctor_get(v_a_1929_, 1);
v_isSharedCheck_1957_ = !lean_is_exclusive(v_a_1929_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1933_ = v_a_1929_;
v_isShared_1934_ = v_isSharedCheck_1957_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_snd_1931_);
lean_inc(v_fst_1930_);
lean_dec(v_a_1929_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1957_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
lean_inc(v_fst_1930_);
v___x_1935_ = l_Lean_Expr_app___override(v_fst_1909_, v_fst_1930_);
lean_inc(v_snd_1931_);
lean_inc(v___x_1923_);
v___x_1936_ = l_Lean_mkApp3(v_fst_1913_, v___x_1923_, v_fst_1930_, v_snd_1931_);
if (lean_obj_tag(v_fst_1917_) == 0)
{
lean_object* v___x_1937_; lean_object* v___x_1938_; 
lean_del_object(v___x_1933_);
v___x_1937_ = lean_box(0);
v___x_1938_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__1(v_snd_1931_, v_snd_1918_, v___x_1936_, v___x_1935_, v___x_1937_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
lean_dec(v_snd_1931_);
v___y_1886_ = v___x_1938_;
goto v___jp_1885_;
}
else
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
lean_dec_ref_known(v_fst_1917_, 1);
v___x_1939_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3);
lean_inc_ref(v_tacticName_1872_);
v___x_1940_ = l_Lean_stringToMessageData(v_tacticName_1872_);
if (v_isShared_1934_ == 0)
{
lean_ctor_set_tag(v___x_1933_, 7);
lean_ctor_set(v___x_1933_, 1, v___x_1940_);
lean_ctor_set(v___x_1933_, 0, v___x_1939_);
v___x_1942_ = v___x_1933_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1939_);
lean_ctor_set(v_reuseFailAlloc_1956_, 1, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
v___x_1943_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1);
v___x_1944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1942_);
lean_ctor_set(v___x_1944_, 1, v___x_1943_);
v___x_1945_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_1944_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1947_; 
v_a_1946_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1945_, 1);
v___x_1947_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__1(v_snd_1931_, v_snd_1918_, v___x_1936_, v___x_1935_, v_a_1946_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
lean_dec(v_snd_1931_);
v___y_1886_ = v___x_1947_;
goto v___jp_1885_;
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec_ref(v___x_1936_);
lean_dec_ref(v___x_1935_);
lean_dec(v_snd_1931_);
lean_dec(v_snd_1918_);
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v_a_1948_ = lean_ctor_get(v___x_1945_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1945_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1945_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1945_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_dec(v_snd_1918_);
lean_dec(v_fst_1917_);
lean_dec(v_fst_1913_);
lean_dec(v_fst_1909_);
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v_a_1958_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1928_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1928_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
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
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
case 4:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; 
lean_del_object(v___x_1920_);
lean_del_object(v___x_1915_);
lean_del_object(v___x_1911_);
v___x_1966_ = lean_box(0);
v___x_1967_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___lam__0(v_fst_1917_, v_snd_1918_, v_fst_1913_, v_fst_1909_, v___x_1966_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
v___y_1886_ = v___x_1967_;
goto v___jp_1885_;
}
case 5:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
lean_inc(v___x_1923_);
v___x_1968_ = l_Lean_Expr_app___override(v_fst_1913_, v___x_1923_);
lean_inc(v___y_1878_);
lean_inc_ref(v___y_1877_);
lean_inc(v___y_1876_);
lean_inc_ref(v___y_1875_);
lean_inc_ref(v___x_1968_);
v___x_1969_ = lean_infer_type(v___x_1968_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_object* v_a_1970_; lean_object* v___x_1971_; 
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_a_1970_);
lean_dec_ref_known(v___x_1969_, 1);
lean_inc(v___y_1878_);
lean_inc_ref(v___y_1877_);
lean_inc(v___y_1876_);
lean_inc_ref(v___y_1875_);
v___x_1971_ = lean_whnf(v_a_1970_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; uint8_t v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref_known(v___x_1971_, 1);
v___x_1973_ = l_Lean_Expr_bindingDomain_x21(v_a_1972_);
lean_dec(v_a_1972_);
v___x_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
v___x_1975_ = 0;
v___x_1976_ = lean_box(0);
v___x_1977_ = l_Lean_Meta_mkFreshExprMVar(v___x_1974_, v___x_1975_, v___x_1976_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1984_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
lean_inc_n(v_a_1978_, 3);
lean_dec_ref_known(v___x_1977_, 1);
v___x_1979_ = l_Lean_Expr_app___override(v_fst_1909_, v_a_1978_);
v___x_1980_ = l_Lean_Expr_app___override(v___x_1968_, v_a_1978_);
v___x_1981_ = l_Lean_Expr_mvarId_x21(v_a_1978_);
lean_dec(v_a_1978_);
v___x_1982_ = lean_array_push(v_snd_1918_, v___x_1981_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 1, v___x_1982_);
v___x_1984_ = v___x_1920_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_fst_1917_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v___x_1982_);
v___x_1984_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1986_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 1, v___x_1984_);
lean_ctor_set(v___x_1915_, 0, v___x_1980_);
v___x_1986_ = v___x_1915_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1980_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v___x_1984_);
v___x_1986_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
lean_object* v___x_1988_; 
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 1, v___x_1986_);
lean_ctor_set(v___x_1911_, 0, v___x_1979_);
v___x_1988_ = v___x_1911_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1979_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v___x_1986_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
v_a_1881_ = v___x_1988_;
goto v___jp_1880_;
}
}
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
lean_dec_ref(v___x_1968_);
lean_del_object(v___x_1920_);
lean_dec(v_snd_1918_);
lean_dec(v_fst_1917_);
lean_del_object(v___x_1915_);
lean_del_object(v___x_1911_);
lean_dec(v_fst_1909_);
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v_a_1992_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1977_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1977_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_dec_ref(v___x_1968_);
lean_del_object(v___x_1920_);
lean_dec(v_snd_1918_);
lean_dec(v_fst_1917_);
lean_del_object(v___x_1915_);
lean_del_object(v___x_1911_);
lean_dec(v_fst_1909_);
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v_a_2000_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1971_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1971_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec_ref(v___x_1968_);
lean_del_object(v___x_1920_);
lean_dec(v_snd_1918_);
lean_dec(v_fst_1917_);
lean_del_object(v___x_1915_);
lean_del_object(v___x_1911_);
lean_dec(v_fst_1909_);
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v_a_2008_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1969_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1969_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
default: 
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2019_; 
lean_inc_n(v___x_1923_, 2);
v___x_2016_ = l_Lean_Expr_app___override(v_fst_1909_, v___x_1923_);
v___x_2017_ = l_Lean_Expr_app___override(v_fst_1913_, v___x_1923_);
if (v_isShared_1921_ == 0)
{
v___x_2019_ = v___x_1920_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_fst_1917_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v_snd_1918_);
v___x_2019_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2021_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 1, v___x_2019_);
lean_ctor_set(v___x_1915_, 0, v___x_2017_);
v___x_2021_ = v___x_1915_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2017_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___x_2023_; 
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 1, v___x_2021_);
lean_ctor_set(v___x_1911_, 0, v___x_2016_);
v___x_2023_ = v___x_1911_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2016_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v___x_2021_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
v_a_1881_ = v___x_2023_;
goto v___jp_1880_;
}
}
}
}
}
}
}
}
}
v___jp_1880_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = lean_nat_add(v_a_1873_, v___x_1882_);
lean_dec(v_a_1873_);
v_a_1873_ = v___x_1883_;
v_b_1874_ = v_a_1881_;
goto _start;
}
v___jp_1885_:
{
if (lean_obj_tag(v___y_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1896_; 
v_a_1887_ = lean_ctor_get(v___y_1886_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___y_1886_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1889_ = v___y_1886_;
v_isShared_1890_ = v_isSharedCheck_1896_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___y_1886_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1896_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
if (lean_obj_tag(v_a_1887_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1893_; 
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v_a_1891_ = lean_ctor_get(v_a_1887_, 0);
lean_inc(v_a_1891_);
lean_dec_ref_known(v_a_1887_, 1);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v_a_1891_);
v___x_1893_ = v___x_1889_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1891_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
else
{
lean_object* v_a_1895_; 
lean_del_object(v___x_1889_);
v_a_1895_ = lean_ctor_get(v_a_1887_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v_a_1887_, 1);
v_a_1881_ = v_a_1895_;
goto v___jp_1880_;
}
}
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_a_1873_);
lean_dec_ref(v_tacticName_1872_);
lean_dec(v_origTag_1871_);
v_a_1897_ = lean_ctor_get(v___y_1886_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___y_1886_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___y_1886_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___y_1886_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___boxed(lean_object* v_upperBound_2032_, lean_object* v_args_2033_, lean_object* v___x_2034_, lean_object* v_origTag_2035_, lean_object* v_tacticName_2036_, lean_object* v_a_2037_, lean_object* v_b_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg(v_upperBound_2032_, v_args_2033_, v___x_2034_, v_origTag_2035_, v_tacticName_2036_, v_a_2037_, v_b_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec_ref(v___x_2034_);
lean_dec_ref(v_args_2033_);
lean_dec(v_upperBound_2032_);
return v_res_2044_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__3(void){
_start:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2048_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__2));
v___x_2049_ = lean_unsigned_to_nat(14u);
v___x_2050_ = lean_unsigned_to_nat(22u);
v___x_2051_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__1));
v___x_2052_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__0));
v___x_2053_ = l_mkPanicMessageWithDecl(v___x_2052_, v___x_2051_, v___x_2050_, v___x_2049_, v___x_2048_);
return v___x_2053_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__6(void){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__5));
v___x_2059_ = l_Lean_stringToMessageData(v___x_2058_);
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm(lean_object* v_tacticName_2060_, lean_object* v_origTag_2061_, lean_object* v_f_2062_, lean_object* v_args_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v___y_2070_; lean_object* v___y_2071_; lean_object* v___y_2072_; lean_object* v___y_2077_; lean_object* v___y_2078_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v___y_2081_; lean_object* v___y_2082_; lean_object* v___y_2083_; lean_object* v_lower_2084_; lean_object* v_upper_2085_; uint8_t v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2101_ = 0;
v___x_2102_ = lean_array_get_size(v_args_2063_);
lean_inc_ref(v_f_2062_);
v___x_2103_ = l_Lean_Meta_getFunInfoNArgs(v_f_2062_, v___x_2102_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2105_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2103_, 1);
v___x_2105_ = l_Lean_Meta_getCongrSimpKindsForArgZero(v_a_2104_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_object* v_a_2106_; uint8_t v___x_2107_; lean_object* v___x_2108_; 
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
lean_inc(v_a_2106_);
lean_dec_ref_known(v___x_2105_, 1);
v___x_2107_ = 0;
lean_inc_ref(v_f_2062_);
v___x_2108_ = l_Lean_Meta_mkCongrSimpCore_x3f(v_f_2062_, v_a_2104_, v_a_2106_, v___x_2107_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
if (lean_obj_tag(v_a_2109_) == 1)
{
lean_object* v_val_2110_; lean_object* v_proof_2111_; lean_object* v_argKinds_2112_; lean_object* v___y_2114_; lean_object* v___y_2115_; lean_object* v___y_2116_; lean_object* v___y_2117_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
v_val_2110_ = lean_ctor_get(v_a_2109_, 0);
lean_inc(v_val_2110_);
lean_dec_ref_known(v_a_2109_, 1);
v_proof_2111_ = lean_ctor_get(v_val_2110_, 1);
lean_inc_ref(v_proof_2111_);
v_argKinds_2112_ = lean_ctor_get(v_val_2110_, 2);
lean_inc_ref(v_argKinds_2112_);
lean_dec(v_val_2110_);
v___x_2139_ = lean_unsigned_to_nat(0u);
v___x_2140_ = lean_box(v___x_2101_);
v___x_2141_ = lean_array_get(v___x_2140_, v_argKinds_2112_, v___x_2139_);
lean_dec(v___x_2140_);
v___x_2142_ = lean_unbox(v___x_2141_);
lean_dec(v___x_2141_);
if (v___x_2142_ == 2)
{
v___y_2114_ = v_a_2064_;
v___y_2115_ = v_a_2065_;
v___y_2116_ = v_a_2066_;
v___y_2117_ = v_a_2067_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
lean_dec_ref(v_argKinds_2112_);
lean_dec_ref(v_proof_2111_);
lean_dec_ref(v_args_2063_);
lean_dec_ref(v_f_2062_);
lean_dec(v_origTag_2061_);
v___x_2143_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3);
v___x_2144_ = l_Lean_stringToMessageData(v_tacticName_2060_);
v___x_2145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2143_);
lean_ctor_set(v___x_2145_, 1, v___x_2144_);
v___x_2146_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg___closed__1);
v___x_2147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2145_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
v___x_2148_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_2147_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_);
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2148_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2148_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
v___jp_2113_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2118_ = lean_array_get_size(v_argKinds_2112_);
v___x_2119_ = lean_unsigned_to_nat(0u);
v___x_2120_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__4));
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_proof_2111_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v_f_2062_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg(v___x_2118_, v_args_2063_, v_argKinds_2112_, v_origTag_2061_, v_tacticName_2060_, v___x_2119_, v___x_2122_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec_ref(v_argKinds_2112_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v_a_2124_; lean_object* v_snd_2125_; lean_object* v_snd_2126_; lean_object* v_fst_2127_; lean_object* v_fst_2128_; lean_object* v_snd_2129_; uint8_t v___x_2130_; 
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
lean_inc(v_a_2124_);
lean_dec_ref_known(v___x_2123_, 1);
v_snd_2125_ = lean_ctor_get(v_a_2124_, 1);
lean_inc(v_snd_2125_);
lean_dec(v_a_2124_);
v_snd_2126_ = lean_ctor_get(v_snd_2125_, 1);
lean_inc(v_snd_2126_);
v_fst_2127_ = lean_ctor_get(v_snd_2125_, 0);
lean_inc(v_fst_2127_);
lean_dec(v_snd_2125_);
v_fst_2128_ = lean_ctor_get(v_snd_2126_, 0);
lean_inc(v_fst_2128_);
v_snd_2129_ = lean_ctor_get(v_snd_2126_, 1);
lean_inc(v_snd_2129_);
lean_dec(v_snd_2126_);
v___x_2130_ = lean_nat_dec_le(v___x_2118_, v___x_2119_);
if (v___x_2130_ == 0)
{
v___y_2077_ = v_fst_2127_;
v___y_2078_ = v_fst_2128_;
v___y_2079_ = v___y_2117_;
v___y_2080_ = v___y_2114_;
v___y_2081_ = v_snd_2129_;
v___y_2082_ = v___y_2116_;
v___y_2083_ = v___y_2115_;
v_lower_2084_ = v___x_2118_;
v_upper_2085_ = v___x_2102_;
goto v___jp_2076_;
}
else
{
v___y_2077_ = v_fst_2127_;
v___y_2078_ = v_fst_2128_;
v___y_2079_ = v___y_2117_;
v___y_2080_ = v___y_2114_;
v___y_2081_ = v_snd_2129_;
v___y_2082_ = v___y_2116_;
v___y_2083_ = v___y_2115_;
v_lower_2084_ = v___x_2119_;
v_upper_2085_ = v___x_2102_;
goto v___jp_2076_;
}
}
else
{
lean_object* v_a_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
lean_dec_ref(v_args_2063_);
v_a_2131_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2133_ = v___x_2123_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_a_2131_);
lean_dec(v___x_2123_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_a_2131_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
}
else
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
lean_dec(v_a_2109_);
lean_dec_ref(v_args_2063_);
lean_dec_ref(v_f_2062_);
lean_dec(v_origTag_2061_);
v___x_2157_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3);
v___x_2158_ = l_Lean_stringToMessageData(v_tacticName_2060_);
v___x_2159_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2157_);
lean_ctor_set(v___x_2159_, 1, v___x_2158_);
v___x_2160_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__6, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__6_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__6);
v___x_2161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2159_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v___x_2162_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_2161_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_);
return v___x_2162_;
}
}
else
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2170_; 
lean_dec_ref(v_args_2063_);
lean_dec_ref(v_f_2062_);
lean_dec(v_origTag_2061_);
lean_dec_ref(v_tacticName_2060_);
v_a_2163_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2165_ = v___x_2108_;
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2108_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2168_; 
if (v_isShared_2166_ == 0)
{
v___x_2168_ = v___x_2165_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2163_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec(v_a_2104_);
lean_dec_ref(v_args_2063_);
lean_dec_ref(v_f_2062_);
lean_dec(v_origTag_2061_);
lean_dec_ref(v_tacticName_2060_);
v_a_2171_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2105_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2105_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2186_; 
lean_dec_ref(v_args_2063_);
lean_dec_ref(v_f_2062_);
lean_dec(v_origTag_2061_);
lean_dec_ref(v_tacticName_2060_);
v_a_2179_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2181_ = v___x_2103_;
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2103_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2179_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
v___jp_2069_:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___y_2072_);
lean_ctor_set(v___x_2073_, 1, v___y_2070_);
v___x_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___y_2071_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2074_);
return v___x_2075_;
}
v___jp_2076_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = l_Array_toSubarray___redArg(v_args_2063_, v_lower_2084_, v_upper_2085_);
v___x_2087_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__0___redArg(v___x_2086_, v___y_2077_, v___y_2080_, v___y_2083_, v___y_2082_, v___y_2079_);
if (lean_obj_tag(v___x_2087_) == 0)
{
if (lean_obj_tag(v___y_2078_) == 0)
{
lean_object* v_a_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; 
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2088_);
lean_dec_ref_known(v___x_2087_, 1);
v___x_2089_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___closed__3);
v___x_2090_ = l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__0(v___x_2089_);
v___y_2070_ = v___y_2081_;
v___y_2071_ = v_a_2088_;
v___y_2072_ = v___x_2090_;
goto v___jp_2069_;
}
else
{
lean_object* v_a_2091_; lean_object* v_val_2092_; 
v_a_2091_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___x_2087_, 1);
v_val_2092_ = lean_ctor_get(v___y_2078_, 0);
lean_inc(v_val_2092_);
lean_dec_ref_known(v___y_2078_, 1);
v___y_2070_ = v___y_2081_;
v___y_2071_ = v_a_2091_;
v___y_2072_ = v_val_2092_;
goto v___jp_2069_;
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec(v___y_2081_);
lean_dec(v___y_2078_);
v_a_2093_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2087_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2087_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm___boxed(lean_object* v_tacticName_2187_, lean_object* v_origTag_2188_, lean_object* v_f_2189_, lean_object* v_args_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm(v_tacticName_2187_, v_origTag_2188_, v_f_2189_, v_args_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_);
lean_dec(v_a_2194_);
lean_dec_ref(v_a_2193_);
lean_dec(v_a_2192_);
lean_dec_ref(v_a_2191_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1(lean_object* v_upperBound_2197_, lean_object* v_args_2198_, lean_object* v___x_2199_, lean_object* v_origTag_2200_, lean_object* v_tacticName_2201_, lean_object* v_inst_2202_, lean_object* v_R_2203_, lean_object* v_a_2204_, lean_object* v_b_2205_, lean_object* v_c_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
lean_object* v___x_2212_; 
v___x_2212_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___redArg(v_upperBound_2197_, v_args_2198_, v___x_2199_, v_origTag_2200_, v_tacticName_2201_, v_a_2204_, v_b_2205_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1___boxed(lean_object* v_upperBound_2213_, lean_object* v_args_2214_, lean_object* v___x_2215_, lean_object* v_origTag_2216_, lean_object* v_tacticName_2217_, lean_object* v_inst_2218_, lean_object* v_R_2219_, lean_object* v_a_2220_, lean_object* v_b_2221_, lean_object* v_c_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm_spec__1(v_upperBound_2213_, v_args_2214_, v___x_2215_, v_origTag_2216_, v_tacticName_2217_, v_inst_2218_, v_R_2219_, v_a_2220_, v_b_2221_, v_c_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec_ref(v___x_2215_);
lean_dec_ref(v_args_2214_);
lean_dec(v_upperBound_2213_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__1(lean_object* v_msg_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v___f_2235_; lean_object* v___x_4314__overap_2236_; lean_object* v___x_2237_; 
v___f_2235_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__1___closed__0));
v___x_4314__overap_2236_ = lean_panic_fn_borrowed(v___f_2235_, v_msg_2229_);
lean_inc(v___y_2233_);
lean_inc_ref(v___y_2232_);
lean_inc(v___y_2231_);
lean_inc_ref(v___y_2230_);
v___x_2237_ = lean_apply_5(v___x_4314__overap_2236_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, lean_box(0));
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__1___boxed(lean_object* v_msg_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l_panic___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__1(v_msg_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0(lean_object* v_binderType_2248_, lean_object* v_body_2249_, lean_object* v_mvarId_2250_, uint8_t v_domain_2251_, lean_object* v_binderName_2252_, lean_object* v_tacticName_2253_, lean_object* v_rhs_2254_, lean_object* v_arg_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v___x_2261_; 
lean_inc_ref(v_binderType_2248_);
v___x_2261_ = l_Lean_Meta_getLevel(v_binderType_2248_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2262_);
lean_dec_ref_known(v___x_2261_, 1);
v___x_2263_ = lean_expr_instantiate1(v_body_2249_, v_arg_2255_);
lean_inc(v_mvarId_2250_);
v___x_2264_ = l_Lean_MVarId_getTag(v_mvarId_2250_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2266_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2264_, 1);
lean_inc_ref(v___x_2263_);
v___x_2266_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v___x_2263_, v_a_2265_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v_fst_2268_; lean_object* v_snd_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2344_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2267_);
lean_dec_ref_known(v___x_2266_, 1);
v_fst_2268_ = lean_ctor_get(v_a_2267_, 0);
v_snd_2269_ = lean_ctor_get(v_a_2267_, 1);
v_isSharedCheck_2344_ = !lean_is_exclusive(v_a_2267_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2271_ = v_a_2267_;
v_isShared_2272_ = v_isSharedCheck_2344_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_snd_2269_);
lean_inc(v_fst_2268_);
lean_dec(v_a_2267_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2344_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_Meta_getLevel(v___x_2263_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; uint8_t v___x_2278_; uint8_t v___x_2279_; lean_object* v___x_2280_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = lean_unsigned_to_nat(1u);
v___x_2276_ = lean_mk_empty_array_with_capacity(v___x_2275_);
v___x_2277_ = lean_array_push(v___x_2276_, v_arg_2255_);
v___x_2278_ = 1;
v___x_2279_ = 1;
v___x_2280_ = l_Lean_Meta_mkLambdaFVars(v___x_2277_, v_fst_2268_, v_domain_2251_, v___x_2278_, v_domain_2251_, v___x_2278_, v___x_2279_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2282_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2281_);
lean_dec_ref_known(v___x_2280_, 1);
lean_inc(v_snd_2269_);
v___x_2282_ = l_Lean_Meta_mkLambdaFVars(v___x_2277_, v_snd_2269_, v_domain_2251_, v___x_2278_, v_domain_2251_, v___x_2278_, v___x_2279_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
lean_dec_ref(v___x_2277_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2287_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2284_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___closed__1));
v___x_2285_ = lean_box(0);
if (v_isShared_2272_ == 0)
{
lean_ctor_set_tag(v___x_2271_, 1);
lean_ctor_set(v___x_2271_, 1, v___x_2285_);
lean_ctor_set(v___x_2271_, 0, v_a_2274_);
v___x_2287_ = v___x_2271_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2274_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v___x_2285_);
v___x_2287_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; uint8_t v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2288_, 0, v_a_2262_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = l_Lean_Expr_const___override(v___x_2284_, v___x_2288_);
v___x_2290_ = 0;
lean_inc_ref(v_binderType_2248_);
v___x_2291_ = l_Lean_Expr_lam___override(v_binderName_2252_, v_binderType_2248_, v_body_2249_, v___x_2290_);
v___x_2292_ = lean_unsigned_to_nat(4u);
v___x_2293_ = lean_mk_empty_array_with_capacity(v___x_2292_);
v___x_2294_ = lean_array_push(v___x_2293_, v_binderType_2248_);
v___x_2295_ = lean_array_push(v___x_2294_, v___x_2291_);
v___x_2296_ = lean_array_push(v___x_2295_, v_a_2281_);
v___x_2297_ = lean_array_push(v___x_2296_, v_a_2283_);
v___x_2298_ = l_Lean_mkAppN(v___x_2289_, v___x_2297_);
lean_dec_ref(v___x_2297_);
lean_inc_ref(v___x_2298_);
v___x_2299_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof(v_tacticName_2253_, v_rhs_2254_, v___x_2298_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v___x_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2309_; 
lean_dec_ref_known(v___x_2299_, 1);
v___x_2300_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_2250_, v___x_2298_, v___y_2257_);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2309_ == 0)
{
lean_object* v_unused_2310_; 
v_unused_2310_ = lean_ctor_get(v___x_2300_, 0);
lean_dec(v_unused_2310_);
v___x_2302_ = v___x_2300_;
v_isShared_2303_ = v_isSharedCheck_2309_;
goto v_resetjp_2301_;
}
else
{
lean_dec(v___x_2300_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2309_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2304_ = l_Lean_Expr_mvarId_x21(v_snd_2269_);
lean_dec(v_snd_2269_);
v___x_2305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
lean_ctor_set(v___x_2305_, 1, v___x_2285_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 0, v___x_2305_);
v___x_2307_ = v___x_2302_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec_ref(v___x_2298_);
lean_dec(v_snd_2269_);
lean_dec(v_mvarId_2250_);
v_a_2311_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2299_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2299_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec(v_a_2281_);
lean_dec(v_a_2274_);
lean_del_object(v___x_2271_);
lean_dec(v_snd_2269_);
lean_dec(v_a_2262_);
lean_dec_ref(v_rhs_2254_);
lean_dec_ref(v_tacticName_2253_);
lean_dec(v_binderName_2252_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_body_2249_);
lean_dec_ref(v_binderType_2248_);
v_a_2320_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2282_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2282_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
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
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
lean_dec_ref(v___x_2277_);
lean_dec(v_a_2274_);
lean_del_object(v___x_2271_);
lean_dec(v_snd_2269_);
lean_dec(v_a_2262_);
lean_dec_ref(v_rhs_2254_);
lean_dec_ref(v_tacticName_2253_);
lean_dec(v_binderName_2252_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_body_2249_);
lean_dec_ref(v_binderType_2248_);
v_a_2328_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2280_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2280_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
else
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
lean_del_object(v___x_2271_);
lean_dec(v_snd_2269_);
lean_dec(v_fst_2268_);
lean_dec(v_a_2262_);
lean_dec_ref(v_arg_2255_);
lean_dec_ref(v_rhs_2254_);
lean_dec_ref(v_tacticName_2253_);
lean_dec(v_binderName_2252_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_body_2249_);
lean_dec_ref(v_binderType_2248_);
v_a_2336_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2273_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2273_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2352_; 
lean_dec_ref(v___x_2263_);
lean_dec(v_a_2262_);
lean_dec_ref(v_arg_2255_);
lean_dec_ref(v_rhs_2254_);
lean_dec_ref(v_tacticName_2253_);
lean_dec(v_binderName_2252_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_body_2249_);
lean_dec_ref(v_binderType_2248_);
v_a_2345_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2347_ = v___x_2266_;
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2266_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2350_; 
if (v_isShared_2348_ == 0)
{
v___x_2350_ = v___x_2347_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_a_2345_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
}
else
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2360_; 
lean_dec_ref(v___x_2263_);
lean_dec(v_a_2262_);
lean_dec_ref(v_arg_2255_);
lean_dec_ref(v_rhs_2254_);
lean_dec_ref(v_tacticName_2253_);
lean_dec(v_binderName_2252_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_body_2249_);
lean_dec_ref(v_binderType_2248_);
v_a_2353_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2355_ = v___x_2264_;
v_isShared_2356_ = v_isSharedCheck_2360_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2264_);
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
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_dec_ref(v_arg_2255_);
lean_dec_ref(v_rhs_2254_);
lean_dec_ref(v_tacticName_2253_);
lean_dec(v_binderName_2252_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_body_2249_);
lean_dec_ref(v_binderType_2248_);
v_a_2361_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2261_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2261_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___boxed(lean_object* v_binderType_2369_, lean_object* v_body_2370_, lean_object* v_mvarId_2371_, lean_object* v_domain_2372_, lean_object* v_binderName_2373_, lean_object* v_tacticName_2374_, lean_object* v_rhs_2375_, lean_object* v_arg_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
uint8_t v_domain_boxed_2382_; lean_object* v_res_2383_; 
v_domain_boxed_2382_ = lean_unbox(v_domain_2372_);
v_res_2383_ = l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0(v_binderType_2369_, v_body_2370_, v_mvarId_2371_, v_domain_boxed_2382_, v_binderName_2373_, v_tacticName_2374_, v_rhs_2375_, v_arg_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___lam__0(lean_object* v_k_2384_, lean_object* v_b_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v___x_2391_; 
lean_inc(v___y_2389_);
lean_inc_ref(v___y_2388_);
lean_inc(v___y_2387_);
lean_inc_ref(v___y_2386_);
v___x_2391_ = lean_apply_6(v_k_2384_, v_b_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, lean_box(0));
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_2392_, lean_object* v_b_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___lam__0(v_k_2392_, v_b_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg(lean_object* v_name_2400_, uint8_t v_bi_2401_, lean_object* v_type_2402_, lean_object* v_k_2403_, uint8_t v_kind_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v___f_2410_; lean_object* v___x_2411_; 
v___f_2410_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2410_, 0, v_k_2403_);
v___x_2411_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2400_, v_bi_2401_, v_type_2402_, v___f_2410_, v_kind_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2411_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2411_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
v_a_2420_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2411_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2411_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg___boxed(lean_object* v_name_2428_, lean_object* v_bi_2429_, lean_object* v_type_2430_, lean_object* v_k_2431_, lean_object* v_kind_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
uint8_t v_bi_boxed_2438_; uint8_t v_kind_boxed_2439_; lean_object* v_res_2440_; 
v_bi_boxed_2438_ = lean_unbox(v_bi_2429_);
v_kind_boxed_2439_ = lean_unbox(v_kind_2432_);
v_res_2440_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg(v_name_2428_, v_bi_boxed_2438_, v_type_2430_, v_k_2431_, v_kind_boxed_2439_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg(lean_object* v_name_2441_, lean_object* v_type_2442_, lean_object* v_k_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
uint8_t v___x_2449_; uint8_t v___x_2450_; lean_object* v___x_2451_; 
v___x_2449_ = 0;
v___x_2450_ = 0;
v___x_2451_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg(v_name_2441_, v___x_2449_, v_type_2442_, v_k_2443_, v___x_2450_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg___boxed(lean_object* v_name_2452_, lean_object* v_type_2453_, lean_object* v_k_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg(v_name_2452_, v_type_2453_, v_k_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
return v_res_2460_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congrArgForall___closed__1(void){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congrArgForall___closed__0));
v___x_2463_ = l_Lean_stringToMessageData(v___x_2462_);
return v___x_2463_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congrArgForall___closed__5(void){
_start:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2468_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__2));
v___x_2469_ = lean_unsigned_to_nat(33u);
v___x_2470_ = lean_unsigned_to_nat(158u);
v___x_2471_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congrArgForall___closed__4));
v___x_2472_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrThm_spec__2___redArg___lam__0___closed__0));
v___x_2473_ = l_mkPanicMessageWithDecl(v___x_2472_, v___x_2471_, v___x_2470_, v___x_2469_, v___x_2468_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall(lean_object* v_tacticName_2474_, uint8_t v_domain_2475_, lean_object* v_mvarId_2476_, lean_object* v_lhs_2477_, lean_object* v_rhs_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_){
_start:
{
if (lean_obj_tag(v_lhs_2477_) == 7)
{
if (v_domain_2475_ == 0)
{
lean_object* v_binderName_2491_; lean_object* v_binderType_2492_; lean_object* v_body_2493_; lean_object* v___x_2494_; lean_object* v___f_2495_; lean_object* v___x_2496_; 
v_binderName_2491_ = lean_ctor_get(v_lhs_2477_, 0);
lean_inc_n(v_binderName_2491_, 2);
v_binderType_2492_ = lean_ctor_get(v_lhs_2477_, 1);
lean_inc_ref_n(v_binderType_2492_, 2);
v_body_2493_ = lean_ctor_get(v_lhs_2477_, 2);
lean_inc_ref(v_body_2493_);
lean_dec_ref_known(v_lhs_2477_, 3);
v___x_2494_ = lean_box(v_domain_2475_);
v___f_2495_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_congrArgForall___lam__0___boxed), 13, 7);
lean_closure_set(v___f_2495_, 0, v_binderType_2492_);
lean_closure_set(v___f_2495_, 1, v_body_2493_);
lean_closure_set(v___f_2495_, 2, v_mvarId_2476_);
lean_closure_set(v___f_2495_, 3, v___x_2494_);
lean_closure_set(v___f_2495_, 4, v_binderName_2491_);
lean_closure_set(v___f_2495_, 5, v_tacticName_2474_);
lean_closure_set(v___f_2495_, 6, v_rhs_2478_);
v___x_2496_ = l_Lean_Core_mkFreshUserName(v_binderName_2491_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_object* v_a_2497_; lean_object* v___x_2498_; 
v_a_2497_ = lean_ctor_get(v___x_2496_, 0);
lean_inc(v_a_2497_);
lean_dec_ref_known(v___x_2496_, 1);
v___x_2498_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg(v_a_2497_, v_binderType_2492_, v___f_2495_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_2498_;
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2506_; 
lean_dec_ref(v___f_2495_);
lean_dec_ref(v_binderType_2492_);
v_a_2499_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2496_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2496_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v___x_2504_; 
if (v_isShared_2502_ == 0)
{
v___x_2504_ = v___x_2501_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_a_2499_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
else
{
lean_object* v_binderName_2507_; lean_object* v_binderType_2508_; lean_object* v_body_2509_; uint8_t v_binderInfo_2510_; uint8_t v___x_2511_; 
v_binderName_2507_ = lean_ctor_get(v_lhs_2477_, 0);
lean_inc(v_binderName_2507_);
v_binderType_2508_ = lean_ctor_get(v_lhs_2477_, 1);
lean_inc_ref(v_binderType_2508_);
v_body_2509_ = lean_ctor_get(v_lhs_2477_, 2);
lean_inc_ref(v_body_2509_);
v_binderInfo_2510_ = lean_ctor_get_uint8(v_lhs_2477_, sizeof(void*)*3 + 8);
v___x_2511_ = l_Lean_Expr_hasLooseBVars(v_body_2509_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; 
lean_dec_ref_known(v_lhs_2477_, 3);
lean_inc(v_mvarId_2476_);
v___x_2512_ = l_Lean_MVarId_getTag(v_mvarId_2476_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2514_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
lean_dec_ref_known(v___x_2512_, 1);
v___x_2514_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v_binderType_2508_, v_a_2513_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v_fst_2516_; lean_object* v_snd_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2570_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v_fst_2516_ = lean_ctor_get(v_a_2515_, 0);
v_snd_2517_ = lean_ctor_get(v_a_2515_, 1);
v_isSharedCheck_2570_ = !lean_is_exclusive(v_a_2515_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2519_ = v_a_2515_;
v_isShared_2520_ = v_isSharedCheck_2570_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_snd_2517_);
lean_inc(v_fst_2516_);
lean_dec(v_a_2515_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2570_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v___x_2521_; 
lean_inc_ref(v_body_2509_);
v___x_2521_ = l_Lean_Meta_mkEqRefl(v_body_2509_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2521_, 1);
v___x_2523_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__3));
v___x_2524_ = lean_unsigned_to_nat(2u);
v___x_2525_ = lean_mk_empty_array_with_capacity(v___x_2524_);
lean_inc(v_snd_2517_);
v___x_2526_ = lean_array_push(v___x_2525_, v_snd_2517_);
v___x_2527_ = lean_array_push(v___x_2526_, v_a_2522_);
v___x_2528_ = l_Lean_Meta_mkAppM(v___x_2523_, v___x_2527_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
v___x_2530_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_2476_, v_a_2529_, v_a_2480_);
lean_dec_ref(v___x_2530_);
v___x_2531_ = l_Lean_Expr_forallE___override(v_binderName_2507_, v_fst_2516_, v_body_2509_, v_binderInfo_2510_);
v___x_2532_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(v_tacticName_2474_, v_rhs_2478_, v___x_2531_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2544_; 
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2544_ == 0)
{
lean_object* v_unused_2545_; 
v_unused_2545_ = lean_ctor_get(v___x_2532_, 0);
lean_dec(v_unused_2545_);
v___x_2534_ = v___x_2532_;
v_isShared_2535_ = v_isSharedCheck_2544_;
goto v_resetjp_2533_;
}
else
{
lean_dec(v___x_2532_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2544_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2539_; 
v___x_2536_ = l_Lean_Expr_mvarId_x21(v_snd_2517_);
lean_dec(v_snd_2517_);
v___x_2537_ = lean_box(0);
if (v_isShared_2520_ == 0)
{
lean_ctor_set_tag(v___x_2519_, 1);
lean_ctor_set(v___x_2519_, 1, v___x_2537_);
lean_ctor_set(v___x_2519_, 0, v___x_2536_);
v___x_2539_ = v___x_2519_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2536_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v___x_2537_);
v___x_2539_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
lean_object* v___x_2541_; 
if (v_isShared_2535_ == 0)
{
lean_ctor_set(v___x_2534_, 0, v___x_2539_);
v___x_2541_ = v___x_2534_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v___x_2539_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2553_; 
lean_del_object(v___x_2519_);
lean_dec(v_snd_2517_);
v_a_2546_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2548_ = v___x_2532_;
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v___x_2532_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
lean_object* v___x_2551_; 
if (v_isShared_2549_ == 0)
{
v___x_2551_ = v___x_2548_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v_a_2546_);
v___x_2551_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
return v___x_2551_;
}
}
}
}
else
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
lean_del_object(v___x_2519_);
lean_dec(v_snd_2517_);
lean_dec(v_fst_2516_);
lean_dec_ref(v_body_2509_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2554_ = lean_ctor_get(v___x_2528_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2528_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2528_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2554_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_del_object(v___x_2519_);
lean_dec(v_snd_2517_);
lean_dec(v_fst_2516_);
lean_dec_ref(v_body_2509_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2562_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2521_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2521_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2578_; 
lean_dec_ref(v_body_2509_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2571_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2573_ = v___x_2514_;
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2514_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2576_; 
if (v_isShared_2574_ == 0)
{
v___x_2576_ = v___x_2573_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2571_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
else
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
lean_dec_ref(v_body_2509_);
lean_dec_ref(v_binderType_2508_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2579_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___x_2512_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2512_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2584_; 
if (v_isShared_2582_ == 0)
{
v___x_2584_ = v___x_2581_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2579_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
}
else
{
lean_object* v___x_2587_; 
lean_inc_ref(v_body_2509_);
v___x_2587_ = l_Lean_Meta_isProp(v_body_2509_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; uint8_t v___x_2589_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___x_2587_, 1);
v___x_2589_ = lean_unbox(v_a_2588_);
lean_dec(v_a_2588_);
if (v___x_2589_ == 0)
{
lean_dec_ref(v_body_2509_);
lean_dec_ref(v_binderType_2508_);
lean_dec(v_binderName_2507_);
lean_dec_ref_known(v_lhs_2477_, 3);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
goto v___jp_2484_;
}
else
{
lean_object* v___x_2590_; 
v___x_2590_ = l_Lean_Meta_isProp(v_lhs_2477_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; uint8_t v___x_2592_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc(v_a_2591_);
lean_dec_ref_known(v___x_2590_, 1);
v___x_2592_ = lean_unbox(v_a_2591_);
lean_dec(v_a_2591_);
if (v___x_2592_ == 0)
{
lean_dec_ref(v_body_2509_);
lean_dec_ref(v_binderType_2508_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
goto v___jp_2484_;
}
else
{
lean_object* v___x_2593_; 
lean_inc(v_mvarId_2476_);
v___x_2593_ = l_Lean_MVarId_getTag(v_mvarId_2476_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2595_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
lean_inc_ref(v_binderType_2508_);
v___x_2595_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v_binderType_2508_, v_a_2594_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; lean_object* v_snd_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2641_; 
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2595_, 1);
v_snd_2597_ = lean_ctor_get(v_a_2596_, 1);
v_isSharedCheck_2641_ = !lean_is_exclusive(v_a_2596_);
if (v_isSharedCheck_2641_ == 0)
{
lean_object* v_unused_2642_; 
v_unused_2642_ = lean_ctor_get(v_a_2596_, 0);
lean_dec(v_unused_2642_);
v___x_2599_ = v_a_2596_;
v_isShared_2600_ = v_isSharedCheck_2641_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_snd_2597_);
lean_dec(v_a_2596_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2641_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2601_; uint8_t v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2601_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congrArgForall___closed__3));
v___x_2602_ = 0;
v___x_2603_ = l_Lean_Expr_lam___override(v_binderName_2507_, v_binderType_2508_, v_body_2509_, v___x_2602_);
v___x_2604_ = lean_unsigned_to_nat(2u);
v___x_2605_ = lean_mk_empty_array_with_capacity(v___x_2604_);
lean_inc(v_snd_2597_);
v___x_2606_ = lean_array_push(v___x_2605_, v_snd_2597_);
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2603_);
v___x_2608_ = l_Lean_Meta_mkAppM(v___x_2601_, v___x_2607_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2610_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc_n(v_a_2609_, 2);
lean_dec_ref_known(v___x_2608_, 1);
v___x_2610_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof(v_tacticName_2474_, v_rhs_2478_, v_a_2609_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v___x_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2623_; 
lean_dec_ref_known(v___x_2610_, 1);
v___x_2611_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_2476_, v_a_2609_, v_a_2480_);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2623_ == 0)
{
lean_object* v_unused_2624_; 
v_unused_2624_ = lean_ctor_get(v___x_2611_, 0);
lean_dec(v_unused_2624_);
v___x_2613_ = v___x_2611_;
v_isShared_2614_ = v_isSharedCheck_2623_;
goto v_resetjp_2612_;
}
else
{
lean_dec(v___x_2611_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2623_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2618_; 
v___x_2615_ = l_Lean_Expr_mvarId_x21(v_snd_2597_);
lean_dec(v_snd_2597_);
v___x_2616_ = lean_box(0);
if (v_isShared_2600_ == 0)
{
lean_ctor_set_tag(v___x_2599_, 1);
lean_ctor_set(v___x_2599_, 1, v___x_2616_);
lean_ctor_set(v___x_2599_, 0, v___x_2615_);
v___x_2618_ = v___x_2599_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2615_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v___x_2616_);
v___x_2618_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
lean_object* v___x_2620_; 
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 0, v___x_2618_);
v___x_2620_ = v___x_2613_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v___x_2618_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
lean_dec(v_a_2609_);
lean_del_object(v___x_2599_);
lean_dec(v_snd_2597_);
lean_dec(v_mvarId_2476_);
v_a_2625_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2610_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2610_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_del_object(v___x_2599_);
lean_dec(v_snd_2597_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2633_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2608_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2608_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec_ref(v_body_2509_);
lean_dec_ref(v_binderType_2508_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2643_ = lean_ctor_get(v___x_2595_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2595_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2595_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2595_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
lean_dec_ref(v_body_2509_);
lean_dec_ref(v_binderType_2508_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2651_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2593_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2593_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
lean_dec_ref(v_body_2509_);
lean_dec_ref(v_binderType_2508_);
lean_dec(v_binderName_2507_);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2659_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2590_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2590_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
lean_dec_ref(v_body_2509_);
lean_dec_ref(v_binderType_2508_);
lean_dec(v_binderName_2507_);
lean_dec_ref_known(v_lhs_2477_, 3);
lean_dec_ref(v_rhs_2478_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v_a_2667_ = lean_ctor_get(v___x_2587_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2587_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2587_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2587_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
}
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
lean_dec_ref(v_rhs_2478_);
lean_dec_ref(v_lhs_2477_);
lean_dec(v_mvarId_2476_);
lean_dec_ref(v_tacticName_2474_);
v___x_2675_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgForall___closed__5, &l_Lean_Elab_Tactic_Conv_congrArgForall___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_congrArgForall___closed__5);
v___x_2676_ = l_panic___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__1(v___x_2675_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_2676_;
}
v___jp_2484_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2485_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof___closed__3);
v___x_2486_ = l_Lean_stringToMessageData(v_tacticName_2474_);
v___x_2487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2485_);
lean_ctor_set(v___x_2487_, 1, v___x_2486_);
v___x_2488_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgForall___closed__1, &l_Lean_Elab_Tactic_Conv_congrArgForall___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_congrArgForall___closed__1);
v___x_2489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2487_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
v___x_2490_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_2489_, v_a_2479_, v_a_2480_, v_a_2481_, v_a_2482_);
return v___x_2490_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgForall___boxed(lean_object* v_tacticName_2677_, lean_object* v_domain_2678_, lean_object* v_mvarId_2679_, lean_object* v_lhs_2680_, lean_object* v_rhs_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_){
_start:
{
uint8_t v_domain_boxed_2687_; lean_object* v_res_2688_; 
v_domain_boxed_2687_ = lean_unbox(v_domain_2678_);
v_res_2688_ = l_Lean_Elab_Tactic_Conv_congrArgForall(v_tacticName_2677_, v_domain_boxed_2687_, v_mvarId_2679_, v_lhs_2680_, v_rhs_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_);
lean_dec(v_a_2685_);
lean_dec_ref(v_a_2684_);
lean_dec(v_a_2683_);
lean_dec_ref(v_a_2682_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0(lean_object* v_00_u03b1_2689_, lean_object* v_name_2690_, uint8_t v_bi_2691_, lean_object* v_type_2692_, lean_object* v_k_2693_, uint8_t v_kind_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___redArg(v_name_2690_, v_bi_2691_, v_type_2692_, v_k_2693_, v_kind_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2701_, lean_object* v_name_2702_, lean_object* v_bi_2703_, lean_object* v_type_2704_, lean_object* v_k_2705_, lean_object* v_kind_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
uint8_t v_bi_boxed_2712_; uint8_t v_kind_boxed_2713_; lean_object* v_res_2714_; 
v_bi_boxed_2712_ = lean_unbox(v_bi_2703_);
v_kind_boxed_2713_ = lean_unbox(v_kind_2706_);
v_res_2714_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0(v_00_u03b1_2701_, v_name_2702_, v_bi_boxed_2712_, v_type_2704_, v_k_2705_, v_kind_boxed_2713_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0(lean_object* v_00_u03b1_2715_, lean_object* v_name_2716_, lean_object* v_type_2717_, lean_object* v_k_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v___x_2724_; 
v___x_2724_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg(v_name_2716_, v_type_2717_, v_k_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___boxed(lean_object* v_00_u03b1_2725_, lean_object* v_name_2726_, lean_object* v_type_2727_, lean_object* v_k_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0(v_00_u03b1_2725_, v_name_2726_, v_type_2727_, v_k_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__0(lean_object* v_a_2735_){
_start:
{
lean_object* v___x_2736_; 
v___x_2736_ = lean_nat_to_int(v_a_2735_);
return v___x_2736_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2738_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__0));
v___x_2739_ = l_Lean_stringToMessageData(v___x_2738_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0(lean_object* v_snd_2740_, lean_object* v_a_2741_, lean_object* v_____r_2742_, lean_object* v_fType_2743_, lean_object* v_j_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
if (lean_obj_tag(v_fType_2743_) == 7)
{
lean_object* v_body_2750_; uint8_t v_binderInfo_2751_; uint8_t v___x_2752_; 
v_body_2750_ = lean_ctor_get(v_fType_2743_, 2);
lean_inc_ref(v_body_2750_);
v_binderInfo_2751_ = lean_ctor_get_uint8(v_fType_2743_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_fType_2743_, 3);
v___x_2752_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_2751_);
if (v___x_2752_ == 0)
{
lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
lean_dec(v_a_2741_);
lean_inc(v_j_2744_);
v___x_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2753_, 0, v_j_2744_);
lean_ctor_set(v___x_2753_, 1, v_snd_2740_);
v___x_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2754_, 0, v_body_2750_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
v___x_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2755_);
return v___x_2756_;
}
else
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2757_ = lean_array_push(v_snd_2740_, v_a_2741_);
lean_inc(v_j_2744_);
v___x_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2758_, 0, v_j_2744_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v_body_2750_);
lean_ctor_set(v___x_2759_, 1, v___x_2758_);
v___x_2760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2759_);
v___x_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2760_);
return v___x_2761_;
}
}
else
{
lean_object* v___x_2762_; lean_object* v___x_2763_; 
lean_dec(v_a_2741_);
v___x_2762_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___closed__1);
v___x_2763_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_2762_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2773_; 
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2763_);
if (v_isSharedCheck_2773_ == 0)
{
lean_object* v_unused_2774_; 
v_unused_2774_ = lean_ctor_get(v___x_2763_, 0);
lean_dec(v_unused_2774_);
v___x_2765_ = v___x_2763_;
v_isShared_2766_ = v_isSharedCheck_2773_;
goto v_resetjp_2764_;
}
else
{
lean_dec(v___x_2763_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2773_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2771_; 
lean_inc(v_j_2744_);
v___x_2767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2767_, 0, v_j_2744_);
lean_ctor_set(v___x_2767_, 1, v_snd_2740_);
v___x_2768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2768_, 0, v_fType_2743_);
lean_ctor_set(v___x_2768_, 1, v___x_2767_);
v___x_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2768_);
if (v_isShared_2766_ == 0)
{
lean_ctor_set(v___x_2765_, 0, v___x_2769_);
v___x_2771_ = v___x_2765_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2769_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
else
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2782_; 
lean_dec_ref(v_fType_2743_);
lean_dec(v_snd_2740_);
v_a_2775_ = lean_ctor_get(v___x_2763_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2763_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2777_ = v___x_2763_;
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2763_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2780_; 
if (v_isShared_2778_ == 0)
{
v___x_2780_ = v___x_2777_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_a_2775_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0___boxed(lean_object* v_snd_2783_, lean_object* v_a_2784_, lean_object* v_____r_2785_, lean_object* v_fType_2786_, lean_object* v_j_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0(v_snd_2783_, v_a_2784_, v_____r_2785_, v_fType_2786_, v_j_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
lean_dec(v_j_2787_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg(lean_object* v_upperBound_2794_, lean_object* v_xs_2795_, lean_object* v_a_2796_, lean_object* v_b_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
lean_object* v___y_2804_; uint8_t v___x_2826_; 
v___x_2826_ = lean_nat_dec_lt(v_a_2796_, v_upperBound_2794_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2827_; 
lean_dec(v_a_2796_);
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v_b_2797_);
return v___x_2827_;
}
else
{
lean_object* v_snd_2828_; lean_object* v_fst_2829_; lean_object* v_fst_2830_; lean_object* v_snd_2831_; lean_object* v___y_2833_; uint8_t v___x_2845_; 
v_snd_2828_ = lean_ctor_get(v_b_2797_, 1);
lean_inc(v_snd_2828_);
v_fst_2829_ = lean_ctor_get(v_b_2797_, 0);
lean_inc(v_fst_2829_);
lean_dec_ref(v_b_2797_);
v_fst_2830_ = lean_ctor_get(v_snd_2828_, 0);
lean_inc(v_fst_2830_);
v_snd_2831_ = lean_ctor_get(v_snd_2828_, 1);
lean_inc(v_snd_2831_);
lean_dec(v_snd_2828_);
v___x_2845_ = l_Lean_Expr_isForall(v_fst_2829_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2846_; uint8_t v_transparency_2847_; uint8_t v___x_2848_; lean_object* v___x_2849_; uint8_t v___x_2850_; 
v___x_2846_ = l_Lean_Meta_Context_config(v___y_2798_);
v_transparency_2847_ = lean_ctor_get_uint8(v___x_2846_, 9);
lean_dec_ref(v___x_2846_);
v___x_2848_ = 0;
v___x_2849_ = lean_expr_instantiate_rev_range(v_fst_2829_, v_fst_2830_, v_a_2796_, v_xs_2795_);
lean_dec(v_fst_2830_);
lean_dec(v_fst_2829_);
v___x_2850_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2847_, v___x_2848_);
if (v___x_2850_ == 0)
{
lean_object* v_keyedConfig_2851_; uint8_t v_trackZetaDelta_2852_; lean_object* v_zetaDeltaSet_2853_; lean_object* v_lctx_2854_; lean_object* v_localInstances_2855_; lean_object* v_defEqCtx_x3f_2856_; lean_object* v_synthPendingDepth_2857_; lean_object* v_customCanUnfoldPredicate_x3f_2858_; uint8_t v_univApprox_2859_; uint8_t v_inTypeClassResolution_2860_; uint8_t v_cacheInferType_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v_keyedConfig_2851_ = lean_ctor_get(v___y_2798_, 0);
v_trackZetaDelta_2852_ = lean_ctor_get_uint8(v___y_2798_, sizeof(void*)*7);
v_zetaDeltaSet_2853_ = lean_ctor_get(v___y_2798_, 1);
v_lctx_2854_ = lean_ctor_get(v___y_2798_, 2);
v_localInstances_2855_ = lean_ctor_get(v___y_2798_, 3);
v_defEqCtx_x3f_2856_ = lean_ctor_get(v___y_2798_, 4);
v_synthPendingDepth_2857_ = lean_ctor_get(v___y_2798_, 5);
v_customCanUnfoldPredicate_x3f_2858_ = lean_ctor_get(v___y_2798_, 6);
v_univApprox_2859_ = lean_ctor_get_uint8(v___y_2798_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2860_ = lean_ctor_get_uint8(v___y_2798_, sizeof(void*)*7 + 2);
v_cacheInferType_2861_ = lean_ctor_get_uint8(v___y_2798_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2851_);
v___x_2862_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2848_, v_keyedConfig_2851_);
lean_inc(v_customCanUnfoldPredicate_x3f_2858_);
lean_inc(v_synthPendingDepth_2857_);
lean_inc(v_defEqCtx_x3f_2856_);
lean_inc_ref(v_localInstances_2855_);
lean_inc_ref(v_lctx_2854_);
lean_inc(v_zetaDeltaSet_2853_);
v___x_2863_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2863_, 0, v___x_2862_);
lean_ctor_set(v___x_2863_, 1, v_zetaDeltaSet_2853_);
lean_ctor_set(v___x_2863_, 2, v_lctx_2854_);
lean_ctor_set(v___x_2863_, 3, v_localInstances_2855_);
lean_ctor_set(v___x_2863_, 4, v_defEqCtx_x3f_2856_);
lean_ctor_set(v___x_2863_, 5, v_synthPendingDepth_2857_);
lean_ctor_set(v___x_2863_, 6, v_customCanUnfoldPredicate_x3f_2858_);
lean_ctor_set_uint8(v___x_2863_, sizeof(void*)*7, v_trackZetaDelta_2852_);
lean_ctor_set_uint8(v___x_2863_, sizeof(void*)*7 + 1, v_univApprox_2859_);
lean_ctor_set_uint8(v___x_2863_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2860_);
lean_ctor_set_uint8(v___x_2863_, sizeof(void*)*7 + 3, v_cacheInferType_2861_);
lean_inc(v___y_2801_);
lean_inc_ref(v___y_2800_);
lean_inc(v___y_2799_);
v___x_2864_ = lean_whnf(v___x_2849_, v___x_2863_, v___y_2799_, v___y_2800_, v___y_2801_);
v___y_2833_ = v___x_2864_;
goto v___jp_2832_;
}
else
{
lean_object* v___x_2865_; 
lean_inc(v___y_2801_);
lean_inc_ref(v___y_2800_);
lean_inc(v___y_2799_);
lean_inc_ref(v___y_2798_);
v___x_2865_ = lean_whnf(v___x_2849_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
v___y_2833_ = v___x_2865_;
goto v___jp_2832_;
}
}
else
{
lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2866_ = lean_box(0);
lean_inc(v_a_2796_);
v___x_2867_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0(v_snd_2831_, v_a_2796_, v___x_2866_, v_fst_2829_, v_fst_2830_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
lean_dec(v_fst_2830_);
v___y_2804_ = v___x_2867_;
goto v___jp_2803_;
}
v___jp_2832_:
{
if (lean_obj_tag(v___y_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v_a_2834_ = lean_ctor_get(v___y_2833_, 0);
lean_inc(v_a_2834_);
lean_dec_ref_known(v___y_2833_, 1);
v___x_2835_ = lean_box(0);
lean_inc(v_a_2796_);
v___x_2836_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___lam__0(v_snd_2831_, v_a_2796_, v___x_2835_, v_a_2834_, v_a_2796_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
v___y_2804_ = v___x_2836_;
goto v___jp_2803_;
}
else
{
lean_object* v_a_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2844_; 
lean_dec(v_snd_2831_);
lean_dec(v_a_2796_);
v_a_2837_ = lean_ctor_get(v___y_2833_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___y_2833_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2839_ = v___y_2833_;
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_a_2837_);
lean_dec(v___y_2833_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2842_; 
if (v_isShared_2840_ == 0)
{
v___x_2842_ = v___x_2839_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_a_2837_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
}
}
v___jp_2803_:
{
if (lean_obj_tag(v___y_2804_) == 0)
{
lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2817_; 
v_a_2805_ = lean_ctor_get(v___y_2804_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___y_2804_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2807_ = v___y_2804_;
v_isShared_2808_ = v_isSharedCheck_2817_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_dec(v___y_2804_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2817_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
if (lean_obj_tag(v_a_2805_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2811_; 
lean_dec(v_a_2796_);
v_a_2809_ = lean_ctor_get(v_a_2805_, 0);
lean_inc(v_a_2809_);
lean_dec_ref_known(v_a_2805_, 1);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v_a_2809_);
v___x_2811_ = v___x_2807_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2809_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
lean_del_object(v___x_2807_);
v_a_2813_ = lean_ctor_get(v_a_2805_, 0);
lean_inc(v_a_2813_);
lean_dec_ref_known(v_a_2805_, 1);
v___x_2814_ = lean_unsigned_to_nat(1u);
v___x_2815_ = lean_nat_add(v_a_2796_, v___x_2814_);
lean_dec(v_a_2796_);
v_a_2796_ = v___x_2815_;
v_b_2797_ = v_a_2813_;
goto _start;
}
}
}
else
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2825_; 
lean_dec(v_a_2796_);
v_a_2818_ = lean_ctor_get(v___y_2804_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___y_2804_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2820_ = v___y_2804_;
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___y_2804_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2825_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2823_; 
if (v_isShared_2821_ == 0)
{
v___x_2823_ = v___x_2820_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v_a_2818_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg___boxed(lean_object* v_upperBound_2868_, lean_object* v_xs_2869_, lean_object* v_a_2870_, lean_object* v_b_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg(v_upperBound_2868_, v_xs_2869_, v_a_2870_, v_b_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec_ref(v_xs_2869_);
lean_dec(v_upperBound_2868_);
return v_res_2877_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3(void){
_start:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__2));
v___x_2885_ = l_Lean_stringToMessageData(v___x_2884_);
return v___x_2885_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__5(void){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__4));
v___x_2888_ = l_Lean_stringToMessageData(v___x_2887_);
return v___x_2888_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6(void){
_start:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
v___x_2889_ = lean_unsigned_to_nat(0u);
v___x_2890_ = lean_nat_to_int(v___x_2889_);
return v___x_2890_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7(void){
_start:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2891_ = lean_unsigned_to_nat(1u);
v___x_2892_ = lean_nat_to_int(v___x_2891_);
return v___x_2892_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__9(void){
_start:
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2894_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__8));
v___x_2895_ = l_Lean_stringToMessageData(v___x_2894_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs(lean_object* v_tacticName_2896_, uint8_t v_explicit_2897_, lean_object* v_f_2898_, lean_object* v_xs_2899_, lean_object* v_i_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_){
_start:
{
lean_object* v___y_2907_; lean_object* v_lower_2908_; lean_object* v_upper_2909_; lean_object* v___y_2915_; lean_object* v_lower_2916_; lean_object* v_upper_2917_; 
if (v_explicit_2897_ == 0)
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_2904_);
lean_inc_ref(v_a_2903_);
lean_inc(v_a_2902_);
lean_inc_ref(v_a_2901_);
lean_inc_ref(v_f_2898_);
v___x_2923_ = lean_infer_type(v_f_2898_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
lean_dec_ref_known(v___x_2923_, 1);
v___x_2925_ = lean_array_get_size(v_xs_2899_);
v___x_2926_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__1));
v___x_2927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2927_, 0, v_a_2924_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg(v___x_2925_, v_xs_2899_, v___x_2922_, v___x_2927_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v_a_2929_; lean_object* v_snd_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2988_; 
v_a_2929_ = lean_ctor_get(v___x_2928_, 0);
lean_inc(v_a_2929_);
lean_dec_ref_known(v___x_2928_, 1);
v_snd_2930_ = lean_ctor_get(v_a_2929_, 1);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_a_2929_);
if (v_isSharedCheck_2988_ == 0)
{
lean_object* v_unused_2989_; 
v_unused_2989_ = lean_ctor_get(v_a_2929_, 0);
lean_dec(v_unused_2989_);
v___x_2932_ = v_a_2929_;
v_isShared_2933_ = v_isSharedCheck_2988_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_snd_2930_);
lean_dec(v_a_2929_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2988_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v_snd_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2986_; 
v_snd_2934_ = lean_ctor_get(v_snd_2930_, 1);
v_isSharedCheck_2986_ = !lean_is_exclusive(v_snd_2930_);
if (v_isSharedCheck_2986_ == 0)
{
lean_object* v_unused_2987_; 
v_unused_2987_ = lean_ctor_get(v_snd_2930_, 0);
lean_dec(v_unused_2987_);
v___x_2936_ = v_snd_2930_;
v_isShared_2937_ = v_isSharedCheck_2986_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_snd_2934_);
lean_dec(v_snd_2930_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2986_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___y_2939_; lean_object* v___y_2947_; lean_object* v___x_2973_; lean_object* v___y_2975_; uint8_t v___x_2980_; 
v___x_2973_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6);
v___x_2980_ = lean_int_dec_lt(v___x_2973_, v_i_2900_);
if (v___x_2980_ == 0)
{
lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2981_ = lean_array_get_size(v_snd_2934_);
v___x_2982_ = lean_nat_to_int(v___x_2981_);
v___x_2983_ = lean_int_add(v_i_2900_, v___x_2982_);
lean_dec(v___x_2982_);
v___y_2975_ = v___x_2983_;
goto v___jp_2974_;
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7);
v___x_2985_ = lean_int_sub(v_i_2900_, v___x_2984_);
v___y_2975_ = v___x_2985_;
goto v___jp_2974_;
}
v___jp_2938_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; uint8_t v___x_2945_; 
v___x_2940_ = lean_nat_abs(v___y_2939_);
lean_dec(v___y_2939_);
v___x_2941_ = lean_array_get(v___x_2922_, v_snd_2934_, v___x_2940_);
lean_dec(v___x_2940_);
lean_dec(v_snd_2934_);
lean_inc(v___x_2941_);
lean_inc_ref(v_xs_2899_);
v___x_2942_ = l_Array_toSubarray___redArg(v_xs_2899_, v___x_2922_, v___x_2941_);
v___x_2943_ = l_Subarray_copy___redArg(v___x_2942_);
v___x_2944_ = l_Lean_mkAppN(v_f_2898_, v___x_2943_);
lean_dec_ref(v___x_2943_);
v___x_2945_ = lean_nat_dec_le(v___x_2941_, v___x_2922_);
if (v___x_2945_ == 0)
{
v___y_2915_ = v___x_2944_;
v_lower_2916_ = v___x_2941_;
v_upper_2917_ = v___x_2925_;
goto v___jp_2914_;
}
else
{
lean_dec(v___x_2941_);
v___y_2915_ = v___x_2944_;
v_lower_2916_ = v___x_2922_;
v_upper_2917_ = v___x_2925_;
goto v___jp_2914_;
}
}
v___jp_2946_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2951_; 
lean_dec(v___y_2947_);
v___x_2948_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1);
v___x_2949_ = l_Lean_stringToMessageData(v_tacticName_2896_);
if (v_isShared_2937_ == 0)
{
lean_ctor_set_tag(v___x_2936_, 7);
lean_ctor_set(v___x_2936_, 1, v___x_2949_);
lean_ctor_set(v___x_2936_, 0, v___x_2948_);
v___x_2951_ = v___x_2936_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2948_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; lean_object* v___x_2954_; 
v___x_2952_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3);
if (v_isShared_2933_ == 0)
{
lean_ctor_set_tag(v___x_2932_, 7);
lean_ctor_set(v___x_2932_, 1, v___x_2952_);
lean_ctor_set(v___x_2932_, 0, v___x_2951_);
v___x_2954_ = v___x_2932_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2951_);
lean_ctor_set(v_reuseFailAlloc_2971_, 1, v___x_2952_);
v___x_2954_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
v___x_2955_ = lean_array_get_size(v_snd_2934_);
lean_dec(v_snd_2934_);
v___x_2956_ = l_Nat_reprFast(v___x_2955_);
v___x_2957_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
v___x_2958_ = l_Lean_MessageData_ofFormat(v___x_2957_);
v___x_2959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2954_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__5, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__5_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__5);
v___x_2961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2959_);
lean_ctor_set(v___x_2961_, 1, v___x_2960_);
v___x_2962_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_2961_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_);
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2962_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2962_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
}
}
v___jp_2974_:
{
uint8_t v___x_2976_; 
v___x_2976_ = lean_int_dec_lt(v___y_2975_, v___x_2973_);
if (v___x_2976_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; uint8_t v___x_2979_; 
v___x_2977_ = lean_array_get_size(v_snd_2934_);
v___x_2978_ = lean_nat_to_int(v___x_2977_);
v___x_2979_ = lean_int_dec_le(v___x_2978_, v___y_2975_);
lean_dec(v___x_2978_);
if (v___x_2979_ == 0)
{
lean_del_object(v___x_2936_);
lean_del_object(v___x_2932_);
lean_dec_ref(v_tacticName_2896_);
v___y_2939_ = v___y_2975_;
goto v___jp_2938_;
}
else
{
lean_dec_ref(v_xs_2899_);
lean_dec_ref(v_f_2898_);
v___y_2947_ = v___y_2975_;
goto v___jp_2946_;
}
}
else
{
lean_dec_ref(v_xs_2899_);
lean_dec_ref(v_f_2898_);
v___y_2947_ = v___y_2975_;
goto v___jp_2946_;
}
}
}
}
}
else
{
lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_2997_; 
lean_dec_ref(v_xs_2899_);
lean_dec_ref(v_f_2898_);
lean_dec_ref(v_tacticName_2896_);
v_a_2990_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2992_ = v___x_2928_;
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2928_);
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
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec_ref(v_xs_2899_);
lean_dec_ref(v_f_2898_);
lean_dec_ref(v_tacticName_2896_);
v_a_2998_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2923_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2923_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
else
{
lean_object* v___x_3006_; lean_object* v___y_3008_; lean_object* v___y_3016_; lean_object* v___x_3038_; lean_object* v___y_3040_; uint8_t v___x_3045_; 
v___x_3006_ = lean_unsigned_to_nat(0u);
v___x_3038_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6);
v___x_3045_ = lean_int_dec_lt(v___x_3038_, v_i_2900_);
if (v___x_3045_ == 0)
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; 
v___x_3046_ = lean_array_get_size(v_xs_2899_);
v___x_3047_ = lean_nat_to_int(v___x_3046_);
v___x_3048_ = lean_int_add(v_i_2900_, v___x_3047_);
lean_dec(v___x_3047_);
v___y_3040_ = v___x_3048_;
goto v___jp_3039_;
}
else
{
lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3049_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7);
v___x_3050_ = lean_int_sub(v_i_2900_, v___x_3049_);
v___y_3040_ = v___x_3050_;
goto v___jp_3039_;
}
v___jp_3007_:
{
lean_object* v_idx_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; uint8_t v___x_3014_; 
v_idx_3009_ = lean_nat_abs(v___y_3008_);
lean_dec(v___y_3008_);
lean_inc(v_idx_3009_);
lean_inc_ref(v_xs_2899_);
v___x_3010_ = l_Array_toSubarray___redArg(v_xs_2899_, v___x_3006_, v_idx_3009_);
v___x_3011_ = l_Subarray_copy___redArg(v___x_3010_);
v___x_3012_ = l_Lean_mkAppN(v_f_2898_, v___x_3011_);
lean_dec_ref(v___x_3011_);
v___x_3013_ = lean_array_get_size(v_xs_2899_);
v___x_3014_ = lean_nat_dec_le(v_idx_3009_, v___x_3006_);
if (v___x_3014_ == 0)
{
v___y_2907_ = v___x_3012_;
v_lower_2908_ = v_idx_3009_;
v_upper_2909_ = v___x_3013_;
goto v___jp_2906_;
}
else
{
lean_dec(v_idx_3009_);
v___y_2907_ = v___x_3012_;
v_lower_2908_ = v___x_3006_;
v_upper_2909_ = v___x_3013_;
goto v___jp_2906_;
}
}
v___jp_3015_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_dec(v___y_3016_);
v___x_3017_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1);
v___x_3018_ = l_Lean_stringToMessageData(v_tacticName_2896_);
v___x_3019_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3017_);
lean_ctor_set(v___x_3019_, 1, v___x_3018_);
v___x_3020_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__3);
v___x_3021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3019_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v___x_3022_ = lean_array_get_size(v_xs_2899_);
lean_dec_ref(v_xs_2899_);
v___x_3023_ = l_Nat_reprFast(v___x_3022_);
v___x_3024_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3023_);
v___x_3025_ = l_Lean_MessageData_ofFormat(v___x_3024_);
v___x_3026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3021_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
v___x_3027_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__9, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__9_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__9);
v___x_3028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3026_);
lean_ctor_set(v___x_3028_, 1, v___x_3027_);
v___x_3029_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_3028_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_);
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_3029_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_3029_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
v___jp_3039_:
{
uint8_t v___x_3041_; 
v___x_3041_ = lean_int_dec_lt(v___y_3040_, v___x_3038_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; lean_object* v___x_3043_; uint8_t v___x_3044_; 
v___x_3042_ = lean_array_get_size(v_xs_2899_);
v___x_3043_ = lean_nat_to_int(v___x_3042_);
v___x_3044_ = lean_int_dec_le(v___x_3043_, v___y_3040_);
lean_dec(v___x_3043_);
if (v___x_3044_ == 0)
{
lean_dec_ref(v_tacticName_2896_);
v___y_3008_ = v___y_3040_;
goto v___jp_3007_;
}
else
{
lean_dec_ref(v_f_2898_);
v___y_3016_ = v___y_3040_;
goto v___jp_3015_;
}
}
else
{
lean_dec_ref(v_f_2898_);
v___y_3016_ = v___y_3040_;
goto v___jp_3015_;
}
}
}
v___jp_2906_:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2910_ = l_Array_toSubarray___redArg(v_xs_2899_, v_lower_2908_, v_upper_2909_);
v___x_2911_ = l_Subarray_copy___redArg(v___x_2910_);
v___x_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___y_2907_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
v___x_2913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
return v___x_2913_;
}
v___jp_2914_:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2918_ = l_Array_toSubarray___redArg(v_xs_2899_, v_lower_2916_, v_upper_2917_);
v___x_2919_ = l_Subarray_copy___redArg(v___x_2918_);
v___x_2920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___y_2915_);
lean_ctor_set(v___x_2920_, 1, v___x_2919_);
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
return v___x_2921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___boxed(lean_object* v_tacticName_3051_, lean_object* v_explicit_3052_, lean_object* v_f_3053_, lean_object* v_xs_3054_, lean_object* v_i_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_){
_start:
{
uint8_t v_explicit_boxed_3061_; lean_object* v_res_3062_; 
v_explicit_boxed_3061_ = lean_unbox(v_explicit_3052_);
v_res_3062_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs(v_tacticName_3051_, v_explicit_boxed_3061_, v_f_3053_, v_xs_3054_, v_i_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_);
lean_dec(v_a_3059_);
lean_dec_ref(v_a_3058_);
lean_dec(v_a_3057_);
lean_dec_ref(v_a_3056_);
lean_dec(v_i_3055_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1(lean_object* v_upperBound_3063_, lean_object* v_xs_3064_, lean_object* v_inst_3065_, lean_object* v_R_3066_, lean_object* v_a_3067_, lean_object* v_b_3068_, lean_object* v_c_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_){
_start:
{
lean_object* v___x_3075_; 
v___x_3075_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___redArg(v_upperBound_3063_, v_xs_3064_, v_a_3067_, v_b_3068_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1___boxed(lean_object* v_upperBound_3076_, lean_object* v_xs_3077_, lean_object* v_inst_3078_, lean_object* v_R_3079_, lean_object* v_a_3080_, lean_object* v_b_3081_, lean_object* v_c_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs_spec__1(v_upperBound_3076_, v_xs_3077_, v_inst_3078_, v_R_3079_, v_a_3080_, v_b_3081_, v_c_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_);
lean_dec(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v___y_3084_);
lean_dec_ref(v___y_3083_);
lean_dec_ref(v_xs_3077_);
lean_dec(v_upperBound_3076_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrArgN_spec__0(lean_object* v_tacticName_3089_, uint8_t v_explicit_3090_, lean_object* v_i_3091_, lean_object* v_mvarId_3092_, lean_object* v_snd_3093_, lean_object* v_x_3094_, lean_object* v_x_3095_, lean_object* v_x_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_){
_start:
{
if (lean_obj_tag(v_x_3094_) == 5)
{
lean_object* v_fn_3102_; lean_object* v_arg_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v_fn_3102_ = lean_ctor_get(v_x_3094_, 0);
lean_inc_ref(v_fn_3102_);
v_arg_3103_ = lean_ctor_get(v_x_3094_, 1);
lean_inc_ref(v_arg_3103_);
lean_dec_ref_known(v_x_3094_, 2);
v___x_3104_ = lean_array_set(v_x_3095_, v_x_3096_, v_arg_3103_);
v___x_3105_ = lean_unsigned_to_nat(1u);
v___x_3106_ = lean_nat_sub(v_x_3096_, v___x_3105_);
lean_dec(v_x_3096_);
v_x_3094_ = v_fn_3102_;
v_x_3095_ = v___x_3104_;
v_x_3096_ = v___x_3106_;
goto _start;
}
else
{
lean_object* v___x_3108_; 
lean_dec(v_x_3096_);
lean_inc_ref(v_tacticName_3089_);
v___x_3108_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs(v_tacticName_3089_, v_explicit_3090_, v_x_3094_, v_x_3095_, v_i_3091_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; lean_object* v_fst_3110_; lean_object* v_snd_3111_; lean_object* v___x_3112_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3109_);
lean_dec_ref_known(v___x_3108_, 1);
v_fst_3110_ = lean_ctor_get(v_a_3109_, 0);
lean_inc(v_fst_3110_);
v_snd_3111_ = lean_ctor_get(v_a_3109_, 1);
lean_inc(v_snd_3111_);
lean_dec(v_a_3109_);
lean_inc(v_mvarId_3092_);
v___x_3112_ = l_Lean_MVarId_getTag(v_mvarId_3092_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; lean_object* v___x_3114_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3112_, 1);
lean_inc_ref(v_tacticName_3089_);
v___x_3114_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_mkCongrArgZeroThm(v_tacticName_3089_, v_a_3113_, v_fst_3110_, v_snd_3111_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; lean_object* v_snd_3116_; lean_object* v_fst_3117_; lean_object* v_fst_3118_; lean_object* v_snd_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3145_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
lean_inc(v_a_3115_);
lean_dec_ref_known(v___x_3114_, 1);
v_snd_3116_ = lean_ctor_get(v_a_3115_, 1);
lean_inc(v_snd_3116_);
v_fst_3117_ = lean_ctor_get(v_a_3115_, 0);
lean_inc(v_fst_3117_);
lean_dec(v_a_3115_);
v_fst_3118_ = lean_ctor_get(v_snd_3116_, 0);
v_snd_3119_ = lean_ctor_get(v_snd_3116_, 1);
v_isSharedCheck_3145_ = !lean_is_exclusive(v_snd_3116_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3121_ = v_snd_3116_;
v_isShared_3122_ = v_isSharedCheck_3145_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_snd_3119_);
lean_inc(v_fst_3118_);
lean_dec(v_snd_3116_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3145_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; 
lean_inc(v_fst_3117_);
v___x_3123_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhsFromProof(v_tacticName_3089_, v_snd_3093_, v_fst_3117_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v___x_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3135_; 
lean_dec_ref_known(v___x_3123_, 1);
v___x_3124_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_3092_, v_fst_3117_, v___y_3098_);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3135_ == 0)
{
lean_object* v_unused_3136_; 
v_unused_3136_ = lean_ctor_get(v___x_3124_, 0);
lean_dec(v_unused_3136_);
v___x_3126_ = v___x_3124_;
v_isShared_3127_ = v_isSharedCheck_3135_;
goto v_resetjp_3125_;
}
else
{
lean_dec(v___x_3124_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3135_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3128_; lean_object* v___x_3130_; 
v___x_3128_ = lean_array_to_list(v_snd_3119_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set_tag(v___x_3121_, 1);
lean_ctor_set(v___x_3121_, 1, v___x_3128_);
v___x_3130_ = v___x_3121_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_fst_3118_);
lean_ctor_set(v_reuseFailAlloc_3134_, 1, v___x_3128_);
v___x_3130_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
lean_object* v___x_3132_; 
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 0, v___x_3130_);
v___x_3132_ = v___x_3126_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v___x_3130_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_del_object(v___x_3121_);
lean_dec(v_snd_3119_);
lean_dec(v_fst_3118_);
lean_dec(v_fst_3117_);
lean_dec(v_mvarId_3092_);
v_a_3137_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3123_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3123_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
}
else
{
lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec_ref(v_snd_3093_);
lean_dec(v_mvarId_3092_);
lean_dec_ref(v_tacticName_3089_);
v_a_3146_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3114_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3114_);
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
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
lean_dec(v_snd_3111_);
lean_dec(v_fst_3110_);
lean_dec_ref(v_snd_3093_);
lean_dec(v_mvarId_3092_);
lean_dec_ref(v_tacticName_3089_);
v_a_3154_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3112_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3112_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
else
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_dec_ref(v_snd_3093_);
lean_dec(v_mvarId_3092_);
lean_dec_ref(v_tacticName_3089_);
v_a_3162_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3108_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3108_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrArgN_spec__0___boxed(lean_object* v_tacticName_3170_, lean_object* v_explicit_3171_, lean_object* v_i_3172_, lean_object* v_mvarId_3173_, lean_object* v_snd_3174_, lean_object* v_x_3175_, lean_object* v_x_3176_, lean_object* v_x_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_){
_start:
{
uint8_t v_explicit_boxed_3183_; lean_object* v_res_3184_; 
v_explicit_boxed_3183_ = lean_unbox(v_explicit_3171_);
v_res_3184_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrArgN_spec__0(v_tacticName_3170_, v_explicit_boxed_3183_, v_i_3172_, v_mvarId_3173_, v_snd_3174_, v_x_3175_, v_x_3176_, v_x_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
lean_dec(v___y_3181_);
lean_dec_ref(v___y_3180_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
lean_dec(v_i_3172_);
return v_res_3184_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = lean_unsigned_to_nat(2u);
v___x_3186_ = lean_nat_to_int(v___x_3185_);
return v___x_3186_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0, &l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0);
v___x_3188_ = lean_int_neg(v___x_3187_);
return v___x_3188_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3190_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__2));
v___x_3191_ = l_Lean_stringToMessageData(v___x_3190_);
return v___x_3191_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__4));
v___x_3194_ = l_Lean_stringToMessageData(v___x_3193_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0(lean_object* v_mvarId_3195_, lean_object* v_tacticName_3196_, uint8_t v_explicit_3197_, lean_object* v_i_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v___x_3204_; 
lean_inc(v_mvarId_3195_);
v___x_3204_ = l_Lean_Elab_Tactic_Conv_getLhsRhsCore(v_mvarId_3195_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v_a_3205_; lean_object* v_fst_3206_; lean_object* v_snd_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3264_; 
v_a_3205_ = lean_ctor_get(v___x_3204_, 0);
lean_inc(v_a_3205_);
lean_dec_ref_known(v___x_3204_, 1);
v_fst_3206_ = lean_ctor_get(v_a_3205_, 0);
v_snd_3207_ = lean_ctor_get(v_a_3205_, 1);
v_isSharedCheck_3264_ = !lean_is_exclusive(v_a_3205_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3209_ = v_a_3205_;
v_isShared_3210_ = v_isSharedCheck_3264_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_snd_3207_);
lean_inc(v_fst_3206_);
lean_dec(v_a_3205_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3264_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3211_; lean_object* v_a_3212_; lean_object* v___x_3213_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; lean_object* v___y_3218_; uint8_t v___x_3242_; 
v___x_3211_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(v_fst_3206_, v___y_3200_);
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
lean_inc(v_a_3212_);
lean_dec_ref(v___x_3211_);
v___x_3213_ = l_Lean_Expr_cleanupAnnotations(v_a_3212_);
lean_dec(v_a_3212_);
v___x_3242_ = l_Lean_Expr_isForall(v___x_3213_);
if (v___x_3242_ == 0)
{
uint8_t v___x_3243_; 
lean_del_object(v___x_3209_);
v___x_3243_ = l_Lean_Expr_isApp(v___x_3213_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
lean_dec(v_snd_3207_);
lean_dec(v_mvarId_3195_);
v___x_3244_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1);
v___x_3245_ = l_Lean_stringToMessageData(v_tacticName_3196_);
v___x_3246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3244_);
lean_ctor_set(v___x_3246_, 1, v___x_3245_);
v___x_3247_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__5, &l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__5);
v___x_3248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3246_);
lean_ctor_set(v___x_3248_, 1, v___x_3247_);
v___x_3249_ = l_Lean_indentExpr(v___x_3213_);
v___x_3250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3248_);
lean_ctor_set(v___x_3250_, 1, v___x_3249_);
v___x_3251_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_3250_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3251_;
}
else
{
lean_object* v_dummy_3252_; lean_object* v_nargs_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v_dummy_3252_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2, &l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_congr___lam__0___closed__2);
v_nargs_3253_ = l_Lean_Expr_getAppNumArgs(v___x_3213_);
lean_inc(v_nargs_3253_);
v___x_3254_ = lean_mk_array(v_nargs_3253_, v_dummy_3252_);
v___x_3255_ = lean_unsigned_to_nat(1u);
v___x_3256_ = lean_nat_sub(v_nargs_3253_, v___x_3255_);
lean_dec(v_nargs_3253_);
v___x_3257_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Conv_congrArgN_spec__0(v_tacticName_3196_, v_explicit_3197_, v_i_3198_, v_mvarId_3195_, v_snd_3207_, v___x_3213_, v___x_3254_, v___x_3256_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
return v___x_3257_;
}
}
else
{
lean_object* v___x_3258_; lean_object* v___x_3259_; uint8_t v___x_3260_; 
v___x_3258_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0, &l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__0);
v___x_3259_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1);
v___x_3260_ = lean_int_dec_lt(v_i_3198_, v___x_3259_);
if (v___x_3260_ == 0)
{
lean_object* v___x_3261_; uint8_t v___x_3262_; 
v___x_3261_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6);
v___x_3262_ = lean_int_dec_eq(v_i_3198_, v___x_3261_);
if (v___x_3262_ == 0)
{
uint8_t v___x_3263_; 
v___x_3263_ = lean_int_dec_lt(v___x_3258_, v_i_3198_);
if (v___x_3263_ == 0)
{
lean_del_object(v___x_3209_);
v___y_3215_ = v___y_3199_;
v___y_3216_ = v___y_3200_;
v___y_3217_ = v___y_3201_;
v___y_3218_ = v___y_3202_;
goto v___jp_3214_;
}
else
{
lean_dec_ref(v___x_3213_);
lean_dec(v_snd_3207_);
lean_dec(v_mvarId_3195_);
goto v___jp_3225_;
}
}
else
{
lean_dec_ref(v___x_3213_);
lean_dec(v_snd_3207_);
lean_dec(v_mvarId_3195_);
goto v___jp_3225_;
}
}
else
{
lean_dec_ref(v___x_3213_);
lean_dec(v_snd_3207_);
lean_dec(v_mvarId_3195_);
goto v___jp_3225_;
}
}
v___jp_3214_:
{
lean_object* v___x_3219_; uint8_t v___x_3220_; 
v___x_3219_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7);
v___x_3220_ = lean_int_dec_eq(v_i_3198_, v___x_3219_);
if (v___x_3220_ == 0)
{
lean_object* v___x_3221_; uint8_t v___x_3222_; lean_object* v___x_3223_; 
v___x_3221_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1);
v___x_3222_ = lean_int_dec_eq(v_i_3198_, v___x_3221_);
v___x_3223_ = l_Lean_Elab_Tactic_Conv_congrArgForall(v_tacticName_3196_, v___x_3222_, v_mvarId_3195_, v___x_3213_, v_snd_3207_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3223_;
}
else
{
lean_object* v___x_3224_; 
v___x_3224_ = l_Lean_Elab_Tactic_Conv_congrArgForall(v_tacticName_3196_, v___x_3220_, v_mvarId_3195_, v___x_3213_, v_snd_3207_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3224_;
}
}
v___jp_3225_:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3229_; 
v___x_3226_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs___closed__1);
v___x_3227_ = l_Lean_stringToMessageData(v_tacticName_3196_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set_tag(v___x_3209_, 7);
lean_ctor_set(v___x_3209_, 1, v___x_3227_);
lean_ctor_set(v___x_3209_, 0, v___x_3226_);
v___x_3229_ = v___x_3209_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v___x_3226_);
lean_ctor_set(v_reuseFailAlloc_3241_, 1, v___x_3227_);
v___x_3229_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
v___x_3230_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__3, &l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__3);
v___x_3231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3229_);
lean_ctor_set(v___x_3231_, 1, v___x_3230_);
v___x_3232_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_3231_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3235_ = v___x_3232_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3232_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3233_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
lean_dec_ref(v_tacticName_3196_);
lean_dec(v_mvarId_3195_);
v_a_3265_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3204_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3204_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___boxed(lean_object* v_mvarId_3273_, lean_object* v_tacticName_3274_, lean_object* v_explicit_3275_, lean_object* v_i_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
uint8_t v_explicit_boxed_3282_; lean_object* v_res_3283_; 
v_explicit_boxed_3282_ = lean_unbox(v_explicit_3275_);
v_res_3283_ = l_Lean_Elab_Tactic_Conv_congrArgN___lam__0(v_mvarId_3273_, v_tacticName_3274_, v_explicit_boxed_3282_, v_i_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v_i_3276_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN(lean_object* v_tacticName_3284_, lean_object* v_mvarId_3285_, lean_object* v_i_3286_, uint8_t v_explicit_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_){
_start:
{
lean_object* v___x_3293_; lean_object* v___f_3294_; lean_object* v___x_3295_; 
v___x_3293_ = lean_box(v_explicit_3287_);
lean_inc(v_mvarId_3285_);
v___f_3294_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3294_, 0, v_mvarId_3285_);
lean_closure_set(v___f_3294_, 1, v_tacticName_3284_);
lean_closure_set(v___f_3294_, 2, v___x_3293_);
lean_closure_set(v___f_3294_, 3, v_i_3286_);
v___x_3295_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(v_mvarId_3285_, v___f_3294_, v_a_3288_, v_a_3289_, v_a_3290_, v_a_3291_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_congrArgN___boxed(lean_object* v_tacticName_3296_, lean_object* v_mvarId_3297_, lean_object* v_i_3298_, lean_object* v_explicit_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_){
_start:
{
uint8_t v_explicit_boxed_3305_; lean_object* v_res_3306_; 
v_explicit_boxed_3305_ = lean_unbox(v_explicit_3299_);
v_res_3306_ = l_Lean_Elab_Tactic_Conv_congrArgN(v_tacticName_3296_, v_mvarId_3297_, v_i_3298_, v_explicit_boxed_3305_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
lean_dec(v_a_3303_);
lean_dec_ref(v_a_3302_);
lean_dec(v_a_3301_);
lean_dec_ref(v_a_3300_);
return v_res_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg___redArg(lean_object* v_tacticName_3307_, lean_object* v_i_3308_, uint8_t v_explicit_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_){
_start:
{
lean_object* v___x_3316_; uint8_t v___x_3317_; 
v___x_3316_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__6);
v___x_3317_ = lean_int_dec_eq(v_i_3308_, v___x_3316_);
if (v___x_3317_ == 0)
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_object* v_a_3319_; lean_object* v___x_3320_; 
v_a_3319_ = lean_ctor_get(v___x_3318_, 0);
lean_inc(v_a_3319_);
lean_dec_ref_known(v___x_3318_, 1);
v___x_3320_ = l_Lean_Elab_Tactic_Conv_congrArgN(v_tacticName_3307_, v_a_3319_, v_i_3308_, v_explicit_3309_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3322_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
v___x_3322_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_3321_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
return v___x_3322_;
}
else
{
lean_object* v_a_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3330_; 
v_a_3323_ = lean_ctor_get(v___x_3320_, 0);
v_isSharedCheck_3330_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3330_ == 0)
{
v___x_3325_ = v___x_3320_;
v_isShared_3326_ = v_isSharedCheck_3330_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_a_3323_);
lean_dec(v___x_3320_);
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
lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
lean_dec(v_i_3308_);
lean_dec_ref(v_tacticName_3307_);
v_a_3331_ = lean_ctor_get(v___x_3318_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___x_3318_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3318_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
else
{
lean_object* v___x_3339_; 
lean_dec(v_i_3308_);
lean_dec_ref(v_tacticName_3307_);
v___x_3339_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
if (lean_obj_tag(v___x_3339_) == 0)
{
lean_object* v_a_3340_; lean_object* v___x_3341_; 
v_a_3340_ = lean_ctor_get(v___x_3339_, 0);
lean_inc(v_a_3340_);
lean_dec_ref_known(v___x_3339_, 1);
v___x_3341_ = l_Lean_Elab_Tactic_Conv_congrFunN(v_a_3340_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
if (lean_obj_tag(v___x_3341_) == 0)
{
lean_object* v_a_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; 
v_a_3342_ = lean_ctor_get(v___x_3341_, 0);
lean_inc(v_a_3342_);
lean_dec_ref_known(v___x_3341_, 1);
v___x_3343_ = lean_box(0);
v___x_3344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3344_, 0, v_a_3342_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
v___x_3345_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3344_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
return v___x_3345_;
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
v_a_3346_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3341_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3341_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
else
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
v_a_3354_ = lean_ctor_get(v___x_3339_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3339_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3339_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3339_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg___redArg___boxed(lean_object* v_tacticName_3362_, lean_object* v_i_3363_, lean_object* v_explicit_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_){
_start:
{
uint8_t v_explicit_boxed_3371_; lean_object* v_res_3372_; 
v_explicit_boxed_3371_ = lean_unbox(v_explicit_3364_);
v_res_3372_ = l_Lean_Elab_Tactic_Conv_evalArg___redArg(v_tacticName_3362_, v_i_3363_, v_explicit_boxed_3371_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_);
lean_dec(v_a_3369_);
lean_dec_ref(v_a_3368_);
lean_dec(v_a_3367_);
lean_dec_ref(v_a_3366_);
lean_dec(v_a_3365_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg(lean_object* v_tacticName_3373_, lean_object* v_i_3374_, uint8_t v_explicit_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_){
_start:
{
lean_object* v___x_3385_; 
v___x_3385_ = l_Lean_Elab_Tactic_Conv_evalArg___redArg(v_tacticName_3373_, v_i_3374_, v_explicit_3375_, v_a_3377_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
return v___x_3385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalArg___boxed(lean_object* v_tacticName_3386_, lean_object* v_i_3387_, lean_object* v_explicit_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_){
_start:
{
uint8_t v_explicit_boxed_3398_; lean_object* v_res_3399_; 
v_explicit_boxed_3398_ = lean_unbox(v_explicit_3388_);
v_res_3399_ = l_Lean_Elab_Tactic_Conv_evalArg(v_tacticName_3386_, v_i_3387_, v_explicit_boxed_3398_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_);
lean_dec(v_a_3396_);
lean_dec_ref(v_a_3395_);
lean_dec(v_a_3394_);
lean_dec_ref(v_a_3393_);
lean_dec(v_a_3392_);
lean_dec_ref(v_a_3391_);
lean_dec(v_a_3390_);
lean_dec_ref(v_a_3389_);
return v_res_3399_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3400_ = lean_box(0);
v___x_3401_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
lean_ctor_set(v___x_3402_, 1, v___x_3400_);
return v___x_3402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg(){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___closed__0);
v___x_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3404_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg___boxed(lean_object* v___y_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0(lean_object* v_00_u03b1_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_){
_start:
{
lean_object* v___x_3418_; 
v___x_3418_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___boxed(lean_object* v_00_u03b1_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0(v_00_u03b1_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec(v___y_3421_);
lean_dec_ref(v___y_3420_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_elabArg(lean_object* v_stx_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_, lean_object* v_a_3455_){
_start:
{
lean_object* v___x_3457_; uint8_t v___y_3459_; lean_object* v___y_3460_; lean_object* v___y_3461_; lean_object* v___y_3462_; lean_object* v___y_3463_; lean_object* v___y_3464_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___x_3470_; uint8_t v___x_3471_; 
v___x_3457_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_elabArg___closed__0));
v___x_3470_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_elabArg___closed__1));
lean_inc(v_stx_3447_);
v___x_3471_ = l_Lean_Syntax_isOfKind(v_stx_3447_, v___x_3470_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3472_; 
lean_dec(v_stx_3447_);
v___x_3472_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
return v___x_3472_;
}
else
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___y_3476_; lean_object* v_neg_x3f_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___x_3496_; uint8_t v___x_3497_; 
v___x_3473_ = lean_unsigned_to_nat(1u);
v___x_3474_ = l_Lean_Syntax_getArg(v_stx_3447_, v___x_3473_);
lean_dec(v_stx_3447_);
v___x_3496_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_elabArg___closed__5));
lean_inc(v___x_3474_);
v___x_3497_ = l_Lean_Syntax_isOfKind(v___x_3474_, v___x_3496_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; 
lean_dec(v___x_3474_);
v___x_3498_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
return v___x_3498_;
}
else
{
lean_object* v___x_3499_; lean_object* v_tk_x3f_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; lean_object* v___x_3517_; uint8_t v___x_3518_; 
v___x_3499_ = lean_unsigned_to_nat(0u);
v___x_3517_ = l_Lean_Syntax_getArg(v___x_3474_, v___x_3499_);
v___x_3518_ = l_Lean_Syntax_isNone(v___x_3517_);
if (v___x_3518_ == 0)
{
uint8_t v___x_3519_; 
lean_inc(v___x_3517_);
v___x_3519_ = l_Lean_Syntax_matchesNull(v___x_3517_, v___x_3473_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; 
lean_dec(v___x_3517_);
lean_dec(v___x_3474_);
v___x_3520_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
return v___x_3520_;
}
else
{
lean_object* v_tk_x3f_3521_; lean_object* v___x_3522_; 
v_tk_x3f_3521_ = l_Lean_Syntax_getArg(v___x_3517_, v___x_3499_);
lean_dec(v___x_3517_);
v___x_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3522_, 0, v_tk_x3f_3521_);
v_tk_x3f_3501_ = v___x_3522_;
v___y_3502_ = v_a_3448_;
v___y_3503_ = v_a_3449_;
v___y_3504_ = v_a_3450_;
v___y_3505_ = v_a_3451_;
v___y_3506_ = v_a_3452_;
v___y_3507_ = v_a_3453_;
v___y_3508_ = v_a_3454_;
v___y_3509_ = v_a_3455_;
goto v___jp_3500_;
}
}
else
{
lean_object* v___x_3523_; 
lean_dec(v___x_3517_);
v___x_3523_ = lean_box(0);
v_tk_x3f_3501_ = v___x_3523_;
v___y_3502_ = v_a_3448_;
v___y_3503_ = v_a_3449_;
v___y_3504_ = v_a_3450_;
v___y_3505_ = v_a_3451_;
v___y_3506_ = v_a_3452_;
v___y_3507_ = v_a_3453_;
v___y_3508_ = v_a_3454_;
v___y_3509_ = v_a_3455_;
goto v___jp_3500_;
}
v___jp_3500_:
{
lean_object* v___x_3510_; uint8_t v___x_3511_; 
v___x_3510_ = l_Lean_Syntax_getArg(v___x_3474_, v___x_3473_);
v___x_3511_ = l_Lean_Syntax_isNone(v___x_3510_);
if (v___x_3511_ == 0)
{
uint8_t v___x_3512_; 
lean_inc(v___x_3510_);
v___x_3512_ = l_Lean_Syntax_matchesNull(v___x_3510_, v___x_3473_);
if (v___x_3512_ == 0)
{
lean_object* v___x_3513_; 
lean_dec(v___x_3510_);
lean_dec(v_tk_x3f_3501_);
lean_dec(v___x_3474_);
v___x_3513_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
return v___x_3513_;
}
else
{
lean_object* v_neg_x3f_3514_; lean_object* v___x_3515_; 
v_neg_x3f_3514_ = l_Lean_Syntax_getArg(v___x_3510_, v___x_3499_);
lean_dec(v___x_3510_);
v___x_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3515_, 0, v_neg_x3f_3514_);
v___y_3476_ = v_tk_x3f_3501_;
v_neg_x3f_3477_ = v___x_3515_;
v___y_3478_ = v___y_3502_;
v___y_3479_ = v___y_3503_;
v___y_3480_ = v___y_3504_;
v___y_3481_ = v___y_3505_;
v___y_3482_ = v___y_3506_;
v___y_3483_ = v___y_3507_;
v___y_3484_ = v___y_3508_;
v___y_3485_ = v___y_3509_;
goto v___jp_3475_;
}
}
else
{
lean_object* v___x_3516_; 
lean_dec(v___x_3510_);
v___x_3516_ = lean_box(0);
v___y_3476_ = v_tk_x3f_3501_;
v_neg_x3f_3477_ = v___x_3516_;
v___y_3478_ = v___y_3502_;
v___y_3479_ = v___y_3503_;
v___y_3480_ = v___y_3504_;
v___y_3481_ = v___y_3505_;
v___y_3482_ = v___y_3506_;
v___y_3483_ = v___y_3507_;
v___y_3484_ = v___y_3508_;
v___y_3485_ = v___y_3509_;
goto v___jp_3475_;
}
}
}
v___jp_3475_:
{
lean_object* v___x_3486_; lean_object* v_i_3487_; lean_object* v___x_3488_; uint8_t v___x_3489_; 
v___x_3486_ = lean_unsigned_to_nat(2u);
v_i_3487_ = l_Lean_Syntax_getArg(v___x_3474_, v___x_3486_);
lean_dec(v___x_3474_);
v___x_3488_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_elabArg___closed__3));
lean_inc(v_i_3487_);
v___x_3489_ = l_Lean_Syntax_isOfKind(v_i_3487_, v___x_3488_);
if (v___x_3489_ == 0)
{
lean_object* v___x_3490_; 
lean_dec(v_i_3487_);
lean_dec(v_neg_x3f_3477_);
lean_dec(v___y_3476_);
v___x_3490_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_elabArg_spec__0___redArg();
return v___x_3490_;
}
else
{
if (lean_obj_tag(v_neg_x3f_3477_) == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3491_ = l_Lean_TSyntax_getNat(v_i_3487_);
lean_dec(v_i_3487_);
v___x_3492_ = lean_nat_to_int(v___x_3491_);
v___y_3459_ = v___x_3489_;
v___y_3460_ = v___y_3483_;
v___y_3461_ = v___y_3485_;
v___y_3462_ = v___y_3479_;
v___y_3463_ = v___y_3482_;
v___y_3464_ = v___y_3476_;
v___y_3465_ = v___y_3484_;
v___y_3466_ = v___x_3492_;
goto v___jp_3458_;
}
else
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; 
lean_dec_ref_known(v_neg_x3f_3477_, 1);
v___x_3493_ = l_Lean_TSyntax_getNat(v_i_3487_);
lean_dec(v_i_3487_);
v___x_3494_ = lean_nat_to_int(v___x_3493_);
v___x_3495_ = lean_int_neg(v___x_3494_);
lean_dec(v___x_3494_);
v___y_3459_ = v___x_3489_;
v___y_3460_ = v___y_3483_;
v___y_3461_ = v___y_3485_;
v___y_3462_ = v___y_3479_;
v___y_3463_ = v___y_3482_;
v___y_3464_ = v___y_3476_;
v___y_3465_ = v___y_3484_;
v___y_3466_ = v___x_3495_;
goto v___jp_3458_;
}
}
}
}
v___jp_3458_:
{
if (lean_obj_tag(v___y_3464_) == 0)
{
uint8_t v___x_3467_; lean_object* v___x_3468_; 
v___x_3467_ = 0;
v___x_3468_ = l_Lean_Elab_Tactic_Conv_evalArg___redArg(v___x_3457_, v___y_3466_, v___x_3467_, v___y_3462_, v___y_3463_, v___y_3460_, v___y_3465_, v___y_3461_);
return v___x_3468_;
}
else
{
lean_object* v___x_3469_; 
lean_dec_ref_known(v___y_3464_, 1);
v___x_3469_ = l_Lean_Elab_Tactic_Conv_evalArg___redArg(v___x_3457_, v___y_3466_, v___y_3459_, v___y_3462_, v___y_3463_, v___y_3460_, v___y_3465_, v___y_3461_);
return v___x_3469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_elabArg___boxed(lean_object* v_stx_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_){
_start:
{
lean_object* v_res_3534_; 
v_res_3534_ = l_Lean_Elab_Tactic_Conv_elabArg(v_stx_3524_, v_a_3525_, v_a_3526_, v_a_3527_, v_a_3528_, v_a_3529_, v_a_3530_, v_a_3531_, v_a_3532_);
lean_dec(v_a_3532_);
lean_dec_ref(v_a_3531_);
lean_dec(v_a_3530_);
lean_dec_ref(v_a_3529_);
lean_dec(v_a_3528_);
lean_dec_ref(v_a_3527_);
lean_dec(v_a_3526_);
lean_dec_ref(v_a_3525_);
return v_res_3534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1(){
_start:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3543_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3544_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_elabArg___closed__1));
v___x_3545_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___closed__1));
v___x_3546_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_elabArg___boxed), 10, 0);
v___x_3547_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3543_, v___x_3544_, v___x_3545_, v___x_3546_);
return v___x_3547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1___boxed(lean_object* v_a_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1();
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___redArg(lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_){
_start:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___x_3559_; lean_object* v___x_3560_; 
v___x_3557_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalLhs___redArg___closed__0));
v___x_3558_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_congrArgN___lam__0___closed__1);
v___x_3559_ = 0;
v___x_3560_ = l_Lean_Elab_Tactic_Conv_evalArg___redArg(v___x_3557_, v___x_3558_, v___x_3559_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_, v_a_3555_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___redArg___boxed(lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_){
_start:
{
lean_object* v_res_3567_; 
v_res_3567_ = l_Lean_Elab_Tactic_Conv_evalLhs___redArg(v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_);
lean_dec(v_a_3565_);
lean_dec_ref(v_a_3564_);
lean_dec(v_a_3563_);
lean_dec_ref(v_a_3562_);
lean_dec(v_a_3561_);
return v_res_3567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs(lean_object* v_x_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_){
_start:
{
lean_object* v___x_3578_; 
v___x_3578_ = l_Lean_Elab_Tactic_Conv_evalLhs___redArg(v_a_3570_, v_a_3573_, v_a_3574_, v_a_3575_, v_a_3576_);
return v___x_3578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalLhs___boxed(lean_object* v_x_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_, lean_object* v_a_3584_, lean_object* v_a_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = l_Lean_Elab_Tactic_Conv_evalLhs(v_x_3579_, v_a_3580_, v_a_3581_, v_a_3582_, v_a_3583_, v_a_3584_, v_a_3585_, v_a_3586_, v_a_3587_);
lean_dec(v_a_3587_);
lean_dec_ref(v_a_3586_);
lean_dec(v_a_3585_);
lean_dec_ref(v_a_3584_);
lean_dec(v_a_3583_);
lean_dec_ref(v_a_3582_);
lean_dec(v_a_3581_);
lean_dec_ref(v_a_3580_);
lean_dec(v_x_3579_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1(){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; 
v___x_3604_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3605_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__0));
v___x_3606_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2));
v___x_3607_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalLhs___boxed), 10, 0);
v___x_3608_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3604_, v___x_3605_, v___x_3606_, v___x_3607_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___boxed(lean_object* v_a_3609_){
_start:
{
lean_object* v_res_3610_; 
v_res_3610_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1();
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3(){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3637_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1___closed__2));
v___x_3638_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___closed__6));
v___x_3639_ = l_Lean_addBuiltinDeclarationRanges(v___x_3637_, v___x_3638_);
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3___boxed(lean_object* v_a_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3();
return v_res_3641_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__1(void){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3643_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrArgN_applyArgs___closed__7);
v___x_3644_ = lean_int_neg(v___x_3643_);
return v___x_3644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___redArg(lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_){
_start:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; uint8_t v___x_3653_; lean_object* v___x_3654_; 
v___x_3651_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__0));
v___x_3652_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__1, &l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalRhs___redArg___closed__1);
v___x_3653_ = 0;
v___x_3654_ = l_Lean_Elab_Tactic_Conv_evalArg___redArg(v___x_3651_, v___x_3652_, v___x_3653_, v_a_3645_, v_a_3646_, v_a_3647_, v_a_3648_, v_a_3649_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___redArg___boxed(lean_object* v_a_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_){
_start:
{
lean_object* v_res_3661_; 
v_res_3661_ = l_Lean_Elab_Tactic_Conv_evalRhs___redArg(v_a_3655_, v_a_3656_, v_a_3657_, v_a_3658_, v_a_3659_);
lean_dec(v_a_3659_);
lean_dec_ref(v_a_3658_);
lean_dec(v_a_3657_);
lean_dec_ref(v_a_3656_);
lean_dec(v_a_3655_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs(lean_object* v_x_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l_Lean_Elab_Tactic_Conv_evalRhs___redArg(v_a_3664_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalRhs___boxed(lean_object* v_x_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_){
_start:
{
lean_object* v_res_3683_; 
v_res_3683_ = l_Lean_Elab_Tactic_Conv_evalRhs(v_x_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_);
lean_dec(v_a_3681_);
lean_dec_ref(v_a_3680_);
lean_dec(v_a_3679_);
lean_dec_ref(v_a_3678_);
lean_dec(v_a_3677_);
lean_dec_ref(v_a_3676_);
lean_dec(v_a_3675_);
lean_dec_ref(v_a_3674_);
lean_dec(v_x_3673_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1(){
_start:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; 
v___x_3698_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3699_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__0));
v___x_3700_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2));
v___x_3701_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalRhs___boxed), 10, 0);
v___x_3702_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3698_, v___x_3699_, v___x_3700_, v___x_3701_);
return v___x_3702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___boxed(lean_object* v_a_3703_){
_start:
{
lean_object* v_res_3704_; 
v_res_3704_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1();
return v_res_3704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3(){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3731_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1___closed__2));
v___x_3732_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___closed__6));
v___x_3733_ = l_Lean_addBuiltinDeclarationRanges(v___x_3731_, v___x_3732_);
return v___x_3733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3___boxed(lean_object* v_a_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3();
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___redArg(lean_object* v_e_3736_, lean_object* v___y_3737_){
_start:
{
uint8_t v___x_3739_; 
v___x_3739_ = l_Lean_Expr_hasMVar(v_e_3736_);
if (v___x_3739_ == 0)
{
lean_object* v___x_3740_; 
v___x_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3740_, 0, v_e_3736_);
return v___x_3740_;
}
else
{
lean_object* v___x_3741_; lean_object* v_mctx_3742_; lean_object* v___x_3743_; lean_object* v_fst_3744_; lean_object* v_snd_3745_; lean_object* v___x_3746_; lean_object* v_cache_3747_; lean_object* v_zetaDeltaFVarIds_3748_; lean_object* v_postponed_3749_; lean_object* v_diag_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3759_; 
v___x_3741_ = lean_st_ref_get(v___y_3737_);
v_mctx_3742_ = lean_ctor_get(v___x_3741_, 0);
lean_inc_ref(v_mctx_3742_);
lean_dec(v___x_3741_);
v___x_3743_ = l_Lean_instantiateMVarsCore(v_mctx_3742_, v_e_3736_);
v_fst_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_fst_3744_);
v_snd_3745_ = lean_ctor_get(v___x_3743_, 1);
lean_inc(v_snd_3745_);
lean_dec_ref(v___x_3743_);
v___x_3746_ = lean_st_ref_take(v___y_3737_);
v_cache_3747_ = lean_ctor_get(v___x_3746_, 1);
v_zetaDeltaFVarIds_3748_ = lean_ctor_get(v___x_3746_, 2);
v_postponed_3749_ = lean_ctor_get(v___x_3746_, 3);
v_diag_3750_ = lean_ctor_get(v___x_3746_, 4);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3746_);
if (v_isSharedCheck_3759_ == 0)
{
lean_object* v_unused_3760_; 
v_unused_3760_ = lean_ctor_get(v___x_3746_, 0);
lean_dec(v_unused_3760_);
v___x_3752_ = v___x_3746_;
v_isShared_3753_ = v_isSharedCheck_3759_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_diag_3750_);
lean_inc(v_postponed_3749_);
lean_inc(v_zetaDeltaFVarIds_3748_);
lean_inc(v_cache_3747_);
lean_dec(v___x_3746_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3759_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
lean_ctor_set(v___x_3752_, 0, v_snd_3745_);
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_snd_3745_);
lean_ctor_set(v_reuseFailAlloc_3758_, 1, v_cache_3747_);
lean_ctor_set(v_reuseFailAlloc_3758_, 2, v_zetaDeltaFVarIds_3748_);
lean_ctor_set(v_reuseFailAlloc_3758_, 3, v_postponed_3749_);
lean_ctor_set(v_reuseFailAlloc_3758_, 4, v_diag_3750_);
v___x_3755_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3756_ = lean_st_ref_put(v___y_3737_, v___x_3755_);
v___x_3757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3757_, 0, v_fst_3744_);
return v___x_3757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___redArg___boxed(lean_object* v_e_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_){
_start:
{
lean_object* v_res_3764_; 
v_res_3764_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___redArg(v_e_3761_, v___y_3762_);
lean_dec(v___y_3762_);
return v_res_3764_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0(lean_object* v_e_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___redArg(v_e_3765_, v___y_3771_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___boxed(lean_object* v_e_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_){
_start:
{
lean_object* v_res_3786_; 
v_res_3786_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0(v_e_3776_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_);
lean_dec(v___y_3784_);
lean_dec_ref(v___y_3783_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec_ref(v___y_3779_);
lean_dec(v___y_3778_);
lean_dec_ref(v___y_3777_);
return v_res_3786_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___lam__0(lean_object* v_x_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v___x_3797_; 
lean_inc(v___y_3791_);
lean_inc_ref(v___y_3790_);
lean_inc(v___y_3789_);
lean_inc_ref(v___y_3788_);
v___x_3797_ = lean_apply_9(v_x_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, lean_box(0));
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___lam__0___boxed(lean_object* v_x_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___lam__0(v_x_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
lean_dec(v___y_3802_);
lean_dec_ref(v___y_3801_);
lean_dec(v___y_3800_);
lean_dec_ref(v___y_3799_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg(lean_object* v_mvarId_3809_, lean_object* v_x_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___f_3820_; lean_object* v___x_3821_; 
lean_inc(v___y_3814_);
lean_inc_ref(v___y_3813_);
lean_inc(v___y_3812_);
lean_inc_ref(v___y_3811_);
v___f_3820_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3820_, 0, v_x_3810_);
lean_closure_set(v___f_3820_, 1, v___y_3811_);
lean_closure_set(v___f_3820_, 2, v___y_3812_);
lean_closure_set(v___f_3820_, 3, v___y_3813_);
lean_closure_set(v___f_3820_, 4, v___y_3814_);
v___x_3821_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3809_, v___f_3820_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_);
if (lean_obj_tag(v___x_3821_) == 0)
{
return v___x_3821_;
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
v_a_3822_ = lean_ctor_get(v___x_3821_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3821_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3821_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3821_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg___boxed(lean_object* v_mvarId_3830_, lean_object* v_x_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_){
_start:
{
lean_object* v_res_3841_; 
v_res_3841_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg(v_mvarId_3830_, v_x_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
lean_dec(v___y_3835_);
lean_dec_ref(v___y_3834_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3(lean_object* v_00_u03b1_3842_, lean_object* v_mvarId_3843_, lean_object* v_x_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
lean_object* v___x_3854_; 
v___x_3854_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg(v_mvarId_3843_, v_x_3844_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_);
return v___x_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___boxed(lean_object* v_00_u03b1_3855_, lean_object* v_mvarId_3856_, lean_object* v_x_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3(v_00_u03b1_3855_, v_mvarId_3856_, v_x_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec(v___y_3859_);
lean_dec_ref(v___y_3858_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___redArg(lean_object* v_msg_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_){
_start:
{
lean_object* v_ref_3874_; lean_object* v___x_3875_; lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3884_; 
v_ref_3874_ = lean_ctor_get(v___y_3871_, 2);
v___x_3875_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0_spec__0(v_msg_3868_, v___y_3869_, v___y_3870_, v___y_3871_, v___y_3872_);
v_a_3876_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3884_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3884_ == 0)
{
v___x_3878_ = v___x_3875_;
v_isShared_3879_ = v_isSharedCheck_3884_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3875_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3884_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3880_; lean_object* v___x_3882_; 
lean_inc(v_ref_3874_);
v___x_3880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3880_, 0, v_ref_3874_);
lean_ctor_set(v___x_3880_, 1, v_a_3876_);
if (v_isShared_3879_ == 0)
{
lean_ctor_set_tag(v___x_3878_, 1);
lean_ctor_set(v___x_3878_, 0, v___x_3880_);
v___x_3882_ = v___x_3878_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3883_; 
v_reuseFailAlloc_3883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3883_, 0, v___x_3880_);
v___x_3882_ = v_reuseFailAlloc_3883_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
return v___x_3882_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___redArg___boxed(lean_object* v_msg_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___redArg(v_msg_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___redArg(lean_object* v_mvarId_3892_, lean_object* v_val_3893_, lean_object* v___y_3894_){
_start:
{
lean_object* v___x_3896_; lean_object* v_mctx_3897_; lean_object* v_cache_3898_; lean_object* v_zetaDeltaFVarIds_3899_; lean_object* v_postponed_3900_; lean_object* v_diag_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3930_; 
v___x_3896_ = lean_st_ref_take(v___y_3894_);
v_mctx_3897_ = lean_ctor_get(v___x_3896_, 0);
v_cache_3898_ = lean_ctor_get(v___x_3896_, 1);
v_zetaDeltaFVarIds_3899_ = lean_ctor_get(v___x_3896_, 2);
v_postponed_3900_ = lean_ctor_get(v___x_3896_, 3);
v_diag_3901_ = lean_ctor_get(v___x_3896_, 4);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3896_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3903_ = v___x_3896_;
v_isShared_3904_ = v_isSharedCheck_3930_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_diag_3901_);
lean_inc(v_postponed_3900_);
lean_inc(v_zetaDeltaFVarIds_3899_);
lean_inc(v_cache_3898_);
lean_inc(v_mctx_3897_);
lean_dec(v___x_3896_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3930_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v_depth_3905_; lean_object* v_levelAssignDepth_3906_; lean_object* v_lmvarCounter_3907_; lean_object* v_mvarCounter_3908_; lean_object* v_lDecls_3909_; lean_object* v_decls_3910_; lean_object* v_userNames_3911_; lean_object* v_lAssignment_3912_; lean_object* v_eAssignment_3913_; lean_object* v_dAssignment_3914_; lean_object* v_instanceTypedMVars_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3929_; 
v_depth_3905_ = lean_ctor_get(v_mctx_3897_, 0);
v_levelAssignDepth_3906_ = lean_ctor_get(v_mctx_3897_, 1);
v_lmvarCounter_3907_ = lean_ctor_get(v_mctx_3897_, 2);
v_mvarCounter_3908_ = lean_ctor_get(v_mctx_3897_, 3);
v_lDecls_3909_ = lean_ctor_get(v_mctx_3897_, 4);
v_decls_3910_ = lean_ctor_get(v_mctx_3897_, 5);
v_userNames_3911_ = lean_ctor_get(v_mctx_3897_, 6);
v_lAssignment_3912_ = lean_ctor_get(v_mctx_3897_, 7);
v_eAssignment_3913_ = lean_ctor_get(v_mctx_3897_, 8);
v_dAssignment_3914_ = lean_ctor_get(v_mctx_3897_, 9);
v_instanceTypedMVars_3915_ = lean_ctor_get(v_mctx_3897_, 10);
v_isSharedCheck_3929_ = !lean_is_exclusive(v_mctx_3897_);
if (v_isSharedCheck_3929_ == 0)
{
v___x_3917_ = v_mctx_3897_;
v_isShared_3918_ = v_isSharedCheck_3929_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_instanceTypedMVars_3915_);
lean_inc(v_dAssignment_3914_);
lean_inc(v_eAssignment_3913_);
lean_inc(v_lAssignment_3912_);
lean_inc(v_userNames_3911_);
lean_inc(v_decls_3910_);
lean_inc(v_lDecls_3909_);
lean_inc(v_mvarCounter_3908_);
lean_inc(v_lmvarCounter_3907_);
lean_inc(v_levelAssignDepth_3906_);
lean_inc(v_depth_3905_);
lean_dec(v_mctx_3897_);
v___x_3917_ = lean_box(0);
v_isShared_3918_ = v_isSharedCheck_3929_;
goto v_resetjp_3916_;
}
v_resetjp_3916_:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3922_; 
v___x_3919_ = lean_box(0);
v___x_3920_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1_spec__1___redArg(v_eAssignment_3913_, v_mvarId_3892_, v_val_3893_);
if (v_isShared_3918_ == 0)
{
lean_ctor_set(v___x_3917_, 8, v___x_3920_);
v___x_3922_ = v___x_3917_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3928_; 
v_reuseFailAlloc_3928_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3928_, 0, v_depth_3905_);
lean_ctor_set(v_reuseFailAlloc_3928_, 1, v_levelAssignDepth_3906_);
lean_ctor_set(v_reuseFailAlloc_3928_, 2, v_lmvarCounter_3907_);
lean_ctor_set(v_reuseFailAlloc_3928_, 3, v_mvarCounter_3908_);
lean_ctor_set(v_reuseFailAlloc_3928_, 4, v_lDecls_3909_);
lean_ctor_set(v_reuseFailAlloc_3928_, 5, v_decls_3910_);
lean_ctor_set(v_reuseFailAlloc_3928_, 6, v_userNames_3911_);
lean_ctor_set(v_reuseFailAlloc_3928_, 7, v_lAssignment_3912_);
lean_ctor_set(v_reuseFailAlloc_3928_, 8, v___x_3920_);
lean_ctor_set(v_reuseFailAlloc_3928_, 9, v_dAssignment_3914_);
lean_ctor_set(v_reuseFailAlloc_3928_, 10, v_instanceTypedMVars_3915_);
v___x_3922_ = v_reuseFailAlloc_3928_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
lean_object* v___x_3924_; 
if (v_isShared_3904_ == 0)
{
lean_ctor_set(v___x_3903_, 0, v___x_3922_);
v___x_3924_ = v___x_3903_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v___x_3922_);
lean_ctor_set(v_reuseFailAlloc_3927_, 1, v_cache_3898_);
lean_ctor_set(v_reuseFailAlloc_3927_, 2, v_zetaDeltaFVarIds_3899_);
lean_ctor_set(v_reuseFailAlloc_3927_, 3, v_postponed_3900_);
lean_ctor_set(v_reuseFailAlloc_3927_, 4, v_diag_3901_);
v___x_3924_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; 
v___x_3925_ = lean_st_ref_put(v___y_3894_, v___x_3924_);
v___x_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3919_);
return v___x_3926_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___redArg___boxed(lean_object* v_mvarId_3931_, lean_object* v_val_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_){
_start:
{
lean_object* v_res_3935_; 
v_res_3935_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___redArg(v_mvarId_3931_, v_val_3932_, v___y_3933_);
lean_dec(v___y_3933_);
return v_res_3935_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3938_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__1));
v___x_3939_ = l_Lean_stringToMessageData(v___x_3938_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0(lean_object* v_a_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_){
_start:
{
lean_object* v___x_3950_; 
lean_inc(v_a_3940_);
v___x_3950_ = l_Lean_Elab_Tactic_Conv_getLhsRhsCore(v_a_3940_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3950_) == 0)
{
lean_object* v_a_3951_; lean_object* v_fst_3952_; lean_object* v_snd_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_4005_; 
v_a_3951_ = lean_ctor_get(v___x_3950_, 0);
lean_inc(v_a_3951_);
lean_dec_ref_known(v___x_3950_, 1);
v_fst_3952_ = lean_ctor_get(v_a_3951_, 0);
v_snd_3953_ = lean_ctor_get(v_a_3951_, 1);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_a_3951_);
if (v_isSharedCheck_4005_ == 0)
{
v___x_3955_ = v_a_3951_;
v_isShared_3956_ = v_isSharedCheck_4005_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_snd_3953_);
lean_inc(v_fst_3952_);
lean_dec(v_a_3951_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_4005_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3957_; lean_object* v_a_3958_; lean_object* v___x_3959_; 
v___x_3957_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_evalFun_spec__0___redArg(v_fst_3952_, v___y_3946_);
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
lean_inc(v_a_3958_);
lean_dec_ref(v___x_3957_);
v___x_3959_ = l_Lean_Expr_cleanupAnnotations(v_a_3958_);
lean_dec(v_a_3958_);
if (lean_obj_tag(v___x_3959_) == 5)
{
lean_object* v_fn_3960_; lean_object* v_arg_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
lean_del_object(v___x_3955_);
v_fn_3960_ = lean_ctor_get(v___x_3959_, 0);
lean_inc_ref(v_fn_3960_);
v_arg_3961_ = lean_ctor_get(v___x_3959_, 1);
lean_inc_ref(v_arg_3961_);
lean_dec_ref_known(v___x_3959_, 2);
v___x_3962_ = lean_box(0);
v___x_3963_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v_fn_3960_, v___x_3962_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; lean_object* v_fst_3965_; lean_object* v_snd_3966_; lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3990_; 
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
lean_inc(v_a_3964_);
lean_dec_ref_known(v___x_3963_, 1);
v_fst_3965_ = lean_ctor_get(v_a_3964_, 0);
v_snd_3966_ = lean_ctor_get(v_a_3964_, 1);
v_isSharedCheck_3990_ = !lean_is_exclusive(v_a_3964_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3968_ = v_a_3964_;
v_isShared_3969_ = v_isSharedCheck_3990_;
goto v_resetjp_3967_;
}
else
{
lean_inc(v_snd_3966_);
lean_inc(v_fst_3965_);
lean_dec(v_a_3964_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3990_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v___x_3970_; 
lean_inc_ref(v_arg_3961_);
lean_inc(v_snd_3966_);
v___x_3970_ = l_Lean_Meta_mkCongrFun(v_snd_3966_, v_arg_3961_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
lean_inc(v_a_3971_);
lean_dec_ref_known(v___x_3970_, 1);
v___x_3972_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___redArg(v_a_3940_, v_a_3971_, v___y_3946_);
lean_dec_ref(v___x_3972_);
v___x_3973_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__0));
v___x_3974_ = l_Lean_Expr_app___override(v_fst_3965_, v_arg_3961_);
v___x_3975_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(v___x_3973_, v_snd_3953_, v___x_3974_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3979_; 
lean_dec_ref_known(v___x_3975_, 1);
v___x_3976_ = l_Lean_Expr_mvarId_x21(v_snd_3966_);
lean_dec(v_snd_3966_);
v___x_3977_ = lean_box(0);
if (v_isShared_3969_ == 0)
{
lean_ctor_set_tag(v___x_3968_, 1);
lean_ctor_set(v___x_3968_, 1, v___x_3977_);
lean_ctor_set(v___x_3968_, 0, v___x_3976_);
v___x_3979_ = v___x_3968_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v___x_3976_);
lean_ctor_set(v_reuseFailAlloc_3981_, 1, v___x_3977_);
v___x_3979_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
lean_object* v___x_3980_; 
v___x_3980_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3979_, v___y_3942_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
return v___x_3980_;
}
}
else
{
lean_del_object(v___x_3968_);
lean_dec(v_snd_3966_);
return v___x_3975_;
}
}
else
{
lean_object* v_a_3982_; lean_object* v___x_3984_; uint8_t v_isShared_3985_; uint8_t v_isSharedCheck_3989_; 
lean_del_object(v___x_3968_);
lean_dec(v_snd_3966_);
lean_dec(v_fst_3965_);
lean_dec_ref(v_arg_3961_);
lean_dec(v_snd_3953_);
lean_dec(v_a_3940_);
v_a_3982_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3984_ = v___x_3970_;
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
else
{
lean_inc(v_a_3982_);
lean_dec(v___x_3970_);
v___x_3984_ = lean_box(0);
v_isShared_3985_ = v_isSharedCheck_3989_;
goto v_resetjp_3983_;
}
v_resetjp_3983_:
{
lean_object* v___x_3987_; 
if (v_isShared_3985_ == 0)
{
v___x_3987_ = v___x_3984_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_a_3982_);
v___x_3987_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
return v___x_3987_;
}
}
}
}
}
else
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_3998_; 
lean_dec_ref(v_arg_3961_);
lean_dec(v_snd_3953_);
lean_dec(v_a_3940_);
v_a_3991_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3993_ = v___x_3963_;
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v___x_3963_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3996_; 
if (v_isShared_3994_ == 0)
{
v___x_3996_ = v___x_3993_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v_a_3991_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
return v___x_3996_;
}
}
}
}
else
{
lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4002_; 
lean_dec(v_snd_3953_);
lean_dec(v_a_3940_);
v___x_3999_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__2, &l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___closed__2);
v___x_4000_ = l_Lean_indentExpr(v___x_3959_);
if (v_isShared_3956_ == 0)
{
lean_ctor_set_tag(v___x_3955_, 7);
lean_ctor_set(v___x_3955_, 1, v___x_4000_);
lean_ctor_set(v___x_3955_, 0, v___x_3999_);
v___x_4002_ = v___x_3955_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v___x_3999_);
lean_ctor_set(v_reuseFailAlloc_4004_, 1, v___x_4000_);
v___x_4002_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
lean_object* v___x_4003_; 
v___x_4003_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___redArg(v___x_4002_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
return v___x_4003_;
}
}
}
}
else
{
lean_object* v_a_4006_; lean_object* v___x_4008_; uint8_t v_isShared_4009_; uint8_t v_isSharedCheck_4013_; 
lean_dec(v_a_3940_);
v_a_4006_ = lean_ctor_get(v___x_3950_, 0);
v_isSharedCheck_4013_ = !lean_is_exclusive(v___x_3950_);
if (v_isSharedCheck_4013_ == 0)
{
v___x_4008_ = v___x_3950_;
v_isShared_4009_ = v_isSharedCheck_4013_;
goto v_resetjp_4007_;
}
else
{
lean_inc(v_a_4006_);
lean_dec(v___x_3950_);
v___x_4008_ = lean_box(0);
v_isShared_4009_ = v_isSharedCheck_4013_;
goto v_resetjp_4007_;
}
v_resetjp_4007_:
{
lean_object* v___x_4011_; 
if (v_isShared_4009_ == 0)
{
v___x_4011_ = v___x_4008_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v_a_4006_);
v___x_4011_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
return v___x_4011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___boxed(lean_object* v_a_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_){
_start:
{
lean_object* v_res_4024_; 
v_res_4024_ = l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0(v_a_4014_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_, v___y_4022_);
lean_dec(v___y_4022_);
lean_dec_ref(v___y_4021_);
lean_dec(v___y_4020_);
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
lean_dec(v___y_4016_);
lean_dec_ref(v___y_4015_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg(lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_){
_start:
{
lean_object* v___x_4034_; 
v___x_4034_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_4026_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v_a_4035_; lean_object* v___f_4036_; lean_object* v___x_4037_; 
v_a_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc_n(v_a_4035_, 2);
lean_dec_ref_known(v___x_4034_, 1);
v___f_4036_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalFun___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_4036_, 0, v_a_4035_);
v___x_4037_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_evalFun_spec__3___redArg(v_a_4035_, v___f_4036_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
return v___x_4037_;
}
else
{
lean_object* v_a_4038_; lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4045_; 
v_a_4038_ = lean_ctor_get(v___x_4034_, 0);
v_isSharedCheck_4045_ = !lean_is_exclusive(v___x_4034_);
if (v_isSharedCheck_4045_ == 0)
{
v___x_4040_ = v___x_4034_;
v_isShared_4041_ = v_isSharedCheck_4045_;
goto v_resetjp_4039_;
}
else
{
lean_inc(v_a_4038_);
lean_dec(v___x_4034_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4045_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
lean_object* v___x_4043_; 
if (v_isShared_4041_ == 0)
{
v___x_4043_ = v___x_4040_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_a_4038_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___redArg___boxed(lean_object* v_a_4046_, lean_object* v_a_4047_, lean_object* v_a_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_, lean_object* v_a_4051_, lean_object* v_a_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_){
_start:
{
lean_object* v_res_4055_; 
v_res_4055_ = l_Lean_Elab_Tactic_Conv_evalFun___redArg(v_a_4046_, v_a_4047_, v_a_4048_, v_a_4049_, v_a_4050_, v_a_4051_, v_a_4052_, v_a_4053_);
lean_dec(v_a_4053_);
lean_dec_ref(v_a_4052_);
lean_dec(v_a_4051_);
lean_dec_ref(v_a_4050_);
lean_dec(v_a_4049_);
lean_dec_ref(v_a_4048_);
lean_dec(v_a_4047_);
lean_dec_ref(v_a_4046_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun(lean_object* v_x_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_, lean_object* v_a_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_){
_start:
{
lean_object* v___x_4066_; 
v___x_4066_ = l_Lean_Elab_Tactic_Conv_evalFun___redArg(v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_, v_a_4063_, v_a_4064_);
return v___x_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalFun___boxed(lean_object* v_x_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l_Lean_Elab_Tactic_Conv_evalFun(v_x_4067_, v_a_4068_, v_a_4069_, v_a_4070_, v_a_4071_, v_a_4072_, v_a_4073_, v_a_4074_, v_a_4075_);
lean_dec(v_a_4075_);
lean_dec_ref(v_a_4074_);
lean_dec(v_a_4073_);
lean_dec_ref(v_a_4072_);
lean_dec(v_a_4071_);
lean_dec_ref(v_a_4070_);
lean_dec(v_a_4069_);
lean_dec_ref(v_a_4068_);
lean_dec(v_x_4067_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1(lean_object* v_mvarId_4078_, lean_object* v_val_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v___x_4089_; 
v___x_4089_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___redArg(v_mvarId_4078_, v_val_4079_, v___y_4085_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1___boxed(lean_object* v_mvarId_4090_, lean_object* v_val_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v_res_4101_; 
v_res_4101_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalFun_spec__1(v_mvarId_4090_, v_val_4091_, v___y_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_);
lean_dec(v___y_4099_);
lean_dec_ref(v___y_4098_);
lean_dec(v___y_4097_);
lean_dec_ref(v___y_4096_);
lean_dec(v___y_4095_);
lean_dec_ref(v___y_4094_);
lean_dec(v___y_4093_);
lean_dec_ref(v___y_4092_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2(lean_object* v_00_u03b1_4102_, lean_object* v_msg_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___redArg(v_msg_4103_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2___boxed(lean_object* v_00_u03b1_4114_, lean_object* v_msg_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_){
_start:
{
lean_object* v_res_4125_; 
v_res_4125_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalFun_spec__2(v_00_u03b1_4114_, v_msg_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_);
lean_dec(v___y_4123_);
lean_dec_ref(v___y_4122_);
lean_dec(v___y_4121_);
lean_dec_ref(v___y_4120_);
lean_dec(v___y_4119_);
lean_dec_ref(v___y_4118_);
lean_dec(v___y_4117_);
lean_dec_ref(v___y_4116_);
return v_res_4125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1(){
_start:
{
lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
v___x_4140_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4141_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__0));
v___x_4142_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2));
v___x_4143_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalFun___boxed), 10, 0);
v___x_4144_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4140_, v___x_4141_, v___x_4142_, v___x_4143_);
return v___x_4144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___boxed(lean_object* v_a_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1();
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3(){
_start:
{
lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
v___x_4173_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1___closed__2));
v___x_4174_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___closed__6));
v___x_4175_ = l_Lean_addBuiltinDeclarationRanges(v___x_4173_, v___x_4174_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3___boxed(lean_object* v_a_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3();
return v_res_4177_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4179_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__0));
v___x_4180_ = l_Lean_stringToMessageData(v___x_4179_);
return v___x_4180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0(lean_object* v___x_4181_, lean_object* v_declName_4182_, lean_object* v_type_4183_, lean_object* v_value_4184_, lean_object* v_rhs_4185_, lean_object* v_a_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_){
_start:
{
lean_object* v___x_4192_; lean_object* v___x_4193_; 
lean_inc_ref(v_a_4186_);
v___x_4192_ = l_Lean_Expr_app___override(v___x_4181_, v_a_4186_);
lean_inc(v___y_4190_);
lean_inc_ref(v___y_4189_);
lean_inc(v___y_4188_);
lean_inc_ref(v___y_4187_);
v___x_4193_ = lean_infer_type(v___x_4192_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4193_) == 0)
{
lean_object* v_a_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; uint8_t v___x_4198_; uint8_t v___x_4199_; uint8_t v___x_4200_; lean_object* v___x_4201_; 
v_a_4194_ = lean_ctor_get(v___x_4193_, 0);
lean_inc_n(v_a_4194_, 2);
lean_dec_ref_known(v___x_4193_, 1);
v___x_4195_ = lean_unsigned_to_nat(1u);
v___x_4196_ = lean_mk_empty_array_with_capacity(v___x_4195_);
v___x_4197_ = lean_array_push(v___x_4196_, v_a_4186_);
v___x_4198_ = 0;
v___x_4199_ = 1;
v___x_4200_ = 1;
v___x_4201_ = l_Lean_Meta_mkLambdaFVars(v___x_4197_, v_a_4194_, v___x_4198_, v___x_4199_, v___x_4198_, v___x_4199_, v___x_4200_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4201_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4203_; 
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
lean_inc(v_a_4202_);
lean_dec_ref_known(v___x_4201_, 1);
lean_inc(v_a_4194_);
v___x_4203_ = l_Lean_Meta_getLevel(v_a_4194_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v_a_4204_; lean_object* v___x_4205_; uint8_t v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
v_a_4204_ = lean_ctor_get(v___x_4203_, 0);
lean_inc(v_a_4204_);
lean_dec_ref_known(v___x_4203_, 1);
v___x_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4205_, 0, v_a_4194_);
v___x_4206_ = 0;
v___x_4207_ = lean_box(0);
v___x_4208_ = l_Lean_Meta_mkFreshExprMVar(v___x_4205_, v___x_4206_, v___x_4207_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4208_) == 0)
{
lean_object* v_a_4209_; lean_object* v___x_4210_; 
v_a_4209_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4208_, 1);
v___x_4210_ = l_Lean_Meta_mkLambdaFVars(v___x_4197_, v_a_4209_, v___x_4198_, v___x_4199_, v___x_4198_, v___x_4199_, v___x_4200_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
lean_dec_ref(v___x_4197_);
if (lean_obj_tag(v___x_4210_) == 0)
{
lean_object* v_a_4211_; lean_object* v___x_4213_; uint8_t v_isShared_4214_; uint8_t v_isSharedCheck_4244_; 
v_a_4211_ = lean_ctor_get(v___x_4210_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4210_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4213_ = v___x_4210_;
v_isShared_4214_ = v_isSharedCheck_4244_;
goto v_resetjp_4212_;
}
else
{
lean_inc(v_a_4211_);
lean_dec(v___x_4210_);
v___x_4213_ = lean_box(0);
v_isShared_4214_ = v_isSharedCheck_4244_;
goto v_resetjp_4212_;
}
v_resetjp_4212_:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4221_ = l_Lean_Expr_bindingBody_x21(v_a_4211_);
v___x_4222_ = l_Lean_Expr_letE___override(v_declName_4182_, v_type_4183_, v_value_4184_, v___x_4221_, v___x_4198_);
v___x_4223_ = l_Lean_Meta_isExprDefEq(v_rhs_4185_, v___x_4222_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; uint8_t v___x_4225_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_a_4224_);
lean_dec_ref_known(v___x_4223_, 1);
v___x_4225_ = lean_unbox(v_a_4224_);
lean_dec(v_a_4224_);
if (v___x_4225_ == 0)
{
lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v_a_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4235_; 
lean_del_object(v___x_4213_);
lean_dec(v_a_4211_);
lean_dec(v_a_4204_);
lean_dec(v_a_4202_);
v___x_4226_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__1, &l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___closed__1);
v___x_4227_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_4226_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
v_a_4228_ = lean_ctor_get(v___x_4227_, 0);
v_isSharedCheck_4235_ = !lean_is_exclusive(v___x_4227_);
if (v_isSharedCheck_4235_ == 0)
{
v___x_4230_ = v___x_4227_;
v_isShared_4231_ = v_isSharedCheck_4235_;
goto v_resetjp_4229_;
}
else
{
lean_inc(v_a_4228_);
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
v___x_4233_ = v___x_4230_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v_a_4228_);
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
goto v___jp_4215_;
}
}
else
{
lean_object* v_a_4236_; lean_object* v___x_4238_; uint8_t v_isShared_4239_; uint8_t v_isSharedCheck_4243_; 
lean_del_object(v___x_4213_);
lean_dec(v_a_4211_);
lean_dec(v_a_4204_);
lean_dec(v_a_4202_);
v_a_4236_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4243_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4243_ == 0)
{
v___x_4238_ = v___x_4223_;
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
else
{
lean_inc(v_a_4236_);
lean_dec(v___x_4223_);
v___x_4238_ = lean_box(0);
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
v_resetjp_4237_:
{
lean_object* v___x_4241_; 
if (v_isShared_4239_ == 0)
{
v___x_4241_ = v___x_4238_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v_a_4236_);
v___x_4241_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
return v___x_4241_;
}
}
}
v___jp_4215_:
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4219_; 
v___x_4216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4216_, 0, v_a_4204_);
lean_ctor_set(v___x_4216_, 1, v_a_4211_);
v___x_4217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4217_, 0, v_a_4202_);
lean_ctor_set(v___x_4217_, 1, v___x_4216_);
if (v_isShared_4214_ == 0)
{
lean_ctor_set(v___x_4213_, 0, v___x_4217_);
v___x_4219_ = v___x_4213_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v___x_4217_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
}
else
{
lean_object* v_a_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4252_; 
lean_dec(v_a_4204_);
lean_dec(v_a_4202_);
lean_dec_ref(v_rhs_4185_);
lean_dec_ref(v_value_4184_);
lean_dec_ref(v_type_4183_);
lean_dec(v_declName_4182_);
v_a_4245_ = lean_ctor_get(v___x_4210_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v___x_4210_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4247_ = v___x_4210_;
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_a_4245_);
lean_dec(v___x_4210_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4250_; 
if (v_isShared_4248_ == 0)
{
v___x_4250_ = v___x_4247_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4245_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
}
else
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4260_; 
lean_dec(v_a_4204_);
lean_dec(v_a_4202_);
lean_dec_ref(v___x_4197_);
lean_dec_ref(v_rhs_4185_);
lean_dec_ref(v_value_4184_);
lean_dec_ref(v_type_4183_);
lean_dec(v_declName_4182_);
v_a_4253_ = lean_ctor_get(v___x_4208_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v___x_4208_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4255_ = v___x_4208_;
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v___x_4208_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4258_; 
if (v_isShared_4256_ == 0)
{
v___x_4258_ = v___x_4255_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4259_; 
v_reuseFailAlloc_4259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4259_, 0, v_a_4253_);
v___x_4258_ = v_reuseFailAlloc_4259_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
return v___x_4258_;
}
}
}
}
else
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4268_; 
lean_dec(v_a_4202_);
lean_dec_ref(v___x_4197_);
lean_dec(v_a_4194_);
lean_dec_ref(v_rhs_4185_);
lean_dec_ref(v_value_4184_);
lean_dec_ref(v_type_4183_);
lean_dec(v_declName_4182_);
v_a_4261_ = lean_ctor_get(v___x_4203_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4203_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4263_ = v___x_4203_;
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v___x_4203_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
else
{
lean_object* v_a_4269_; lean_object* v___x_4271_; uint8_t v_isShared_4272_; uint8_t v_isSharedCheck_4276_; 
lean_dec_ref(v___x_4197_);
lean_dec(v_a_4194_);
lean_dec_ref(v_rhs_4185_);
lean_dec_ref(v_value_4184_);
lean_dec_ref(v_type_4183_);
lean_dec(v_declName_4182_);
v_a_4269_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4276_ == 0)
{
v___x_4271_ = v___x_4201_;
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
else
{
lean_inc(v_a_4269_);
lean_dec(v___x_4201_);
v___x_4271_ = lean_box(0);
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
v_resetjp_4270_:
{
lean_object* v___x_4274_; 
if (v_isShared_4272_ == 0)
{
v___x_4274_ = v___x_4271_;
goto v_reusejp_4273_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v_a_4269_);
v___x_4274_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
return v___x_4274_;
}
}
}
}
else
{
lean_object* v_a_4277_; lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4284_; 
lean_dec_ref(v_a_4186_);
lean_dec_ref(v_rhs_4185_);
lean_dec_ref(v_value_4184_);
lean_dec_ref(v_type_4183_);
lean_dec(v_declName_4182_);
v_a_4277_ = lean_ctor_get(v___x_4193_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4193_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4279_ = v___x_4193_;
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
else
{
lean_inc(v_a_4277_);
lean_dec(v___x_4193_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v___x_4282_; 
if (v_isShared_4280_ == 0)
{
v___x_4282_ = v___x_4279_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4277_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___boxed(lean_object* v___x_4285_, lean_object* v_declName_4286_, lean_object* v_type_4287_, lean_object* v_value_4288_, lean_object* v_rhs_4289_, lean_object* v_a_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_){
_start:
{
lean_object* v_res_4296_; 
v_res_4296_ = l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0(v___x_4285_, v_declName_4286_, v_type_4287_, v_value_4288_, v_rhs_4289_, v_a_4290_, v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__1(lean_object* v___x_4297_, lean_object* v_snd_4298_, lean_object* v_x_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_){
_start:
{
lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v___x_4305_ = lean_unsigned_to_nat(1u);
v___x_4306_ = lean_mk_empty_array_with_capacity(v___x_4305_);
v___x_4307_ = lean_array_push(v___x_4306_, v_x_4299_);
lean_inc_ref_n(v___x_4307_, 2);
v___x_4308_ = l_Lean_Expr_beta(v___x_4297_, v___x_4307_);
v___x_4309_ = l_Lean_Expr_beta(v_snd_4298_, v___x_4307_);
v___x_4310_ = l_Lean_Meta_mkEq(v___x_4308_, v___x_4309_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_);
if (lean_obj_tag(v___x_4310_) == 0)
{
lean_object* v_a_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v_a_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc(v_a_4311_);
lean_dec_ref_known(v___x_4310_, 1);
v___x_4312_ = lean_box(0);
v___x_4313_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4311_, v___x_4312_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_);
if (lean_obj_tag(v___x_4313_) == 0)
{
lean_object* v_a_4314_; uint8_t v___x_4315_; uint8_t v___x_4316_; uint8_t v___x_4317_; lean_object* v___x_4318_; 
v_a_4314_ = lean_ctor_get(v___x_4313_, 0);
lean_inc_n(v_a_4314_, 2);
lean_dec_ref_known(v___x_4313_, 1);
v___x_4315_ = 0;
v___x_4316_ = 1;
v___x_4317_ = 1;
v___x_4318_ = l_Lean_Meta_mkLambdaFVars(v___x_4307_, v_a_4314_, v___x_4315_, v___x_4316_, v___x_4315_, v___x_4316_, v___x_4317_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_);
lean_dec_ref(v___x_4307_);
if (lean_obj_tag(v___x_4318_) == 0)
{
lean_object* v_a_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4328_; 
v_a_4319_ = lean_ctor_get(v___x_4318_, 0);
v_isSharedCheck_4328_ = !lean_is_exclusive(v___x_4318_);
if (v_isSharedCheck_4328_ == 0)
{
v___x_4321_ = v___x_4318_;
v_isShared_4322_ = v_isSharedCheck_4328_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_a_4319_);
lean_dec(v___x_4318_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4328_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4326_; 
v___x_4323_ = l_Lean_Expr_mvarId_x21(v_a_4314_);
lean_dec(v_a_4314_);
v___x_4324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4324_, 0, v_a_4319_);
lean_ctor_set(v___x_4324_, 1, v___x_4323_);
if (v_isShared_4322_ == 0)
{
lean_ctor_set(v___x_4321_, 0, v___x_4324_);
v___x_4326_ = v___x_4321_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4327_; 
v_reuseFailAlloc_4327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4327_, 0, v___x_4324_);
v___x_4326_ = v_reuseFailAlloc_4327_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
return v___x_4326_;
}
}
}
else
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4336_; 
lean_dec(v_a_4314_);
v_a_4329_ = lean_ctor_get(v___x_4318_, 0);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4318_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4331_ = v___x_4318_;
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4318_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4334_; 
if (v_isShared_4332_ == 0)
{
v___x_4334_ = v___x_4331_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v_a_4329_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
return v___x_4334_;
}
}
}
}
else
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
lean_dec_ref(v___x_4307_);
v_a_4337_ = lean_ctor_get(v___x_4313_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4313_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4313_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4313_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
return v___x_4342_;
}
}
}
}
else
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
lean_dec_ref(v___x_4307_);
v_a_4345_ = lean_ctor_get(v___x_4310_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4310_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4310_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4310_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__1___boxed(lean_object* v___x_4353_, lean_object* v_snd_4354_, lean_object* v_x_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
lean_object* v_res_4361_; 
v_res_4361_ = l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__1(v___x_4353_, v_snd_4354_, v_x_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_);
lean_dec(v___y_4359_);
lean_dec_ref(v___y_4358_);
lean_dec(v___y_4357_);
lean_dec_ref(v___y_4356_);
return v_res_4361_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__3(void){
_start:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; 
v___x_4366_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__2));
v___x_4367_ = l_Lean_stringToMessageData(v___x_4366_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f(lean_object* v_mvarId_4368_, lean_object* v_lhs_4369_, lean_object* v_rhs_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_){
_start:
{
if (lean_obj_tag(v_lhs_4369_) == 8)
{
lean_object* v_declName_4376_; lean_object* v_type_4377_; lean_object* v_value_4378_; lean_object* v_body_4379_; lean_object* v___x_4380_; 
v_declName_4376_ = lean_ctor_get(v_lhs_4369_, 0);
lean_inc(v_declName_4376_);
v_type_4377_ = lean_ctor_get(v_lhs_4369_, 1);
lean_inc_ref_n(v_type_4377_, 2);
v_value_4378_ = lean_ctor_get(v_lhs_4369_, 2);
lean_inc_ref(v_value_4378_);
v_body_4379_ = lean_ctor_get(v_lhs_4369_, 3);
lean_inc_ref(v_body_4379_);
lean_dec_ref_known(v_lhs_4369_, 4);
v___x_4380_ = l_Lean_Meta_getLevel(v_type_4377_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4380_) == 0)
{
lean_object* v_a_4381_; uint8_t v___x_4382_; lean_object* v___x_4383_; lean_object* v___f_4384_; lean_object* v___y_4386_; lean_object* v___y_4387_; lean_object* v___y_4388_; lean_object* v___y_4389_; lean_object* v___x_4461_; 
v_a_4381_ = lean_ctor_get(v___x_4380_, 0);
lean_inc(v_a_4381_);
lean_dec_ref_known(v___x_4380_, 1);
v___x_4382_ = 0;
lean_inc_ref_n(v_type_4377_, 2);
lean_inc_n(v_declName_4376_, 2);
v___x_4383_ = l_Lean_mkLambda(v_declName_4376_, v___x_4382_, v_type_4377_, v_body_4379_);
lean_inc_ref(v_value_4378_);
lean_inc_ref_n(v___x_4383_, 2);
v___f_4384_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__0___boxed), 11, 5);
lean_closure_set(v___f_4384_, 0, v___x_4383_);
lean_closure_set(v___f_4384_, 1, v_declName_4376_);
lean_closure_set(v___f_4384_, 2, v_type_4377_);
lean_closure_set(v___f_4384_, 3, v_value_4378_);
lean_closure_set(v___f_4384_, 4, v_rhs_4370_);
v___x_4461_ = l_Lean_Meta_isTypeCorrect(v___x_4383_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4461_) == 0)
{
lean_object* v_a_4462_; uint8_t v___x_4463_; 
v_a_4462_ = lean_ctor_get(v___x_4461_, 0);
lean_inc(v_a_4462_);
lean_dec_ref_known(v___x_4461_, 1);
v___x_4463_ = lean_unbox(v_a_4462_);
lean_dec(v_a_4462_);
if (v___x_4463_ == 0)
{
lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4473_; 
lean_dec_ref(v___f_4384_);
lean_dec_ref(v___x_4383_);
lean_dec(v_a_4381_);
lean_dec_ref(v_value_4378_);
lean_dec_ref(v_type_4377_);
lean_dec(v_declName_4376_);
lean_dec(v_mvarId_4368_);
v___x_4464_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__3, &l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__3);
v___x_4465_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_4464_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_);
v_a_4466_ = lean_ctor_get(v___x_4465_, 0);
v_isSharedCheck_4473_ = !lean_is_exclusive(v___x_4465_);
if (v_isSharedCheck_4473_ == 0)
{
v___x_4468_ = v___x_4465_;
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v___x_4465_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4471_; 
if (v_isShared_4469_ == 0)
{
v___x_4471_ = v___x_4468_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v_a_4466_);
v___x_4471_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
return v___x_4471_;
}
}
}
else
{
v___y_4386_ = v_a_4371_;
v___y_4387_ = v_a_4372_;
v___y_4388_ = v_a_4373_;
v___y_4389_ = v_a_4374_;
goto v___jp_4385_;
}
}
else
{
lean_object* v_a_4474_; lean_object* v___x_4476_; uint8_t v_isShared_4477_; uint8_t v_isSharedCheck_4481_; 
lean_dec_ref(v___f_4384_);
lean_dec_ref(v___x_4383_);
lean_dec(v_a_4381_);
lean_dec_ref(v_value_4378_);
lean_dec_ref(v_type_4377_);
lean_dec(v_declName_4376_);
lean_dec(v_mvarId_4368_);
v_a_4474_ = lean_ctor_get(v___x_4461_, 0);
v_isSharedCheck_4481_ = !lean_is_exclusive(v___x_4461_);
if (v_isSharedCheck_4481_ == 0)
{
v___x_4476_ = v___x_4461_;
v_isShared_4477_ = v_isSharedCheck_4481_;
goto v_resetjp_4475_;
}
else
{
lean_inc(v_a_4474_);
lean_dec(v___x_4461_);
v___x_4476_ = lean_box(0);
v_isShared_4477_ = v_isSharedCheck_4481_;
goto v_resetjp_4475_;
}
v_resetjp_4475_:
{
lean_object* v___x_4479_; 
if (v_isShared_4477_ == 0)
{
v___x_4479_ = v___x_4476_;
goto v_reusejp_4478_;
}
else
{
lean_object* v_reuseFailAlloc_4480_; 
v_reuseFailAlloc_4480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4480_, 0, v_a_4474_);
v___x_4479_ = v_reuseFailAlloc_4480_;
goto v_reusejp_4478_;
}
v_reusejp_4478_:
{
return v___x_4479_;
}
}
}
v___jp_4385_:
{
lean_object* v___x_4390_; 
lean_inc_ref(v_type_4377_);
lean_inc(v_declName_4376_);
v___x_4390_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg(v_declName_4376_, v_type_4377_, v___f_4384_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
if (lean_obj_tag(v___x_4390_) == 0)
{
lean_object* v_a_4391_; lean_object* v_snd_4392_; lean_object* v_fst_4393_; lean_object* v_fst_4394_; lean_object* v_snd_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4452_; 
v_a_4391_ = lean_ctor_get(v___x_4390_, 0);
lean_inc(v_a_4391_);
lean_dec_ref_known(v___x_4390_, 1);
v_snd_4392_ = lean_ctor_get(v_a_4391_, 1);
lean_inc(v_snd_4392_);
v_fst_4393_ = lean_ctor_get(v_a_4391_, 0);
lean_inc(v_fst_4393_);
lean_dec(v_a_4391_);
v_fst_4394_ = lean_ctor_get(v_snd_4392_, 0);
v_snd_4395_ = lean_ctor_get(v_snd_4392_, 1);
v_isSharedCheck_4452_ = !lean_is_exclusive(v_snd_4392_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4397_ = v_snd_4392_;
v_isShared_4398_ = v_isSharedCheck_4452_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_snd_4395_);
lean_inc(v_fst_4394_);
lean_dec(v_snd_4392_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4452_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___f_4399_; lean_object* v___x_4400_; 
lean_inc(v_snd_4395_);
lean_inc_ref(v___x_4383_);
v___f_4399_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___lam__1___boxed), 8, 2);
lean_closure_set(v___f_4399_, 0, v___x_4383_);
lean_closure_set(v___f_4399_, 1, v_snd_4395_);
lean_inc_ref(v_type_4377_);
v___x_4400_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0___redArg(v_declName_4376_, v_type_4377_, v___f_4399_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
if (lean_obj_tag(v___x_4400_) == 0)
{
lean_object* v_a_4401_; lean_object* v_fst_4402_; lean_object* v_snd_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4443_; 
v_a_4401_ = lean_ctor_get(v___x_4400_, 0);
lean_inc(v_a_4401_);
lean_dec_ref_known(v___x_4400_, 1);
v_fst_4402_ = lean_ctor_get(v_a_4401_, 0);
v_snd_4403_ = lean_ctor_get(v_a_4401_, 1);
v_isSharedCheck_4443_ = !lean_is_exclusive(v_a_4401_);
if (v_isSharedCheck_4443_ == 0)
{
v___x_4405_ = v_a_4401_;
v_isShared_4406_ = v_isSharedCheck_4443_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_snd_4403_);
lean_inc(v_fst_4402_);
lean_dec(v_a_4401_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4443_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4410_; 
v___x_4407_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___closed__1));
v___x_4408_ = lean_box(0);
if (v_isShared_4406_ == 0)
{
lean_ctor_set_tag(v___x_4405_, 1);
lean_ctor_set(v___x_4405_, 1, v___x_4408_);
lean_ctor_set(v___x_4405_, 0, v_fst_4394_);
v___x_4410_ = v___x_4405_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v_fst_4394_);
lean_ctor_set(v_reuseFailAlloc_4442_, 1, v___x_4408_);
v___x_4410_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
lean_object* v___x_4412_; 
if (v_isShared_4398_ == 0)
{
lean_ctor_set_tag(v___x_4397_, 1);
lean_ctor_set(v___x_4397_, 1, v___x_4410_);
lean_ctor_set(v___x_4397_, 0, v_a_4381_);
v___x_4412_ = v___x_4397_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4381_);
lean_ctor_set(v_reuseFailAlloc_4441_, 1, v___x_4410_);
v___x_4412_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4439_; 
v___x_4413_ = l_Lean_mkConst(v___x_4407_, v___x_4412_);
v___x_4414_ = l_Lean_mkApp6(v___x_4413_, v_type_4377_, v_fst_4393_, v___x_4383_, v_snd_4395_, v_value_4378_, v_fst_4402_);
v___x_4415_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_4368_, v___x_4414_, v___y_4387_);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4415_);
if (v_isSharedCheck_4439_ == 0)
{
lean_object* v_unused_4440_; 
v_unused_4440_ = lean_ctor_get(v___x_4415_, 0);
lean_dec(v_unused_4440_);
v___x_4417_ = v___x_4415_;
v_isShared_4418_ = v_isSharedCheck_4439_;
goto v_resetjp_4416_;
}
else
{
lean_dec(v___x_4415_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4439_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4419_; 
v___x_4419_ = l_Lean_Elab_Tactic_Conv_markAsConvGoal(v_snd_4403_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
if (lean_obj_tag(v___x_4419_) == 0)
{
lean_object* v_a_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4430_; 
v_a_4420_ = lean_ctor_get(v___x_4419_, 0);
v_isSharedCheck_4430_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4422_ = v___x_4419_;
v_isShared_4423_ = v_isSharedCheck_4430_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_a_4420_);
lean_dec(v___x_4419_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4430_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v___x_4425_; 
if (v_isShared_4418_ == 0)
{
lean_ctor_set_tag(v___x_4417_, 1);
lean_ctor_set(v___x_4417_, 0, v_a_4420_);
v___x_4425_ = v___x_4417_;
goto v_reusejp_4424_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v_a_4420_);
v___x_4425_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4424_;
}
v_reusejp_4424_:
{
lean_object* v___x_4427_; 
if (v_isShared_4423_ == 0)
{
lean_ctor_set(v___x_4422_, 0, v___x_4425_);
v___x_4427_ = v___x_4422_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v___x_4425_);
v___x_4427_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
return v___x_4427_;
}
}
}
}
else
{
lean_object* v_a_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4438_; 
lean_del_object(v___x_4417_);
v_a_4431_ = lean_ctor_get(v___x_4419_, 0);
v_isSharedCheck_4438_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4433_ = v___x_4419_;
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_a_4431_);
lean_dec(v___x_4419_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v___x_4436_; 
if (v_isShared_4434_ == 0)
{
v___x_4436_ = v___x_4433_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v_a_4431_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
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
lean_object* v_a_4444_; lean_object* v___x_4446_; uint8_t v_isShared_4447_; uint8_t v_isSharedCheck_4451_; 
lean_del_object(v___x_4397_);
lean_dec(v_snd_4395_);
lean_dec(v_fst_4394_);
lean_dec(v_fst_4393_);
lean_dec_ref(v___x_4383_);
lean_dec(v_a_4381_);
lean_dec_ref(v_value_4378_);
lean_dec_ref(v_type_4377_);
lean_dec(v_mvarId_4368_);
v_a_4444_ = lean_ctor_get(v___x_4400_, 0);
v_isSharedCheck_4451_ = !lean_is_exclusive(v___x_4400_);
if (v_isSharedCheck_4451_ == 0)
{
v___x_4446_ = v___x_4400_;
v_isShared_4447_ = v_isSharedCheck_4451_;
goto v_resetjp_4445_;
}
else
{
lean_inc(v_a_4444_);
lean_dec(v___x_4400_);
v___x_4446_ = lean_box(0);
v_isShared_4447_ = v_isSharedCheck_4451_;
goto v_resetjp_4445_;
}
v_resetjp_4445_:
{
lean_object* v___x_4449_; 
if (v_isShared_4447_ == 0)
{
v___x_4449_ = v___x_4446_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v_a_4444_);
v___x_4449_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
return v___x_4449_;
}
}
}
}
}
else
{
lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4460_; 
lean_dec_ref(v___x_4383_);
lean_dec(v_a_4381_);
lean_dec_ref(v_value_4378_);
lean_dec_ref(v_type_4377_);
lean_dec(v_declName_4376_);
lean_dec(v_mvarId_4368_);
v_a_4453_ = lean_ctor_get(v___x_4390_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4390_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4455_ = v___x_4390_;
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4390_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4458_; 
if (v_isShared_4456_ == 0)
{
v___x_4458_ = v___x_4455_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4453_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
}
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
lean_dec_ref(v_body_4379_);
lean_dec_ref(v_value_4378_);
lean_dec_ref(v_type_4377_);
lean_dec(v_declName_4376_);
lean_dec_ref(v_rhs_4370_);
lean_dec(v_mvarId_4368_);
v_a_4482_ = lean_ctor_get(v___x_4380_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4380_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4380_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4380_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
else
{
lean_object* v___x_4490_; lean_object* v___x_4491_; 
lean_dec_ref(v_rhs_4370_);
lean_dec_ref(v_lhs_4369_);
lean_dec(v_mvarId_4368_);
v___x_4490_ = lean_box(0);
v___x_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4491_, 0, v___x_4490_);
return v___x_4491_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f___boxed(lean_object* v_mvarId_4492_, lean_object* v_lhs_4493_, lean_object* v_rhs_4494_, lean_object* v_a_4495_, lean_object* v_a_4496_, lean_object* v_a_4497_, lean_object* v_a_4498_, lean_object* v_a_4499_){
_start:
{
lean_object* v_res_4500_; 
v_res_4500_ = l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f(v_mvarId_4492_, v_lhs_4493_, v_rhs_4494_, v_a_4495_, v_a_4496_, v_a_4497_, v_a_4498_);
lean_dec(v_a_4498_);
lean_dec_ref(v_a_4497_);
lean_dec(v_a_4496_);
lean_dec_ref(v_a_4495_);
return v_res_4500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0(lean_object* v_body_4502_, lean_object* v_snd_4503_, lean_object* v_b_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_){
_start:
{
lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; 
v___x_4510_ = lean_expr_instantiate1(v_body_4502_, v_b_4504_);
v___x_4511_ = lean_box(0);
v___x_4512_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v___x_4510_, v___x_4511_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
if (lean_obj_tag(v___x_4512_) == 0)
{
lean_object* v_a_4513_; lean_object* v_fst_4514_; lean_object* v_snd_4515_; lean_object* v___x_4517_; uint8_t v_isShared_4518_; uint8_t v_isSharedCheck_4577_; 
v_a_4513_ = lean_ctor_get(v___x_4512_, 0);
lean_inc(v_a_4513_);
lean_dec_ref_known(v___x_4512_, 1);
v_fst_4514_ = lean_ctor_get(v_a_4513_, 0);
v_snd_4515_ = lean_ctor_get(v_a_4513_, 1);
v_isSharedCheck_4577_ = !lean_is_exclusive(v_a_4513_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4517_ = v_a_4513_;
v_isShared_4518_ = v_isSharedCheck_4577_;
goto v_resetjp_4516_;
}
else
{
lean_inc(v_snd_4515_);
lean_inc(v_fst_4514_);
lean_dec(v_a_4513_);
v___x_4517_ = lean_box(0);
v_isShared_4518_ = v_isSharedCheck_4577_;
goto v_resetjp_4516_;
}
v_resetjp_4516_:
{
lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; uint8_t v___x_4522_; uint8_t v___x_4523_; uint8_t v___x_4524_; lean_object* v___x_4525_; 
v___x_4519_ = lean_unsigned_to_nat(1u);
v___x_4520_ = lean_mk_empty_array_with_capacity(v___x_4519_);
v___x_4521_ = lean_array_push(v___x_4520_, v_b_4504_);
v___x_4522_ = 0;
v___x_4523_ = 1;
v___x_4524_ = 1;
lean_inc(v_fst_4514_);
v___x_4525_ = l_Lean_Meta_mkLambdaFVars(v___x_4521_, v_fst_4514_, v___x_4522_, v___x_4523_, v___x_4522_, v___x_4523_, v___x_4524_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
if (lean_obj_tag(v___x_4525_) == 0)
{
lean_object* v_a_4526_; lean_object* v___x_4527_; 
v_a_4526_ = lean_ctor_get(v___x_4525_, 0);
lean_inc(v_a_4526_);
lean_dec_ref_known(v___x_4525_, 1);
lean_inc(v_snd_4515_);
v___x_4527_ = l_Lean_Meta_mkLambdaFVars(v___x_4521_, v_snd_4515_, v___x_4522_, v___x_4523_, v___x_4522_, v___x_4523_, v___x_4524_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; lean_object* v___x_4529_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
lean_inc(v_a_4528_);
lean_dec_ref_known(v___x_4527_, 1);
v___x_4529_ = l_Lean_Meta_mkForallFVars(v___x_4521_, v_fst_4514_, v___x_4522_, v___x_4523_, v___x_4523_, v___x_4524_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
lean_dec_ref(v___x_4521_);
if (lean_obj_tag(v___x_4529_) == 0)
{
lean_object* v_a_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v_a_4530_ = lean_ctor_get(v___x_4529_, 0);
lean_inc(v_a_4530_);
lean_dec_ref_known(v___x_4529_, 1);
v___x_4531_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___closed__0));
v___x_4532_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_resolveRhs(v___x_4531_, v_snd_4503_, v_a_4530_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
if (lean_obj_tag(v___x_4532_) == 0)
{
lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4543_; 
v_isSharedCheck_4543_ = !lean_is_exclusive(v___x_4532_);
if (v_isSharedCheck_4543_ == 0)
{
lean_object* v_unused_4544_; 
v_unused_4544_ = lean_ctor_get(v___x_4532_, 0);
lean_dec(v_unused_4544_);
v___x_4534_ = v___x_4532_;
v_isShared_4535_ = v_isSharedCheck_4543_;
goto v_resetjp_4533_;
}
else
{
lean_dec(v___x_4532_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4543_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4537_; 
if (v_isShared_4518_ == 0)
{
lean_ctor_set(v___x_4517_, 0, v_a_4528_);
v___x_4537_ = v___x_4517_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_a_4528_);
lean_ctor_set(v_reuseFailAlloc_4542_, 1, v_snd_4515_);
v___x_4537_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
lean_object* v___x_4538_; lean_object* v___x_4540_; 
v___x_4538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4538_, 0, v_a_4526_);
lean_ctor_set(v___x_4538_, 1, v___x_4537_);
if (v_isShared_4535_ == 0)
{
lean_ctor_set(v___x_4534_, 0, v___x_4538_);
v___x_4540_ = v___x_4534_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v___x_4538_);
v___x_4540_ = v_reuseFailAlloc_4541_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
return v___x_4540_;
}
}
}
}
else
{
lean_object* v_a_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4552_; 
lean_dec(v_a_4528_);
lean_dec(v_a_4526_);
lean_del_object(v___x_4517_);
lean_dec(v_snd_4515_);
v_a_4545_ = lean_ctor_get(v___x_4532_, 0);
v_isSharedCheck_4552_ = !lean_is_exclusive(v___x_4532_);
if (v_isSharedCheck_4552_ == 0)
{
v___x_4547_ = v___x_4532_;
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_a_4545_);
lean_dec(v___x_4532_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v___x_4550_; 
if (v_isShared_4548_ == 0)
{
v___x_4550_ = v___x_4547_;
goto v_reusejp_4549_;
}
else
{
lean_object* v_reuseFailAlloc_4551_; 
v_reuseFailAlloc_4551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4551_, 0, v_a_4545_);
v___x_4550_ = v_reuseFailAlloc_4551_;
goto v_reusejp_4549_;
}
v_reusejp_4549_:
{
return v___x_4550_;
}
}
}
}
else
{
lean_object* v_a_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4560_; 
lean_dec(v_a_4528_);
lean_dec(v_a_4526_);
lean_del_object(v___x_4517_);
lean_dec(v_snd_4515_);
lean_dec_ref(v_snd_4503_);
v_a_4553_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4555_ = v___x_4529_;
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_a_4553_);
lean_dec(v___x_4529_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4560_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
lean_object* v___x_4558_; 
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
return v___x_4558_;
}
}
}
}
else
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4568_; 
lean_dec(v_a_4526_);
lean_dec_ref(v___x_4521_);
lean_del_object(v___x_4517_);
lean_dec(v_snd_4515_);
lean_dec(v_fst_4514_);
lean_dec_ref(v_snd_4503_);
v_a_4561_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4568_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4568_ == 0)
{
v___x_4563_ = v___x_4527_;
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4527_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
return v___x_4566_;
}
}
}
}
else
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4576_; 
lean_dec_ref(v___x_4521_);
lean_del_object(v___x_4517_);
lean_dec(v_snd_4515_);
lean_dec(v_fst_4514_);
lean_dec_ref(v_snd_4503_);
v_a_4569_ = lean_ctor_get(v___x_4525_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4525_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4571_ = v___x_4525_;
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___x_4525_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_a_4569_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
}
}
else
{
lean_object* v_a_4578_; lean_object* v___x_4580_; uint8_t v_isShared_4581_; uint8_t v_isSharedCheck_4585_; 
lean_dec_ref(v_b_4504_);
lean_dec_ref(v_snd_4503_);
v_a_4578_ = lean_ctor_get(v___x_4512_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v___x_4512_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4580_ = v___x_4512_;
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
else
{
lean_inc(v_a_4578_);
lean_dec(v___x_4512_);
v___x_4580_ = lean_box(0);
v_isShared_4581_ = v_isSharedCheck_4585_;
goto v_resetjp_4579_;
}
v_resetjp_4579_:
{
lean_object* v___x_4583_; 
if (v_isShared_4581_ == 0)
{
v___x_4583_ = v___x_4580_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v_a_4578_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___boxed(lean_object* v_body_4586_, lean_object* v_snd_4587_, lean_object* v_b_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_){
_start:
{
lean_object* v_res_4594_; 
v_res_4594_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0(v_body_4586_, v_snd_4587_, v_b_4588_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_);
lean_dec(v___y_4592_);
lean_dec_ref(v___y_4591_);
lean_dec(v___y_4590_);
lean_dec_ref(v___y_4589_);
lean_dec_ref(v_body_4586_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0(lean_object* v_body_4595_, lean_object* v_snd_4596_, lean_object* v_name_4597_, uint8_t v_bi_4598_, lean_object* v_type_4599_, uint8_t v_kind_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_){
_start:
{
lean_object* v___f_4606_; lean_object* v___x_4607_; 
v___f_4606_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4606_, 0, v_body_4595_);
lean_closure_set(v___f_4606_, 1, v_snd_4596_);
v___x_4607_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_4597_, v_bi_4598_, v_type_4599_, v___f_4606_, v_kind_4600_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_);
if (lean_obj_tag(v___x_4607_) == 0)
{
lean_object* v_a_4608_; lean_object* v___x_4610_; uint8_t v_isShared_4611_; uint8_t v_isSharedCheck_4615_; 
v_a_4608_ = lean_ctor_get(v___x_4607_, 0);
v_isSharedCheck_4615_ = !lean_is_exclusive(v___x_4607_);
if (v_isSharedCheck_4615_ == 0)
{
v___x_4610_ = v___x_4607_;
v_isShared_4611_ = v_isSharedCheck_4615_;
goto v_resetjp_4609_;
}
else
{
lean_inc(v_a_4608_);
lean_dec(v___x_4607_);
v___x_4610_ = lean_box(0);
v_isShared_4611_ = v_isSharedCheck_4615_;
goto v_resetjp_4609_;
}
v_resetjp_4609_:
{
lean_object* v___x_4613_; 
if (v_isShared_4611_ == 0)
{
v___x_4613_ = v___x_4610_;
goto v_reusejp_4612_;
}
else
{
lean_object* v_reuseFailAlloc_4614_; 
v_reuseFailAlloc_4614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4614_, 0, v_a_4608_);
v___x_4613_ = v_reuseFailAlloc_4614_;
goto v_reusejp_4612_;
}
v_reusejp_4612_:
{
return v___x_4613_;
}
}
}
else
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4623_; 
v_a_4616_ = lean_ctor_get(v___x_4607_, 0);
v_isSharedCheck_4623_ = !lean_is_exclusive(v___x_4607_);
if (v_isSharedCheck_4623_ == 0)
{
v___x_4618_ = v___x_4607_;
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v___x_4607_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v___x_4621_; 
if (v_isShared_4619_ == 0)
{
v___x_4621_ = v___x_4618_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v_a_4616_);
v___x_4621_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
return v___x_4621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___boxed(lean_object* v_body_4624_, lean_object* v_snd_4625_, lean_object* v_name_4626_, lean_object* v_bi_4627_, lean_object* v_type_4628_, lean_object* v_kind_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_){
_start:
{
uint8_t v_bi_boxed_4635_; uint8_t v_kind_boxed_4636_; lean_object* v_res_4637_; 
v_bi_boxed_4635_ = lean_unbox(v_bi_4627_);
v_kind_boxed_4636_ = lean_unbox(v_kind_4629_);
v_res_4637_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0(v_body_4624_, v_snd_4625_, v_name_4626_, v_bi_boxed_4635_, v_type_4628_, v_kind_boxed_4636_, v___y_4630_, v___y_4631_, v___y_4632_, v___y_4633_);
lean_dec(v___y_4633_);
lean_dec_ref(v___y_4632_);
lean_dec(v___y_4631_);
lean_dec_ref(v___y_4630_);
return v_res_4637_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4639_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__0));
v___x_4640_ = l_Lean_stringToMessageData(v___x_4639_);
return v___x_4640_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; 
v___x_4648_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__6));
v___x_4649_ = l_Lean_stringToMessageData(v___x_4648_);
return v___x_4649_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__9(void){
_start:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4651_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__8));
v___x_4652_ = l_Lean_stringToMessageData(v___x_4651_);
return v___x_4652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0(lean_object* v_mvarId_4653_, lean_object* v_userName_x3f_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_){
_start:
{
lean_object* v___y_4661_; lean_object* v___y_4662_; lean_object* v___y_4663_; lean_object* v___y_4664_; lean_object* v___y_4668_; uint8_t v___y_4669_; lean_object* v___y_4670_; lean_object* v___y_4671_; lean_object* v___y_4672_; lean_object* v___y_4673_; lean_object* v___y_4674_; lean_object* v___x_4727_; 
lean_inc(v_mvarId_4653_);
v___x_4727_ = l_Lean_Elab_Tactic_Conv_getLhsRhsCore(v_mvarId_4653_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v_fst_4729_; lean_object* v_snd_4730_; lean_object* v___x_4732_; uint8_t v_isShared_4733_; uint8_t v_isSharedCheck_4863_; 
v_a_4728_ = lean_ctor_get(v___x_4727_, 0);
lean_inc(v_a_4728_);
lean_dec_ref_known(v___x_4727_, 1);
v_fst_4729_ = lean_ctor_get(v_a_4728_, 0);
v_snd_4730_ = lean_ctor_get(v_a_4728_, 1);
v_isSharedCheck_4863_ = !lean_is_exclusive(v_a_4728_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4732_ = v_a_4728_;
v_isShared_4733_ = v_isSharedCheck_4863_;
goto v_resetjp_4731_;
}
else
{
lean_inc(v_snd_4730_);
lean_inc(v_fst_4729_);
lean_dec(v_a_4728_);
v___x_4732_ = lean_box(0);
v_isShared_4733_ = v_isSharedCheck_4863_;
goto v_resetjp_4731_;
}
v_resetjp_4731_:
{
lean_object* v___x_4734_; lean_object* v_a_4735_; lean_object* v___x_4736_; 
v___x_4734_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Conv_congr_spec__0___redArg(v_fst_4729_, v___y_4656_);
v_a_4735_ = lean_ctor_get(v___x_4734_, 0);
lean_inc(v_a_4735_);
lean_dec_ref(v___x_4734_);
v___x_4736_ = l_Lean_Expr_cleanupAnnotations(v_a_4735_);
lean_dec(v_a_4735_);
if (lean_obj_tag(v___x_4736_) == 7)
{
lean_object* v_binderName_4737_; lean_object* v_binderType_4738_; lean_object* v_body_4739_; uint8_t v_binderInfo_4740_; lean_object* v___x_4741_; 
lean_del_object(v___x_4732_);
v_binderName_4737_ = lean_ctor_get(v___x_4736_, 0);
lean_inc(v_binderName_4737_);
v_binderType_4738_ = lean_ctor_get(v___x_4736_, 1);
lean_inc_ref_n(v_binderType_4738_, 2);
v_body_4739_ = lean_ctor_get(v___x_4736_, 2);
lean_inc_ref(v_body_4739_);
v_binderInfo_4740_ = lean_ctor_get_uint8(v___x_4736_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_4736_, 3);
v___x_4741_ = l_Lean_Meta_getLevel(v_binderType_4738_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v_a_4742_; lean_object* v___x_4743_; lean_object* v_userName_4745_; lean_object* v___y_4746_; lean_object* v___y_4747_; lean_object* v___y_4748_; lean_object* v___y_4749_; 
v_a_4742_ = lean_ctor_get(v___x_4741_, 0);
lean_inc(v_a_4742_);
lean_dec_ref_known(v___x_4741_, 1);
lean_inc_ref(v_body_4739_);
lean_inc_ref(v_binderType_4738_);
lean_inc(v_binderName_4737_);
v___x_4743_ = l_Lean_Expr_lam___override(v_binderName_4737_, v_binderType_4738_, v_body_4739_, v_binderInfo_4740_);
if (lean_obj_tag(v_userName_x3f_4654_) == 1)
{
lean_object* v_val_4786_; 
lean_dec(v_binderName_4737_);
v_val_4786_ = lean_ctor_get(v_userName_x3f_4654_, 0);
lean_inc(v_val_4786_);
lean_dec_ref_known(v_userName_x3f_4654_, 1);
v_userName_4745_ = v_val_4786_;
v___y_4746_ = v___y_4655_;
v___y_4747_ = v___y_4656_;
v___y_4748_ = v___y_4657_;
v___y_4749_ = v___y_4658_;
goto v___jp_4744_;
}
else
{
lean_object* v___x_4787_; 
lean_dec(v_userName_x3f_4654_);
v___x_4787_ = l_Lean_Meta_mkFreshBinderNameForTactic___redArg(v_binderName_4737_, v___y_4655_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4787_) == 0)
{
lean_object* v_a_4788_; 
v_a_4788_ = lean_ctor_get(v___x_4787_, 0);
lean_inc(v_a_4788_);
lean_dec_ref_known(v___x_4787_, 1);
v_userName_4745_ = v_a_4788_;
v___y_4746_ = v___y_4655_;
v___y_4747_ = v___y_4656_;
v___y_4748_ = v___y_4657_;
v___y_4749_ = v___y_4658_;
goto v___jp_4744_;
}
else
{
lean_object* v_a_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4796_; 
lean_dec_ref(v___x_4743_);
lean_dec(v_a_4742_);
lean_dec_ref(v_body_4739_);
lean_dec_ref(v_binderType_4738_);
lean_dec(v_snd_4730_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_mvarId_4653_);
v_a_4789_ = lean_ctor_get(v___x_4787_, 0);
v_isSharedCheck_4796_ = !lean_is_exclusive(v___x_4787_);
if (v_isSharedCheck_4796_ == 0)
{
v___x_4791_ = v___x_4787_;
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_a_4789_);
lean_dec(v___x_4787_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v___x_4794_; 
if (v_isShared_4792_ == 0)
{
v___x_4794_ = v___x_4791_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4795_; 
v_reuseFailAlloc_4795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4795_, 0, v_a_4789_);
v___x_4794_ = v_reuseFailAlloc_4795_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
return v___x_4794_;
}
}
}
}
v___jp_4744_:
{
uint8_t v___x_4750_; lean_object* v___x_4751_; 
v___x_4750_ = 0;
lean_inc_ref(v_binderType_4738_);
v___x_4751_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0(v_body_4739_, v_snd_4730_, v_userName_4745_, v_binderInfo_4740_, v_binderType_4738_, v___x_4750_, v___y_4746_, v___y_4747_, v___y_4748_, v___y_4749_);
lean_dec(v___y_4749_);
lean_dec_ref(v___y_4748_);
lean_dec_ref(v___y_4746_);
if (lean_obj_tag(v___x_4751_) == 0)
{
lean_object* v_a_4752_; lean_object* v_snd_4753_; lean_object* v_fst_4754_; lean_object* v_fst_4755_; lean_object* v_snd_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4777_; 
v_a_4752_ = lean_ctor_get(v___x_4751_, 0);
lean_inc(v_a_4752_);
lean_dec_ref_known(v___x_4751_, 1);
v_snd_4753_ = lean_ctor_get(v_a_4752_, 1);
lean_inc(v_snd_4753_);
v_fst_4754_ = lean_ctor_get(v_a_4752_, 0);
lean_inc(v_fst_4754_);
lean_dec(v_a_4752_);
v_fst_4755_ = lean_ctor_get(v_snd_4753_, 0);
v_snd_4756_ = lean_ctor_get(v_snd_4753_, 1);
v_isSharedCheck_4777_ = !lean_is_exclusive(v_snd_4753_);
if (v_isSharedCheck_4777_ == 0)
{
v___x_4758_ = v_snd_4753_;
v_isShared_4759_ = v_isSharedCheck_4777_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_snd_4756_);
lean_inc(v_fst_4755_);
lean_dec(v_snd_4753_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4777_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4763_; 
v___x_4760_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__5));
v___x_4761_ = lean_box(0);
if (v_isShared_4759_ == 0)
{
lean_ctor_set_tag(v___x_4758_, 1);
lean_ctor_set(v___x_4758_, 1, v___x_4761_);
lean_ctor_set(v___x_4758_, 0, v_a_4742_);
v___x_4763_ = v___x_4758_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4776_; 
v_reuseFailAlloc_4776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4776_, 0, v_a_4742_);
lean_ctor_set(v_reuseFailAlloc_4776_, 1, v___x_4761_);
v___x_4763_ = v_reuseFailAlloc_4776_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4774_; 
v___x_4764_ = l_Lean_mkConst(v___x_4760_, v___x_4763_);
v___x_4765_ = l_Lean_mkApp4(v___x_4764_, v_binderType_4738_, v___x_4743_, v_fst_4754_, v_fst_4755_);
v___x_4766_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_congr_spec__1___redArg(v_mvarId_4653_, v___x_4765_, v___y_4747_);
lean_dec(v___y_4747_);
v_isSharedCheck_4774_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4774_ == 0)
{
lean_object* v_unused_4775_; 
v_unused_4775_ = lean_ctor_get(v___x_4766_, 0);
lean_dec(v_unused_4775_);
v___x_4768_ = v___x_4766_;
v_isShared_4769_ = v_isSharedCheck_4774_;
goto v_resetjp_4767_;
}
else
{
lean_dec(v___x_4766_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4774_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v___x_4770_; lean_object* v___x_4772_; 
v___x_4770_ = l_Lean_Expr_mvarId_x21(v_snd_4756_);
lean_dec(v_snd_4756_);
if (v_isShared_4769_ == 0)
{
lean_ctor_set(v___x_4768_, 0, v___x_4770_);
v___x_4772_ = v___x_4768_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v___x_4770_);
v___x_4772_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
return v___x_4772_;
}
}
}
}
}
else
{
lean_object* v_a_4778_; lean_object* v___x_4780_; uint8_t v_isShared_4781_; uint8_t v_isSharedCheck_4785_; 
lean_dec(v___y_4747_);
lean_dec_ref(v___x_4743_);
lean_dec(v_a_4742_);
lean_dec_ref(v_binderType_4738_);
lean_dec(v_mvarId_4653_);
v_a_4778_ = lean_ctor_get(v___x_4751_, 0);
v_isSharedCheck_4785_ = !lean_is_exclusive(v___x_4751_);
if (v_isSharedCheck_4785_ == 0)
{
v___x_4780_ = v___x_4751_;
v_isShared_4781_ = v_isSharedCheck_4785_;
goto v_resetjp_4779_;
}
else
{
lean_inc(v_a_4778_);
lean_dec(v___x_4751_);
v___x_4780_ = lean_box(0);
v_isShared_4781_ = v_isSharedCheck_4785_;
goto v_resetjp_4779_;
}
v_resetjp_4779_:
{
lean_object* v___x_4783_; 
if (v_isShared_4781_ == 0)
{
v___x_4783_ = v___x_4780_;
goto v_reusejp_4782_;
}
else
{
lean_object* v_reuseFailAlloc_4784_; 
v_reuseFailAlloc_4784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4784_, 0, v_a_4778_);
v___x_4783_ = v_reuseFailAlloc_4784_;
goto v_reusejp_4782_;
}
v_reusejp_4782_:
{
return v___x_4783_;
}
}
}
}
}
else
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4804_; 
lean_dec_ref(v_body_4739_);
lean_dec_ref(v_binderType_4738_);
lean_dec(v_binderName_4737_);
lean_dec(v_snd_4730_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v_a_4797_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4804_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4804_ == 0)
{
v___x_4799_ = v___x_4741_;
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4741_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4804_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___x_4802_; 
if (v_isShared_4800_ == 0)
{
v___x_4802_ = v___x_4799_;
goto v_reusejp_4801_;
}
else
{
lean_object* v_reuseFailAlloc_4803_; 
v_reuseFailAlloc_4803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4803_, 0, v_a_4797_);
v___x_4802_ = v_reuseFailAlloc_4803_;
goto v_reusejp_4801_;
}
v_reusejp_4801_:
{
return v___x_4802_;
}
}
}
}
else
{
lean_object* v___x_4805_; 
lean_inc_ref(v___x_4736_);
lean_inc(v_mvarId_4653_);
v___x_4805_ = l_Lean_Elab_Tactic_Conv_extLetBodyCongr_x3f(v_mvarId_4653_, v___x_4736_, v_snd_4730_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4805_) == 0)
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4854_; 
v_a_4806_ = lean_ctor_get(v___x_4805_, 0);
v_isSharedCheck_4854_ = !lean_is_exclusive(v___x_4805_);
if (v_isSharedCheck_4854_ == 0)
{
v___x_4808_ = v___x_4805_;
v_isShared_4809_ = v_isSharedCheck_4854_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v___x_4805_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4854_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
if (lean_obj_tag(v_a_4806_) == 1)
{
lean_object* v_val_4810_; lean_object* v___x_4812_; 
lean_dec_ref(v___x_4736_);
lean_del_object(v___x_4732_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v_val_4810_ = lean_ctor_get(v_a_4806_, 0);
lean_inc(v_val_4810_);
lean_dec_ref_known(v_a_4806_, 1);
if (v_isShared_4809_ == 0)
{
lean_ctor_set(v___x_4808_, 0, v_val_4810_);
v___x_4812_ = v___x_4808_;
goto v_reusejp_4811_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_val_4810_);
v___x_4812_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4811_;
}
v_reusejp_4811_:
{
return v___x_4812_;
}
}
else
{
lean_object* v___x_4814_; 
lean_del_object(v___x_4808_);
lean_dec(v_a_4806_);
lean_inc(v___y_4658_);
lean_inc_ref(v___y_4657_);
lean_inc(v___y_4656_);
lean_inc_ref(v___y_4655_);
lean_inc_ref(v___x_4736_);
v___x_4814_ = lean_infer_type(v___x_4736_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4814_) == 0)
{
lean_object* v_a_4815_; lean_object* v___x_4816_; 
v_a_4815_ = lean_ctor_get(v___x_4814_, 0);
lean_inc(v_a_4815_);
lean_dec_ref_known(v___x_4814_, 1);
v___x_4816_ = l_Lean_Meta_whnfD(v_a_4815_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4816_) == 0)
{
lean_object* v_a_4817_; uint8_t v___x_4818_; 
v_a_4817_ = lean_ctor_get(v___x_4816_, 0);
lean_inc(v_a_4817_);
lean_dec_ref_known(v___x_4816_, 1);
v___x_4818_ = l_Lean_Expr_isForall(v_a_4817_);
if (v___x_4818_ == 0)
{
lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4823_; 
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v___x_4819_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__7, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__7);
v___x_4820_ = l_Lean_MessageData_ofExpr(v___x_4736_);
v___x_4821_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__9, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__9_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__9);
if (v_isShared_4733_ == 0)
{
lean_ctor_set_tag(v___x_4732_, 7);
lean_ctor_set(v___x_4732_, 1, v___x_4821_);
lean_ctor_set(v___x_4732_, 0, v___x_4820_);
v___x_4823_ = v___x_4732_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4837_; 
v_reuseFailAlloc_4837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4837_, 0, v___x_4820_);
lean_ctor_set(v_reuseFailAlloc_4837_, 1, v___x_4821_);
v___x_4823_ = v_reuseFailAlloc_4837_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
v___x_4824_ = l_Lean_MessageData_ofExpr(v_a_4817_);
v___x_4825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4825_, 0, v___x_4823_);
lean_ctor_set(v___x_4825_, 1, v___x_4824_);
v___x_4826_ = l_Lean_indentD(v___x_4825_);
v___x_4827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4827_, 0, v___x_4819_);
lean_ctor_set(v___x_4827_, 1, v___x_4826_);
v___x_4828_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_4827_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
v_a_4829_ = lean_ctor_get(v___x_4828_, 0);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4828_);
if (v_isSharedCheck_4836_ == 0)
{
v___x_4831_ = v___x_4828_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4828_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
}
else
{
lean_dec(v_a_4817_);
lean_dec_ref(v___x_4736_);
lean_del_object(v___x_4732_);
goto v___jp_4688_;
}
}
else
{
lean_object* v_a_4838_; lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4845_; 
lean_dec_ref(v___x_4736_);
lean_del_object(v___x_4732_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v_a_4838_ = lean_ctor_get(v___x_4816_, 0);
v_isSharedCheck_4845_ = !lean_is_exclusive(v___x_4816_);
if (v_isSharedCheck_4845_ == 0)
{
v___x_4840_ = v___x_4816_;
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
else
{
lean_inc(v_a_4838_);
lean_dec(v___x_4816_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
lean_object* v___x_4843_; 
if (v_isShared_4841_ == 0)
{
v___x_4843_ = v___x_4840_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v_a_4838_);
v___x_4843_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
return v___x_4843_;
}
}
}
}
else
{
lean_object* v_a_4846_; lean_object* v___x_4848_; uint8_t v_isShared_4849_; uint8_t v_isSharedCheck_4853_; 
lean_dec_ref(v___x_4736_);
lean_del_object(v___x_4732_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v_a_4846_ = lean_ctor_get(v___x_4814_, 0);
v_isSharedCheck_4853_ = !lean_is_exclusive(v___x_4814_);
if (v_isSharedCheck_4853_ == 0)
{
v___x_4848_ = v___x_4814_;
v_isShared_4849_ = v_isSharedCheck_4853_;
goto v_resetjp_4847_;
}
else
{
lean_inc(v_a_4846_);
lean_dec(v___x_4814_);
v___x_4848_ = lean_box(0);
v_isShared_4849_ = v_isSharedCheck_4853_;
goto v_resetjp_4847_;
}
v_resetjp_4847_:
{
lean_object* v___x_4851_; 
if (v_isShared_4849_ == 0)
{
v___x_4851_ = v___x_4848_;
goto v_reusejp_4850_;
}
else
{
lean_object* v_reuseFailAlloc_4852_; 
v_reuseFailAlloc_4852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4852_, 0, v_a_4846_);
v___x_4851_ = v_reuseFailAlloc_4852_;
goto v_reusejp_4850_;
}
v_reusejp_4850_:
{
return v___x_4851_;
}
}
}
}
}
}
else
{
lean_object* v_a_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4862_; 
lean_dec_ref(v___x_4736_);
lean_del_object(v___x_4732_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v_a_4855_ = lean_ctor_get(v___x_4805_, 0);
v_isSharedCheck_4862_ = !lean_is_exclusive(v___x_4805_);
if (v_isSharedCheck_4862_ == 0)
{
v___x_4857_ = v___x_4805_;
v_isShared_4858_ = v_isSharedCheck_4862_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_a_4855_);
lean_dec(v___x_4805_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4862_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v___x_4860_; 
if (v_isShared_4858_ == 0)
{
v___x_4860_ = v___x_4857_;
goto v_reusejp_4859_;
}
else
{
lean_object* v_reuseFailAlloc_4861_; 
v_reuseFailAlloc_4861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4861_, 0, v_a_4855_);
v___x_4860_ = v_reuseFailAlloc_4861_;
goto v_reusejp_4859_;
}
v_reusejp_4859_:
{
return v___x_4860_;
}
}
}
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v_a_4864_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4727_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4727_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
v___jp_4660_:
{
lean_object* v___x_4665_; lean_object* v___x_4666_; 
v___x_4665_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__1);
v___x_4666_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies_spec__0___redArg(v___x_4665_, v___y_4661_, v___y_4662_, v___y_4663_, v___y_4664_);
lean_dec(v___y_4664_);
lean_dec_ref(v___y_4663_);
lean_dec(v___y_4662_);
lean_dec_ref(v___y_4661_);
return v___x_4666_;
}
v___jp_4667_:
{
lean_object* v___x_4675_; lean_object* v___x_4676_; 
v___x_4675_ = lean_unsigned_to_nat(1u);
v___x_4676_ = l_Lean_Meta_introNCore(v___y_4672_, v___x_4675_, v___y_4674_, v___y_4669_, v___y_4669_, v___y_4670_, v___y_4673_, v___y_4668_, v___y_4671_);
if (lean_obj_tag(v___x_4676_) == 0)
{
lean_object* v_a_4677_; lean_object* v_snd_4678_; lean_object* v___x_4679_; 
v_a_4677_ = lean_ctor_get(v___x_4676_, 0);
lean_inc(v_a_4677_);
lean_dec_ref_known(v___x_4676_, 1);
v_snd_4678_ = lean_ctor_get(v_a_4677_, 1);
lean_inc(v_snd_4678_);
lean_dec(v_a_4677_);
v___x_4679_ = l_Lean_Elab_Tactic_Conv_markAsConvGoal(v_snd_4678_, v___y_4670_, v___y_4673_, v___y_4668_, v___y_4671_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4668_);
lean_dec(v___y_4673_);
lean_dec_ref(v___y_4670_);
return v___x_4679_;
}
else
{
lean_object* v_a_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4687_; 
lean_dec(v___y_4673_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
lean_dec_ref(v___y_4668_);
v_a_4680_ = lean_ctor_get(v___x_4676_, 0);
v_isSharedCheck_4687_ = !lean_is_exclusive(v___x_4676_);
if (v_isSharedCheck_4687_ == 0)
{
v___x_4682_ = v___x_4676_;
v_isShared_4683_ = v_isSharedCheck_4687_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_a_4680_);
lean_dec(v___x_4676_);
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
v___jp_4688_:
{
lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4689_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___closed__3));
v___x_4690_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v___x_4689_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4690_) == 0)
{
lean_object* v_a_4691_; uint8_t v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
v_a_4691_ = lean_ctor_get(v___x_4690_, 0);
lean_inc(v_a_4691_);
lean_dec_ref_known(v___x_4690_, 1);
v___x_4692_ = 0;
v___x_4693_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_congrImplies___closed__4));
v___x_4694_ = lean_box(0);
v___x_4695_ = l_Lean_MVarId_apply(v_mvarId_4653_, v_a_4691_, v___x_4693_, v___x_4694_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v_a_4696_; 
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4696_);
lean_dec_ref_known(v___x_4695_, 1);
if (lean_obj_tag(v_a_4696_) == 1)
{
lean_object* v_tail_4697_; 
v_tail_4697_ = lean_ctor_get(v_a_4696_, 1);
if (lean_obj_tag(v_tail_4697_) == 0)
{
if (lean_obj_tag(v_userName_x3f_4654_) == 1)
{
lean_object* v_head_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4707_; 
v_head_4698_ = lean_ctor_get(v_a_4696_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v_a_4696_);
if (v_isSharedCheck_4707_ == 0)
{
lean_object* v_unused_4708_; 
v_unused_4708_ = lean_ctor_get(v_a_4696_, 1);
lean_dec(v_unused_4708_);
v___x_4700_ = v_a_4696_;
v_isShared_4701_ = v_isSharedCheck_4707_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_head_4698_);
lean_dec(v_a_4696_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4707_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v_val_4702_; lean_object* v___x_4703_; lean_object* v___x_4705_; 
v_val_4702_ = lean_ctor_get(v_userName_x3f_4654_, 0);
lean_inc(v_val_4702_);
lean_dec_ref_known(v_userName_x3f_4654_, 1);
v___x_4703_ = lean_box(0);
if (v_isShared_4701_ == 0)
{
lean_ctor_set(v___x_4700_, 1, v___x_4703_);
lean_ctor_set(v___x_4700_, 0, v_val_4702_);
v___x_4705_ = v___x_4700_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v_val_4702_);
lean_ctor_set(v_reuseFailAlloc_4706_, 1, v___x_4703_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
v___y_4668_ = v___y_4657_;
v___y_4669_ = v___x_4692_;
v___y_4670_ = v___y_4655_;
v___y_4671_ = v___y_4658_;
v___y_4672_ = v_head_4698_;
v___y_4673_ = v___y_4656_;
v___y_4674_ = v___x_4705_;
goto v___jp_4667_;
}
}
}
else
{
lean_object* v_head_4709_; lean_object* v___x_4710_; 
lean_dec(v_userName_x3f_4654_);
v_head_4709_ = lean_ctor_get(v_a_4696_, 0);
lean_inc(v_head_4709_);
lean_dec_ref_known(v_a_4696_, 2);
v___x_4710_ = lean_box(0);
v___y_4668_ = v___y_4657_;
v___y_4669_ = v___x_4692_;
v___y_4670_ = v___y_4655_;
v___y_4671_ = v___y_4658_;
v___y_4672_ = v_head_4709_;
v___y_4673_ = v___y_4656_;
v___y_4674_ = v___x_4710_;
goto v___jp_4667_;
}
}
else
{
lean_dec_ref_known(v_a_4696_, 2);
lean_dec(v_userName_x3f_4654_);
v___y_4661_ = v___y_4655_;
v___y_4662_ = v___y_4656_;
v___y_4663_ = v___y_4657_;
v___y_4664_ = v___y_4658_;
goto v___jp_4660_;
}
}
else
{
lean_dec(v_a_4696_);
lean_dec(v_userName_x3f_4654_);
v___y_4661_ = v___y_4655_;
v___y_4662_ = v___y_4656_;
v___y_4663_ = v___y_4657_;
v___y_4664_ = v___y_4658_;
goto v___jp_4660_;
}
}
else
{
lean_object* v_a_4711_; lean_object* v___x_4713_; uint8_t v_isShared_4714_; uint8_t v_isSharedCheck_4718_; 
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
v_a_4711_ = lean_ctor_get(v___x_4695_, 0);
v_isSharedCheck_4718_ = !lean_is_exclusive(v___x_4695_);
if (v_isSharedCheck_4718_ == 0)
{
v___x_4713_ = v___x_4695_;
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
else
{
lean_inc(v_a_4711_);
lean_dec(v___x_4695_);
v___x_4713_ = lean_box(0);
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
v_resetjp_4712_:
{
lean_object* v___x_4716_; 
if (v_isShared_4714_ == 0)
{
v___x_4716_ = v___x_4713_;
goto v_reusejp_4715_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v_a_4711_);
v___x_4716_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4715_;
}
v_reusejp_4715_:
{
return v___x_4716_;
}
}
}
}
else
{
lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v_userName_x3f_4654_);
lean_dec(v_mvarId_4653_);
v_a_4719_ = lean_ctor_get(v___x_4690_, 0);
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4690_);
if (v_isSharedCheck_4726_ == 0)
{
v___x_4721_ = v___x_4690_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4690_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v_a_4719_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
return v___x_4724_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___boxed(lean_object* v_mvarId_4872_, lean_object* v_userName_x3f_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_){
_start:
{
lean_object* v_res_4879_; 
v_res_4879_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0(v_mvarId_4872_, v_userName_x3f_4873_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore(lean_object* v_mvarId_4880_, lean_object* v_userName_x3f_4881_, lean_object* v_a_4882_, lean_object* v_a_4883_, lean_object* v_a_4884_, lean_object* v_a_4885_){
_start:
{
lean_object* v___f_4887_; lean_object* v___x_4888_; 
lean_inc(v_mvarId_4880_);
v___f_4887_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4887_, 0, v_mvarId_4880_);
lean_closure_set(v___f_4887_, 1, v_userName_x3f_4881_);
v___x_4888_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Conv_congr_spec__3___redArg(v_mvarId_4880_, v___f_4887_, v_a_4882_, v_a_4883_, v_a_4884_, v_a_4885_);
return v___x_4888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore___boxed(lean_object* v_mvarId_4889_, lean_object* v_userName_x3f_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_, lean_object* v_a_4893_, lean_object* v_a_4894_, lean_object* v_a_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore(v_mvarId_4889_, v_userName_x3f_4890_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_);
lean_dec(v_a_4894_);
lean_dec_ref(v_a_4893_);
lean_dec(v_a_4892_);
lean_dec_ref(v_a_4891_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg(lean_object* v_userName_x3f_4897_, lean_object* v_a_4898_, lean_object* v_a_4899_, lean_object* v_a_4900_, lean_object* v_a_4901_, lean_object* v_a_4902_){
_start:
{
lean_object* v___x_4904_; 
v___x_4904_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_);
if (lean_obj_tag(v___x_4904_) == 0)
{
lean_object* v_a_4905_; lean_object* v___x_4906_; 
v_a_4905_ = lean_ctor_get(v___x_4904_, 0);
lean_inc(v_a_4905_);
lean_dec_ref_known(v___x_4904_, 1);
v___x_4906_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore(v_a_4905_, v_userName_x3f_4897_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_);
if (lean_obj_tag(v___x_4906_) == 0)
{
lean_object* v_a_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v_a_4907_ = lean_ctor_get(v___x_4906_, 0);
lean_inc(v_a_4907_);
lean_dec_ref_known(v___x_4906_, 1);
v___x_4908_ = lean_box(0);
v___x_4909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4909_, 0, v_a_4907_);
lean_ctor_set(v___x_4909_, 1, v___x_4908_);
v___x_4910_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_4909_, v_a_4898_, v_a_4899_, v_a_4900_, v_a_4901_, v_a_4902_);
return v___x_4910_;
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
v_a_4911_ = lean_ctor_get(v___x_4906_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4906_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4906_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4906_);
v___x_4913_ = lean_box(0);
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
v_resetjp_4912_:
{
lean_object* v___x_4916_; 
if (v_isShared_4914_ == 0)
{
v___x_4916_ = v___x_4913_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_a_4911_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
return v___x_4916_;
}
}
}
}
else
{
lean_object* v_a_4919_; lean_object* v___x_4921_; uint8_t v_isShared_4922_; uint8_t v_isSharedCheck_4926_; 
lean_dec(v_userName_x3f_4897_);
v_a_4919_ = lean_ctor_get(v___x_4904_, 0);
v_isSharedCheck_4926_ = !lean_is_exclusive(v___x_4904_);
if (v_isSharedCheck_4926_ == 0)
{
v___x_4921_ = v___x_4904_;
v_isShared_4922_ = v_isSharedCheck_4926_;
goto v_resetjp_4920_;
}
else
{
lean_inc(v_a_4919_);
lean_dec(v___x_4904_);
v___x_4921_ = lean_box(0);
v_isShared_4922_ = v_isSharedCheck_4926_;
goto v_resetjp_4920_;
}
v_resetjp_4920_:
{
lean_object* v___x_4924_; 
if (v_isShared_4922_ == 0)
{
v___x_4924_ = v___x_4921_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v_a_4919_);
v___x_4924_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4923_;
}
v_reusejp_4923_:
{
return v___x_4924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg___boxed(lean_object* v_userName_x3f_4927_, lean_object* v_a_4928_, lean_object* v_a_4929_, lean_object* v_a_4930_, lean_object* v_a_4931_, lean_object* v_a_4932_, lean_object* v_a_4933_){
_start:
{
lean_object* v_res_4934_; 
v_res_4934_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg(v_userName_x3f_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_);
lean_dec(v_a_4932_);
lean_dec_ref(v_a_4931_);
lean_dec(v_a_4930_);
lean_dec_ref(v_a_4929_);
lean_dec(v_a_4928_);
return v_res_4934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext(lean_object* v_userName_x3f_4935_, lean_object* v_a_4936_, lean_object* v_a_4937_, lean_object* v_a_4938_, lean_object* v_a_4939_, lean_object* v_a_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_){
_start:
{
lean_object* v___x_4945_; 
v___x_4945_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg(v_userName_x3f_4935_, v_a_4937_, v_a_4940_, v_a_4941_, v_a_4942_, v_a_4943_);
return v___x_4945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___boxed(lean_object* v_userName_x3f_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_, lean_object* v_a_4955_){
_start:
{
lean_object* v_res_4956_; 
v_res_4956_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext(v_userName_x3f_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_, v_a_4953_, v_a_4954_);
lean_dec(v_a_4954_);
lean_dec_ref(v_a_4953_);
lean_dec(v_a_4952_);
lean_dec_ref(v_a_4951_);
lean_dec(v_a_4950_);
lean_dec_ref(v_a_4949_);
lean_dec(v_a_4948_);
lean_dec_ref(v_a_4947_);
return v_res_4956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg(lean_object* v_as_4964_, size_t v_sz_4965_, size_t v_i_4966_, lean_object* v_b_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_){
_start:
{
uint8_t v___x_4974_; 
v___x_4974_ = lean_usize_dec_lt(v_i_4966_, v_sz_4965_);
if (v___x_4974_ == 0)
{
lean_object* v___x_4975_; 
v___x_4975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4975_, 0, v_b_4967_);
return v___x_4975_;
}
else
{
lean_object* v___x_4976_; lean_object* v_a_4977_; lean_object* v___y_4979_; lean_object* v___x_4993_; uint8_t v___x_4994_; 
v___x_4976_ = lean_box(0);
v_a_4977_ = lean_array_uget_borrowed(v_as_4964_, v_i_4966_);
v___x_4993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__1));
lean_inc(v_a_4977_);
v___x_4994_ = l_Lean_Syntax_isOfKind(v_a_4977_, v___x_4993_);
if (v___x_4994_ == 0)
{
lean_object* v___x_4995_; 
v___x_4995_ = lean_box(0);
v___y_4979_ = v___x_4995_;
goto v___jp_4978_;
}
else
{
lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; uint8_t v___x_4999_; 
v___x_4996_ = lean_unsigned_to_nat(0u);
v___x_4997_ = l_Lean_Syntax_getArg(v_a_4977_, v___x_4996_);
v___x_4998_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__3));
lean_inc(v___x_4997_);
v___x_4999_ = l_Lean_Syntax_isOfKind(v___x_4997_, v___x_4998_);
if (v___x_4999_ == 0)
{
lean_object* v___x_5000_; 
lean_dec(v___x_4997_);
v___x_5000_ = lean_box(0);
v___y_4979_ = v___x_5000_;
goto v___jp_4978_;
}
else
{
lean_object* v___x_5001_; lean_object* v___x_5002_; 
v___x_5001_ = l_Lean_TSyntax_getId(v___x_4997_);
lean_dec(v___x_4997_);
v___x_5002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5002_, 0, v___x_5001_);
v___y_4979_ = v___x_5002_;
goto v___jp_4978_;
}
}
v___jp_4978_:
{
lean_object* v_toCold_4980_; lean_object* v_currRecDepth_4981_; lean_object* v_ref_4982_; uint16_t v_optionFlags_4983_; uint8_t v_suppressElabErrors_4984_; uint8_t v_checkDeprecated_4985_; uint8_t v_isRecordingDeps_4986_; lean_object* v_ref_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; 
v_toCold_4980_ = lean_ctor_get(v___y_4971_, 0);
v_currRecDepth_4981_ = lean_ctor_get(v___y_4971_, 1);
v_ref_4982_ = lean_ctor_get(v___y_4971_, 2);
v_optionFlags_4983_ = lean_ctor_get_uint16(v___y_4971_, sizeof(void*)*3);
v_suppressElabErrors_4984_ = lean_ctor_get_uint8(v___y_4971_, sizeof(void*)*3 + 2);
v_checkDeprecated_4985_ = lean_ctor_get_uint8(v___y_4971_, sizeof(void*)*3 + 3);
v_isRecordingDeps_4986_ = lean_ctor_get_uint8(v___y_4971_, sizeof(void*)*3 + 4);
v_ref_4987_ = l_Lean_replaceRef(v_a_4977_, v_ref_4982_);
lean_inc(v_currRecDepth_4981_);
lean_inc_ref(v_toCold_4980_);
v___x_4988_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4988_, 0, v_toCold_4980_);
lean_ctor_set(v___x_4988_, 1, v_currRecDepth_4981_);
lean_ctor_set(v___x_4988_, 2, v_ref_4987_);
lean_ctor_set_uint16(v___x_4988_, sizeof(void*)*3, v_optionFlags_4983_);
lean_ctor_set_uint8(v___x_4988_, sizeof(void*)*3 + 2, v_suppressElabErrors_4984_);
lean_ctor_set_uint8(v___x_4988_, sizeof(void*)*3 + 3, v_checkDeprecated_4985_);
lean_ctor_set_uint8(v___x_4988_, sizeof(void*)*3 + 4, v_isRecordingDeps_4986_);
v___x_4989_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg(v___y_4979_, v___y_4968_, v___y_4969_, v___y_4970_, v___x_4988_, v___y_4972_);
lean_dec_ref_known(v___x_4988_, 3);
if (lean_obj_tag(v___x_4989_) == 0)
{
size_t v___x_4990_; size_t v___x_4991_; 
lean_dec_ref_known(v___x_4989_, 1);
v___x_4990_ = ((size_t)1ULL);
v___x_4991_ = lean_usize_add(v_i_4966_, v___x_4990_);
v_i_4966_ = v___x_4991_;
v_b_4967_ = v___x_4976_;
goto _start;
}
else
{
return v___x_4989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___boxed(lean_object* v_as_5003_, lean_object* v_sz_5004_, lean_object* v_i_5005_, lean_object* v_b_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_){
_start:
{
size_t v_sz_boxed_5013_; size_t v_i_boxed_5014_; lean_object* v_res_5015_; 
v_sz_boxed_5013_ = lean_unbox_usize(v_sz_5004_);
lean_dec(v_sz_5004_);
v_i_boxed_5014_ = lean_unbox_usize(v_i_5005_);
lean_dec(v_i_5005_);
v_res_5015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg(v_as_5003_, v_sz_boxed_5013_, v_i_boxed_5014_, v_b_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_);
lean_dec(v___y_5011_);
lean_dec_ref(v___y_5010_);
lean_dec(v___y_5009_);
lean_dec_ref(v___y_5008_);
lean_dec(v___y_5007_);
lean_dec_ref(v_as_5003_);
return v_res_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExt(lean_object* v_stx_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_, lean_object* v_a_5023_, lean_object* v_a_5024_){
_start:
{
lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v_ids_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; uint8_t v___x_5031_; 
v___x_5026_ = lean_unsigned_to_nat(1u);
v___x_5027_ = l_Lean_Syntax_getArg(v_stx_5016_, v___x_5026_);
v_ids_5028_ = l_Lean_Syntax_getArgs(v___x_5027_);
lean_dec(v___x_5027_);
v___x_5029_ = lean_array_get_size(v_ids_5028_);
v___x_5030_ = lean_unsigned_to_nat(0u);
v___x_5031_ = lean_nat_dec_eq(v___x_5029_, v___x_5030_);
if (v___x_5031_ == 0)
{
lean_object* v___x_5032_; size_t v_sz_5033_; size_t v___x_5034_; lean_object* v___x_5035_; 
v___x_5032_ = lean_box(0);
v_sz_5033_ = lean_array_size(v_ids_5028_);
v___x_5034_ = ((size_t)0ULL);
v___x_5035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg(v_ids_5028_, v_sz_5033_, v___x_5034_, v___x_5032_, v_a_5018_, v_a_5021_, v_a_5022_, v_a_5023_, v_a_5024_);
lean_dec_ref(v_ids_5028_);
if (lean_obj_tag(v___x_5035_) == 0)
{
lean_object* v___x_5037_; uint8_t v_isShared_5038_; uint8_t v_isSharedCheck_5042_; 
v_isSharedCheck_5042_ = !lean_is_exclusive(v___x_5035_);
if (v_isSharedCheck_5042_ == 0)
{
lean_object* v_unused_5043_; 
v_unused_5043_ = lean_ctor_get(v___x_5035_, 0);
lean_dec(v_unused_5043_);
v___x_5037_ = v___x_5035_;
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
else
{
lean_dec(v___x_5035_);
v___x_5037_ = lean_box(0);
v_isShared_5038_ = v_isSharedCheck_5042_;
goto v_resetjp_5036_;
}
v_resetjp_5036_:
{
lean_object* v___x_5040_; 
if (v_isShared_5038_ == 0)
{
lean_ctor_set(v___x_5037_, 0, v___x_5032_);
v___x_5040_ = v___x_5037_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v___x_5032_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
return v___x_5040_;
}
}
}
else
{
return v___x_5035_;
}
}
else
{
lean_object* v___x_5044_; lean_object* v___x_5045_; 
lean_dec_ref(v_ids_5028_);
v___x_5044_ = lean_box(0);
v___x_5045_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_ext___redArg(v___x_5044_, v_a_5018_, v_a_5021_, v_a_5022_, v_a_5023_, v_a_5024_);
return v___x_5045_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalExt___boxed(lean_object* v_stx_5046_, lean_object* v_a_5047_, lean_object* v_a_5048_, lean_object* v_a_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_, lean_object* v_a_5052_, lean_object* v_a_5053_, lean_object* v_a_5054_, lean_object* v_a_5055_){
_start:
{
lean_object* v_res_5056_; 
v_res_5056_ = l_Lean_Elab_Tactic_Conv_evalExt(v_stx_5046_, v_a_5047_, v_a_5048_, v_a_5049_, v_a_5050_, v_a_5051_, v_a_5052_, v_a_5053_, v_a_5054_);
lean_dec(v_a_5054_);
lean_dec_ref(v_a_5053_);
lean_dec(v_a_5052_);
lean_dec_ref(v_a_5051_);
lean_dec(v_a_5050_);
lean_dec_ref(v_a_5049_);
lean_dec(v_a_5048_);
lean_dec_ref(v_a_5047_);
lean_dec(v_stx_5046_);
return v_res_5056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0(lean_object* v_as_5057_, size_t v_sz_5058_, size_t v_i_5059_, lean_object* v_b_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_){
_start:
{
lean_object* v___x_5070_; 
v___x_5070_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg(v_as_5057_, v_sz_5058_, v_i_5059_, v_b_5060_, v___y_5062_, v___y_5065_, v___y_5066_, v___y_5067_, v___y_5068_);
return v___x_5070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___boxed(lean_object* v_as_5071_, lean_object* v_sz_5072_, lean_object* v_i_5073_, lean_object* v_b_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_){
_start:
{
size_t v_sz_boxed_5084_; size_t v_i_boxed_5085_; lean_object* v_res_5086_; 
v_sz_boxed_5084_ = lean_unbox_usize(v_sz_5072_);
lean_dec(v_sz_5072_);
v_i_boxed_5085_ = lean_unbox_usize(v_i_5073_);
lean_dec(v_i_5073_);
v_res_5086_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0(v_as_5071_, v_sz_boxed_5084_, v_i_boxed_5085_, v_b_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
lean_dec(v___y_5082_);
lean_dec_ref(v___y_5081_);
lean_dec(v___y_5080_);
lean_dec_ref(v___y_5079_);
lean_dec(v___y_5078_);
lean_dec_ref(v___y_5077_);
lean_dec(v___y_5076_);
lean_dec_ref(v___y_5075_);
lean_dec_ref(v_as_5071_);
return v_res_5086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1(){
_start:
{
lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v___x_5101_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_5102_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__0));
v___x_5103_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2));
v___x_5104_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalExt___boxed), 10, 0);
v___x_5105_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5101_, v___x_5102_, v___x_5103_, v___x_5104_);
return v___x_5105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___boxed(lean_object* v_a_5106_){
_start:
{
lean_object* v_res_5107_; 
v_res_5107_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1();
return v_res_5107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3(){
_start:
{
lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; 
v___x_5134_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1___closed__2));
v___x_5135_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___closed__6));
v___x_5136_ = l_Lean_addBuiltinDeclarationRanges(v___x_5134_, v___x_5135_);
return v___x_5136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3___boxed(lean_object* v_a_5137_){
_start:
{
lean_object* v_res_5138_; 
v_res_5138_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3();
return v_res_5138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__0(lean_object* v___x_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_, lean_object* v___y_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_){
_start:
{
lean_object* v___x_5149_; 
v___x_5149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5149_, 0, v___x_5139_);
return v___x_5149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__0___boxed(lean_object* v___x_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_){
_start:
{
lean_object* v_res_5160_; 
v_res_5160_ = l_Lean_Elab_Tactic_Conv_evalEnter___lam__0(v___x_5150_, v___y_5151_, v___y_5152_, v___y_5153_, v___y_5154_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_);
lean_dec(v___y_5158_);
lean_dec_ref(v___y_5157_);
lean_dec(v___y_5156_);
lean_dec_ref(v___y_5155_);
lean_dec(v___y_5154_);
lean_dec_ref(v___y_5153_);
lean_dec(v___y_5152_);
lean_dec_ref(v___y_5151_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__1(lean_object* v_a_5161_, lean_object* v_trees_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_){
_start:
{
lean_object* v___x_5172_; 
lean_inc(v___y_5170_);
lean_inc_ref(v___y_5169_);
lean_inc(v___y_5168_);
lean_inc_ref(v___y_5167_);
lean_inc(v___y_5166_);
lean_inc_ref(v___y_5165_);
lean_inc(v___y_5164_);
lean_inc_ref(v___y_5163_);
v___x_5172_ = lean_apply_9(v_a_5161_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_, v___y_5169_, v___y_5170_, lean_box(0));
if (lean_obj_tag(v___x_5172_) == 0)
{
lean_object* v_a_5173_; lean_object* v___x_5175_; uint8_t v_isShared_5176_; uint8_t v_isSharedCheck_5181_; 
v_a_5173_ = lean_ctor_get(v___x_5172_, 0);
v_isSharedCheck_5181_ = !lean_is_exclusive(v___x_5172_);
if (v_isSharedCheck_5181_ == 0)
{
v___x_5175_ = v___x_5172_;
v_isShared_5176_ = v_isSharedCheck_5181_;
goto v_resetjp_5174_;
}
else
{
lean_inc(v_a_5173_);
lean_dec(v___x_5172_);
v___x_5175_ = lean_box(0);
v_isShared_5176_ = v_isSharedCheck_5181_;
goto v_resetjp_5174_;
}
v_resetjp_5174_:
{
lean_object* v___x_5177_; lean_object* v___x_5179_; 
v___x_5177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5177_, 0, v_a_5173_);
lean_ctor_set(v___x_5177_, 1, v_trees_5162_);
if (v_isShared_5176_ == 0)
{
lean_ctor_set(v___x_5175_, 0, v___x_5177_);
v___x_5179_ = v___x_5175_;
goto v_reusejp_5178_;
}
else
{
lean_object* v_reuseFailAlloc_5180_; 
v_reuseFailAlloc_5180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5180_, 0, v___x_5177_);
v___x_5179_ = v_reuseFailAlloc_5180_;
goto v_reusejp_5178_;
}
v_reusejp_5178_:
{
return v___x_5179_;
}
}
}
else
{
lean_object* v_a_5182_; lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5189_; 
lean_dec_ref(v_trees_5162_);
v_a_5182_ = lean_ctor_get(v___x_5172_, 0);
v_isSharedCheck_5189_ = !lean_is_exclusive(v___x_5172_);
if (v_isSharedCheck_5189_ == 0)
{
v___x_5184_ = v___x_5172_;
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
else
{
lean_inc(v_a_5182_);
lean_dec(v___x_5172_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5189_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v___x_5187_; 
if (v_isShared_5185_ == 0)
{
v___x_5187_ = v___x_5184_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_a_5182_);
v___x_5187_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
return v___x_5187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___lam__1___boxed(lean_object* v_a_5190_, lean_object* v_trees_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_){
_start:
{
lean_object* v_res_5201_; 
v_res_5201_ = l_Lean_Elab_Tactic_Conv_evalEnter___lam__1(v_a_5190_, v_trees_5191_, v___y_5192_, v___y_5193_, v___y_5194_, v___y_5195_, v___y_5196_, v___y_5197_, v___y_5198_, v___y_5199_);
lean_dec(v___y_5199_);
lean_dec_ref(v___y_5198_);
lean_dec(v___y_5197_);
lean_dec_ref(v___y_5196_);
lean_dec(v___y_5195_);
lean_dec_ref(v___y_5194_);
lean_dec(v___y_5193_);
lean_dec_ref(v___y_5192_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__1(lean_object* v_a_5202_, lean_object* v_trees_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_){
_start:
{
lean_object* v___x_5213_; 
lean_inc(v___y_5211_);
lean_inc_ref(v___y_5210_);
lean_inc(v___y_5209_);
lean_inc_ref(v___y_5208_);
lean_inc(v___y_5207_);
lean_inc_ref(v___y_5206_);
lean_inc(v___y_5205_);
lean_inc_ref(v___y_5204_);
v___x_5213_ = lean_apply_9(v_a_5202_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_, v___y_5208_, v___y_5209_, v___y_5210_, v___y_5211_, lean_box(0));
if (lean_obj_tag(v___x_5213_) == 0)
{
lean_object* v_a_5214_; lean_object* v___x_5216_; uint8_t v_isShared_5217_; uint8_t v_isSharedCheck_5222_; 
v_a_5214_ = lean_ctor_get(v___x_5213_, 0);
v_isSharedCheck_5222_ = !lean_is_exclusive(v___x_5213_);
if (v_isSharedCheck_5222_ == 0)
{
v___x_5216_ = v___x_5213_;
v_isShared_5217_ = v_isSharedCheck_5222_;
goto v_resetjp_5215_;
}
else
{
lean_inc(v_a_5214_);
lean_dec(v___x_5213_);
v___x_5216_ = lean_box(0);
v_isShared_5217_ = v_isSharedCheck_5222_;
goto v_resetjp_5215_;
}
v_resetjp_5215_:
{
lean_object* v___x_5218_; lean_object* v___x_5220_; 
v___x_5218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5218_, 0, v_a_5214_);
lean_ctor_set(v___x_5218_, 1, v_trees_5203_);
if (v_isShared_5217_ == 0)
{
lean_ctor_set(v___x_5216_, 0, v___x_5218_);
v___x_5220_ = v___x_5216_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v___x_5218_);
v___x_5220_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
return v___x_5220_;
}
}
}
else
{
lean_object* v_a_5223_; lean_object* v___x_5225_; uint8_t v_isShared_5226_; uint8_t v_isSharedCheck_5230_; 
lean_dec_ref(v_trees_5203_);
v_a_5223_ = lean_ctor_get(v___x_5213_, 0);
v_isSharedCheck_5230_ = !lean_is_exclusive(v___x_5213_);
if (v_isSharedCheck_5230_ == 0)
{
v___x_5225_ = v___x_5213_;
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
else
{
lean_inc(v_a_5223_);
lean_dec(v___x_5213_);
v___x_5225_ = lean_box(0);
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
v_resetjp_5224_:
{
lean_object* v___x_5228_; 
if (v_isShared_5226_ == 0)
{
v___x_5228_ = v___x_5225_;
goto v_reusejp_5227_;
}
else
{
lean_object* v_reuseFailAlloc_5229_; 
v_reuseFailAlloc_5229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5229_, 0, v_a_5223_);
v___x_5228_ = v_reuseFailAlloc_5229_;
goto v_reusejp_5227_;
}
v_reusejp_5227_:
{
return v___x_5228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__1___boxed(lean_object* v_a_5231_, lean_object* v_trees_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_){
_start:
{
lean_object* v_res_5242_; 
v_res_5242_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__1(v_a_5231_, v_trees_5232_, v___y_5233_, v___y_5234_, v___y_5235_, v___y_5236_, v___y_5237_, v___y_5238_, v___y_5239_, v___y_5240_);
lean_dec(v___y_5240_);
lean_dec_ref(v___y_5239_);
lean_dec(v___y_5238_);
lean_dec_ref(v___y_5237_);
lean_dec(v___y_5236_);
lean_dec_ref(v___y_5235_);
lean_dec(v___y_5234_);
lean_dec_ref(v___y_5233_);
return v_res_5242_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__0(uint8_t v___x_5243_, lean_object* v___x_5244_, lean_object* v___x_5245_, lean_object* v___x_5246_, lean_object* v___x_5247_, lean_object* v___x_5248_, lean_object* v___x_5249_, lean_object* v___x_5250_, lean_object* v___x_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_){
_start:
{
if (v___x_5243_ == 0)
{
lean_object* v___x_5261_; 
lean_dec_ref(v___y_5258_);
lean_dec(v___x_5251_);
lean_dec_ref(v___x_5250_);
lean_dec_ref(v___x_5249_);
lean_dec_ref(v___x_5248_);
lean_dec_ref(v___x_5247_);
v___x_5261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5261_, 0, v___x_5244_);
return v___x_5261_;
}
else
{
lean_object* v_toCold_5262_; lean_object* v_currRecDepth_5263_; lean_object* v_ref_5264_; uint16_t v_optionFlags_5265_; uint8_t v_suppressElabErrors_5266_; uint8_t v_checkDeprecated_5267_; uint8_t v_isRecordingDeps_5268_; lean_object* v___x_5270_; uint8_t v_isShared_5271_; uint8_t v_isSharedCheck_5298_; 
v_toCold_5262_ = lean_ctor_get(v___y_5258_, 0);
v_currRecDepth_5263_ = lean_ctor_get(v___y_5258_, 1);
v_ref_5264_ = lean_ctor_get(v___y_5258_, 2);
v_optionFlags_5265_ = lean_ctor_get_uint16(v___y_5258_, sizeof(void*)*3);
v_suppressElabErrors_5266_ = lean_ctor_get_uint8(v___y_5258_, sizeof(void*)*3 + 2);
v_checkDeprecated_5267_ = lean_ctor_get_uint8(v___y_5258_, sizeof(void*)*3 + 3);
v_isRecordingDeps_5268_ = lean_ctor_get_uint8(v___y_5258_, sizeof(void*)*3 + 4);
v_isSharedCheck_5298_ = !lean_is_exclusive(v___y_5258_);
if (v_isSharedCheck_5298_ == 0)
{
v___x_5270_ = v___y_5258_;
v_isShared_5271_ = v_isSharedCheck_5298_;
goto v_resetjp_5269_;
}
else
{
lean_inc(v_ref_5264_);
lean_inc(v_currRecDepth_5263_);
lean_inc(v_toCold_5262_);
lean_dec(v___y_5258_);
v___x_5270_ = lean_box(0);
v_isShared_5271_ = v_isSharedCheck_5298_;
goto v_resetjp_5269_;
}
v_resetjp_5269_:
{
lean_object* v_ref_5272_; lean_object* v___x_5274_; 
v_ref_5272_ = l_Lean_replaceRef(v___x_5245_, v_ref_5264_);
lean_dec(v_ref_5264_);
lean_inc(v_ref_5272_);
if (v_isShared_5271_ == 0)
{
lean_ctor_set(v___x_5270_, 2, v_ref_5272_);
v___x_5274_ = v___x_5270_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v_toCold_5262_);
lean_ctor_set(v_reuseFailAlloc_5297_, 1, v_currRecDepth_5263_);
lean_ctor_set(v_reuseFailAlloc_5297_, 2, v_ref_5272_);
lean_ctor_set_uint16(v_reuseFailAlloc_5297_, sizeof(void*)*3, v_optionFlags_5265_);
lean_ctor_set_uint8(v_reuseFailAlloc_5297_, sizeof(void*)*3 + 2, v_suppressElabErrors_5266_);
lean_ctor_set_uint8(v_reuseFailAlloc_5297_, sizeof(void*)*3 + 3, v_checkDeprecated_5267_);
lean_ctor_set_uint8(v_reuseFailAlloc_5297_, sizeof(void*)*3 + 4, v_isRecordingDeps_5268_);
v___x_5274_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; uint8_t v___x_5278_; 
v___x_5275_ = l_Lean_Syntax_getArg(v___x_5245_, v___x_5246_);
v___x_5276_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_elabArg___closed__4));
lean_inc_ref(v___x_5250_);
lean_inc_ref(v___x_5249_);
lean_inc_ref(v___x_5248_);
lean_inc_ref(v___x_5247_);
v___x_5277_ = l_Lean_Name_mkStr5(v___x_5247_, v___x_5248_, v___x_5249_, v___x_5250_, v___x_5276_);
lean_inc(v___x_5275_);
v___x_5278_ = l_Lean_Syntax_isOfKind(v___x_5275_, v___x_5277_);
lean_dec(v___x_5277_);
if (v___x_5278_ == 0)
{
lean_object* v___x_5279_; lean_object* v___x_5280_; uint8_t v___x_5281_; 
v___x_5279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Conv_evalExt_spec__0___redArg___closed__0));
lean_inc_ref(v___x_5247_);
v___x_5280_ = l_Lean_Name_mkStr2(v___x_5247_, v___x_5279_);
lean_inc(v___x_5275_);
v___x_5281_ = l_Lean_Syntax_isOfKind(v___x_5275_, v___x_5280_);
lean_dec(v___x_5280_);
if (v___x_5281_ == 0)
{
lean_object* v___x_5282_; 
lean_dec(v___x_5275_);
lean_dec_ref(v___x_5274_);
lean_dec(v_ref_5272_);
lean_dec(v___x_5251_);
lean_dec_ref(v___x_5250_);
lean_dec_ref(v___x_5249_);
lean_dec_ref(v___x_5248_);
lean_dec_ref(v___x_5247_);
v___x_5282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5282_, 0, v___x_5244_);
return v___x_5282_;
}
else
{
lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; 
v___x_5283_ = l_Lean_SourceInfo_fromRef(v_ref_5272_, v___x_5278_);
lean_dec(v_ref_5272_);
v___x_5284_ = ((lean_object*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Conv_congrArgForall_spec__0_spec__0___at___00__private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_extCore_spec__0___lam__0___closed__0));
v___x_5285_ = l_Lean_Name_mkStr5(v___x_5247_, v___x_5248_, v___x_5249_, v___x_5250_, v___x_5284_);
lean_inc_n(v___x_5283_, 2);
v___x_5286_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5286_, 0, v___x_5283_);
lean_ctor_set(v___x_5286_, 1, v___x_5284_);
v___x_5287_ = l_Lean_Syntax_node1(v___x_5283_, v___x_5251_, v___x_5275_);
v___x_5288_ = l_Lean_Syntax_node2(v___x_5283_, v___x_5285_, v___x_5286_, v___x_5287_);
v___x_5289_ = l_Lean_Elab_Tactic_evalTactic(v___x_5288_, v___y_5252_, v___y_5253_, v___y_5254_, v___y_5255_, v___y_5256_, v___y_5257_, v___x_5274_, v___y_5259_);
lean_dec_ref(v___x_5274_);
return v___x_5289_;
}
}
else
{
uint8_t v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; 
lean_dec(v___x_5251_);
v___x_5290_ = 0;
v___x_5291_ = l_Lean_SourceInfo_fromRef(v_ref_5272_, v___x_5290_);
lean_dec(v_ref_5272_);
v___x_5292_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_elabArg___closed__0));
v___x_5293_ = l_Lean_Name_mkStr5(v___x_5247_, v___x_5248_, v___x_5249_, v___x_5250_, v___x_5292_);
lean_inc(v___x_5291_);
v___x_5294_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5294_, 0, v___x_5291_);
lean_ctor_set(v___x_5294_, 1, v___x_5292_);
v___x_5295_ = l_Lean_Syntax_node2(v___x_5291_, v___x_5293_, v___x_5294_, v___x_5275_);
v___x_5296_ = l_Lean_Elab_Tactic_evalTactic(v___x_5295_, v___y_5252_, v___y_5253_, v___y_5254_, v___y_5255_, v___y_5256_, v___y_5257_, v___x_5274_, v___y_5259_);
lean_dec_ref(v___x_5274_);
return v___x_5296_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_5299_ = _args[0];
lean_object* v___x_5300_ = _args[1];
lean_object* v___x_5301_ = _args[2];
lean_object* v___x_5302_ = _args[3];
lean_object* v___x_5303_ = _args[4];
lean_object* v___x_5304_ = _args[5];
lean_object* v___x_5305_ = _args[6];
lean_object* v___x_5306_ = _args[7];
lean_object* v___x_5307_ = _args[8];
lean_object* v___y_5308_ = _args[9];
lean_object* v___y_5309_ = _args[10];
lean_object* v___y_5310_ = _args[11];
lean_object* v___y_5311_ = _args[12];
lean_object* v___y_5312_ = _args[13];
lean_object* v___y_5313_ = _args[14];
lean_object* v___y_5314_ = _args[15];
lean_object* v___y_5315_ = _args[16];
lean_object* v___y_5316_ = _args[17];
_start:
{
uint8_t v___x_16222__boxed_5317_; lean_object* v_res_5318_; 
v___x_16222__boxed_5317_ = lean_unbox(v___x_5299_);
v_res_5318_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__0(v___x_16222__boxed_5317_, v___x_5300_, v___x_5301_, v___x_5302_, v___x_5303_, v___x_5304_, v___x_5305_, v___x_5306_, v___x_5307_, v___y_5308_, v___y_5309_, v___y_5310_, v___y_5311_, v___y_5312_, v___y_5313_, v___y_5314_, v___y_5315_);
lean_dec(v___y_5315_);
lean_dec(v___y_5313_);
lean_dec_ref(v___y_5312_);
lean_dec(v___y_5311_);
lean_dec_ref(v___y_5310_);
lean_dec(v___y_5309_);
lean_dec_ref(v___y_5308_);
lean_dec(v___x_5302_);
lean_dec(v___x_5301_);
return v_res_5318_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; 
v___x_5319_ = lean_unsigned_to_nat(32u);
v___x_5320_ = lean_mk_empty_array_with_capacity(v___x_5319_);
v___x_5321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5321_, 0, v___x_5320_);
return v___x_5321_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; 
v___x_5322_ = ((size_t)5ULL);
v___x_5323_ = lean_unsigned_to_nat(0u);
v___x_5324_ = lean_unsigned_to_nat(32u);
v___x_5325_ = lean_mk_empty_array_with_capacity(v___x_5324_);
v___x_5326_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__0);
v___x_5327_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5327_, 0, v___x_5326_);
lean_ctor_set(v___x_5327_, 1, v___x_5325_);
lean_ctor_set(v___x_5327_, 2, v___x_5323_);
lean_ctor_set(v___x_5327_, 3, v___x_5323_);
lean_ctor_set_usize(v___x_5327_, 4, v___x_5322_);
return v___x_5327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg(lean_object* v___y_5328_){
_start:
{
lean_object* v___x_5330_; lean_object* v_infoState_5331_; lean_object* v_trees_5332_; lean_object* v___x_5333_; lean_object* v_infoState_5334_; lean_object* v_env_5335_; lean_object* v_nextMacroScope_5336_; lean_object* v_ngen_5337_; lean_object* v_auxDeclNGen_5338_; lean_object* v_traceState_5339_; lean_object* v_cache_5340_; lean_object* v_recordedDeps_5341_; lean_object* v_messages_5342_; lean_object* v_snapshotTasks_5343_; lean_object* v___x_5345_; uint8_t v_isShared_5346_; uint8_t v_isSharedCheck_5364_; 
v___x_5330_ = lean_st_ref_get(v___y_5328_);
v_infoState_5331_ = lean_ctor_get(v___x_5330_, 8);
lean_inc_ref(v_infoState_5331_);
lean_dec(v___x_5330_);
v_trees_5332_ = lean_ctor_get(v_infoState_5331_, 2);
lean_inc_ref(v_trees_5332_);
lean_dec_ref(v_infoState_5331_);
v___x_5333_ = lean_st_ref_take(v___y_5328_);
v_infoState_5334_ = lean_ctor_get(v___x_5333_, 8);
v_env_5335_ = lean_ctor_get(v___x_5333_, 0);
v_nextMacroScope_5336_ = lean_ctor_get(v___x_5333_, 1);
v_ngen_5337_ = lean_ctor_get(v___x_5333_, 2);
v_auxDeclNGen_5338_ = lean_ctor_get(v___x_5333_, 3);
v_traceState_5339_ = lean_ctor_get(v___x_5333_, 4);
v_cache_5340_ = lean_ctor_get(v___x_5333_, 5);
v_recordedDeps_5341_ = lean_ctor_get(v___x_5333_, 6);
v_messages_5342_ = lean_ctor_get(v___x_5333_, 7);
v_snapshotTasks_5343_ = lean_ctor_get(v___x_5333_, 9);
v_isSharedCheck_5364_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5364_ == 0)
{
v___x_5345_ = v___x_5333_;
v_isShared_5346_ = v_isSharedCheck_5364_;
goto v_resetjp_5344_;
}
else
{
lean_inc(v_snapshotTasks_5343_);
lean_inc(v_infoState_5334_);
lean_inc(v_messages_5342_);
lean_inc(v_recordedDeps_5341_);
lean_inc(v_cache_5340_);
lean_inc(v_traceState_5339_);
lean_inc(v_auxDeclNGen_5338_);
lean_inc(v_ngen_5337_);
lean_inc(v_nextMacroScope_5336_);
lean_inc(v_env_5335_);
lean_dec(v___x_5333_);
v___x_5345_ = lean_box(0);
v_isShared_5346_ = v_isSharedCheck_5364_;
goto v_resetjp_5344_;
}
v_resetjp_5344_:
{
uint8_t v_enabled_5347_; lean_object* v_assignment_5348_; lean_object* v_lazyAssignment_5349_; lean_object* v___x_5351_; uint8_t v_isShared_5352_; uint8_t v_isSharedCheck_5362_; 
v_enabled_5347_ = lean_ctor_get_uint8(v_infoState_5334_, sizeof(void*)*3);
v_assignment_5348_ = lean_ctor_get(v_infoState_5334_, 0);
v_lazyAssignment_5349_ = lean_ctor_get(v_infoState_5334_, 1);
v_isSharedCheck_5362_ = !lean_is_exclusive(v_infoState_5334_);
if (v_isSharedCheck_5362_ == 0)
{
lean_object* v_unused_5363_; 
v_unused_5363_ = lean_ctor_get(v_infoState_5334_, 2);
lean_dec(v_unused_5363_);
v___x_5351_ = v_infoState_5334_;
v_isShared_5352_ = v_isSharedCheck_5362_;
goto v_resetjp_5350_;
}
else
{
lean_inc(v_lazyAssignment_5349_);
lean_inc(v_assignment_5348_);
lean_dec(v_infoState_5334_);
v___x_5351_ = lean_box(0);
v_isShared_5352_ = v_isSharedCheck_5362_;
goto v_resetjp_5350_;
}
v_resetjp_5350_:
{
lean_object* v___x_5353_; lean_object* v___x_5355_; 
v___x_5353_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___closed__1);
if (v_isShared_5352_ == 0)
{
lean_ctor_set(v___x_5351_, 2, v___x_5353_);
v___x_5355_ = v___x_5351_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5361_; 
v_reuseFailAlloc_5361_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5361_, 0, v_assignment_5348_);
lean_ctor_set(v_reuseFailAlloc_5361_, 1, v_lazyAssignment_5349_);
lean_ctor_set(v_reuseFailAlloc_5361_, 2, v___x_5353_);
lean_ctor_set_uint8(v_reuseFailAlloc_5361_, sizeof(void*)*3, v_enabled_5347_);
v___x_5355_ = v_reuseFailAlloc_5361_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
lean_object* v___x_5357_; 
if (v_isShared_5346_ == 0)
{
lean_ctor_set(v___x_5345_, 8, v___x_5355_);
v___x_5357_ = v___x_5345_;
goto v_reusejp_5356_;
}
else
{
lean_object* v_reuseFailAlloc_5360_; 
v_reuseFailAlloc_5360_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5360_, 0, v_env_5335_);
lean_ctor_set(v_reuseFailAlloc_5360_, 1, v_nextMacroScope_5336_);
lean_ctor_set(v_reuseFailAlloc_5360_, 2, v_ngen_5337_);
lean_ctor_set(v_reuseFailAlloc_5360_, 3, v_auxDeclNGen_5338_);
lean_ctor_set(v_reuseFailAlloc_5360_, 4, v_traceState_5339_);
lean_ctor_set(v_reuseFailAlloc_5360_, 5, v_cache_5340_);
lean_ctor_set(v_reuseFailAlloc_5360_, 6, v_recordedDeps_5341_);
lean_ctor_set(v_reuseFailAlloc_5360_, 7, v_messages_5342_);
lean_ctor_set(v_reuseFailAlloc_5360_, 8, v___x_5355_);
lean_ctor_set(v_reuseFailAlloc_5360_, 9, v_snapshotTasks_5343_);
v___x_5357_ = v_reuseFailAlloc_5360_;
goto v_reusejp_5356_;
}
v_reusejp_5356_:
{
lean_object* v___x_5358_; lean_object* v___x_5359_; 
v___x_5358_ = lean_st_ref_put(v___y_5328_, v___x_5357_);
v___x_5359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5359_, 0, v_trees_5332_);
return v___x_5359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg___boxed(lean_object* v___y_5365_, lean_object* v___y_5366_){
_start:
{
lean_object* v_res_5367_; 
v_res_5367_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg(v___y_5365_);
lean_dec(v___y_5365_);
return v_res_5367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___lam__0(lean_object* v___y_5368_, lean_object* v_mkInfoTree_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_, lean_object* v_a_5377_, lean_object* v_a_x3f_5378_){
_start:
{
lean_object* v___x_5380_; lean_object* v_infoState_5381_; lean_object* v_trees_5382_; lean_object* v___x_5383_; 
v___x_5380_ = lean_st_ref_get(v___y_5368_);
v_infoState_5381_ = lean_ctor_get(v___x_5380_, 8);
lean_inc_ref(v_infoState_5381_);
lean_dec(v___x_5380_);
v_trees_5382_ = lean_ctor_get(v_infoState_5381_, 2);
lean_inc_ref(v_trees_5382_);
lean_dec_ref(v_infoState_5381_);
lean_inc(v___y_5368_);
lean_inc_ref(v___y_5376_);
lean_inc(v___y_5375_);
lean_inc_ref(v___y_5374_);
lean_inc(v___y_5373_);
lean_inc_ref(v___y_5372_);
lean_inc(v___y_5371_);
lean_inc_ref(v___y_5370_);
v___x_5383_ = lean_apply_10(v_mkInfoTree_5369_, v_trees_5382_, v___y_5370_, v___y_5371_, v___y_5372_, v___y_5373_, v___y_5374_, v___y_5375_, v___y_5376_, v___y_5368_, lean_box(0));
if (lean_obj_tag(v___x_5383_) == 0)
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5423_; 
v_a_5384_ = lean_ctor_get(v___x_5383_, 0);
v_isSharedCheck_5423_ = !lean_is_exclusive(v___x_5383_);
if (v_isSharedCheck_5423_ == 0)
{
v___x_5386_ = v___x_5383_;
v_isShared_5387_ = v_isSharedCheck_5423_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_a_5384_);
lean_dec(v___x_5383_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5423_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v___x_5388_; lean_object* v_infoState_5389_; lean_object* v_env_5390_; lean_object* v_nextMacroScope_5391_; lean_object* v_ngen_5392_; lean_object* v_auxDeclNGen_5393_; lean_object* v_traceState_5394_; lean_object* v_cache_5395_; lean_object* v_recordedDeps_5396_; lean_object* v_messages_5397_; lean_object* v_snapshotTasks_5398_; lean_object* v___x_5400_; uint8_t v_isShared_5401_; uint8_t v_isSharedCheck_5422_; 
v___x_5388_ = lean_st_ref_take(v___y_5368_);
v_infoState_5389_ = lean_ctor_get(v___x_5388_, 8);
v_env_5390_ = lean_ctor_get(v___x_5388_, 0);
v_nextMacroScope_5391_ = lean_ctor_get(v___x_5388_, 1);
v_ngen_5392_ = lean_ctor_get(v___x_5388_, 2);
v_auxDeclNGen_5393_ = lean_ctor_get(v___x_5388_, 3);
v_traceState_5394_ = lean_ctor_get(v___x_5388_, 4);
v_cache_5395_ = lean_ctor_get(v___x_5388_, 5);
v_recordedDeps_5396_ = lean_ctor_get(v___x_5388_, 6);
v_messages_5397_ = lean_ctor_get(v___x_5388_, 7);
v_snapshotTasks_5398_ = lean_ctor_get(v___x_5388_, 9);
v_isSharedCheck_5422_ = !lean_is_exclusive(v___x_5388_);
if (v_isSharedCheck_5422_ == 0)
{
v___x_5400_ = v___x_5388_;
v_isShared_5401_ = v_isSharedCheck_5422_;
goto v_resetjp_5399_;
}
else
{
lean_inc(v_snapshotTasks_5398_);
lean_inc(v_infoState_5389_);
lean_inc(v_messages_5397_);
lean_inc(v_recordedDeps_5396_);
lean_inc(v_cache_5395_);
lean_inc(v_traceState_5394_);
lean_inc(v_auxDeclNGen_5393_);
lean_inc(v_ngen_5392_);
lean_inc(v_nextMacroScope_5391_);
lean_inc(v_env_5390_);
lean_dec(v___x_5388_);
v___x_5400_ = lean_box(0);
v_isShared_5401_ = v_isSharedCheck_5422_;
goto v_resetjp_5399_;
}
v_resetjp_5399_:
{
uint8_t v_enabled_5402_; lean_object* v_assignment_5403_; lean_object* v_lazyAssignment_5404_; lean_object* v___x_5406_; uint8_t v_isShared_5407_; uint8_t v_isSharedCheck_5420_; 
v_enabled_5402_ = lean_ctor_get_uint8(v_infoState_5389_, sizeof(void*)*3);
v_assignment_5403_ = lean_ctor_get(v_infoState_5389_, 0);
v_lazyAssignment_5404_ = lean_ctor_get(v_infoState_5389_, 1);
v_isSharedCheck_5420_ = !lean_is_exclusive(v_infoState_5389_);
if (v_isSharedCheck_5420_ == 0)
{
lean_object* v_unused_5421_; 
v_unused_5421_ = lean_ctor_get(v_infoState_5389_, 2);
lean_dec(v_unused_5421_);
v___x_5406_ = v_infoState_5389_;
v_isShared_5407_ = v_isSharedCheck_5420_;
goto v_resetjp_5405_;
}
else
{
lean_inc(v_lazyAssignment_5404_);
lean_inc(v_assignment_5403_);
lean_dec(v_infoState_5389_);
v___x_5406_ = lean_box(0);
v_isShared_5407_ = v_isSharedCheck_5420_;
goto v_resetjp_5405_;
}
v_resetjp_5405_:
{
lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5411_; 
v___x_5408_ = lean_box(0);
v___x_5409_ = l_Lean_PersistentArray_push___redArg(v_a_5377_, v_a_5384_);
if (v_isShared_5407_ == 0)
{
lean_ctor_set(v___x_5406_, 2, v___x_5409_);
v___x_5411_ = v___x_5406_;
goto v_reusejp_5410_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v_assignment_5403_);
lean_ctor_set(v_reuseFailAlloc_5419_, 1, v_lazyAssignment_5404_);
lean_ctor_set(v_reuseFailAlloc_5419_, 2, v___x_5409_);
lean_ctor_set_uint8(v_reuseFailAlloc_5419_, sizeof(void*)*3, v_enabled_5402_);
v___x_5411_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5410_;
}
v_reusejp_5410_:
{
lean_object* v___x_5413_; 
if (v_isShared_5401_ == 0)
{
lean_ctor_set(v___x_5400_, 8, v___x_5411_);
v___x_5413_ = v___x_5400_;
goto v_reusejp_5412_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v_env_5390_);
lean_ctor_set(v_reuseFailAlloc_5418_, 1, v_nextMacroScope_5391_);
lean_ctor_set(v_reuseFailAlloc_5418_, 2, v_ngen_5392_);
lean_ctor_set(v_reuseFailAlloc_5418_, 3, v_auxDeclNGen_5393_);
lean_ctor_set(v_reuseFailAlloc_5418_, 4, v_traceState_5394_);
lean_ctor_set(v_reuseFailAlloc_5418_, 5, v_cache_5395_);
lean_ctor_set(v_reuseFailAlloc_5418_, 6, v_recordedDeps_5396_);
lean_ctor_set(v_reuseFailAlloc_5418_, 7, v_messages_5397_);
lean_ctor_set(v_reuseFailAlloc_5418_, 8, v___x_5411_);
lean_ctor_set(v_reuseFailAlloc_5418_, 9, v_snapshotTasks_5398_);
v___x_5413_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5412_;
}
v_reusejp_5412_:
{
lean_object* v___x_5414_; lean_object* v___x_5416_; 
v___x_5414_ = lean_st_ref_put(v___y_5368_, v___x_5413_);
if (v_isShared_5387_ == 0)
{
lean_ctor_set(v___x_5386_, 0, v___x_5408_);
v___x_5416_ = v___x_5386_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v___x_5408_);
v___x_5416_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
return v___x_5416_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5424_; lean_object* v___x_5426_; uint8_t v_isShared_5427_; uint8_t v_isSharedCheck_5431_; 
lean_dec_ref(v_a_5377_);
v_a_5424_ = lean_ctor_get(v___x_5383_, 0);
v_isSharedCheck_5431_ = !lean_is_exclusive(v___x_5383_);
if (v_isSharedCheck_5431_ == 0)
{
v___x_5426_ = v___x_5383_;
v_isShared_5427_ = v_isSharedCheck_5431_;
goto v_resetjp_5425_;
}
else
{
lean_inc(v_a_5424_);
lean_dec(v___x_5383_);
v___x_5426_ = lean_box(0);
v_isShared_5427_ = v_isSharedCheck_5431_;
goto v_resetjp_5425_;
}
v_resetjp_5425_:
{
lean_object* v___x_5429_; 
if (v_isShared_5427_ == 0)
{
v___x_5429_ = v___x_5426_;
goto v_reusejp_5428_;
}
else
{
lean_object* v_reuseFailAlloc_5430_; 
v_reuseFailAlloc_5430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5430_, 0, v_a_5424_);
v___x_5429_ = v_reuseFailAlloc_5430_;
goto v_reusejp_5428_;
}
v_reusejp_5428_:
{
return v___x_5429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___lam__0___boxed(lean_object* v___y_5432_, lean_object* v_mkInfoTree_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_, lean_object* v___y_5436_, lean_object* v___y_5437_, lean_object* v___y_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_, lean_object* v_a_5441_, lean_object* v_a_x3f_5442_, lean_object* v___y_5443_){
_start:
{
lean_object* v_res_5444_; 
v_res_5444_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___lam__0(v___y_5432_, v_mkInfoTree_5433_, v___y_5434_, v___y_5435_, v___y_5436_, v___y_5437_, v___y_5438_, v___y_5439_, v___y_5440_, v_a_5441_, v_a_x3f_5442_);
lean_dec(v_a_x3f_5442_);
lean_dec_ref(v___y_5440_);
lean_dec(v___y_5439_);
lean_dec_ref(v___y_5438_);
lean_dec(v___y_5437_);
lean_dec_ref(v___y_5436_);
lean_dec(v___y_5435_);
lean_dec_ref(v___y_5434_);
lean_dec(v___y_5432_);
return v_res_5444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg(lean_object* v_x_5445_, lean_object* v_mkInfoTree_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_){
_start:
{
lean_object* v___x_5456_; lean_object* v_infoState_5457_; uint8_t v_enabled_5458_; 
v___x_5456_ = lean_st_ref_get(v___y_5454_);
v_infoState_5457_ = lean_ctor_get(v___x_5456_, 8);
lean_inc_ref(v_infoState_5457_);
lean_dec(v___x_5456_);
v_enabled_5458_ = lean_ctor_get_uint8(v_infoState_5457_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5457_);
if (v_enabled_5458_ == 0)
{
lean_object* v___x_5459_; 
lean_dec_ref(v_mkInfoTree_5446_);
lean_inc(v___y_5454_);
lean_inc_ref(v___y_5453_);
lean_inc(v___y_5452_);
lean_inc_ref(v___y_5451_);
lean_inc(v___y_5450_);
lean_inc_ref(v___y_5449_);
lean_inc(v___y_5448_);
lean_inc_ref(v___y_5447_);
v___x_5459_ = lean_apply_9(v_x_5445_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v___y_5454_, lean_box(0));
return v___x_5459_;
}
else
{
lean_object* v___x_5460_; lean_object* v_a_5461_; lean_object* v_r_5462_; 
v___x_5460_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg(v___y_5454_);
v_a_5461_ = lean_ctor_get(v___x_5460_, 0);
lean_inc(v_a_5461_);
lean_dec_ref(v___x_5460_);
lean_inc(v___y_5454_);
lean_inc_ref(v___y_5453_);
lean_inc(v___y_5452_);
lean_inc_ref(v___y_5451_);
lean_inc(v___y_5450_);
lean_inc_ref(v___y_5449_);
lean_inc(v___y_5448_);
lean_inc_ref(v___y_5447_);
v_r_5462_ = lean_apply_9(v_x_5445_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v___y_5454_, lean_box(0));
if (lean_obj_tag(v_r_5462_) == 0)
{
lean_object* v_a_5463_; lean_object* v___x_5465_; uint8_t v_isShared_5466_; uint8_t v_isSharedCheck_5487_; 
v_a_5463_ = lean_ctor_get(v_r_5462_, 0);
v_isSharedCheck_5487_ = !lean_is_exclusive(v_r_5462_);
if (v_isSharedCheck_5487_ == 0)
{
v___x_5465_ = v_r_5462_;
v_isShared_5466_ = v_isSharedCheck_5487_;
goto v_resetjp_5464_;
}
else
{
lean_inc(v_a_5463_);
lean_dec(v_r_5462_);
v___x_5465_ = lean_box(0);
v_isShared_5466_ = v_isSharedCheck_5487_;
goto v_resetjp_5464_;
}
v_resetjp_5464_:
{
lean_object* v___x_5468_; 
lean_inc(v_a_5463_);
if (v_isShared_5466_ == 0)
{
lean_ctor_set_tag(v___x_5465_, 1);
v___x_5468_ = v___x_5465_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5486_; 
v_reuseFailAlloc_5486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5486_, 0, v_a_5463_);
v___x_5468_ = v_reuseFailAlloc_5486_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
lean_object* v___x_5469_; 
v___x_5469_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___lam__0(v___y_5454_, v_mkInfoTree_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v_a_5461_, v___x_5468_);
lean_dec_ref(v___x_5468_);
if (lean_obj_tag(v___x_5469_) == 0)
{
lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5476_; 
v_isSharedCheck_5476_ = !lean_is_exclusive(v___x_5469_);
if (v_isSharedCheck_5476_ == 0)
{
lean_object* v_unused_5477_; 
v_unused_5477_ = lean_ctor_get(v___x_5469_, 0);
lean_dec(v_unused_5477_);
v___x_5471_ = v___x_5469_;
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
else
{
lean_dec(v___x_5469_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5476_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5474_; 
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 0, v_a_5463_);
v___x_5474_ = v___x_5471_;
goto v_reusejp_5473_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v_a_5463_);
v___x_5474_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5473_;
}
v_reusejp_5473_:
{
return v___x_5474_;
}
}
}
else
{
lean_object* v_a_5478_; lean_object* v___x_5480_; uint8_t v_isShared_5481_; uint8_t v_isSharedCheck_5485_; 
lean_dec(v_a_5463_);
v_a_5478_ = lean_ctor_get(v___x_5469_, 0);
v_isSharedCheck_5485_ = !lean_is_exclusive(v___x_5469_);
if (v_isSharedCheck_5485_ == 0)
{
v___x_5480_ = v___x_5469_;
v_isShared_5481_ = v_isSharedCheck_5485_;
goto v_resetjp_5479_;
}
else
{
lean_inc(v_a_5478_);
lean_dec(v___x_5469_);
v___x_5480_ = lean_box(0);
v_isShared_5481_ = v_isSharedCheck_5485_;
goto v_resetjp_5479_;
}
v_resetjp_5479_:
{
lean_object* v___x_5483_; 
if (v_isShared_5481_ == 0)
{
v___x_5483_ = v___x_5480_;
goto v_reusejp_5482_;
}
else
{
lean_object* v_reuseFailAlloc_5484_; 
v_reuseFailAlloc_5484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5484_, 0, v_a_5478_);
v___x_5483_ = v_reuseFailAlloc_5484_;
goto v_reusejp_5482_;
}
v_reusejp_5482_:
{
return v___x_5483_;
}
}
}
}
}
}
else
{
lean_object* v_a_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; 
v_a_5488_ = lean_ctor_get(v_r_5462_, 0);
lean_inc(v_a_5488_);
lean_dec_ref_known(v_r_5462_, 1);
v___x_5489_ = lean_box(0);
v___x_5490_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___lam__0(v___y_5454_, v_mkInfoTree_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v_a_5461_, v___x_5489_);
if (lean_obj_tag(v___x_5490_) == 0)
{
lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5497_; 
v_isSharedCheck_5497_ = !lean_is_exclusive(v___x_5490_);
if (v_isSharedCheck_5497_ == 0)
{
lean_object* v_unused_5498_; 
v_unused_5498_ = lean_ctor_get(v___x_5490_, 0);
lean_dec(v_unused_5498_);
v___x_5492_ = v___x_5490_;
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
else
{
lean_dec(v___x_5490_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
lean_object* v___x_5495_; 
if (v_isShared_5493_ == 0)
{
lean_ctor_set_tag(v___x_5492_, 1);
lean_ctor_set(v___x_5492_, 0, v_a_5488_);
v___x_5495_ = v___x_5492_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5496_; 
v_reuseFailAlloc_5496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5496_, 0, v_a_5488_);
v___x_5495_ = v_reuseFailAlloc_5496_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
return v___x_5495_;
}
}
}
else
{
lean_object* v_a_5499_; lean_object* v___x_5501_; uint8_t v_isShared_5502_; uint8_t v_isSharedCheck_5506_; 
lean_dec(v_a_5488_);
v_a_5499_ = lean_ctor_get(v___x_5490_, 0);
v_isSharedCheck_5506_ = !lean_is_exclusive(v___x_5490_);
if (v_isSharedCheck_5506_ == 0)
{
v___x_5501_ = v___x_5490_;
v_isShared_5502_ = v_isSharedCheck_5506_;
goto v_resetjp_5500_;
}
else
{
lean_inc(v_a_5499_);
lean_dec(v___x_5490_);
v___x_5501_ = lean_box(0);
v_isShared_5502_ = v_isSharedCheck_5506_;
goto v_resetjp_5500_;
}
v_resetjp_5500_:
{
lean_object* v___x_5504_; 
if (v_isShared_5502_ == 0)
{
v___x_5504_ = v___x_5501_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5505_; 
v_reuseFailAlloc_5505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5505_, 0, v_a_5499_);
v___x_5504_ = v_reuseFailAlloc_5505_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
return v___x_5504_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg___boxed(lean_object* v_x_5507_, lean_object* v_mkInfoTree_5508_, lean_object* v___y_5509_, lean_object* v___y_5510_, lean_object* v___y_5511_, lean_object* v___y_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_, lean_object* v___y_5517_){
_start:
{
lean_object* v_res_5518_; 
v_res_5518_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg(v_x_5507_, v_mkInfoTree_5508_, v___y_5509_, v___y_5510_, v___y_5511_, v___y_5512_, v___y_5513_, v___y_5514_, v___y_5515_, v___y_5516_);
lean_dec(v___y_5516_);
lean_dec_ref(v___y_5515_);
lean_dec(v___y_5514_);
lean_dec_ref(v___y_5513_);
lean_dec(v___y_5512_);
lean_dec_ref(v___y_5511_);
lean_dec(v___y_5510_);
lean_dec_ref(v___y_5509_);
return v_res_5518_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg(lean_object* v_upperBound_5529_, lean_object* v_enterArgsAndSeps_5530_, lean_object* v_a_5531_, lean_object* v_b_5532_, lean_object* v___y_5533_, lean_object* v___y_5534_, lean_object* v___y_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_){
_start:
{
uint8_t v___x_5542_; 
v___x_5542_ = lean_nat_dec_lt(v_a_5531_, v_upperBound_5529_);
if (v___x_5542_ == 0)
{
lean_object* v___x_5543_; 
lean_dec(v_a_5531_);
v___x_5543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5543_, 0, v_b_5532_);
return v___x_5543_;
}
else
{
lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___y_5552_; lean_object* v___x_5581_; lean_object* v___x_5582_; uint8_t v___x_5583_; 
v___x_5544_ = lean_unsigned_to_nat(2u);
v___x_5545_ = lean_box(0);
v___x_5546_ = lean_box(0);
v___x_5547_ = lean_unsigned_to_nat(0u);
v___x_5548_ = lean_unsigned_to_nat(1u);
v___x_5549_ = lean_nat_mul(v___x_5544_, v_a_5531_);
v___x_5550_ = lean_array_get_borrowed(v___x_5545_, v_enterArgsAndSeps_5530_, v___x_5549_);
v___x_5581_ = lean_nat_add(v___x_5549_, v___x_5548_);
lean_dec(v___x_5549_);
v___x_5582_ = lean_array_get_size(v_enterArgsAndSeps_5530_);
v___x_5583_ = lean_nat_dec_lt(v___x_5581_, v___x_5582_);
if (v___x_5583_ == 0)
{
lean_dec(v___x_5581_);
v___y_5552_ = v___x_5545_;
goto v___jp_5551_;
}
else
{
lean_object* v___x_5584_; 
v___x_5584_ = lean_array_fget_borrowed(v_enterArgsAndSeps_5530_, v___x_5581_);
lean_dec(v___x_5581_);
lean_inc(v___x_5584_);
v___y_5552_ = v___x_5584_;
goto v___jp_5551_;
}
v___jp_5551_:
{
lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; uint8_t v___x_5564_; lean_object* v___x_5565_; lean_object* v___f_5566_; lean_object* v___x_5567_; 
v___x_5553_ = lean_mk_empty_array_with_capacity(v___x_5544_);
lean_inc_n(v___x_5550_, 3);
v___x_5554_ = lean_array_push(v___x_5553_, v___x_5550_);
v___x_5555_ = lean_array_push(v___x_5554_, v___y_5552_);
v___x_5556_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__1));
v___x_5557_ = lean_box(2);
v___x_5558_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5558_, 0, v___x_5557_);
lean_ctor_set(v___x_5558_, 1, v___x_5556_);
lean_ctor_set(v___x_5558_, 2, v___x_5555_);
v___x_5559_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__0));
v___x_5560_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__1));
v___x_5561_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__2));
v___x_5562_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1___closed__3));
v___x_5563_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__3));
v___x_5564_ = l_Lean_Syntax_isOfKind(v___x_5550_, v___x_5563_);
v___x_5565_ = lean_box(v___x_5564_);
v___f_5566_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__0___boxed), 18, 9);
lean_closure_set(v___f_5566_, 0, v___x_5565_);
lean_closure_set(v___f_5566_, 1, v___x_5546_);
lean_closure_set(v___f_5566_, 2, v___x_5550_);
lean_closure_set(v___f_5566_, 3, v___x_5547_);
lean_closure_set(v___f_5566_, 4, v___x_5559_);
lean_closure_set(v___f_5566_, 5, v___x_5560_);
lean_closure_set(v___f_5566_, 6, v___x_5561_);
lean_closure_set(v___f_5566_, 7, v___x_5562_);
lean_closure_set(v___f_5566_, 8, v___x_5556_);
v___x_5567_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v___x_5558_, v___y_5533_, v___y_5534_, v___y_5535_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_, v___y_5540_);
if (lean_obj_tag(v___x_5567_) == 0)
{
lean_object* v_a_5568_; lean_object* v___f_5569_; lean_object* v___x_5570_; 
v_a_5568_ = lean_ctor_get(v___x_5567_, 0);
lean_inc(v_a_5568_);
lean_dec_ref_known(v___x_5567_, 1);
v___f_5569_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___lam__1___boxed), 11, 1);
lean_closure_set(v___f_5569_, 0, v_a_5568_);
v___x_5570_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg(v___f_5566_, v___f_5569_, v___y_5533_, v___y_5534_, v___y_5535_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_, v___y_5540_);
if (lean_obj_tag(v___x_5570_) == 0)
{
lean_object* v___x_5571_; 
lean_dec_ref_known(v___x_5570_, 1);
v___x_5571_ = lean_nat_add(v_a_5531_, v___x_5548_);
lean_dec(v_a_5531_);
v_a_5531_ = v___x_5571_;
v_b_5532_ = v___x_5546_;
goto _start;
}
else
{
lean_dec(v_a_5531_);
return v___x_5570_;
}
}
else
{
lean_object* v_a_5573_; lean_object* v___x_5575_; uint8_t v_isShared_5576_; uint8_t v_isSharedCheck_5580_; 
lean_dec_ref(v___f_5566_);
lean_dec(v_a_5531_);
v_a_5573_ = lean_ctor_get(v___x_5567_, 0);
v_isSharedCheck_5580_ = !lean_is_exclusive(v___x_5567_);
if (v_isSharedCheck_5580_ == 0)
{
v___x_5575_ = v___x_5567_;
v_isShared_5576_ = v_isSharedCheck_5580_;
goto v_resetjp_5574_;
}
else
{
lean_inc(v_a_5573_);
lean_dec(v___x_5567_);
v___x_5575_ = lean_box(0);
v_isShared_5576_ = v_isSharedCheck_5580_;
goto v_resetjp_5574_;
}
v_resetjp_5574_:
{
lean_object* v___x_5578_; 
if (v_isShared_5576_ == 0)
{
v___x_5578_ = v___x_5575_;
goto v_reusejp_5577_;
}
else
{
lean_object* v_reuseFailAlloc_5579_; 
v_reuseFailAlloc_5579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5579_, 0, v_a_5573_);
v___x_5578_ = v_reuseFailAlloc_5579_;
goto v_reusejp_5577_;
}
v_reusejp_5577_:
{
return v___x_5578_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___boxed(lean_object* v_upperBound_5585_, lean_object* v_enterArgsAndSeps_5586_, lean_object* v_a_5587_, lean_object* v_b_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_, lean_object* v___y_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_, lean_object* v___y_5596_, lean_object* v___y_5597_){
_start:
{
lean_object* v_res_5598_; 
v_res_5598_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg(v_upperBound_5585_, v_enterArgsAndSeps_5586_, v_a_5587_, v_b_5588_, v___y_5589_, v___y_5590_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_, v___y_5595_, v___y_5596_);
lean_dec(v___y_5596_);
lean_dec_ref(v___y_5595_);
lean_dec(v___y_5594_);
lean_dec_ref(v___y_5593_);
lean_dec(v___y_5592_);
lean_dec_ref(v___y_5591_);
lean_dec(v___y_5590_);
lean_dec_ref(v___y_5589_);
lean_dec_ref(v_enterArgsAndSeps_5586_);
lean_dec(v_upperBound_5585_);
return v_res_5598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter(lean_object* v_stx_5601_, lean_object* v_a_5602_, lean_object* v_a_5603_, lean_object* v_a_5604_, lean_object* v_a_5605_, lean_object* v_a_5606_, lean_object* v_a_5607_, lean_object* v_a_5608_, lean_object* v_a_5609_){
_start:
{
lean_object* v___x_5611_; lean_object* v_token_5612_; lean_object* v___x_5613_; lean_object* v_lbrak_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v_enterArgsAndSeps_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___f_5625_; lean_object* v___x_5626_; 
v___x_5611_ = lean_unsigned_to_nat(0u);
v_token_5612_ = l_Lean_Syntax_getArg(v_stx_5601_, v___x_5611_);
v___x_5613_ = lean_unsigned_to_nat(1u);
v_lbrak_5614_ = l_Lean_Syntax_getArg(v_stx_5601_, v___x_5613_);
v___x_5615_ = lean_unsigned_to_nat(2u);
v___x_5616_ = l_Lean_Syntax_getArg(v_stx_5601_, v___x_5615_);
v_enterArgsAndSeps_5617_ = l_Lean_Syntax_getArgs(v___x_5616_);
lean_dec(v___x_5616_);
v___x_5618_ = lean_mk_empty_array_with_capacity(v___x_5615_);
v___x_5619_ = lean_array_push(v___x_5618_, v_token_5612_);
v___x_5620_ = lean_array_push(v___x_5619_, v_lbrak_5614_);
v___x_5621_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg___closed__1));
v___x_5622_ = lean_box(2);
v___x_5623_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5623_, 0, v___x_5622_);
lean_ctor_set(v___x_5623_, 1, v___x_5621_);
lean_ctor_set(v___x_5623_, 2, v___x_5620_);
v___x_5624_ = lean_box(0);
v___f_5625_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalEnter___closed__0));
v___x_5626_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v___x_5623_, v_a_5602_, v_a_5603_, v_a_5604_, v_a_5605_, v_a_5606_, v_a_5607_, v_a_5608_, v_a_5609_);
if (lean_obj_tag(v___x_5626_) == 0)
{
lean_object* v_a_5627_; lean_object* v___f_5628_; lean_object* v___x_5629_; 
v_a_5627_ = lean_ctor_get(v___x_5626_, 0);
lean_inc(v_a_5627_);
lean_dec_ref_known(v___x_5626_, 1);
v___f_5628_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalEnter___lam__1___boxed), 11, 1);
lean_closure_set(v___f_5628_, 0, v_a_5627_);
v___x_5629_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg(v___f_5625_, v___f_5628_, v_a_5602_, v_a_5603_, v_a_5604_, v_a_5605_, v_a_5606_, v_a_5607_, v_a_5608_, v_a_5609_);
if (lean_obj_tag(v___x_5629_) == 0)
{
lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; 
lean_dec_ref_known(v___x_5629_, 1);
v___x_5630_ = lean_array_get_size(v_enterArgsAndSeps_5617_);
v___x_5631_ = lean_nat_add(v___x_5630_, v___x_5613_);
v___x_5632_ = lean_nat_shiftr(v___x_5631_, v___x_5613_);
lean_dec(v___x_5631_);
v___x_5633_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg(v___x_5632_, v_enterArgsAndSeps_5617_, v___x_5611_, v___x_5624_, v_a_5602_, v_a_5603_, v_a_5604_, v_a_5605_, v_a_5606_, v_a_5607_, v_a_5608_, v_a_5609_);
lean_dec_ref(v_enterArgsAndSeps_5617_);
lean_dec(v___x_5632_);
if (lean_obj_tag(v___x_5633_) == 0)
{
lean_object* v___x_5635_; uint8_t v_isShared_5636_; uint8_t v_isSharedCheck_5640_; 
v_isSharedCheck_5640_ = !lean_is_exclusive(v___x_5633_);
if (v_isSharedCheck_5640_ == 0)
{
lean_object* v_unused_5641_; 
v_unused_5641_ = lean_ctor_get(v___x_5633_, 0);
lean_dec(v_unused_5641_);
v___x_5635_ = v___x_5633_;
v_isShared_5636_ = v_isSharedCheck_5640_;
goto v_resetjp_5634_;
}
else
{
lean_dec(v___x_5633_);
v___x_5635_ = lean_box(0);
v_isShared_5636_ = v_isSharedCheck_5640_;
goto v_resetjp_5634_;
}
v_resetjp_5634_:
{
lean_object* v___x_5638_; 
if (v_isShared_5636_ == 0)
{
lean_ctor_set(v___x_5635_, 0, v___x_5624_);
v___x_5638_ = v___x_5635_;
goto v_reusejp_5637_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v___x_5624_);
v___x_5638_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5637_;
}
v_reusejp_5637_:
{
return v___x_5638_;
}
}
}
else
{
return v___x_5633_;
}
}
else
{
lean_dec_ref(v_enterArgsAndSeps_5617_);
return v___x_5629_;
}
}
else
{
lean_object* v_a_5642_; lean_object* v___x_5644_; uint8_t v_isShared_5645_; uint8_t v_isSharedCheck_5649_; 
lean_dec_ref(v_enterArgsAndSeps_5617_);
v_a_5642_ = lean_ctor_get(v___x_5626_, 0);
v_isSharedCheck_5649_ = !lean_is_exclusive(v___x_5626_);
if (v_isSharedCheck_5649_ == 0)
{
v___x_5644_ = v___x_5626_;
v_isShared_5645_ = v_isSharedCheck_5649_;
goto v_resetjp_5643_;
}
else
{
lean_inc(v_a_5642_);
lean_dec(v___x_5626_);
v___x_5644_ = lean_box(0);
v_isShared_5645_ = v_isSharedCheck_5649_;
goto v_resetjp_5643_;
}
v_resetjp_5643_:
{
lean_object* v___x_5647_; 
if (v_isShared_5645_ == 0)
{
v___x_5647_ = v___x_5644_;
goto v_reusejp_5646_;
}
else
{
lean_object* v_reuseFailAlloc_5648_; 
v_reuseFailAlloc_5648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5648_, 0, v_a_5642_);
v___x_5647_ = v_reuseFailAlloc_5648_;
goto v_reusejp_5646_;
}
v_reusejp_5646_:
{
return v___x_5647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalEnter___boxed(lean_object* v_stx_5650_, lean_object* v_a_5651_, lean_object* v_a_5652_, lean_object* v_a_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_, lean_object* v_a_5657_, lean_object* v_a_5658_, lean_object* v_a_5659_){
_start:
{
lean_object* v_res_5660_; 
v_res_5660_ = l_Lean_Elab_Tactic_Conv_evalEnter(v_stx_5650_, v_a_5651_, v_a_5652_, v_a_5653_, v_a_5654_, v_a_5655_, v_a_5656_, v_a_5657_, v_a_5658_);
lean_dec(v_a_5658_);
lean_dec_ref(v_a_5657_);
lean_dec(v_a_5656_);
lean_dec_ref(v_a_5655_);
lean_dec(v_a_5654_);
lean_dec_ref(v_a_5653_);
lean_dec(v_a_5652_);
lean_dec_ref(v_a_5651_);
lean_dec(v_stx_5650_);
return v_res_5660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0(lean_object* v___y_5661_, lean_object* v___y_5662_, lean_object* v___y_5663_, lean_object* v___y_5664_, lean_object* v___y_5665_, lean_object* v___y_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_){
_start:
{
lean_object* v___x_5670_; 
v___x_5670_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___redArg(v___y_5668_);
return v___x_5670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0___boxed(lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_, lean_object* v___y_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_){
_start:
{
lean_object* v_res_5680_; 
v_res_5680_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0_spec__0(v___y_5671_, v___y_5672_, v___y_5673_, v___y_5674_, v___y_5675_, v___y_5676_, v___y_5677_, v___y_5678_);
lean_dec(v___y_5678_);
lean_dec_ref(v___y_5677_);
lean_dec(v___y_5676_);
lean_dec_ref(v___y_5675_);
lean_dec(v___y_5674_);
lean_dec_ref(v___y_5673_);
lean_dec(v___y_5672_);
lean_dec_ref(v___y_5671_);
return v_res_5680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0(lean_object* v_00_u03b1_5681_, lean_object* v_x_5682_, lean_object* v_mkInfoTree_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_){
_start:
{
lean_object* v___x_5693_; 
v___x_5693_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___redArg(v_x_5682_, v_mkInfoTree_5683_, v___y_5684_, v___y_5685_, v___y_5686_, v___y_5687_, v___y_5688_, v___y_5689_, v___y_5690_, v___y_5691_);
return v___x_5693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0___boxed(lean_object* v_00_u03b1_5694_, lean_object* v_x_5695_, lean_object* v_mkInfoTree_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_, lean_object* v___y_5705_){
_start:
{
lean_object* v_res_5706_; 
v_res_5706_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__0(v_00_u03b1_5694_, v_x_5695_, v_mkInfoTree_5696_, v___y_5697_, v___y_5698_, v___y_5699_, v___y_5700_, v___y_5701_, v___y_5702_, v___y_5703_, v___y_5704_);
lean_dec(v___y_5704_);
lean_dec_ref(v___y_5703_);
lean_dec(v___y_5702_);
lean_dec_ref(v___y_5701_);
lean_dec(v___y_5700_);
lean_dec_ref(v___y_5699_);
lean_dec(v___y_5698_);
lean_dec_ref(v___y_5697_);
return v_res_5706_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1(lean_object* v_upperBound_5707_, lean_object* v_enterArgsAndSeps_5708_, lean_object* v_inst_5709_, lean_object* v_R_5710_, lean_object* v_a_5711_, lean_object* v_b_5712_, lean_object* v_c_5713_, lean_object* v___y_5714_, lean_object* v___y_5715_, lean_object* v___y_5716_, lean_object* v___y_5717_, lean_object* v___y_5718_, lean_object* v___y_5719_, lean_object* v___y_5720_, lean_object* v___y_5721_){
_start:
{
lean_object* v___x_5723_; 
v___x_5723_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___redArg(v_upperBound_5707_, v_enterArgsAndSeps_5708_, v_a_5711_, v_b_5712_, v___y_5714_, v___y_5715_, v___y_5716_, v___y_5717_, v___y_5718_, v___y_5719_, v___y_5720_, v___y_5721_);
return v___x_5723_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1___boxed(lean_object* v_upperBound_5724_, lean_object* v_enterArgsAndSeps_5725_, lean_object* v_inst_5726_, lean_object* v_R_5727_, lean_object* v_a_5728_, lean_object* v_b_5729_, lean_object* v_c_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_, lean_object* v___y_5735_, lean_object* v___y_5736_, lean_object* v___y_5737_, lean_object* v___y_5738_, lean_object* v___y_5739_){
_start:
{
lean_object* v_res_5740_; 
v_res_5740_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Conv_evalEnter_spec__1(v_upperBound_5724_, v_enterArgsAndSeps_5725_, v_inst_5726_, v_R_5727_, v_a_5728_, v_b_5729_, v_c_5730_, v___y_5731_, v___y_5732_, v___y_5733_, v___y_5734_, v___y_5735_, v___y_5736_, v___y_5737_, v___y_5738_);
lean_dec(v___y_5738_);
lean_dec_ref(v___y_5737_);
lean_dec(v___y_5736_);
lean_dec_ref(v___y_5735_);
lean_dec(v___y_5734_);
lean_dec_ref(v___y_5733_);
lean_dec(v___y_5732_);
lean_dec_ref(v___y_5731_);
lean_dec_ref(v_enterArgsAndSeps_5725_);
lean_dec(v_upperBound_5724_);
return v_res_5740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1(){
_start:
{
lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; 
v___x_5756_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_5757_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__1));
v___x_5758_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___closed__3));
v___x_5759_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalEnter___boxed), 10, 0);
v___x_5760_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5756_, v___x_5757_, v___x_5758_, v___x_5759_);
return v___x_5760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1___boxed(lean_object* v_a_5761_){
_start:
{
lean_object* v_res_5762_; 
v_res_5762_ = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1();
return v_res_5762_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Congr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Congr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Congr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalSkip___regBuiltin_Lean_Elab_Tactic_Conv_evalSkip_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalCongr___regBuiltin_Lean_Elab_Tactic_Conv_evalCongr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_elabArg___regBuiltin_Lean_Elab_Tactic_Conv_elabArg__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalLhs___regBuiltin_Lean_Elab_Tactic_Conv_evalLhs_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalRhs___regBuiltin_Lean_Elab_Tactic_Conv_evalRhs_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalFun___regBuiltin_Lean_Elab_Tactic_Conv_evalFun_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalExt___regBuiltin_Lean_Elab_Tactic_Conv_evalExt_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Congr_0__Lean_Elab_Tactic_Conv_evalEnter___regBuiltin_Lean_Elab_Tactic_Conv_evalEnter__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Congr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Congr(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Congr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Congr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Congr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Congr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Congr(builtin);
}
#ifdef __cplusplus
}
#endif
