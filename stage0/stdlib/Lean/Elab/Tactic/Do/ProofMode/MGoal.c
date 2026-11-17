// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.MGoal
// Imports: public import Std.Do.SPred.DerivedLaws public import Std.Tactic.Do.ProofMode public import Lean.Elab.Tactic.Basic
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_root;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uniq"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 18, 161, 16, 33, 3, 130, 7)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_isPure_x3f(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "emptyHyp"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 250, 151, 172, 110, 227, 35, 108)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 97, 27, 109, 96, 85, 230, 202)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "true_and"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 45, 192, 15, 224, 238, 244, 30)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "and_true"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__2_value),LEAN_SCALAR_PTR_LITERAL(96, 80, 32, 98, 134, 56, 69, 160)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bientails"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__4_value),LEAN_SCALAR_PTR_LITERAL(201, 51, 221, 5, 242, 131, 169, 118)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__5_value),LEAN_SCALAR_PTR_LITERAL(6, 95, 37, 108, 69, 205, 235, 200)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__0_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "MGoalEntails"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 32, 213, 253, 69, 208, 115, 14)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(203, 9, 83, 52, 40, 85, 31, 178)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.Tactic.Do.ProofMode.MGoal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "_private.Lean.Elab.Tactic.Do.ProofMode.MGoal.0.Lean.Elab.Tactic.Do.ProofMode.MGoal.findHyp\?.go"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "MGoal.findHyp\?: hypothesis without proper metadata: {e}"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0_value;
static const lean_closure_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "stray checkHasType "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 96, .m_capacity = 96, .m_length = 95, .m_data = "checkHasType: the expression's inferred type and its expected type did not match.\n\n      expr: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "\n\n      has inferred type: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "\n\n      but the expected type was: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Ambient state list not a cons "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "mrename_i: Could not find inaccessible hypotheses for "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "MGoalHypMarker"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 32, 213, 253, 69, 208, 115, 14)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 11, 247, 78, 187, 24, 251, 112)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 10)
{
lean_object* v_data_10_; 
v_data_10_ = lean_ctor_get(v_x_9_, 0);
lean_inc(v_data_10_);
if (lean_obj_tag(v_data_10_) == 1)
{
lean_object* v_head_11_; lean_object* v_fst_12_; 
v_head_11_ = lean_ctor_get(v_data_10_, 0);
lean_inc(v_head_11_);
v_fst_12_ = lean_ctor_get(v_head_11_, 0);
lean_inc(v_fst_12_);
if (lean_obj_tag(v_fst_12_) == 1)
{
lean_object* v_pre_13_; 
v_pre_13_ = lean_ctor_get(v_fst_12_, 0);
if (lean_obj_tag(v_pre_13_) == 0)
{
lean_object* v_expr_14_; lean_object* v_tail_15_; lean_object* v_snd_16_; lean_object* v_str_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v_expr_14_ = lean_ctor_get(v_x_9_, 1);
lean_inc_ref(v_expr_14_);
lean_dec_ref_known(v_x_9_, 2);
v_tail_15_ = lean_ctor_get(v_data_10_, 1);
lean_inc(v_tail_15_);
lean_dec_ref_known(v_data_10_, 2);
v_snd_16_ = lean_ctor_get(v_head_11_, 1);
lean_inc(v_snd_16_);
lean_dec(v_head_11_);
v_str_17_ = lean_ctor_get(v_fst_12_, 1);
lean_inc_ref(v_str_17_);
lean_dec_ref_known(v_fst_12_, 2);
v___x_18_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation___closed__0));
v___x_19_ = lean_string_dec_eq(v_str_17_, v___x_18_);
lean_dec_ref(v_str_17_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
lean_dec(v_snd_16_);
lean_dec(v_tail_15_);
lean_dec_ref(v_expr_14_);
v___x_20_ = lean_box(0);
return v___x_20_;
}
else
{
if (lean_obj_tag(v_snd_16_) == 2)
{
if (lean_obj_tag(v_tail_15_) == 1)
{
lean_object* v_head_21_; lean_object* v_fst_22_; 
v_head_21_ = lean_ctor_get(v_tail_15_, 0);
lean_inc(v_head_21_);
v_fst_22_ = lean_ctor_get(v_head_21_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v_fst_22_) == 1)
{
lean_object* v_pre_23_; 
v_pre_23_ = lean_ctor_get(v_fst_22_, 0);
if (lean_obj_tag(v_pre_23_) == 0)
{
lean_object* v_v_24_; lean_object* v_tail_25_; lean_object* v_snd_26_; lean_object* v_str_27_; lean_object* v___x_28_; uint8_t v___x_29_; 
v_v_24_ = lean_ctor_get(v_snd_16_, 0);
lean_inc(v_v_24_);
lean_dec_ref_known(v_snd_16_, 1);
v_tail_25_ = lean_ctor_get(v_tail_15_, 1);
lean_inc(v_tail_25_);
lean_dec_ref_known(v_tail_15_, 2);
v_snd_26_ = lean_ctor_get(v_head_21_, 1);
lean_inc(v_snd_26_);
lean_dec(v_head_21_);
v_str_27_ = lean_ctor_get(v_fst_22_, 1);
lean_inc_ref(v_str_27_);
lean_dec_ref_known(v_fst_22_, 2);
v___x_28_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation___closed__0));
v___x_29_ = lean_string_dec_eq(v_str_27_, v___x_28_);
lean_dec_ref(v_str_27_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; 
lean_dec(v_snd_26_);
lean_dec(v_tail_25_);
lean_dec(v_v_24_);
lean_dec_ref(v_expr_14_);
v___x_30_ = lean_box(0);
return v___x_30_;
}
else
{
if (lean_obj_tag(v_snd_26_) == 2)
{
if (lean_obj_tag(v_tail_25_) == 0)
{
lean_object* v_v_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_39_; 
v_v_31_ = lean_ctor_get(v_snd_26_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v_snd_26_);
if (v_isSharedCheck_39_ == 0)
{
v___x_33_ = v_snd_26_;
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_v_31_);
lean_dec(v_snd_26_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_37_; 
v___x_35_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_35_, 0, v_v_24_);
lean_ctor_set(v___x_35_, 1, v_v_31_);
lean_ctor_set(v___x_35_, 2, v_expr_14_);
if (v_isShared_34_ == 0)
{
lean_ctor_set_tag(v___x_33_, 1);
lean_ctor_set(v___x_33_, 0, v___x_35_);
v___x_37_ = v___x_33_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
else
{
lean_object* v___x_40_; 
lean_dec_ref_known(v_snd_26_, 1);
lean_dec(v_tail_25_);
lean_dec(v_v_24_);
lean_dec_ref(v_expr_14_);
v___x_40_ = lean_box(0);
return v___x_40_;
}
}
else
{
lean_object* v___x_41_; 
lean_dec(v_snd_26_);
lean_dec(v_tail_25_);
lean_dec(v_v_24_);
lean_dec_ref(v_expr_14_);
v___x_41_ = lean_box(0);
return v___x_41_;
}
}
}
else
{
lean_object* v___x_42_; 
lean_dec_ref_known(v_fst_22_, 2);
lean_dec(v_head_21_);
lean_dec_ref_known(v_tail_15_, 2);
lean_dec_ref_known(v_snd_16_, 1);
lean_dec_ref(v_expr_14_);
v___x_42_ = lean_box(0);
return v___x_42_;
}
}
else
{
lean_object* v___x_43_; 
lean_dec(v_fst_22_);
lean_dec(v_head_21_);
lean_dec_ref_known(v_tail_15_, 2);
lean_dec_ref_known(v_snd_16_, 1);
lean_dec_ref(v_expr_14_);
v___x_43_ = lean_box(0);
return v___x_43_;
}
}
else
{
lean_object* v___x_44_; 
lean_dec_ref_known(v_snd_16_, 1);
lean_dec(v_tail_15_);
lean_dec_ref(v_expr_14_);
v___x_44_ = lean_box(0);
return v___x_44_;
}
}
else
{
lean_object* v___x_45_; 
lean_dec(v_snd_16_);
lean_dec(v_tail_15_);
lean_dec_ref(v_expr_14_);
v___x_45_ = lean_box(0);
return v___x_45_;
}
}
}
else
{
lean_object* v___x_46_; 
lean_dec_ref_known(v_fst_12_, 2);
lean_dec_ref_known(v_data_10_, 2);
lean_dec(v_head_11_);
lean_dec_ref_known(v_x_9_, 2);
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
else
{
lean_object* v___x_47_; 
lean_dec(v_fst_12_);
lean_dec_ref_known(v_data_10_, 2);
lean_dec(v_head_11_);
lean_dec_ref_known(v_x_9_, 2);
v___x_47_ = lean_box(0);
return v___x_47_;
}
}
else
{
lean_object* v___x_48_; 
lean_dec_ref_known(v_x_9_, 2);
lean_dec(v_data_10_);
v___x_48_ = lean_box(0);
return v___x_48_;
}
}
else
{
lean_object* v___x_49_; 
lean_dec_ref(v_x_9_);
v___x_49_ = lean_box(0);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object* v_hyp_50_){
_start:
{
lean_object* v_name_51_; lean_object* v_uniq_52_; lean_object* v_p_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_name_51_ = lean_ctor_get(v_hyp_50_, 0);
lean_inc(v_name_51_);
v_uniq_52_ = lean_ctor_get(v_hyp_50_, 1);
lean_inc(v_uniq_52_);
v_p_53_ = lean_ctor_get(v_hyp_50_, 2);
lean_inc_ref(v_p_53_);
lean_dec_ref(v_hyp_50_);
v___x_54_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_nameAnnotation));
v___x_55_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_55_, 0, v_name_51_);
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_uniqAnnotation));
v___x_58_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_58_, 0, v_uniq_52_);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = lean_box(0);
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_59_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_56_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = l_Lean_Expr_mdata___override(v___x_62_, v_p_53_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType(lean_object* v_u_71_, lean_object* v_00_u03c3s_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_73_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__3));
v___x_74_ = lean_box(0);
v___x_75_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_75_, 0, v_u_71_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = l_Lean_mkConst(v___x_73_, v___x_75_);
v___x_77_ = l_Lean_Expr_app___override(v___x_76_, v_00_u03c3s_72_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object* v_u_84_, lean_object* v_00_u03c3s_85_, lean_object* v_p_86_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_87_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__1));
v___x_88_ = lean_box(0);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v_u_84_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = l_Lean_mkConst(v___x_87_, v___x_89_);
v___x_91_ = l_Lean_mkAppB(v___x_90_, v_00_u03c3s_85_, v_p_86_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_isPure_x3f(lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 5)
{
lean_object* v_fn_93_; 
v_fn_93_ = lean_ctor_get(v_x_92_, 0);
lean_inc_ref(v_fn_93_);
if (lean_obj_tag(v_fn_93_) == 5)
{
lean_object* v_fn_94_; 
v_fn_94_ = lean_ctor_get(v_fn_93_, 0);
lean_inc_ref(v_fn_94_);
if (lean_obj_tag(v_fn_94_) == 4)
{
lean_object* v_declName_95_; 
v_declName_95_ = lean_ctor_get(v_fn_94_, 0);
lean_inc(v_declName_95_);
if (lean_obj_tag(v_declName_95_) == 1)
{
lean_object* v_pre_96_; 
v_pre_96_ = lean_ctor_get(v_declName_95_, 0);
lean_inc(v_pre_96_);
if (lean_obj_tag(v_pre_96_) == 1)
{
lean_object* v_pre_97_; 
v_pre_97_ = lean_ctor_get(v_pre_96_, 0);
lean_inc(v_pre_97_);
if (lean_obj_tag(v_pre_97_) == 1)
{
lean_object* v_pre_98_; 
v_pre_98_ = lean_ctor_get(v_pre_97_, 0);
lean_inc(v_pre_98_);
if (lean_obj_tag(v_pre_98_) == 1)
{
lean_object* v_pre_99_; 
v_pre_99_ = lean_ctor_get(v_pre_98_, 0);
if (lean_obj_tag(v_pre_99_) == 0)
{
lean_object* v_arg_100_; lean_object* v_arg_101_; lean_object* v_us_102_; lean_object* v_str_103_; lean_object* v_str_104_; lean_object* v_str_105_; lean_object* v_str_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v_arg_100_ = lean_ctor_get(v_x_92_, 1);
lean_inc_ref(v_arg_100_);
lean_dec_ref_known(v_x_92_, 2);
v_arg_101_ = lean_ctor_get(v_fn_93_, 1);
lean_inc_ref(v_arg_101_);
lean_dec_ref_known(v_fn_93_, 2);
v_us_102_ = lean_ctor_get(v_fn_94_, 1);
lean_inc(v_us_102_);
lean_dec_ref_known(v_fn_94_, 2);
v_str_103_ = lean_ctor_get(v_declName_95_, 1);
lean_inc_ref(v_str_103_);
lean_dec_ref_known(v_declName_95_, 2);
v_str_104_ = lean_ctor_get(v_pre_96_, 1);
lean_inc_ref(v_str_104_);
lean_dec_ref_known(v_pre_96_, 2);
v_str_105_ = lean_ctor_get(v_pre_97_, 1);
lean_inc_ref(v_str_105_);
lean_dec_ref_known(v_pre_97_, 2);
v_str_106_ = lean_ctor_get(v_pre_98_, 1);
lean_inc_ref(v_str_106_);
lean_dec_ref_known(v_pre_98_, 2);
v___x_107_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__0));
v___x_108_ = lean_string_dec_eq(v_str_106_, v___x_107_);
lean_dec_ref(v_str_106_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
lean_dec_ref(v_str_105_);
lean_dec_ref(v_str_104_);
lean_dec_ref(v_str_103_);
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_109_ = lean_box(0);
return v___x_109_;
}
else
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__1));
v___x_111_ = lean_string_dec_eq(v_str_105_, v___x_110_);
lean_dec_ref(v_str_105_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; 
lean_dec_ref(v_str_104_);
lean_dec_ref(v_str_103_);
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_112_ = lean_box(0);
return v___x_112_;
}
else
{
lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_113_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkType___closed__2));
v___x_114_ = lean_string_dec_eq(v_str_104_, v___x_113_);
lean_dec_ref(v_str_104_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; 
lean_dec_ref(v_str_103_);
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_115_ = lean_box(0);
return v___x_115_;
}
else
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure___closed__0));
v___x_117_ = lean_string_dec_eq(v_str_103_, v___x_116_);
lean_dec_ref(v_str_103_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; 
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_118_ = lean_box(0);
return v___x_118_;
}
else
{
if (lean_obj_tag(v_us_102_) == 1)
{
lean_object* v_tail_119_; 
v_tail_119_ = lean_ctor_get(v_us_102_, 1);
if (lean_obj_tag(v_tail_119_) == 0)
{
lean_object* v_head_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_129_; 
v_head_120_ = lean_ctor_get(v_us_102_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_us_102_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v_us_102_, 1);
lean_dec(v_unused_130_);
v___x_122_ = v_us_102_;
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_head_120_);
lean_dec(v_us_102_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
lean_ctor_set_tag(v___x_122_, 0);
lean_ctor_set(v___x_122_, 1, v_arg_100_);
lean_ctor_set(v___x_122_, 0, v_arg_101_);
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_arg_101_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_arg_100_);
v___x_125_ = v_reuseFailAlloc_128_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v_head_120_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
}
else
{
lean_object* v___x_131_; 
lean_dec_ref_known(v_us_102_, 2);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_131_ = lean_box(0);
return v___x_131_;
}
}
else
{
lean_object* v___x_132_; 
lean_dec(v_us_102_);
lean_dec_ref(v_arg_101_);
lean_dec_ref(v_arg_100_);
v___x_132_ = lean_box(0);
return v___x_132_;
}
}
}
}
}
}
else
{
lean_object* v___x_133_; 
lean_dec_ref_known(v_pre_98_, 2);
lean_dec_ref_known(v_pre_97_, 2);
lean_dec_ref_known(v_pre_96_, 2);
lean_dec_ref_known(v_declName_95_, 2);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_133_ = lean_box(0);
return v___x_133_;
}
}
else
{
lean_object* v___x_134_; 
lean_dec_ref_known(v_pre_97_, 2);
lean_dec(v_pre_98_);
lean_dec_ref_known(v_pre_96_, 2);
lean_dec_ref_known(v_declName_95_, 2);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_134_ = lean_box(0);
return v___x_134_;
}
}
else
{
lean_object* v___x_135_; 
lean_dec_ref_known(v_pre_96_, 2);
lean_dec(v_pre_97_);
lean_dec_ref_known(v_declName_95_, 2);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_135_ = lean_box(0);
return v___x_135_;
}
}
else
{
lean_object* v___x_136_; 
lean_dec_ref_known(v_declName_95_, 2);
lean_dec(v_pre_96_);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_136_ = lean_box(0);
return v___x_136_;
}
}
else
{
lean_object* v___x_137_; 
lean_dec(v_declName_95_);
lean_dec_ref_known(v_fn_94_, 2);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_137_ = lean_box(0);
return v___x_137_;
}
}
else
{
lean_object* v___x_138_; 
lean_dec_ref(v_fn_94_);
lean_dec_ref_known(v_fn_93_, 2);
lean_dec_ref_known(v_x_92_, 2);
v___x_138_ = lean_box(0);
return v___x_138_;
}
}
else
{
lean_object* v___x_139_; 
lean_dec_ref_known(v_x_92_, 2);
lean_dec_ref(v_fn_93_);
v___x_139_ = lean_box(0);
return v___x_139_;
}
}
else
{
lean_object* v___x_140_; 
lean_dec_ref(v_x_92_);
v___x_140_ = lean_box(0);
return v___x_140_;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
v___x_149_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__1));
v___x_150_ = l_Lean_mkConst(v___x_149_, v___x_148_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(lean_object* v_u_151_, lean_object* v_00_u03c3s_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_153_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName));
v___x_154_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__2);
v___x_155_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_151_, v_00_u03c3s_152_, v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_156_, 0, v___x_153_);
lean_ctor_set(v___x_156_, 1, v___x_153_);
lean_ctor_set(v___x_156_, 2, v___x_155_);
v___x_157_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object* v_e_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_e_158_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v___x_160_; 
v___x_160_ = lean_box(0);
return v___x_160_;
}
else
{
lean_object* v_val_161_; lean_object* v_name_162_; lean_object* v_p_163_; lean_object* v___x_196_; uint8_t v___x_197_; 
v_val_161_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_val_161_);
lean_dec_ref_known(v___x_159_, 1);
v_name_162_ = lean_ctor_get(v_val_161_, 0);
lean_inc(v_name_162_);
v_p_163_ = lean_ctor_get(v_val_161_, 2);
lean_inc_ref(v_p_163_);
lean_dec(v_val_161_);
v___x_196_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHypName));
v___x_197_ = lean_name_eq(v_name_162_, v___x_196_);
if (v___x_197_ == 0)
{
uint8_t v___x_198_; 
v___x_198_ = l_Lean_Name_hasMacroScopes(v_name_162_);
lean_dec(v_name_162_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; 
lean_dec_ref(v_p_163_);
v___x_199_ = lean_box(0);
return v___x_199_;
}
else
{
goto v___jp_164_;
}
}
else
{
lean_dec(v_name_162_);
goto v___jp_164_;
}
v___jp_164_:
{
lean_object* v___x_165_; 
v___x_165_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_isPure_x3f(v_p_163_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v___x_166_; 
v___x_166_ = lean_box(0);
return v___x_166_;
}
else
{
lean_object* v_val_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_195_; 
v_val_167_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_195_ == 0)
{
v___x_169_ = v___x_165_;
v_isShared_170_ = v_isSharedCheck_195_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_val_167_);
lean_dec(v___x_165_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_195_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v_snd_171_; lean_object* v_snd_172_; 
v_snd_171_ = lean_ctor_get(v_val_167_, 1);
lean_inc(v_snd_171_);
v_snd_172_ = lean_ctor_get(v_snd_171_, 1);
if (lean_obj_tag(v_snd_172_) == 4)
{
lean_object* v_declName_173_; 
v_declName_173_ = lean_ctor_get(v_snd_172_, 0);
lean_inc(v_declName_173_);
if (lean_obj_tag(v_declName_173_) == 1)
{
lean_object* v_pre_174_; 
v_pre_174_ = lean_ctor_get(v_declName_173_, 0);
if (lean_obj_tag(v_pre_174_) == 0)
{
lean_object* v_fst_175_; lean_object* v_fst_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_190_; 
v_fst_175_ = lean_ctor_get(v_val_167_, 0);
lean_inc(v_fst_175_);
lean_dec(v_val_167_);
v_fst_176_ = lean_ctor_get(v_snd_171_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v_snd_171_);
if (v_isSharedCheck_190_ == 0)
{
lean_object* v_unused_191_; 
v_unused_191_ = lean_ctor_get(v_snd_171_, 1);
lean_dec(v_unused_191_);
v___x_178_ = v_snd_171_;
v_isShared_179_ = v_isSharedCheck_190_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_fst_176_);
lean_dec(v_snd_171_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_190_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v_str_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v_str_180_ = lean_ctor_get(v_declName_173_, 1);
lean_inc_ref(v_str_180_);
lean_dec_ref_known(v_declName_173_, 2);
v___x_181_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp___closed__0));
v___x_182_ = lean_string_dec_eq(v_str_180_, v___x_181_);
lean_dec_ref(v_str_180_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; 
lean_del_object(v___x_178_);
lean_dec(v_fst_176_);
lean_dec(v_fst_175_);
lean_del_object(v___x_169_);
v___x_183_ = lean_box(0);
return v___x_183_;
}
else
{
lean_object* v___x_185_; 
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v_fst_176_);
lean_ctor_set(v___x_178_, 0, v_fst_175_);
v___x_185_ = v___x_178_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_fst_175_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_fst_176_);
v___x_185_ = v_reuseFailAlloc_189_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_187_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 0, v___x_185_);
v___x_187_ = v___x_169_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
else
{
lean_object* v___x_192_; 
lean_dec_ref_known(v_declName_173_, 2);
lean_dec(v_snd_171_);
lean_del_object(v___x_169_);
lean_dec(v_val_167_);
v___x_192_ = lean_box(0);
return v___x_192_;
}
}
else
{
lean_object* v___x_193_; 
lean_dec(v_declName_173_);
lean_dec(v_snd_171_);
lean_del_object(v___x_169_);
lean_dec(v_val_167_);
v___x_193_ = lean_box(0);
return v___x_193_;
}
}
else
{
lean_object* v___x_194_; 
lean_dec(v_snd_171_);
lean_del_object(v___x_169_);
lean_dec(v_val_167_);
v___x_194_ = lean_box(0);
return v___x_194_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(lean_object* v_pos_200_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_201_ = lean_unsigned_to_nat(3u);
v___x_202_ = lean_unsigned_to_nat(1u);
v___x_203_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_201_, v___x_202_, v_pos_200_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct___boxed(lean_object* v_pos_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(v_pos_204_);
lean_dec(v_pos_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(lean_object* v_pos_206_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_207_ = lean_unsigned_to_nat(3u);
v___x_208_ = lean_unsigned_to_nat(2u);
v___x_209_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_207_, v___x_208_, v_pos_206_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct___boxed(lean_object* v_pos_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(v_pos_210_);
lean_dec(v_pos_210_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object* v_u_218_, lean_object* v_00_u03c3s_219_, lean_object* v_lhs_220_, lean_object* v_rhs_221_){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_222_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1));
v___x_223_ = lean_box(0);
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v_u_218_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = l_Lean_mkConst(v___x_222_, v___x_224_);
v___x_226_ = l_Lean_mkApp3(v___x_225_, v_00_u03c3s_219_, v_lhs_220_, v_rhs_221_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object* v_u_247_, lean_object* v_00_u03c3s_248_, lean_object* v_lhs_249_, lean_object* v_rhs_250_){
_start:
{
lean_object* v___x_251_; 
lean_inc_ref(v_lhs_249_);
v___x_251_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_lhs_249_);
if (lean_obj_tag(v___x_251_) == 1)
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec_ref_known(v___x_251_, 1);
lean_dec_ref(v_lhs_249_);
v___x_252_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__1));
v___x_253_ = lean_box(0);
v___x_254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_254_, 0, v_u_247_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = l_Lean_mkConst(v___x_252_, v___x_254_);
lean_inc_ref(v_rhs_250_);
v___x_256_ = l_Lean_mkAppB(v___x_255_, v_00_u03c3s_248_, v_rhs_250_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v_rhs_250_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; 
lean_dec(v___x_251_);
lean_inc_ref(v_rhs_250_);
v___x_258_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_rhs_250_);
if (lean_obj_tag(v___x_258_) == 1)
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec_ref_known(v___x_258_, 1);
lean_dec_ref(v_rhs_250_);
v___x_259_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__3));
v___x_260_ = lean_box(0);
v___x_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_261_, 0, v_u_247_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = l_Lean_mkConst(v___x_259_, v___x_261_);
lean_inc_ref(v_lhs_249_);
v___x_263_ = l_Lean_mkAppB(v___x_262_, v_00_u03c3s_248_, v_lhs_249_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v_lhs_249_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
return v___x_264_;
}
else
{
lean_object* v_result_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec(v___x_258_);
lean_inc_ref(v_00_u03c3s_248_);
lean_inc(v_u_247_);
v_result_265_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_247_, v_00_u03c3s_248_, v_lhs_249_, v_rhs_250_);
v___x_266_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd___closed__6));
v___x_267_ = lean_box(0);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_u_247_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = l_Lean_mkConst(v___x_266_, v___x_268_);
lean_inc_ref(v_result_265_);
v___x_270_ = l_Lean_mkAppB(v___x_269_, v_00_u03c3s_248_, v_result_265_);
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v_result_265_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
return v___x_271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType(lean_object* v_u_275_){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_276_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkType___closed__1));
v___x_277_ = l_Lean_Level_succ___override(v_u_275_);
v___x_278_ = lean_box(0);
lean_inc(v___x_277_);
v___x_279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_277_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = l_Lean_mkConst(v___x_276_, v___x_279_);
v___x_281_ = l_Lean_mkSort(v___x_277_);
v___x_282_ = l_Lean_Expr_app___override(v___x_280_, v___x_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(lean_object* v_u_287_){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_288_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil___closed__1));
v___x_289_ = l_Lean_Level_succ___override(v_u_287_);
v___x_290_ = lean_box(0);
lean_inc(v___x_289_);
v___x_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_mkConst(v___x_288_, v___x_291_);
v___x_293_ = l_Lean_mkSort(v___x_289_);
v___x_294_ = l_Lean_Expr_app___override(v___x_292_, v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(lean_object* v_u_299_, lean_object* v_hd_300_, lean_object* v_tl_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_302_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1));
v___x_303_ = l_Lean_Level_succ___override(v_u_299_);
v___x_304_ = lean_box(0);
lean_inc(v___x_303_);
v___x_305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_303_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = l_Lean_mkConst(v___x_302_, v___x_305_);
v___x_307_ = l_Lean_mkSort(v___x_303_);
v___x_308_ = l_Lean_mkApp3(v___x_306_, v___x_307_, v_hd_300_, v_tl_301_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(lean_object* v_a_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_fst_315_; lean_object* v_snd_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_348_; 
v_fst_315_ = lean_ctor_get(v_a_309_, 0);
v_snd_316_ = lean_ctor_get(v_a_309_, 1);
v_isSharedCheck_348_ = !lean_is_exclusive(v_a_309_);
if (v_isSharedCheck_348_ == 0)
{
v___x_318_ = v_a_309_;
v_isShared_319_ = v_isSharedCheck_348_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_snd_316_);
lean_inc(v_fst_315_);
lean_dec(v_a_309_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_348_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_320_; lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_320_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1));
v___x_321_ = lean_unsigned_to_nat(3u);
v___x_322_ = l_Lean_Expr_isAppOfArity(v_fst_315_, v___x_320_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_324_; 
if (v_isShared_319_ == 0)
{
v___x_324_ = v___x_318_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_fst_315_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v_snd_316_);
v___x_324_ = v_reuseFailAlloc_326_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; 
v___x_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_325_, 0, v___x_324_);
return v___x_325_;
}
}
else
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_327_ = lean_unsigned_to_nat(1u);
v___x_328_ = lean_nat_add(v_snd_316_, v___x_327_);
lean_dec(v_snd_316_);
v___x_329_ = lean_unsigned_to_nat(2u);
v___x_330_ = l_Lean_Expr_getAppNumArgs(v_fst_315_);
v___x_331_ = lean_nat_sub(v___x_330_, v___x_329_);
lean_dec(v___x_330_);
v___x_332_ = lean_nat_sub(v___x_331_, v___x_327_);
lean_dec(v___x_331_);
v___x_333_ = l_Lean_Expr_getRevArg_x21(v_fst_315_, v___x_332_);
lean_dec(v_fst_315_);
v___x_334_ = l_Lean_Meta_whnfR(v___x_333_, v___y_310_, v___y_311_, v___y_312_, v___y_313_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_334_, 1);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_328_);
lean_ctor_set(v___x_318_, 0, v_a_335_);
v___x_337_ = v___x_318_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_335_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v___x_328_);
v___x_337_ = v_reuseFailAlloc_339_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
v_a_309_ = v___x_337_;
goto _start;
}
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
lean_dec(v___x_328_);
lean_del_object(v___x_318_);
v_a_340_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_334_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_334_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg___boxed(lean_object* v_a_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(v_a_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(lean_object* v_00_u03c3s_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_Meta_whnfR(v_00_u03c3s_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_363_);
lean_dec_ref_known(v___x_362_, 1);
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v_a_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(v___x_365_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_375_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_375_ == 0)
{
v___x_369_ = v___x_366_;
v_isShared_370_ = v_isSharedCheck_375_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_375_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v_snd_371_; lean_object* v___x_373_; 
v_snd_371_ = lean_ctor_get(v_a_367_, 1);
lean_inc(v_snd_371_);
lean_dec(v_a_367_);
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v_snd_371_);
v___x_373_ = v___x_369_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_snd_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
v_a_376_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_366_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_366_);
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
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_362_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_362_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length___boxed(lean_object* v_00_u03c3s_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(v_00_u03c3s_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0(lean_object* v_inst_399_, lean_object* v_a_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___redArg(v_a_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0___boxed(lean_object* v_inst_407_, lean_object* v_a_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Do_ProofMode_TypeList_length_spec__0(v_inst_407_, v_a_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object* v_e_415_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; uint8_t v___x_418_; 
v___x_416_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21___closed__1));
v___x_417_ = lean_unsigned_to_nat(3u);
v___x_418_ = l_Lean_Expr_isAppOfArity(v_e_415_, v___x_416_, v___x_417_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; 
v___x_419_ = lean_box(0);
return v___x_419_;
}
else
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_420_ = lean_box(0);
v___x_421_ = l_Lean_Expr_appFn_x21(v_e_415_);
v___x_422_ = l_Lean_Expr_appFn_x21(v___x_421_);
v___x_423_ = l_Lean_Expr_appArg_x21(v___x_422_);
lean_dec_ref(v___x_422_);
v___x_424_ = l_Lean_Expr_appArg_x21(v___x_421_);
lean_dec_ref(v___x_421_);
v___x_425_ = l_Lean_Expr_appArg_x21(v_e_415_);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_423_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
v___x_428_ = l_Lean_Expr_getAppFn(v_e_415_);
v___x_429_ = l_Lean_Expr_constLevels_x21(v___x_428_);
lean_dec_ref(v___x_428_);
v___x_430_ = lean_unsigned_to_nat(0u);
v___x_431_ = l_List_get_x21Internal___redArg(v___x_420_, v___x_429_, v___x_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v___x_427_);
v___x_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f___boxed(lean_object* v_e_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_e_434_);
lean_dec_ref(v_e_434_);
return v_res_435_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lean_box(0);
v___x_440_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__1));
v___x_441_ = l_Lean_Expr_const___override(v___x_440_, v___x_439_);
return v___x_441_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__2);
v___x_443_ = lean_box(0);
v___x_444_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___x_442_);
lean_ctor_set(v___x_444_, 2, v___x_442_);
lean_ctor_set(v___x_444_, 3, v___x_442_);
return v___x_444_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default(void){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default___closed__3);
return v___x_445_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal(void){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default;
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object* v_expr_454_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_455_ = l_Lean_Expr_consumeMData(v_expr_454_);
v___x_456_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2));
v___x_457_ = lean_unsigned_to_nat(3u);
v___x_458_ = l_Lean_Expr_isAppOfArity(v___x_455_, v___x_456_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; 
lean_dec_ref(v___x_455_);
v___x_459_ = lean_box(0);
return v___x_459_;
}
else
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_460_ = lean_box(0);
v___x_461_ = l_Lean_Expr_appFn_x21(v___x_455_);
v___x_462_ = l_Lean_Expr_appFn_x21(v___x_461_);
v___x_463_ = l_Lean_Expr_appArg_x21(v___x_462_);
lean_dec_ref(v___x_462_);
v___x_464_ = l_Lean_Expr_appArg_x21(v___x_461_);
lean_dec_ref(v___x_461_);
v___x_465_ = l_Lean_Expr_appArg_x21(v___x_455_);
lean_dec_ref(v___x_455_);
v___x_466_ = l_Lean_Expr_getAppFn_x27(v_expr_454_);
v___x_467_ = l_Lean_Expr_constLevels_x21(v___x_466_);
lean_dec_ref(v___x_466_);
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = l_List_get_x21Internal___redArg(v___x_460_, v___x_467_, v___x_468_);
lean_dec(v___x_467_);
v___x_470_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v___x_463_);
lean_ctor_set(v___x_470_, 2, v___x_464_);
lean_ctor_set(v___x_470_, 3, v___x_465_);
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___boxed(lean_object* v_expr_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_expr_472_);
lean_dec_ref(v_expr_472_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(lean_object* v_e_474_, lean_object* v___y_475_){
_start:
{
uint8_t v___x_477_; 
v___x_477_ = l_Lean_Expr_hasMVar(v_e_474_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
v___x_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_478_, 0, v_e_474_);
return v___x_478_;
}
else
{
lean_object* v___x_479_; lean_object* v_mctx_480_; lean_object* v___x_481_; lean_object* v_fst_482_; lean_object* v_snd_483_; lean_object* v___x_484_; lean_object* v_cache_485_; lean_object* v_zetaDeltaFVarIds_486_; lean_object* v_postponed_487_; lean_object* v_diag_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_497_; 
v___x_479_ = lean_st_ref_get(v___y_475_);
v_mctx_480_ = lean_ctor_get(v___x_479_, 0);
lean_inc_ref(v_mctx_480_);
lean_dec(v___x_479_);
v___x_481_ = l_Lean_instantiateMVarsCore(v_mctx_480_, v_e_474_);
v_fst_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_fst_482_);
v_snd_483_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_snd_483_);
lean_dec_ref(v___x_481_);
v___x_484_ = lean_st_ref_take(v___y_475_);
v_cache_485_ = lean_ctor_get(v___x_484_, 1);
v_zetaDeltaFVarIds_486_ = lean_ctor_get(v___x_484_, 2);
v_postponed_487_ = lean_ctor_get(v___x_484_, 3);
v_diag_488_ = lean_ctor_get(v___x_484_, 4);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_497_ == 0)
{
lean_object* v_unused_498_; 
v_unused_498_ = lean_ctor_get(v___x_484_, 0);
lean_dec(v_unused_498_);
v___x_490_ = v___x_484_;
v_isShared_491_ = v_isSharedCheck_497_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_diag_488_);
lean_inc(v_postponed_487_);
lean_inc(v_zetaDeltaFVarIds_486_);
lean_inc(v_cache_485_);
lean_dec(v___x_484_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_497_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v_snd_483_);
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_snd_483_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_cache_485_);
lean_ctor_set(v_reuseFailAlloc_496_, 2, v_zetaDeltaFVarIds_486_);
lean_ctor_set(v_reuseFailAlloc_496_, 3, v_postponed_487_);
lean_ctor_set(v_reuseFailAlloc_496_, 4, v_diag_488_);
v___x_493_ = v_reuseFailAlloc_496_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_st_ref_put(v___y_475_, v___x_493_);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v_fst_482_);
return v___x_495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg___boxed(lean_object* v_e_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(v_e_499_, v___y_500_);
lean_dec(v___y_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0(lean_object* v_e_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(v_e_503_, v___y_509_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___boxed(lean_object* v_e_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0(v_e_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(lean_object* v_msgData_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v___x_531_; lean_object* v_env_532_; uint8_t v___x_533_; lean_object* v_env_534_; lean_object* v___x_535_; lean_object* v_toCold_536_; lean_object* v_mctx_537_; lean_object* v_lctx_538_; lean_object* v_options_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_531_ = lean_st_ref_get(v___y_529_);
v_env_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc_ref(v_env_532_);
lean_dec(v___x_531_);
v___x_533_ = 0;
v_env_534_ = l_Lean_Environment_setRecordingDeps(v_env_532_, v___x_533_);
v___x_535_ = lean_st_ref_get(v___y_527_);
v_toCold_536_ = lean_ctor_get(v___y_528_, 0);
v_mctx_537_ = lean_ctor_get(v___x_535_, 0);
lean_inc_ref(v_mctx_537_);
lean_dec(v___x_535_);
v_lctx_538_ = lean_ctor_get(v___y_526_, 2);
v_options_539_ = lean_ctor_get(v_toCold_536_, 2);
lean_inc_ref(v_options_539_);
lean_inc_ref(v_lctx_538_);
v___x_540_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_540_, 0, v_env_534_);
lean_ctor_set(v___x_540_, 1, v_mctx_537_);
lean_ctor_set(v___x_540_, 2, v_lctx_538_);
lean_ctor_set(v___x_540_, 3, v_options_539_);
v___x_541_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v_msgData_525_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1___boxed(lean_object* v_msgData_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v_msgData_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(lean_object* v_msg_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_ref_556_; lean_object* v___x_557_; lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
v_ref_556_ = lean_ctor_get(v___y_553_, 2);
v___x_557_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v_msg_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
v_a_558_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v___x_557_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_557_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; lean_object* v___x_564_; 
lean_inc(v_ref_556_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v_ref_556_);
lean_ctor_set(v___x_562_, 1, v_a_558_);
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 1);
lean_ctor_set(v___x_560_, 0, v___x_562_);
v___x_564_ = v___x_560_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg___boxed(lean_object* v_msg_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(v_msg_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
return v_res_573_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__0));
v___x_576_ = l_Lean_stringToMessageData(v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_578_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_588_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc_n(v_a_587_, 2);
lean_dec_ref_known(v___x_586_, 1);
v___x_588_ = l_Lean_MVarId_getType(v_a_587_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_590_; lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_603_; 
v_a_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_a_589_);
lean_dec_ref_known(v___x_588_, 1);
v___x_590_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__0___redArg(v_a_589_, v_a_582_);
v_a_591_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_603_ == 0)
{
v___x_593_ = v___x_590_;
v_isShared_594_ = v_isSharedCheck_603_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_590_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_603_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_591_);
lean_dec(v_a_591_);
if (lean_obj_tag(v___x_595_) == 1)
{
lean_object* v_val_596_; lean_object* v___x_597_; lean_object* v___x_599_; 
v_val_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_val_596_);
lean_dec_ref_known(v___x_595_, 1);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_a_587_);
lean_ctor_set(v___x_597_, 1, v_val_596_);
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v___x_597_);
v___x_599_ = v___x_593_;
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
else
{
lean_object* v___x_601_; lean_object* v___x_602_; 
lean_dec(v___x_595_);
lean_del_object(v___x_593_);
lean_dec(v_a_587_);
v___x_601_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___closed__1);
v___x_602_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(v___x_601_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
return v___x_602_;
}
}
}
else
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
lean_dec(v_a_587_);
v_a_604_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_611_ == 0)
{
v___x_606_ = v___x_588_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_588_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_604_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_a_612_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_586_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_586_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal___boxed(lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_Elab_Tactic_Do_ProofMode_ensureMGoal(v_a_620_, v_a_621_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
lean_dec(v_a_627_);
lean_dec_ref(v_a_626_);
lean_dec(v_a_625_);
lean_dec_ref(v_a_624_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1(lean_object* v_00_u03b1_630_, lean_object* v_msg_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___redArg(v_msg_631_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1___boxed(lean_object* v_00_u03b1_642_, lean_object* v_msg_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1(v_00_u03b1_642_, v_msg_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec(v___y_647_);
lean_dec_ref(v___y_646_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip(lean_object* v_goal_660_){
_start:
{
lean_object* v_u_661_; lean_object* v_00_u03c3s_662_; lean_object* v_hyps_663_; lean_object* v_target_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_u_661_ = lean_ctor_get(v_goal_660_, 0);
lean_inc(v_u_661_);
v_00_u03c3s_662_ = lean_ctor_get(v_goal_660_, 1);
lean_inc_ref(v_00_u03c3s_662_);
v_hyps_663_ = lean_ctor_get(v_goal_660_, 2);
lean_inc_ref(v_hyps_663_);
v_target_664_ = lean_ctor_get(v_goal_660_, 3);
lean_inc_ref(v_target_664_);
lean_dec_ref(v_goal_660_);
v___x_665_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_strip___closed__1));
v___x_666_ = lean_box(0);
v___x_667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_667_, 0, v_u_661_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = l_Lean_mkConst(v___x_665_, v___x_667_);
v___x_669_ = l_Lean_mkApp3(v___x_668_, v_00_u03c3s_662_, v_hyps_663_, v_target_664_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object* v_goal_670_){
_start:
{
lean_object* v_u_671_; lean_object* v_00_u03c3s_672_; lean_object* v_hyps_673_; lean_object* v_target_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_u_671_ = lean_ctor_get(v_goal_670_, 0);
lean_inc(v_u_671_);
v_00_u03c3s_672_ = lean_ctor_get(v_goal_670_, 1);
lean_inc_ref(v_00_u03c3s_672_);
v_hyps_673_ = lean_ctor_get(v_goal_670_, 2);
lean_inc_ref(v_hyps_673_);
v_target_674_ = lean_ctor_get(v_goal_670_, 3);
lean_inc_ref(v_target_674_);
lean_dec_ref(v_goal_670_);
v___x_675_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__2));
v___x_676_ = lean_box(0);
v___x_677_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_677_, 0, v_u_671_);
lean_ctor_set(v___x_677_, 1, v___x_676_);
v___x_678_ = l_Lean_mkConst(v___x_675_, v___x_677_);
v___x_679_ = l_Lean_mkApp3(v___x_678_, v_00_u03c3s_672_, v_hyps_673_, v_target_674_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go_spec__0(lean_object* v_msg_680_){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_box(0);
v___x_682_ = lean_panic_fn_borrowed(v___x_681_, v_msg_680_);
return v___x_682_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_686_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__2));
v___x_687_ = lean_unsigned_to_nat(8u);
v___x_688_ = lean_unsigned_to_nat(141u);
v___x_689_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__1));
v___x_690_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__0));
v___x_691_ = l_mkPanicMessageWithDecl(v___x_690_, v___x_689_, v___x_688_, v___x_687_, v___x_686_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(lean_object* v_name_692_, lean_object* v_e_693_, lean_object* v_p_694_){
_start:
{
lean_object* v___x_695_; 
lean_inc_ref(v_e_693_);
v___x_695_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_e_693_);
if (lean_obj_tag(v___x_695_) == 1)
{
lean_object* v_val_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_707_; 
lean_dec_ref(v_e_693_);
v_val_696_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_707_ == 0)
{
v___x_698_ = v___x_695_;
v_isShared_699_ = v_isSharedCheck_707_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_val_696_);
lean_dec(v___x_695_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_707_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v_name_700_; uint8_t v___x_701_; 
v_name_700_ = lean_ctor_get(v_val_696_, 0);
v___x_701_ = lean_name_eq(v_name_700_, v_name_692_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
lean_del_object(v___x_698_);
lean_dec(v_val_696_);
lean_dec(v_p_694_);
v___x_702_ = lean_box(0);
return v___x_702_;
}
else
{
lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v_p_694_);
lean_ctor_set(v___x_703_, 1, v_val_696_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 0, v___x_703_);
v___x_705_ = v___x_698_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
else
{
lean_object* v___x_708_; 
lean_dec(v___x_695_);
v___x_708_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_e_693_);
if (lean_obj_tag(v___x_708_) == 1)
{
lean_object* v_val_709_; lean_object* v_snd_710_; lean_object* v_snd_711_; lean_object* v_fst_712_; lean_object* v_snd_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec_ref(v_e_693_);
v_val_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_val_709_);
lean_dec_ref_known(v___x_708_, 1);
v_snd_710_ = lean_ctor_get(v_val_709_, 1);
lean_inc(v_snd_710_);
lean_dec(v_val_709_);
v_snd_711_ = lean_ctor_get(v_snd_710_, 1);
lean_inc(v_snd_711_);
lean_dec(v_snd_710_);
v_fst_712_ = lean_ctor_get(v_snd_711_, 0);
lean_inc(v_fst_712_);
v_snd_713_ = lean_ctor_get(v_snd_711_, 1);
lean_inc(v_snd_713_);
lean_dec(v_snd_711_);
v___x_714_ = l_Lean_Elab_Tactic_Do_ProofMode_pushLeftConjunct(v_p_694_);
v___x_715_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(v_name_692_, v_snd_713_, v___x_714_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v___x_716_; 
v___x_716_ = l_Lean_Elab_Tactic_Do_ProofMode_pushRightConjunct(v_p_694_);
lean_dec(v_p_694_);
v_e_693_ = v_fst_712_;
v_p_694_ = v___x_716_;
goto _start;
}
else
{
lean_dec(v_fst_712_);
lean_dec(v_p_694_);
return v___x_715_;
}
}
else
{
lean_object* v___x_718_; 
lean_dec(v___x_708_);
lean_dec(v_p_694_);
v___x_718_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_e_693_);
if (lean_obj_tag(v___x_718_) == 1)
{
lean_object* v___x_719_; 
lean_dec_ref_known(v___x_718_, 1);
v___x_719_ = lean_box(0);
return v___x_719_;
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec(v___x_718_);
v___x_720_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___closed__3);
v___x_721_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go_spec__0(v___x_720_);
return v___x_721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go___boxed(lean_object* v_name_722_, lean_object* v_e_723_, lean_object* v_p_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(v_name_722_, v_e_723_, v_p_724_);
lean_dec(v_name_722_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(lean_object* v_goal_726_, lean_object* v_name_727_){
_start:
{
lean_object* v_hyps_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_hyps_728_ = lean_ctor_get(v_goal_726_, 2);
lean_inc_ref(v_hyps_728_);
lean_dec_ref(v_goal_726_);
v___x_729_ = l_Lean_SubExpr_Pos_root;
v___x_730_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f_go(v_name_727_, v_hyps_728_, v___x_729_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f___boxed(lean_object* v_goal_731_, lean_object* v_name_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_findHyp_x3f(v_goal_731_, v_name_732_);
lean_dec(v_name_732_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(lean_object* v_msg_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_ref_740_; lean_object* v___x_741_; lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_750_; 
v_ref_740_ = lean_ctor_get(v___y_737_, 2);
v___x_741_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v_msg_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_750_ == 0)
{
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_750_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_748_; 
lean_inc(v_ref_740_);
v___x_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_746_, 0, v_ref_740_);
lean_ctor_set(v___x_746_, 1, v_a_742_);
if (v_isShared_745_ == 0)
{
lean_ctor_set_tag(v___x_744_, 1);
lean_ctor_set(v___x_744_, 0, v___x_746_);
v___x_748_ = v___x_744_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_746_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg___boxed(lean_object* v_msg_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v_msg_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
return v_res_757_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0(uint8_t v___x_765_, lean_object* v_x_766_){
_start:
{
if (lean_obj_tag(v_x_766_) == 1)
{
lean_object* v_pre_767_; 
v_pre_767_ = lean_ctor_get(v_x_766_, 0);
switch(lean_obj_tag(v_pre_767_))
{
case 1:
{
lean_object* v_pre_768_; 
v_pre_768_ = lean_ctor_get(v_pre_767_, 0);
switch(lean_obj_tag(v_pre_768_))
{
case 0:
{
lean_object* v_str_769_; lean_object* v_str_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v_str_769_ = lean_ctor_get(v_x_766_, 1);
v_str_770_ = lean_ctor_get(v_pre_767_, 1);
v___x_771_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_772_ = lean_string_dec_eq(v_str_770_, v___x_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_773_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f___closed__0));
v___x_774_ = lean_string_dec_eq(v_str_770_, v___x_773_);
if (v___x_774_ == 0)
{
return v___x_774_;
}
else
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_776_ = lean_string_dec_eq(v_str_769_, v___x_775_);
return v___x_776_;
}
}
else
{
lean_object* v___x_777_; uint8_t v___x_778_; 
v___x_777_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_778_ = lean_string_dec_eq(v_str_769_, v___x_777_);
return v___x_778_;
}
}
case 1:
{
lean_object* v_pre_779_; 
v_pre_779_ = lean_ctor_get(v_pre_768_, 0);
if (lean_obj_tag(v_pre_779_) == 0)
{
lean_object* v_str_780_; lean_object* v_str_781_; lean_object* v_str_782_; lean_object* v___x_783_; uint8_t v___x_784_; 
v_str_780_ = lean_ctor_get(v_x_766_, 1);
v_str_781_ = lean_ctor_get(v_pre_767_, 1);
v_str_782_ = lean_ctor_get(v_pre_768_, 1);
v___x_783_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_784_ = lean_string_dec_eq(v_str_782_, v___x_783_);
if (v___x_784_ == 0)
{
return v___x_784_;
}
else
{
lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_785_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_786_ = lean_string_dec_eq(v_str_781_, v___x_785_);
if (v___x_786_ == 0)
{
return v___x_786_;
}
else
{
lean_object* v___x_787_; uint8_t v___x_788_; 
v___x_787_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_788_ = lean_string_dec_eq(v_str_780_, v___x_787_);
return v___x_788_;
}
}
}
else
{
return v___x_765_;
}
}
default: 
{
return v___x_765_;
}
}
}
case 0:
{
lean_object* v_str_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v_str_789_ = lean_ctor_get(v_x_766_, 1);
v___x_790_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_791_ = lean_string_dec_eq(v_str_789_, v___x_790_);
return v___x_791_;
}
default: 
{
return v___x_765_;
}
}
}
else
{
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___x_792_, lean_object* v_x_793_){
_start:
{
uint8_t v___x_4372__boxed_794_; uint8_t v_res_795_; lean_object* v_r_796_; 
v___x_4372__boxed_794_ = lean_unbox(v___x_792_);
v_res_795_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___lam__0(v___x_4372__boxed_794_, v_x_793_);
lean_dec(v_x_793_);
v_r_796_ = lean_box(v_res_795_);
return v_r_796_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(lean_object* v_opts_797_, lean_object* v_opt_798_){
_start:
{
lean_object* v_name_799_; lean_object* v_defValue_800_; lean_object* v_map_801_; lean_object* v___x_802_; 
v_name_799_ = lean_ctor_get(v_opt_798_, 0);
v_defValue_800_ = lean_ctor_get(v_opt_798_, 1);
v_map_801_ = lean_ctor_get(v_opts_797_, 0);
v___x_802_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_801_, v_name_799_);
if (lean_obj_tag(v___x_802_) == 0)
{
uint8_t v___x_803_; 
v___x_803_ = lean_unbox(v_defValue_800_);
return v___x_803_;
}
else
{
lean_object* v_val_804_; 
v_val_804_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_val_804_);
lean_dec_ref_known(v___x_802_, 1);
if (lean_obj_tag(v_val_804_) == 1)
{
uint8_t v_v_805_; 
v_v_805_ = lean_ctor_get_uint8(v_val_804_, 0);
lean_dec_ref_known(v_val_804_, 0);
return v_v_805_;
}
else
{
uint8_t v___x_806_; 
lean_dec(v_val_804_);
v___x_806_ = lean_unbox(v_defValue_800_);
return v___x_806_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_opts_807_, lean_object* v_opt_808_){
_start:
{
uint8_t v_res_809_; lean_object* v_r_810_; 
v_res_809_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(v_opts_807_, v_opt_808_);
lean_dec_ref(v_opt_808_);
lean_dec_ref(v_opts_807_);
v_r_810_ = lean_box(v_res_809_);
return v_r_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(lean_object* v_ref_815_, lean_object* v_msgData_816_, uint8_t v_severity_817_, uint8_t v_isSilent_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v___y_825_; uint8_t v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; uint8_t v___y_831_; lean_object* v_toCold_832_; lean_object* v___y_833_; lean_object* v___y_862_; lean_object* v___y_863_; uint8_t v___y_864_; lean_object* v___y_865_; uint8_t v___y_866_; uint8_t v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; uint8_t v___y_892_; uint8_t v___y_893_; uint8_t v___y_894_; lean_object* v___y_895_; uint8_t v___y_899_; uint8_t v___x_916_; uint8_t v___x_917_; 
v___x_916_ = 2;
v___x_917_ = l_Lean_instBEqMessageSeverity_beq(v_severity_817_, v___x_916_);
if (v___x_917_ == 0)
{
goto v___jp_909_;
}
else
{
uint8_t v___x_918_; 
lean_inc_ref(v_msgData_816_);
v___x_918_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_816_);
if (v___x_918_ == 0)
{
goto v___jp_909_;
}
else
{
lean_object* v___x_919_; lean_object* v___x_920_; 
lean_dec_ref(v_msgData_816_);
v___x_919_ = lean_box(0);
v___x_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
return v___x_920_;
}
}
v___jp_824_:
{
lean_object* v_currNamespace_834_; lean_object* v_openDecls_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v_env_840_; lean_object* v_nextMacroScope_841_; lean_object* v_ngen_842_; lean_object* v_auxDeclNGen_843_; lean_object* v_traceState_844_; lean_object* v_cache_845_; lean_object* v_recordedDeps_846_; lean_object* v_messages_847_; lean_object* v_infoState_848_; lean_object* v_snapshotTasks_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_860_; 
v_currNamespace_834_ = lean_ctor_get(v_toCold_832_, 4);
v_openDecls_835_ = lean_ctor_get(v_toCold_832_, 5);
lean_inc(v_openDecls_835_);
lean_inc(v_currNamespace_834_);
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v_currNamespace_834_);
lean_ctor_set(v___x_836_, 1, v_openDecls_835_);
v___x_837_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
lean_ctor_set(v___x_837_, 1, v___y_830_);
lean_inc_ref(v___y_827_);
lean_inc_ref(v___y_829_);
v___x_838_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_838_, 0, v___y_829_);
lean_ctor_set(v___x_838_, 1, v___y_825_);
lean_ctor_set(v___x_838_, 2, v___y_828_);
lean_ctor_set(v___x_838_, 3, v___y_827_);
lean_ctor_set(v___x_838_, 4, v___x_837_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*5, v___y_831_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*5 + 1, v___y_826_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*5 + 2, v_isSilent_818_);
v___x_839_ = lean_st_ref_take(v___y_833_);
v_env_840_ = lean_ctor_get(v___x_839_, 0);
v_nextMacroScope_841_ = lean_ctor_get(v___x_839_, 1);
v_ngen_842_ = lean_ctor_get(v___x_839_, 2);
v_auxDeclNGen_843_ = lean_ctor_get(v___x_839_, 3);
v_traceState_844_ = lean_ctor_get(v___x_839_, 4);
v_cache_845_ = lean_ctor_get(v___x_839_, 5);
v_recordedDeps_846_ = lean_ctor_get(v___x_839_, 6);
v_messages_847_ = lean_ctor_get(v___x_839_, 7);
v_infoState_848_ = lean_ctor_get(v___x_839_, 8);
v_snapshotTasks_849_ = lean_ctor_get(v___x_839_, 9);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_839_);
if (v_isSharedCheck_860_ == 0)
{
v___x_851_ = v___x_839_;
v_isShared_852_ = v_isSharedCheck_860_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_snapshotTasks_849_);
lean_inc(v_infoState_848_);
lean_inc(v_messages_847_);
lean_inc(v_recordedDeps_846_);
lean_inc(v_cache_845_);
lean_inc(v_traceState_844_);
lean_inc(v_auxDeclNGen_843_);
lean_inc(v_ngen_842_);
lean_inc(v_nextMacroScope_841_);
lean_inc(v_env_840_);
lean_dec(v___x_839_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_860_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_853_ = lean_box(0);
v___x_854_ = l_Lean_MessageLog_add(v___x_838_, v_messages_847_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 7, v___x_854_);
v___x_856_ = v___x_851_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_env_840_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v_nextMacroScope_841_);
lean_ctor_set(v_reuseFailAlloc_859_, 2, v_ngen_842_);
lean_ctor_set(v_reuseFailAlloc_859_, 3, v_auxDeclNGen_843_);
lean_ctor_set(v_reuseFailAlloc_859_, 4, v_traceState_844_);
lean_ctor_set(v_reuseFailAlloc_859_, 5, v_cache_845_);
lean_ctor_set(v_reuseFailAlloc_859_, 6, v_recordedDeps_846_);
lean_ctor_set(v_reuseFailAlloc_859_, 7, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_859_, 8, v_infoState_848_);
lean_ctor_set(v_reuseFailAlloc_859_, 9, v_snapshotTasks_849_);
v___x_856_ = v_reuseFailAlloc_859_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = lean_st_ref_put(v___y_833_, v___x_856_);
v___x_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_858_, 0, v___x_853_);
return v___x_858_;
}
}
}
v___jp_861_:
{
lean_object* v_fileName_870_; lean_object* v_fileMap_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_887_; 
v_fileName_870_ = lean_ctor_get(v___y_865_, 0);
v_fileMap_871_ = lean_ctor_get(v___y_865_, 1);
v___x_872_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_816_);
v___x_873_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_ensureMGoal_spec__1_spec__1(v___x_872_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
v_a_874_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_887_ == 0)
{
v___x_876_ = v___x_873_;
v_isShared_877_ = v_isSharedCheck_887_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_873_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_887_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
lean_inc_ref_n(v_fileMap_871_, 2);
v___x_878_ = l_Lean_FileMap_toPosition(v_fileMap_871_, v___y_868_);
lean_dec(v___y_868_);
v___x_879_ = l_Lean_FileMap_toPosition(v_fileMap_871_, v___y_869_);
lean_dec(v___y_869_);
v___x_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
v___x_881_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__0));
if (v___y_866_ == 0)
{
lean_del_object(v___x_876_);
v___y_825_ = v___x_878_;
v___y_826_ = v___y_864_;
v___y_827_ = v___x_881_;
v___y_828_ = v___x_880_;
v___y_829_ = v_fileName_870_;
v___y_830_ = v_a_874_;
v___y_831_ = v___y_867_;
v_toCold_832_ = v___y_862_;
v___y_833_ = v___y_822_;
goto v___jp_824_;
}
else
{
uint8_t v___x_882_; 
lean_inc(v_a_874_);
lean_inc_ref(v___y_863_);
v___x_882_ = l_Lean_MessageData_hasTag(v___y_863_, v_a_874_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; lean_object* v___x_885_; 
lean_dec_ref_known(v___x_880_, 1);
lean_dec_ref(v___x_878_);
lean_dec(v_a_874_);
v___x_883_ = lean_box(0);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 0, v___x_883_);
v___x_885_ = v___x_876_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
else
{
lean_del_object(v___x_876_);
v___y_825_ = v___x_878_;
v___y_826_ = v___y_864_;
v___y_827_ = v___x_881_;
v___y_828_ = v___x_880_;
v___y_829_ = v_fileName_870_;
v___y_830_ = v_a_874_;
v___y_831_ = v___y_867_;
v_toCold_832_ = v___y_862_;
v___y_833_ = v___y_822_;
goto v___jp_824_;
}
}
}
}
v___jp_888_:
{
lean_object* v___x_896_; 
v___x_896_ = l_Lean_Syntax_getTailPos_x3f(v___y_889_, v___y_893_);
lean_dec(v___y_889_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_inc(v___y_895_);
v___y_862_ = v___y_890_;
v___y_863_ = v___y_891_;
v___y_864_ = v___y_894_;
v___y_865_ = v___y_890_;
v___y_866_ = v___y_892_;
v___y_867_ = v___y_893_;
v___y_868_ = v___y_895_;
v___y_869_ = v___y_895_;
goto v___jp_861_;
}
else
{
lean_object* v_val_897_; 
v_val_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_val_897_);
lean_dec_ref_known(v___x_896_, 1);
v___y_862_ = v___y_890_;
v___y_863_ = v___y_891_;
v___y_864_ = v___y_894_;
v___y_865_ = v___y_890_;
v___y_866_ = v___y_892_;
v___y_867_ = v___y_893_;
v___y_868_ = v___y_895_;
v___y_869_ = v_val_897_;
goto v___jp_861_;
}
}
v___jp_898_:
{
lean_object* v_toCold_900_; lean_object* v_ref_901_; uint8_t v_suppressElabErrors_902_; lean_object* v_ref_903_; uint8_t v___x_904_; lean_object* v___f_905_; lean_object* v___x_906_; 
v_toCold_900_ = lean_ctor_get(v___y_821_, 0);
v_ref_901_ = lean_ctor_get(v___y_821_, 2);
v_suppressElabErrors_902_ = lean_ctor_get_uint8(v___y_821_, sizeof(void*)*3 + 2);
v_ref_903_ = l_Lean_replaceRef(v_ref_815_, v_ref_901_);
v___x_904_ = 0;
v___f_905_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___closed__1));
v___x_906_ = l_Lean_Syntax_getPos_x3f(v_ref_903_, v___x_904_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v___x_907_; 
v___x_907_ = lean_unsigned_to_nat(0u);
v___y_889_ = v_ref_903_;
v___y_890_ = v_toCold_900_;
v___y_891_ = v___f_905_;
v___y_892_ = v_suppressElabErrors_902_;
v___y_893_ = v___x_904_;
v___y_894_ = v___y_899_;
v___y_895_ = v___x_907_;
goto v___jp_888_;
}
else
{
lean_object* v_val_908_; 
v_val_908_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_val_908_);
lean_dec_ref_known(v___x_906_, 1);
v___y_889_ = v_ref_903_;
v___y_890_ = v_toCold_900_;
v___y_891_ = v___f_905_;
v___y_892_ = v_suppressElabErrors_902_;
v___y_893_ = v___x_904_;
v___y_894_ = v___y_899_;
v___y_895_ = v_val_908_;
goto v___jp_888_;
}
}
v___jp_909_:
{
uint8_t v___x_910_; uint8_t v___x_911_; 
v___x_910_ = 1;
v___x_911_ = l_Lean_instBEqMessageSeverity_beq(v_severity_817_, v___x_910_);
if (v___x_911_ == 0)
{
v___y_899_ = v_severity_817_;
goto v___jp_898_;
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; uint8_t v___x_914_; 
v___x_912_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_821_);
v___x_913_ = l_Lean_warningAsError;
v___x_914_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1_spec__3(v___x_912_, v___x_913_);
lean_dec_ref(v___x_912_);
if (v___x_914_ == 0)
{
v___y_899_ = v_severity_817_;
goto v___jp_898_;
}
else
{
uint8_t v___x_915_; 
v___x_915_ = 2;
v___y_899_ = v___x_915_;
goto v___jp_898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_921_, lean_object* v_msgData_922_, lean_object* v_severity_923_, lean_object* v_isSilent_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
uint8_t v_severity_boxed_930_; uint8_t v_isSilent_boxed_931_; lean_object* v_res_932_; 
v_severity_boxed_930_ = lean_unbox(v_severity_923_);
v_isSilent_boxed_931_ = lean_unbox(v_isSilent_924_);
v_res_932_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(v_ref_921_, v_msgData_922_, v_severity_boxed_930_, v_isSilent_boxed_931_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v_ref_921_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(lean_object* v_msgData_933_, uint8_t v_severity_934_, uint8_t v_isSilent_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v_ref_941_; lean_object* v___x_942_; 
v_ref_941_ = lean_ctor_get(v___y_938_, 2);
v___x_942_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0_spec__1(v_ref_941_, v_msgData_933_, v_severity_934_, v_isSilent_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0___boxed(lean_object* v_msgData_943_, lean_object* v_severity_944_, lean_object* v_isSilent_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
uint8_t v_severity_boxed_951_; uint8_t v_isSilent_boxed_952_; lean_object* v_res_953_; 
v_severity_boxed_951_ = lean_unbox(v_severity_944_);
v_isSilent_boxed_952_ = lean_unbox(v_isSilent_945_);
v_res_953_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(v_msgData_943_, v_severity_boxed_951_, v_isSilent_boxed_952_, v___y_946_, v___y_947_, v___y_948_, v___y_949_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(lean_object* v_msgData_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
uint8_t v___x_960_; uint8_t v___x_961_; lean_object* v___x_962_; 
v___x_960_ = 1;
v___x_961_ = 0;
v___x_962_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0_spec__0(v_msgData_954_, v___x_960_, v___x_961_, v___y_955_, v___y_956_, v___y_957_, v___y_958_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0___boxed(lean_object* v_msgData_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(v_msgData_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
return v_res_969_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__0));
v___x_972_ = l_Lean_stringToMessageData(v___x_971_);
return v___x_972_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__2));
v___x_975_ = l_Lean_stringToMessageData(v___x_974_);
return v___x_975_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__4));
v___x_978_ = l_Lean_stringToMessageData(v___x_977_);
return v___x_978_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__6));
v___x_981_ = l_Lean_stringToMessageData(v___x_980_);
return v___x_981_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__8));
v___x_984_ = l_Lean_stringToMessageData(v___x_983_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(lean_object* v_expr_985_, lean_object* v_expectedType_986_, uint8_t v_suppressWarning_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; uint8_t v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = 0;
lean_inc_ref(v_expr_985_);
v___x_1009_ = l_Lean_Meta_check(v_expr_985_, v___x_1008_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v___x_1010_; 
lean_dec_ref_known(v___x_1009_, 1);
lean_inc_ref(v_expectedType_986_);
v___x_1010_ = l_Lean_Meta_check(v_expectedType_986_, v___x_1008_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v___x_1011_; 
lean_dec_ref_known(v___x_1010_, 1);
lean_inc(v_a_991_);
lean_inc_ref(v_a_990_);
lean_inc(v_a_989_);
lean_inc_ref(v_a_988_);
lean_inc_ref(v_expr_985_);
v___x_1011_ = lean_infer_type(v_expr_985_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; lean_object* v___x_1013_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc_n(v_a_1012_, 2);
lean_dec_ref_known(v___x_1011_, 1);
lean_inc_ref(v_expectedType_986_);
v___x_1013_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1012_, v_expectedType_986_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_a_1014_; uint8_t v___x_1015_; 
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_a_1014_);
lean_dec_ref_known(v___x_1013_, 1);
v___x_1015_ = lean_unbox(v_a_1014_);
lean_dec(v_a_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1016_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__5);
v___x_1017_ = l_Lean_indentExpr(v_expr_985_);
v___x_1018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__7);
v___x_1020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = l_Lean_indentExpr(v_a_1012_);
v___x_1022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1020_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__9);
v___x_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = l_Lean_indentExpr(v_expectedType_986_);
v___x_1026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v___x_1026_, v_a_988_, v_a_989_, v_a_990_, v_a_991_);
return v___x_1027_;
}
else
{
lean_dec(v_a_1012_);
v___y_994_ = v_a_988_;
v___y_995_ = v_a_989_;
v___y_996_ = v_a_990_;
v___y_997_ = v_a_991_;
goto v___jp_993_;
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_dec(v_a_1012_);
lean_dec_ref(v_expectedType_986_);
lean_dec_ref(v_expr_985_);
v_a_1028_ = lean_ctor_get(v___x_1013_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_1013_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1013_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
lean_dec_ref(v_expectedType_986_);
lean_dec_ref(v_expr_985_);
v_a_1036_ = lean_ctor_get(v___x_1011_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_1011_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1011_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
else
{
lean_dec_ref(v_expectedType_986_);
lean_dec_ref(v_expr_985_);
return v___x_1010_;
}
}
else
{
lean_dec_ref(v_expectedType_986_);
lean_dec_ref(v_expr_985_);
return v___x_1009_;
}
v___jp_993_:
{
if (v_suppressWarning_987_ == 0)
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_998_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__1);
v___x_999_ = l_Lean_MessageData_ofExpr(v_expr_985_);
v___x_1000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___closed__3);
v___x_1002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___x_1003_ = l_Lean_MessageData_ofExpr(v_expectedType_986_);
v___x_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1002_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = l_Lean_logWarning___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__0(v___x_1004_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
return v___x_1005_;
}
else
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec_ref(v_expectedType_986_);
lean_dec_ref(v_expr_985_);
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
return v___x_1007_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_checkHasType___boxed(lean_object* v_expr_1044_, lean_object* v_expectedType_1045_, lean_object* v_suppressWarning_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
uint8_t v_suppressWarning_boxed_1052_; lean_object* v_res_1053_; 
v_suppressWarning_boxed_1052_ = lean_unbox(v_suppressWarning_1046_);
v_res_1053_ = l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(v_expr_1044_, v_expectedType_1045_, v_suppressWarning_boxed_1052_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1(lean_object* v_00_u03b1_1054_, lean_object* v_msg_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v_msg_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___boxed(lean_object* v_00_u03b1_1062_, lean_object* v_msg_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1(v_00_u03b1_1062_, v_msg_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof(lean_object* v_goal_1070_, lean_object* v_prf_1071_, uint8_t v_suppressWarning_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_1070_);
v___x_1079_ = l_Lean_Elab_Tactic_Do_ProofMode_checkHasType(v_prf_1071_, v___x_1078_, v_suppressWarning_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof___boxed(lean_object* v_goal_1080_, lean_object* v_prf_1081_, lean_object* v_suppressWarning_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_){
_start:
{
uint8_t v_suppressWarning_boxed_1088_; lean_object* v_res_1089_; 
v_suppressWarning_boxed_1088_ = lean_unbox(v_suppressWarning_1082_);
v_res_1089_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_checkProof(v_goal_1080_, v_prf_1081_, v_suppressWarning_boxed_1088_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_);
lean_dec(v_a_1086_);
lean_dec_ref(v_a_1085_);
lean_dec(v_a_1084_);
lean_dec_ref(v_a_1083_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(lean_object* v_x_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1105_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2));
lean_inc(v_x_1101_);
v___x_1106_ = l_Lean_Syntax_isOfKind(v_x_1101_, v___x_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4));
v___x_1108_ = l_Lean_Core_mkFreshUserName(v___x_1107_, v_a_1102_, v_a_1103_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1117_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1117_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v_a_1109_);
lean_ctor_set(v___x_1113_, 1, v_x_1101_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1113_);
v___x_1115_ = v___x_1111_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec(v_x_1101_);
v_a_1118_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1108_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1108_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_object* v___x_1126_; lean_object* v_name_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1126_ = lean_unsigned_to_nat(0u);
v_name_1127_ = l_Lean_Syntax_getArg(v_x_1101_, v___x_1126_);
v___x_1128_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6));
lean_inc(v_name_1127_);
v___x_1129_ = l_Lean_Syntax_isOfKind(v_name_1127_, v___x_1128_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_dec(v_name_1127_);
v___x_1130_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__4));
v___x_1131_ = l_Lean_Core_mkFreshUserName(v___x_1130_, v_a_1102_, v_a_1103_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1140_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1134_ = v___x_1131_;
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1136_, 0, v_a_1132_);
lean_ctor_set(v___x_1136_, 1, v_x_1101_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v___x_1136_);
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec(v_x_1101_);
v_a_1141_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1131_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1131_);
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
}
else
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
lean_dec(v_x_1101_);
v___x_1149_ = l_Lean_TSyntax_getId(v_name_1127_);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v_name_1127_);
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___boxed(lean_object* v_x_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_x_1152_, v_a_1153_, v_a_1154_);
lean_dec(v_a_1154_);
lean_dec_ref(v_a_1153_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(lean_object* v_as_1157_, size_t v_i_1158_, size_t v_stop_1159_, lean_object* v_b_1160_){
_start:
{
uint8_t v___x_1161_; 
v___x_1161_ = lean_usize_dec_eq(v_i_1158_, v_stop_1159_);
if (v___x_1161_ == 0)
{
size_t v___x_1162_; size_t v___x_1163_; lean_object* v___x_1164_; lean_object* v_snd_1165_; lean_object* v_fst_1166_; lean_object* v_fst_1167_; lean_object* v_snd_1168_; uint8_t v___x_1169_; lean_object* v___x_1170_; 
v___x_1162_ = ((size_t)1ULL);
v___x_1163_ = lean_usize_sub(v_i_1158_, v___x_1162_);
v___x_1164_ = lean_array_uget_borrowed(v_as_1157_, v___x_1163_);
v_snd_1165_ = lean_ctor_get(v___x_1164_, 1);
v_fst_1166_ = lean_ctor_get(v___x_1164_, 0);
v_fst_1167_ = lean_ctor_get(v_snd_1165_, 0);
v_snd_1168_ = lean_ctor_get(v_snd_1165_, 1);
v___x_1169_ = lean_unbox(v_snd_1168_);
lean_inc(v_fst_1167_);
lean_inc(v_fst_1166_);
v___x_1170_ = l_Lean_Expr_lam___override(v_fst_1166_, v_fst_1167_, v_b_1160_, v___x_1169_);
v_i_1158_ = v___x_1163_;
v_b_1160_ = v___x_1170_;
goto _start;
}
else
{
return v_b_1160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0___boxed(lean_object* v_as_1172_, lean_object* v_i_1173_, lean_object* v_stop_1174_, lean_object* v_b_1175_){
_start:
{
size_t v_i_boxed_1176_; size_t v_stop_boxed_1177_; lean_object* v_res_1178_; 
v_i_boxed_1176_ = lean_unbox_usize(v_i_1173_);
lean_dec(v_i_1173_);
v_stop_boxed_1177_ = lean_unbox_usize(v_stop_1174_);
lean_dec(v_stop_1174_);
v_res_1178_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(v_as_1172_, v_i_boxed_1176_, v_stop_boxed_1177_, v_b_1175_);
lean_dec_ref(v_as_1172_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(lean_object* v_revLams_1179_, lean_object* v_revAppArgs_1180_, lean_object* v_body_1181_){
_start:
{
uint8_t v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1182_ = 0;
v___x_1183_ = l_Lean_Expr_betaRev(v_body_1181_, v_revAppArgs_1180_, v___x_1182_, v___x_1182_);
v___x_1184_ = lean_array_get_size(v_revLams_1179_);
v___x_1185_ = lean_unsigned_to_nat(0u);
v___x_1186_ = lean_nat_dec_lt(v___x_1185_, v___x_1184_);
if (v___x_1186_ == 0)
{
return v___x_1183_;
}
else
{
size_t v___x_1187_; size_t v___x_1188_; lean_object* v___x_1189_; 
v___x_1187_ = lean_usize_of_nat(v___x_1184_);
v___x_1188_ = ((size_t)0ULL);
v___x_1189_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap_spec__0(v_revLams_1179_, v___x_1187_, v___x_1188_, v___x_1183_);
return v___x_1189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap___boxed(lean_object* v_revLams_1190_, lean_object* v_revAppArgs_1191_, lean_object* v_body_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(v_revLams_1190_, v_revAppArgs_1191_, v_body_1192_);
lean_dec_ref(v_revAppArgs_1191_);
lean_dec_ref(v_revLams_1190_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(lean_object* v_00_u03c3s_1194_, lean_object* v_revLams_1195_, lean_object* v_revAppArgs_1196_, lean_object* v_e_1197_){
_start:
{
lean_object* v___x_1198_; 
lean_inc_ref(v_e_1197_);
v___x_1198_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_e_1197_);
if (lean_obj_tag(v___x_1198_) == 1)
{
lean_object* v_val_1199_; lean_object* v_fst_1200_; lean_object* v___x_1201_; 
lean_dec_ref(v_e_1197_);
lean_dec_ref(v_revAppArgs_1196_);
lean_dec_ref(v_revLams_1195_);
v_val_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_val_1199_);
lean_dec_ref_known(v___x_1198_, 1);
v_fst_1200_ = lean_ctor_get(v_val_1199_, 0);
lean_inc(v_fst_1200_);
lean_dec(v_val_1199_);
v___x_1201_ = l_Lean_Elab_Tactic_Do_ProofMode_emptyHyp(v_fst_1200_, v_00_u03c3s_1194_);
return v___x_1201_;
}
else
{
lean_object* v___x_1202_; 
lean_dec(v___x_1198_);
lean_inc_ref(v_e_1197_);
v___x_1202_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_e_1197_);
if (lean_obj_tag(v___x_1202_) == 1)
{
lean_object* v_val_1203_; lean_object* v_name_1204_; lean_object* v_uniq_1205_; lean_object* v_p_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1215_; 
lean_dec_ref(v_e_1197_);
lean_dec_ref(v_00_u03c3s_1194_);
v_val_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_val_1203_);
lean_dec_ref_known(v___x_1202_, 1);
v_name_1204_ = lean_ctor_get(v_val_1203_, 0);
v_uniq_1205_ = lean_ctor_get(v_val_1203_, 1);
v_p_1206_ = lean_ctor_get(v_val_1203_, 2);
v_isSharedCheck_1215_ = !lean_is_exclusive(v_val_1203_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1208_ = v_val_1203_;
v_isShared_1209_ = v_isSharedCheck_1215_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_p_1206_);
lean_inc(v_uniq_1205_);
lean_inc(v_name_1204_);
lean_dec(v_val_1203_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1215_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1210_; lean_object* v___x_1212_; 
v___x_1210_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(v_revLams_1195_, v_revAppArgs_1196_, v_p_1206_);
lean_dec_ref(v_revAppArgs_1196_);
lean_dec_ref(v_revLams_1195_);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 2, v___x_1210_);
v___x_1212_ = v___x_1208_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_name_1204_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_uniq_1205_);
lean_ctor_set(v_reuseFailAlloc_1214_, 2, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_1212_);
return v___x_1213_;
}
}
}
else
{
lean_object* v___x_1216_; 
lean_dec(v___x_1202_);
v___x_1216_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_e_1197_);
if (lean_obj_tag(v___x_1216_) == 1)
{
lean_object* v_val_1217_; lean_object* v_snd_1218_; lean_object* v_snd_1219_; lean_object* v_fst_1220_; lean_object* v_fst_1221_; lean_object* v_snd_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
lean_dec_ref(v_e_1197_);
v_val_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_val_1217_);
lean_dec_ref_known(v___x_1216_, 1);
v_snd_1218_ = lean_ctor_get(v_val_1217_, 1);
v_snd_1219_ = lean_ctor_get(v_snd_1218_, 1);
lean_inc(v_snd_1219_);
v_fst_1220_ = lean_ctor_get(v_val_1217_, 0);
lean_inc(v_fst_1220_);
lean_dec(v_val_1217_);
v_fst_1221_ = lean_ctor_get(v_snd_1219_, 0);
lean_inc(v_fst_1221_);
v_snd_1222_ = lean_ctor_get(v_snd_1219_, 1);
lean_inc(v_snd_1222_);
lean_dec(v_snd_1219_);
lean_inc_ref(v_revAppArgs_1196_);
lean_inc_ref(v_revLams_1195_);
lean_inc_ref_n(v_00_u03c3s_1194_, 2);
v___x_1223_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(v_00_u03c3s_1194_, v_revLams_1195_, v_revAppArgs_1196_, v_fst_1221_);
v___x_1224_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(v_00_u03c3s_1194_, v_revLams_1195_, v_revAppArgs_1196_, v_snd_1222_);
v___x_1225_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_fst_1220_, v_00_u03c3s_1194_, v___x_1223_, v___x_1224_);
return v___x_1225_;
}
else
{
lean_dec(v___x_1216_);
if (lean_obj_tag(v_e_1197_) == 6)
{
lean_object* v_binderName_1226_; lean_object* v_binderType_1227_; lean_object* v_body_1228_; uint8_t v_binderInfo_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; 
v_binderName_1226_ = lean_ctor_get(v_e_1197_, 0);
lean_inc(v_binderName_1226_);
v_binderType_1227_ = lean_ctor_get(v_e_1197_, 1);
lean_inc_ref(v_binderType_1227_);
v_body_1228_ = lean_ctor_get(v_e_1197_, 2);
lean_inc_ref(v_body_1228_);
v_binderInfo_1229_ = lean_ctor_get_uint8(v_e_1197_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_1197_, 3);
v___x_1230_ = lean_array_get_size(v_revAppArgs_1196_);
v___x_1231_ = lean_unsigned_to_nat(1u);
v___x_1232_ = lean_nat_sub(v___x_1230_, v___x_1231_);
v___x_1233_ = lean_nat_dec_lt(v___x_1232_, v___x_1230_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
lean_dec(v___x_1232_);
v___x_1234_ = lean_box(v_binderInfo_1229_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v_binderType_1227_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v_binderName_1226_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___x_1237_ = lean_array_push(v_revLams_1195_, v___x_1236_);
v_revLams_1195_ = v___x_1237_;
v_e_1197_ = v_body_1228_;
goto _start;
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec_ref(v_binderType_1227_);
lean_dec(v_binderName_1226_);
v___x_1239_ = lean_array_fget(v_revAppArgs_1196_, v___x_1232_);
lean_dec(v___x_1232_);
v___x_1240_ = lean_array_pop(v_revAppArgs_1196_);
v___x_1241_ = lean_expr_instantiate1(v_body_1228_, v___x_1239_);
lean_dec(v___x_1239_);
lean_dec_ref(v_body_1228_);
v_revAppArgs_1196_ = v___x_1240_;
v_e_1197_ = v___x_1241_;
goto _start;
}
}
else
{
if (lean_obj_tag(v_e_1197_) == 5)
{
lean_object* v_fn_1243_; lean_object* v_arg_1244_; lean_object* v___x_1245_; 
v_fn_1243_ = lean_ctor_get(v_e_1197_, 0);
lean_inc_ref(v_fn_1243_);
v_arg_1244_ = lean_ctor_get(v_e_1197_, 1);
lean_inc_ref(v_arg_1244_);
lean_dec_ref_known(v_e_1197_, 2);
v___x_1245_ = lean_array_push(v_revAppArgs_1196_, v_arg_1244_);
v_revAppArgs_1196_ = v___x_1245_;
v_e_1197_ = v_fn_1243_;
goto _start;
}
else
{
lean_object* v___x_1247_; 
lean_dec_ref(v_00_u03c3s_1194_);
v___x_1247_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_wrap(v_revLams_1195_, v_revAppArgs_1196_, v_e_1197_);
lean_dec_ref(v_revAppArgs_1196_);
lean_dec_ref(v_revLams_1195_);
return v___x_1247_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(lean_object* v_00_u03c3s_1250_, lean_object* v_hyps_1251_){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps___closed__0));
v___x_1253_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps_go(v_00_u03c3s_1250_, v___x_1252_, v___x_1252_, v_hyps_1251_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames(lean_object* v_00_u03c3s_x27_1254_, lean_object* v_e_1255_, lean_object* v_args_1256_){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = l_Lean_mkAppN(v_e_1255_, v_args_1256_);
v___x_1258_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v_00_u03c3s_x27_1254_, v___x_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames___boxed(lean_object* v_00_u03c3s_x27_1259_, lean_object* v_e_1260_, lean_object* v_args_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_Elab_Tactic_Do_ProofMode_betaPreservingHypNames(v_00_u03c3s_x27_1259_, v_e_1260_, v_args_1261_);
lean_dec_ref(v_args_1261_);
return v_res_1262_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__0));
v___x_1265_ = l_Lean_stringToMessageData(v___x_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(lean_object* v_upperBound_1266_, lean_object* v_a_1267_, lean_object* v_b_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_a_1275_; uint8_t v___x_1279_; 
v___x_1279_ = lean_nat_dec_lt(v_a_1267_, v_upperBound_1266_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1280_; 
lean_dec(v_a_1267_);
v___x_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1280_, 0, v_b_1268_);
return v___x_1280_;
}
else
{
lean_object* v___x_1281_; 
lean_inc_ref(v_b_1268_);
v___x_1281_ = l_Lean_Meta_whnfR(v_b_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref_known(v___x_1281_, 1);
v___x_1283_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons___closed__1));
v___x_1284_ = lean_unsigned_to_nat(3u);
v___x_1285_ = l_Lean_Expr_isAppOfArity(v_a_1282_, v___x_1283_, v___x_1284_);
if (v___x_1285_ == 0)
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
lean_dec(v_a_1282_);
v___x_1286_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___closed__1);
lean_inc_ref(v_b_1268_);
v___x_1287_ = l_Lean_MessageData_ofExpr(v_b_1268_);
v___x_1288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1286_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v___x_1288_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_dec_ref_known(v___x_1289_, 1);
v_a_1275_ = v_b_1268_;
goto v___jp_1274_;
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
lean_dec_ref(v_b_1268_);
lean_dec(v_a_1267_);
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
else
{
lean_object* v___x_1298_; 
lean_dec_ref(v_b_1268_);
v___x_1298_ = l_Lean_Expr_appArg_x21(v_a_1282_);
lean_dec(v_a_1282_);
v_a_1275_ = v___x_1298_;
goto v___jp_1274_;
}
}
else
{
lean_dec_ref(v_b_1268_);
lean_dec(v_a_1267_);
return v___x_1281_;
}
}
v___jp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = lean_unsigned_to_nat(1u);
v___x_1277_ = lean_nat_add(v_a_1267_, v___x_1276_);
lean_dec(v_a_1267_);
v_a_1267_ = v___x_1277_;
v_b_1268_ = v_a_1275_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg___boxed(lean_object* v_upperBound_1299_, lean_object* v_a_1300_, lean_object* v_b_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(v_upperBound_1299_, v_a_1300_, v_b_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v_upperBound_1299_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList(lean_object* v_00_u03c3s_1308_, lean_object* v_n_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_unsigned_to_nat(0u);
v___x_1316_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(v_n_1309_, v___x_1315_, v_00_u03c3s_1308_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_dropStateList___boxed(lean_object* v_00_u03c3s_1317_, lean_object* v_n_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_Elab_Tactic_Do_ProofMode_dropStateList(v_00_u03c3s_1317_, v_n_1318_, v_a_1319_, v_a_1320_, v_a_1321_, v_a_1322_);
lean_dec(v_a_1322_);
lean_dec_ref(v_a_1321_);
lean_dec(v_a_1320_);
lean_dec_ref(v_a_1319_);
lean_dec(v_n_1318_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0(lean_object* v_upperBound_1325_, lean_object* v_inst_1326_, lean_object* v_R_1327_, lean_object* v_a_1328_, lean_object* v_b_1329_, lean_object* v_c_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___redArg(v_upperBound_1325_, v_a_1328_, v_b_1329_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0___boxed(lean_object* v_upperBound_1337_, lean_object* v_inst_1338_, lean_object* v_R_1339_, lean_object* v_a_1340_, lean_object* v_b_1341_, lean_object* v_c_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Do_ProofMode_dropStateList_spec__0(v_upperBound_1337_, v_inst_1338_, v_R_1339_, v_a_1340_, v_b_1341_, v_c_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v_upperBound_1337_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(lean_object* v_H_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v_fst_1352_; lean_object* v_snd_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
v_fst_1352_ = lean_ctor_get(v_a_1350_, 0);
v_snd_1353_ = lean_ctor_get(v_a_1350_, 1);
v___x_1354_ = lean_array_get_size(v_snd_1353_);
v___x_1355_ = lean_unsigned_to_nat(0u);
v___x_1356_ = lean_nat_dec_eq(v___x_1354_, v___x_1355_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; 
lean_inc_ref(v_H_1349_);
v___x_1357_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_H_1349_);
if (lean_obj_tag(v___x_1357_) == 1)
{
lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1365_; 
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1365_ == 0)
{
lean_object* v_unused_1366_; 
v_unused_1366_ = lean_ctor_get(v___x_1357_, 0);
lean_dec(v_unused_1366_);
v___x_1359_ = v___x_1357_;
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
else
{
lean_dec(v___x_1357_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1365_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v_H_1349_);
lean_ctor_set(v___x_1361_, 1, v_a_1350_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set_tag(v___x_1359_, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1361_);
v___x_1363_ = v___x_1359_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
else
{
lean_object* v___x_1367_; 
lean_dec(v___x_1357_);
lean_inc_ref(v_H_1349_);
v___x_1367_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_H_1349_);
if (lean_obj_tag(v___x_1367_) == 1)
{
lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1416_; 
lean_inc(v_snd_1353_);
lean_inc(v_fst_1352_);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_a_1350_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; lean_object* v_unused_1418_; 
v_unused_1417_ = lean_ctor_get(v_a_1350_, 1);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_a_1350_, 0);
lean_dec(v_unused_1418_);
v___x_1369_ = v_a_1350_;
v_isShared_1370_ = v_isSharedCheck_1416_;
goto v_resetjp_1368_;
}
else
{
lean_dec(v_a_1350_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1416_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v_val_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1415_; 
v_val_1371_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1373_ = v___x_1367_;
v_isShared_1374_ = v_isSharedCheck_1415_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_val_1371_);
lean_dec(v___x_1367_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1415_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v_name_1375_; lean_object* v_uniq_1376_; lean_object* v_p_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1414_; 
v_name_1375_ = lean_ctor_get(v_val_1371_, 0);
v_uniq_1376_ = lean_ctor_get(v_val_1371_, 1);
v_p_1377_ = lean_ctor_get(v_val_1371_, 2);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_val_1371_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1379_ = v_val_1371_;
v_isShared_1380_ = v_isSharedCheck_1414_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_p_1377_);
lean_inc(v_uniq_1376_);
lean_inc(v_name_1375_);
lean_dec(v_val_1371_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1414_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v_idents_1382_; uint8_t v___x_1412_; 
v___x_1412_ = l_Lean_Name_hasMacroScopes(v_name_1375_);
if (v___x_1412_ == 0)
{
uint8_t v___x_1413_; 
v___x_1413_ = l_Lean_NameSet_contains(v_fst_1352_, v_name_1375_);
if (v___x_1413_ == 0)
{
lean_del_object(v___x_1379_);
lean_dec_ref(v_p_1377_);
lean_dec(v_uniq_1376_);
v_idents_1382_ = v_snd_1353_;
goto v___jp_1381_;
}
else
{
goto v___jp_1391_;
}
}
else
{
goto v___jp_1391_;
}
v___jp_1381_:
{
lean_object* v___x_1383_; lean_object* v___x_1385_; 
v___x_1383_ = l_Lean_NameSet_insert(v_fst_1352_, v_name_1375_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 1, v_idents_1382_);
lean_ctor_set(v___x_1369_, 0, v___x_1383_);
v___x_1385_ = v___x_1369_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1383_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v_idents_1382_);
v___x_1385_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_H_1349_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set_tag(v___x_1373_, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1386_);
v___x_1388_ = v___x_1373_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
v___jp_1391_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1392_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__2));
v___x_1393_ = lean_box(0);
v___x_1394_ = lean_unsigned_to_nat(1u);
v___x_1395_ = lean_nat_sub(v___x_1354_, v___x_1394_);
v___x_1396_ = lean_array_get_borrowed(v___x_1393_, v_snd_1353_, v___x_1395_);
lean_dec(v___x_1395_);
lean_inc(v___x_1396_);
v___x_1397_ = l_Lean_Syntax_isOfKind(v___x_1396_, v___x_1392_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1398_; 
lean_del_object(v___x_1379_);
lean_dec_ref(v_p_1377_);
lean_dec(v_uniq_1376_);
v___x_1398_ = lean_array_pop(v_snd_1353_);
v_idents_1382_ = v___x_1398_;
goto v___jp_1381_;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1399_ = l_Lean_Syntax_getArg(v___x_1396_, v___x_1355_);
v___x_1400_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName___closed__6));
lean_inc(v___x_1399_);
v___x_1401_ = l_Lean_Syntax_isOfKind(v___x_1399_, v___x_1400_);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; 
lean_dec(v___x_1399_);
lean_del_object(v___x_1379_);
lean_dec_ref(v_p_1377_);
lean_dec(v_uniq_1376_);
v___x_1402_ = lean_array_pop(v_snd_1353_);
v_idents_1382_ = v___x_1402_;
goto v___jp_1381_;
}
else
{
lean_object* v___x_1403_; lean_object* v___x_1405_; 
lean_dec(v_name_1375_);
lean_del_object(v___x_1373_);
lean_del_object(v___x_1369_);
lean_dec_ref(v_H_1349_);
v___x_1403_ = l_Lean_TSyntax_getId(v___x_1399_);
lean_dec(v___x_1399_);
if (v_isShared_1380_ == 0)
{
lean_ctor_set(v___x_1379_, 0, v___x_1403_);
v___x_1405_ = v___x_1379_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1403_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_uniq_1376_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_p_1377_);
v___x_1405_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1406_ = lean_array_pop(v_snd_1353_);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v_fst_1352_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_1405_);
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
lean_ctor_set(v___x_1409_, 1, v___x_1407_);
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
return v___x_1410_;
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
lean_object* v___x_1419_; 
lean_dec(v___x_1367_);
v___x_1419_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_H_1349_);
if (lean_obj_tag(v___x_1419_) == 1)
{
lean_object* v_val_1420_; lean_object* v_snd_1421_; lean_object* v_snd_1422_; lean_object* v_fst_1423_; lean_object* v_fst_1424_; lean_object* v_fst_1425_; lean_object* v_snd_1426_; lean_object* v___x_1427_; 
lean_dec_ref(v_H_1349_);
v_val_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_val_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v_snd_1421_ = lean_ctor_get(v_val_1420_, 1);
lean_inc(v_snd_1421_);
v_snd_1422_ = lean_ctor_get(v_snd_1421_, 1);
lean_inc(v_snd_1422_);
v_fst_1423_ = lean_ctor_get(v_val_1420_, 0);
lean_inc(v_fst_1423_);
lean_dec(v_val_1420_);
v_fst_1424_ = lean_ctor_get(v_snd_1421_, 0);
lean_inc(v_fst_1424_);
lean_dec(v_snd_1421_);
v_fst_1425_ = lean_ctor_get(v_snd_1422_, 0);
lean_inc(v_fst_1425_);
v_snd_1426_ = lean_ctor_get(v_snd_1422_, 1);
lean_inc(v_snd_1426_);
lean_dec(v_snd_1422_);
v___x_1427_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_snd_1426_, v_a_1350_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v_a_1428_; lean_object* v_fst_1429_; lean_object* v_snd_1430_; lean_object* v___x_1431_; 
v_a_1428_ = lean_ctor_get(v___x_1427_, 0);
lean_inc(v_a_1428_);
lean_dec_ref_known(v___x_1427_, 1);
v_fst_1429_ = lean_ctor_get(v_a_1428_, 0);
lean_inc(v_fst_1429_);
v_snd_1430_ = lean_ctor_get(v_a_1428_, 1);
lean_inc(v_snd_1430_);
lean_dec(v_a_1428_);
v___x_1431_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_fst_1425_, v_snd_1430_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1449_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1434_ = v___x_1431_;
v_isShared_1435_ = v_isSharedCheck_1449_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1431_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1449_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v_fst_1436_; lean_object* v_snd_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1448_; 
v_fst_1436_ = lean_ctor_get(v_a_1432_, 0);
v_snd_1437_ = lean_ctor_get(v_a_1432_, 1);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_a_1432_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1439_ = v_a_1432_;
v_isShared_1440_ = v_isSharedCheck_1448_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_snd_1437_);
lean_inc(v_fst_1436_);
lean_dec(v_a_1432_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1448_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1441_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_fst_1423_, v_fst_1424_, v_fst_1436_, v_fst_1429_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 0, v___x_1441_);
v___x_1443_ = v___x_1439_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1441_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_snd_1437_);
v___x_1443_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1445_; 
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1443_);
v___x_1445_ = v___x_1434_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
}
else
{
lean_dec(v_fst_1429_);
lean_dec(v_fst_1424_);
lean_dec(v_fst_1423_);
return v___x_1431_;
}
}
else
{
lean_dec(v_fst_1425_);
lean_dec(v_fst_1424_);
lean_dec(v_fst_1423_);
return v___x_1427_;
}
}
else
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
lean_dec(v___x_1419_);
v___x_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1450_, 0, v_H_1349_);
lean_ctor_set(v___x_1450_, 1, v_a_1350_);
v___x_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
return v___x_1451_;
}
}
}
}
else
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_H_1349_);
lean_ctor_set(v___x_1452_, 1, v_a_1350_);
v___x_1453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1453_, 0, v___x_1452_);
return v___x_1453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg___boxed(lean_object* v_H_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_H_1454_, v_a_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go(lean_object* v_H_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_H_1458_, v_a_1459_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___boxed(lean_object* v_H_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go(v_H_1466_, v_a_1467_, v_a_1468_, v_a_1469_, v_a_1470_, v_a_1471_);
lean_dec(v_a_1471_);
lean_dec_ref(v_a_1470_);
lean_dec(v_a_1469_);
lean_dec_ref(v_a_1468_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_spec__0(lean_object* v_a_1474_, lean_object* v_a_1475_){
_start:
{
if (lean_obj_tag(v_a_1474_) == 0)
{
lean_object* v___x_1476_; 
v___x_1476_ = l_List_reverse___redArg(v_a_1475_);
return v___x_1476_;
}
else
{
lean_object* v_head_1477_; lean_object* v_tail_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1487_; 
v_head_1477_ = lean_ctor_get(v_a_1474_, 0);
v_tail_1478_ = lean_ctor_get(v_a_1474_, 1);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_a_1474_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1480_ = v_a_1474_;
v_isShared_1481_ = v_isSharedCheck_1487_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_tail_1478_);
lean_inc(v_head_1477_);
lean_dec(v_a_1474_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1487_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1482_; lean_object* v___x_1484_; 
v___x_1482_ = l_Lean_MessageData_ofSyntax(v_head_1477_);
if (v_isShared_1481_ == 0)
{
lean_ctor_set(v___x_1480_, 1, v_a_1475_);
lean_ctor_set(v___x_1480_, 0, v___x_1482_);
v___x_1484_ = v___x_1480_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_a_1475_);
v___x_1484_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
v_a_1474_ = v_tail_1478_;
v_a_1475_ = v___x_1484_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1(void){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__0));
v___x_1490_ = l_Lean_stringToMessageData(v___x_1489_);
return v___x_1490_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3(void){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__2));
v___x_1493_ = l_Lean_stringToMessageData(v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps(lean_object* v_goal_1494_, lean_object* v_idents_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v_u_1501_; lean_object* v_00_u03c3s_1502_; lean_object* v_hyps_1503_; lean_object* v_target_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v_u_1501_ = lean_ctor_get(v_goal_1494_, 0);
v_00_u03c3s_1502_ = lean_ctor_get(v_goal_1494_, 1);
v_hyps_1503_ = lean_ctor_get(v_goal_1494_, 2);
v_target_1504_ = lean_ctor_get(v_goal_1494_, 3);
v___x_1505_ = l_Lean_NameSet_empty;
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
lean_ctor_set(v___x_1506_, 1, v_idents_1495_);
lean_inc_ref(v_hyps_1503_);
v___x_1507_ = l___private_Lean_Elab_Tactic_Do_ProofMode_MGoal_0__Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_go___redArg(v_hyps_1503_, v___x_1506_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1556_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1510_ = v___x_1507_;
v_isShared_1511_ = v_isSharedCheck_1556_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1507_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1556_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v_fst_1512_; lean_object* v_snd_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1555_; 
v_fst_1512_ = lean_ctor_get(v_a_1508_, 0);
v_snd_1513_ = lean_ctor_get(v_a_1508_, 1);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_a_1508_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1515_ = v_a_1508_;
v_isShared_1516_ = v_isSharedCheck_1555_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_snd_1513_);
lean_inc(v_fst_1512_);
lean_dec(v_a_1508_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1555_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v_snd_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1553_; 
v_snd_1522_ = lean_ctor_get(v_snd_1513_, 1);
v_isSharedCheck_1553_ = !lean_is_exclusive(v_snd_1513_);
if (v_isSharedCheck_1553_ == 0)
{
lean_object* v_unused_1554_; 
v_unused_1554_ = lean_ctor_get(v_snd_1513_, 0);
lean_dec(v_unused_1554_);
v___x_1524_ = v_snd_1513_;
v_isShared_1525_ = v_isSharedCheck_1553_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_snd_1522_);
lean_dec(v_snd_1513_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1553_;
goto v_resetjp_1523_;
}
v___jp_1517_:
{
lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1518_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1518_, 0, v_u_1501_);
lean_ctor_set(v___x_1518_, 1, v_00_u03c3s_1502_);
lean_ctor_set(v___x_1518_, 2, v_fst_1512_);
lean_ctor_set(v___x_1518_, 3, v_target_1504_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v___x_1518_);
v___x_1520_ = v___x_1510_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1526_ = lean_array_get_size(v_snd_1522_);
v___x_1527_ = lean_unsigned_to_nat(0u);
v___x_1528_ = lean_nat_dec_eq(v___x_1526_, v___x_1527_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1535_; 
lean_dec(v_fst_1512_);
lean_del_object(v___x_1510_);
v___x_1529_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__1);
v___x_1530_ = lean_array_to_list(v_snd_1522_);
v___x_1531_ = lean_box(0);
v___x_1532_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps_spec__0(v___x_1530_, v___x_1531_);
v___x_1533_ = l_Lean_MessageData_ofList(v___x_1532_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set_tag(v___x_1524_, 7);
lean_ctor_set(v___x_1524_, 1, v___x_1533_);
lean_ctor_set(v___x_1524_, 0, v___x_1529_);
v___x_1535_ = v___x_1524_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1529_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v___x_1533_);
v___x_1535_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___closed__3);
if (v_isShared_1516_ == 0)
{
lean_ctor_set_tag(v___x_1515_, 7);
lean_ctor_set(v___x_1515_, 1, v___x_1536_);
lean_ctor_set(v___x_1515_, 0, v___x_1535_);
v___x_1538_ = v___x_1515_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1535_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
v___x_1539_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_1494_);
v___x_1540_ = l_Lean_MessageData_ofExpr(v___x_1539_);
v___x_1541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1538_);
lean_ctor_set(v___x_1541_, 1, v___x_1540_);
v___x_1542_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_checkHasType_spec__1___redArg(v___x_1541_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_);
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1542_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1542_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
}
else
{
lean_inc_ref(v_target_1504_);
lean_inc_ref(v_00_u03c3s_1502_);
lean_inc(v_u_1501_);
lean_del_object(v___x_1524_);
lean_dec(v_snd_1522_);
lean_del_object(v___x_1515_);
lean_dec_ref(v_goal_1494_);
goto v___jp_1517_;
}
}
}
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec_ref(v_goal_1494_);
v_a_1557_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1507_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1507_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps___boxed(lean_object* v_goal_1565_, lean_object* v_idents_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_renameInaccessibleHyps(v_goal_1565_, v_idents_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0(lean_object* v_stx_1573_, lean_object* v_lctx_1574_, lean_object* v_expectedType_x3f_1575_, lean_object* v_expr_1576_, uint8_t v_isBinder_1577_, lean_object* v_x_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1584_ = lean_box(0);
v___x_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v_stx_1573_);
v___x_1586_ = 0;
v___x_1587_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1587_, 0, v___x_1585_);
lean_ctor_set(v___x_1587_, 1, v_lctx_1574_);
lean_ctor_set(v___x_1587_, 2, v_expectedType_x3f_1575_);
lean_ctor_set(v___x_1587_, 3, v_expr_1576_);
lean_ctor_set_uint8(v___x_1587_, sizeof(void*)*4, v_isBinder_1577_);
lean_ctor_set_uint8(v___x_1587_, sizeof(void*)*4 + 1, v___x_1586_);
v___x_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
v___x_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
v___x_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___boxed(lean_object* v_stx_1591_, lean_object* v_lctx_1592_, lean_object* v_expectedType_x3f_1593_, lean_object* v_expr_1594_, lean_object* v_isBinder_1595_, lean_object* v_x_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
uint8_t v_isBinder_boxed_1602_; lean_object* v_res_1603_; 
v_isBinder_boxed_1602_ = lean_unbox(v_isBinder_1595_);
v_res_1603_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0(v_stx_1591_, v_lctx_1592_, v_expectedType_x3f_1593_, v_expr_1594_, v_isBinder_boxed_1602_, v_x_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1(lean_object* v___x_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1604_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1___boxed(lean_object* v___x_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__1(v___x_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2(lean_object* v___x_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1618_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2___boxed(lean_object* v___x_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2(v___x_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
return v_res_1631_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1632_ = lean_unsigned_to_nat(32u);
v___x_1633_ = lean_mk_empty_array_with_capacity(v___x_1632_);
v___x_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
return v___x_1634_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1635_ = ((size_t)5ULL);
v___x_1636_ = lean_unsigned_to_nat(0u);
v___x_1637_ = lean_unsigned_to_nat(32u);
v___x_1638_ = lean_mk_empty_array_with_capacity(v___x_1637_);
v___x_1639_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__0);
v___x_1640_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1640_, 0, v___x_1639_);
lean_ctor_set(v___x_1640_, 1, v___x_1638_);
lean_ctor_set(v___x_1640_, 2, v___x_1636_);
lean_ctor_set(v___x_1640_, 3, v___x_1636_);
lean_ctor_set_usize(v___x_1640_, 4, v___x_1635_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(lean_object* v___y_1641_){
_start:
{
lean_object* v___x_1643_; lean_object* v_infoState_1644_; lean_object* v_trees_1645_; lean_object* v___x_1646_; lean_object* v_infoState_1647_; lean_object* v_env_1648_; lean_object* v_nextMacroScope_1649_; lean_object* v_ngen_1650_; lean_object* v_auxDeclNGen_1651_; lean_object* v_traceState_1652_; lean_object* v_cache_1653_; lean_object* v_recordedDeps_1654_; lean_object* v_messages_1655_; lean_object* v_snapshotTasks_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1677_; 
v___x_1643_ = lean_st_ref_get(v___y_1641_);
v_infoState_1644_ = lean_ctor_get(v___x_1643_, 8);
lean_inc_ref(v_infoState_1644_);
lean_dec(v___x_1643_);
v_trees_1645_ = lean_ctor_get(v_infoState_1644_, 2);
lean_inc_ref(v_trees_1645_);
lean_dec_ref(v_infoState_1644_);
v___x_1646_ = lean_st_ref_take(v___y_1641_);
v_infoState_1647_ = lean_ctor_get(v___x_1646_, 8);
v_env_1648_ = lean_ctor_get(v___x_1646_, 0);
v_nextMacroScope_1649_ = lean_ctor_get(v___x_1646_, 1);
v_ngen_1650_ = lean_ctor_get(v___x_1646_, 2);
v_auxDeclNGen_1651_ = lean_ctor_get(v___x_1646_, 3);
v_traceState_1652_ = lean_ctor_get(v___x_1646_, 4);
v_cache_1653_ = lean_ctor_get(v___x_1646_, 5);
v_recordedDeps_1654_ = lean_ctor_get(v___x_1646_, 6);
v_messages_1655_ = lean_ctor_get(v___x_1646_, 7);
v_snapshotTasks_1656_ = lean_ctor_get(v___x_1646_, 9);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1658_ = v___x_1646_;
v_isShared_1659_ = v_isSharedCheck_1677_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_snapshotTasks_1656_);
lean_inc(v_infoState_1647_);
lean_inc(v_messages_1655_);
lean_inc(v_recordedDeps_1654_);
lean_inc(v_cache_1653_);
lean_inc(v_traceState_1652_);
lean_inc(v_auxDeclNGen_1651_);
lean_inc(v_ngen_1650_);
lean_inc(v_nextMacroScope_1649_);
lean_inc(v_env_1648_);
lean_dec(v___x_1646_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1677_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
uint8_t v_enabled_1660_; lean_object* v_assignment_1661_; lean_object* v_lazyAssignment_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1675_; 
v_enabled_1660_ = lean_ctor_get_uint8(v_infoState_1647_, sizeof(void*)*3);
v_assignment_1661_ = lean_ctor_get(v_infoState_1647_, 0);
v_lazyAssignment_1662_ = lean_ctor_get(v_infoState_1647_, 1);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_infoState_1647_);
if (v_isSharedCheck_1675_ == 0)
{
lean_object* v_unused_1676_; 
v_unused_1676_ = lean_ctor_get(v_infoState_1647_, 2);
lean_dec(v_unused_1676_);
v___x_1664_ = v_infoState_1647_;
v_isShared_1665_ = v_isSharedCheck_1675_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_lazyAssignment_1662_);
lean_inc(v_assignment_1661_);
lean_dec(v_infoState_1647_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1675_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1668_; 
v___x_1666_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___closed__1);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 2, v___x_1666_);
v___x_1668_ = v___x_1664_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_assignment_1661_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v_lazyAssignment_1662_);
lean_ctor_set(v_reuseFailAlloc_1674_, 2, v___x_1666_);
lean_ctor_set_uint8(v_reuseFailAlloc_1674_, sizeof(void*)*3, v_enabled_1660_);
v___x_1668_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
lean_object* v___x_1670_; 
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 8, v___x_1668_);
v___x_1670_ = v___x_1658_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_env_1648_);
lean_ctor_set(v_reuseFailAlloc_1673_, 1, v_nextMacroScope_1649_);
lean_ctor_set(v_reuseFailAlloc_1673_, 2, v_ngen_1650_);
lean_ctor_set(v_reuseFailAlloc_1673_, 3, v_auxDeclNGen_1651_);
lean_ctor_set(v_reuseFailAlloc_1673_, 4, v_traceState_1652_);
lean_ctor_set(v_reuseFailAlloc_1673_, 5, v_cache_1653_);
lean_ctor_set(v_reuseFailAlloc_1673_, 6, v_recordedDeps_1654_);
lean_ctor_set(v_reuseFailAlloc_1673_, 7, v_messages_1655_);
lean_ctor_set(v_reuseFailAlloc_1673_, 8, v___x_1668_);
lean_ctor_set(v_reuseFailAlloc_1673_, 9, v_snapshotTasks_1656_);
v___x_1670_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1671_ = lean_st_ref_put(v___y_1641_, v___x_1670_);
v___x_1672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1672_, 0, v_trees_1645_);
return v___x_1672_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg___boxed(lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(v___y_1678_);
lean_dec(v___y_1678_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(lean_object* v_mkInfoOnError_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___f_1686_, lean_object* v_mkInfo_1687_, lean_object* v_a_x3f_1688_){
_start:
{
if (lean_obj_tag(v_a_x3f_1688_) == 0)
{
lean_object* v___x_1690_; 
lean_dec_ref(v_mkInfo_1687_);
lean_inc(v___y_1685_);
lean_inc_ref(v___y_1684_);
lean_inc(v___y_1683_);
lean_inc_ref(v___y_1682_);
v___x_1690_ = lean_apply_5(v_mkInfoOnError_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, lean_box(0));
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1692_, 0, v_a_1691_);
lean_inc(v___y_1685_);
lean_inc_ref(v___y_1684_);
lean_inc(v___y_1683_);
lean_inc_ref(v___y_1682_);
v___x_1693_ = lean_apply_6(v___f_1686_, v___x_1692_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, lean_box(0));
return v___x_1693_;
}
else
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
lean_dec_ref(v___f_1686_);
v_a_1694_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1690_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1690_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
else
{
lean_object* v_val_1702_; lean_object* v___x_1703_; 
lean_dec_ref(v_mkInfoOnError_1681_);
v_val_1702_ = lean_ctor_get(v_a_x3f_1688_, 0);
lean_inc(v_val_1702_);
lean_dec_ref_known(v_a_x3f_1688_, 1);
lean_inc(v___y_1685_);
lean_inc_ref(v___y_1684_);
lean_inc(v___y_1683_);
lean_inc_ref(v___y_1682_);
v___x_1703_ = lean_apply_6(v_mkInfo_1687_, v_val_1702_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, lean_box(0));
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; lean_object* v___x_1705_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
lean_inc(v___y_1685_);
lean_inc_ref(v___y_1684_);
lean_inc(v___y_1683_);
lean_inc_ref(v___y_1682_);
v___x_1705_ = lean_apply_6(v___f_1686_, v_a_1704_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, lean_box(0));
return v___x_1705_;
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec_ref(v___f_1686_);
v_a_1706_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1703_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1703_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1___boxed(lean_object* v_mkInfoOnError_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___f_1719_, lean_object* v_mkInfo_1720_, lean_object* v_a_x3f_1721_, lean_object* v___y_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(v_mkInfoOnError_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___f_1719_, v_mkInfo_1720_, v_a_x3f_1721_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0(lean_object* v_a_1724_, lean_object* v_info_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v___x_1731_; lean_object* v_infoState_1732_; lean_object* v_env_1733_; lean_object* v_nextMacroScope_1734_; lean_object* v_ngen_1735_; lean_object* v_auxDeclNGen_1736_; lean_object* v_traceState_1737_; lean_object* v_cache_1738_; lean_object* v_recordedDeps_1739_; lean_object* v_messages_1740_; lean_object* v_snapshotTasks_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1779_; 
v___x_1731_ = lean_st_ref_take(v___y_1729_);
v_infoState_1732_ = lean_ctor_get(v___x_1731_, 8);
v_env_1733_ = lean_ctor_get(v___x_1731_, 0);
v_nextMacroScope_1734_ = lean_ctor_get(v___x_1731_, 1);
v_ngen_1735_ = lean_ctor_get(v___x_1731_, 2);
v_auxDeclNGen_1736_ = lean_ctor_get(v___x_1731_, 3);
v_traceState_1737_ = lean_ctor_get(v___x_1731_, 4);
v_cache_1738_ = lean_ctor_get(v___x_1731_, 5);
v_recordedDeps_1739_ = lean_ctor_get(v___x_1731_, 6);
v_messages_1740_ = lean_ctor_get(v___x_1731_, 7);
v_snapshotTasks_1741_ = lean_ctor_get(v___x_1731_, 9);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1743_ = v___x_1731_;
v_isShared_1744_ = v_isSharedCheck_1779_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_snapshotTasks_1741_);
lean_inc(v_infoState_1732_);
lean_inc(v_messages_1740_);
lean_inc(v_recordedDeps_1739_);
lean_inc(v_cache_1738_);
lean_inc(v_traceState_1737_);
lean_inc(v_auxDeclNGen_1736_);
lean_inc(v_ngen_1735_);
lean_inc(v_nextMacroScope_1734_);
lean_inc(v_env_1733_);
lean_dec(v___x_1731_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1779_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
uint8_t v_enabled_1745_; lean_object* v_assignment_1746_; lean_object* v_lazyAssignment_1747_; lean_object* v_trees_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1778_; 
v_enabled_1745_ = lean_ctor_get_uint8(v_infoState_1732_, sizeof(void*)*3);
v_assignment_1746_ = lean_ctor_get(v_infoState_1732_, 0);
v_lazyAssignment_1747_ = lean_ctor_get(v_infoState_1732_, 1);
v_trees_1748_ = lean_ctor_get(v_infoState_1732_, 2);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_infoState_1732_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1750_ = v_infoState_1732_;
v_isShared_1751_ = v_isSharedCheck_1778_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_trees_1748_);
lean_inc(v_lazyAssignment_1747_);
lean_inc(v_assignment_1746_);
lean_dec(v_infoState_1732_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1778_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; lean_object* v___y_1754_; 
v___x_1752_ = lean_box(0);
if (lean_obj_tag(v_info_1725_) == 0)
{
lean_object* v_val_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; 
v_val_1760_ = lean_ctor_get(v_info_1725_, 0);
lean_inc(v_val_1760_);
lean_dec_ref_known(v_info_1725_, 1);
v___x_1761_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1761_, 0, v_val_1760_);
lean_ctor_set(v___x_1761_, 1, v_trees_1748_);
v___x_1762_ = l_Lean_PersistentArray_push___redArg(v_a_1724_, v___x_1761_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 2, v___x_1762_);
v___x_1764_ = v___x_1750_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_assignment_1746_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_lazyAssignment_1747_);
lean_ctor_set(v_reuseFailAlloc_1765_, 2, v___x_1762_);
lean_ctor_set_uint8(v_reuseFailAlloc_1765_, sizeof(void*)*3, v_enabled_1745_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
v___y_1754_ = v___x_1764_;
goto v___jp_1753_;
}
}
else
{
lean_object* v_val_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1777_; 
lean_dec_ref(v_trees_1748_);
v_val_1766_ = lean_ctor_get(v_info_1725_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_info_1725_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1768_ = v_info_1725_;
v_isShared_1769_ = v_isSharedCheck_1777_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_val_1766_);
lean_dec(v_info_1725_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1777_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1771_; 
if (v_isShared_1769_ == 0)
{
lean_ctor_set_tag(v___x_1768_, 2);
v___x_1771_ = v___x_1768_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_val_1766_);
v___x_1771_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1772_ = l_Lean_PersistentArray_push___redArg(v_a_1724_, v___x_1771_);
if (v_isShared_1751_ == 0)
{
lean_ctor_set(v___x_1750_, 2, v___x_1772_);
v___x_1774_ = v___x_1750_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_assignment_1746_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v_lazyAssignment_1747_);
lean_ctor_set(v_reuseFailAlloc_1775_, 2, v___x_1772_);
lean_ctor_set_uint8(v_reuseFailAlloc_1775_, sizeof(void*)*3, v_enabled_1745_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
v___y_1754_ = v___x_1774_;
goto v___jp_1753_;
}
}
}
}
v___jp_1753_:
{
lean_object* v___x_1756_; 
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 8, v___y_1754_);
v___x_1756_ = v___x_1743_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_env_1733_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_nextMacroScope_1734_);
lean_ctor_set(v_reuseFailAlloc_1759_, 2, v_ngen_1735_);
lean_ctor_set(v_reuseFailAlloc_1759_, 3, v_auxDeclNGen_1736_);
lean_ctor_set(v_reuseFailAlloc_1759_, 4, v_traceState_1737_);
lean_ctor_set(v_reuseFailAlloc_1759_, 5, v_cache_1738_);
lean_ctor_set(v_reuseFailAlloc_1759_, 6, v_recordedDeps_1739_);
lean_ctor_set(v_reuseFailAlloc_1759_, 7, v_messages_1740_);
lean_ctor_set(v_reuseFailAlloc_1759_, 8, v___y_1754_);
lean_ctor_set(v_reuseFailAlloc_1759_, 9, v_snapshotTasks_1741_);
v___x_1756_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1757_ = lean_st_ref_put(v___y_1729_, v___x_1756_);
v___x_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1752_);
return v___x_1758_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0___boxed(lean_object* v_a_1780_, lean_object* v_info_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0(v_a_1780_, v_info_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(lean_object* v_x_1788_, lean_object* v_mkInfo_1789_, lean_object* v_mkInfoOnError_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v___x_1796_; lean_object* v_infoState_1797_; uint8_t v_enabled_1798_; 
v___x_1796_ = lean_st_ref_get(v___y_1794_);
v_infoState_1797_ = lean_ctor_get(v___x_1796_, 8);
lean_inc_ref(v_infoState_1797_);
lean_dec(v___x_1796_);
v_enabled_1798_ = lean_ctor_get_uint8(v_infoState_1797_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1797_);
if (v_enabled_1798_ == 0)
{
lean_object* v___x_1799_; 
lean_dec_ref(v_mkInfoOnError_1790_);
lean_dec_ref(v_mkInfo_1789_);
lean_inc(v___y_1794_);
lean_inc_ref(v___y_1793_);
lean_inc(v___y_1792_);
lean_inc_ref(v___y_1791_);
v___x_1799_ = lean_apply_5(v_x_1788_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, lean_box(0));
return v___x_1799_;
}
else
{
lean_object* v___x_1800_; lean_object* v_a_1801_; lean_object* v___f_1802_; lean_object* v_r_1803_; 
v___x_1800_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(v___y_1794_);
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref(v___x_1800_);
v___f_1802_ = lean_alloc_closure((void*)(l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1802_, 0, v_a_1801_);
lean_inc(v___y_1794_);
lean_inc_ref(v___y_1793_);
lean_inc(v___y_1792_);
lean_inc_ref(v___y_1791_);
v_r_1803_ = lean_apply_5(v_x_1788_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, lean_box(0));
if (lean_obj_tag(v_r_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1828_; 
v_a_1804_ = lean_ctor_get(v_r_1803_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v_r_1803_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1806_ = v_r_1803_;
v_isShared_1807_ = v_isSharedCheck_1828_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v_r_1803_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1828_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
lean_inc(v_a_1804_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set_tag(v___x_1806_, 1);
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; 
v___x_1810_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(v_mkInfoOnError_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___f_1802_, v_mkInfo_1789_, v___x_1809_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1817_; 
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1817_ == 0)
{
lean_object* v_unused_1818_; 
v_unused_1818_ = lean_ctor_get(v___x_1810_, 0);
lean_dec(v_unused_1818_);
v___x_1812_ = v___x_1810_;
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
else
{
lean_dec(v___x_1810_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 0, v_a_1804_);
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_a_1804_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
else
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1826_; 
lean_dec(v_a_1804_);
v_a_1819_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1821_ = v___x_1810_;
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1810_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1824_; 
if (v_isShared_1822_ == 0)
{
v___x_1824_ = v___x_1821_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1819_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_a_1829_ = lean_ctor_get(v_r_1803_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v_r_1803_, 1);
v___x_1830_ = lean_box(0);
v___x_1831_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___lam__1(v_mkInfoOnError_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___f_1802_, v_mkInfo_1789_, v___x_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1838_; 
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1838_ == 0)
{
lean_object* v_unused_1839_; 
v_unused_1839_ = lean_ctor_get(v___x_1831_, 0);
lean_dec(v_unused_1839_);
v___x_1833_ = v___x_1831_;
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
else
{
lean_dec(v___x_1831_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set_tag(v___x_1833_, 1);
lean_ctor_set(v___x_1833_, 0, v_a_1829_);
v___x_1836_ = v___x_1833_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1829_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
else
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
lean_dec(v_a_1829_);
v_a_1840_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1831_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1831_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
return v___x_1845_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg___boxed(lean_object* v_x_1848_, lean_object* v_mkInfo_1849_, lean_object* v_mkInfoOnError_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(v_x_1848_, v_mkInfo_1849_, v_mkInfoOnError_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v___y_1854_);
lean_dec_ref(v___y_1853_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(lean_object* v_stx_1859_, lean_object* v_lctx_1860_, lean_object* v_expr_1861_, lean_object* v_expectedType_x3f_1862_, uint8_t v_isBinder_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v___x_1869_; lean_object* v___f_1870_; lean_object* v___f_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___f_1876_; lean_object* v___x_1877_; 
v___x_1869_ = lean_box(v_isBinder_1863_);
lean_inc(v_expectedType_x3f_1862_);
lean_inc_ref(v_lctx_1860_);
lean_inc(v_stx_1859_);
v___f_1870_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1870_, 0, v_stx_1859_);
lean_closure_set(v___f_1870_, 1, v_lctx_1860_);
lean_closure_set(v___f_1870_, 2, v_expectedType_x3f_1862_);
lean_closure_set(v___f_1870_, 3, v_expr_1861_);
lean_closure_set(v___f_1870_, 4, v___x_1869_);
v___f_1871_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___closed__0));
v___x_1872_ = lean_box(0);
v___x_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
lean_ctor_set(v___x_1873_, 1, v_stx_1859_);
v___x_1874_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
lean_ctor_set(v___x_1874_, 1, v_lctx_1860_);
lean_ctor_set(v___x_1874_, 2, v_expectedType_x3f_1862_);
v___x_1875_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
v___f_1876_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___lam__2___boxed), 6, 1);
lean_closure_set(v___f_1876_, 0, v___x_1875_);
v___x_1877_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(v___f_1871_, v___f_1870_, v___f_1876_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed(lean_object* v_stx_1878_, lean_object* v_lctx_1879_, lean_object* v_expr_1880_, lean_object* v_expectedType_x3f_1881_, lean_object* v_isBinder_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_){
_start:
{
uint8_t v_isBinder_boxed_1888_; lean_object* v_res_1889_; 
v_isBinder_boxed_1888_ = lean_unbox(v_isBinder_1882_);
v_res_1889_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(v_stx_1878_, v_lctx_1879_, v_expr_1880_, v_expectedType_x3f_1881_, v_isBinder_boxed_1888_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_);
lean_dec(v_a_1886_);
lean_dec_ref(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_a_1883_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0(lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___redArg(v___y_1893_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0___boxed(lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0_spec__0(v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0(lean_object* v_00_u03b1_1902_, lean_object* v_x_1903_, lean_object* v_mkInfo_1904_, lean_object* v_mkInfoOnError_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___redArg(v_x_1903_, v_mkInfo_1904_, v_mkInfoOnError_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0___boxed(lean_object* v_00_u03b1_1912_, lean_object* v_x_1913_, lean_object* v_mkInfo_1914_, lean_object* v_mkInfoOnError_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lean_Elab_withInfoContext_x27___at___00Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo_spec__0(v_00_u03b1_1912_, v_x_1913_, v_mkInfo_1914_, v_mkInfoOnError_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(lean_object* v_stx_1928_, lean_object* v_00_u03c3s_1929_, lean_object* v_hyp_1930_, uint8_t v_isBinder_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v_lctx_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_lctx_1937_ = lean_ctor_get(v_a_1932_, 2);
v___x_1938_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___closed__1));
v___x_1939_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v___x_1938_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v_name_1941_; lean_object* v_uniq_1942_; lean_object* v_p_1943_; lean_object* v___x_1944_; uint8_t v___x_1945_; uint8_t v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v_name_1941_ = lean_ctor_get(v_hyp_1930_, 0);
lean_inc(v_name_1941_);
v_uniq_1942_ = lean_ctor_get(v_hyp_1930_, 1);
lean_inc_n(v_uniq_1942_, 2);
v_p_1943_ = lean_ctor_get(v_hyp_1930_, 2);
lean_inc_ref(v_p_1943_);
lean_dec_ref(v_hyp_1930_);
v___x_1944_ = l_Lean_mkAppB(v_a_1940_, v_00_u03c3s_1929_, v_p_1943_);
v___x_1945_ = 0;
v___x_1946_ = 0;
lean_inc_ref(v___x_1944_);
lean_inc_ref(v_lctx_1937_);
v___x_1947_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_1937_, v_uniq_1942_, v_name_1941_, v___x_1944_, v___x_1945_, v___x_1946_);
v___x_1948_ = l_Lean_Expr_fvar___override(v_uniq_1942_);
v___x_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1944_);
v___x_1950_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(v_stx_1928_, v___x_1947_, v___x_1948_, v___x_1949_, v_isBinder_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
return v___x_1950_;
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_dec_ref(v_hyp_1930_);
lean_dec_ref(v_00_u03c3s_1929_);
lean_dec(v_stx_1928_);
v_a_1951_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1939_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1939_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo___boxed(lean_object* v_stx_1959_, lean_object* v_00_u03c3s_1960_, lean_object* v_hyp_1961_, lean_object* v_isBinder_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_){
_start:
{
uint8_t v_isBinder_boxed_1968_; lean_object* v_res_1969_; 
v_isBinder_boxed_1968_ = lean_unbox(v_isBinder_1962_);
v_res_1969_ = l_Lean_Elab_Tactic_Do_ProofMode_addHypInfo(v_stx_1959_, v_00_u03c3s_1960_, v_hyp_1961_, v_isBinder_boxed_1968_, v_a_1963_, v_a_1964_, v_a_1965_, v_a_1966_);
lean_dec(v_a_1966_);
lean_dec_ref(v_a_1965_);
lean_dec(v_a_1964_);
lean_dec_ref(v_a_1963_);
return v_res_1969_;
}
}
lean_object* runtime_initialize_Std_Do_SPred_DerivedLaws(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_Do_ProofMode(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Do_SPred_DerivedLaws(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default = _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal_default);
l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal = _init_l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_ProofMode_instInhabitedMGoal);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Do_SPred_DerivedLaws(uint8_t builtin);
lean_object* initialize_Std_Tactic_Do_ProofMode(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Do_SPred_DerivedLaws(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_Do_ProofMode(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
}
#ifdef __cplusplus
}
#endif
