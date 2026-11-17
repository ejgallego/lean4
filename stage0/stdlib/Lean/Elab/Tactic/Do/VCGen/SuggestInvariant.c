// Lean compiler output
// Module: Lean.Elab.Tactic.Do.VCGen.SuggestInvariant
// Imports: public import Lean.Elab.Tactic.Basic public import Lean.Meta.Tactic.Simp.Types import Lean.Meta.Tactic.Simp.Main import Lean.Elab.Tactic.Do.ProofMode.MGoal import Std.Tactic.Do import Init.Data.Array.Mem
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_CollectFVars_State_ofFVarSet(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_Meta_collectForwardDeps(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_lastDecl(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkOr(lean_object*, lean_object*);
lean_object* l_Lean_mkAnd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_mkNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSome(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Simp_SimprocsArray_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_eraseQuoteMacroScopes(lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTacticAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ULift"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "down"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1_value),LEAN_SCALAR_PTR_LITERAL(8, 0, 133, 161, 22, 18, 91, 229)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "MGoalEntails"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(193, 32, 213, 253, 69, 208, 115, 14)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(203, 9, 83, 52, 40, 85, 31, 178)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "snd"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 40, 163, 84, 60, 49, 151, 224)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fst"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 44, 236, 58, 247, 164, 254, 114)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Cursor"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_1),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 108, 132, 55, 147, 41, 48, 106)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 145, 1, 190, 19, 10, 144, 159)}};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 97, 27, 109, 96, 85, 230, 202)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(114, 97, 84, 180, 109, 220, 63, 60)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ExceptConds"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(146, 91, 82, 196, 249, 72, 203, 194)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 33, 255, 249, 3, 79, 124, 43)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(240, 66, 120, 132, 230, 141, 174, 69)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(226, 139, 39, 26, 105, 135, 247, 193)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(230, 205, 224, 142, 140, 162, 83, 182)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__12_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 13, .m_data = "termPost⟨_,,⟩"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 45, 176, 130, 225, 239, 187, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "post⟨"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ExceptConds.false"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 147, 12, 12, 50, 62, 178, 236)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(80, 174, 198, 53, 67, 44, 24, 11)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ExceptConds.true"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(139, 147, 12, 12, 50, 62, 178, 236)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(251, 220, 146, 174, 153, 82, 100, 162)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letMuts"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 50, 229, 239, 254, 134, 162, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceCtorEq"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 230, 128, 19, 70, 224, 61, 3)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 29, 183, 206, 15, 98, 41)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 11, .m_data = "term_⇓\?_=>_"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⇓\?"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 10, .m_data = "term_⇓_=>_"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⇓"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Invariant.withEarlyReturnNewDo"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "withEarlyReturnNewDo"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onReturn"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 190, 22, 214, 80, 62, 154)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "onContinue"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15_value),LEAN_SCALAR_PTR_LITERAL(244, 55, 172, 124, 26, 216, 105, 59)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onExcept"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18_value),LEAN_SCALAR_PTR_LITERAL(203, 51, 246, 190, 226, 223, 149, 102)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mleave"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 47, 148, 137, 18, 118, 104, 201)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Expected invariant type, got "};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Invariant"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 189, 77, 192, 11, 129, 81, 25)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "xs"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5_value),LEAN_SCALAR_PTR_LITERAL(152, 88, 60, 86, 131, 35, 117, 108)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(lean_object* v_expr_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2));
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = l_Lean_Expr_isAppOfArity(v_expr_6_, v___x_7_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; 
v___x_10_ = lean_box(0);
return v___x_10_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_11_ = lean_box(0);
v___x_12_ = l_Lean_Expr_getAppFn(v_expr_6_);
v___x_13_ = l_Lean_Expr_constLevels_x21(v___x_12_);
lean_dec_ref(v___x_12_);
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = l_List_get_x21Internal___redArg(v___x_11_, v___x_13_, v___x_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___boxed(lean_object* v_expr_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(v_expr_17_);
lean_dec_ref(v_expr_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(lean_object* v_lvl_19_, lean_object* v_prop_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_21_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2));
v___x_22_ = lean_unsigned_to_nat(2u);
v___x_23_ = l_Lean_Expr_isAppOfArity(v_prop_20_, v___x_21_, v___x_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; lean_object* v___x_25_; 
lean_inc(v_lvl_19_);
v___x_24_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_lvl_19_);
v___x_25_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_lvl_19_, v___x_24_, v_prop_20_);
return v___x_25_;
}
else
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
lean_dec(v_lvl_19_);
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = l_Lean_Expr_getAppNumArgs(v_prop_20_);
v___x_28_ = lean_nat_sub(v___x_27_, v___x_26_);
lean_dec(v___x_27_);
v___x_29_ = lean_nat_sub(v___x_28_, v___x_26_);
lean_dec(v___x_28_);
v___x_30_ = l_Lean_Expr_getRevArg_x21(v_prop_20_, v___x_29_);
lean_dec_ref(v_prop_20_);
return v___x_30_;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0(void){
_start:
{
lean_object* v___x_31_; lean_object* v_dummy_32_; 
v___x_31_ = lean_box(0);
v_dummy_32_ = l_Lean_Expr_sort___override(v___x_31_);
return v_dummy_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(lean_object* v_type_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___y_53_; lean_object* v___y_54_; lean_object* v___x_74_; lean_object* v_dummy_75_; lean_object* v_nargs_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v_a_80_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_74_ = lean_box(0);
v_dummy_75_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0);
v_nargs_76_ = l_Lean_Expr_getAppNumArgs(v_type_49_);
lean_inc(v_nargs_76_);
v___x_77_ = lean_mk_array(v_nargs_76_, v_dummy_75_);
v___x_78_ = lean_unsigned_to_nat(1u);
v___x_79_ = lean_nat_sub(v_nargs_76_, v___x_78_);
lean_inc(v___x_79_);
lean_inc_ref(v_type_49_);
v_a_80_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_type_49_, v___x_77_, v___x_79_);
v___x_103_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5));
v___x_104_ = l_Lean_Expr_isAppOf(v_type_49_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_105_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8));
v___x_106_ = l_Lean_Expr_isAppOf(v_type_49_, v___x_105_);
if (v___x_106_ == 0)
{
lean_dec_ref(v_a_80_);
lean_dec(v___x_79_);
lean_dec(v_nargs_76_);
goto v___jp_61_;
}
else
{
goto v___jp_81_;
}
}
else
{
goto v___jp_81_;
}
v___jp_52_:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
lean_inc_n(v___y_54_, 2);
v___x_55_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(v___y_54_, v___y_53_);
v___x_56_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(v___y_54_, v_type_49_);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_58_, 0, v___y_54_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
v___jp_61_:
{
lean_object* v_lctx_62_; lean_object* v___x_63_; 
v_lctx_62_ = lean_ctor_get(v_a_50_, 2);
v___x_63_ = l_Lean_LocalContext_lastDecl(v_lctx_62_);
if (lean_obj_tag(v___x_63_) == 1)
{
lean_object* v_val_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_val_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_val_64_);
lean_dec_ref_known(v___x_63_, 1);
v___x_65_ = l_Lean_LocalDecl_type(v_val_64_);
lean_dec(v_val_64_);
v___x_66_ = l_Lean_Expr_consumeMData(v___x_65_);
lean_dec_ref(v___x_65_);
v___x_67_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(v_type_49_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v___x_68_; 
v___x_68_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(v___x_66_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v___x_69_; 
v___x_69_ = lean_box(0);
v___y_53_ = v___x_66_;
v___y_54_ = v___x_69_;
goto v___jp_52_;
}
else
{
lean_object* v_val_70_; 
v_val_70_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_val_70_);
lean_dec_ref_known(v___x_68_, 1);
v___y_53_ = v___x_66_;
v___y_54_ = v_val_70_;
goto v___jp_52_;
}
}
else
{
lean_object* v_val_71_; 
v_val_71_ = lean_ctor_get(v___x_67_, 0);
lean_inc(v_val_71_);
lean_dec_ref_known(v___x_67_, 1);
v___y_53_ = v___x_66_;
v___y_54_ = v_val_71_;
goto v___jp_52_;
}
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v___x_63_);
lean_dec_ref(v_type_49_);
v___x_72_ = lean_box(0);
v___x_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
return v___x_73_;
}
}
v___jp_81_:
{
lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_82_ = lean_unsigned_to_nat(2u);
v___x_83_ = lean_array_get_size(v_a_80_);
v___x_84_ = lean_nat_dec_lt(v___x_82_, v___x_83_);
if (v___x_84_ == 0)
{
lean_dec_ref(v_a_80_);
lean_dec(v___x_79_);
lean_dec(v_nargs_76_);
goto v___jp_61_;
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_85_ = l_Lean_Expr_getAppFn(v_type_49_);
v___x_86_ = l_Lean_Expr_constLevels_x21(v___x_85_);
lean_dec_ref(v___x_85_);
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = l_List_get_x21Internal___redArg(v___x_74_, v___x_86_, v___x_87_);
lean_dec(v___x_86_);
v___x_89_ = lean_nat_sub(v___x_79_, v___x_78_);
lean_dec(v___x_79_);
v___x_90_ = l_Lean_Expr_getRevArg_x21(v_type_49_, v___x_89_);
v___x_91_ = lean_unsigned_to_nat(3u);
v___x_92_ = l_Array_toSubarray___redArg(v_a_80_, v___x_91_, v___x_83_);
v___x_93_ = l_Subarray_copy___redArg(v___x_92_);
lean_inc_ref(v___x_93_);
v___x_94_ = l_Lean_Expr_beta(v___x_90_, v___x_93_);
v___x_95_ = lean_nat_sub(v_nargs_76_, v___x_82_);
lean_dec(v_nargs_76_);
v___x_96_ = lean_nat_sub(v___x_95_, v___x_78_);
lean_dec(v___x_95_);
v___x_97_ = l_Lean_Expr_getRevArg_x21(v_type_49_, v___x_96_);
lean_dec_ref(v_type_49_);
v___x_98_ = l_Lean_Expr_beta(v___x_97_, v___x_93_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_94_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_88_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
return v___x_102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___boxed(lean_object* v_type_107_, lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(v_type_107_, v_a_108_);
lean_dec_ref(v_a_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget(lean_object* v_type_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(v_type_111_, v_a_112_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed(lean_object* v_type_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget(v_type_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx___impl(lean_object* v_x_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_tag_nat(v_x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx___impl___boxed(lean_object* v_x_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx___impl(v_x_127_);
lean_dec(v_x_127_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(lean_object* v_t_129_, lean_object* v_k_130_){
_start:
{
if (lean_obj_tag(v_t_129_) == 0)
{
lean_object* v_invariantUse_131_; lean_object* v___x_132_; 
v_invariantUse_131_ = lean_ctor_get(v_t_129_, 0);
lean_inc_ref(v_invariantUse_131_);
lean_dec_ref_known(v_t_129_, 1);
v___x_132_ = lean_apply_1(v_k_130_, v_invariantUse_131_);
return v___x_132_;
}
else
{
lean_dec(v_t_129_);
return v_k_130_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim(lean_object* v_motive_133_, lean_object* v_ctorIdx_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_k_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_135_, v_k_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___boxed(lean_object* v_motive_139_, lean_object* v_ctorIdx_140_, lean_object* v_t_141_, lean_object* v_h_142_, lean_object* v_k_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim(v_motive_139_, v_ctorIdx_140_, v_t_141_, v_h_142_, v_k_143_);
lean_dec(v_ctorIdx_140_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim___redArg(lean_object* v_t_145_, lean_object* v_success_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_145_, v_success_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim(lean_object* v_motive_148_, lean_object* v_t_149_, lean_object* v_h_150_, lean_object* v_success_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_149_, v_success_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim___redArg(lean_object* v_t_153_, lean_object* v_notAnInvariantUse_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_153_, v_notAnInvariantUse_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim(lean_object* v_motive_156_, lean_object* v_t_157_, lean_object* v_h_158_, lean_object* v_notAnInvariantUse_159_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_157_, v_notAnInvariantUse_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim___redArg(lean_object* v_t_161_, lean_object* v_unknownInvariantUse_162_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_161_, v_unknownInvariantUse_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim(lean_object* v_motive_164_, lean_object* v_t_165_, lean_object* v_h_166_, lean_object* v_unknownInvariantUse_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_165_, v_unknownInvariantUse_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(lean_object* v_a_174_){
_start:
{
lean_object* v_fst_175_; lean_object* v_snd_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_201_; 
v_fst_175_ = lean_ctor_get(v_a_174_, 0);
v_snd_176_ = lean_ctor_get(v_a_174_, 1);
v_isSharedCheck_201_ = !lean_is_exclusive(v_a_174_);
if (v_isSharedCheck_201_ == 0)
{
v___x_178_ = v_a_174_;
v_isShared_179_ = v_isSharedCheck_201_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_snd_176_);
lean_inc(v_fst_175_);
lean_dec(v_a_174_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_201_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_180_ = lean_unsigned_to_nat(4u);
v___x_181_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_182_ = l_Lean_Expr_isAppOfArity(v_fst_175_, v___x_181_, v___x_180_);
if (v___x_182_ == 0)
{
lean_object* v___x_184_; 
if (v_isShared_179_ == 0)
{
v___x_184_ = v___x_178_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_fst_175_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_snd_176_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_186_ = lean_unsigned_to_nat(2u);
v___x_187_ = lean_unsigned_to_nat(3u);
v___x_188_ = l_Lean_Expr_getAppNumArgs(v_fst_175_);
v___x_189_ = lean_nat_sub(v___x_188_, v___x_186_);
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_nat_sub(v___x_189_, v___x_190_);
lean_dec(v___x_189_);
v___x_192_ = l_Lean_Expr_getRevArg_x21(v_fst_175_, v___x_191_);
v___x_193_ = lean_array_push(v_snd_176_, v___x_192_);
v___x_194_ = lean_nat_sub(v___x_188_, v___x_187_);
lean_dec(v___x_188_);
v___x_195_ = lean_nat_sub(v___x_194_, v___x_190_);
lean_dec(v___x_194_);
v___x_196_ = l_Lean_Expr_getRevArg_x21(v_fst_175_, v___x_195_);
lean_dec(v_fst_175_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v___x_193_);
lean_ctor_set(v___x_178_, 0, v___x_196_);
v___x_198_ = v___x_178_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_196_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v___x_193_);
v___x_198_ = v_reuseFailAlloc_200_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
v_a_174_ = v___x_198_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(lean_object* v_inv_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_snd_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_249_; 
v_snd_210_ = lean_ctor_get(v_a_209_, 1);
v_isSharedCheck_249_ = !lean_is_exclusive(v_a_209_);
if (v_isSharedCheck_249_ == 0)
{
lean_object* v_unused_250_; 
v_unused_250_ = lean_ctor_get(v_a_209_, 0);
lean_dec(v_unused_250_);
v___x_212_ = v_a_209_;
v_isShared_213_ = v_isSharedCheck_249_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_snd_210_);
lean_dec(v_a_209_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_249_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v_fst_214_; lean_object* v_snd_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_248_; 
v_fst_214_ = lean_ctor_get(v_snd_210_, 0);
v_snd_215_ = lean_ctor_get(v_snd_210_, 1);
v_isSharedCheck_248_ = !lean_is_exclusive(v_snd_210_);
if (v_isSharedCheck_248_ == 0)
{
v___x_217_ = v_snd_210_;
v_isShared_218_ = v_isSharedCheck_248_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_snd_215_);
lean_inc(v_fst_214_);
lean_dec(v_snd_210_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_248_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_219_ = lean_box(0);
lean_inc(v_inv_208_);
v___x_220_ = l_Lean_mkMVar(v_inv_208_);
v___x_221_ = lean_expr_eqv(v_fst_214_, v___x_220_);
lean_dec_ref(v___x_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_222_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1));
v___x_223_ = lean_unsigned_to_nat(4u);
v___x_224_ = l_Lean_Expr_isAppOfArity(v_fst_214_, v___x_222_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_227_; 
lean_dec(v_inv_208_);
v___x_225_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2));
if (v_isShared_218_ == 0)
{
v___x_227_ = v___x_217_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_fst_214_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_snd_215_);
v___x_227_ = v_reuseFailAlloc_231_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_229_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v___x_227_);
lean_ctor_set(v___x_212_, 0, v___x_225_);
v___x_229_ = v___x_212_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_225_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v___x_227_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
else
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v___x_232_ = lean_unsigned_to_nat(1u);
v___x_233_ = lean_nat_add(v_snd_215_, v___x_232_);
lean_dec(v_snd_215_);
v___x_234_ = l_Lean_Expr_getRevArg_x21(v_fst_214_, v___x_232_);
lean_dec(v_fst_214_);
if (v_isShared_218_ == 0)
{
lean_ctor_set(v___x_217_, 1, v___x_233_);
lean_ctor_set(v___x_217_, 0, v___x_234_);
v___x_236_ = v___x_217_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_234_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v___x_233_);
v___x_236_ = v_reuseFailAlloc_241_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_238_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v___x_236_);
lean_ctor_set(v___x_212_, 0, v___x_219_);
v___x_238_ = v___x_212_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_219_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_240_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
v_a_209_ = v___x_238_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_243_; 
lean_dec(v_inv_208_);
if (v_isShared_218_ == 0)
{
v___x_243_ = v___x_217_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_fst_214_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_snd_215_);
v___x_243_ = v_reuseFailAlloc_247_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v___x_243_);
lean_ctor_set(v___x_212_, 0, v___x_219_);
v___x_245_ = v___x_212_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_219_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___x_243_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(lean_object* v_assertion_263_, lean_object* v_inv_264_){
_start:
{
lean_object* v_assertion_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v_assertion_265_ = l_Lean_Expr_consumeMData(v_assertion_263_);
v___x_266_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1));
v___x_267_ = l_Lean_Expr_isAppOf(v_assertion_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
lean_dec_ref(v_assertion_265_);
lean_dec(v_inv_264_);
v___x_268_ = lean_box(1);
return v___x_268_;
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v_head_274_; lean_object* v_conditionIdx_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v_fst_280_; 
v___x_269_ = lean_unsigned_to_nat(2u);
v___x_270_ = l_Lean_Expr_getAppNumArgs(v_assertion_265_);
v___x_271_ = lean_nat_sub(v___x_270_, v___x_269_);
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = lean_nat_sub(v___x_271_, v___x_272_);
lean_dec(v___x_271_);
v_head_274_ = l_Lean_Expr_getRevArg_x21(v_assertion_265_, v___x_273_);
v_conditionIdx_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v_head_274_);
lean_ctor_set(v___x_277_, 1, v_conditionIdx_275_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(v_inv_264_, v___x_278_);
v_fst_280_ = lean_ctor_get(v___x_279_, 0);
if (lean_obj_tag(v_fst_280_) == 0)
{
lean_object* v_snd_281_; lean_object* v_dummy_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_snd_281_ = lean_ctor_get(v___x_279_, 1);
lean_inc(v_snd_281_);
lean_dec_ref(v___x_279_);
v_dummy_282_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0);
lean_inc(v___x_270_);
v___x_283_ = lean_mk_array(v___x_270_, v_dummy_282_);
v___x_284_ = lean_nat_sub(v___x_270_, v___x_272_);
lean_dec(v___x_270_);
v___x_285_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_assertion_265_, v___x_283_, v___x_284_);
v___x_286_ = lean_array_get_size(v___x_285_);
v___x_287_ = lean_unsigned_to_nat(4u);
v___x_288_ = lean_nat_dec_lt(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_289_ = l_Lean_instInhabitedExpr;
v___x_290_ = lean_unsigned_to_nat(3u);
v___x_291_ = lean_array_get_borrowed(v___x_289_, v___x_285_, v___x_290_);
v___x_292_ = l_Lean_Expr_cleanupAnnotations(v___x_291_);
v___x_293_ = l_Lean_Expr_isApp(v___x_292_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; 
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_294_ = lean_box(2);
return v___x_294_;
}
else
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = l_Lean_Expr_appFnCleanup___redArg(v___x_292_);
v___x_296_ = l_Lean_Expr_isApp(v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; 
lean_dec_ref(v___x_295_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_297_ = lean_box(2);
return v___x_297_;
}
else
{
lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_298_ = l_Lean_Expr_appFnCleanup___redArg(v___x_295_);
v___x_299_ = l_Lean_Expr_isApp(v___x_298_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; 
lean_dec_ref(v___x_298_);
lean_dec_ref(v___x_295_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_300_ = lean_box(2);
return v___x_300_;
}
else
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = l_Lean_Expr_appFnCleanup___redArg(v___x_298_);
lean_dec_ref(v___x_298_);
v___x_302_ = l_Lean_Expr_isApp(v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; 
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_295_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_303_ = lean_box(2);
return v___x_303_;
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_304_ = l_Lean_Expr_appFnCleanup___redArg(v___x_301_);
lean_dec_ref(v___x_301_);
v___x_305_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_306_ = l_Lean_Expr_isConstOf(v___x_304_, v___x_305_);
lean_dec_ref(v___x_304_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; 
lean_dec_ref(v___x_295_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_307_ = lean_box(2);
return v___x_307_;
}
else
{
lean_object* v_arg_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
v_arg_308_ = lean_ctor_get(v___x_295_, 1);
lean_inc_ref(v_arg_308_);
lean_dec_ref(v___x_295_);
v___x_309_ = l_Lean_Expr_cleanupAnnotations(v_arg_308_);
lean_dec_ref(v_arg_308_);
v___x_310_ = l_Lean_Expr_isApp(v___x_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; 
lean_dec_ref(v___x_309_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_311_ = lean_box(2);
return v___x_311_;
}
else
{
lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_312_ = l_Lean_Expr_appFnCleanup___redArg(v___x_309_);
lean_dec_ref(v___x_309_);
v___x_313_ = l_Lean_Expr_isApp(v___x_312_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; 
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_314_ = lean_box(2);
return v___x_314_;
}
else
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = l_Lean_Expr_appFnCleanup___redArg(v___x_312_);
v___x_316_ = l_Lean_Expr_isApp(v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; 
lean_dec_ref(v___x_315_);
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_317_ = lean_box(2);
return v___x_317_;
}
else
{
lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_318_ = l_Lean_Expr_appFnCleanup___redArg(v___x_315_);
v___x_319_ = l_Lean_Expr_isApp(v___x_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v___x_318_);
lean_dec_ref(v___x_315_);
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_320_ = lean_box(2);
return v___x_320_;
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = l_Lean_Expr_appFnCleanup___redArg(v___x_318_);
lean_dec_ref(v___x_318_);
v___x_322_ = l_Lean_Expr_isApp(v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; 
lean_dec_ref(v___x_321_);
lean_dec_ref(v___x_315_);
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_323_ = lean_box(2);
return v___x_323_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_324_ = l_Lean_Expr_appFnCleanup___redArg(v___x_321_);
lean_dec_ref(v___x_321_);
v___x_325_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4));
v___x_326_ = l_Lean_Expr_isConstOf(v___x_324_, v___x_325_);
lean_dec_ref(v___x_324_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; 
lean_dec_ref(v___x_315_);
lean_dec_ref(v___x_312_);
lean_dec_ref(v___x_292_);
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_327_ = lean_box(2);
return v___x_327_;
}
else
{
lean_object* v_snd_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_347_; 
v_snd_328_ = lean_ctor_get(v_snd_281_, 1);
v_isSharedCheck_347_ = !lean_is_exclusive(v_snd_281_);
if (v_isSharedCheck_347_ == 0)
{
lean_object* v_unused_348_; 
v_unused_348_ = lean_ctor_get(v_snd_281_, 0);
lean_dec(v_unused_348_);
v___x_330_ = v_snd_281_;
v_isShared_331_ = v_isSharedCheck_347_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_snd_328_);
lean_dec(v_snd_281_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_347_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v_arg_332_; lean_object* v_arg_333_; lean_object* v_arg_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
v_arg_332_ = lean_ctor_get(v___x_292_, 1);
lean_inc_ref_n(v_arg_332_, 2);
lean_dec_ref(v___x_292_);
v_arg_333_ = lean_ctor_get(v___x_312_, 1);
lean_inc_ref(v_arg_333_);
lean_dec_ref(v___x_312_);
v_arg_334_ = lean_ctor_get(v___x_315_, 1);
lean_inc_ref(v_arg_334_);
lean_dec_ref(v___x_315_);
v___x_335_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5));
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 1, v___x_335_);
lean_ctor_set(v___x_330_, 0, v_arg_332_);
v___x_337_ = v___x_330_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_arg_332_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v___x_335_);
v___x_337_ = v_reuseFailAlloc_346_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
lean_object* v___x_338_; lean_object* v_fst_339_; lean_object* v_snd_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_338_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(v___x_337_);
v_fst_339_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_fst_339_);
v_snd_340_ = lean_ctor_get(v___x_338_, 1);
lean_inc(v_snd_340_);
lean_dec_ref(v___x_338_);
v___x_341_ = l_Array_toSubarray___redArg(v___x_285_, v___x_287_, v___x_286_);
v___x_342_ = lean_array_push(v_snd_340_, v_fst_339_);
v___x_343_ = l_Subarray_copy___redArg(v___x_341_);
v___x_344_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_344_, 0, v_snd_328_);
lean_ctor_set(v___x_344_, 1, v_arg_334_);
lean_ctor_set(v___x_344_, 2, v_arg_333_);
lean_ctor_set(v___x_344_, 3, v___x_342_);
lean_ctor_set(v___x_344_, 4, v_arg_332_);
lean_ctor_set(v___x_344_, 5, v___x_343_);
v___x_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
return v___x_345_;
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
else
{
lean_object* v___x_349_; 
lean_dec_ref(v___x_285_);
lean_dec(v_snd_281_);
v___x_349_ = lean_box(1);
return v___x_349_;
}
}
else
{
lean_object* v_val_350_; 
lean_inc_ref(v_fst_280_);
lean_dec_ref(v___x_279_);
lean_dec(v___x_270_);
lean_dec_ref(v_assertion_265_);
v_val_350_ = lean_ctor_get(v_fst_280_, 0);
lean_inc(v_val_350_);
lean_dec_ref_known(v_fst_280_, 1);
return v_val_350_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___boxed(lean_object* v_assertion_351_, lean_object* v_inv_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v_assertion_351_, v_inv_352_);
lean_dec_ref(v_assertion_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0(lean_object* v_inv_354_, lean_object* v_inst_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(v_inv_354_, v_a_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1(lean_object* v_inst_358_, lean_object* v_a_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(v_a_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(lean_object* v_e_361_, lean_object* v___y_362_){
_start:
{
uint8_t v___x_364_; 
v___x_364_ = l_Lean_Expr_hasMVar(v_e_361_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; 
v___x_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_365_, 0, v_e_361_);
return v___x_365_;
}
else
{
lean_object* v___x_366_; lean_object* v_mctx_367_; lean_object* v___x_368_; lean_object* v_fst_369_; lean_object* v_snd_370_; lean_object* v___x_371_; lean_object* v_cache_372_; lean_object* v_zetaDeltaFVarIds_373_; lean_object* v_postponed_374_; lean_object* v_diag_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_384_; 
v___x_366_ = lean_st_ref_get(v___y_362_);
v_mctx_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc_ref(v_mctx_367_);
lean_dec(v___x_366_);
v___x_368_ = l_Lean_instantiateMVarsCore(v_mctx_367_, v_e_361_);
v_fst_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_fst_369_);
v_snd_370_ = lean_ctor_get(v___x_368_, 1);
lean_inc(v_snd_370_);
lean_dec_ref(v___x_368_);
v___x_371_ = lean_st_ref_take(v___y_362_);
v_cache_372_ = lean_ctor_get(v___x_371_, 1);
v_zetaDeltaFVarIds_373_ = lean_ctor_get(v___x_371_, 2);
v_postponed_374_ = lean_ctor_get(v___x_371_, 3);
v_diag_375_ = lean_ctor_get(v___x_371_, 4);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_384_ == 0)
{
lean_object* v_unused_385_; 
v_unused_385_ = lean_ctor_get(v___x_371_, 0);
lean_dec(v_unused_385_);
v___x_377_ = v___x_371_;
v_isShared_378_ = v_isSharedCheck_384_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_diag_375_);
lean_inc(v_postponed_374_);
lean_inc(v_zetaDeltaFVarIds_373_);
lean_inc(v_cache_372_);
lean_dec(v___x_371_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_384_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v_snd_370_);
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_snd_370_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_cache_372_);
lean_ctor_set(v_reuseFailAlloc_383_, 2, v_zetaDeltaFVarIds_373_);
lean_ctor_set(v_reuseFailAlloc_383_, 3, v_postponed_374_);
lean_ctor_set(v_reuseFailAlloc_383_, 4, v_diag_375_);
v___x_380_ = v_reuseFailAlloc_383_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_st_ref_put(v___y_362_, v___x_380_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v_fst_369_);
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg___boxed(lean_object* v_e_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_e_386_, v___y_387_);
lean_dec(v___y_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0(lean_object* v_e_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_e_390_, v___y_392_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___boxed(lean_object* v_e_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0(v_e_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
lean_dec_ref(v___y_398_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(lean_object* v_mvarId_404_, lean_object* v_x_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_404_, v_x_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_411_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
else
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
v_a_420_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v___x_411_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_411_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg___boxed(lean_object* v_mvarId_428_, lean_object* v_x_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_mvarId_428_, v_x_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1(lean_object* v_00_u03b1_436_, lean_object* v_mvarId_437_, lean_object* v_x_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_mvarId_437_, v_x_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___boxed(lean_object* v_00_u03b1_445_, lean_object* v_mvarId_446_, lean_object* v_x_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1(v_00_u03b1_445_, v_mvarId_446_, v_x_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(lean_object* v_inv_471_, lean_object* v_as_472_, size_t v_sz_473_, size_t v_i_474_, lean_object* v_b_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_a_482_; uint8_t v___x_486_; 
v___x_486_ = lean_usize_dec_lt(v_i_474_, v_sz_473_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; 
lean_dec(v_inv_471_);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v_b_475_);
return v___x_487_;
}
else
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v_a_493_; lean_object* v___x_494_; 
lean_dec_ref(v_b_475_);
v___x_491_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2));
v___x_492_ = l_Lean_instInhabitedExpr;
v_a_493_ = lean_array_uget_borrowed(v_as_472_, v_i_474_);
lean_inc(v_a_493_);
v___x_494_ = l_Lean_MVarId_getType(v_a_493_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_496_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_495_);
lean_dec_ref_known(v___x_494_, 1);
v___x_496_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_a_495_, v___y_477_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_497_);
lean_dec_ref_known(v___x_496_, 1);
v___x_498_ = l_Lean_Expr_consumeMData(v_a_497_);
lean_dec(v_a_497_);
v___x_499_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed), 6, 1);
lean_closure_set(v___x_499_, 0, v___x_498_);
lean_inc(v_a_493_);
v___x_500_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_a_493_, v___x_499_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_501_);
lean_dec_ref_known(v___x_500_, 1);
if (lean_obj_tag(v_a_501_) == 1)
{
lean_object* v_val_502_; lean_object* v_snd_503_; lean_object* v_snd_504_; lean_object* v___x_505_; 
v_val_502_ = lean_ctor_get(v_a_501_, 0);
lean_inc(v_val_502_);
lean_dec_ref_known(v_a_501_, 1);
v_snd_503_ = lean_ctor_get(v_val_502_, 1);
lean_inc(v_snd_503_);
lean_dec(v_val_502_);
v_snd_504_ = lean_ctor_get(v_snd_503_, 1);
lean_inc(v_snd_504_);
lean_dec(v_snd_503_);
lean_inc(v_inv_471_);
v___x_505_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v_snd_504_, v_inv_471_);
lean_dec(v_snd_504_);
switch(lean_obj_tag(v___x_505_))
{
case 0:
{
lean_object* v_invariantUse_506_; lean_object* v_cursorSuffix_507_; lean_object* v_letMuts_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v_invariantUse_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc_ref(v_invariantUse_506_);
lean_dec_ref_known(v___x_505_, 1);
v_cursorSuffix_507_ = lean_ctor_get(v_invariantUse_506_, 2);
lean_inc_ref(v_cursorSuffix_507_);
v_letMuts_508_ = lean_ctor_get(v_invariantUse_506_, 3);
lean_inc_ref(v_letMuts_508_);
lean_dec_ref(v_invariantUse_506_);
v___x_509_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4));
v___x_510_ = l_Lean_Expr_isAppOf(v_cursorSuffix_507_, v___x_509_);
lean_dec_ref(v_cursorSuffix_507_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; uint8_t v___x_514_; 
v___x_511_ = lean_unsigned_to_nat(0u);
v___x_512_ = lean_array_get(v___x_492_, v_letMuts_508_, v___x_511_);
lean_dec_ref(v_letMuts_508_);
v___x_513_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7));
v___x_514_ = l_Lean_Expr_isAppOf(v___x_512_, v___x_513_);
lean_dec(v___x_512_);
if (v___x_514_ == 0)
{
lean_dec(v_inv_471_);
goto v___jp_488_;
}
else
{
v_a_482_ = v___x_491_;
goto v___jp_481_;
}
}
else
{
lean_dec_ref(v_letMuts_508_);
v_a_482_ = v___x_491_;
goto v___jp_481_;
}
}
case 1:
{
v_a_482_ = v___x_491_;
goto v___jp_481_;
}
default: 
{
lean_dec(v_inv_471_);
goto v___jp_488_;
}
}
}
else
{
lean_dec(v_a_501_);
v_a_482_ = v___x_491_;
goto v___jp_481_;
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
lean_dec(v_inv_471_);
v_a_515_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_500_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_500_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec(v_inv_471_);
v_a_523_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_496_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_496_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_538_; 
lean_dec(v_inv_471_);
v_a_531_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_538_ == 0)
{
v___x_533_ = v___x_494_;
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_494_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_536_; 
if (v_isShared_534_ == 0)
{
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_531_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
v___jp_488_:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1));
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
v___jp_481_:
{
size_t v___x_483_; size_t v___x_484_; 
v___x_483_ = ((size_t)1ULL);
v___x_484_ = lean_usize_add(v_i_474_, v___x_483_);
lean_inc_ref(v_a_482_);
v_i_474_ = v___x_484_;
v_b_475_ = v_a_482_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___boxed(lean_object* v_inv_539_, lean_object* v_as_540_, lean_object* v_sz_541_, lean_object* v_i_542_, lean_object* v_b_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
size_t v_sz_boxed_549_; size_t v_i_boxed_550_; lean_object* v_res_551_; 
v_sz_boxed_549_ = lean_unbox_usize(v_sz_541_);
lean_dec(v_sz_541_);
v_i_boxed_550_ = lean_unbox_usize(v_i_542_);
lean_dec(v_i_542_);
v_res_551_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(v_inv_539_, v_as_540_, v_sz_boxed_549_, v_i_boxed_550_, v_b_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec_ref(v_as_540_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(lean_object* v_vcs_556_, lean_object* v_inv_557_, lean_object* v_letMutsTy_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_){
_start:
{
lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0));
v___x_568_ = l_Lean_Expr_isAppOf(v_letMutsTy_558_, v___x_567_);
if (v___x_568_ == 0)
{
lean_dec(v_inv_557_);
goto v___jp_564_;
}
else
{
lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_569_ = l_Lean_Expr_getAppNumArgs(v_letMutsTy_558_);
v___x_570_ = lean_unsigned_to_nat(2u);
v___x_571_ = lean_nat_dec_lt(v___x_569_, v___x_570_);
if (v___x_571_ == 0)
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_572_ = lean_unsigned_to_nat(1u);
v___x_573_ = lean_nat_sub(v___x_569_, v___x_572_);
lean_dec(v___x_569_);
lean_inc(v___x_573_);
v___x_574_ = l_Lean_Expr_getRevArg_x21(v_letMutsTy_558_, v___x_573_);
v___x_575_ = l_Lean_Expr_cleanupAnnotations(v___x_574_);
lean_dec_ref(v___x_574_);
v___x_576_ = l_Lean_Expr_isApp(v___x_575_);
if (v___x_576_ == 0)
{
lean_dec_ref(v___x_575_);
lean_dec(v___x_573_);
lean_dec(v_inv_557_);
goto v___jp_564_;
}
else
{
lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_577_ = l_Lean_Expr_appFnCleanup___redArg(v___x_575_);
v___x_578_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1));
v___x_579_ = l_Lean_Expr_isConstOf(v___x_577_, v___x_578_);
lean_dec_ref(v___x_577_);
if (v___x_579_ == 0)
{
lean_dec_ref(v___x_575_);
lean_dec(v___x_573_);
lean_dec(v_inv_557_);
goto v___jp_564_;
}
else
{
lean_object* v_arg_580_; lean_object* v___x_581_; lean_object* v_00_u03c3_582_; lean_object* v___x_583_; size_t v_sz_584_; size_t v___x_585_; lean_object* v___x_586_; 
v_arg_580_ = lean_ctor_get(v___x_575_, 1);
lean_inc_ref(v_arg_580_);
lean_dec_ref(v___x_575_);
v___x_581_ = lean_nat_sub(v___x_573_, v___x_572_);
lean_dec(v___x_573_);
v_00_u03c3_582_ = l_Lean_Expr_getRevArg_x21(v_letMutsTy_558_, v___x_581_);
v___x_583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2));
v_sz_584_ = lean_array_size(v_vcs_556_);
v___x_585_ = ((size_t)0ULL);
v___x_586_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(v_inv_557_, v_vcs_556_, v_sz_584_, v___x_585_, v___x_583_, v_a_559_, v_a_560_, v_a_561_, v_a_562_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_608_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_608_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_608_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_608_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v_fst_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_606_; 
v_fst_591_ = lean_ctor_get(v_a_587_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v_a_587_);
if (v_isSharedCheck_606_ == 0)
{
lean_object* v_unused_607_; 
v_unused_607_ = lean_ctor_get(v_a_587_, 1);
lean_dec(v_unused_607_);
v___x_593_ = v_a_587_;
v_isShared_594_ = v_isSharedCheck_606_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_fst_591_);
lean_dec(v_a_587_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_606_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
if (lean_obj_tag(v_fst_591_) == 0)
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 1, v_00_u03c3_582_);
lean_ctor_set(v___x_593_, 0, v_arg_580_);
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_arg_580_);
lean_ctor_set(v_reuseFailAlloc_601_, 1, v_00_u03c3_582_);
v___x_596_ = v_reuseFailAlloc_601_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; lean_object* v___x_599_; 
v___x_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_597_);
v___x_599_ = v___x_589_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
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
lean_object* v_val_602_; lean_object* v___x_604_; 
lean_del_object(v___x_593_);
lean_dec_ref(v_00_u03c3_582_);
lean_dec_ref(v_arg_580_);
v_val_602_ = lean_ctor_get(v_fst_591_, 0);
lean_inc(v_val_602_);
lean_dec_ref_known(v_fst_591_, 1);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v_val_602_);
v___x_604_ = v___x_589_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_val_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec_ref(v_00_u03c3_582_);
lean_dec_ref(v_arg_580_);
v_a_609_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_586_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_586_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
}
}
else
{
lean_dec(v___x_569_);
lean_dec(v_inv_557_);
goto v___jp_564_;
}
}
v___jp_564_:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_box(0);
v___x_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
return v___x_566_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___boxed(lean_object* v_vcs_617_, lean_object* v_inv_618_, lean_object* v_letMutsTy_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(v_vcs_617_, v_inv_618_, v_letMutsTy_619_, v_a_620_, v_a_621_, v_a_622_, v_a_623_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
lean_dec_ref(v_letMutsTy_619_);
lean_dec_ref(v_vcs_617_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__8(lean_object* v_dontRevert_626_, lean_object* v_as_627_, size_t v_i_628_, size_t v_stop_629_, lean_object* v_b_630_){
_start:
{
lean_object* v___y_632_; uint8_t v___x_636_; 
v___x_636_ = lean_usize_dec_eq(v_i_628_, v_stop_629_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_637_ = lean_array_uget_borrowed(v_as_627_, v_i_628_);
lean_inc_ref(v_dontRevert_626_);
lean_inc(v___x_637_);
v___x_638_ = lean_apply_1(v_dontRevert_626_, v___x_637_);
v___x_639_ = lean_unbox(v___x_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_inc(v___x_637_);
v___x_640_ = lean_array_push(v_b_630_, v___x_637_);
v___y_632_ = v___x_640_;
goto v___jp_631_;
}
else
{
v___y_632_ = v_b_630_;
goto v___jp_631_;
}
}
else
{
lean_dec_ref(v_dontRevert_626_);
return v_b_630_;
}
v___jp_631_:
{
size_t v___x_633_; size_t v___x_634_; 
v___x_633_ = ((size_t)1ULL);
v___x_634_ = lean_usize_add(v_i_628_, v___x_633_);
v_i_628_ = v___x_634_;
v_b_630_ = v___y_632_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__8___boxed(lean_object* v_dontRevert_641_, lean_object* v_as_642_, lean_object* v_i_643_, lean_object* v_stop_644_, lean_object* v_b_645_){
_start:
{
size_t v_i_boxed_646_; size_t v_stop_boxed_647_; lean_object* v_res_648_; 
v_i_boxed_646_ = lean_unbox_usize(v_i_643_);
lean_dec(v_i_643_);
v_stop_boxed_647_ = lean_unbox_usize(v_stop_644_);
lean_dec(v_stop_644_);
v_res_648_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__8(v_dontRevert_641_, v_as_642_, v_i_boxed_646_, v_stop_boxed_647_, v_b_645_);
lean_dec_ref(v_as_642_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0(size_t v_sz_649_, size_t v_i_650_, lean_object* v_bs_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
uint8_t v___x_657_; 
v___x_657_ = lean_usize_dec_lt(v_i_650_, v_sz_649_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; 
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v_bs_651_);
return v___x_658_;
}
else
{
lean_object* v_v_659_; lean_object* v___x_660_; lean_object* v_bs_x27_661_; lean_object* v___x_662_; 
v_v_659_ = lean_array_uget(v_bs_651_, v_i_650_);
v___x_660_ = lean_unsigned_to_nat(0u);
v_bs_x27_661_ = lean_array_uset(v_bs_651_, v_i_650_, v___x_660_);
lean_inc(v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc(v___y_653_);
lean_inc_ref(v___y_652_);
v___x_662_ = lean_infer_type(v_v_659_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; size_t v___x_664_; size_t v___x_665_; lean_object* v___x_666_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_663_);
lean_dec_ref_known(v___x_662_, 1);
v___x_664_ = ((size_t)1ULL);
v___x_665_ = lean_usize_add(v_i_650_, v___x_664_);
v___x_666_ = lean_array_uset(v_bs_x27_661_, v_i_650_, v_a_663_);
v_i_650_ = v___x_665_;
v_bs_651_ = v___x_666_;
goto _start;
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec_ref(v_bs_x27_661_);
v_a_668_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_662_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_662_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0___boxed(lean_object* v_sz_676_, lean_object* v_i_677_, lean_object* v_bs_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
size_t v_sz_boxed_684_; size_t v_i_boxed_685_; lean_object* v_res_686_; 
v_sz_boxed_684_ = lean_unbox_usize(v_sz_676_);
lean_dec(v_sz_676_);
v_i_boxed_685_ = lean_unbox_usize(v_i_677_);
lean_dec(v_i_677_);
v_res_686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0(v_sz_boxed_684_, v_i_boxed_685_, v_bs_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(lean_object* v_as_687_, size_t v_i_688_, size_t v_stop_689_, lean_object* v_b_690_){
_start:
{
uint8_t v___x_691_; 
v___x_691_ = lean_usize_dec_eq(v_i_688_, v_stop_689_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; size_t v___x_695_; size_t v___x_696_; 
v___x_692_ = lean_array_uget_borrowed(v_as_687_, v_i_688_);
v___x_693_ = l_Lean_Expr_fvarId_x21(v___x_692_);
v___x_694_ = l_Lean_FVarIdSet_insert(v_b_690_, v___x_693_);
v___x_695_ = ((size_t)1ULL);
v___x_696_ = lean_usize_add(v_i_688_, v___x_695_);
v_i_688_ = v___x_696_;
v_b_690_ = v___x_694_;
goto _start;
}
else
{
return v_b_690_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5___boxed(lean_object* v_as_698_, lean_object* v_i_699_, lean_object* v_stop_700_, lean_object* v_b_701_){
_start:
{
size_t v_i_boxed_702_; size_t v_stop_boxed_703_; lean_object* v_res_704_; 
v_i_boxed_702_ = lean_unbox_usize(v_i_699_);
lean_dec(v_i_699_);
v_stop_boxed_703_ = lean_unbox_usize(v_stop_700_);
lean_dec(v_stop_700_);
v_res_704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(v_as_698_, v_i_boxed_702_, v_stop_boxed_703_, v_b_701_);
lean_dec_ref(v_as_698_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6(lean_object* v_dontRevert_705_, lean_object* v_as_706_, size_t v_i_707_, size_t v_stop_708_, lean_object* v_b_709_){
_start:
{
lean_object* v___y_711_; uint8_t v___x_715_; 
v___x_715_ = lean_usize_dec_eq(v_i_707_, v_stop_708_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_716_ = lean_array_uget_borrowed(v_as_706_, v_i_707_);
v___x_717_ = l_Lean_Expr_fvarId_x21(v___x_716_);
lean_inc_ref(v_dontRevert_705_);
v___x_718_ = lean_apply_1(v_dontRevert_705_, v___x_717_);
v___x_719_ = lean_unbox(v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; 
lean_inc(v___x_716_);
v___x_720_ = lean_array_push(v_b_709_, v___x_716_);
v___y_711_ = v___x_720_;
goto v___jp_710_;
}
else
{
v___y_711_ = v_b_709_;
goto v___jp_710_;
}
}
else
{
lean_dec_ref(v_dontRevert_705_);
return v_b_709_;
}
v___jp_710_:
{
size_t v___x_712_; size_t v___x_713_; 
v___x_712_ = ((size_t)1ULL);
v___x_713_ = lean_usize_add(v_i_707_, v___x_712_);
v_i_707_ = v___x_713_;
v_b_709_ = v___y_711_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___boxed(lean_object* v_dontRevert_721_, lean_object* v_as_722_, lean_object* v_i_723_, lean_object* v_stop_724_, lean_object* v_b_725_){
_start:
{
size_t v_i_boxed_726_; size_t v_stop_boxed_727_; lean_object* v_res_728_; 
v_i_boxed_726_ = lean_unbox_usize(v_i_723_);
lean_dec(v_i_723_);
v_stop_boxed_727_ = lean_unbox_usize(v_stop_724_);
lean_dec(v_stop_724_);
v_res_728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6(v_dontRevert_721_, v_as_722_, v_i_boxed_726_, v_stop_boxed_727_, v_b_725_);
lean_dec_ref(v_as_722_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(lean_object* v_as_729_, size_t v_i_730_, size_t v_stop_731_, lean_object* v_b_732_){
_start:
{
uint8_t v___x_733_; 
v___x_733_ = lean_usize_dec_eq(v_i_730_, v_stop_731_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; size_t v___x_736_; size_t v___x_737_; 
v___x_734_ = lean_array_uget_borrowed(v_as_729_, v_i_730_);
lean_inc(v___x_734_);
v___x_735_ = l_Lean_collectFVars(v_b_732_, v___x_734_);
v___x_736_ = ((size_t)1ULL);
v___x_737_ = lean_usize_add(v_i_730_, v___x_736_);
v_i_730_ = v___x_737_;
v_b_732_ = v___x_735_;
goto _start;
}
else
{
return v_b_732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4___boxed(lean_object* v_as_739_, lean_object* v_i_740_, lean_object* v_stop_741_, lean_object* v_b_742_){
_start:
{
size_t v_i_boxed_743_; size_t v_stop_boxed_744_; lean_object* v_res_745_; 
v_i_boxed_743_ = lean_unbox_usize(v_i_740_);
lean_dec(v_i_740_);
v_stop_boxed_744_ = lean_unbox_usize(v_stop_741_);
lean_dec(v_stop_741_);
v_res_745_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(v_as_739_, v_i_boxed_743_, v_stop_boxed_744_, v_b_742_);
lean_dec_ref(v_as_739_);
return v_res_745_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___redArg(lean_object* v_k_746_, lean_object* v_t_747_){
_start:
{
if (lean_obj_tag(v_t_747_) == 0)
{
lean_object* v_k_748_; lean_object* v_l_749_; lean_object* v_r_750_; uint8_t v___x_751_; 
v_k_748_ = lean_ctor_get(v_t_747_, 1);
v_l_749_ = lean_ctor_get(v_t_747_, 3);
v_r_750_ = lean_ctor_get(v_t_747_, 4);
v___x_751_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_746_, v_k_748_);
switch(v___x_751_)
{
case 0:
{
v_t_747_ = v_l_749_;
goto _start;
}
case 1:
{
uint8_t v___x_753_; 
v___x_753_ = 1;
return v___x_753_;
}
default: 
{
v_t_747_ = v_r_750_;
goto _start;
}
}
}
else
{
uint8_t v___x_755_; 
v___x_755_ = 0;
return v___x_755_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___redArg___boxed(lean_object* v_k_756_, lean_object* v_t_757_){
_start:
{
uint8_t v_res_758_; lean_object* v_r_759_; 
v_res_758_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___redArg(v_k_756_, v_t_757_);
lean_dec(v_t_757_);
lean_dec(v_k_756_);
v_r_759_ = lean_box(v_res_758_);
return v_r_759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(lean_object* v___y_760_, lean_object* v_dontRevert_761_, lean_object* v_as_762_, size_t v_i_763_, size_t v_stop_764_, lean_object* v_b_765_){
_start:
{
lean_object* v___y_767_; uint8_t v___x_771_; 
v___x_771_ = lean_usize_dec_eq(v_i_763_, v_stop_764_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_772_ = lean_array_uget_borrowed(v_as_762_, v_i_763_);
v___x_773_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___redArg(v___x_772_, v___y_760_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; uint8_t v___x_775_; 
lean_inc_ref(v_dontRevert_761_);
lean_inc(v___x_772_);
v___x_774_ = lean_apply_1(v_dontRevert_761_, v___x_772_);
v___x_775_ = lean_unbox(v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; 
lean_inc(v___x_772_);
v___x_776_ = lean_array_push(v_b_765_, v___x_772_);
v___y_767_ = v___x_776_;
goto v___jp_766_;
}
else
{
v___y_767_ = v_b_765_;
goto v___jp_766_;
}
}
else
{
v___y_767_ = v_b_765_;
goto v___jp_766_;
}
}
else
{
lean_dec_ref(v_dontRevert_761_);
return v_b_765_;
}
v___jp_766_:
{
size_t v___x_768_; size_t v___x_769_; 
v___x_768_ = ((size_t)1ULL);
v___x_769_ = lean_usize_add(v_i_763_, v___x_768_);
v_i_763_ = v___x_769_;
v_b_765_ = v___y_767_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3___boxed(lean_object* v___y_777_, lean_object* v_dontRevert_778_, lean_object* v_as_779_, lean_object* v_i_780_, lean_object* v_stop_781_, lean_object* v_b_782_){
_start:
{
size_t v_i_boxed_783_; size_t v_stop_boxed_784_; lean_object* v_res_785_; 
v_i_boxed_783_ = lean_unbox_usize(v_i_780_);
lean_dec(v_i_780_);
v_stop_boxed_784_ = lean_unbox_usize(v_stop_781_);
lean_dec(v_stop_781_);
v_res_785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(v___y_777_, v_dontRevert_778_, v_as_779_, v_i_boxed_783_, v_stop_boxed_784_, v_b_782_);
lean_dec_ref(v_as_779_);
lean_dec(v___y_777_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(size_t v_sz_786_, size_t v_i_787_, lean_object* v_bs_788_){
_start:
{
uint8_t v___x_789_; 
v___x_789_ = lean_usize_dec_lt(v_i_787_, v_sz_786_);
if (v___x_789_ == 0)
{
return v_bs_788_;
}
else
{
lean_object* v_v_790_; lean_object* v___x_791_; lean_object* v_bs_x27_792_; lean_object* v___x_793_; size_t v___x_794_; size_t v___x_795_; lean_object* v___x_796_; 
v_v_790_ = lean_array_uget(v_bs_788_, v_i_787_);
v___x_791_ = lean_unsigned_to_nat(0u);
v_bs_x27_792_ = lean_array_uset(v_bs_788_, v_i_787_, v___x_791_);
v___x_793_ = l_Lean_mkFVar(v_v_790_);
v___x_794_ = ((size_t)1ULL);
v___x_795_ = lean_usize_add(v_i_787_, v___x_794_);
v___x_796_ = lean_array_uset(v_bs_x27_792_, v_i_787_, v___x_793_);
v_i_787_ = v___x_795_;
v_bs_788_ = v___x_796_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1___boxed(lean_object* v_sz_798_, lean_object* v_i_799_, lean_object* v_bs_800_){
_start:
{
size_t v_sz_boxed_801_; size_t v_i_boxed_802_; lean_object* v_res_803_; 
v_sz_boxed_801_ = lean_unbox_usize(v_sz_798_);
lean_dec(v_sz_798_);
v_i_boxed_802_ = lean_unbox_usize(v_i_799_);
lean_dec(v_i_799_);
v_res_803_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(v_sz_boxed_801_, v_i_boxed_802_, v_bs_800_);
return v_res_803_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_806_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__0));
v___x_807_ = lean_box(1);
v___x_808_ = l_Lean_CollectFVars_State_ofFVarSet(v___x_807_, v___x_806_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg(lean_object* v_dontRevert_809_, lean_object* v_a_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___x_816_; lean_object* v___y_818_; size_t v___y_819_; lean_object* v___y_820_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___y_831_; lean_object* v___y_832_; size_t v___y_833_; lean_object* v___y_834_; lean_object* v___x_840_; lean_object* v___y_842_; lean_object* v___y_843_; size_t v___y_844_; lean_object* v___y_845_; uint8_t v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; 
v___x_816_ = lean_unsigned_to_nat(0u);
v___x_828_ = lean_box(1);
v___x_829_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__0));
v___x_840_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1);
v___x_850_ = 0;
v___x_851_ = 1;
lean_inc_ref(v_a_810_);
v___x_852_ = l_Lean_Meta_collectForwardDeps(v_a_810_, v___x_850_, v___x_851_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_885_; 
v_a_853_ = lean_ctor_get(v___x_852_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_885_ == 0)
{
v___x_855_ = v___x_852_;
v_isShared_856_ = v_isSharedCheck_885_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_852_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_885_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___y_858_; lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_880_ = lean_array_get_size(v_a_853_);
v___x_881_ = lean_nat_dec_lt(v___x_816_, v___x_880_);
if (v___x_881_ == 0)
{
lean_dec(v_a_853_);
v___y_858_ = v___x_829_;
goto v___jp_857_;
}
else
{
size_t v___x_882_; size_t v___x_883_; lean_object* v___x_884_; 
v___x_882_ = ((size_t)0ULL);
v___x_883_ = lean_usize_of_nat(v___x_880_);
lean_inc_ref(v_dontRevert_809_);
v___x_884_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6(v_dontRevert_809_, v_a_853_, v___x_882_, v___x_883_, v___x_829_);
lean_dec(v_a_853_);
v___y_858_ = v___x_884_;
goto v___jp_857_;
}
v___jp_857_:
{
lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_859_ = lean_array_get_size(v___y_858_);
v___x_860_ = lean_array_get_size(v_a_810_);
lean_dec_ref(v_a_810_);
v___x_861_ = lean_nat_dec_eq(v___x_859_, v___x_860_);
if (v___x_861_ == 0)
{
size_t v_sz_862_; size_t v___x_863_; lean_object* v___x_864_; 
lean_del_object(v___x_855_);
v_sz_862_ = lean_array_size(v___y_858_);
v___x_863_ = ((size_t)0ULL);
lean_inc_ref(v___y_858_);
v___x_864_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0(v_sz_862_, v___x_863_, v___y_858_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; uint8_t v___x_866_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = lean_nat_dec_lt(v___x_816_, v___x_859_);
if (v___x_866_ == 0)
{
v___y_842_ = v_a_865_;
v___y_843_ = v___y_858_;
v___y_844_ = v___x_863_;
v___y_845_ = v___x_828_;
goto v___jp_841_;
}
else
{
size_t v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_usize_of_nat(v___x_859_);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(v___y_858_, v___x_863_, v___x_867_, v___x_828_);
v___y_842_ = v_a_865_;
v___y_843_ = v___y_858_;
v___y_844_ = v___x_863_;
v___y_845_ = v___x_868_;
goto v___jp_841_;
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
lean_dec_ref(v___y_858_);
lean_dec_ref(v_dontRevert_809_);
v_a_869_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_864_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_864_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
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
else
{
lean_object* v___x_878_; 
lean_dec_ref(v_dontRevert_809_);
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v___y_858_);
v___x_878_ = v___x_855_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___y_858_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_810_);
lean_dec_ref(v_dontRevert_809_);
return v___x_852_;
}
v___jp_817_:
{
size_t v_sz_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; uint8_t v___x_825_; 
v_sz_821_ = lean_array_size(v___y_820_);
lean_inc_ref(v___y_820_);
v___x_822_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(v_sz_821_, v___y_819_, v___y_820_);
v___x_823_ = l_Array_append___redArg(v___y_818_, v___x_822_);
lean_dec_ref(v___x_822_);
v___x_824_ = lean_array_get_size(v___y_820_);
lean_dec_ref(v___y_820_);
v___x_825_ = lean_nat_dec_eq(v___x_824_, v___x_816_);
if (v___x_825_ == 0)
{
v_a_810_ = v___x_823_;
goto _start;
}
else
{
lean_object* v___x_827_; 
lean_dec_ref(v_dontRevert_809_);
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_823_);
return v___x_827_;
}
}
v___jp_830_:
{
lean_object* v_fvarIds_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v_fvarIds_835_ = lean_ctor_get(v___y_834_, 2);
lean_inc_ref(v_fvarIds_835_);
lean_dec_ref(v___y_834_);
v___x_836_ = lean_array_get_size(v_fvarIds_835_);
v___x_837_ = lean_nat_dec_lt(v___x_816_, v___x_836_);
if (v___x_837_ == 0)
{
lean_dec_ref(v_fvarIds_835_);
lean_dec(v___y_832_);
v___y_818_ = v___y_831_;
v___y_819_ = v___y_833_;
v___y_820_ = v___x_829_;
goto v___jp_817_;
}
else
{
size_t v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_usize_of_nat(v___x_836_);
lean_inc_ref(v_dontRevert_809_);
v___x_839_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(v___y_832_, v_dontRevert_809_, v_fvarIds_835_, v___y_833_, v___x_838_, v___x_829_);
lean_dec_ref(v_fvarIds_835_);
lean_dec(v___y_832_);
v___y_818_ = v___y_831_;
v___y_819_ = v___y_833_;
v___y_820_ = v___x_839_;
goto v___jp_817_;
}
}
v___jp_841_:
{
lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_846_ = lean_array_get_size(v___y_842_);
v___x_847_ = lean_nat_dec_lt(v___x_816_, v___x_846_);
if (v___x_847_ == 0)
{
lean_dec_ref(v___y_842_);
v___y_831_ = v___y_843_;
v___y_832_ = v___y_845_;
v___y_833_ = v___y_844_;
v___y_834_ = v___x_840_;
goto v___jp_830_;
}
else
{
size_t v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_usize_of_nat(v___x_846_);
v___x_849_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(v___y_842_, v___y_844_, v___x_848_, v___x_840_);
lean_dec_ref(v___y_842_);
v___y_831_ = v___y_843_;
v___y_832_ = v___y_845_;
v___y_833_ = v___y_844_;
v___y_834_ = v___x_849_;
goto v___jp_830_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___boxed(lean_object* v_dontRevert_886_, lean_object* v_a_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg(v_dontRevert_886_, v_a_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(lean_object* v_e_894_, lean_object* v_dontRevert_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
lean_object* v___y_902_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v_fvarIds_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_907_ = lean_unsigned_to_nat(0u);
v___x_908_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__0));
v___x_909_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg___closed__1);
v___x_910_ = l_Lean_collectFVars(v___x_909_, v_e_894_);
v_fvarIds_911_ = lean_ctor_get(v___x_910_, 2);
lean_inc_ref(v_fvarIds_911_);
lean_dec_ref(v___x_910_);
v___x_912_ = lean_array_get_size(v_fvarIds_911_);
v___x_913_ = lean_nat_dec_lt(v___x_907_, v___x_912_);
if (v___x_913_ == 0)
{
lean_dec_ref(v_fvarIds_911_);
v___y_902_ = v___x_908_;
goto v___jp_901_;
}
else
{
size_t v___x_914_; size_t v___x_915_; lean_object* v___x_916_; 
v___x_914_ = ((size_t)0ULL);
v___x_915_ = lean_usize_of_nat(v___x_912_);
lean_inc_ref(v_dontRevert_895_);
v___x_916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__8(v_dontRevert_895_, v_fvarIds_911_, v___x_914_, v___x_915_, v___x_908_);
lean_dec_ref(v_fvarIds_911_);
v___y_902_ = v___x_916_;
goto v___jp_901_;
}
v___jp_901_:
{
size_t v_sz_903_; size_t v___x_904_; lean_object* v_xs_905_; lean_object* v___x_906_; 
v_sz_903_ = lean_array_size(v___y_902_);
v___x_904_ = ((size_t)0ULL);
v_xs_905_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(v_sz_903_, v___x_904_, v___y_902_);
v___x_906_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg(v_dontRevert_895_, v_xs_905_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
return v___x_906_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___boxed(lean_object* v_e_917_, lean_object* v_dontRevert_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(v_e_917_, v_dontRevert_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
return v_res_924_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(lean_object* v_00_u03b2_925_, lean_object* v_k_926_, lean_object* v_t_927_){
_start:
{
uint8_t v___x_928_; 
v___x_928_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___redArg(v_k_926_, v_t_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___boxed(lean_object* v_00_u03b2_929_, lean_object* v_k_930_, lean_object* v_t_931_){
_start:
{
uint8_t v_res_932_; lean_object* v_r_933_; 
v_res_932_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(v_00_u03b2_929_, v_k_930_, v_t_931_);
lean_dec(v_t_931_);
lean_dec(v_k_930_);
v_r_933_ = lean_box(v_res_932_);
return v_r_933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7(lean_object* v_dontRevert_934_, lean_object* v_inst_935_, lean_object* v_a_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___redArg(v_dontRevert_934_, v_a_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7___boxed(lean_object* v_dontRevert_943_, lean_object* v_inst_944_, lean_object* v_a_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__7(v_dontRevert_943_, v_inst_944_, v_a_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(lean_object* v_a_958_, lean_object* v___x_959_, lean_object* v___x_960_, lean_object* v_i_961_, lean_object* v_a_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v_zero_968_; uint8_t v_isZero_969_; 
v_zero_968_ = lean_unsigned_to_nat(0u);
v_isZero_969_ = lean_nat_dec_eq(v_i_961_, v_zero_968_);
if (v_isZero_969_ == 1)
{
lean_object* v___x_970_; 
lean_dec(v_i_961_);
lean_dec(v___x_960_);
lean_dec_ref(v___x_959_);
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v_a_962_);
return v___x_970_;
}
else
{
lean_object* v_one_971_; lean_object* v_n_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_one_971_ = lean_unsigned_to_nat(1u);
v_n_972_ = lean_nat_sub(v_i_961_, v_one_971_);
lean_dec(v_i_961_);
v___x_973_ = lean_array_fget_borrowed(v_a_958_, v_n_972_);
lean_inc_ref(v___x_959_);
v___x_974_ = l_Lean_LocalContext_getFVar_x21(v___x_959_, v___x_973_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_userName_975_; lean_object* v_type_976_; uint8_t v_bi_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v_userName_975_ = lean_ctor_get(v___x_974_, 2);
lean_inc(v_userName_975_);
v_type_976_ = lean_ctor_get(v___x_974_, 3);
lean_inc_ref(v_type_976_);
v_bi_977_ = lean_ctor_get_uint8(v___x_974_, sizeof(void*)*4);
lean_dec_ref_known(v___x_974_, 4);
v___x_978_ = l_Lean_Expr_headBeta(v_type_976_);
v___x_979_ = lean_expr_abstract_range(v___x_978_, v_n_972_, v_a_958_);
lean_dec_ref(v___x_978_);
lean_inc_ref(v___x_979_);
v___x_980_ = l_Lean_Meta_getLevel(v___x_979_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v___x_982_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1));
v___x_983_ = lean_box(0);
lean_inc_n(v___x_960_, 2);
v___x_984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_984_, 0, v___x_960_);
lean_ctor_set(v___x_984_, 1, v___x_983_);
v___x_985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_985_, 0, v_a_981_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = l_Lean_mkConst(v___x_982_, v___x_985_);
v___x_987_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v___x_960_);
lean_inc_ref(v___x_979_);
v___x_988_ = l_Lean_mkLambda(v_userName_975_, v_bi_977_, v___x_979_, v_a_962_);
v___x_989_ = l_Lean_mkApp3(v___x_986_, v___x_979_, v___x_987_, v___x_988_);
v_i_961_ = v_n_972_;
v_a_962_ = v___x_989_;
goto _start;
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v___x_979_);
lean_dec(v_userName_975_);
lean_dec(v_n_972_);
lean_dec_ref(v_a_962_);
lean_dec(v___x_960_);
lean_dec_ref(v___x_959_);
v_a_991_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_980_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_980_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
else
{
uint8_t v_nondep_999_; 
v_nondep_999_ = lean_ctor_get_uint8(v___x_974_, sizeof(void*)*5);
if (v_nondep_999_ == 0)
{
lean_object* v_userName_1000_; lean_object* v_type_1001_; lean_object* v_value_1002_; uint8_t v___x_1003_; 
v_userName_1000_ = lean_ctor_get(v___x_974_, 2);
lean_inc(v_userName_1000_);
v_type_1001_ = lean_ctor_get(v___x_974_, 3);
lean_inc_ref(v_type_1001_);
v_value_1002_ = lean_ctor_get(v___x_974_, 4);
lean_inc_ref(v_value_1002_);
lean_dec_ref_known(v___x_974_, 5);
v___x_1003_ = lean_expr_has_loose_bvar(v_a_962_, v_zero_968_);
if (v___x_1003_ == 0)
{
lean_object* v___x_1004_; 
lean_dec_ref(v_value_1002_);
lean_dec_ref(v_type_1001_);
lean_dec(v_userName_1000_);
v___x_1004_ = lean_expr_lower_loose_bvars(v_a_962_, v_one_971_, v_one_971_);
lean_dec_ref(v_a_962_);
v_i_961_ = v_n_972_;
v_a_962_ = v___x_1004_;
goto _start;
}
else
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1006_ = l_Lean_Expr_headBeta(v_type_1001_);
v___x_1007_ = lean_expr_abstract_range(v___x_1006_, v_n_972_, v_a_958_);
lean_dec_ref(v___x_1006_);
v___x_1008_ = lean_expr_abstract_range(v_value_1002_, v_n_972_, v_a_958_);
lean_dec_ref(v_value_1002_);
v___x_1009_ = l_Lean_Expr_letE___override(v_userName_1000_, v___x_1007_, v___x_1008_, v_a_962_, v_nondep_999_);
v_i_961_ = v_n_972_;
v_a_962_ = v___x_1009_;
goto _start;
}
}
else
{
lean_object* v_userName_1011_; lean_object* v_type_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_userName_1011_ = lean_ctor_get(v___x_974_, 2);
lean_inc(v_userName_1011_);
v_type_1012_ = lean_ctor_get(v___x_974_, 3);
lean_inc_ref(v_type_1012_);
lean_dec_ref_known(v___x_974_, 5);
v___x_1013_ = l_Lean_Expr_headBeta(v_type_1012_);
v___x_1014_ = lean_expr_abstract_range(v___x_1013_, v_n_972_, v_a_958_);
lean_dec_ref(v___x_1013_);
lean_inc_ref(v___x_1014_);
v___x_1015_ = l_Lean_Meta_getLevel(v___x_1014_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_a_1016_);
lean_dec_ref_known(v___x_1015_, 1);
v___x_1017_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1));
v___x_1018_ = lean_box(0);
lean_inc_n(v___x_960_, 2);
v___x_1019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_960_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1020_, 0, v_a_1016_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = l_Lean_mkConst(v___x_1017_, v___x_1020_);
v___x_1022_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v___x_960_);
v___x_1023_ = 0;
lean_inc_ref(v___x_1014_);
v___x_1024_ = l_Lean_mkLambda(v_userName_1011_, v___x_1023_, v___x_1014_, v_a_962_);
v___x_1025_ = l_Lean_mkApp3(v___x_1021_, v___x_1014_, v___x_1022_, v___x_1024_);
v_i_961_ = v_n_972_;
v_a_962_ = v___x_1025_;
goto _start;
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec_ref(v___x_1014_);
lean_dec(v_userName_1011_);
lean_dec(v_n_972_);
lean_dec_ref(v_a_962_);
lean_dec(v___x_960_);
lean_dec_ref(v___x_959_);
v_a_1027_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1015_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1015_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___boxed(lean_object* v_a_1035_, lean_object* v___x_1036_, lean_object* v___x_1037_, lean_object* v_i_1038_, lean_object* v_a_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(v_a_1035_, v___x_1036_, v___x_1037_, v_i_1038_, v_a_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec_ref(v_a_1035_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept(lean_object* v_e_1050_, lean_object* v_dontRevert_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = lean_box(0);
lean_inc_ref(v_e_1050_);
v___x_1058_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(v_e_1050_, v_dontRevert_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v_lctx_1060_; lean_object* v___x_1061_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_a_1059_);
lean_dec_ref_known(v___x_1058_, 1);
v_lctx_1060_ = lean_ctor_get(v_a_1052_, 2);
lean_inc(v_a_1055_);
lean_inc_ref(v_a_1054_);
lean_inc(v_a_1053_);
lean_inc_ref(v_a_1052_);
lean_inc_ref(v_e_1050_);
v___x_1061_ = lean_infer_type(v_e_1050_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1083_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1064_ = v___x_1061_;
v_isShared_1065_ = v_isSharedCheck_1083_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1061_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1083_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1066_; uint8_t v___x_1067_; 
v___x_1066_ = l_Lean_Expr_cleanupAnnotations(v_a_1062_);
lean_dec(v_a_1062_);
v___x_1067_ = l_Lean_Expr_isApp(v___x_1066_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1069_; 
lean_dec_ref(v___x_1066_);
lean_dec(v_a_1059_);
if (v_isShared_1065_ == 0)
{
lean_ctor_set(v___x_1064_, 0, v_e_1050_);
v___x_1069_ = v___x_1064_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_e_1050_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v___x_1071_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1066_);
lean_dec_ref(v___x_1066_);
v___x_1072_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0));
v___x_1073_ = l_Lean_Expr_isConstOf(v___x_1071_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1075_; 
lean_dec_ref(v___x_1071_);
lean_dec(v_a_1059_);
if (v_isShared_1065_ == 0)
{
lean_ctor_set(v___x_1064_, 0, v_e_1050_);
v___x_1075_ = v___x_1064_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_e_1050_);
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
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
lean_del_object(v___x_1064_);
v___x_1077_ = l_Lean_Expr_constLevels_x21(v___x_1071_);
lean_dec_ref(v___x_1071_);
v___x_1078_ = lean_unsigned_to_nat(0u);
v___x_1079_ = l_List_get_x21Internal___redArg(v___x_1057_, v___x_1077_, v___x_1078_);
lean_dec(v___x_1077_);
v___x_1080_ = lean_array_get_size(v_a_1059_);
v___x_1081_ = lean_expr_abstract(v_e_1050_, v_a_1059_);
lean_dec_ref(v_e_1050_);
lean_inc_ref(v_lctx_1060_);
v___x_1082_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(v_a_1059_, v_lctx_1060_, v___x_1079_, v___x_1080_, v___x_1081_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
lean_dec(v_a_1059_);
return v___x_1082_;
}
}
}
}
else
{
lean_dec(v_a_1059_);
lean_dec_ref(v_e_1050_);
return v___x_1061_;
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec_ref(v_e_1050_);
v_a_1084_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1058_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1058_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___boxed(lean_object* v_e_1092_, lean_object* v_dontRevert_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept(v_e_1092_, v_dontRevert_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
lean_dec(v_a_1097_);
lean_dec_ref(v_a_1096_);
lean_dec(v_a_1095_);
lean_dec_ref(v_a_1094_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0(lean_object* v_a_1100_, lean_object* v___x_1101_, lean_object* v___x_1102_, lean_object* v_n_1103_, lean_object* v_i_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(v_a_1100_, v___x_1101_, v___x_1102_, v_i_1104_, v_a_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___boxed(lean_object* v_a_1113_, lean_object* v___x_1114_, lean_object* v___x_1115_, lean_object* v_n_1116_, lean_object* v_i_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0(v_a_1113_, v___x_1114_, v___x_1115_, v_n_1116_, v_i_1117_, v_a_1118_, v_a_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v_n_1116_);
lean_dec_ref(v_a_1113_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(lean_object* v_lvl_1132_, lean_object* v_lhs_1133_, lean_object* v_rhs_1134_){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1135_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1));
v___x_1136_ = lean_box(0);
lean_inc(v_lvl_1132_);
v___x_1137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1137_, 0, v_lvl_1132_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = l_Lean_mkConst(v___x_1135_, v___x_1137_);
v___x_1139_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_lvl_1132_);
v___x_1140_ = l_Lean_mkApp3(v___x_1138_, v___x_1139_, v_lhs_1133_, v_rhs_1134_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr(lean_object* v_lvl_1147_, lean_object* v_lhs_1148_, lean_object* v_rhs_1149_){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1150_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1));
v___x_1151_ = lean_box(0);
lean_inc(v_lvl_1147_);
v___x_1152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1152_, 0, v_lvl_1147_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = l_Lean_mkConst(v___x_1150_, v___x_1152_);
v___x_1154_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_lvl_1147_);
v___x_1155_ = l_Lean_mkApp3(v___x_1153_, v___x_1154_, v_lhs_1148_, v_rhs_1149_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(lean_object* v_p_1156_){
_start:
{
lean_object* v_lvl_1157_; lean_object* v_cursorPred_1158_; lean_object* v_letMutsPred_1159_; lean_object* v___x_1160_; 
v_lvl_1157_ = lean_ctor_get(v_p_1156_, 0);
lean_inc(v_lvl_1157_);
v_cursorPred_1158_ = lean_ctor_get(v_p_1156_, 1);
lean_inc_ref(v_cursorPred_1158_);
v_letMutsPred_1159_ = lean_ctor_get(v_p_1156_, 2);
lean_inc_ref(v_letMutsPred_1159_);
lean_dec_ref(v_p_1156_);
v___x_1160_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(v_lvl_1157_, v_cursorPred_1158_, v_letMutsPred_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx___impl(lean_object* v_x_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_obj_tag_nat(v_x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx___impl___boxed(lean_object* v_x_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx___impl(v_x_1163_);
lean_dec(v_x_1163_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(lean_object* v_t_1165_, lean_object* v_k_1166_){
_start:
{
if (lean_obj_tag(v_t_1165_) == 3)
{
lean_object* v_e_1167_; lean_object* v___x_1168_; 
v_e_1167_ = lean_ctor_get(v_t_1165_, 0);
lean_inc_ref(v_e_1167_);
lean_dec_ref_known(v_t_1165_, 1);
v___x_1168_ = lean_apply_1(v_k_1166_, v_e_1167_);
return v___x_1168_;
}
else
{
lean_dec(v_t_1165_);
return v_k_1166_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim(lean_object* v_motive_1169_, lean_object* v_ctorIdx_1170_, lean_object* v_t_1171_, lean_object* v_h_1172_, lean_object* v_k_1173_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1171_, v_k_1173_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___boxed(lean_object* v_motive_1175_, lean_object* v_ctorIdx_1176_, lean_object* v_t_1177_, lean_object* v_h_1178_, lean_object* v_k_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim(v_motive_1175_, v_ctorIdx_1176_, v_t_1177_, v_h_1178_, v_k_1179_);
lean_dec(v_ctorIdx_1176_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim___redArg(lean_object* v_t_1181_, lean_object* v_punit_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1181_, v_punit_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim(lean_object* v_motive_1184_, lean_object* v_t_1185_, lean_object* v_h_1186_, lean_object* v_punit_1187_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1185_, v_punit_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim___redArg(lean_object* v_t_1189_, lean_object* v_false_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1189_, v_false_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim(lean_object* v_motive_1192_, lean_object* v_t_1193_, lean_object* v_h_1194_, lean_object* v_false_1195_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1193_, v_false_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim___redArg(lean_object* v_t_1197_, lean_object* v_true_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1197_, v_true_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim(lean_object* v_motive_1200_, lean_object* v_t_1201_, lean_object* v_h_1202_, lean_object* v_true_1203_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1201_, v_true_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim___redArg(lean_object* v_t_1205_, lean_object* v_other_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1205_, v_other_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim(lean_object* v_motive_1208_, lean_object* v_t_1209_, lean_object* v_h_1210_, lean_object* v_other_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1209_, v_other_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(lean_object* v_a_1213_){
_start:
{
lean_object* v_snd_1215_; lean_object* v_fst_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1255_; 
v_snd_1215_ = lean_ctor_get(v_a_1213_, 1);
v_fst_1216_ = lean_ctor_get(v_a_1213_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_a_1213_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1218_ = v_a_1213_;
v_isShared_1219_ = v_isSharedCheck_1255_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_snd_1215_);
lean_inc(v_fst_1216_);
lean_dec(v_a_1213_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1255_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v_fst_1220_; lean_object* v_snd_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1254_; 
v_fst_1220_ = lean_ctor_get(v_snd_1215_, 0);
v_snd_1221_ = lean_ctor_get(v_snd_1215_, 1);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_snd_1215_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1223_ = v_snd_1215_;
v_isShared_1224_ = v_isSharedCheck_1254_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_snd_1221_);
lean_inc(v_fst_1220_);
lean_dec(v_snd_1215_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1254_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1225_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_1226_ = lean_unsigned_to_nat(4u);
v___x_1227_ = l_Lean_Expr_isAppOfArity(v_fst_1220_, v___x_1225_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1229_; 
if (v_isShared_1224_ == 0)
{
v___x_1229_ = v___x_1223_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_fst_1220_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_snd_1221_);
v___x_1229_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1231_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v___x_1229_);
v___x_1231_ = v___x_1218_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_fst_1216_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1232_; 
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
}
}
else
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1235_ = lean_unsigned_to_nat(2u);
v___x_1236_ = l_Lean_Expr_getAppNumArgs(v_fst_1220_);
v___x_1237_ = lean_nat_sub(v___x_1236_, v___x_1235_);
v___x_1238_ = lean_unsigned_to_nat(1u);
v___x_1239_ = lean_nat_sub(v___x_1237_, v___x_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = l_Lean_Expr_getRevArg_x21(v_fst_1220_, v___x_1239_);
v___x_1241_ = lean_array_push(v_snd_1221_, v___x_1240_);
v___x_1242_ = lean_nat_add(v_fst_1216_, v___x_1238_);
lean_dec(v_fst_1216_);
v___x_1243_ = lean_unsigned_to_nat(3u);
v___x_1244_ = lean_nat_sub(v___x_1236_, v___x_1243_);
lean_dec(v___x_1236_);
v___x_1245_ = lean_nat_sub(v___x_1244_, v___x_1238_);
lean_dec(v___x_1244_);
v___x_1246_ = l_Lean_Expr_getRevArg_x21(v_fst_1220_, v___x_1245_);
lean_dec(v_fst_1220_);
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 1, v___x_1241_);
lean_ctor_set(v___x_1223_, 0, v___x_1246_);
v___x_1248_ = v___x_1223_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___x_1246_);
lean_ctor_set(v_reuseFailAlloc_1253_, 1, v___x_1241_);
v___x_1248_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1250_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v___x_1248_);
lean_ctor_set(v___x_1218_, 0, v___x_1242_);
v___x_1250_ = v___x_1218_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v___x_1248_);
v___x_1250_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
v_a_1213_ = v___x_1250_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg___boxed(lean_object* v_a_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(v_a_1256_);
return v_res_1258_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1(lean_object* v_letMutsTuple_1259_, lean_object* v___x_1260_, lean_object* v_fvarId_1261_){
_start:
{
lean_object* v___x_1262_; uint8_t v___x_1263_; 
v___x_1262_ = l_Lean_Expr_fvarId_x21(v_letMutsTuple_1259_);
v___x_1263_ = l_Lean_instBEqFVarId_beq(v_fvarId_1261_, v___x_1262_);
lean_dec(v___x_1262_);
if (v___x_1263_ == 0)
{
uint8_t v___x_1264_; 
v___x_1264_ = l_Lean_LocalContext_contains(v___x_1260_, v_fvarId_1261_);
return v___x_1264_;
}
else
{
return v___x_1263_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1___boxed(lean_object* v_letMutsTuple_1265_, lean_object* v___x_1266_, lean_object* v_fvarId_1267_){
_start:
{
uint8_t v_res_1268_; lean_object* v_r_1269_; 
v_res_1268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1(v_letMutsTuple_1265_, v___x_1266_, v_fvarId_1267_);
lean_dec(v_fvarId_1267_);
lean_dec_ref(v___x_1266_);
lean_dec_ref(v_letMutsTuple_1265_);
v_r_1269_ = lean_box(v_res_1268_);
return v_r_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(lean_object* v_fst_1270_, lean_object* v_p_1271_){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
lean_inc(v_fst_1270_);
v___x_1272_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_fst_1270_);
v___x_1273_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_fst_1270_, v___x_1272_, v_p_1271_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(lean_object* v_inv_1303_, lean_object* v___x_1304_, lean_object* v_xs_1305_, lean_object* v_letMuts_1306_, lean_object* v_as_1307_, size_t v_sz_1308_, size_t v_i_1309_, lean_object* v_b_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_a_1317_; uint8_t v___x_1321_; 
v___x_1321_ = lean_usize_dec_lt(v_i_1309_, v_sz_1308_);
if (v___x_1321_ == 0)
{
lean_object* v___x_1322_; 
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v___x_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1322_, 0, v_b_1310_);
return v___x_1322_;
}
else
{
lean_object* v_snd_1323_; lean_object* v_fst_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1636_; 
v_snd_1323_ = lean_ctor_get(v_b_1310_, 1);
v_fst_1324_ = lean_ctor_get(v_b_1310_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_b_1310_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1326_ = v_b_1310_;
v_isShared_1327_ = v_isSharedCheck_1636_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_snd_1323_);
lean_inc(v_fst_1324_);
lean_dec(v_b_1310_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1636_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v_fst_1328_; lean_object* v_snd_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1635_; 
v_fst_1328_ = lean_ctor_get(v_snd_1323_, 0);
v_snd_1329_ = lean_ctor_get(v_snd_1323_, 1);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_snd_1323_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1331_ = v_snd_1323_;
v_isShared_1332_ = v_isSharedCheck_1635_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_snd_1329_);
lean_inc(v_fst_1328_);
lean_dec(v_snd_1323_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1635_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v_a_1345_; lean_object* v___x_1346_; 
v___x_1342_ = lean_unsigned_to_nat(0u);
v___x_1343_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5));
v___x_1344_ = lean_box(0);
v_a_1345_ = lean_array_uget_borrowed(v_as_1307_, v_i_1309_);
lean_inc(v_a_1345_);
v___x_1346_ = l_Lean_MVarId_getType(v_a_1345_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1348_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1347_);
lean_dec_ref_known(v___x_1346_, 1);
v___x_1348_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_a_1347_, v___y_1312_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1350_; lean_object* v_prefixPoint_x3f_1352_; lean_object* v_suffixPoint_x3f_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v___x_1350_ = l_Lean_Expr_consumeMData(v_a_1349_);
lean_dec(v_a_1349_);
lean_inc_ref(v___x_1350_);
v___x_1461_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed), 6, 1);
lean_closure_set(v___x_1461_, 0, v___x_1350_);
lean_inc(v_a_1345_);
v___x_1462_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_a_1345_, v___x_1461_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
if (lean_obj_tag(v_a_1463_) == 1)
{
lean_object* v_val_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1610_; 
v_val_1464_ = lean_ctor_get(v_a_1463_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v_a_1463_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1466_ = v_a_1463_;
v_isShared_1467_ = v_isSharedCheck_1610_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_val_1464_);
lean_dec(v_a_1463_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1610_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v_snd_1468_; lean_object* v_fst_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1609_; 
v_snd_1468_ = lean_ctor_get(v_val_1464_, 1);
v_fst_1469_ = lean_ctor_get(v_val_1464_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v_val_1464_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1471_ = v_val_1464_;
v_isShared_1472_ = v_isSharedCheck_1609_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_snd_1468_);
lean_inc(v_fst_1469_);
lean_dec(v_val_1464_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1609_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v_fst_1473_; lean_object* v_snd_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1608_; 
v_fst_1473_ = lean_ctor_get(v_snd_1468_, 0);
v_snd_1474_ = lean_ctor_get(v_snd_1468_, 1);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_snd_1468_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1476_ = v_snd_1468_;
v_isShared_1477_ = v_isSharedCheck_1608_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_snd_1474_);
lean_inc(v_fst_1473_);
lean_dec(v_snd_1468_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1608_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v_prefixPoint_x3f_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___x_1557_; 
lean_inc(v_inv_1303_);
v___x_1557_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v_snd_1474_, v_inv_1303_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_invariantUse_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1607_; 
v_invariantUse_1558_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1560_ = v___x_1557_;
v_isShared_1561_ = v_isSharedCheck_1607_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_invariantUse_1558_);
lean_dec(v___x_1557_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1607_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v_conditionIdx_1562_; lean_object* v_cursorPrefix_1563_; lean_object* v_letMutsTuple_1564_; uint8_t v___x_1565_; 
v_conditionIdx_1562_ = lean_ctor_get(v_invariantUse_1558_, 0);
lean_inc(v_conditionIdx_1562_);
v_cursorPrefix_1563_ = lean_ctor_get(v_invariantUse_1558_, 1);
lean_inc_ref(v_cursorPrefix_1563_);
v_letMutsTuple_1564_ = lean_ctor_get(v_invariantUse_1558_, 4);
lean_inc_ref(v_letMutsTuple_1564_);
lean_dec_ref(v_invariantUse_1558_);
v___x_1565_ = lean_nat_dec_eq(v_conditionIdx_1562_, v___x_1342_);
lean_dec(v_conditionIdx_1562_);
if (v___x_1565_ == 0)
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
lean_dec_ref(v_letMutsTuple_1564_);
lean_dec_ref(v_cursorPrefix_1563_);
lean_del_object(v___x_1560_);
lean_del_object(v___x_1476_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1473_);
lean_del_object(v___x_1471_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_del_object(v___x_1326_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_fst_1328_);
lean_ctor_set(v___x_1566_, 1, v_snd_1329_);
v___x_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1567_, 0, v_fst_1324_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v_a_1317_ = v___x_1567_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4));
v___x_1569_ = l_Lean_Expr_isAppOf(v_cursorPrefix_1563_, v___x_1568_);
if (v___x_1569_ == 0)
{
lean_dec_ref(v_letMutsTuple_1564_);
lean_dec_ref(v_cursorPrefix_1563_);
lean_del_object(v___x_1560_);
v_prefixPoint_x3f_1479_ = v_fst_1324_;
v___y_1480_ = v___y_1311_;
v___y_1481_ = v___y_1312_;
v___y_1482_ = v___y_1313_;
v___y_1483_ = v___y_1314_;
goto v___jp_1478_;
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
lean_dec(v_fst_1324_);
v___x_1570_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__12));
lean_inc_ref(v_xs_1305_);
v___x_1571_ = l_Lean_Meta_mkProjection(v_xs_1305_, v___x_1570_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1573_; 
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___x_1571_, 1);
v___x_1573_ = l_Lean_Meta_mkEq(v_a_1572_, v_cursorPrefix_1563_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1575_; 
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_a_1574_);
lean_dec_ref_known(v___x_1573_, 1);
lean_inc_ref(v_letMuts_1306_);
v___x_1575_ = l_Lean_Meta_mkEq(v_letMuts_1306_, v_letMutsTuple_1564_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1581_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_a_1576_);
lean_dec_ref_known(v___x_1575_, 1);
lean_inc_n(v_fst_1469_, 3);
v___x_1577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(v_fst_1469_, v_a_1576_);
v___x_1578_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(v_fst_1469_, v_a_1574_);
v___x_1579_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1579_, 0, v_fst_1469_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
lean_ctor_set(v___x_1579_, 2, v___x_1577_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set_tag(v___x_1560_, 1);
lean_ctor_set(v___x_1560_, 0, v___x_1579_);
v___x_1581_ = v___x_1560_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1579_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
v_prefixPoint_x3f_1479_ = v___x_1581_;
v___y_1480_ = v___y_1311_;
v___y_1481_ = v___y_1312_;
v___y_1482_ = v___y_1313_;
v___y_1483_ = v___y_1314_;
goto v___jp_1478_;
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec(v_a_1574_);
lean_del_object(v___x_1560_);
lean_del_object(v___x_1476_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1473_);
lean_del_object(v___x_1471_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1583_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1575_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1575_);
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
else
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
lean_dec_ref(v_letMutsTuple_1564_);
lean_del_object(v___x_1560_);
lean_del_object(v___x_1476_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1473_);
lean_del_object(v___x_1471_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1591_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1573_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1573_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_dec_ref(v_letMutsTuple_1564_);
lean_dec_ref(v_cursorPrefix_1563_);
lean_del_object(v___x_1560_);
lean_del_object(v___x_1476_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1473_);
lean_del_object(v___x_1471_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1599_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1571_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1571_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_1557_);
v_prefixPoint_x3f_1479_ = v_fst_1324_;
v___y_1480_ = v___y_1311_;
v___y_1481_ = v___y_1312_;
v___y_1482_ = v___y_1313_;
v___y_1483_ = v___y_1314_;
goto v___jp_1478_;
}
v___jp_1478_:
{
lean_object* v___x_1484_; 
lean_inc(v_inv_1303_);
v___x_1484_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v_fst_1473_, v_inv_1303_);
lean_dec(v_fst_1473_);
if (lean_obj_tag(v___x_1484_) == 0)
{
lean_object* v_invariantUse_1485_; lean_object* v_conditionIdx_1486_; lean_object* v_cursorSuffix_1487_; lean_object* v_letMutsTuple_1488_; uint8_t v___x_1489_; 
v_invariantUse_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc_ref(v_invariantUse_1485_);
lean_dec_ref_known(v___x_1484_, 1);
v_conditionIdx_1486_ = lean_ctor_get(v_invariantUse_1485_, 0);
lean_inc(v_conditionIdx_1486_);
v_cursorSuffix_1487_ = lean_ctor_get(v_invariantUse_1485_, 2);
lean_inc_ref(v_cursorSuffix_1487_);
v_letMutsTuple_1488_ = lean_ctor_get(v_invariantUse_1485_, 4);
lean_inc_ref(v_letMutsTuple_1488_);
lean_dec_ref(v_invariantUse_1485_);
v___x_1489_ = lean_nat_dec_eq(v_conditionIdx_1486_, v___x_1342_);
lean_dec(v_conditionIdx_1486_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1491_; 
lean_dec_ref(v_letMutsTuple_1488_);
lean_dec_ref(v_cursorSuffix_1487_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_del_object(v___x_1326_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 1, v_snd_1329_);
lean_ctor_set(v___x_1476_, 0, v_fst_1328_);
v___x_1491_ = v___x_1476_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_fst_1328_);
lean_ctor_set(v_reuseFailAlloc_1495_, 1, v_snd_1329_);
v___x_1491_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1493_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 1, v___x_1491_);
lean_ctor_set(v___x_1471_, 0, v_prefixPoint_x3f_1479_);
v___x_1493_ = v___x_1471_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_prefixPoint_x3f_1479_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
v_a_1317_ = v___x_1493_;
goto v___jp_1316_;
}
}
}
else
{
lean_object* v___x_1496_; uint8_t v___x_1497_; 
lean_del_object(v___x_1476_);
lean_del_object(v___x_1471_);
v___x_1496_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4));
v___x_1497_ = l_Lean_Expr_isAppOf(v_cursorSuffix_1487_, v___x_1496_);
if (v___x_1497_ == 0)
{
lean_dec_ref(v_letMutsTuple_1488_);
lean_dec_ref(v_cursorSuffix_1487_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
v_prefixPoint_x3f_1352_ = v_prefixPoint_x3f_1479_;
v_suffixPoint_x3f_1353_ = v_fst_1328_;
v___y_1354_ = v___y_1480_;
v___y_1355_ = v___y_1481_;
v___y_1356_ = v___y_1482_;
v___y_1357_ = v___y_1483_;
goto v___jp_1351_;
}
else
{
uint8_t v___x_1498_; 
v___x_1498_ = l_Lean_Expr_isFVar(v_letMutsTuple_1488_);
if (v___x_1498_ == 0)
{
lean_dec_ref(v_letMutsTuple_1488_);
lean_dec_ref(v_cursorSuffix_1487_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
v_prefixPoint_x3f_1352_ = v_prefixPoint_x3f_1479_;
v_suffixPoint_x3f_1353_ = v_fst_1328_;
v___y_1354_ = v___y_1480_;
v___y_1355_ = v___y_1481_;
v___y_1356_ = v___y_1482_;
v___y_1357_ = v___y_1483_;
goto v___jp_1351_;
}
else
{
lean_object* v___f_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_inc_ref(v___x_1304_);
lean_inc_ref(v_letMutsTuple_1488_);
v___f_1499_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1___boxed), 3, 2);
lean_closure_set(v___f_1499_, 0, v_letMutsTuple_1488_);
lean_closure_set(v___f_1499_, 1, v___x_1304_);
v___x_1500_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10));
lean_inc_ref(v_xs_1305_);
v___x_1501_ = l_Lean_Meta_mkProjection(v_xs_1305_, v___x_1500_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = l_Lean_Meta_mkEq(v_a_1502_, v_cursorSuffix_1487_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___boxed), 7, 2);
lean_closure_set(v___x_1505_, 0, v_snd_1474_);
lean_closure_set(v___x_1505_, 1, v___f_1499_);
lean_inc(v_a_1345_);
v___x_1506_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_a_1345_, v___x_1505_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1508_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_a_1507_);
lean_dec_ref_known(v___x_1506_, 1);
v___x_1508_ = l_Lean_Expr_replaceFVar(v_a_1507_, v_letMutsTuple_1488_, v_letMuts_1306_);
lean_dec(v_a_1507_);
if (lean_obj_tag(v_fst_1328_) == 1)
{
lean_object* v_val_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1527_; 
lean_dec(v_a_1504_);
lean_del_object(v___x_1466_);
v_val_1509_ = lean_ctor_get(v_fst_1328_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v_fst_1328_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1511_ = v_fst_1328_;
v_isShared_1512_ = v_isSharedCheck_1527_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_val_1509_);
lean_dec(v_fst_1328_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1527_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
lean_object* v_lvl_1513_; lean_object* v_cursorPred_1514_; lean_object* v_letMutsPred_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1526_; 
v_lvl_1513_ = lean_ctor_get(v_val_1509_, 0);
v_cursorPred_1514_ = lean_ctor_get(v_val_1509_, 1);
v_letMutsPred_1515_ = lean_ctor_get(v_val_1509_, 2);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_val_1509_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1517_ = v_val_1509_;
v_isShared_1518_ = v_isSharedCheck_1526_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_letMutsPred_1515_);
lean_inc(v_cursorPred_1514_);
lean_inc(v_lvl_1513_);
lean_dec(v_val_1509_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1526_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1519_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(v_fst_1469_, v_letMutsPred_1515_, v___x_1508_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 2, v___x_1519_);
v___x_1521_ = v___x_1517_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_lvl_1513_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_cursorPred_1514_);
lean_ctor_set(v_reuseFailAlloc_1525_, 2, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1523_; 
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 0, v___x_1521_);
v___x_1523_ = v___x_1511_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1521_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
v_prefixPoint_x3f_1352_ = v_prefixPoint_x3f_1479_;
v_suffixPoint_x3f_1353_ = v___x_1523_;
v___y_1354_ = v___y_1480_;
v___y_1355_ = v___y_1481_;
v___y_1356_ = v___y_1482_;
v___y_1357_ = v___y_1483_;
goto v___jp_1351_;
}
}
}
}
}
else
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1531_; 
lean_dec(v_fst_1328_);
lean_inc(v_fst_1469_);
v___x_1528_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(v_fst_1469_, v_a_1504_);
v___x_1529_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1529_, 0, v_fst_1469_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
lean_ctor_set(v___x_1529_, 2, v___x_1508_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v___x_1529_);
v___x_1531_ = v___x_1466_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1529_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
v_prefixPoint_x3f_1352_ = v_prefixPoint_x3f_1479_;
v_suffixPoint_x3f_1353_ = v___x_1531_;
v___y_1354_ = v___y_1480_;
v___y_1355_ = v___y_1481_;
v___y_1356_ = v___y_1482_;
v___y_1357_ = v___y_1483_;
goto v___jp_1351_;
}
}
}
else
{
lean_object* v_a_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1540_; 
lean_dec(v_a_1504_);
lean_dec_ref(v_letMutsTuple_1488_);
lean_dec(v_prefixPoint_x3f_1479_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1533_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1540_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1535_ = v___x_1506_;
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_a_1533_);
lean_dec(v___x_1506_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1540_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1538_; 
if (v_isShared_1536_ == 0)
{
v___x_1538_ = v___x_1535_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_a_1533_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
else
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1548_; 
lean_dec_ref(v___f_1499_);
lean_dec_ref(v_letMutsTuple_1488_);
lean_dec(v_prefixPoint_x3f_1479_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1541_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1543_ = v___x_1503_;
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1503_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1548_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1546_; 
if (v_isShared_1544_ == 0)
{
v___x_1546_ = v___x_1543_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_a_1541_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
}
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
lean_dec_ref(v___f_1499_);
lean_dec_ref(v_letMutsTuple_1488_);
lean_dec_ref(v_cursorSuffix_1487_);
lean_dec(v_prefixPoint_x3f_1479_);
lean_dec(v_snd_1474_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1549_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1501_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1501_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_1484_);
lean_del_object(v___x_1476_);
lean_dec(v_snd_1474_);
lean_del_object(v___x_1471_);
lean_dec(v_fst_1469_);
lean_del_object(v___x_1466_);
v_prefixPoint_x3f_1352_ = v_prefixPoint_x3f_1479_;
v_suffixPoint_x3f_1353_ = v_fst_1328_;
v___y_1354_ = v___y_1480_;
v___y_1355_ = v___y_1481_;
v___y_1356_ = v___y_1482_;
v___y_1357_ = v___y_1483_;
goto v___jp_1351_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1463_);
v_prefixPoint_x3f_1352_ = v_fst_1324_;
v_suffixPoint_x3f_1353_ = v_fst_1328_;
v___y_1354_ = v___y_1311_;
v___y_1355_ = v___y_1312_;
v___y_1356_ = v___y_1313_;
v___y_1357_ = v___y_1314_;
goto v___jp_1351_;
}
}
else
{
lean_object* v_a_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec(v_fst_1324_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1611_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1613_ = v___x_1462_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_a_1611_);
lean_dec(v___x_1462_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
v___jp_1351_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; uint8_t v___x_1360_; 
v___x_1358_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1));
v___x_1359_ = lean_unsigned_to_nat(3u);
v___x_1360_ = l_Lean_Expr_isAppOfArity(v___x_1350_, v___x_1358_, v___x_1359_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
lean_dec_ref(v___x_1350_);
lean_del_object(v___x_1331_);
lean_del_object(v___x_1326_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v_suffixPoint_x3f_1353_);
lean_ctor_set(v___x_1361_, 1, v_snd_1329_);
v___x_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1362_, 0, v_prefixPoint_x3f_1352_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v_a_1317_ = v___x_1362_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1363_ = l_Lean_Expr_appFn_x21(v___x_1350_);
v___x_1364_ = l_Lean_Expr_appArg_x21(v___x_1363_);
lean_dec_ref(v___x_1363_);
v___x_1365_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1));
v___x_1366_ = l_Lean_Expr_isAppOfArity(v___x_1364_, v___x_1365_, v___x_1359_);
if (v___x_1366_ == 0)
{
lean_dec_ref(v___x_1364_);
lean_dec_ref(v___x_1350_);
v___y_1334_ = v_suffixPoint_x3f_1353_;
v___y_1335_ = v_prefixPoint_x3f_1352_;
goto v___jp_1333_;
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1367_ = lean_unsigned_to_nat(2u);
v___x_1368_ = l_Lean_Expr_getAppNumArgs(v___x_1364_);
v___x_1369_ = lean_nat_sub(v___x_1368_, v___x_1367_);
lean_dec(v___x_1368_);
v___x_1370_ = lean_unsigned_to_nat(1u);
v___x_1371_ = lean_nat_sub(v___x_1369_, v___x_1370_);
lean_dec(v___x_1369_);
v___x_1372_ = l_Lean_Expr_getRevArg_x21(v___x_1364_, v___x_1371_);
lean_dec_ref(v___x_1364_);
lean_inc(v_inv_1303_);
v___x_1373_ = l_Lean_mkMVar(v_inv_1303_);
v___x_1374_ = lean_expr_eqv(v___x_1372_, v___x_1373_);
lean_dec_ref(v___x_1373_);
lean_dec_ref(v___x_1372_);
if (v___x_1374_ == 0)
{
lean_dec_ref(v___x_1350_);
v___y_1334_ = v_suffixPoint_x3f_1353_;
v___y_1335_ = v_prefixPoint_x3f_1352_;
goto v___jp_1333_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_del_object(v___x_1331_);
lean_del_object(v___x_1326_);
v___x_1375_ = l_Lean_Expr_appArg_x21(v___x_1350_);
lean_dec_ref(v___x_1350_);
v___x_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
lean_ctor_set(v___x_1376_, 1, v___x_1343_);
v___x_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1342_);
lean_ctor_set(v___x_1377_, 1, v___x_1376_);
v___x_1378_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(v___x_1377_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v_snd_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1451_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v_snd_1380_ = lean_ctor_get(v_a_1379_, 1);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_a_1379_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; 
v_unused_1452_ = lean_ctor_get(v_a_1379_, 0);
lean_dec(v_unused_1452_);
v___x_1382_ = v_a_1379_;
v_isShared_1383_ = v_isSharedCheck_1451_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_snd_1380_);
lean_dec(v_a_1379_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1451_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v_fst_1384_; lean_object* v_snd_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1450_; 
v_fst_1384_ = lean_ctor_get(v_snd_1380_, 0);
v_snd_1385_ = lean_ctor_get(v_snd_1380_, 1);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_snd_1380_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1387_ = v_snd_1380_;
v_isShared_1388_ = v_isSharedCheck_1450_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_snd_1385_);
lean_inc(v_fst_1384_);
lean_dec(v_snd_1380_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1450_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v_points_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; uint8_t v___x_1392_; 
v_points_1389_ = lean_ctor_get(v_snd_1329_, 0);
v___x_1390_ = lean_array_get_size(v_points_1389_);
v___x_1391_ = lean_array_get_size(v_snd_1385_);
v___x_1392_ = lean_nat_dec_lt(v___x_1390_, v___x_1391_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1394_; 
lean_dec(v_snd_1385_);
lean_dec(v_fst_1384_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v_snd_1329_);
lean_ctor_set(v___x_1387_, 0, v_suffixPoint_x3f_1353_);
v___x_1394_ = v___x_1387_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_suffixPoint_x3f_1353_);
lean_ctor_set(v_reuseFailAlloc_1398_, 1, v_snd_1329_);
v___x_1394_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
lean_object* v___x_1396_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___x_1394_);
lean_ctor_set(v___x_1382_, 0, v_prefixPoint_x3f_1352_);
v___x_1396_ = v___x_1382_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_prefixPoint_x3f_1352_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
v_a_1317_ = v___x_1396_;
goto v___jp_1316_;
}
}
}
else
{
lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1447_; 
v_isSharedCheck_1447_ = !lean_is_exclusive(v_snd_1329_);
if (v_isSharedCheck_1447_ == 0)
{
lean_object* v_unused_1448_; lean_object* v_unused_1449_; 
v_unused_1448_ = lean_ctor_get(v_snd_1329_, 1);
lean_dec(v_unused_1448_);
v_unused_1449_ = lean_ctor_get(v_snd_1329_, 0);
lean_dec(v_unused_1449_);
v___x_1400_ = v_snd_1329_;
v_isShared_1401_ = v_isSharedCheck_1447_;
goto v_resetjp_1399_;
}
else
{
lean_dec(v_snd_1329_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1447_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4));
v___x_1403_ = l_Lean_Expr_isConstOf(v_fst_1384_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; uint8_t v___x_1405_; 
v___x_1404_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6));
v___x_1405_ = l_Lean_Expr_isAppOfArity(v_fst_1384_, v___x_1404_, v___x_1370_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; uint8_t v___x_1407_; 
v___x_1406_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8));
v___x_1407_ = l_Lean_Expr_isAppOfArity(v_fst_1384_, v___x_1406_, v___x_1370_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1408_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1408_, 0, v_fst_1384_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v___x_1408_);
lean_ctor_set(v___x_1400_, 0, v_snd_1385_);
v___x_1410_ = v___x_1400_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_snd_1385_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v___x_1408_);
v___x_1410_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
lean_object* v___x_1412_; 
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1410_);
lean_ctor_set(v___x_1387_, 0, v_suffixPoint_x3f_1353_);
v___x_1412_ = v___x_1387_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_suffixPoint_x3f_1353_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1414_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___x_1412_);
lean_ctor_set(v___x_1382_, 0, v_prefixPoint_x3f_1352_);
v___x_1414_ = v___x_1382_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_prefixPoint_x3f_1352_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
v_a_1317_ = v___x_1414_;
goto v___jp_1316_;
}
}
}
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
lean_dec(v_fst_1384_);
v___x_1418_ = lean_box(2);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v___x_1418_);
lean_ctor_set(v___x_1400_, 0, v_snd_1385_);
v___x_1420_ = v___x_1400_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_snd_1385_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1422_; 
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1420_);
lean_ctor_set(v___x_1387_, 0, v_suffixPoint_x3f_1353_);
v___x_1422_ = v___x_1387_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_suffixPoint_x3f_1353_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v___x_1420_);
v___x_1422_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1424_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___x_1422_);
lean_ctor_set(v___x_1382_, 0, v_prefixPoint_x3f_1352_);
v___x_1424_ = v___x_1382_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_prefixPoint_x3f_1352_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
v_a_1317_ = v___x_1424_;
goto v___jp_1316_;
}
}
}
}
}
else
{
lean_object* v___x_1428_; lean_object* v___x_1430_; 
lean_dec(v_fst_1384_);
v___x_1428_ = lean_box(1);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v___x_1428_);
lean_ctor_set(v___x_1400_, 0, v_snd_1385_);
v___x_1430_ = v___x_1400_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_snd_1385_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1432_; 
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1430_);
lean_ctor_set(v___x_1387_, 0, v_suffixPoint_x3f_1353_);
v___x_1432_ = v___x_1387_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_suffixPoint_x3f_1353_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v___x_1430_);
v___x_1432_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
lean_object* v___x_1434_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___x_1432_);
lean_ctor_set(v___x_1382_, 0, v_prefixPoint_x3f_1352_);
v___x_1434_ = v___x_1382_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_prefixPoint_x3f_1352_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
v_a_1317_ = v___x_1434_;
goto v___jp_1316_;
}
}
}
}
}
else
{
lean_object* v___x_1439_; 
lean_dec(v_fst_1384_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v___x_1344_);
lean_ctor_set(v___x_1400_, 0, v_snd_1385_);
v___x_1439_ = v___x_1400_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_snd_1385_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v___x_1344_);
v___x_1439_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1441_; 
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1439_);
lean_ctor_set(v___x_1387_, 0, v_suffixPoint_x3f_1353_);
v___x_1441_ = v___x_1387_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_suffixPoint_x3f_1353_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v___x_1439_);
v___x_1441_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1443_; 
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___x_1441_);
lean_ctor_set(v___x_1382_, 0, v_prefixPoint_x3f_1352_);
v___x_1443_ = v___x_1382_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_prefixPoint_x3f_1352_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
v_a_1317_ = v___x_1443_;
goto v___jp_1316_;
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
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec(v_suffixPoint_x3f_1353_);
lean_dec(v_prefixPoint_x3f_1352_);
lean_dec(v_snd_1329_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1453_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1378_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1378_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
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
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec(v_fst_1324_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1619_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1348_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1348_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_del_object(v___x_1331_);
lean_dec(v_snd_1329_);
lean_dec(v_fst_1328_);
lean_del_object(v___x_1326_);
lean_dec(v_fst_1324_);
lean_dec_ref(v_letMuts_1306_);
lean_dec_ref(v_xs_1305_);
lean_dec_ref(v___x_1304_);
lean_dec(v_inv_1303_);
v_a_1627_ = lean_ctor_get(v___x_1346_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1346_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1346_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1346_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
v___jp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 0, v___y_1334_);
v___x_1337_ = v___x_1331_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___y_1334_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v_snd_1329_);
v___x_1337_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
lean_object* v___x_1339_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v___x_1337_);
lean_ctor_set(v___x_1326_, 0, v___y_1335_);
v___x_1339_ = v___x_1326_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___y_1335_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
v_a_1317_ = v___x_1339_;
goto v___jp_1316_;
}
}
}
}
}
}
v___jp_1316_:
{
size_t v___x_1318_; size_t v___x_1319_; 
v___x_1318_ = ((size_t)1ULL);
v___x_1319_ = lean_usize_add(v_i_1309_, v___x_1318_);
v_i_1309_ = v___x_1319_;
v_b_1310_ = v_a_1317_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___boxed(lean_object* v_inv_1637_, lean_object* v___x_1638_, lean_object* v_xs_1639_, lean_object* v_letMuts_1640_, lean_object* v_as_1641_, lean_object* v_sz_1642_, lean_object* v_i_1643_, lean_object* v_b_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_){
_start:
{
size_t v_sz_boxed_1650_; size_t v_i_boxed_1651_; lean_object* v_res_1652_; 
v_sz_boxed_1650_ = lean_unbox_usize(v_sz_1642_);
lean_dec(v_sz_1642_);
v_i_boxed_1651_ = lean_unbox_usize(v_i_1643_);
lean_dec(v_i_1643_);
v_res_1652_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(v_inv_1637_, v___x_1638_, v_xs_1639_, v_letMuts_1640_, v_as_1641_, v_sz_boxed_1650_, v_i_boxed_1651_, v_b_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec_ref(v_as_1641_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(lean_object* v_vcs_1662_, lean_object* v_inv_1663_, lean_object* v_xs_1664_, lean_object* v_letMuts_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v_lctx_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; size_t v_sz_1674_; size_t v___x_1675_; lean_object* v___x_1676_; 
v_lctx_1671_ = lean_ctor_get(v_a_1666_, 2);
v___x_1672_ = lean_box(0);
v___x_1673_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2));
v_sz_1674_ = lean_array_size(v_vcs_1662_);
v___x_1675_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1671_);
v___x_1676_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(v_inv_1663_, v_lctx_1671_, v_xs_1664_, v_letMuts_1665_, v_vcs_1662_, v_sz_1674_, v___x_1675_, v___x_1673_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1720_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1679_ = v___x_1676_;
v_isShared_1680_ = v_isSharedCheck_1720_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1676_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1720_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v_snd_1685_; lean_object* v_fst_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1719_; 
v_snd_1685_ = lean_ctor_get(v_a_1677_, 1);
v_fst_1686_ = lean_ctor_get(v_a_1677_, 0);
v_isSharedCheck_1719_ = !lean_is_exclusive(v_a_1677_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1688_ = v_a_1677_;
v_isShared_1689_ = v_isSharedCheck_1719_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_snd_1685_);
lean_inc(v_fst_1686_);
lean_dec(v_a_1677_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1719_;
goto v_resetjp_1687_;
}
v___jp_1681_:
{
lean_object* v___x_1683_; 
if (v_isShared_1680_ == 0)
{
lean_ctor_set(v___x_1679_, 0, v___x_1672_);
v___x_1683_ = v___x_1679_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v___x_1672_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
v_resetjp_1687_:
{
if (lean_obj_tag(v_fst_1686_) == 0)
{
lean_del_object(v___x_1688_);
lean_dec(v_snd_1685_);
goto v___jp_1681_;
}
else
{
lean_object* v_fst_1690_; 
v_fst_1690_ = lean_ctor_get(v_snd_1685_, 0);
lean_inc(v_fst_1690_);
if (lean_obj_tag(v_fst_1690_) == 0)
{
lean_dec_ref_known(v_fst_1686_, 1);
lean_del_object(v___x_1688_);
lean_dec(v_snd_1685_);
goto v___jp_1681_;
}
else
{
lean_object* v_snd_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1717_; 
lean_del_object(v___x_1679_);
v_snd_1691_ = lean_ctor_get(v_snd_1685_, 1);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_snd_1685_);
if (v_isSharedCheck_1717_ == 0)
{
lean_object* v_unused_1718_; 
v_unused_1718_ = lean_ctor_get(v_snd_1685_, 0);
lean_dec(v_unused_1718_);
v___x_1693_ = v_snd_1685_;
v_isShared_1694_ = v_isSharedCheck_1717_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_snd_1691_);
lean_dec(v_snd_1685_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1717_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v_val_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1716_; 
v_val_1695_ = lean_ctor_get(v_fst_1686_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_fst_1686_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1697_ = v_fst_1686_;
v_isShared_1698_ = v_isSharedCheck_1716_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_val_1695_);
lean_dec(v_fst_1686_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1716_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v_val_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1715_; 
v_val_1699_ = lean_ctor_get(v_fst_1690_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_fst_1690_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1701_ = v_fst_1690_;
v_isShared_1702_ = v_isSharedCheck_1715_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_val_1699_);
lean_dec(v_fst_1690_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1715_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1694_ == 0)
{
lean_ctor_set(v___x_1693_, 0, v_val_1699_);
v___x_1704_ = v___x_1693_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_val_1699_);
lean_ctor_set(v_reuseFailAlloc_1714_, 1, v_snd_1691_);
v___x_1704_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1706_; 
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v___x_1704_);
lean_ctor_set(v___x_1688_, 0, v_val_1695_);
v___x_1706_ = v___x_1688_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_val_1695_);
lean_ctor_set(v_reuseFailAlloc_1713_, 1, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
lean_object* v___x_1708_; 
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1706_);
v___x_1708_ = v___x_1701_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1706_);
v___x_1708_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
lean_object* v___x_1710_; 
if (v_isShared_1698_ == 0)
{
lean_ctor_set_tag(v___x_1697_, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1708_);
v___x_1710_ = v___x_1697_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v___x_1708_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
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
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
v_a_1721_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1676_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1676_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___boxed(lean_object* v_vcs_1729_, lean_object* v_inv_1730_, lean_object* v_xs_1731_, lean_object* v_letMuts_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(v_vcs_1729_, v_inv_1730_, v_xs_1731_, v_letMuts_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
lean_dec_ref(v_vcs_1729_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0(lean_object* v_inst_1739_, lean_object* v_a_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(v_a_1740_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___boxed(lean_object* v_inst_1747_, lean_object* v_a_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0(v_inst_1747_, v_a_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(lean_object* v_m_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l_Lean_MVarId_getDecl(v_m_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v_userName_1763_; lean_object* v_lctx_1764_; lean_object* v_type_1765_; lean_object* v_localInstances_1766_; uint8_t v_kind_1767_; lean_object* v_numScopeArgs_1768_; lean_object* v___x_1769_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v___x_1761_, 1);
v_userName_1763_ = lean_ctor_get(v_a_1762_, 0);
lean_inc(v_userName_1763_);
v_lctx_1764_ = lean_ctor_get(v_a_1762_, 1);
lean_inc_ref(v_lctx_1764_);
v_type_1765_ = lean_ctor_get(v_a_1762_, 2);
lean_inc_ref(v_type_1765_);
v_localInstances_1766_ = lean_ctor_get(v_a_1762_, 4);
lean_inc_ref(v_localInstances_1766_);
v_kind_1767_ = lean_ctor_get_uint8(v_a_1762_, sizeof(void*)*7);
v_numScopeArgs_1768_ = lean_ctor_get(v_a_1762_, 5);
lean_inc(v_numScopeArgs_1768_);
lean_dec(v_a_1762_);
v___x_1769_ = l_Lean_Meta_mkFreshExprMVarAt(v_lctx_1764_, v_localInstances_1766_, v_type_1765_, v_kind_1767_, v_userName_1763_, v_numScopeArgs_1768_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1778_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1772_ = v___x_1769_;
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1774_ = l_Lean_Expr_mvarId_x21(v_a_1770_);
lean_dec(v_a_1770_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1774_);
v___x_1776_ = v___x_1772_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
v_a_1779_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1769_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1769_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
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
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_a_1787_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1761_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1761_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar___boxed(lean_object* v_m_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(v_m_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec(v_a_1797_);
lean_dec_ref(v_a_1796_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(lean_object* v_e_1808_){
_start:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; uint8_t v___x_1837_; 
v___x_1835_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1));
v___x_1836_ = lean_unsigned_to_nat(2u);
v___x_1837_ = l_Lean_Expr_isAppOfArity(v_e_1808_, v___x_1835_, v___x_1836_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1839_; uint8_t v___x_1840_; 
v___x_1838_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1));
v___x_1839_ = lean_unsigned_to_nat(3u);
v___x_1840_ = l_Lean_Expr_isAppOfArity(v_e_1808_, v___x_1838_, v___x_1839_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; uint8_t v___x_1842_; 
v___x_1841_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1));
v___x_1842_ = l_Lean_Expr_isAppOfArity(v_e_1808_, v___x_1841_, v___x_1839_);
if (v___x_1842_ == 0)
{
lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1843_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1));
v___x_1844_ = l_Lean_Expr_isAppOfArity(v_e_1808_, v___x_1843_, v___x_1839_);
if (v___x_1844_ == 0)
{
goto v___jp_1809_;
}
else
{
lean_object* v___x_1845_; 
v___x_1845_ = l_Lean_Expr_appArg_x21(v_e_1808_);
if (lean_obj_tag(v___x_1845_) == 6)
{
lean_object* v_binderName_1846_; lean_object* v_binderType_1847_; lean_object* v_body_1848_; uint8_t v_binderInfo_1849_; lean_object* v___x_1850_; 
lean_dec_ref(v_e_1808_);
v_binderName_1846_ = lean_ctor_get(v___x_1845_, 0);
lean_inc(v_binderName_1846_);
v_binderType_1847_ = lean_ctor_get(v___x_1845_, 1);
lean_inc_ref(v_binderType_1847_);
v_body_1848_ = lean_ctor_get(v___x_1845_, 2);
lean_inc_ref(v_body_1848_);
v_binderInfo_1849_ = lean_ctor_get_uint8(v___x_1845_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_1845_, 3);
v___x_1850_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v_body_1848_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_dec_ref(v_binderType_1847_);
lean_dec(v_binderName_1846_);
return v___x_1850_;
}
else
{
lean_object* v_val_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1868_; 
v_val_1851_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1853_ = v___x_1850_;
v_isShared_1854_ = v_isSharedCheck_1868_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_val_1851_);
lean_dec(v___x_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1868_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_fst_1855_; lean_object* v_snd_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1867_; 
v_fst_1855_ = lean_ctor_get(v_val_1851_, 0);
v_snd_1856_ = lean_ctor_get(v_val_1851_, 1);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_val_1851_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1858_ = v_val_1851_;
v_isShared_1859_ = v_isSharedCheck_1867_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_snd_1856_);
lean_inc(v_fst_1855_);
lean_dec(v_val_1851_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1867_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1860_ = l_Lean_mkForall(v_binderName_1846_, v_binderInfo_1849_, v_binderType_1847_, v_snd_1856_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 1, v___x_1860_);
v___x_1862_ = v___x_1858_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_fst_1855_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1864_; 
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v___x_1862_);
v___x_1864_ = v___x_1853_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v___x_1862_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1845_);
goto v___jp_1809_;
}
}
}
else
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1869_ = l_Lean_Expr_appFn_x21(v_e_1808_);
v___x_1870_ = l_Lean_Expr_appArg_x21(v___x_1869_);
lean_dec_ref(v___x_1869_);
v___x_1871_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_1870_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_dec_ref(v_e_1808_);
return v___x_1871_;
}
else
{
lean_object* v_val_1872_; lean_object* v_snd_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v_val_1872_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_val_1872_);
lean_dec_ref_known(v___x_1871_, 1);
v_snd_1873_ = lean_ctor_get(v_val_1872_, 1);
lean_inc(v_snd_1873_);
lean_dec(v_val_1872_);
v___x_1874_ = l_Lean_Expr_appArg_x21(v_e_1808_);
lean_dec_ref(v_e_1808_);
v___x_1875_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_1874_);
if (lean_obj_tag(v___x_1875_) == 0)
{
lean_dec(v_snd_1873_);
return v___x_1875_;
}
else
{
lean_object* v_val_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1893_; 
v_val_1876_ = lean_ctor_get(v___x_1875_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1878_ = v___x_1875_;
v_isShared_1879_ = v_isSharedCheck_1893_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_val_1876_);
lean_dec(v___x_1875_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1893_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v_fst_1880_; lean_object* v_snd_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1892_; 
v_fst_1880_ = lean_ctor_get(v_val_1876_, 0);
v_snd_1881_ = lean_ctor_get(v_val_1876_, 1);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_val_1876_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1883_ = v_val_1876_;
v_isShared_1884_ = v_isSharedCheck_1892_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_snd_1881_);
lean_inc(v_fst_1880_);
lean_dec(v_val_1876_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1892_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1885_; lean_object* v___x_1887_; 
v___x_1885_ = l_Lean_mkOr(v_snd_1873_, v_snd_1881_);
if (v_isShared_1884_ == 0)
{
lean_ctor_set(v___x_1883_, 1, v___x_1885_);
v___x_1887_ = v___x_1883_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_fst_1880_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v___x_1885_);
v___x_1887_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
lean_object* v___x_1889_; 
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 0, v___x_1887_);
v___x_1889_ = v___x_1878_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___x_1887_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
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
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1894_ = l_Lean_Expr_appFn_x21(v_e_1808_);
v___x_1895_ = l_Lean_Expr_appArg_x21(v___x_1894_);
lean_dec_ref(v___x_1894_);
v___x_1896_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_1895_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_dec_ref(v_e_1808_);
return v___x_1896_;
}
else
{
lean_object* v_val_1897_; lean_object* v_snd_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v_val_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_val_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v_snd_1898_ = lean_ctor_get(v_val_1897_, 1);
lean_inc(v_snd_1898_);
lean_dec(v_val_1897_);
v___x_1899_ = l_Lean_Expr_appArg_x21(v_e_1808_);
lean_dec_ref(v_e_1808_);
v___x_1900_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_1899_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_dec(v_snd_1898_);
return v___x_1900_;
}
else
{
lean_object* v_val_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1918_; 
v_val_1901_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1903_ = v___x_1900_;
v_isShared_1904_ = v_isSharedCheck_1918_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_val_1901_);
lean_dec(v___x_1900_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1918_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v_fst_1905_; lean_object* v_snd_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1917_; 
v_fst_1905_ = lean_ctor_get(v_val_1901_, 0);
v_snd_1906_ = lean_ctor_get(v_val_1901_, 1);
v_isSharedCheck_1917_ = !lean_is_exclusive(v_val_1901_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1908_ = v_val_1901_;
v_isShared_1909_ = v_isSharedCheck_1917_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_snd_1906_);
lean_inc(v_fst_1905_);
lean_dec(v_val_1901_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1917_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1910_; lean_object* v___x_1912_; 
v___x_1910_ = l_Lean_mkAnd(v_snd_1898_, v_snd_1906_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 1, v___x_1910_);
v___x_1912_ = v___x_1908_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_fst_1905_);
lean_ctor_set(v_reuseFailAlloc_1916_, 1, v___x_1910_);
v___x_1912_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
lean_object* v___x_1914_; 
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 0, v___x_1912_);
v___x_1914_ = v___x_1903_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
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
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1919_ = lean_box(0);
v___x_1920_ = l_Lean_Expr_getAppFn(v_e_1808_);
v___x_1921_ = l_Lean_Expr_constLevels_x21(v___x_1920_);
lean_dec_ref(v___x_1920_);
v___x_1922_ = lean_unsigned_to_nat(0u);
v___x_1923_ = l_List_get_x21Internal___redArg(v___x_1919_, v___x_1921_, v___x_1922_);
lean_dec(v___x_1921_);
v___x_1924_ = lean_unsigned_to_nat(1u);
v___x_1925_ = l_Lean_Expr_getAppNumArgs(v_e_1808_);
v___x_1926_ = lean_nat_sub(v___x_1925_, v___x_1924_);
lean_dec(v___x_1925_);
v___x_1927_ = lean_nat_sub(v___x_1926_, v___x_1924_);
lean_dec(v___x_1926_);
v___x_1928_ = l_Lean_Expr_getRevArg_x21(v_e_1808_, v___x_1927_);
lean_dec_ref(v_e_1808_);
v___x_1929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1923_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
v___x_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
v___jp_1809_:
{
if (lean_obj_tag(v_e_1808_) == 8)
{
lean_object* v_declName_1810_; lean_object* v_type_1811_; lean_object* v_value_1812_; lean_object* v_body_1813_; uint8_t v_nondep_1814_; lean_object* v___x_1815_; 
v_declName_1810_ = lean_ctor_get(v_e_1808_, 0);
lean_inc(v_declName_1810_);
v_type_1811_ = lean_ctor_get(v_e_1808_, 1);
lean_inc_ref(v_type_1811_);
v_value_1812_ = lean_ctor_get(v_e_1808_, 2);
lean_inc_ref(v_value_1812_);
v_body_1813_ = lean_ctor_get(v_e_1808_, 3);
lean_inc_ref(v_body_1813_);
v_nondep_1814_ = lean_ctor_get_uint8(v_e_1808_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_1808_, 4);
v___x_1815_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v_body_1813_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_dec_ref(v_value_1812_);
lean_dec_ref(v_type_1811_);
lean_dec(v_declName_1810_);
return v___x_1815_;
}
else
{
lean_object* v_val_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1833_; 
v_val_1816_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1818_ = v___x_1815_;
v_isShared_1819_ = v_isSharedCheck_1833_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_val_1816_);
lean_dec(v___x_1815_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1833_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v_fst_1820_; lean_object* v_snd_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1832_; 
v_fst_1820_ = lean_ctor_get(v_val_1816_, 0);
v_snd_1821_ = lean_ctor_get(v_val_1816_, 1);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_val_1816_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1823_ = v_val_1816_;
v_isShared_1824_ = v_isSharedCheck_1832_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_snd_1821_);
lean_inc(v_fst_1820_);
lean_dec(v_val_1816_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1832_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1825_; lean_object* v___x_1827_; 
v___x_1825_ = l_Lean_Expr_letE___override(v_declName_1810_, v_type_1811_, v_value_1812_, v_snd_1821_, v_nondep_1814_);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 1, v___x_1825_);
v___x_1827_ = v___x_1823_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_fst_1820_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v___x_1825_);
v___x_1827_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1829_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 0, v___x_1827_);
v___x_1829_ = v___x_1818_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
}
}
else
{
lean_object* v___x_1834_; 
lean_dec_ref(v_e_1808_);
v___x_1834_ = lean_box(0);
return v___x_1834_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(lean_object* v_e_1931_){
_start:
{
lean_object* v___x_1932_; 
lean_inc_ref(v_e_1931_);
v___x_1932_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v_e_1931_);
if (lean_obj_tag(v___x_1932_) == 0)
{
return v_e_1931_;
}
else
{
lean_object* v_val_1933_; lean_object* v_fst_1934_; lean_object* v_snd_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
lean_dec_ref(v_e_1931_);
v_val_1933_ = lean_ctor_get(v___x_1932_, 0);
lean_inc(v_val_1933_);
lean_dec_ref_known(v___x_1932_, 1);
v_fst_1934_ = lean_ctor_get(v_val_1933_, 0);
lean_inc_n(v_fst_1934_, 2);
v_snd_1935_ = lean_ctor_get(v_val_1933_, 1);
lean_inc(v_snd_1935_);
lean_dec(v_val_1933_);
v___x_1936_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_fst_1934_);
v___x_1937_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_fst_1934_, v___x_1936_, v_snd_1935_);
return v___x_1937_;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6(void){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l_Array_mkArray0___redArg();
return v___x_1948_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24(void){
_start:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1986_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23));
v___x_1987_ = l_String_toRawSubstring_x27(v___x_1986_);
return v___x_1987_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29(void){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28));
v___x_1999_ = l_String_toRawSubstring_x27(v___x_1998_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(lean_object* v_handlers_2009_, lean_object* v_default_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v___x_2016_; lean_object* v_handlers_2017_; 
v___x_2016_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v_handlers_2017_ = l_Lean_Syntax_SepArray_ofElems(v___x_2016_, v_handlers_2009_);
switch(lean_obj_tag(v_default_2010_))
{
case 0:
{
lean_object* v_ref_2018_; uint8_t v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_ref_2018_ = lean_ctor_get(v_a_2013_, 2);
v___x_2019_ = 0;
v___x_2020_ = l_Lean_SourceInfo_fromRef(v_ref_2018_, v___x_2019_);
v___x_2021_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2));
v___x_2022_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3));
lean_inc_n(v___x_2020_, 3);
v___x_2023_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2020_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2025_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2026_ = l_Array_append___redArg(v___x_2025_, v_handlers_2017_);
lean_dec_ref(v_handlers_2017_);
v___x_2027_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2020_);
lean_ctor_set(v___x_2027_, 1, v___x_2024_);
lean_ctor_set(v___x_2027_, 2, v___x_2026_);
v___x_2028_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2020_);
lean_ctor_set(v___x_2029_, 1, v___x_2028_);
v___x_2030_ = l_Lean_Syntax_node3(v___x_2020_, v___x_2021_, v___x_2023_, v___x_2027_, v___x_2029_);
v___x_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
return v___x_2031_;
}
case 1:
{
lean_object* v_toCold_2032_; lean_object* v_ref_2033_; lean_object* v_quotContext_2034_; lean_object* v_currMacroScope_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v_toCold_2032_ = lean_ctor_get(v_a_2013_, 0);
v_ref_2033_ = lean_ctor_get(v_a_2013_, 2);
v_quotContext_2034_ = lean_ctor_get(v_toCold_2032_, 8);
v_currMacroScope_2035_ = lean_ctor_get(v_toCold_2032_, 9);
v___x_2036_ = 0;
v___x_2037_ = l_Lean_SourceInfo_fromRef(v_ref_2033_, v___x_2036_);
v___x_2038_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12));
v___x_2039_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13));
lean_inc_n(v___x_2037_, 12);
v___x_2040_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2037_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v___x_2041_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15));
v___x_2042_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17));
v___x_2043_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2044_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18));
v___x_2045_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19));
v___x_2046_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2037_);
lean_ctor_set(v___x_2046_, 1, v___x_2044_);
v___x_2047_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_2048_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_2049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2037_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v___x_2050_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2051_ = l_Array_append___redArg(v___x_2050_, v_handlers_2017_);
lean_dec_ref(v_handlers_2017_);
v___x_2052_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2037_);
lean_ctor_set(v___x_2052_, 1, v___x_2016_);
v___x_2053_ = lean_array_push(v___x_2051_, v___x_2052_);
v___x_2054_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24);
v___x_2055_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25));
lean_inc(v_currMacroScope_2035_);
lean_inc(v_quotContext_2034_);
v___x_2056_ = l_Lean_addMacroScope(v_quotContext_2034_, v___x_2055_, v_currMacroScope_2035_);
v___x_2057_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27));
v___x_2058_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2037_);
lean_ctor_set(v___x_2058_, 1, v___x_2054_);
lean_ctor_set(v___x_2058_, 2, v___x_2056_);
lean_ctor_set(v___x_2058_, 3, v___x_2057_);
v___x_2059_ = lean_array_push(v___x_2053_, v___x_2058_);
v___x_2060_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2037_);
lean_ctor_set(v___x_2060_, 1, v___x_2043_);
lean_ctor_set(v___x_2060_, 2, v___x_2059_);
v___x_2061_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2062_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2037_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = l_Lean_Syntax_node3(v___x_2037_, v___x_2047_, v___x_2049_, v___x_2060_, v___x_2062_);
v___x_2064_ = l_Lean_Syntax_node2(v___x_2037_, v___x_2045_, v___x_2046_, v___x_2063_);
v___x_2065_ = l_Lean_Syntax_node1(v___x_2037_, v___x_2043_, v___x_2064_);
v___x_2066_ = l_Lean_Syntax_node1(v___x_2037_, v___x_2042_, v___x_2065_);
v___x_2067_ = l_Lean_Syntax_node1(v___x_2037_, v___x_2041_, v___x_2066_);
v___x_2068_ = l_Lean_Syntax_node2(v___x_2037_, v___x_2038_, v___x_2040_, v___x_2067_);
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
case 2:
{
lean_object* v_toCold_2070_; lean_object* v_ref_2071_; lean_object* v_quotContext_2072_; lean_object* v_currMacroScope_2073_; uint8_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v_toCold_2070_ = lean_ctor_get(v_a_2013_, 0);
v_ref_2071_ = lean_ctor_get(v_a_2013_, 2);
v_quotContext_2072_ = lean_ctor_get(v_toCold_2070_, 8);
v_currMacroScope_2073_ = lean_ctor_get(v_toCold_2070_, 9);
v___x_2074_ = 0;
v___x_2075_ = l_Lean_SourceInfo_fromRef(v_ref_2071_, v___x_2074_);
v___x_2076_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12));
v___x_2077_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13));
lean_inc_n(v___x_2075_, 12);
v___x_2078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2075_);
lean_ctor_set(v___x_2078_, 1, v___x_2077_);
v___x_2079_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15));
v___x_2080_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17));
v___x_2081_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2082_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18));
v___x_2083_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19));
v___x_2084_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2075_);
lean_ctor_set(v___x_2084_, 1, v___x_2082_);
v___x_2085_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_2086_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_2087_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2075_);
lean_ctor_set(v___x_2087_, 1, v___x_2086_);
v___x_2088_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2089_ = l_Array_append___redArg(v___x_2088_, v_handlers_2017_);
lean_dec_ref(v_handlers_2017_);
v___x_2090_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2075_);
lean_ctor_set(v___x_2090_, 1, v___x_2016_);
v___x_2091_ = lean_array_push(v___x_2089_, v___x_2090_);
v___x_2092_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29);
v___x_2093_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30));
lean_inc(v_currMacroScope_2073_);
lean_inc(v_quotContext_2072_);
v___x_2094_ = l_Lean_addMacroScope(v_quotContext_2072_, v___x_2093_, v_currMacroScope_2073_);
v___x_2095_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32));
v___x_2096_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2075_);
lean_ctor_set(v___x_2096_, 1, v___x_2092_);
lean_ctor_set(v___x_2096_, 2, v___x_2094_);
lean_ctor_set(v___x_2096_, 3, v___x_2095_);
v___x_2097_ = lean_array_push(v___x_2091_, v___x_2096_);
v___x_2098_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2075_);
lean_ctor_set(v___x_2098_, 1, v___x_2081_);
lean_ctor_set(v___x_2098_, 2, v___x_2097_);
v___x_2099_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2075_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = l_Lean_Syntax_node3(v___x_2075_, v___x_2085_, v___x_2087_, v___x_2098_, v___x_2100_);
v___x_2102_ = l_Lean_Syntax_node2(v___x_2075_, v___x_2083_, v___x_2084_, v___x_2101_);
v___x_2103_ = l_Lean_Syntax_node1(v___x_2075_, v___x_2081_, v___x_2102_);
v___x_2104_ = l_Lean_Syntax_node1(v___x_2075_, v___x_2080_, v___x_2103_);
v___x_2105_ = l_Lean_Syntax_node1(v___x_2075_, v___x_2079_, v___x_2104_);
v___x_2106_ = l_Lean_Syntax_node2(v___x_2075_, v___x_2076_, v___x_2078_, v___x_2105_);
v___x_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
return v___x_2107_;
}
default: 
{
lean_object* v_e_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; 
v_e_2108_ = lean_ctor_get(v_default_2010_, 0);
lean_inc_ref(v_e_2108_);
lean_dec_ref_known(v_default_2010_, 1);
v___x_2109_ = lean_box(1);
v___x_2110_ = l_Lean_PrettyPrinter_delab(v_e_2108_, v___x_2109_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2147_; 
v_a_2111_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2113_ = v___x_2110_;
v_isShared_2114_ = v_isSharedCheck_2147_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2110_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2147_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v_ref_2115_; uint8_t v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2145_; 
v_ref_2115_ = lean_ctor_get(v_a_2013_, 2);
v___x_2116_ = 0;
v___x_2117_ = l_Lean_SourceInfo_fromRef(v_ref_2115_, v___x_2116_);
v___x_2118_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12));
v___x_2119_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13));
lean_inc_n(v___x_2117_, 11);
v___x_2120_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2117_);
lean_ctor_set(v___x_2120_, 1, v___x_2119_);
v___x_2121_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15));
v___x_2122_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17));
v___x_2123_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2124_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18));
v___x_2125_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19));
v___x_2126_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2117_);
lean_ctor_set(v___x_2126_, 1, v___x_2124_);
v___x_2127_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_2128_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_2129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2117_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2131_ = l_Array_append___redArg(v___x_2130_, v_handlers_2017_);
lean_dec_ref(v_handlers_2017_);
v___x_2132_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2117_);
lean_ctor_set(v___x_2132_, 1, v___x_2016_);
v___x_2133_ = lean_array_push(v___x_2131_, v___x_2132_);
v___x_2134_ = lean_array_push(v___x_2133_, v_a_2111_);
v___x_2135_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2117_);
lean_ctor_set(v___x_2135_, 1, v___x_2123_);
lean_ctor_set(v___x_2135_, 2, v___x_2134_);
v___x_2136_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2117_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = l_Lean_Syntax_node3(v___x_2117_, v___x_2127_, v___x_2129_, v___x_2135_, v___x_2137_);
v___x_2139_ = l_Lean_Syntax_node2(v___x_2117_, v___x_2125_, v___x_2126_, v___x_2138_);
v___x_2140_ = l_Lean_Syntax_node1(v___x_2117_, v___x_2123_, v___x_2139_);
v___x_2141_ = l_Lean_Syntax_node1(v___x_2117_, v___x_2122_, v___x_2140_);
v___x_2142_ = l_Lean_Syntax_node1(v___x_2117_, v___x_2121_, v___x_2141_);
v___x_2143_ = l_Lean_Syntax_node2(v___x_2117_, v___x_2118_, v___x_2120_, v___x_2142_);
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2143_);
v___x_2145_ = v___x_2113_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
else
{
lean_dec_ref(v_handlers_2017_);
return v___x_2110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___boxed(lean_object* v_handlers_2148_, lean_object* v_default_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(v_handlers_2148_, v_default_2149_, v_a_2150_, v_a_2151_, v_a_2152_, v_a_2153_);
lean_dec(v_a_2153_);
lean_dec_ref(v_a_2152_);
lean_dec(v_a_2151_);
lean_dec_ref(v_a_2150_);
lean_dec_ref(v_handlers_2148_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(lean_object* v_e_2156_, lean_object* v___y_2157_){
_start:
{
uint8_t v___x_2159_; 
v___x_2159_ = l_Lean_Expr_hasMVar(v_e_2156_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; 
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_e_2156_);
return v___x_2160_;
}
else
{
lean_object* v___x_2161_; lean_object* v_mctx_2162_; lean_object* v___x_2163_; lean_object* v_fst_2164_; lean_object* v_snd_2165_; lean_object* v___x_2166_; lean_object* v_cache_2167_; lean_object* v_zetaDeltaFVarIds_2168_; lean_object* v_postponed_2169_; lean_object* v_diag_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2179_; 
v___x_2161_ = lean_st_ref_get(v___y_2157_);
v_mctx_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc_ref(v_mctx_2162_);
lean_dec(v___x_2161_);
v___x_2163_ = l_Lean_instantiateMVarsCore(v_mctx_2162_, v_e_2156_);
v_fst_2164_ = lean_ctor_get(v___x_2163_, 0);
lean_inc(v_fst_2164_);
v_snd_2165_ = lean_ctor_get(v___x_2163_, 1);
lean_inc(v_snd_2165_);
lean_dec_ref(v___x_2163_);
v___x_2166_ = lean_st_ref_take(v___y_2157_);
v_cache_2167_ = lean_ctor_get(v___x_2166_, 1);
v_zetaDeltaFVarIds_2168_ = lean_ctor_get(v___x_2166_, 2);
v_postponed_2169_ = lean_ctor_get(v___x_2166_, 3);
v_diag_2170_ = lean_ctor_get(v___x_2166_, 4);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2179_ == 0)
{
lean_object* v_unused_2180_; 
v_unused_2180_ = lean_ctor_get(v___x_2166_, 0);
lean_dec(v_unused_2180_);
v___x_2172_ = v___x_2166_;
v_isShared_2173_ = v_isSharedCheck_2179_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_diag_2170_);
lean_inc(v_postponed_2169_);
lean_inc(v_zetaDeltaFVarIds_2168_);
lean_inc(v_cache_2167_);
lean_dec(v___x_2166_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2179_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
lean_ctor_set(v___x_2172_, 0, v_snd_2165_);
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_snd_2165_);
lean_ctor_set(v_reuseFailAlloc_2178_, 1, v_cache_2167_);
lean_ctor_set(v_reuseFailAlloc_2178_, 2, v_zetaDeltaFVarIds_2168_);
lean_ctor_set(v_reuseFailAlloc_2178_, 3, v_postponed_2169_);
lean_ctor_set(v_reuseFailAlloc_2178_, 4, v_diag_2170_);
v___x_2175_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2176_ = lean_st_ref_put(v___y_2157_, v___x_2175_);
v___x_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2177_, 0, v_fst_2164_);
return v___x_2177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg___boxed(lean_object* v_e_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(v_e_2181_, v___y_2182_);
lean_dec(v___y_2182_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0(lean_object* v_e_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(v_e_2185_, v___y_2191_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___boxed(lean_object* v_e_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0(v_e_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0(lean_object* v_x_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; 
lean_inc(v___y_2211_);
lean_inc_ref(v___y_2210_);
lean_inc(v___y_2209_);
lean_inc_ref(v___y_2208_);
v___x_2217_ = lean_apply_9(v_x_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, lean_box(0));
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0___boxed(lean_object* v_x_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0(v_x_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(lean_object* v_mvarId_2229_, lean_object* v_x_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
lean_object* v___f_2240_; lean_object* v___x_2241_; 
lean_inc(v___y_2234_);
lean_inc_ref(v___y_2233_);
lean_inc(v___y_2232_);
lean_inc_ref(v___y_2231_);
v___f_2240_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2240_, 0, v_x_2230_);
lean_closure_set(v___f_2240_, 1, v___y_2231_);
lean_closure_set(v___f_2240_, 2, v___y_2232_);
lean_closure_set(v___f_2240_, 3, v___y_2233_);
lean_closure_set(v___f_2240_, 4, v___y_2234_);
v___x_2241_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2229_, v___f_2240_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
if (lean_obj_tag(v___x_2241_) == 0)
{
return v___x_2241_;
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2241_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2241_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___boxed(lean_object* v_mvarId_2250_, lean_object* v_x_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(v_mvarId_2250_, v_x_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5(lean_object* v_00_u03b1_2262_, lean_object* v_mvarId_2263_, lean_object* v_x_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v___x_2274_; 
v___x_2274_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(v_mvarId_2263_, v_x_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___boxed(lean_object* v_00_u03b1_2275_, lean_object* v_mvarId_2276_, lean_object* v_x_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5(v_00_u03b1_2275_, v_mvarId_2276_, v_x_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0(lean_object* v_a_2288_, lean_object* v_inv_2289_, lean_object* v_xs_2290_, uint8_t v___x_2291_, lean_object* v___x_2292_, lean_object* v_letMuts_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v___x_2303_; 
lean_inc_ref(v_letMuts_2293_);
lean_inc_ref(v_xs_2290_);
v___x_2303_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(v_a_2288_, v_inv_2289_, v_xs_2290_, v_letMuts_2293_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2380_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2306_ = v___x_2303_;
v_isShared_2307_ = v_isSharedCheck_2380_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2303_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2380_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
if (lean_obj_tag(v_a_2304_) == 1)
{
lean_object* v_val_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2375_; 
lean_del_object(v___x_2306_);
v_val_2308_ = lean_ctor_get(v_a_2304_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v_a_2304_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2310_ = v_a_2304_;
v_isShared_2311_ = v_isSharedCheck_2375_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_val_2308_);
lean_dec(v_a_2304_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2375_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v_snd_2312_; lean_object* v_fst_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2374_; 
v_snd_2312_ = lean_ctor_get(v_val_2308_, 1);
v_fst_2313_ = lean_ctor_get(v_val_2308_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_val_2308_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2315_ = v_val_2308_;
v_isShared_2316_ = v_isSharedCheck_2374_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_snd_2312_);
lean_inc(v_fst_2313_);
lean_dec(v_val_2308_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2374_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v_fst_2317_; lean_object* v_snd_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2373_; 
v_fst_2317_ = lean_ctor_get(v_snd_2312_, 0);
v_snd_2318_ = lean_ctor_get(v_snd_2312_, 1);
v_isSharedCheck_2373_ = !lean_is_exclusive(v_snd_2312_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2320_ = v_snd_2312_;
v_isShared_2321_ = v_isSharedCheck_2373_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_snd_2318_);
lean_inc(v_fst_2317_);
lean_dec(v_snd_2312_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2373_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v_lvl_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; uint8_t v___x_2331_; uint8_t v___x_2332_; lean_object* v___x_2333_; 
v_lvl_2322_ = lean_ctor_get(v_fst_2313_, 0);
lean_inc(v_lvl_2322_);
v___x_2323_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(v_fst_2313_);
lean_inc(v_fst_2317_);
v___x_2324_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(v_fst_2317_);
v___x_2325_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr(v_lvl_2322_, v___x_2323_, v___x_2324_);
v___x_2326_ = lean_unsigned_to_nat(2u);
v___x_2327_ = lean_mk_empty_array_with_capacity(v___x_2326_);
v___x_2328_ = lean_array_push(v___x_2327_, v_xs_2290_);
lean_inc_ref(v_letMuts_2293_);
v___x_2329_ = lean_array_push(v___x_2328_, v_letMuts_2293_);
v___x_2330_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(v___x_2325_);
v___x_2331_ = 0;
v___x_2332_ = 1;
v___x_2333_ = l_Lean_Meta_mkLambdaFVars(v___x_2329_, v___x_2330_, v___x_2331_, v___x_2291_, v___x_2331_, v___x_2291_, v___x_2332_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec_ref(v___x_2329_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v_letMutsPred_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2333_, 1);
v_letMutsPred_2335_ = lean_ctor_get(v_fst_2317_, 2);
lean_inc_ref(v_letMutsPred_2335_);
lean_dec(v_fst_2317_);
v___x_2336_ = lean_mk_empty_array_with_capacity(v___x_2292_);
v___x_2337_ = lean_array_push(v___x_2336_, v_letMuts_2293_);
v___x_2338_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(v_letMutsPred_2335_);
v___x_2339_ = l_Lean_Meta_mkLambdaFVars(v___x_2337_, v___x_2338_, v___x_2331_, v___x_2291_, v___x_2331_, v___x_2291_, v___x_2332_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec_ref(v___x_2337_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2356_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2342_ = v___x_2339_;
v_isShared_2343_ = v_isSharedCheck_2356_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2339_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2356_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v_a_2340_);
v___x_2345_ = v___x_2320_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2340_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v_snd_2318_);
v___x_2345_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
lean_object* v___x_2347_; 
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 1, v___x_2345_);
lean_ctor_set(v___x_2315_, 0, v_a_2334_);
v___x_2347_ = v___x_2315_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2334_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v___x_2345_);
v___x_2347_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
lean_object* v___x_2349_; 
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 0, v___x_2347_);
v___x_2349_ = v___x_2310_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2351_; 
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 0, v___x_2349_);
v___x_2351_ = v___x_2342_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
}
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec(v_a_2334_);
lean_del_object(v___x_2320_);
lean_dec(v_snd_2318_);
lean_del_object(v___x_2315_);
lean_del_object(v___x_2310_);
v_a_2357_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2339_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2339_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_del_object(v___x_2320_);
lean_dec(v_snd_2318_);
lean_dec(v_fst_2317_);
lean_del_object(v___x_2315_);
lean_del_object(v___x_2310_);
lean_dec_ref(v_letMuts_2293_);
v_a_2365_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2333_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2333_);
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
}
}
else
{
lean_object* v___x_2376_; lean_object* v___x_2378_; 
lean_dec(v_a_2304_);
lean_dec_ref(v_letMuts_2293_);
lean_dec_ref(v_xs_2290_);
v___x_2376_ = lean_box(0);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 0, v___x_2376_);
v___x_2378_ = v___x_2306_;
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
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
lean_dec_ref(v_letMuts_2293_);
lean_dec_ref(v_xs_2290_);
v_a_2381_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2303_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2303_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0___boxed(lean_object* v_a_2389_, lean_object* v_inv_2390_, lean_object* v_xs_2391_, lean_object* v___x_2392_, lean_object* v___x_2393_, lean_object* v_letMuts_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
uint8_t v___x_79661__boxed_2404_; lean_object* v_res_2405_; 
v___x_79661__boxed_2404_ = lean_unbox(v___x_2392_);
v_res_2405_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0(v_a_2389_, v_inv_2390_, v_xs_2391_, v___x_79661__boxed_2404_, v___x_2393_, v_letMuts_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___x_2393_);
lean_dec_ref(v_a_2389_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0(lean_object* v_k_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v_b_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
lean_object* v___x_2417_; 
lean_inc(v___y_2415_);
lean_inc_ref(v___y_2414_);
lean_inc(v___y_2413_);
lean_inc_ref(v___y_2412_);
lean_inc(v___y_2410_);
lean_inc_ref(v___y_2409_);
lean_inc(v___y_2408_);
lean_inc_ref(v___y_2407_);
v___x_2417_ = lean_apply_10(v_k_2406_, v_b_2411_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, lean_box(0));
return v___x_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v_k_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v_b_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0(v_k_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v_b_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(lean_object* v_name_2430_, uint8_t v_bi_2431_, lean_object* v_type_2432_, lean_object* v_k_2433_, uint8_t v_kind_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v___f_2444_; lean_object* v___x_2445_; 
lean_inc(v___y_2438_);
lean_inc_ref(v___y_2437_);
lean_inc(v___y_2436_);
lean_inc_ref(v___y_2435_);
v___f_2444_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2444_, 0, v_k_2433_);
lean_closure_set(v___f_2444_, 1, v___y_2435_);
lean_closure_set(v___f_2444_, 2, v___y_2436_);
lean_closure_set(v___f_2444_, 3, v___y_2437_);
lean_closure_set(v___f_2444_, 4, v___y_2438_);
v___x_2445_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2430_, v_bi_2431_, v_type_2432_, v___f_2444_, v_kind_2434_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
if (lean_obj_tag(v___x_2445_) == 0)
{
return v___x_2445_;
}
else
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2453_; 
v_a_2446_ = lean_ctor_get(v___x_2445_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2445_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2448_ = v___x_2445_;
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___x_2445_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_a_2446_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___boxed(lean_object* v_name_2454_, lean_object* v_bi_2455_, lean_object* v_type_2456_, lean_object* v_k_2457_, lean_object* v_kind_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
uint8_t v_bi_boxed_2468_; uint8_t v_kind_boxed_2469_; lean_object* v_res_2470_; 
v_bi_boxed_2468_ = lean_unbox(v_bi_2455_);
v_kind_boxed_2469_ = lean_unbox(v_kind_2458_);
v_res_2470_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(v_name_2454_, v_bi_boxed_2468_, v_type_2456_, v_k_2457_, v_kind_boxed_2469_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v___y_2460_);
lean_dec_ref(v___y_2459_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(lean_object* v_name_2471_, lean_object* v_type_2472_, lean_object* v_k_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
uint8_t v___x_2483_; uint8_t v___x_2484_; lean_object* v___x_2485_; 
v___x_2483_ = 0;
v___x_2484_ = 0;
v___x_2485_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(v_name_2471_, v___x_2483_, v_type_2472_, v_k_2473_, v___x_2484_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg___boxed(lean_object* v_name_2486_, lean_object* v_type_2487_, lean_object* v_k_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v_name_2486_, v_type_2487_, v_k_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1(lean_object* v_a_2502_, lean_object* v_inv_2503_, uint8_t v___x_2504_, lean_object* v___x_2505_, lean_object* v_arg_2506_, lean_object* v_xs_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v___x_2517_; lean_object* v___f_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2517_ = lean_box(v___x_2504_);
v___f_2518_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0___boxed), 15, 5);
lean_closure_set(v___f_2518_, 0, v_a_2502_);
lean_closure_set(v___f_2518_, 1, v_inv_2503_);
lean_closure_set(v___f_2518_, 2, v_xs_2507_);
lean_closure_set(v___f_2518_, 3, v___x_2517_);
lean_closure_set(v___f_2518_, 4, v___x_2505_);
v___x_2519_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_2520_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_2519_, v_arg_2506_, v___f_2518_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
return v___x_2520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___boxed(lean_object* v_a_2521_, lean_object* v_inv_2522_, lean_object* v___x_2523_, lean_object* v___x_2524_, lean_object* v_arg_2525_, lean_object* v_xs_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
uint8_t v___x_79981__boxed_2536_; lean_object* v_res_2537_; 
v___x_79981__boxed_2536_ = lean_unbox(v___x_2523_);
v_res_2537_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1(v_a_2521_, v_inv_2522_, v___x_79981__boxed_2536_, v___x_2524_, v_arg_2525_, v_xs_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
return v_res_2537_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2541_; 
v___x_2541_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2541_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2);
v___x_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
return v___x_2543_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4(void){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = lean_unsigned_to_nat(32u);
v___x_2545_ = lean_mk_empty_array_with_capacity(v___x_2544_);
v___x_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2(lean_object* v_fst_2547_, lean_object* v_xs_2548_, lean_object* v_fst_2549_, lean_object* v_r_2550_, lean_object* v___x_2551_, lean_object* v_fst_2552_, uint8_t v___x_2553_, lean_object* v___x_2554_, lean_object* v_letMuts_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
lean_object* v___x_2565_; 
lean_inc_ref(v_fst_2547_);
v___x_2565_ = l_Lean_Meta_mkNone(v_fst_2547_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2566_);
lean_dec_ref_known(v___x_2565_, 1);
v___x_2567_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_2568_ = lean_unsigned_to_nat(2u);
v___x_2569_ = lean_mk_empty_array_with_capacity(v___x_2568_);
lean_inc_ref(v___x_2569_);
v___x_2570_ = lean_array_push(v___x_2569_, v_a_2566_);
lean_inc_ref(v_letMuts_2555_);
v___x_2571_ = lean_array_push(v___x_2570_, v_letMuts_2555_);
v___x_2572_ = l_Lean_Meta_mkAppM(v___x_2567_, v___x_2571_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
lean_inc_ref(v___x_2569_);
v___x_2574_ = lean_array_push(v___x_2569_, v_xs_2548_);
v___x_2575_ = lean_array_push(v___x_2574_, v_a_2573_);
v___x_2576_ = l_Lean_Expr_beta(v_fst_2549_, v___x_2575_);
v___x_2577_ = l_Lean_Meta_mkSome(v_fst_2547_, v_r_2550_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref_known(v___x_2577_, 1);
v___x_2579_ = lean_array_push(v___x_2569_, v_a_2578_);
v___x_2580_ = lean_array_push(v___x_2579_, v_letMuts_2555_);
v___x_2581_ = l_Lean_Meta_mkAppM(v___x_2567_, v___x_2580_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2581_, 1);
v___x_2583_ = lean_mk_empty_array_with_capacity(v___x_2551_);
lean_inc_ref(v___x_2583_);
v___x_2584_ = lean_array_push(v___x_2583_, v_a_2582_);
v___x_2585_ = l_Lean_Expr_beta(v_fst_2552_, v___x_2584_);
v___x_2586_ = l_Lean_Meta_getSimpTheorems___redArg(v___y_2563_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v___x_2588_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_a_2587_);
lean_dec_ref_known(v___x_2586_, 1);
v___x_2588_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_2563_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; uint8_t v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2588_, 1);
v___x_2590_ = lean_unsigned_to_nat(100000u);
v___x_2591_ = 0;
v___x_2592_ = 0;
v___x_2593_ = lean_box(0);
v___x_2594_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_2594_, 0, v___x_2590_);
lean_ctor_set(v___x_2594_, 1, v___x_2568_);
lean_ctor_set(v___x_2594_, 2, v___x_2593_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 1, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 2, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 3, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 4, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 5, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 6, v___x_2592_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 7, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 8, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 9, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 10, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 11, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 12, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 13, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 14, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 15, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 16, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 17, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 18, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 19, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 20, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 21, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 22, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 23, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 24, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 25, v___x_2553_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 26, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 27, v___x_2591_);
lean_ctor_set_uint8(v___x_2594_, sizeof(void*)*3 + 28, v___x_2591_);
v___x_2595_ = lean_array_push(v___x_2583_, v_a_2587_);
v___x_2596_ = l_Lean_Options_empty;
v___x_2597_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2594_, v___x_2595_, v_a_2589_, v___x_2596_, v___y_2560_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = lean_mk_empty_array_with_capacity(v___x_2554_);
v___x_2600_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1));
v___x_2601_ = l_Lean_Meta_Simp_SimprocsArray_add(v___x_2599_, v___x_2600_, v___x_2591_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; size_t v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc_n(v_a_2602_, 2);
lean_dec_ref_known(v___x_2601_, 1);
v___x_2603_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3);
lean_inc_n(v___x_2554_, 2);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v___x_2554_);
v___x_2605_ = lean_unsigned_to_nat(32u);
v___x_2606_ = lean_mk_empty_array_with_capacity(v___x_2605_);
v___x_2607_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4);
v___x_2608_ = ((size_t)5ULL);
v___x_2609_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2609_, 0, v___x_2607_);
lean_ctor_set(v___x_2609_, 1, v___x_2606_);
lean_ctor_set(v___x_2609_, 2, v___x_2554_);
lean_ctor_set(v___x_2609_, 3, v___x_2554_);
lean_ctor_set_usize(v___x_2609_, 4, v___x_2608_);
v___x_2610_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2603_);
lean_ctor_set(v___x_2610_, 1, v___x_2603_);
lean_ctor_set(v___x_2610_, 2, v___x_2603_);
lean_ctor_set(v___x_2610_, 3, v___x_2609_);
v___x_2611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2604_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
lean_inc(v_a_2598_);
v___x_2612_ = l_Lean_Meta_simp(v___x_2576_, v_a_2598_, v_a_2602_, v___x_2593_, v___x_2611_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; lean_object* v_fst_2614_; lean_object* v___x_2615_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
lean_inc(v_a_2613_);
lean_dec_ref_known(v___x_2612_, 1);
v_fst_2614_ = lean_ctor_get(v_a_2613_, 0);
lean_inc(v_fst_2614_);
lean_dec(v_a_2613_);
v___x_2615_ = l_Lean_Meta_simp(v___x_2585_, v_a_2598_, v_a_2602_, v___x_2593_, v___x_2611_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec_ref_known(v___x_2611_, 2);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; lean_object* v_fst_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2654_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
v_fst_2617_ = lean_ctor_get(v_a_2616_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v_a_2616_);
if (v_isSharedCheck_2654_ == 0)
{
lean_object* v_unused_2655_; 
v_unused_2655_ = lean_ctor_get(v_a_2616_, 1);
lean_dec(v_unused_2655_);
v___x_2619_ = v_a_2616_;
v_isShared_2620_ = v_isSharedCheck_2654_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_fst_2617_);
lean_dec(v_a_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2654_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v_expr_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v_expr_2621_ = lean_ctor_get(v_fst_2614_, 0);
lean_inc_ref(v_expr_2621_);
lean_dec(v_fst_2614_);
v___x_2622_ = lean_box(1);
v___x_2623_ = l_Lean_PrettyPrinter_delab(v_expr_2621_, v___x_2622_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v_expr_2625_; lean_object* v___x_2626_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2624_);
lean_dec_ref_known(v___x_2623_, 1);
v_expr_2625_ = lean_ctor_get(v_fst_2617_, 0);
lean_inc_ref(v_expr_2625_);
lean_dec(v_fst_2617_);
v___x_2626_ = l_Lean_PrettyPrinter_delab(v_expr_2625_, v___x_2622_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2637_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2629_ = v___x_2626_;
v_isShared_2630_ = v_isSharedCheck_2637_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2626_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2637_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 1, v_a_2627_);
lean_ctor_set(v___x_2619_, 0, v_a_2624_);
v___x_2632_ = v___x_2619_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2624_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v_a_2627_);
v___x_2632_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
lean_object* v___x_2634_; 
if (v_isShared_2630_ == 0)
{
lean_ctor_set(v___x_2629_, 0, v___x_2632_);
v___x_2634_ = v___x_2629_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v___x_2632_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec(v_a_2624_);
lean_del_object(v___x_2619_);
v_a_2638_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2626_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2626_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2653_; 
lean_del_object(v___x_2619_);
lean_dec(v_fst_2617_);
v_a_2646_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2648_ = v___x_2623_;
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v___x_2623_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2651_; 
if (v_isShared_2649_ == 0)
{
v___x_2651_ = v___x_2648_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_a_2646_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
}
else
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2663_; 
lean_dec(v_fst_2614_);
v_a_2656_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2658_ = v___x_2615_;
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v___x_2615_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v_a_2656_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
else
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
lean_dec_ref_known(v___x_2611_, 2);
lean_dec(v_a_2602_);
lean_dec(v_a_2598_);
lean_dec_ref(v___x_2585_);
v_a_2664_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2612_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2612_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v_a_2598_);
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2576_);
lean_dec(v___x_2554_);
v_a_2672_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2601_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2601_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2576_);
lean_dec(v___x_2554_);
v_a_2680_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2597_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2597_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
lean_dec(v_a_2587_);
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2583_);
lean_dec_ref(v___x_2576_);
lean_dec(v___x_2554_);
v_a_2688_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___x_2588_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2588_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
lean_dec_ref(v___x_2585_);
lean_dec_ref(v___x_2583_);
lean_dec_ref(v___x_2576_);
lean_dec(v___x_2554_);
v_a_2696_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___x_2586_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2586_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
lean_dec_ref(v___x_2576_);
lean_dec(v___x_2554_);
lean_dec_ref(v_fst_2552_);
v_a_2704_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2581_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2581_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
lean_dec_ref(v___x_2576_);
lean_dec_ref(v___x_2569_);
lean_dec_ref(v_letMuts_2555_);
lean_dec(v___x_2554_);
lean_dec_ref(v_fst_2552_);
v_a_2712_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2714_ = v___x_2577_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2577_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2712_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
else
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec_ref(v___x_2569_);
lean_dec_ref(v_letMuts_2555_);
lean_dec(v___x_2554_);
lean_dec_ref(v_fst_2552_);
lean_dec_ref(v_r_2550_);
lean_dec_ref(v_fst_2549_);
lean_dec_ref(v_xs_2548_);
lean_dec_ref(v_fst_2547_);
v_a_2720_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2572_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2572_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec_ref(v_letMuts_2555_);
lean_dec(v___x_2554_);
lean_dec_ref(v_fst_2552_);
lean_dec_ref(v_r_2550_);
lean_dec_ref(v_fst_2549_);
lean_dec_ref(v_xs_2548_);
lean_dec_ref(v_fst_2547_);
v_a_2728_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2565_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2565_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___boxed(lean_object** _args){
lean_object* v_fst_2736_ = _args[0];
lean_object* v_xs_2737_ = _args[1];
lean_object* v_fst_2738_ = _args[2];
lean_object* v_r_2739_ = _args[3];
lean_object* v___x_2740_ = _args[4];
lean_object* v_fst_2741_ = _args[5];
lean_object* v___x_2742_ = _args[6];
lean_object* v___x_2743_ = _args[7];
lean_object* v_letMuts_2744_ = _args[8];
lean_object* v___y_2745_ = _args[9];
lean_object* v___y_2746_ = _args[10];
lean_object* v___y_2747_ = _args[11];
lean_object* v___y_2748_ = _args[12];
lean_object* v___y_2749_ = _args[13];
lean_object* v___y_2750_ = _args[14];
lean_object* v___y_2751_ = _args[15];
lean_object* v___y_2752_ = _args[16];
lean_object* v___y_2753_ = _args[17];
_start:
{
uint8_t v___x_80057__boxed_2754_; lean_object* v_res_2755_; 
v___x_80057__boxed_2754_ = lean_unbox(v___x_2742_);
v_res_2755_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2(v_fst_2736_, v_xs_2737_, v_fst_2738_, v_r_2739_, v___x_2740_, v_fst_2741_, v___x_80057__boxed_2754_, v___x_2743_, v_letMuts_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v___x_2740_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3(lean_object* v_fst_2756_, lean_object* v_xs_2757_, lean_object* v_fst_2758_, lean_object* v___x_2759_, lean_object* v_fst_2760_, uint8_t v___x_2761_, lean_object* v___x_2762_, lean_object* v_snd_2763_, lean_object* v_r_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v___x_2774_; lean_object* v___f_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2774_ = lean_box(v___x_2761_);
v___f_2775_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___boxed), 18, 8);
lean_closure_set(v___f_2775_, 0, v_fst_2756_);
lean_closure_set(v___f_2775_, 1, v_xs_2757_);
lean_closure_set(v___f_2775_, 2, v_fst_2758_);
lean_closure_set(v___f_2775_, 3, v_r_2764_);
lean_closure_set(v___f_2775_, 4, v___x_2759_);
lean_closure_set(v___f_2775_, 5, v_fst_2760_);
lean_closure_set(v___f_2775_, 6, v___x_2774_);
lean_closure_set(v___f_2775_, 7, v___x_2762_);
v___x_2776_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_2777_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_2776_, v_snd_2763_, v___f_2775_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3___boxed(lean_object** _args){
lean_object* v_fst_2778_ = _args[0];
lean_object* v_xs_2779_ = _args[1];
lean_object* v_fst_2780_ = _args[2];
lean_object* v___x_2781_ = _args[3];
lean_object* v_fst_2782_ = _args[4];
lean_object* v___x_2783_ = _args[5];
lean_object* v___x_2784_ = _args[6];
lean_object* v_snd_2785_ = _args[7];
lean_object* v_r_2786_ = _args[8];
lean_object* v___y_2787_ = _args[9];
lean_object* v___y_2788_ = _args[10];
lean_object* v___y_2789_ = _args[11];
lean_object* v___y_2790_ = _args[12];
lean_object* v___y_2791_ = _args[13];
lean_object* v___y_2792_ = _args[14];
lean_object* v___y_2793_ = _args[15];
lean_object* v___y_2794_ = _args[16];
lean_object* v___y_2795_ = _args[17];
_start:
{
uint8_t v___x_80453__boxed_2796_; lean_object* v_res_2797_; 
v___x_80453__boxed_2796_ = lean_unbox(v___x_2783_);
v_res_2797_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3(v_fst_2778_, v_xs_2779_, v_fst_2780_, v___x_2781_, v_fst_2782_, v___x_80453__boxed_2796_, v___x_2784_, v_snd_2785_, v_r_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
lean_dec(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4(lean_object* v_fst_2801_, lean_object* v_fst_2802_, lean_object* v___x_2803_, lean_object* v_fst_2804_, uint8_t v___x_2805_, lean_object* v___x_2806_, lean_object* v_snd_2807_, lean_object* v_xs_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
lean_object* v___x_2818_; lean_object* v___f_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2818_ = lean_box(v___x_2805_);
lean_inc_ref(v_fst_2801_);
v___f_2819_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3___boxed), 18, 8);
lean_closure_set(v___f_2819_, 0, v_fst_2801_);
lean_closure_set(v___f_2819_, 1, v_xs_2808_);
lean_closure_set(v___f_2819_, 2, v_fst_2802_);
lean_closure_set(v___f_2819_, 3, v___x_2803_);
lean_closure_set(v___f_2819_, 4, v_fst_2804_);
lean_closure_set(v___f_2819_, 5, v___x_2818_);
lean_closure_set(v___f_2819_, 6, v___x_2806_);
lean_closure_set(v___f_2819_, 7, v_snd_2807_);
v___x_2820_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
v___x_2821_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_2820_, v_fst_2801_, v___f_2819_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___boxed(lean_object** _args){
lean_object* v_fst_2822_ = _args[0];
lean_object* v_fst_2823_ = _args[1];
lean_object* v___x_2824_ = _args[2];
lean_object* v_fst_2825_ = _args[3];
lean_object* v___x_2826_ = _args[4];
lean_object* v___x_2827_ = _args[5];
lean_object* v_snd_2828_ = _args[6];
lean_object* v_xs_2829_ = _args[7];
lean_object* v___y_2830_ = _args[8];
lean_object* v___y_2831_ = _args[9];
lean_object* v___y_2832_ = _args[10];
lean_object* v___y_2833_ = _args[11];
lean_object* v___y_2834_ = _args[12];
lean_object* v___y_2835_ = _args[13];
lean_object* v___y_2836_ = _args[14];
lean_object* v___y_2837_ = _args[15];
lean_object* v___y_2838_ = _args[16];
_start:
{
uint8_t v___x_80516__boxed_2839_; lean_object* v_res_2840_; 
v___x_80516__boxed_2839_ = lean_unbox(v___x_2826_);
v_res_2840_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4(v_fst_2822_, v_fst_2823_, v___x_2824_, v_fst_2825_, v___x_80516__boxed_2839_, v___x_2827_, v_snd_2828_, v_xs_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec_ref(v___y_2832_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
return v_res_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(lean_object* v_as_2841_, size_t v_sz_2842_, size_t v_i_2843_, lean_object* v_b_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
uint8_t v___x_2850_; 
v___x_2850_ = lean_usize_dec_lt(v_i_2843_, v_sz_2842_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2851_; 
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v_b_2844_);
return v___x_2851_;
}
else
{
lean_object* v___x_2852_; lean_object* v_a_2853_; lean_object* v___x_2854_; 
v___x_2852_ = lean_box(1);
v_a_2853_ = lean_array_uget_borrowed(v_as_2841_, v_i_2843_);
lean_inc(v_a_2853_);
v___x_2854_ = l_Lean_PrettyPrinter_delab(v_a_2853_, v___x_2852_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_object* v_a_2855_; lean_object* v___x_2856_; size_t v___x_2857_; size_t v___x_2858_; 
v_a_2855_ = lean_ctor_get(v___x_2854_, 0);
lean_inc(v_a_2855_);
lean_dec_ref_known(v___x_2854_, 1);
v___x_2856_ = lean_array_push(v_b_2844_, v_a_2855_);
v___x_2857_ = ((size_t)1ULL);
v___x_2858_ = lean_usize_add(v_i_2843_, v___x_2857_);
v_i_2843_ = v___x_2858_;
v_b_2844_ = v___x_2856_;
goto _start;
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec_ref(v_b_2844_);
v_a_2860_ = lean_ctor_get(v___x_2854_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2854_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2854_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg___boxed(lean_object* v_as_2868_, lean_object* v_sz_2869_, lean_object* v_i_2870_, lean_object* v_b_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
size_t v_sz_boxed_2877_; size_t v_i_boxed_2878_; lean_object* v_res_2879_; 
v_sz_boxed_2877_ = lean_unbox_usize(v_sz_2869_);
lean_dec(v_sz_2869_);
v_i_boxed_2878_ = lean_unbox_usize(v_i_2870_);
lean_dec(v_i_2870_);
v_res_2879_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(v_as_2868_, v_sz_boxed_2877_, v_i_boxed_2878_, v_b_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec_ref(v_as_2868_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5(lean_object* v_xs_2900_, lean_object* v_fst_2901_, lean_object* v_snd_2902_, lean_object* v___x_2903_, lean_object* v___x_2904_, lean_object* v___x_2905_, lean_object* v___x_2906_, lean_object* v___x_2907_, lean_object* v___x_2908_, lean_object* v___x_2909_, lean_object* v___x_2910_, lean_object* v_letMuts_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2921_ = lean_unsigned_to_nat(2u);
v___x_2922_ = lean_mk_empty_array_with_capacity(v___x_2921_);
v___x_2923_ = lean_array_push(v___x_2922_, v_xs_2900_);
v___x_2924_ = lean_array_push(v___x_2923_, v_letMuts_2911_);
v___x_2925_ = l_Lean_Expr_beta(v_fst_2901_, v___x_2924_);
v___x_2926_ = lean_box(1);
v___x_2927_ = l_Lean_PrettyPrinter_delab(v___x_2925_, v___x_2926_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_3067_; 
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_2930_ = v___x_2927_;
v_isShared_2931_ = v_isSharedCheck_3067_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2927_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_3067_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v_points_2932_; lean_object* v_default_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_3066_; 
v_points_2932_ = lean_ctor_get(v_snd_2902_, 0);
v_default_2933_ = lean_ctor_get(v_snd_2902_, 1);
v_isSharedCheck_3066_ = !lean_is_exclusive(v_snd_2902_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_2935_ = v_snd_2902_;
v_isShared_2936_ = v_isSharedCheck_3066_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_default_2933_);
lean_inc(v_points_2932_);
lean_dec(v_snd_2902_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_3066_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
uint8_t v___y_2938_; lean_object* v___x_2989_; uint8_t v___x_2990_; 
v___x_2989_ = lean_array_get_size(v_points_2932_);
v___x_2990_ = lean_nat_dec_eq(v___x_2989_, v___x_2908_);
if (v___x_2990_ == 0)
{
lean_del_object(v___x_2930_);
lean_dec_ref(v___x_2910_);
lean_dec_ref(v___x_2909_);
v___y_2938_ = v___x_2990_;
goto v___jp_2937_;
}
else
{
if (lean_obj_tag(v_default_2933_) == 3)
{
uint8_t v___x_2991_; 
lean_del_object(v___x_2930_);
lean_dec_ref(v___x_2910_);
lean_dec_ref(v___x_2909_);
v___x_2991_ = 0;
v___y_2938_ = v___x_2991_;
goto v___jp_2937_;
}
else
{
lean_del_object(v___x_2935_);
lean_dec_ref(v_points_2932_);
if (lean_obj_tag(v_default_2933_) == 2)
{
lean_object* v_toCold_2992_; lean_object* v_ref_2993_; lean_object* v_quotContext_2994_; lean_object* v_currMacroScope_2995_; uint8_t v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3027_; 
v_toCold_2992_ = lean_ctor_get(v___y_2918_, 0);
v_ref_2993_ = lean_ctor_get(v___y_2918_, 2);
v_quotContext_2994_ = lean_ctor_get(v_toCold_2992_, 8);
v_currMacroScope_2995_ = lean_ctor_get(v_toCold_2992_, 9);
v___x_2996_ = 0;
v___x_2997_ = l_Lean_SourceInfo_fromRef(v_ref_2993_, v___x_2996_);
v___x_2998_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5));
v___x_2999_ = l_Lean_Name_mkStr3(v___x_2909_, v___x_2910_, v___x_2998_);
v___x_3000_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7));
v___x_3001_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
lean_inc_n(v___x_2997_, 11);
v___x_3002_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3002_, 0, v___x_2997_);
lean_ctor_set(v___x_3002_, 1, v___x_3000_);
lean_ctor_set(v___x_3002_, 2, v___x_3001_);
v___x_3003_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8));
v___x_3004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_2997_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3006_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_3007_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_3008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_2997_);
lean_ctor_set(v___x_3008_, 1, v___x_3007_);
v___x_3009_ = l_String_toRawSubstring_x27(v___x_2903_);
lean_inc_n(v_currMacroScope_2995_, 2);
lean_inc_n(v_quotContext_2994_, 2);
v___x_3010_ = l_Lean_addMacroScope(v_quotContext_2994_, v___x_2904_, v_currMacroScope_2995_);
v___x_3011_ = lean_box(0);
v___x_3012_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3012_, 0, v___x_2997_);
lean_ctor_set(v___x_3012_, 1, v___x_3009_);
lean_ctor_set(v___x_3012_, 2, v___x_3010_);
lean_ctor_set(v___x_3012_, 3, v___x_3011_);
v___x_3013_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_3014_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_2997_);
lean_ctor_set(v___x_3014_, 1, v___x_3013_);
v___x_3015_ = l_String_toRawSubstring_x27(v___x_2905_);
v___x_3016_ = l_Lean_addMacroScope(v_quotContext_2994_, v___x_2906_, v_currMacroScope_2995_);
v___x_3017_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3017_, 0, v___x_2997_);
lean_ctor_set(v___x_3017_, 1, v___x_3015_);
lean_ctor_set(v___x_3017_, 2, v___x_3016_);
lean_ctor_set(v___x_3017_, 3, v___x_3011_);
v___x_3018_ = l_Lean_Syntax_node3(v___x_2997_, v___x_3005_, v___x_3012_, v___x_3014_, v___x_3017_);
v___x_3019_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_3020_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3020_, 0, v___x_2997_);
lean_ctor_set(v___x_3020_, 1, v___x_3019_);
v___x_3021_ = l_Lean_Syntax_node3(v___x_2997_, v___x_3006_, v___x_3008_, v___x_3018_, v___x_3020_);
v___x_3022_ = l_Lean_Syntax_node1(v___x_2997_, v___x_3005_, v___x_3021_);
v___x_3023_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3024_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___x_2997_);
lean_ctor_set(v___x_3024_, 1, v___x_3023_);
v___x_3025_ = l_Lean_Syntax_node5(v___x_2997_, v___x_2999_, v___x_3002_, v___x_3004_, v___x_3022_, v___x_3024_, v_a_2928_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 0, v___x_3025_);
v___x_3027_ = v___x_2930_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3025_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
else
{
lean_object* v_toCold_3029_; lean_object* v_ref_3030_; lean_object* v_quotContext_3031_; lean_object* v_currMacroScope_3032_; uint8_t v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
lean_dec(v_default_2933_);
v_toCold_3029_ = lean_ctor_get(v___y_2918_, 0);
v_ref_3030_ = lean_ctor_get(v___y_2918_, 2);
v_quotContext_3031_ = lean_ctor_get(v_toCold_3029_, 8);
v_currMacroScope_3032_ = lean_ctor_get(v_toCold_3029_, 9);
v___x_3033_ = 0;
v___x_3034_ = l_Lean_SourceInfo_fromRef(v_ref_3030_, v___x_3033_);
v___x_3035_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9));
v___x_3036_ = l_Lean_Name_mkStr3(v___x_2909_, v___x_2910_, v___x_3035_);
v___x_3037_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7));
v___x_3038_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
lean_inc_n(v___x_3034_, 11);
v___x_3039_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3034_);
lean_ctor_set(v___x_3039_, 1, v___x_3037_);
lean_ctor_set(v___x_3039_, 2, v___x_3038_);
v___x_3040_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10));
v___x_3041_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3034_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3043_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_3044_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_3045_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3034_);
lean_ctor_set(v___x_3045_, 1, v___x_3044_);
v___x_3046_ = l_String_toRawSubstring_x27(v___x_2903_);
lean_inc_n(v_currMacroScope_3032_, 2);
lean_inc_n(v_quotContext_3031_, 2);
v___x_3047_ = l_Lean_addMacroScope(v_quotContext_3031_, v___x_2904_, v_currMacroScope_3032_);
v___x_3048_ = lean_box(0);
v___x_3049_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3034_);
lean_ctor_set(v___x_3049_, 1, v___x_3046_);
lean_ctor_set(v___x_3049_, 2, v___x_3047_);
lean_ctor_set(v___x_3049_, 3, v___x_3048_);
v___x_3050_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_3051_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3034_);
lean_ctor_set(v___x_3051_, 1, v___x_3050_);
v___x_3052_ = l_String_toRawSubstring_x27(v___x_2905_);
v___x_3053_ = l_Lean_addMacroScope(v_quotContext_3031_, v___x_2906_, v_currMacroScope_3032_);
v___x_3054_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3034_);
lean_ctor_set(v___x_3054_, 1, v___x_3052_);
lean_ctor_set(v___x_3054_, 2, v___x_3053_);
lean_ctor_set(v___x_3054_, 3, v___x_3048_);
v___x_3055_ = l_Lean_Syntax_node3(v___x_3034_, v___x_3042_, v___x_3049_, v___x_3051_, v___x_3054_);
v___x_3056_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_3057_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3034_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
v___x_3058_ = l_Lean_Syntax_node3(v___x_3034_, v___x_3043_, v___x_3045_, v___x_3055_, v___x_3057_);
v___x_3059_ = l_Lean_Syntax_node1(v___x_3034_, v___x_3042_, v___x_3058_);
v___x_3060_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3061_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3034_);
lean_ctor_set(v___x_3061_, 1, v___x_3060_);
v___x_3062_ = l_Lean_Syntax_node5(v___x_3034_, v___x_3036_, v___x_3039_, v___x_3041_, v___x_3059_, v___x_3061_, v_a_2928_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 0, v___x_3062_);
v___x_3064_ = v___x_2930_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
v___jp_2937_:
{
lean_object* v_toCold_2939_; lean_object* v_ref_2940_; lean_object* v_quotContext_2941_; lean_object* v_currMacroScope_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2947_; 
v_toCold_2939_ = lean_ctor_get(v___y_2918_, 0);
v_ref_2940_ = lean_ctor_get(v___y_2918_, 2);
v_quotContext_2941_ = lean_ctor_get(v_toCold_2939_, 8);
v_currMacroScope_2942_ = lean_ctor_get(v_toCold_2939_, 9);
v___x_2943_ = l_Lean_SourceInfo_fromRef(v_ref_2940_, v___y_2938_);
v___x_2944_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_2945_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1));
lean_inc(v___x_2943_);
if (v_isShared_2936_ == 0)
{
lean_ctor_set_tag(v___x_2935_, 2);
lean_ctor_set(v___x_2935_, 1, v___x_2944_);
lean_ctor_set(v___x_2935_, 0, v___x_2943_);
v___x_2947_ = v___x_2935_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2943_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v___x_2944_);
v___x_2947_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; size_t v_sz_2975_; size_t v___x_2976_; lean_object* v___x_2977_; 
v___x_2948_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_2949_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2950_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_2951_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
lean_inc_n(v___x_2943_, 11);
v___x_2952_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2943_);
lean_ctor_set(v___x_2952_, 1, v___x_2951_);
v___x_2953_ = l_String_toRawSubstring_x27(v___x_2903_);
lean_inc_n(v_currMacroScope_2942_, 2);
lean_inc_n(v_quotContext_2941_, 2);
v___x_2954_ = l_Lean_addMacroScope(v_quotContext_2941_, v___x_2904_, v_currMacroScope_2942_);
v___x_2955_ = lean_box(0);
v___x_2956_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2956_, 0, v___x_2943_);
lean_ctor_set(v___x_2956_, 1, v___x_2953_);
lean_ctor_set(v___x_2956_, 2, v___x_2954_);
lean_ctor_set(v___x_2956_, 3, v___x_2955_);
v___x_2957_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_2958_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2943_);
lean_ctor_set(v___x_2958_, 1, v___x_2957_);
v___x_2959_ = l_String_toRawSubstring_x27(v___x_2905_);
v___x_2960_ = l_Lean_addMacroScope(v_quotContext_2941_, v___x_2906_, v_currMacroScope_2942_);
v___x_2961_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2961_, 0, v___x_2943_);
lean_ctor_set(v___x_2961_, 1, v___x_2959_);
lean_ctor_set(v___x_2961_, 2, v___x_2960_);
lean_ctor_set(v___x_2961_, 3, v___x_2955_);
v___x_2962_ = l_Lean_Syntax_node3(v___x_2943_, v___x_2949_, v___x_2956_, v___x_2958_, v___x_2961_);
v___x_2963_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2964_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2943_);
lean_ctor_set(v___x_2964_, 1, v___x_2963_);
v___x_2965_ = l_Lean_Syntax_node3(v___x_2943_, v___x_2950_, v___x_2952_, v___x_2962_, v___x_2964_);
v___x_2966_ = l_Lean_Syntax_node1(v___x_2943_, v___x_2949_, v___x_2965_);
v___x_2967_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2968_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2943_);
lean_ctor_set(v___x_2968_, 1, v___x_2949_);
lean_ctor_set(v___x_2968_, 2, v___x_2967_);
v___x_2969_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_2970_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2943_);
lean_ctor_set(v___x_2970_, 1, v___x_2969_);
v___x_2971_ = l_Lean_Syntax_node4(v___x_2943_, v___x_2948_, v___x_2966_, v___x_2968_, v___x_2970_, v_a_2928_);
v___x_2972_ = l_Lean_Syntax_node2(v___x_2943_, v___x_2945_, v___x_2947_, v___x_2971_);
v___x_2973_ = lean_mk_empty_array_with_capacity(v___x_2907_);
v___x_2974_ = lean_array_push(v___x_2973_, v___x_2972_);
v_sz_2975_ = lean_array_size(v_points_2932_);
v___x_2976_ = ((size_t)0ULL);
v___x_2977_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(v_points_2932_, v_sz_2975_, v___x_2976_, v___x_2974_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
lean_dec_ref(v_points_2932_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2979_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v___x_2977_, 1);
v___x_2979_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(v_a_2978_, v_default_2933_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
lean_dec(v_a_2978_);
return v___x_2979_;
}
else
{
lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2987_; 
lean_dec(v_default_2933_);
v_a_2980_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2982_ = v___x_2977_;
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v___x_2977_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_a_2980_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
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
lean_dec_ref(v___x_2910_);
lean_dec_ref(v___x_2909_);
lean_dec(v___x_2906_);
lean_dec_ref(v___x_2905_);
lean_dec(v___x_2904_);
lean_dec_ref(v___x_2903_);
lean_dec_ref(v_snd_2902_);
return v___x_2927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___boxed(lean_object** _args){
lean_object* v_xs_3068_ = _args[0];
lean_object* v_fst_3069_ = _args[1];
lean_object* v_snd_3070_ = _args[2];
lean_object* v___x_3071_ = _args[3];
lean_object* v___x_3072_ = _args[4];
lean_object* v___x_3073_ = _args[5];
lean_object* v___x_3074_ = _args[6];
lean_object* v___x_3075_ = _args[7];
lean_object* v___x_3076_ = _args[8];
lean_object* v___x_3077_ = _args[9];
lean_object* v___x_3078_ = _args[10];
lean_object* v_letMuts_3079_ = _args[11];
lean_object* v___y_3080_ = _args[12];
lean_object* v___y_3081_ = _args[13];
lean_object* v___y_3082_ = _args[14];
lean_object* v___y_3083_ = _args[15];
lean_object* v___y_3084_ = _args[16];
lean_object* v___y_3085_ = _args[17];
lean_object* v___y_3086_ = _args[18];
lean_object* v___y_3087_ = _args[19];
lean_object* v___y_3088_ = _args[20];
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5(v_xs_3068_, v_fst_3069_, v_snd_3070_, v___x_3071_, v___x_3072_, v___x_3073_, v___x_3074_, v___x_3075_, v___x_3076_, v___x_3077_, v___x_3078_, v_letMuts_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec(v___y_3085_);
lean_dec_ref(v___y_3084_);
lean_dec(v___y_3083_);
lean_dec_ref(v___y_3082_);
lean_dec(v___y_3081_);
lean_dec_ref(v___y_3080_);
lean_dec(v___x_3076_);
lean_dec(v___x_3075_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6(lean_object* v_fst_3090_, lean_object* v_snd_3091_, lean_object* v___x_3092_, lean_object* v___x_3093_, lean_object* v___x_3094_, lean_object* v___x_3095_, lean_object* v___x_3096_, lean_object* v___x_3097_, lean_object* v_arg_3098_, lean_object* v_xs_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___f_3111_; lean_object* v___x_3112_; 
v___x_3109_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0));
v___x_3110_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___f_3111_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___boxed), 21, 11);
lean_closure_set(v___f_3111_, 0, v_xs_3099_);
lean_closure_set(v___f_3111_, 1, v_fst_3090_);
lean_closure_set(v___f_3111_, 2, v_snd_3091_);
lean_closure_set(v___f_3111_, 3, v___x_3092_);
lean_closure_set(v___f_3111_, 4, v___x_3093_);
lean_closure_set(v___f_3111_, 5, v___x_3109_);
lean_closure_set(v___f_3111_, 6, v___x_3110_);
lean_closure_set(v___f_3111_, 7, v___x_3094_);
lean_closure_set(v___f_3111_, 8, v___x_3095_);
lean_closure_set(v___f_3111_, 9, v___x_3096_);
lean_closure_set(v___f_3111_, 10, v___x_3097_);
v___x_3112_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3110_, v_arg_3098_, v___f_3111_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6___boxed(lean_object** _args){
lean_object* v_fst_3113_ = _args[0];
lean_object* v_snd_3114_ = _args[1];
lean_object* v___x_3115_ = _args[2];
lean_object* v___x_3116_ = _args[3];
lean_object* v___x_3117_ = _args[4];
lean_object* v___x_3118_ = _args[5];
lean_object* v___x_3119_ = _args[6];
lean_object* v___x_3120_ = _args[7];
lean_object* v_arg_3121_ = _args[8];
lean_object* v_xs_3122_ = _args[9];
lean_object* v___y_3123_ = _args[10];
lean_object* v___y_3124_ = _args[11];
lean_object* v___y_3125_ = _args[12];
lean_object* v___y_3126_ = _args[13];
lean_object* v___y_3127_ = _args[14];
lean_object* v___y_3128_ = _args[15];
lean_object* v___y_3129_ = _args[16];
lean_object* v___y_3130_ = _args[17];
lean_object* v___y_3131_ = _args[18];
_start:
{
lean_object* v_res_3132_; 
v_res_3132_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6(v_fst_3113_, v_snd_3114_, v___x_3115_, v___x_3116_, v___x_3117_, v___x_3118_, v___x_3119_, v___x_3120_, v_arg_3121_, v_xs_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(lean_object* v_as_3133_, size_t v_sz_3134_, size_t v_i_3135_, lean_object* v_b_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
uint8_t v___x_3142_; 
v___x_3142_ = lean_usize_dec_lt(v_i_3135_, v_sz_3134_);
if (v___x_3142_ == 0)
{
lean_object* v___x_3143_; 
v___x_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3143_, 0, v_b_3136_);
return v___x_3143_;
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v_a_3144_ = lean_array_uget_borrowed(v_as_3133_, v_i_3135_);
v___x_3145_ = lean_box(1);
lean_inc(v_a_3144_);
v___x_3146_ = l_Lean_PrettyPrinter_delab(v_a_3144_, v___x_3145_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
if (lean_obj_tag(v___x_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v___x_3148_; size_t v___x_3149_; size_t v___x_3150_; 
v_a_3147_ = lean_ctor_get(v___x_3146_, 0);
lean_inc(v_a_3147_);
lean_dec_ref_known(v___x_3146_, 1);
v___x_3148_ = lean_array_push(v_b_3136_, v_a_3147_);
v___x_3149_ = ((size_t)1ULL);
v___x_3150_ = lean_usize_add(v_i_3135_, v___x_3149_);
v_i_3135_ = v___x_3150_;
v_b_3136_ = v___x_3148_;
goto _start;
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec_ref(v_b_3136_);
v_a_3152_ = lean_ctor_get(v___x_3146_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3146_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3146_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3146_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg___boxed(lean_object* v_as_3160_, lean_object* v_sz_3161_, lean_object* v_i_3162_, lean_object* v_b_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
size_t v_sz_boxed_3169_; size_t v_i_boxed_3170_; lean_object* v_res_3171_; 
v_sz_boxed_3169_ = lean_unbox_usize(v_sz_3161_);
lean_dec(v_sz_3161_);
v_i_boxed_3170_ = lean_unbox_usize(v_i_3162_);
lean_dec(v_i_3162_);
v_res_3171_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(v_as_3160_, v_sz_boxed_3169_, v_i_boxed_3170_, v_b_3163_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec_ref(v_as_3160_);
return v_res_3171_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3(void){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; 
v___x_3179_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2));
v___x_3180_ = l_String_toRawSubstring_x27(v___x_3179_);
return v___x_3180_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3190_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8));
v___x_3191_ = l_String_toRawSubstring_x27(v___x_3190_);
return v___x_3191_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12(void){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3195_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0));
v___x_3196_ = l_String_toRawSubstring_x27(v___x_3195_);
return v___x_3196_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13(void){
_start:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3197_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0));
v___x_3198_ = l_String_toRawSubstring_x27(v___x_3197_);
return v___x_3198_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3201_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15));
v___x_3202_ = l_String_toRawSubstring_x27(v___x_3201_);
return v___x_3202_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19(void){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3206_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18));
v___x_3207_ = l_String_toRawSubstring_x27(v___x_3206_);
return v___x_3207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7(lean_object* v___x_3217_, lean_object* v___x_3218_, lean_object* v___f_3219_, lean_object* v_a_3220_, lean_object* v_inv_3221_, lean_object* v_arg_3222_, lean_object* v___x_3223_, uint8_t v___x_3224_, lean_object* v___x_3225_, lean_object* v___x_3226_, lean_object* v___x_3227_, lean_object* v___x_3228_, lean_object* v___x_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_){
_start:
{
lean_object* v_a_3240_; lean_object* v___x_3243_; 
lean_inc_ref(v___x_3218_);
lean_inc(v___x_3217_);
v___x_3243_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3217_, v___x_3218_, v___f_3219_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v_a_3244_; lean_object* v___x_3245_; 
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3243_, 1);
v___x_3245_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(v_a_3220_, v_inv_3221_, v_arg_3222_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v_a_3246_; 
v_a_3246_ = lean_ctor_get(v___x_3245_, 0);
lean_inc(v_a_3246_);
lean_dec_ref_known(v___x_3245_, 1);
if (lean_obj_tag(v_a_3246_) == 1)
{
lean_object* v_val_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3732_; 
lean_dec_ref(v_arg_3222_);
v_val_3247_ = lean_ctor_get(v_a_3246_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_a_3246_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3249_ = v_a_3246_;
v_isShared_3250_ = v_isSharedCheck_3732_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_val_3247_);
lean_dec(v_a_3246_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3732_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
if (lean_obj_tag(v_a_3244_) == 1)
{
lean_object* v_val_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3654_; 
lean_del_object(v___x_3249_);
v_val_3251_ = lean_ctor_get(v_a_3244_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_a_3244_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3253_ = v_a_3244_;
v_isShared_3254_ = v_isSharedCheck_3654_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_val_3251_);
lean_dec(v_a_3244_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3654_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v_snd_3255_; lean_object* v_fst_3256_; lean_object* v_snd_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3653_; 
v_snd_3255_ = lean_ctor_get(v_val_3251_, 1);
lean_inc(v_snd_3255_);
v_fst_3256_ = lean_ctor_get(v_val_3247_, 0);
v_snd_3257_ = lean_ctor_get(v_val_3247_, 1);
v_isSharedCheck_3653_ = !lean_is_exclusive(v_val_3247_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3259_ = v_val_3247_;
v_isShared_3260_ = v_isSharedCheck_3653_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_snd_3257_);
lean_inc(v_fst_3256_);
lean_dec(v_val_3247_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3653_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v_fst_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3651_; 
v_fst_3261_ = lean_ctor_get(v_val_3251_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v_val_3251_);
if (v_isSharedCheck_3651_ == 0)
{
lean_object* v_unused_3652_; 
v_unused_3652_ = lean_ctor_get(v_val_3251_, 1);
lean_dec(v_unused_3652_);
v___x_3263_ = v_val_3251_;
v_isShared_3264_ = v_isSharedCheck_3651_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_fst_3261_);
lean_dec(v_val_3251_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3651_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v_fst_3265_; lean_object* v_snd_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3650_; 
v_fst_3265_ = lean_ctor_get(v_snd_3255_, 0);
v_snd_3266_ = lean_ctor_get(v_snd_3255_, 1);
v_isSharedCheck_3650_ = !lean_is_exclusive(v_snd_3255_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3268_ = v_snd_3255_;
v_isShared_3269_ = v_isSharedCheck_3650_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_snd_3266_);
lean_inc(v_fst_3265_);
lean_dec(v_snd_3255_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3650_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3270_; lean_object* v___f_3271_; lean_object* v___x_3272_; 
v___x_3270_ = lean_box(v___x_3224_);
lean_inc(v___x_3225_);
v___f_3271_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___boxed), 17, 7);
lean_closure_set(v___f_3271_, 0, v_fst_3256_);
lean_closure_set(v___f_3271_, 1, v_fst_3261_);
lean_closure_set(v___f_3271_, 2, v___x_3223_);
lean_closure_set(v___f_3271_, 3, v_fst_3265_);
lean_closure_set(v___f_3271_, 4, v___x_3270_);
lean_closure_set(v___f_3271_, 5, v___x_3225_);
lean_closure_set(v___f_3271_, 6, v_snd_3257_);
lean_inc(v___x_3217_);
v___x_3272_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3217_, v___x_3218_, v___f_3271_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v_a_3273_; lean_object* v_fst_3274_; lean_object* v_snd_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3641_; 
v_a_3273_ = lean_ctor_get(v___x_3272_, 0);
lean_inc(v_a_3273_);
lean_dec_ref_known(v___x_3272_, 1);
v_fst_3274_ = lean_ctor_get(v_a_3273_, 0);
v_snd_3275_ = lean_ctor_get(v_a_3273_, 1);
v_isSharedCheck_3641_ = !lean_is_exclusive(v_a_3273_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3277_ = v_a_3273_;
v_isShared_3278_ = v_isSharedCheck_3641_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_snd_3275_);
lean_inc(v_fst_3274_);
lean_dec(v_a_3273_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3641_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v_points_3279_; lean_object* v_default_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3640_; 
v_points_3279_ = lean_ctor_get(v_snd_3266_, 0);
v_default_3280_ = lean_ctor_get(v_snd_3266_, 1);
v_isSharedCheck_3640_ = !lean_is_exclusive(v_snd_3266_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3282_ = v_snd_3266_;
v_isShared_3283_ = v_isSharedCheck_3640_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_default_3280_);
lean_inc(v_points_3279_);
lean_dec(v_snd_3266_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3640_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3284_; uint8_t v___x_3285_; 
v___x_3284_ = lean_array_get_size(v_points_3279_);
v___x_3285_ = lean_nat_dec_eq(v___x_3284_, v___x_3225_);
if (v___x_3285_ == 0)
{
lean_object* v___x_3286_; size_t v_sz_3287_; size_t v___x_3288_; lean_object* v___x_3289_; 
lean_del_object(v___x_3253_);
v___x_3286_ = lean_mk_empty_array_with_capacity(v___x_3225_);
lean_dec(v___x_3225_);
v_sz_3287_ = lean_array_size(v_points_3279_);
v___x_3288_ = ((size_t)0ULL);
v___x_3289_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(v_points_3279_, v_sz_3287_, v___x_3288_, v___x_3286_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
lean_dec_ref(v_points_3279_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3291_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3290_);
lean_dec_ref_known(v___x_3289_, 1);
v___x_3291_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(v_a_3290_, v_default_3280_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
lean_dec(v_a_3290_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_toCold_3292_; lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3375_; 
v_toCold_3292_ = lean_ctor_get(v___y_3236_, 0);
lean_inc_ref(v_toCold_3292_);
v_a_3293_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3295_ = v___x_3291_;
v_isShared_3296_ = v_isSharedCheck_3375_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3291_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3375_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v_ref_3297_; lean_object* v_quotContext_3298_; lean_object* v_currMacroScope_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3309_; 
v_ref_3297_ = lean_ctor_get(v___y_3236_, 2);
lean_inc(v_ref_3297_);
lean_dec_ref(v___y_3236_);
v_quotContext_3298_ = lean_ctor_get(v_toCold_3292_, 8);
lean_inc_n(v_quotContext_3298_, 2);
v_currMacroScope_3299_ = lean_ctor_get(v_toCold_3292_, 9);
lean_inc_n(v_currMacroScope_3299_, 2);
lean_dec_ref(v_toCold_3292_);
v___x_3300_ = l_Lean_SourceInfo_fromRef(v_ref_3297_, v___x_3285_);
lean_dec(v_ref_3297_);
v___x_3301_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3302_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3303_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3226_);
v___x_3304_ = l_Lean_Name_mkStr2(v___x_3226_, v___x_3303_);
v___x_3305_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3304_, v_currMacroScope_3299_);
v___x_3306_ = l_Lean_Name_mkStr4(v___x_3227_, v___x_3228_, v___x_3226_, v___x_3303_);
v___x_3307_ = lean_box(0);
lean_inc(v___x_3306_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set_tag(v___x_3282_, 1);
lean_ctor_set(v___x_3282_, 1, v___x_3307_);
lean_ctor_set(v___x_3282_, 0, v___x_3306_);
v___x_3309_ = v___x_3282_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v___x_3306_);
lean_ctor_set(v_reuseFailAlloc_3374_, 1, v___x_3307_);
v___x_3309_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
lean_object* v___x_3311_; 
if (v_isShared_3296_ == 0)
{
lean_ctor_set(v___x_3295_, 0, v___x_3306_);
v___x_3311_ = v___x_3295_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v___x_3306_);
v___x_3311_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
lean_object* v___x_3313_; 
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 1);
lean_ctor_set(v___x_3277_, 1, v___x_3307_);
lean_ctor_set(v___x_3277_, 0, v___x_3311_);
v___x_3313_ = v___x_3277_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v___x_3311_);
lean_ctor_set(v_reuseFailAlloc_3372_, 1, v___x_3307_);
v___x_3313_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
lean_object* v___x_3315_; 
if (v_isShared_3269_ == 0)
{
lean_ctor_set_tag(v___x_3268_, 1);
lean_ctor_set(v___x_3268_, 1, v___x_3313_);
lean_ctor_set(v___x_3268_, 0, v___x_3309_);
v___x_3315_ = v___x_3268_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v___x_3309_);
lean_ctor_set(v_reuseFailAlloc_3371_, 1, v___x_3313_);
v___x_3315_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3321_; 
lean_inc_n(v___x_3300_, 2);
v___x_3316_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3300_);
lean_ctor_set(v___x_3316_, 1, v___x_3302_);
lean_ctor_set(v___x_3316_, 2, v___x_3305_);
lean_ctor_set(v___x_3316_, 3, v___x_3315_);
v___x_3317_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3318_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3319_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3264_ == 0)
{
lean_ctor_set_tag(v___x_3263_, 2);
lean_ctor_set(v___x_3263_, 1, v___x_3319_);
lean_ctor_set(v___x_3263_, 0, v___x_3300_);
v___x_3321_ = v___x_3263_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v___x_3300_);
lean_ctor_set(v_reuseFailAlloc_3370_, 1, v___x_3319_);
v___x_3321_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3328_; 
v___x_3322_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3323_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3299_);
lean_inc(v_quotContext_3298_);
v___x_3324_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3323_, v_currMacroScope_3299_);
lean_inc_n(v___x_3300_, 2);
v___x_3325_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3325_, 0, v___x_3300_);
lean_ctor_set(v___x_3325_, 1, v___x_3322_);
lean_ctor_set(v___x_3325_, 2, v___x_3324_);
lean_ctor_set(v___x_3325_, 3, v___x_3307_);
v___x_3326_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3260_ == 0)
{
lean_ctor_set_tag(v___x_3259_, 2);
lean_ctor_set(v___x_3259_, 1, v___x_3326_);
lean_ctor_set(v___x_3259_, 0, v___x_3300_);
v___x_3328_ = v___x_3259_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v___x_3300_);
lean_ctor_set(v_reuseFailAlloc_3369_, 1, v___x_3326_);
v___x_3328_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3329_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_3330_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1));
lean_inc_n(v___x_3300_, 19);
v___x_3331_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3300_);
lean_ctor_set(v___x_3331_, 1, v___x_3329_);
v___x_3332_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_3333_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3334_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3299_, 4);
lean_inc_n(v_quotContext_3298_, 4);
v___x_3335_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3334_, v_currMacroScope_3299_);
v___x_3336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3300_);
lean_ctor_set(v___x_3336_, 1, v___x_3333_);
lean_ctor_set(v___x_3336_, 2, v___x_3335_);
lean_ctor_set(v___x_3336_, 3, v___x_3307_);
v___x_3337_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3338_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3339_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3338_, v_currMacroScope_3299_);
v___x_3340_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3300_);
lean_ctor_set(v___x_3340_, 1, v___x_3337_);
lean_ctor_set(v___x_3340_, 2, v___x_3339_);
lean_ctor_set(v___x_3340_, 3, v___x_3307_);
lean_inc_ref(v___x_3340_);
v___x_3341_ = l_Lean_Syntax_node2(v___x_3300_, v___x_3317_, v___x_3336_, v___x_3340_);
v___x_3342_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3343_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3300_);
lean_ctor_set(v___x_3343_, 1, v___x_3317_);
lean_ctor_set(v___x_3343_, 2, v___x_3342_);
v___x_3344_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3300_);
lean_ctor_set(v___x_3345_, 1, v___x_3344_);
lean_inc_ref(v___x_3345_);
lean_inc_ref(v___x_3343_);
v___x_3346_ = l_Lean_Syntax_node4(v___x_3300_, v___x_3332_, v___x_3341_, v___x_3343_, v___x_3345_, v_snd_3275_);
lean_inc_ref(v___x_3331_);
v___x_3347_ = l_Lean_Syntax_node2(v___x_3300_, v___x_3330_, v___x_3331_, v___x_3346_);
v___x_3348_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3300_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
lean_inc_ref_n(v___x_3349_, 2);
lean_inc_ref_n(v___x_3328_, 2);
lean_inc_ref_n(v___x_3321_, 2);
v___x_3350_ = l_Lean_Syntax_node5(v___x_3300_, v___x_3318_, v___x_3321_, v___x_3325_, v___x_3328_, v___x_3347_, v___x_3349_);
v___x_3351_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3352_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3353_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3352_, v_currMacroScope_3299_);
v___x_3354_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3300_);
lean_ctor_set(v___x_3354_, 1, v___x_3351_);
lean_ctor_set(v___x_3354_, 2, v___x_3353_);
lean_ctor_set(v___x_3354_, 3, v___x_3307_);
v___x_3355_ = l_String_toRawSubstring_x27(v___x_3229_);
v___x_3356_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3217_, v_currMacroScope_3299_);
v___x_3357_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3300_);
lean_ctor_set(v___x_3357_, 1, v___x_3355_);
lean_ctor_set(v___x_3357_, 2, v___x_3356_);
lean_ctor_set(v___x_3357_, 3, v___x_3307_);
v___x_3358_ = l_Lean_Syntax_node2(v___x_3300_, v___x_3317_, v___x_3357_, v___x_3340_);
v___x_3359_ = l_Lean_Syntax_node4(v___x_3300_, v___x_3332_, v___x_3358_, v___x_3343_, v___x_3345_, v_fst_3274_);
v___x_3360_ = l_Lean_Syntax_node2(v___x_3300_, v___x_3330_, v___x_3331_, v___x_3359_);
v___x_3361_ = l_Lean_Syntax_node5(v___x_3300_, v___x_3318_, v___x_3321_, v___x_3354_, v___x_3328_, v___x_3360_, v___x_3349_);
v___x_3362_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19);
v___x_3363_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20));
v___x_3364_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3363_, v_currMacroScope_3299_);
v___x_3365_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3300_);
lean_ctor_set(v___x_3365_, 1, v___x_3362_);
lean_ctor_set(v___x_3365_, 2, v___x_3364_);
lean_ctor_set(v___x_3365_, 3, v___x_3307_);
v___x_3366_ = l_Lean_Syntax_node5(v___x_3300_, v___x_3318_, v___x_3321_, v___x_3365_, v___x_3328_, v_a_3293_, v___x_3349_);
v___x_3367_ = l_Lean_Syntax_node3(v___x_3300_, v___x_3317_, v___x_3350_, v___x_3361_, v___x_3366_);
v___x_3368_ = l_Lean_Syntax_node2(v___x_3300_, v___x_3301_, v___x_3316_, v___x_3367_);
v_a_3240_ = v___x_3368_;
goto v___jp_3239_;
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
lean_del_object(v___x_3282_);
lean_del_object(v___x_3277_);
lean_dec(v_snd_3275_);
lean_dec(v_fst_3274_);
lean_del_object(v___x_3268_);
lean_del_object(v___x_3263_);
lean_del_object(v___x_3259_);
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___x_3229_);
lean_dec_ref(v___x_3228_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3226_);
lean_dec(v___x_3217_);
return v___x_3291_;
}
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_del_object(v___x_3282_);
lean_dec(v_default_3280_);
lean_del_object(v___x_3277_);
lean_dec(v_snd_3275_);
lean_dec(v_fst_3274_);
lean_del_object(v___x_3268_);
lean_del_object(v___x_3263_);
lean_del_object(v___x_3259_);
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___x_3229_);
lean_dec_ref(v___x_3228_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3226_);
lean_dec(v___x_3217_);
v_a_3376_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3289_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3289_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
else
{
lean_dec_ref(v_points_3279_);
lean_dec(v___x_3225_);
switch(lean_obj_tag(v_default_3280_))
{
case 2:
{
lean_object* v_toCold_3384_; lean_object* v_ref_3385_; lean_object* v_quotContext_3386_; lean_object* v_currMacroScope_3387_; uint8_t v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3398_; 
v_toCold_3384_ = lean_ctor_get(v___y_3236_, 0);
lean_inc_ref(v_toCold_3384_);
v_ref_3385_ = lean_ctor_get(v___y_3236_, 2);
lean_inc(v_ref_3385_);
lean_dec_ref(v___y_3236_);
v_quotContext_3386_ = lean_ctor_get(v_toCold_3384_, 8);
lean_inc_n(v_quotContext_3386_, 2);
v_currMacroScope_3387_ = lean_ctor_get(v_toCold_3384_, 9);
lean_inc_n(v_currMacroScope_3387_, 2);
lean_dec_ref(v_toCold_3384_);
v___x_3388_ = 0;
v___x_3389_ = l_Lean_SourceInfo_fromRef(v_ref_3385_, v___x_3388_);
lean_dec(v_ref_3385_);
v___x_3390_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3391_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3392_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3226_);
v___x_3393_ = l_Lean_Name_mkStr2(v___x_3226_, v___x_3392_);
v___x_3394_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3393_, v_currMacroScope_3387_);
lean_inc_ref(v___x_3228_);
lean_inc_ref(v___x_3227_);
v___x_3395_ = l_Lean_Name_mkStr4(v___x_3227_, v___x_3228_, v___x_3226_, v___x_3392_);
v___x_3396_ = lean_box(0);
lean_inc(v___x_3395_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set_tag(v___x_3282_, 1);
lean_ctor_set(v___x_3282_, 1, v___x_3396_);
lean_ctor_set(v___x_3282_, 0, v___x_3395_);
v___x_3398_ = v___x_3282_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v___x_3395_);
lean_ctor_set(v_reuseFailAlloc_3474_, 1, v___x_3396_);
v___x_3398_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
lean_object* v___x_3400_; 
if (v_isShared_3254_ == 0)
{
lean_ctor_set_tag(v___x_3253_, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3395_);
v___x_3400_ = v___x_3253_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v___x_3395_);
v___x_3400_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
lean_object* v___x_3402_; 
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 1);
lean_ctor_set(v___x_3277_, 1, v___x_3396_);
lean_ctor_set(v___x_3277_, 0, v___x_3400_);
v___x_3402_ = v___x_3277_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3400_);
lean_ctor_set(v_reuseFailAlloc_3472_, 1, v___x_3396_);
v___x_3402_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
lean_object* v___x_3404_; 
if (v_isShared_3269_ == 0)
{
lean_ctor_set_tag(v___x_3268_, 1);
lean_ctor_set(v___x_3268_, 1, v___x_3402_);
lean_ctor_set(v___x_3268_, 0, v___x_3398_);
v___x_3404_ = v___x_3268_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v___x_3398_);
lean_ctor_set(v_reuseFailAlloc_3471_, 1, v___x_3402_);
v___x_3404_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3410_; 
lean_inc_n(v___x_3389_, 2);
v___x_3405_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3389_);
lean_ctor_set(v___x_3405_, 1, v___x_3391_);
lean_ctor_set(v___x_3405_, 2, v___x_3394_);
lean_ctor_set(v___x_3405_, 3, v___x_3404_);
v___x_3406_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3407_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3408_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3264_ == 0)
{
lean_ctor_set_tag(v___x_3263_, 2);
lean_ctor_set(v___x_3263_, 1, v___x_3408_);
lean_ctor_set(v___x_3263_, 0, v___x_3389_);
v___x_3410_ = v___x_3263_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v___x_3389_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3417_; 
v___x_3411_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3412_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3387_);
lean_inc(v_quotContext_3386_);
v___x_3413_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3412_, v_currMacroScope_3387_);
lean_inc_n(v___x_3389_, 2);
v___x_3414_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3389_);
lean_ctor_set(v___x_3414_, 1, v___x_3411_);
lean_ctor_set(v___x_3414_, 2, v___x_3413_);
lean_ctor_set(v___x_3414_, 3, v___x_3396_);
v___x_3415_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3260_ == 0)
{
lean_ctor_set_tag(v___x_3259_, 2);
lean_ctor_set(v___x_3259_, 1, v___x_3415_);
lean_ctor_set(v___x_3259_, 0, v___x_3389_);
v___x_3417_ = v___x_3259_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v___x_3389_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v___x_3415_);
v___x_3417_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3418_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_3419_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1));
lean_inc_n(v___x_3389_, 22);
v___x_3420_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3389_);
lean_ctor_set(v___x_3420_, 1, v___x_3418_);
v___x_3421_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_3422_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3423_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3387_, 5);
lean_inc_n(v_quotContext_3386_, 5);
v___x_3424_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3423_, v_currMacroScope_3387_);
v___x_3425_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3389_);
lean_ctor_set(v___x_3425_, 1, v___x_3422_);
lean_ctor_set(v___x_3425_, 2, v___x_3424_);
lean_ctor_set(v___x_3425_, 3, v___x_3396_);
v___x_3426_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3427_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3428_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3427_, v_currMacroScope_3387_);
v___x_3429_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3389_);
lean_ctor_set(v___x_3429_, 1, v___x_3426_);
lean_ctor_set(v___x_3429_, 2, v___x_3428_);
lean_ctor_set(v___x_3429_, 3, v___x_3396_);
lean_inc_ref(v___x_3429_);
v___x_3430_ = l_Lean_Syntax_node2(v___x_3389_, v___x_3406_, v___x_3425_, v___x_3429_);
v___x_3431_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3432_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3389_);
lean_ctor_set(v___x_3432_, 1, v___x_3406_);
lean_ctor_set(v___x_3432_, 2, v___x_3431_);
v___x_3433_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3434_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3389_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
lean_inc_ref(v___x_3434_);
lean_inc_ref(v___x_3432_);
v___x_3435_ = l_Lean_Syntax_node4(v___x_3389_, v___x_3421_, v___x_3430_, v___x_3432_, v___x_3434_, v_snd_3275_);
lean_inc_ref(v___x_3420_);
v___x_3436_ = l_Lean_Syntax_node2(v___x_3389_, v___x_3419_, v___x_3420_, v___x_3435_);
v___x_3437_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3438_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3389_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
lean_inc_ref_n(v___x_3438_, 2);
lean_inc_ref_n(v___x_3417_, 2);
lean_inc_ref_n(v___x_3410_, 2);
v___x_3439_ = l_Lean_Syntax_node5(v___x_3389_, v___x_3407_, v___x_3410_, v___x_3414_, v___x_3417_, v___x_3436_, v___x_3438_);
v___x_3440_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3441_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3442_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3441_, v_currMacroScope_3387_);
v___x_3443_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3389_);
lean_ctor_set(v___x_3443_, 1, v___x_3440_);
lean_ctor_set(v___x_3443_, 2, v___x_3442_);
lean_ctor_set(v___x_3443_, 3, v___x_3396_);
v___x_3444_ = l_String_toRawSubstring_x27(v___x_3229_);
v___x_3445_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3217_, v_currMacroScope_3387_);
v___x_3446_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3389_);
lean_ctor_set(v___x_3446_, 1, v___x_3444_);
lean_ctor_set(v___x_3446_, 2, v___x_3445_);
lean_ctor_set(v___x_3446_, 3, v___x_3396_);
v___x_3447_ = l_Lean_Syntax_node2(v___x_3389_, v___x_3406_, v___x_3446_, v___x_3429_);
v___x_3448_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19);
v___x_3449_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20));
v___x_3450_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3449_, v_currMacroScope_3387_);
v___x_3451_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3389_);
lean_ctor_set(v___x_3451_, 1, v___x_3448_);
lean_ctor_set(v___x_3451_, 2, v___x_3450_);
lean_ctor_set(v___x_3451_, 3, v___x_3396_);
v___x_3452_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29);
v___x_3453_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0));
v___x_3454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7));
v___x_3455_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30));
v___x_3456_ = l_Lean_addMacroScope(v_quotContext_3386_, v___x_3455_, v_currMacroScope_3387_);
v___x_3457_ = l_Lean_Name_mkStr4(v___x_3227_, v___x_3228_, v___x_3453_, v___x_3454_);
v___x_3458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
lean_ctor_set(v___x_3458_, 1, v___x_3396_);
v___x_3459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3458_);
lean_ctor_set(v___x_3459_, 1, v___x_3396_);
v___x_3460_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3389_);
lean_ctor_set(v___x_3460_, 1, v___x_3452_);
lean_ctor_set(v___x_3460_, 2, v___x_3456_);
lean_ctor_set(v___x_3460_, 3, v___x_3459_);
v___x_3461_ = l_Lean_Syntax_node5(v___x_3389_, v___x_3407_, v___x_3410_, v___x_3451_, v___x_3417_, v___x_3460_, v___x_3438_);
v___x_3462_ = l_Lean_Syntax_node1(v___x_3389_, v___x_3406_, v___x_3461_);
v___x_3463_ = l_Lean_Syntax_node2(v___x_3389_, v___x_3390_, v_fst_3274_, v___x_3462_);
v___x_3464_ = l_Lean_Syntax_node4(v___x_3389_, v___x_3421_, v___x_3447_, v___x_3432_, v___x_3434_, v___x_3463_);
v___x_3465_ = l_Lean_Syntax_node2(v___x_3389_, v___x_3419_, v___x_3420_, v___x_3464_);
v___x_3466_ = l_Lean_Syntax_node5(v___x_3389_, v___x_3407_, v___x_3410_, v___x_3443_, v___x_3417_, v___x_3465_, v___x_3438_);
v___x_3467_ = l_Lean_Syntax_node2(v___x_3389_, v___x_3406_, v___x_3439_, v___x_3466_);
v___x_3468_ = l_Lean_Syntax_node2(v___x_3389_, v___x_3390_, v___x_3405_, v___x_3467_);
v_a_3240_ = v___x_3468_;
goto v___jp_3239_;
}
}
}
}
}
}
}
case 3:
{
lean_object* v_e_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
lean_del_object(v___x_3253_);
v_e_3475_ = lean_ctor_get(v_default_3280_, 0);
lean_inc_ref(v_e_3475_);
lean_dec_ref_known(v_default_3280_, 1);
v___x_3476_ = lean_box(1);
v___x_3477_ = l_Lean_PrettyPrinter_delab(v_e_3475_, v___x_3476_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_toCold_3478_; lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3564_; 
v_toCold_3478_ = lean_ctor_get(v___y_3236_, 0);
lean_inc_ref(v_toCold_3478_);
v_a_3479_ = lean_ctor_get(v___x_3477_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3481_ = v___x_3477_;
v_isShared_3482_ = v_isSharedCheck_3564_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3477_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3564_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v_ref_3483_; lean_object* v_quotContext_3484_; lean_object* v_currMacroScope_3485_; uint8_t v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3496_; 
v_ref_3483_ = lean_ctor_get(v___y_3236_, 2);
lean_inc(v_ref_3483_);
lean_dec_ref(v___y_3236_);
v_quotContext_3484_ = lean_ctor_get(v_toCold_3478_, 8);
lean_inc_n(v_quotContext_3484_, 2);
v_currMacroScope_3485_ = lean_ctor_get(v_toCold_3478_, 9);
lean_inc_n(v_currMacroScope_3485_, 2);
lean_dec_ref(v_toCold_3478_);
v___x_3486_ = 0;
v___x_3487_ = l_Lean_SourceInfo_fromRef(v_ref_3483_, v___x_3486_);
lean_dec(v_ref_3483_);
v___x_3488_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3489_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3490_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3226_);
v___x_3491_ = l_Lean_Name_mkStr2(v___x_3226_, v___x_3490_);
v___x_3492_ = l_Lean_addMacroScope(v_quotContext_3484_, v___x_3491_, v_currMacroScope_3485_);
v___x_3493_ = l_Lean_Name_mkStr4(v___x_3227_, v___x_3228_, v___x_3226_, v___x_3490_);
v___x_3494_ = lean_box(0);
lean_inc(v___x_3493_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set_tag(v___x_3282_, 1);
lean_ctor_set(v___x_3282_, 1, v___x_3494_);
lean_ctor_set(v___x_3282_, 0, v___x_3493_);
v___x_3496_ = v___x_3282_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v___x_3493_);
lean_ctor_set(v_reuseFailAlloc_3563_, 1, v___x_3494_);
v___x_3496_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
lean_object* v___x_3498_; 
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 0, v___x_3493_);
v___x_3498_ = v___x_3481_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v___x_3493_);
v___x_3498_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
lean_object* v___x_3500_; 
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 1);
lean_ctor_set(v___x_3277_, 1, v___x_3494_);
lean_ctor_set(v___x_3277_, 0, v___x_3498_);
v___x_3500_ = v___x_3277_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v___x_3498_);
lean_ctor_set(v_reuseFailAlloc_3561_, 1, v___x_3494_);
v___x_3500_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
lean_object* v___x_3502_; 
if (v_isShared_3269_ == 0)
{
lean_ctor_set_tag(v___x_3268_, 1);
lean_ctor_set(v___x_3268_, 1, v___x_3500_);
lean_ctor_set(v___x_3268_, 0, v___x_3496_);
v___x_3502_ = v___x_3268_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v___x_3496_);
lean_ctor_set(v_reuseFailAlloc_3560_, 1, v___x_3500_);
v___x_3502_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3508_; 
lean_inc_n(v___x_3487_, 2);
v___x_3503_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3487_);
lean_ctor_set(v___x_3503_, 1, v___x_3489_);
lean_ctor_set(v___x_3503_, 2, v___x_3492_);
lean_ctor_set(v___x_3503_, 3, v___x_3502_);
v___x_3504_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3505_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3506_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3264_ == 0)
{
lean_ctor_set_tag(v___x_3263_, 2);
lean_ctor_set(v___x_3263_, 1, v___x_3506_);
lean_ctor_set(v___x_3263_, 0, v___x_3487_);
v___x_3508_ = v___x_3263_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v___x_3487_);
lean_ctor_set(v_reuseFailAlloc_3559_, 1, v___x_3506_);
v___x_3508_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3515_; 
v___x_3509_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3510_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3485_);
lean_inc(v_quotContext_3484_);
v___x_3511_ = l_Lean_addMacroScope(v_quotContext_3484_, v___x_3510_, v_currMacroScope_3485_);
lean_inc_n(v___x_3487_, 2);
v___x_3512_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3487_);
lean_ctor_set(v___x_3512_, 1, v___x_3509_);
lean_ctor_set(v___x_3512_, 2, v___x_3511_);
lean_ctor_set(v___x_3512_, 3, v___x_3494_);
v___x_3513_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3260_ == 0)
{
lean_ctor_set_tag(v___x_3259_, 2);
lean_ctor_set(v___x_3259_, 1, v___x_3513_);
lean_ctor_set(v___x_3259_, 0, v___x_3487_);
v___x_3515_ = v___x_3259_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v___x_3487_);
lean_ctor_set(v_reuseFailAlloc_3558_, 1, v___x_3513_);
v___x_3515_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3516_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_3517_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1));
lean_inc_n(v___x_3487_, 21);
v___x_3518_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3487_);
lean_ctor_set(v___x_3518_, 1, v___x_3516_);
v___x_3519_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_3520_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3521_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3485_, 4);
lean_inc_n(v_quotContext_3484_, 4);
v___x_3522_ = l_Lean_addMacroScope(v_quotContext_3484_, v___x_3521_, v_currMacroScope_3485_);
v___x_3523_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3487_);
lean_ctor_set(v___x_3523_, 1, v___x_3520_);
lean_ctor_set(v___x_3523_, 2, v___x_3522_);
lean_ctor_set(v___x_3523_, 3, v___x_3494_);
v___x_3524_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3525_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3526_ = l_Lean_addMacroScope(v_quotContext_3484_, v___x_3525_, v_currMacroScope_3485_);
v___x_3527_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3487_);
lean_ctor_set(v___x_3527_, 1, v___x_3524_);
lean_ctor_set(v___x_3527_, 2, v___x_3526_);
lean_ctor_set(v___x_3527_, 3, v___x_3494_);
lean_inc_ref(v___x_3527_);
v___x_3528_ = l_Lean_Syntax_node2(v___x_3487_, v___x_3504_, v___x_3523_, v___x_3527_);
v___x_3529_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3530_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3487_);
lean_ctor_set(v___x_3530_, 1, v___x_3504_);
lean_ctor_set(v___x_3530_, 2, v___x_3529_);
v___x_3531_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3532_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3487_);
lean_ctor_set(v___x_3532_, 1, v___x_3531_);
lean_inc_ref(v___x_3532_);
lean_inc_ref(v___x_3530_);
v___x_3533_ = l_Lean_Syntax_node4(v___x_3487_, v___x_3519_, v___x_3528_, v___x_3530_, v___x_3532_, v_snd_3275_);
lean_inc_ref(v___x_3518_);
v___x_3534_ = l_Lean_Syntax_node2(v___x_3487_, v___x_3517_, v___x_3518_, v___x_3533_);
v___x_3535_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3536_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3487_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
lean_inc_ref_n(v___x_3536_, 2);
lean_inc_ref_n(v___x_3515_, 2);
lean_inc_ref_n(v___x_3508_, 2);
v___x_3537_ = l_Lean_Syntax_node5(v___x_3487_, v___x_3505_, v___x_3508_, v___x_3512_, v___x_3515_, v___x_3534_, v___x_3536_);
v___x_3538_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3539_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3540_ = l_Lean_addMacroScope(v_quotContext_3484_, v___x_3539_, v_currMacroScope_3485_);
v___x_3541_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3487_);
lean_ctor_set(v___x_3541_, 1, v___x_3538_);
lean_ctor_set(v___x_3541_, 2, v___x_3540_);
lean_ctor_set(v___x_3541_, 3, v___x_3494_);
v___x_3542_ = l_String_toRawSubstring_x27(v___x_3229_);
v___x_3543_ = l_Lean_addMacroScope(v_quotContext_3484_, v___x_3217_, v_currMacroScope_3485_);
v___x_3544_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3487_);
lean_ctor_set(v___x_3544_, 1, v___x_3542_);
lean_ctor_set(v___x_3544_, 2, v___x_3543_);
lean_ctor_set(v___x_3544_, 3, v___x_3494_);
v___x_3545_ = l_Lean_Syntax_node2(v___x_3487_, v___x_3504_, v___x_3544_, v___x_3527_);
v___x_3546_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19);
v___x_3547_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20));
v___x_3548_ = l_Lean_addMacroScope(v_quotContext_3484_, v___x_3547_, v_currMacroScope_3485_);
v___x_3549_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3487_);
lean_ctor_set(v___x_3549_, 1, v___x_3546_);
lean_ctor_set(v___x_3549_, 2, v___x_3548_);
lean_ctor_set(v___x_3549_, 3, v___x_3494_);
v___x_3550_ = l_Lean_Syntax_node5(v___x_3487_, v___x_3505_, v___x_3508_, v___x_3549_, v___x_3515_, v_a_3479_, v___x_3536_);
v___x_3551_ = l_Lean_Syntax_node1(v___x_3487_, v___x_3504_, v___x_3550_);
v___x_3552_ = l_Lean_Syntax_node2(v___x_3487_, v___x_3488_, v_fst_3274_, v___x_3551_);
v___x_3553_ = l_Lean_Syntax_node4(v___x_3487_, v___x_3519_, v___x_3545_, v___x_3530_, v___x_3532_, v___x_3552_);
v___x_3554_ = l_Lean_Syntax_node2(v___x_3487_, v___x_3517_, v___x_3518_, v___x_3553_);
v___x_3555_ = l_Lean_Syntax_node5(v___x_3487_, v___x_3505_, v___x_3508_, v___x_3541_, v___x_3515_, v___x_3554_, v___x_3536_);
v___x_3556_ = l_Lean_Syntax_node2(v___x_3487_, v___x_3504_, v___x_3537_, v___x_3555_);
v___x_3557_ = l_Lean_Syntax_node2(v___x_3487_, v___x_3488_, v___x_3503_, v___x_3556_);
v_a_3240_ = v___x_3557_;
goto v___jp_3239_;
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
lean_del_object(v___x_3282_);
lean_del_object(v___x_3277_);
lean_dec(v_snd_3275_);
lean_dec(v_fst_3274_);
lean_del_object(v___x_3268_);
lean_del_object(v___x_3263_);
lean_del_object(v___x_3259_);
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___x_3229_);
lean_dec_ref(v___x_3228_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3226_);
lean_dec(v___x_3217_);
return v___x_3477_;
}
}
default: 
{
lean_object* v_toCold_3565_; lean_object* v_ref_3566_; lean_object* v_quotContext_3567_; lean_object* v_currMacroScope_3568_; uint8_t v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3579_; 
lean_dec(v_default_3280_);
v_toCold_3565_ = lean_ctor_get(v___y_3236_, 0);
lean_inc_ref(v_toCold_3565_);
v_ref_3566_ = lean_ctor_get(v___y_3236_, 2);
lean_inc(v_ref_3566_);
lean_dec_ref(v___y_3236_);
v_quotContext_3567_ = lean_ctor_get(v_toCold_3565_, 8);
lean_inc_n(v_quotContext_3567_, 2);
v_currMacroScope_3568_ = lean_ctor_get(v_toCold_3565_, 9);
lean_inc_n(v_currMacroScope_3568_, 2);
lean_dec_ref(v_toCold_3565_);
v___x_3569_ = 0;
v___x_3570_ = l_Lean_SourceInfo_fromRef(v_ref_3566_, v___x_3569_);
lean_dec(v_ref_3566_);
v___x_3571_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3572_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3573_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3226_);
v___x_3574_ = l_Lean_Name_mkStr2(v___x_3226_, v___x_3573_);
v___x_3575_ = l_Lean_addMacroScope(v_quotContext_3567_, v___x_3574_, v_currMacroScope_3568_);
v___x_3576_ = l_Lean_Name_mkStr4(v___x_3227_, v___x_3228_, v___x_3226_, v___x_3573_);
v___x_3577_ = lean_box(0);
lean_inc(v___x_3576_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set_tag(v___x_3282_, 1);
lean_ctor_set(v___x_3282_, 1, v___x_3577_);
lean_ctor_set(v___x_3282_, 0, v___x_3576_);
v___x_3579_ = v___x_3282_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3576_);
lean_ctor_set(v_reuseFailAlloc_3639_, 1, v___x_3577_);
v___x_3579_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
lean_object* v___x_3581_; 
if (v_isShared_3254_ == 0)
{
lean_ctor_set_tag(v___x_3253_, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3576_);
v___x_3581_ = v___x_3253_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3576_);
v___x_3581_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
lean_object* v___x_3583_; 
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 1);
lean_ctor_set(v___x_3277_, 1, v___x_3577_);
lean_ctor_set(v___x_3277_, 0, v___x_3581_);
v___x_3583_ = v___x_3277_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v___x_3581_);
lean_ctor_set(v_reuseFailAlloc_3637_, 1, v___x_3577_);
v___x_3583_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
lean_object* v___x_3585_; 
if (v_isShared_3269_ == 0)
{
lean_ctor_set_tag(v___x_3268_, 1);
lean_ctor_set(v___x_3268_, 1, v___x_3583_);
lean_ctor_set(v___x_3268_, 0, v___x_3579_);
v___x_3585_ = v___x_3268_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v___x_3579_);
lean_ctor_set(v_reuseFailAlloc_3636_, 1, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3591_; 
lean_inc_n(v___x_3570_, 2);
v___x_3586_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3570_);
lean_ctor_set(v___x_3586_, 1, v___x_3572_);
lean_ctor_set(v___x_3586_, 2, v___x_3575_);
lean_ctor_set(v___x_3586_, 3, v___x_3585_);
v___x_3587_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3588_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3589_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3264_ == 0)
{
lean_ctor_set_tag(v___x_3263_, 2);
lean_ctor_set(v___x_3263_, 1, v___x_3589_);
lean_ctor_set(v___x_3263_, 0, v___x_3570_);
v___x_3591_ = v___x_3263_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v___x_3570_);
lean_ctor_set(v_reuseFailAlloc_3635_, 1, v___x_3589_);
v___x_3591_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3598_; 
v___x_3592_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3593_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3568_);
lean_inc(v_quotContext_3567_);
v___x_3594_ = l_Lean_addMacroScope(v_quotContext_3567_, v___x_3593_, v_currMacroScope_3568_);
lean_inc_n(v___x_3570_, 2);
v___x_3595_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3570_);
lean_ctor_set(v___x_3595_, 1, v___x_3592_);
lean_ctor_set(v___x_3595_, 2, v___x_3594_);
lean_ctor_set(v___x_3595_, 3, v___x_3577_);
v___x_3596_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3260_ == 0)
{
lean_ctor_set_tag(v___x_3259_, 2);
lean_ctor_set(v___x_3259_, 1, v___x_3596_);
lean_ctor_set(v___x_3259_, 0, v___x_3570_);
v___x_3598_ = v___x_3259_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3570_);
lean_ctor_set(v_reuseFailAlloc_3634_, 1, v___x_3596_);
v___x_3598_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3599_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_3600_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1));
lean_inc_n(v___x_3570_, 17);
v___x_3601_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3570_);
lean_ctor_set(v___x_3601_, 1, v___x_3599_);
v___x_3602_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_3603_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3604_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3568_, 3);
lean_inc_n(v_quotContext_3567_, 3);
v___x_3605_ = l_Lean_addMacroScope(v_quotContext_3567_, v___x_3604_, v_currMacroScope_3568_);
v___x_3606_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3570_);
lean_ctor_set(v___x_3606_, 1, v___x_3603_);
lean_ctor_set(v___x_3606_, 2, v___x_3605_);
lean_ctor_set(v___x_3606_, 3, v___x_3577_);
v___x_3607_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3608_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3609_ = l_Lean_addMacroScope(v_quotContext_3567_, v___x_3608_, v_currMacroScope_3568_);
v___x_3610_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3570_);
lean_ctor_set(v___x_3610_, 1, v___x_3607_);
lean_ctor_set(v___x_3610_, 2, v___x_3609_);
lean_ctor_set(v___x_3610_, 3, v___x_3577_);
lean_inc_ref(v___x_3610_);
v___x_3611_ = l_Lean_Syntax_node2(v___x_3570_, v___x_3587_, v___x_3606_, v___x_3610_);
v___x_3612_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3613_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3570_);
lean_ctor_set(v___x_3613_, 1, v___x_3587_);
lean_ctor_set(v___x_3613_, 2, v___x_3612_);
v___x_3614_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3615_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3570_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
lean_inc_ref(v___x_3615_);
lean_inc_ref(v___x_3613_);
v___x_3616_ = l_Lean_Syntax_node4(v___x_3570_, v___x_3602_, v___x_3611_, v___x_3613_, v___x_3615_, v_snd_3275_);
lean_inc_ref(v___x_3601_);
v___x_3617_ = l_Lean_Syntax_node2(v___x_3570_, v___x_3600_, v___x_3601_, v___x_3616_);
v___x_3618_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3570_);
lean_ctor_set(v___x_3619_, 1, v___x_3618_);
lean_inc_ref(v___x_3619_);
lean_inc_ref(v___x_3598_);
lean_inc_ref(v___x_3591_);
v___x_3620_ = l_Lean_Syntax_node5(v___x_3570_, v___x_3588_, v___x_3591_, v___x_3595_, v___x_3598_, v___x_3617_, v___x_3619_);
v___x_3621_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3622_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3623_ = l_Lean_addMacroScope(v_quotContext_3567_, v___x_3622_, v_currMacroScope_3568_);
v___x_3624_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3570_);
lean_ctor_set(v___x_3624_, 1, v___x_3621_);
lean_ctor_set(v___x_3624_, 2, v___x_3623_);
lean_ctor_set(v___x_3624_, 3, v___x_3577_);
v___x_3625_ = l_String_toRawSubstring_x27(v___x_3229_);
v___x_3626_ = l_Lean_addMacroScope(v_quotContext_3567_, v___x_3217_, v_currMacroScope_3568_);
v___x_3627_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3570_);
lean_ctor_set(v___x_3627_, 1, v___x_3625_);
lean_ctor_set(v___x_3627_, 2, v___x_3626_);
lean_ctor_set(v___x_3627_, 3, v___x_3577_);
v___x_3628_ = l_Lean_Syntax_node2(v___x_3570_, v___x_3587_, v___x_3627_, v___x_3610_);
v___x_3629_ = l_Lean_Syntax_node4(v___x_3570_, v___x_3602_, v___x_3628_, v___x_3613_, v___x_3615_, v_fst_3274_);
v___x_3630_ = l_Lean_Syntax_node2(v___x_3570_, v___x_3600_, v___x_3601_, v___x_3629_);
v___x_3631_ = l_Lean_Syntax_node5(v___x_3570_, v___x_3588_, v___x_3591_, v___x_3624_, v___x_3598_, v___x_3630_, v___x_3619_);
v___x_3632_ = l_Lean_Syntax_node2(v___x_3570_, v___x_3587_, v___x_3620_, v___x_3631_);
v___x_3633_ = l_Lean_Syntax_node2(v___x_3570_, v___x_3571_, v___x_3586_, v___x_3632_);
v_a_3240_ = v___x_3633_;
goto v___jp_3239_;
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
lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3649_; 
lean_del_object(v___x_3268_);
lean_dec(v_snd_3266_);
lean_del_object(v___x_3263_);
lean_del_object(v___x_3259_);
lean_del_object(v___x_3253_);
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___x_3229_);
lean_dec_ref(v___x_3228_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3226_);
lean_dec(v___x_3225_);
lean_dec(v___x_3217_);
v_a_3642_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3644_ = v___x_3272_;
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_dec(v___x_3272_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
if (v_isShared_3645_ == 0)
{
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3642_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
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
lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3729_; 
lean_dec(v_a_3244_);
lean_dec(v___x_3225_);
lean_dec(v___x_3223_);
lean_dec_ref(v___x_3218_);
v_isSharedCheck_3729_ = !lean_is_exclusive(v_val_3247_);
if (v_isSharedCheck_3729_ == 0)
{
lean_object* v_unused_3730_; lean_object* v_unused_3731_; 
v_unused_3730_ = lean_ctor_get(v_val_3247_, 1);
lean_dec(v_unused_3730_);
v_unused_3731_ = lean_ctor_get(v_val_3247_, 0);
lean_dec(v_unused_3731_);
v___x_3656_ = v_val_3247_;
v_isShared_3657_ = v_isSharedCheck_3729_;
goto v_resetjp_3655_;
}
else
{
lean_dec(v_val_3247_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3729_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v_toCold_3658_; lean_object* v_ref_3659_; lean_object* v_quotContext_3660_; lean_object* v_currMacroScope_3661_; uint8_t v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3672_; 
v_toCold_3658_ = lean_ctor_get(v___y_3236_, 0);
lean_inc_ref(v_toCold_3658_);
v_ref_3659_ = lean_ctor_get(v___y_3236_, 2);
lean_inc(v_ref_3659_);
lean_dec_ref(v___y_3236_);
v_quotContext_3660_ = lean_ctor_get(v_toCold_3658_, 8);
lean_inc_n(v_quotContext_3660_, 2);
v_currMacroScope_3661_ = lean_ctor_get(v_toCold_3658_, 9);
lean_inc_n(v_currMacroScope_3661_, 2);
lean_dec_ref(v_toCold_3658_);
v___x_3662_ = 0;
v___x_3663_ = l_Lean_SourceInfo_fromRef(v_ref_3659_, v___x_3662_);
lean_dec(v_ref_3659_);
v___x_3664_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3665_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3666_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3226_);
v___x_3667_ = l_Lean_Name_mkStr2(v___x_3226_, v___x_3666_);
v___x_3668_ = l_Lean_addMacroScope(v_quotContext_3660_, v___x_3667_, v_currMacroScope_3661_);
v___x_3669_ = l_Lean_Name_mkStr4(v___x_3227_, v___x_3228_, v___x_3226_, v___x_3666_);
v___x_3670_ = lean_box(0);
lean_inc(v___x_3669_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set_tag(v___x_3656_, 1);
lean_ctor_set(v___x_3656_, 1, v___x_3670_);
lean_ctor_set(v___x_3656_, 0, v___x_3669_);
v___x_3672_ = v___x_3656_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3669_);
lean_ctor_set(v_reuseFailAlloc_3728_, 1, v___x_3670_);
v___x_3672_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3674_; 
if (v_isShared_3250_ == 0)
{
lean_ctor_set_tag(v___x_3249_, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3669_);
v___x_3674_ = v___x_3249_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3669_);
v___x_3674_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
lean_ctor_set(v___x_3675_, 1, v___x_3670_);
v___x_3676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3672_);
lean_ctor_set(v___x_3676_, 1, v___x_3675_);
lean_inc_n(v___x_3663_, 23);
v___x_3677_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3663_);
lean_ctor_set(v___x_3677_, 1, v___x_3665_);
lean_ctor_set(v___x_3677_, 2, v___x_3668_);
lean_ctor_set(v___x_3677_, 3, v___x_3676_);
v___x_3678_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3679_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3680_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
v___x_3681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3663_);
lean_ctor_set(v___x_3681_, 1, v___x_3680_);
v___x_3682_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3683_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc_n(v_currMacroScope_3661_, 4);
lean_inc_n(v_quotContext_3660_, 4);
v___x_3684_ = l_Lean_addMacroScope(v_quotContext_3660_, v___x_3683_, v_currMacroScope_3661_);
v___x_3685_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3663_);
lean_ctor_set(v___x_3685_, 1, v___x_3682_);
lean_ctor_set(v___x_3685_, 2, v___x_3684_);
lean_ctor_set(v___x_3685_, 3, v___x_3670_);
v___x_3686_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
v___x_3687_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3663_);
lean_ctor_set(v___x_3687_, 1, v___x_3686_);
v___x_3688_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_3689_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1));
v___x_3690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3663_);
lean_ctor_set(v___x_3690_, 1, v___x_3688_);
v___x_3691_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_3692_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3693_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
v___x_3694_ = l_Lean_addMacroScope(v_quotContext_3660_, v___x_3693_, v_currMacroScope_3661_);
v___x_3695_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3663_);
lean_ctor_set(v___x_3695_, 1, v___x_3692_);
lean_ctor_set(v___x_3695_, 2, v___x_3694_);
lean_ctor_set(v___x_3695_, 3, v___x_3670_);
v___x_3696_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3697_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3698_ = l_Lean_addMacroScope(v_quotContext_3660_, v___x_3697_, v_currMacroScope_3661_);
v___x_3699_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3663_);
lean_ctor_set(v___x_3699_, 1, v___x_3696_);
lean_ctor_set(v___x_3699_, 2, v___x_3698_);
lean_ctor_set(v___x_3699_, 3, v___x_3670_);
lean_inc_ref(v___x_3699_);
v___x_3700_ = l_Lean_Syntax_node2(v___x_3663_, v___x_3678_, v___x_3695_, v___x_3699_);
v___x_3701_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3702_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3663_);
lean_ctor_set(v___x_3702_, 1, v___x_3678_);
lean_ctor_set(v___x_3702_, 2, v___x_3701_);
v___x_3703_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3704_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3663_);
lean_ctor_set(v___x_3704_, 1, v___x_3703_);
v___x_3705_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22));
v___x_3706_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23));
v___x_3707_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3663_);
lean_ctor_set(v___x_3707_, 1, v___x_3706_);
v___x_3708_ = l_Lean_Syntax_node1(v___x_3663_, v___x_3705_, v___x_3707_);
lean_inc(v___x_3708_);
lean_inc_ref(v___x_3704_);
lean_inc_ref(v___x_3702_);
v___x_3709_ = l_Lean_Syntax_node4(v___x_3663_, v___x_3691_, v___x_3700_, v___x_3702_, v___x_3704_, v___x_3708_);
lean_inc_ref(v___x_3690_);
v___x_3710_ = l_Lean_Syntax_node2(v___x_3663_, v___x_3689_, v___x_3690_, v___x_3709_);
v___x_3711_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3712_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3663_);
lean_ctor_set(v___x_3712_, 1, v___x_3711_);
lean_inc_ref(v___x_3712_);
lean_inc_ref(v___x_3687_);
lean_inc_ref(v___x_3681_);
v___x_3713_ = l_Lean_Syntax_node5(v___x_3663_, v___x_3679_, v___x_3681_, v___x_3685_, v___x_3687_, v___x_3710_, v___x_3712_);
v___x_3714_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3715_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3716_ = l_Lean_addMacroScope(v_quotContext_3660_, v___x_3715_, v_currMacroScope_3661_);
v___x_3717_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3663_);
lean_ctor_set(v___x_3717_, 1, v___x_3714_);
lean_ctor_set(v___x_3717_, 2, v___x_3716_);
lean_ctor_set(v___x_3717_, 3, v___x_3670_);
v___x_3718_ = l_String_toRawSubstring_x27(v___x_3229_);
v___x_3719_ = l_Lean_addMacroScope(v_quotContext_3660_, v___x_3217_, v_currMacroScope_3661_);
v___x_3720_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3663_);
lean_ctor_set(v___x_3720_, 1, v___x_3718_);
lean_ctor_set(v___x_3720_, 2, v___x_3719_);
lean_ctor_set(v___x_3720_, 3, v___x_3670_);
v___x_3721_ = l_Lean_Syntax_node2(v___x_3663_, v___x_3678_, v___x_3720_, v___x_3699_);
v___x_3722_ = l_Lean_Syntax_node4(v___x_3663_, v___x_3691_, v___x_3721_, v___x_3702_, v___x_3704_, v___x_3708_);
v___x_3723_ = l_Lean_Syntax_node2(v___x_3663_, v___x_3689_, v___x_3690_, v___x_3722_);
v___x_3724_ = l_Lean_Syntax_node5(v___x_3663_, v___x_3679_, v___x_3681_, v___x_3717_, v___x_3687_, v___x_3723_, v___x_3712_);
v___x_3725_ = l_Lean_Syntax_node2(v___x_3663_, v___x_3678_, v___x_3713_, v___x_3724_);
v___x_3726_ = l_Lean_Syntax_node2(v___x_3663_, v___x_3664_, v___x_3677_, v___x_3725_);
v_a_3240_ = v___x_3726_;
goto v___jp_3239_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3246_);
lean_dec_ref(v___x_3226_);
if (lean_obj_tag(v_a_3244_) == 1)
{
lean_object* v_val_3733_; lean_object* v_snd_3734_; lean_object* v_fst_3735_; lean_object* v_snd_3736_; lean_object* v___f_3737_; lean_object* v___x_3738_; 
v_val_3733_ = lean_ctor_get(v_a_3244_, 0);
lean_inc(v_val_3733_);
lean_dec_ref_known(v_a_3244_, 1);
v_snd_3734_ = lean_ctor_get(v_val_3733_, 1);
lean_inc(v_snd_3734_);
v_fst_3735_ = lean_ctor_get(v_val_3733_, 0);
lean_inc(v_fst_3735_);
lean_dec(v_val_3733_);
v_snd_3736_ = lean_ctor_get(v_snd_3734_, 1);
lean_inc(v_snd_3736_);
lean_dec(v_snd_3734_);
lean_inc(v___x_3217_);
v___f_3737_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6___boxed), 19, 9);
lean_closure_set(v___f_3737_, 0, v_fst_3735_);
lean_closure_set(v___f_3737_, 1, v_snd_3736_);
lean_closure_set(v___f_3737_, 2, v___x_3229_);
lean_closure_set(v___f_3737_, 3, v___x_3217_);
lean_closure_set(v___f_3737_, 4, v___x_3223_);
lean_closure_set(v___f_3737_, 5, v___x_3225_);
lean_closure_set(v___f_3737_, 6, v___x_3227_);
lean_closure_set(v___f_3737_, 7, v___x_3228_);
lean_closure_set(v___f_3737_, 8, v_arg_3222_);
v___x_3738_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3217_, v___x_3218_, v___f_3737_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
lean_dec_ref(v___y_3236_);
if (lean_obj_tag(v___x_3738_) == 0)
{
lean_object* v_a_3739_; 
v_a_3739_ = lean_ctor_get(v___x_3738_, 0);
lean_inc(v_a_3739_);
lean_dec_ref_known(v___x_3738_, 1);
v_a_3240_ = v_a_3739_;
goto v___jp_3239_;
}
else
{
return v___x_3738_;
}
}
else
{
lean_object* v_toCold_3740_; lean_object* v_ref_3741_; lean_object* v_quotContext_3742_; lean_object* v_currMacroScope_3743_; uint8_t v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; 
lean_dec(v_a_3244_);
lean_dec(v___x_3225_);
lean_dec(v___x_3223_);
lean_dec_ref(v_arg_3222_);
lean_dec_ref(v___x_3218_);
v_toCold_3740_ = lean_ctor_get(v___y_3236_, 0);
lean_inc_ref(v_toCold_3740_);
v_ref_3741_ = lean_ctor_get(v___y_3236_, 2);
lean_inc(v_ref_3741_);
lean_dec_ref(v___y_3236_);
v_quotContext_3742_ = lean_ctor_get(v_toCold_3740_, 8);
lean_inc_n(v_quotContext_3742_, 2);
v_currMacroScope_3743_ = lean_ctor_get(v_toCold_3740_, 9);
lean_inc_n(v_currMacroScope_3743_, 2);
lean_dec_ref(v_toCold_3740_);
v___x_3744_ = 0;
v___x_3745_ = l_Lean_SourceInfo_fromRef(v_ref_3741_, v___x_3744_);
lean_dec(v_ref_3741_);
v___x_3746_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9));
v___x_3747_ = l_Lean_Name_mkStr3(v___x_3227_, v___x_3228_, v___x_3746_);
v___x_3748_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7));
v___x_3749_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
lean_inc_n(v___x_3745_, 13);
v___x_3750_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3745_);
lean_ctor_set(v___x_3750_, 1, v___x_3748_);
lean_ctor_set(v___x_3750_, 2, v___x_3749_);
v___x_3751_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10));
v___x_3752_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3745_);
lean_ctor_set(v___x_3752_, 1, v___x_3751_);
v___x_3753_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3754_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_3755_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_3756_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3745_);
lean_ctor_set(v___x_3756_, 1, v___x_3755_);
v___x_3757_ = l_String_toRawSubstring_x27(v___x_3229_);
v___x_3758_ = l_Lean_addMacroScope(v_quotContext_3742_, v___x_3217_, v_currMacroScope_3743_);
v___x_3759_ = lean_box(0);
v___x_3760_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3745_);
lean_ctor_set(v___x_3760_, 1, v___x_3757_);
lean_ctor_set(v___x_3760_, 2, v___x_3758_);
lean_ctor_set(v___x_3760_, 3, v___x_3759_);
v___x_3761_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_3762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3745_);
lean_ctor_set(v___x_3762_, 1, v___x_3761_);
v___x_3763_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3764_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3765_ = l_Lean_addMacroScope(v_quotContext_3742_, v___x_3764_, v_currMacroScope_3743_);
v___x_3766_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3745_);
lean_ctor_set(v___x_3766_, 1, v___x_3763_);
lean_ctor_set(v___x_3766_, 2, v___x_3765_);
lean_ctor_set(v___x_3766_, 3, v___x_3759_);
v___x_3767_ = l_Lean_Syntax_node3(v___x_3745_, v___x_3753_, v___x_3760_, v___x_3762_, v___x_3766_);
v___x_3768_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_3769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3745_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
v___x_3770_ = l_Lean_Syntax_node3(v___x_3745_, v___x_3754_, v___x_3756_, v___x_3767_, v___x_3769_);
v___x_3771_ = l_Lean_Syntax_node1(v___x_3745_, v___x_3753_, v___x_3770_);
v___x_3772_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3773_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3745_);
lean_ctor_set(v___x_3773_, 1, v___x_3772_);
v___x_3774_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22));
v___x_3775_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23));
v___x_3776_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3745_);
lean_ctor_set(v___x_3776_, 1, v___x_3775_);
v___x_3777_ = l_Lean_Syntax_node1(v___x_3745_, v___x_3774_, v___x_3776_);
v___x_3778_ = l_Lean_Syntax_node5(v___x_3745_, v___x_3747_, v___x_3750_, v___x_3752_, v___x_3771_, v___x_3773_, v___x_3777_);
v_a_3240_ = v___x_3778_;
goto v___jp_3239_;
}
}
}
else
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3786_; 
lean_dec(v_a_3244_);
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___x_3229_);
lean_dec_ref(v___x_3228_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3226_);
lean_dec(v___x_3225_);
lean_dec(v___x_3223_);
lean_dec_ref(v_arg_3222_);
lean_dec_ref(v___x_3218_);
lean_dec(v___x_3217_);
v_a_3779_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3781_ = v___x_3245_;
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3245_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3784_; 
if (v_isShared_3782_ == 0)
{
v___x_3784_ = v___x_3781_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3779_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3794_; 
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___x_3229_);
lean_dec_ref(v___x_3228_);
lean_dec_ref(v___x_3227_);
lean_dec_ref(v___x_3226_);
lean_dec(v___x_3225_);
lean_dec(v___x_3223_);
lean_dec_ref(v_arg_3222_);
lean_dec(v_inv_3221_);
lean_dec_ref(v___x_3218_);
lean_dec(v___x_3217_);
v_a_3787_ = lean_ctor_get(v___x_3243_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3789_ = v___x_3243_;
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v___x_3243_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3792_; 
if (v_isShared_3790_ == 0)
{
v___x_3792_ = v___x_3789_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_a_3787_);
v___x_3792_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
return v___x_3792_;
}
}
}
v___jp_3239_:
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3241_ = l_Lean_Syntax_eraseQuoteMacroScopes(v_a_3240_);
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
return v___x_3242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___boxed(lean_object** _args){
lean_object* v___x_3795_ = _args[0];
lean_object* v___x_3796_ = _args[1];
lean_object* v___f_3797_ = _args[2];
lean_object* v_a_3798_ = _args[3];
lean_object* v_inv_3799_ = _args[4];
lean_object* v_arg_3800_ = _args[5];
lean_object* v___x_3801_ = _args[6];
lean_object* v___x_3802_ = _args[7];
lean_object* v___x_3803_ = _args[8];
lean_object* v___x_3804_ = _args[9];
lean_object* v___x_3805_ = _args[10];
lean_object* v___x_3806_ = _args[11];
lean_object* v___x_3807_ = _args[12];
lean_object* v___y_3808_ = _args[13];
lean_object* v___y_3809_ = _args[14];
lean_object* v___y_3810_ = _args[15];
lean_object* v___y_3811_ = _args[16];
lean_object* v___y_3812_ = _args[17];
lean_object* v___y_3813_ = _args[18];
lean_object* v___y_3814_ = _args[19];
lean_object* v___y_3815_ = _args[20];
lean_object* v___y_3816_ = _args[21];
_start:
{
uint8_t v___x_81580__boxed_3817_; lean_object* v_res_3818_; 
v___x_81580__boxed_3817_ = lean_unbox(v___x_3802_);
v_res_3818_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7(v___x_3795_, v___x_3796_, v___f_3797_, v_a_3798_, v_inv_3799_, v_arg_3800_, v___x_3801_, v___x_81580__boxed_3817_, v___x_3803_, v___x_3804_, v___x_3805_, v___x_3806_, v___x_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_);
lean_dec(v___y_3815_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec(v___y_3811_);
lean_dec_ref(v___y_3810_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
lean_dec_ref(v_a_3798_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(lean_object* v_msgData_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_){
_start:
{
lean_object* v___x_3825_; lean_object* v_env_3826_; uint8_t v___x_3827_; lean_object* v_env_3828_; lean_object* v___x_3829_; lean_object* v_toCold_3830_; lean_object* v_mctx_3831_; lean_object* v_lctx_3832_; lean_object* v_options_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3825_ = lean_st_ref_get(v___y_3823_);
v_env_3826_ = lean_ctor_get(v___x_3825_, 0);
lean_inc_ref(v_env_3826_);
lean_dec(v___x_3825_);
v___x_3827_ = 0;
v_env_3828_ = l_Lean_Environment_setRecordingDeps(v_env_3826_, v___x_3827_);
v___x_3829_ = lean_st_ref_get(v___y_3821_);
v_toCold_3830_ = lean_ctor_get(v___y_3822_, 0);
v_mctx_3831_ = lean_ctor_get(v___x_3829_, 0);
lean_inc_ref(v_mctx_3831_);
lean_dec(v___x_3829_);
v_lctx_3832_ = lean_ctor_get(v___y_3820_, 2);
v_options_3833_ = lean_ctor_get(v_toCold_3830_, 2);
lean_inc_ref(v_options_3833_);
lean_inc_ref(v_lctx_3832_);
v___x_3834_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3834_, 0, v_env_3828_);
lean_ctor_set(v___x_3834_, 1, v_mctx_3831_);
lean_ctor_set(v___x_3834_, 2, v_lctx_3832_);
lean_ctor_set(v___x_3834_, 3, v_options_3833_);
v___x_3835_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3834_);
lean_ctor_set(v___x_3835_, 1, v_msgData_3819_);
v___x_3836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3836_, 0, v___x_3835_);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1___boxed(lean_object* v_msgData_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_){
_start:
{
lean_object* v_res_3843_; 
v_res_3843_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(v_msgData_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_);
lean_dec(v___y_3841_);
lean_dec_ref(v___y_3840_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(lean_object* v_msg_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_){
_start:
{
lean_object* v_ref_3850_; lean_object* v___x_3851_; lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3860_; 
v_ref_3850_ = lean_ctor_get(v___y_3847_, 2);
v___x_3851_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(v_msg_3844_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_);
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3854_ = v___x_3851_;
v_isShared_3855_ = v_isSharedCheck_3860_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3851_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3860_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3856_; lean_object* v___x_3858_; 
lean_inc(v_ref_3850_);
v___x_3856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3856_, 0, v_ref_3850_);
lean_ctor_set(v___x_3856_, 1, v_a_3852_);
if (v_isShared_3855_ == 0)
{
lean_ctor_set_tag(v___x_3854_, 1);
lean_ctor_set(v___x_3854_, 0, v___x_3856_);
v___x_3858_ = v___x_3854_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v___x_3856_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg___boxed(lean_object* v_msg_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(v_msg_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
return v_res_3867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(lean_object* v_as_3874_, size_t v_i_3875_, size_t v_stop_3876_, lean_object* v_b_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v_a_3888_; lean_object* v___y_3893_; lean_object* v_a_3896_; uint8_t v___x_3898_; 
v___x_3898_ = lean_usize_dec_eq(v_i_3875_, v_stop_3876_);
if (v___x_3898_ == 0)
{
lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3899_ = lean_array_uget_borrowed(v_as_3874_, v_i_3875_);
v___x_3900_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_3879_, v___y_3881_, v___y_3883_, v___y_3885_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v_a_3901_; lean_object* v___y_3903_; lean_object* v_a_3904_; lean_object* v_ref_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v_a_3901_ = lean_ctor_get(v___x_3900_, 0);
lean_inc(v_a_3901_);
lean_dec_ref_known(v___x_3900_, 1);
v_ref_3919_ = lean_ctor_get(v___y_3884_, 2);
v___x_3920_ = l_Lean_SourceInfo_fromRef(v_ref_3919_, v___x_3898_);
v___x_3921_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0));
v___x_3922_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1));
lean_inc(v___x_3920_);
v___x_3923_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3920_);
lean_ctor_set(v___x_3923_, 1, v___x_3921_);
v___x_3924_ = l_Lean_Syntax_node1(v___x_3920_, v___x_3922_, v___x_3923_);
lean_inc(v___x_3899_);
v___x_3925_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(v___x_3899_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_object* v_a_3926_; lean_object* v___x_3927_; 
v_a_3926_ = lean_ctor_get(v___x_3925_, 0);
lean_inc(v_a_3926_);
lean_dec_ref_known(v___x_3925_, 1);
v___x_3927_ = l_Lean_Elab_Tactic_evalTacticAt(v___x_3924_, v_a_3926_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3927_) == 0)
{
lean_object* v_a_3928_; lean_object* v___x_3929_; 
lean_dec(v_a_3901_);
v_a_3928_ = lean_ctor_get(v___x_3927_, 0);
lean_inc(v_a_3928_);
lean_dec_ref_known(v___x_3927_, 1);
v___x_3929_ = lean_array_mk(v_a_3928_);
v_a_3896_ = v___x_3929_;
goto v___jp_3895_;
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3937_; 
v_a_3930_ = lean_ctor_get(v___x_3927_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3927_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3932_ = v___x_3927_;
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3927_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3935_; 
lean_inc(v_a_3930_);
if (v_isShared_3933_ == 0)
{
v___x_3935_ = v___x_3932_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
v___y_3903_ = v___x_3935_;
v_a_3904_ = v_a_3930_;
goto v___jp_3902_;
}
}
}
}
else
{
lean_object* v_a_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_3945_; 
lean_dec(v___x_3924_);
v_a_3938_ = lean_ctor_get(v___x_3925_, 0);
v_isSharedCheck_3945_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3940_ = v___x_3925_;
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_a_3938_);
lean_dec(v___x_3925_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_3945_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3943_; 
lean_inc(v_a_3938_);
if (v_isShared_3941_ == 0)
{
v___x_3943_ = v___x_3940_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v_a_3938_);
v___x_3943_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
v___y_3903_ = v___x_3943_;
v_a_3904_ = v_a_3938_;
goto v___jp_3902_;
}
}
}
v___jp_3902_:
{
uint8_t v___x_3905_; 
v___x_3905_ = l_Lean_Exception_isInterrupt(v_a_3904_);
if (v___x_3905_ == 0)
{
uint8_t v___x_3906_; 
v___x_3906_ = l_Lean_Exception_isRuntime(v_a_3904_);
if (v___x_3906_ == 0)
{
lean_object* v___x_3907_; 
lean_dec_ref(v___y_3903_);
v___x_3907_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_3901_, v___x_3906_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3907_) == 0)
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
lean_dec_ref_known(v___x_3907_, 1);
v___x_3908_ = lean_unsigned_to_nat(1u);
v___x_3909_ = lean_mk_empty_array_with_capacity(v___x_3908_);
lean_inc(v___x_3899_);
v___x_3910_ = lean_array_push(v___x_3909_, v___x_3899_);
v_a_3896_ = v___x_3910_;
goto v___jp_3895_;
}
else
{
lean_object* v_a_3911_; lean_object* v___x_3913_; uint8_t v_isShared_3914_; uint8_t v_isSharedCheck_3918_; 
lean_dec_ref(v_b_3877_);
v_a_3911_ = lean_ctor_get(v___x_3907_, 0);
v_isSharedCheck_3918_ = !lean_is_exclusive(v___x_3907_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3913_ = v___x_3907_;
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
else
{
lean_inc(v_a_3911_);
lean_dec(v___x_3907_);
v___x_3913_ = lean_box(0);
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
v_resetjp_3912_:
{
lean_object* v___x_3916_; 
if (v_isShared_3914_ == 0)
{
v___x_3916_ = v___x_3913_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v_a_3911_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
}
}
else
{
lean_dec(v_a_3901_);
lean_dec_ref(v_b_3877_);
v___y_3893_ = v___y_3903_;
goto v___jp_3892_;
}
}
else
{
lean_dec_ref(v_a_3904_);
lean_dec(v_a_3901_);
lean_dec_ref(v_b_3877_);
v___y_3893_ = v___y_3903_;
goto v___jp_3892_;
}
}
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3953_; 
lean_dec_ref(v_b_3877_);
v_a_3946_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3953_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3953_ == 0)
{
v___x_3948_ = v___x_3900_;
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3900_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3953_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3951_; 
if (v_isShared_3949_ == 0)
{
v___x_3951_ = v___x_3948_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v_a_3946_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
}
else
{
lean_object* v___x_3954_; 
v___x_3954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3954_, 0, v_b_3877_);
return v___x_3954_;
}
v___jp_3887_:
{
size_t v___x_3889_; size_t v___x_3890_; 
v___x_3889_ = ((size_t)1ULL);
v___x_3890_ = lean_usize_add(v_i_3875_, v___x_3889_);
v_i_3875_ = v___x_3890_;
v_b_3877_ = v_a_3888_;
goto _start;
}
v___jp_3892_:
{
if (lean_obj_tag(v___y_3893_) == 0)
{
lean_object* v_a_3894_; 
v_a_3894_ = lean_ctor_get(v___y_3893_, 0);
lean_inc(v_a_3894_);
lean_dec_ref_known(v___y_3893_, 1);
v_a_3888_ = v_a_3894_;
goto v___jp_3887_;
}
else
{
return v___y_3893_;
}
}
v___jp_3895_:
{
lean_object* v___x_3897_; 
v___x_3897_ = l_Array_append___redArg(v_b_3877_, v_a_3896_);
lean_dec_ref(v_a_3896_);
v_a_3888_ = v___x_3897_;
goto v___jp_3887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___boxed(lean_object* v_as_3955_, lean_object* v_i_3956_, lean_object* v_stop_3957_, lean_object* v_b_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
size_t v_i_boxed_3968_; size_t v_stop_boxed_3969_; lean_object* v_res_3970_; 
v_i_boxed_3968_ = lean_unbox_usize(v_i_3956_);
lean_dec(v_i_3956_);
v_stop_boxed_3969_ = lean_unbox_usize(v_stop_3957_);
lean_dec(v_stop_3957_);
v_res_3970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(v_as_3955_, v_i_boxed_3968_, v_stop_boxed_3969_, v_b_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_, v___y_3965_, v___y_3966_);
lean_dec(v___y_3966_);
lean_dec_ref(v___y_3965_);
lean_dec(v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
lean_dec_ref(v_as_3955_);
return v_res_3970_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1(void){
_start:
{
lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3972_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0));
v___x_3973_ = l_Lean_stringToMessageData(v___x_3972_);
return v___x_3973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant(lean_object* v_vcs_3989_, lean_object* v_inv_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_){
_start:
{
lean_object* v___x_4000_; 
lean_inc(v_inv_3990_);
v___x_4000_ = l_Lean_MVarId_getType(v_inv_3990_, v_a_3995_, v_a_3996_, v_a_3997_, v_a_3998_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_object* v_a_4001_; lean_object* v___x_4002_; lean_object* v_a_4003_; lean_object* v___y_4005_; lean_object* v___y_4006_; lean_object* v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4009_; lean_object* v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4012_; lean_object* v___x_4017_; uint8_t v___x_4018_; 
v_a_4001_ = lean_ctor_get(v___x_4000_, 0);
lean_inc(v_a_4001_);
lean_dec_ref_known(v___x_4000_, 1);
v___x_4002_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(v_a_4001_, v_a_3996_);
v_a_4003_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_a_4003_);
lean_dec_ref(v___x_4002_);
v___x_4017_ = l_Lean_Expr_cleanupAnnotations(v_a_4003_);
v___x_4018_ = l_Lean_Expr_isApp(v___x_4017_);
if (v___x_4018_ == 0)
{
lean_dec_ref(v___x_4017_);
lean_dec(v_inv_3990_);
v___y_4005_ = v_a_3991_;
v___y_4006_ = v_a_3992_;
v___y_4007_ = v_a_3993_;
v___y_4008_ = v_a_3994_;
v___y_4009_ = v_a_3995_;
v___y_4010_ = v_a_3996_;
v___y_4011_ = v_a_3997_;
v___y_4012_ = v_a_3998_;
goto v___jp_4004_;
}
else
{
lean_object* v___x_4019_; uint8_t v___x_4020_; 
v___x_4019_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4017_);
lean_dec_ref(v___x_4017_);
v___x_4020_ = l_Lean_Expr_isApp(v___x_4019_);
if (v___x_4020_ == 0)
{
lean_dec_ref(v___x_4019_);
lean_dec(v_inv_3990_);
v___y_4005_ = v_a_3991_;
v___y_4006_ = v_a_3992_;
v___y_4007_ = v_a_3993_;
v___y_4008_ = v_a_3994_;
v___y_4009_ = v_a_3995_;
v___y_4010_ = v_a_3996_;
v___y_4011_ = v_a_3997_;
v___y_4012_ = v_a_3998_;
goto v___jp_4004_;
}
else
{
lean_object* v___x_4021_; uint8_t v___x_4022_; 
v___x_4021_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4019_);
v___x_4022_ = l_Lean_Expr_isApp(v___x_4021_);
if (v___x_4022_ == 0)
{
lean_dec_ref(v___x_4021_);
lean_dec_ref(v___x_4019_);
lean_dec(v_inv_3990_);
v___y_4005_ = v_a_3991_;
v___y_4006_ = v_a_3992_;
v___y_4007_ = v_a_3993_;
v___y_4008_ = v_a_3994_;
v___y_4009_ = v_a_3995_;
v___y_4010_ = v_a_3996_;
v___y_4011_ = v_a_3997_;
v___y_4012_ = v_a_3998_;
goto v___jp_4004_;
}
else
{
lean_object* v___x_4023_; uint8_t v___x_4024_; 
v___x_4023_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4021_);
v___x_4024_ = l_Lean_Expr_isApp(v___x_4023_);
if (v___x_4024_ == 0)
{
lean_dec_ref(v___x_4023_);
lean_dec_ref(v___x_4021_);
lean_dec_ref(v___x_4019_);
lean_dec(v_inv_3990_);
v___y_4005_ = v_a_3991_;
v___y_4006_ = v_a_3992_;
v___y_4007_ = v_a_3993_;
v___y_4008_ = v_a_3994_;
v___y_4009_ = v_a_3995_;
v___y_4010_ = v_a_3996_;
v___y_4011_ = v_a_3997_;
v___y_4012_ = v_a_3998_;
goto v___jp_4004_;
}
else
{
lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; uint8_t v___x_4030_; 
v___x_4025_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4023_);
v___x_4026_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1));
v___x_4027_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3));
v___x_4028_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2));
v___x_4029_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3));
v___x_4030_ = l_Lean_Expr_isConstOf(v___x_4025_, v___x_4029_);
if (v___x_4030_ == 0)
{
lean_dec_ref(v___x_4025_);
lean_dec_ref(v___x_4023_);
lean_dec_ref(v___x_4021_);
lean_dec_ref(v___x_4019_);
lean_dec(v_inv_3990_);
v___y_4005_ = v_a_3991_;
v___y_4006_ = v_a_3992_;
v___y_4007_ = v_a_3993_;
v___y_4008_ = v_a_3994_;
v___y_4009_ = v_a_3995_;
v___y_4010_ = v_a_3996_;
v___y_4011_ = v_a_3997_;
v___y_4012_ = v_a_3998_;
goto v___jp_4004_;
}
else
{
lean_object* v_arg_4031_; lean_object* v_arg_4032_; lean_object* v_arg_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v_a_4040_; lean_object* v___x_4051_; lean_object* v___x_4052_; uint8_t v___x_4053_; 
lean_dec(v_a_4003_);
v_arg_4031_ = lean_ctor_get(v___x_4019_, 1);
lean_inc_ref(v_arg_4031_);
lean_dec_ref(v___x_4019_);
v_arg_4032_ = lean_ctor_get(v___x_4021_, 1);
lean_inc_ref(v_arg_4032_);
lean_dec_ref(v___x_4021_);
v_arg_4033_ = lean_ctor_get(v___x_4023_, 1);
lean_inc_ref(v_arg_4033_);
lean_dec_ref(v___x_4023_);
v___x_4034_ = lean_unsigned_to_nat(1u);
v___x_4035_ = l_Lean_Expr_constLevels_x21(v___x_4025_);
lean_dec_ref(v___x_4025_);
v___x_4036_ = lean_unsigned_to_nat(0u);
v___x_4037_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4));
lean_inc(v___x_4035_);
v___x_4038_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v___x_4035_, v___x_4035_, v___x_4034_, v___x_4037_);
lean_dec(v___x_4035_);
v___x_4051_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8));
v___x_4052_ = lean_array_get_size(v_vcs_3989_);
v___x_4053_ = lean_nat_dec_lt(v___x_4036_, v___x_4052_);
if (v___x_4053_ == 0)
{
v_a_4040_ = v___x_4051_;
goto v___jp_4039_;
}
else
{
size_t v___x_4054_; size_t v___x_4055_; lean_object* v___x_4056_; 
v___x_4054_ = ((size_t)0ULL);
v___x_4055_ = lean_usize_of_nat(v___x_4052_);
v___x_4056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(v_vcs_3989_, v___x_4054_, v___x_4055_, v___x_4051_, v_a_3991_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_, v_a_3998_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_object* v_a_4057_; 
v_a_4057_ = lean_ctor_get(v___x_4056_, 0);
lean_inc(v_a_4057_);
lean_dec_ref_known(v___x_4056_, 1);
v_a_4040_ = v_a_4057_;
goto v___jp_4039_;
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4065_; 
lean_dec(v___x_4038_);
lean_dec_ref(v_arg_4033_);
lean_dec_ref(v_arg_4032_);
lean_dec_ref(v_arg_4031_);
lean_dec(v_inv_3990_);
v_a_4058_ = lean_ctor_get(v___x_4056_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4065_ == 0)
{
v___x_4060_ = v___x_4056_;
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_a_4058_);
lean_dec(v___x_4056_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4063_; 
if (v_isShared_4061_ == 0)
{
v___x_4063_ = v___x_4060_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4058_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
return v___x_4063_;
}
}
}
}
v___jp_4039_:
{
lean_object* v___x_4041_; lean_object* v___f_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___f_4049_; lean_object* v___x_4050_; 
v___x_4041_ = lean_box(v___x_4030_);
lean_inc_ref(v_arg_4031_);
lean_inc_n(v_inv_3990_, 2);
lean_inc_ref(v_a_4040_);
v___f_4042_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___boxed), 15, 5);
lean_closure_set(v___f_4042_, 0, v_a_4040_);
lean_closure_set(v___f_4042_, 1, v_inv_3990_);
lean_closure_set(v___f_4042_, 2, v___x_4041_);
lean_closure_set(v___f_4042_, 3, v___x_4034_);
lean_closure_set(v___f_4042_, 4, v_arg_4031_);
v___x_4043_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5));
v___x_4044_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6));
v___x_4045_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7));
v___x_4046_ = l_Lean_mkConst(v___x_4045_, v___x_4038_);
v___x_4047_ = l_Lean_mkAppB(v___x_4046_, v_arg_4033_, v_arg_4032_);
v___x_4048_ = lean_box(v___x_4030_);
v___f_4049_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___boxed), 22, 13);
lean_closure_set(v___f_4049_, 0, v___x_4044_);
lean_closure_set(v___f_4049_, 1, v___x_4047_);
lean_closure_set(v___f_4049_, 2, v___f_4042_);
lean_closure_set(v___f_4049_, 3, v_a_4040_);
lean_closure_set(v___f_4049_, 4, v_inv_3990_);
lean_closure_set(v___f_4049_, 5, v_arg_4031_);
lean_closure_set(v___f_4049_, 6, v___x_4034_);
lean_closure_set(v___f_4049_, 7, v___x_4048_);
lean_closure_set(v___f_4049_, 8, v___x_4036_);
lean_closure_set(v___f_4049_, 9, v___x_4028_);
lean_closure_set(v___f_4049_, 10, v___x_4026_);
lean_closure_set(v___f_4049_, 11, v___x_4027_);
lean_closure_set(v___f_4049_, 12, v___x_4043_);
v___x_4050_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(v_inv_3990_, v___f_4049_, v_a_3991_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_, v_a_3998_);
return v___x_4050_;
}
}
}
}
}
}
v___jp_4004_:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
v___x_4013_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1, &l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1);
v___x_4014_ = l_Lean_MessageData_ofExpr(v_a_4003_);
v___x_4015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4013_);
lean_ctor_set(v___x_4015_, 1, v___x_4014_);
v___x_4016_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(v___x_4015_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_);
return v___x_4016_;
}
}
else
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4073_; 
lean_dec(v_inv_3990_);
v_a_4066_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4068_ = v___x_4000_;
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4000_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4071_; 
if (v_isShared_4069_ == 0)
{
v___x_4071_ = v___x_4068_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v_a_4066_);
v___x_4071_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
return v___x_4071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___boxed(lean_object* v_vcs_4074_, lean_object* v_inv_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l_Lean_Elab_Tactic_Do_suggestInvariant(v_vcs_4074_, v_inv_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_);
lean_dec(v_a_4083_);
lean_dec_ref(v_a_4082_);
lean_dec(v_a_4081_);
lean_dec_ref(v_a_4080_);
lean_dec(v_a_4079_);
lean_dec_ref(v_a_4078_);
lean_dec(v_a_4077_);
lean_dec_ref(v_a_4076_);
lean_dec_ref(v_vcs_4074_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1(lean_object* v_00_u03b1_4086_, lean_object* v_msg_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
lean_object* v___x_4097_; 
v___x_4097_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(v_msg_4087_, v___y_4092_, v___y_4093_, v___y_4094_, v___y_4095_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___boxed(lean_object* v_00_u03b1_4098_, lean_object* v_msg_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1(v_00_u03b1_4098_, v_msg_4099_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3(lean_object* v_00_u03b1_4110_, lean_object* v_name_4111_, uint8_t v_bi_4112_, lean_object* v_type_4113_, lean_object* v_k_4114_, uint8_t v_kind_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v___x_4125_; 
v___x_4125_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(v_name_4111_, v_bi_4112_, v_type_4113_, v_k_4114_, v_kind_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___boxed(lean_object* v_00_u03b1_4126_, lean_object* v_name_4127_, lean_object* v_bi_4128_, lean_object* v_type_4129_, lean_object* v_k_4130_, lean_object* v_kind_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_){
_start:
{
uint8_t v_bi_boxed_4141_; uint8_t v_kind_boxed_4142_; lean_object* v_res_4143_; 
v_bi_boxed_4141_ = lean_unbox(v_bi_4128_);
v_kind_boxed_4142_ = lean_unbox(v_kind_4131_);
v_res_4143_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3(v_00_u03b1_4126_, v_name_4127_, v_bi_boxed_4141_, v_type_4129_, v_k_4130_, v_kind_boxed_4142_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec(v___y_4137_);
lean_dec_ref(v___y_4136_);
lean_dec(v___y_4135_);
lean_dec_ref(v___y_4134_);
lean_dec(v___y_4133_);
lean_dec_ref(v___y_4132_);
return v_res_4143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2(lean_object* v_00_u03b1_4144_, lean_object* v_name_4145_, lean_object* v_type_4146_, lean_object* v_k_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v___x_4157_; 
v___x_4157_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v_name_4145_, v_type_4146_, v_k_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_);
return v___x_4157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___boxed(lean_object* v_00_u03b1_4158_, lean_object* v_name_4159_, lean_object* v_type_4160_, lean_object* v_k_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2(v_00_u03b1_4158_, v_name_4159_, v_type_4160_, v_k_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_);
lean_dec(v___y_4169_);
lean_dec_ref(v___y_4168_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3(lean_object* v_as_4172_, size_t v_sz_4173_, size_t v_i_4174_, lean_object* v_b_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v___x_4185_; 
v___x_4185_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(v_as_4172_, v_sz_4173_, v_i_4174_, v_b_4175_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___boxed(lean_object* v_as_4186_, lean_object* v_sz_4187_, lean_object* v_i_4188_, lean_object* v_b_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_){
_start:
{
size_t v_sz_boxed_4199_; size_t v_i_boxed_4200_; lean_object* v_res_4201_; 
v_sz_boxed_4199_ = lean_unbox_usize(v_sz_4187_);
lean_dec(v_sz_4187_);
v_i_boxed_4200_ = lean_unbox_usize(v_i_4188_);
lean_dec(v_i_4188_);
v_res_4201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3(v_as_4186_, v_sz_boxed_4199_, v_i_boxed_4200_, v_b_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_);
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4196_);
lean_dec(v___y_4195_);
lean_dec_ref(v___y_4194_);
lean_dec(v___y_4193_);
lean_dec_ref(v___y_4192_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
lean_dec_ref(v_as_4186_);
return v_res_4201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4(lean_object* v_as_4202_, size_t v_sz_4203_, size_t v_i_4204_, lean_object* v_b_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_){
_start:
{
lean_object* v___x_4215_; 
v___x_4215_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(v_as_4202_, v_sz_4203_, v_i_4204_, v_b_4205_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___boxed(lean_object* v_as_4216_, lean_object* v_sz_4217_, lean_object* v_i_4218_, lean_object* v_b_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_){
_start:
{
size_t v_sz_boxed_4229_; size_t v_i_boxed_4230_; lean_object* v_res_4231_; 
v_sz_boxed_4229_ = lean_unbox_usize(v_sz_4217_);
lean_dec(v_sz_4217_);
v_i_boxed_4230_ = lean_unbox_usize(v_i_4218_);
lean_dec(v_i_4218_);
v_res_4231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4(v_as_4216_, v_sz_boxed_4229_, v_i_boxed_4230_, v_b_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_);
lean_dec(v___y_4227_);
lean_dec_ref(v___y_4226_);
lean_dec(v___y_4225_);
lean_dec_ref(v___y_4224_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec(v___y_4221_);
lean_dec_ref(v___y_4220_);
lean_dec_ref(v_as_4216_);
return v_res_4231_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* initialize_Std_Tactic_Do(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
}
#ifdef __cplusplus
}
#endif
