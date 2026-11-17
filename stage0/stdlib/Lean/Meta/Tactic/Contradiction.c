// Lean compiler output
// Module: Lean.Meta.Tactic.Contradiction
// Imports: public import Lean.Meta.Tactic.Assumption public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Apply import Lean.Meta.HasNotBit import Lean.Meta.Tactic.Simp.Rewrite import Lean.Meta.LitValues
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Meta_Simp_isEqnThmHypothesis(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAbsurd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_refutableHasNotBit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNot_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_floatLitValuesEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_saveState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_saveState___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value)} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value;
static const lean_array_object l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "contradiction"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 147, 90, 76, 177, 67, 155, 92)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__4 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__5 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__6 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__7;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "elimEmptyInductive, number subgoals: "};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "elimEmptyInductive out-of-fuel"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__8 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_mkGenDiseqMask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkGenDiseqMask___closed__0 = (const lean_object*)&l_Lean_Meta_mkGenDiseqMask___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Tactic.Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Tactic.Contradiction.0.Lean.Meta.processGenDiseq"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: isGenDiseq localDecl.type\n  "};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(101, 242, 48, 138, 187, 4, 117, 248)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_contradictionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 42, 230, 185, 74, 16, 247, 90)}};
static const lean_object* l_Lean_MVarId_contradictionCore___closed__0 = (const lean_object*)&l_Lean_MVarId_contradictionCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 99, 155, 115, 190, 254, 84, 130)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(215, 241, 81, 7, 129, 11, 88, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(234, 199, 235, 149, 198, 6, 20, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 78, 37, 212, 63, 127, 41, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 88, 171, 83, 172, 77, 248, 159)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(86, 220, 174, 134, 139, 23, 35, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 173, 142, 211, 165, 86, 65, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 154, 136, 66, 43, 95, 3, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(142, 18, 4, 159, 144, 239, 124, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 255, 49, 161, 212, 67, 91, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(911661800) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(54, 37, 52, 164, 114, 188, 198, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 78, 196, 57, 182, 60, 174, 81)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 112, 60, 29, 144, 20, 193, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(84, 54, 65, 98, 52, 12, 188, 139)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object* v_e_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2));
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = l_Lean_Expr_isAppOfArity(v_e_6_, v___x_7_, v___x_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = l_Lean_Expr_appArg_x21(v_e_6_);
v___x_11_ = l_Lean_Expr_hasLooseBVars(v___x_10_);
lean_dec_ref(v___x_10_);
if (v___x_11_ == 0)
{
return v___x_9_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object* v_e_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(v_e_13_);
lean_dec_ref(v_e_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
lean_object* v_ks_20_; lean_object* v_vs_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_45_; 
v_ks_20_ = lean_ctor_get(v_x_16_, 0);
v_vs_21_ = lean_ctor_get(v_x_16_, 1);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_45_ == 0)
{
v___x_23_ = v_x_16_;
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_vs_21_);
lean_inc(v_ks_20_);
lean_dec(v_x_16_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = lean_array_get_size(v_ks_20_);
v___x_26_ = lean_nat_dec_lt(v_x_17_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
lean_dec(v_x_17_);
v___x_27_ = lean_array_push(v_ks_20_, v_x_18_);
v___x_28_ = lean_array_push(v_vs_21_, v_x_19_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_28_);
lean_ctor_set(v___x_23_, 0, v___x_27_);
v___x_30_ = v___x_23_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v___x_28_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
else
{
lean_object* v_k_x27_32_; uint8_t v___x_33_; 
v_k_x27_32_ = lean_array_fget_borrowed(v_ks_20_, v_x_17_);
v___x_33_ = l_Lean_instBEqMVarId_beq(v_x_18_, v_k_x27_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_35_; 
if (v_isShared_24_ == 0)
{
v___x_35_ = v___x_23_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_ks_20_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_vs_21_);
v___x_35_ = v_reuseFailAlloc_39_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_add(v_x_17_, v___x_36_);
lean_dec(v_x_17_);
v_x_16_ = v___x_35_;
v_x_17_ = v___x_37_;
goto _start;
}
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v___x_40_ = lean_array_fset(v_ks_20_, v_x_17_, v_x_18_);
v___x_41_ = lean_array_fset(v_vs_21_, v_x_17_, v_x_19_);
lean_dec(v_x_17_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_41_);
lean_ctor_set(v___x_23_, 0, v___x_40_);
v___x_43_ = v___x_23_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_46_, lean_object* v_k_47_, lean_object* v_v_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_46_, v___x_49_, v_k_47_, v_v_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object* v_x_52_, size_t v_x_53_, size_t v_x_54_, lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
if (lean_obj_tag(v_x_52_) == 0)
{
lean_object* v_es_57_; size_t v___x_58_; size_t v___x_59_; lean_object* v_j_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v_es_57_ = lean_ctor_get(v_x_52_, 0);
v___x_58_ = ((size_t)31ULL);
v___x_59_ = lean_usize_land(v_x_53_, v___x_58_);
v_j_60_ = lean_usize_to_nat(v___x_59_);
v___x_61_ = lean_array_get_size(v_es_57_);
v___x_62_ = lean_nat_dec_lt(v_j_60_, v___x_61_);
if (v___x_62_ == 0)
{
lean_dec(v_j_60_);
lean_dec(v_x_56_);
lean_dec(v_x_55_);
return v_x_52_;
}
else
{
lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_101_; 
lean_inc_ref(v_es_57_);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; 
v_unused_102_ = lean_ctor_get(v_x_52_, 0);
lean_dec(v_unused_102_);
v___x_64_ = v_x_52_;
v_isShared_65_ = v_isSharedCheck_101_;
goto v_resetjp_63_;
}
else
{
lean_dec(v_x_52_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_101_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v_v_66_; lean_object* v___x_67_; lean_object* v_xs_x27_68_; lean_object* v___y_70_; 
v_v_66_ = lean_array_fget(v_es_57_, v_j_60_);
v___x_67_ = lean_box(0);
v_xs_x27_68_ = lean_array_fset(v_es_57_, v_j_60_, v___x_67_);
switch(lean_obj_tag(v_v_66_))
{
case 0:
{
lean_object* v_key_75_; lean_object* v_val_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_86_; 
v_key_75_ = lean_ctor_get(v_v_66_, 0);
v_val_76_ = lean_ctor_get(v_v_66_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_v_66_);
if (v_isSharedCheck_86_ == 0)
{
v___x_78_ = v_v_66_;
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_val_76_);
lean_inc(v_key_75_);
lean_dec(v_v_66_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
uint8_t v___x_80_; 
v___x_80_ = l_Lean_instBEqMVarId_beq(v_x_55_, v_key_75_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_del_object(v___x_78_);
v___x_81_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_75_, v_val_76_, v_x_55_, v_x_56_);
v___x_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
v___y_70_ = v___x_82_;
goto v___jp_69_;
}
else
{
lean_object* v___x_84_; 
lean_dec(v_val_76_);
lean_dec(v_key_75_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 1, v_x_56_);
lean_ctor_set(v___x_78_, 0, v_x_55_);
v___x_84_ = v___x_78_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_x_55_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_x_56_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
v___y_70_ = v___x_84_;
goto v___jp_69_;
}
}
}
}
case 1:
{
lean_object* v_node_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_99_; 
v_node_87_ = lean_ctor_get(v_v_66_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v_v_66_);
if (v_isSharedCheck_99_ == 0)
{
v___x_89_ = v_v_66_;
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_node_87_);
lean_dec(v_v_66_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_91_ = ((size_t)5ULL);
v___x_92_ = lean_usize_shift_right(v_x_53_, v___x_91_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_add(v_x_54_, v___x_93_);
v___x_95_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_node_87_, v___x_92_, v___x_94_, v_x_55_, v_x_56_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 0, v___x_95_);
v___x_97_ = v___x_89_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
v___y_70_ = v___x_97_;
goto v___jp_69_;
}
}
}
default: 
{
lean_object* v___x_100_; 
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v_x_55_);
lean_ctor_set(v___x_100_, 1, v_x_56_);
v___y_70_ = v___x_100_;
goto v___jp_69_;
}
}
v___jp_69_:
{
lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_71_ = lean_array_fset(v_xs_x27_68_, v_j_60_, v___y_70_);
lean_dec(v_j_60_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_71_);
v___x_73_ = v___x_64_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
else
{
lean_object* v_ks_103_; lean_object* v_vs_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_122_; 
v_ks_103_ = lean_ctor_get(v_x_52_, 0);
v_vs_104_ = lean_ctor_get(v_x_52_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_122_ == 0)
{
v___x_106_ = v_x_52_;
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_vs_104_);
lean_inc(v_ks_103_);
lean_dec(v_x_52_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_ks_103_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_vs_104_);
v___x_109_ = v_reuseFailAlloc_121_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v_newNode_110_; size_t v___x_111_; uint8_t v___x_112_; 
v_newNode_110_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v___x_109_, v_x_55_, v_x_56_);
v___x_111_ = ((size_t)7ULL);
v___x_112_ = lean_usize_dec_le(v___x_111_, v_x_54_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_113_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_110_);
v___x_114_ = lean_unsigned_to_nat(4u);
v___x_115_ = lean_nat_dec_lt(v___x_113_, v___x_114_);
lean_dec(v___x_113_);
if (v___x_115_ == 0)
{
lean_object* v_ks_116_; lean_object* v_vs_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_ks_116_ = lean_ctor_get(v_newNode_110_, 0);
lean_inc_ref(v_ks_116_);
v_vs_117_ = lean_ctor_get(v_newNode_110_, 1);
lean_inc_ref(v_vs_117_);
lean_dec_ref(v_newNode_110_);
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_120_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_x_54_, v_ks_116_, v_vs_117_, v___x_118_, v___x_119_);
lean_dec_ref(v_vs_117_);
lean_dec_ref(v_ks_116_);
return v___x_120_;
}
else
{
return v_newNode_110_;
}
}
else
{
return v_newNode_110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_123_, lean_object* v_keys_124_, lean_object* v_vals_125_, lean_object* v_i_126_, lean_object* v_entries_127_){
_start:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_array_get_size(v_keys_124_);
v___x_129_ = lean_nat_dec_lt(v_i_126_, v___x_128_);
if (v___x_129_ == 0)
{
lean_dec(v_i_126_);
return v_entries_127_;
}
else
{
lean_object* v_k_130_; lean_object* v_v_131_; uint64_t v___x_132_; size_t v_h_133_; size_t v___x_134_; lean_object* v___x_135_; size_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v_h_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_k_130_ = lean_array_fget_borrowed(v_keys_124_, v_i_126_);
v_v_131_ = lean_array_fget_borrowed(v_vals_125_, v_i_126_);
v___x_132_ = l_Lean_instHashableMVarId_hash(v_k_130_);
v_h_133_ = lean_uint64_to_usize(v___x_132_);
v___x_134_ = ((size_t)5ULL);
v___x_135_ = lean_unsigned_to_nat(1u);
v___x_136_ = ((size_t)1ULL);
v___x_137_ = lean_usize_sub(v_depth_123_, v___x_136_);
v___x_138_ = lean_usize_mul(v___x_134_, v___x_137_);
v_h_139_ = lean_usize_shift_right(v_h_133_, v___x_138_);
v___x_140_ = lean_nat_add(v_i_126_, v___x_135_);
lean_dec(v_i_126_);
lean_inc(v_v_131_);
lean_inc(v_k_130_);
v___x_141_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_entries_127_, v_h_139_, v_depth_123_, v_k_130_, v_v_131_);
v_i_126_ = v___x_140_;
v_entries_127_ = v___x_141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_143_, lean_object* v_keys_144_, lean_object* v_vals_145_, lean_object* v_i_146_, lean_object* v_entries_147_){
_start:
{
size_t v_depth_boxed_148_; lean_object* v_res_149_; 
v_depth_boxed_148_ = lean_unbox_usize(v_depth_143_);
lean_dec(v_depth_143_);
v_res_149_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_148_, v_keys_144_, v_vals_145_, v_i_146_, v_entries_147_);
lean_dec_ref(v_vals_145_);
lean_dec_ref(v_keys_144_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_150_, lean_object* v_x_151_, lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
size_t v_x_1120__boxed_155_; size_t v_x_1121__boxed_156_; lean_object* v_res_157_; 
v_x_1120__boxed_155_ = lean_unbox_usize(v_x_151_);
lean_dec(v_x_151_);
v_x_1121__boxed_156_ = lean_unbox_usize(v_x_152_);
lean_dec(v_x_152_);
v_res_157_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_150_, v_x_1120__boxed_155_, v_x_1121__boxed_156_, v_x_153_, v_x_154_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object* v_x_158_, lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
uint64_t v___x_161_; size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; 
v___x_161_ = l_Lean_instHashableMVarId_hash(v_x_159_);
v___x_162_ = lean_uint64_to_usize(v___x_161_);
v___x_163_ = ((size_t)1ULL);
v___x_164_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_158_, v___x_162_, v___x_163_, v_x_159_, v_x_160_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object* v_mvarId_165_, lean_object* v_val_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; lean_object* v_mctx_170_; lean_object* v_cache_171_; lean_object* v_zetaDeltaFVarIds_172_; lean_object* v_postponed_173_; lean_object* v_diag_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_203_; 
v___x_169_ = lean_st_ref_take(v___y_167_);
v_mctx_170_ = lean_ctor_get(v___x_169_, 0);
v_cache_171_ = lean_ctor_get(v___x_169_, 1);
v_zetaDeltaFVarIds_172_ = lean_ctor_get(v___x_169_, 2);
v_postponed_173_ = lean_ctor_get(v___x_169_, 3);
v_diag_174_ = lean_ctor_get(v___x_169_, 4);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_203_ == 0)
{
v___x_176_ = v___x_169_;
v_isShared_177_ = v_isSharedCheck_203_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_diag_174_);
lean_inc(v_postponed_173_);
lean_inc(v_zetaDeltaFVarIds_172_);
lean_inc(v_cache_171_);
lean_inc(v_mctx_170_);
lean_dec(v___x_169_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_203_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v_depth_178_; lean_object* v_levelAssignDepth_179_; lean_object* v_lmvarCounter_180_; lean_object* v_mvarCounter_181_; lean_object* v_lDecls_182_; lean_object* v_decls_183_; lean_object* v_userNames_184_; lean_object* v_lAssignment_185_; lean_object* v_eAssignment_186_; lean_object* v_dAssignment_187_; lean_object* v_instanceTypedMVars_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_202_; 
v_depth_178_ = lean_ctor_get(v_mctx_170_, 0);
v_levelAssignDepth_179_ = lean_ctor_get(v_mctx_170_, 1);
v_lmvarCounter_180_ = lean_ctor_get(v_mctx_170_, 2);
v_mvarCounter_181_ = lean_ctor_get(v_mctx_170_, 3);
v_lDecls_182_ = lean_ctor_get(v_mctx_170_, 4);
v_decls_183_ = lean_ctor_get(v_mctx_170_, 5);
v_userNames_184_ = lean_ctor_get(v_mctx_170_, 6);
v_lAssignment_185_ = lean_ctor_get(v_mctx_170_, 7);
v_eAssignment_186_ = lean_ctor_get(v_mctx_170_, 8);
v_dAssignment_187_ = lean_ctor_get(v_mctx_170_, 9);
v_instanceTypedMVars_188_ = lean_ctor_get(v_mctx_170_, 10);
v_isSharedCheck_202_ = !lean_is_exclusive(v_mctx_170_);
if (v_isSharedCheck_202_ == 0)
{
v___x_190_ = v_mctx_170_;
v_isShared_191_ = v_isSharedCheck_202_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_instanceTypedMVars_188_);
lean_inc(v_dAssignment_187_);
lean_inc(v_eAssignment_186_);
lean_inc(v_lAssignment_185_);
lean_inc(v_userNames_184_);
lean_inc(v_decls_183_);
lean_inc(v_lDecls_182_);
lean_inc(v_mvarCounter_181_);
lean_inc(v_lmvarCounter_180_);
lean_inc(v_levelAssignDepth_179_);
lean_inc(v_depth_178_);
lean_dec(v_mctx_170_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_202_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_192_ = lean_box(0);
v___x_193_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_eAssignment_186_, v_mvarId_165_, v_val_166_);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 8, v___x_193_);
v___x_195_ = v___x_190_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_depth_178_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_levelAssignDepth_179_);
lean_ctor_set(v_reuseFailAlloc_201_, 2, v_lmvarCounter_180_);
lean_ctor_set(v_reuseFailAlloc_201_, 3, v_mvarCounter_181_);
lean_ctor_set(v_reuseFailAlloc_201_, 4, v_lDecls_182_);
lean_ctor_set(v_reuseFailAlloc_201_, 5, v_decls_183_);
lean_ctor_set(v_reuseFailAlloc_201_, 6, v_userNames_184_);
lean_ctor_set(v_reuseFailAlloc_201_, 7, v_lAssignment_185_);
lean_ctor_set(v_reuseFailAlloc_201_, 8, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_201_, 9, v_dAssignment_187_);
lean_ctor_set(v_reuseFailAlloc_201_, 10, v_instanceTypedMVars_188_);
v___x_195_ = v_reuseFailAlloc_201_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_195_);
v___x_197_ = v___x_176_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_195_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_cache_171_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_zetaDeltaFVarIds_172_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v_postponed_173_);
lean_ctor_set(v_reuseFailAlloc_200_, 4, v_diag_174_);
v___x_197_ = v_reuseFailAlloc_200_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_st_ref_put(v___y_167_, v___x_197_);
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v___x_192_);
return v___x_199_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object* v_mvarId_204_, lean_object* v_val_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_204_, v_val_205_, v___y_206_);
lean_dec(v___y_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object* v_mvarId_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v___f_216_; lean_object* v___x_217_; 
v___f_216_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0));
lean_inc(v_mvarId_210_);
v___x_217_ = l_Lean_MVarId_getType(v_mvarId_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_261_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_261_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_261_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_261_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; 
v___x_222_ = lean_find_expr(v___f_216_, v_a_218_);
lean_dec(v_a_218_);
if (lean_obj_tag(v___x_222_) == 1)
{
lean_object* v_val_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
lean_del_object(v___x_220_);
v_val_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_val_223_);
lean_dec_ref_known(v___x_222_, 1);
v___x_224_ = l_Lean_Expr_appArg_x21(v_val_223_);
lean_dec(v_val_223_);
lean_inc(v_mvarId_210_);
v___x_225_ = l_Lean_MVarId_getType(v_mvarId_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; lean_object* v___x_227_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
lean_inc(v_a_226_);
lean_dec_ref_known(v___x_225_, 1);
v___x_227_ = l_Lean_Meta_mkFalseElim(v_a_226_, v___x_224_, v_a_211_, v_a_212_, v_a_213_, v_a_214_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_238_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_227_, 1);
v___x_229_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_210_, v_a_228_, v_a_212_);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; 
v_unused_239_ = lean_ctor_get(v___x_229_, 0);
lean_dec(v_unused_239_);
v___x_231_ = v___x_229_;
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
else
{
lean_dec(v___x_229_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v___x_233_ = 1;
v___x_234_ = lean_box(v___x_233_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_234_);
v___x_236_ = v___x_231_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
else
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
lean_dec(v_mvarId_210_);
v_a_240_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_227_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_227_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_240_);
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
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
lean_dec_ref(v___x_224_);
lean_dec(v_mvarId_210_);
v_a_248_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_225_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_225_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
else
{
uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
lean_dec(v___x_222_);
lean_dec(v_mvarId_210_);
v___x_256_ = 0;
v___x_257_ = lean_box(v___x_256_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_257_);
v___x_259_ = v___x_220_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_269_; 
lean_dec(v_mvarId_210_);
v_a_262_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_269_ == 0)
{
v___x_264_ = v___x_217_;
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_217_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_262_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object* v_mvarId_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_270_, v_a_271_, v_a_272_, v_a_273_, v_a_274_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object* v_mvarId_277_, lean_object* v_val_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_277_, v_val_278_, v___y_280_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object* v_mvarId_285_, lean_object* v_val_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(v_mvarId_285_, v_val_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object* v_00_u03b2_293_, lean_object* v_x_294_, lean_object* v_x_295_, lean_object* v_x_296_){
_start:
{
lean_object* v___x_297_; 
v___x_297_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_x_294_, v_x_295_, v_x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_298_, lean_object* v_x_299_, size_t v_x_300_, size_t v_x_301_, lean_object* v_x_302_, lean_object* v_x_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_299_, v_x_300_, v_x_301_, v_x_302_, v_x_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_305_, lean_object* v_x_306_, lean_object* v_x_307_, lean_object* v_x_308_, lean_object* v_x_309_, lean_object* v_x_310_){
_start:
{
size_t v_x_1471__boxed_311_; size_t v_x_1472__boxed_312_; lean_object* v_res_313_; 
v_x_1471__boxed_311_ = lean_unbox_usize(v_x_307_);
lean_dec(v_x_307_);
v_x_1472__boxed_312_ = lean_unbox_usize(v_x_308_);
lean_dec(v_x_308_);
v_res_313_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(v_00_u03b2_305_, v_x_306_, v_x_1471__boxed_311_, v_x_1472__boxed_312_, v_x_309_, v_x_310_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_314_, lean_object* v_n_315_, lean_object* v_k_316_, lean_object* v_v_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v_n_315_, v_k_316_, v_v_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_319_, size_t v_depth_320_, lean_object* v_keys_321_, lean_object* v_vals_322_, lean_object* v_heq_323_, lean_object* v_i_324_, lean_object* v_entries_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_320_, v_keys_321_, v_vals_322_, v_i_324_, v_entries_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_327_, lean_object* v_depth_328_, lean_object* v_keys_329_, lean_object* v_vals_330_, lean_object* v_heq_331_, lean_object* v_i_332_, lean_object* v_entries_333_){
_start:
{
size_t v_depth_boxed_334_; lean_object* v_res_335_; 
v_depth_boxed_334_ = lean_unbox_usize(v_depth_328_);
lean_dec(v_depth_328_);
v_res_335_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_327_, v_depth_boxed_334_, v_keys_329_, v_vals_330_, v_heq_331_, v_i_332_, v_entries_333_);
lean_dec_ref(v_vals_330_);
lean_dec_ref(v_keys_329_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_336_, lean_object* v_x_337_, lean_object* v_x_338_, lean_object* v_x_339_, lean_object* v_x_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_337_, v_x_338_, v_x_339_, v_x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object* v_fvarId_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_FVarId_getType___redArg(v_fvarId_342_, v_a_343_, v_a_345_, v_a_346_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v_a_353_; lean_object* v___x_354_; 
v_a_353_ = lean_ctor_get(v___x_352_, 0);
lean_inc(v_a_353_);
lean_dec_ref_known(v___x_352_, 1);
v___x_354_ = l_Lean_Meta_whnfD(v_a_353_, v_a_343_, v_a_344_, v_a_345_, v_a_346_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_381_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_381_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_381_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_381_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Expr_getAppFn(v_a_355_);
lean_dec(v_a_355_);
if (lean_obj_tag(v___x_359_) == 4)
{
lean_object* v_declName_360_; lean_object* v___x_361_; lean_object* v_env_362_; uint8_t v___x_363_; lean_object* v___x_364_; 
v_declName_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_declName_360_);
lean_dec_ref_known(v___x_359_, 2);
v___x_361_ = lean_st_ref_get(v_a_346_);
v_env_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc_ref(v_env_362_);
lean_dec(v___x_361_);
v___x_363_ = 0;
v___x_364_ = l_Lean_Environment_find_x3f(v_env_362_, v_declName_360_, v___x_363_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_del_object(v___x_357_);
goto v___jp_348_;
}
else
{
lean_object* v_val_365_; 
v_val_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_val_365_);
lean_dec_ref_known(v___x_364_, 1);
if (lean_obj_tag(v_val_365_) == 5)
{
lean_object* v_val_366_; lean_object* v_numIndices_367_; lean_object* v_ctors_368_; lean_object* v___x_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v_val_366_ = lean_ctor_get(v_val_365_, 0);
lean_inc_ref(v_val_366_);
lean_dec_ref_known(v_val_365_, 1);
v_numIndices_367_ = lean_ctor_get(v_val_366_, 2);
lean_inc(v_numIndices_367_);
v_ctors_368_ = lean_ctor_get(v_val_366_, 4);
lean_inc(v_ctors_368_);
lean_dec_ref(v_val_366_);
v___x_369_ = l_List_lengthTR___redArg(v_ctors_368_);
lean_dec(v_ctors_368_);
v___x_370_ = lean_unsigned_to_nat(0u);
v___x_371_ = lean_nat_dec_eq(v___x_369_, v___x_370_);
lean_dec(v___x_369_);
if (v___x_371_ == 0)
{
uint8_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_372_ = lean_nat_dec_lt(v___x_370_, v_numIndices_367_);
lean_dec(v_numIndices_367_);
v___x_373_ = lean_box(v___x_372_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v___x_373_);
v___x_375_ = v___x_357_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
else
{
lean_object* v___x_377_; lean_object* v___x_379_; 
lean_dec(v_numIndices_367_);
v___x_377_ = lean_box(v___x_371_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v___x_377_);
v___x_379_ = v___x_357_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
else
{
lean_dec(v_val_365_);
lean_del_object(v___x_357_);
goto v___jp_348_;
}
}
}
else
{
lean_dec_ref(v___x_359_);
lean_del_object(v___x_357_);
goto v___jp_348_;
}
}
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_389_; 
v_a_382_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_389_ == 0)
{
v___x_384_ = v___x_354_;
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_354_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_389_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
if (v_isShared_385_ == 0)
{
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
else
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
v_a_390_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_352_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_352_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
v___jp_348_:
{
uint8_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = 0;
v___x_350_ = lean_box(v___x_349_);
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object* v_fvarId_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
lean_dec(v_a_400_);
lean_dec_ref(v_a_399_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object* v_s_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Meta_SavedState_restore___redArg(v_s_405_, v___y_408_, v___y_410_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object* v_s_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(v_s_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec(v___y_414_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object* v_x_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; 
lean_inc(v___y_430_);
v___x_436_ = lean_apply_6(v_x_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, lean_box(0));
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object* v_x_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(v_x_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_438_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object* v_mvarId_445_, lean_object* v_x_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v___f_453_; lean_object* v___x_454_; 
lean_inc(v___y_447_);
v___f_453_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_453_, 0, v_x_446_);
lean_closure_set(v___f_453_, 1, v___y_447_);
v___x_454_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_445_, v___f_453_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
if (lean_obj_tag(v___x_454_) == 0)
{
return v___x_454_;
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_454_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_454_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object* v_mvarId_463_, lean_object* v_x_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_463_, v_x_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object* v_00_u03b1_472_, lean_object* v_mvarId_473_, lean_object* v_x_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_473_, v_x_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object* v_00_u03b1_482_, lean_object* v_mvarId_483_, lean_object* v_x_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(v_00_u03b1_482_, v_mvarId_483_, v_x_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object* v_x_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Lean_Meta_saveState___redArg(v___y_495_, v___y_497_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___y_502_; lean_object* v_a_503_; lean_object* v___x_523_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_499_, 1);
lean_inc(v___y_497_);
lean_inc_ref(v___y_496_);
lean_inc(v___y_495_);
lean_inc_ref(v___y_494_);
lean_inc(v___y_493_);
v___x_523_ = lean_apply_6(v_x_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, lean_box(0));
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; uint8_t v___x_525_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_a_524_);
v___x_525_ = lean_unbox(v_a_524_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; 
lean_dec_ref_known(v___x_523_, 1);
lean_inc(v_a_500_);
v___x_526_ = l_Lean_Meta_SavedState_restore___redArg(v_a_500_, v___y_495_, v___y_497_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec(v_a_500_);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; 
v_unused_534_ = lean_ctor_get(v___x_526_, 0);
lean_dec(v_unused_534_);
v___x_528_ = v___x_526_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_dec(v___x_526_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v_a_524_);
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_524_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec(v_a_524_);
v_a_535_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_526_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_526_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
lean_inc(v_a_535_);
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
v___y_502_ = v___x_540_;
v_a_503_ = v_a_535_;
goto v___jp_501_;
}
}
}
}
else
{
lean_dec(v_a_524_);
lean_dec(v_a_500_);
return v___x_523_;
}
}
else
{
lean_object* v_a_543_; 
v_a_543_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_a_543_);
v___y_502_ = v___x_523_;
v_a_503_ = v_a_543_;
goto v___jp_501_;
}
v___jp_501_:
{
uint8_t v___x_504_; 
v___x_504_ = l_Lean_Exception_isInterrupt(v_a_503_);
if (v___x_504_ == 0)
{
uint8_t v___x_505_; 
lean_inc_ref(v_a_503_);
v___x_505_ = l_Lean_Exception_isRuntime(v_a_503_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; 
lean_dec_ref(v___y_502_);
v___x_506_ = l_Lean_Meta_SavedState_restore___redArg(v_a_500_, v___y_495_, v___y_497_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; 
v_unused_514_ = lean_ctor_get(v___x_506_, 0);
lean_dec(v_unused_514_);
v___x_508_ = v___x_506_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_dec(v___x_506_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set_tag(v___x_508_, 1);
lean_ctor_set(v___x_508_, 0, v_a_503_);
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_503_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
lean_dec_ref(v_a_503_);
v_a_515_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_506_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_506_);
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
lean_dec_ref(v_a_503_);
lean_dec(v_a_500_);
return v___y_502_;
}
}
else
{
lean_dec_ref(v_a_503_);
lean_dec(v_a_500_);
return v___y_502_;
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
lean_dec_ref(v_x_492_);
v_a_544_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v___x_499_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_499_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object* v_x_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v_x_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object* v_msgData_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v___x_566_; lean_object* v_env_567_; uint8_t v___x_568_; lean_object* v_env_569_; lean_object* v___x_570_; lean_object* v_toCold_571_; lean_object* v_mctx_572_; lean_object* v_lctx_573_; lean_object* v_options_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_566_ = lean_st_ref_get(v___y_564_);
v_env_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc_ref(v_env_567_);
lean_dec(v___x_566_);
v___x_568_ = 0;
v_env_569_ = l_Lean_Environment_setRecordingDeps(v_env_567_, v___x_568_);
v___x_570_ = lean_st_ref_get(v___y_562_);
v_toCold_571_ = lean_ctor_get(v___y_563_, 0);
v_mctx_572_ = lean_ctor_get(v___x_570_, 0);
lean_inc_ref(v_mctx_572_);
lean_dec(v___x_570_);
v_lctx_573_ = lean_ctor_get(v___y_561_, 2);
v_options_574_ = lean_ctor_get(v_toCold_571_, 2);
lean_inc_ref(v_options_574_);
lean_inc_ref(v_lctx_573_);
v___x_575_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_575_, 0, v_env_569_);
lean_ctor_set(v___x_575_, 1, v_mctx_572_);
lean_ctor_set(v___x_575_, 2, v_lctx_573_);
lean_ctor_set(v___x_575_, 3, v_options_574_);
v___x_576_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v_msgData_560_);
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object* v_msgData_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msgData_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
return v_res_584_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_585_; double v___x_586_; 
v___x_585_ = lean_unsigned_to_nat(0u);
v___x_586_ = lean_float_of_nat(v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object* v_cls_590_, lean_object* v_msg_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_ref_597_; lean_object* v___x_598_; lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_644_; 
v_ref_597_ = lean_ctor_get(v___y_594_, 2);
v___x_598_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msg_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
v_a_599_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_644_ == 0)
{
v___x_601_ = v___x_598_;
v_isShared_602_ = v_isSharedCheck_644_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_598_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_644_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v_traceState_604_; lean_object* v_env_605_; lean_object* v_nextMacroScope_606_; lean_object* v_ngen_607_; lean_object* v_auxDeclNGen_608_; lean_object* v_cache_609_; lean_object* v_recordedDeps_610_; lean_object* v_messages_611_; lean_object* v_infoState_612_; lean_object* v_snapshotTasks_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_643_; 
v___x_603_ = lean_st_ref_take(v___y_595_);
v_traceState_604_ = lean_ctor_get(v___x_603_, 4);
v_env_605_ = lean_ctor_get(v___x_603_, 0);
v_nextMacroScope_606_ = lean_ctor_get(v___x_603_, 1);
v_ngen_607_ = lean_ctor_get(v___x_603_, 2);
v_auxDeclNGen_608_ = lean_ctor_get(v___x_603_, 3);
v_cache_609_ = lean_ctor_get(v___x_603_, 5);
v_recordedDeps_610_ = lean_ctor_get(v___x_603_, 6);
v_messages_611_ = lean_ctor_get(v___x_603_, 7);
v_infoState_612_ = lean_ctor_get(v___x_603_, 8);
v_snapshotTasks_613_ = lean_ctor_get(v___x_603_, 9);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_643_ == 0)
{
v___x_615_ = v___x_603_;
v_isShared_616_ = v_isSharedCheck_643_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_snapshotTasks_613_);
lean_inc(v_infoState_612_);
lean_inc(v_messages_611_);
lean_inc(v_recordedDeps_610_);
lean_inc(v_cache_609_);
lean_inc(v_traceState_604_);
lean_inc(v_auxDeclNGen_608_);
lean_inc(v_ngen_607_);
lean_inc(v_nextMacroScope_606_);
lean_inc(v_env_605_);
lean_dec(v___x_603_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_643_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint64_t v_tid_617_; lean_object* v_traces_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_642_; 
v_tid_617_ = lean_ctor_get_uint64(v_traceState_604_, sizeof(void*)*1);
v_traces_618_ = lean_ctor_get(v_traceState_604_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v_traceState_604_);
if (v_isSharedCheck_642_ == 0)
{
v___x_620_ = v_traceState_604_;
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_traces_618_);
lean_dec(v_traceState_604_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_642_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_622_; lean_object* v___x_623_; double v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_622_ = lean_box(0);
v___x_623_ = lean_box(0);
v___x_624_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0);
v___x_625_ = 0;
v___x_626_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1));
v___x_627_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_627_, 0, v_cls_590_);
lean_ctor_set(v___x_627_, 1, v___x_623_);
lean_ctor_set(v___x_627_, 2, v___x_626_);
lean_ctor_set_float(v___x_627_, sizeof(void*)*3, v___x_624_);
lean_ctor_set_float(v___x_627_, sizeof(void*)*3 + 8, v___x_624_);
lean_ctor_set_uint8(v___x_627_, sizeof(void*)*3 + 16, v___x_625_);
v___x_628_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2));
v___x_629_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_629_, 0, v___x_627_);
lean_ctor_set(v___x_629_, 1, v_a_599_);
lean_ctor_set(v___x_629_, 2, v___x_628_);
lean_inc(v_ref_597_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v_ref_597_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = l_Lean_PersistentArray_push___redArg(v_traces_618_, v___x_630_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_631_);
v___x_633_ = v___x_620_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_631_);
lean_ctor_set_uint64(v_reuseFailAlloc_641_, sizeof(void*)*1, v_tid_617_);
v___x_633_ = v_reuseFailAlloc_641_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_635_; 
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 4, v___x_633_);
v___x_635_ = v___x_615_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_env_605_);
lean_ctor_set(v_reuseFailAlloc_640_, 1, v_nextMacroScope_606_);
lean_ctor_set(v_reuseFailAlloc_640_, 2, v_ngen_607_);
lean_ctor_set(v_reuseFailAlloc_640_, 3, v_auxDeclNGen_608_);
lean_ctor_set(v_reuseFailAlloc_640_, 4, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_640_, 5, v_cache_609_);
lean_ctor_set(v_reuseFailAlloc_640_, 6, v_recordedDeps_610_);
lean_ctor_set(v_reuseFailAlloc_640_, 7, v_messages_611_);
lean_ctor_set(v_reuseFailAlloc_640_, 8, v_infoState_612_);
lean_ctor_set(v_reuseFailAlloc_640_, 9, v_snapshotTasks_613_);
v___x_635_ = v_reuseFailAlloc_640_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_636_ = lean_st_ref_put(v___y_595_, v___x_635_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_622_);
v___x_638_ = v___x_601_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_622_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object* v_cls_645_, lean_object* v_msg_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_645_, v_msg_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object* v_toInductionSubgoal_660_, lean_object* v_mvarId_661_, lean_object* v_fields_662_, lean_object* v_sz_663_, lean_object* v___x_664_, lean_object* v___x_665_, lean_object* v___x_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
size_t v_sz_boxed_673_; size_t v___x_16934__boxed_674_; uint8_t v___x_16936__boxed_675_; lean_object* v_res_676_; 
v_sz_boxed_673_ = lean_unbox_usize(v_sz_663_);
lean_dec(v_sz_663_);
v___x_16934__boxed_674_ = lean_unbox_usize(v___x_664_);
lean_dec(v___x_664_);
v___x_16936__boxed_675_ = lean_unbox(v___x_666_);
v_res_676_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(v_toInductionSubgoal_660_, v_mvarId_661_, v_fields_662_, v_sz_boxed_673_, v___x_16934__boxed_674_, v___x_665_, v___x_16936__boxed_675_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec(v___y_667_);
lean_dec_ref(v_fields_662_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object* v_val_677_, lean_object* v_as_678_, size_t v_sz_679_, size_t v_i_680_, lean_object* v_b_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
uint8_t v___x_688_; 
v___x_688_ = lean_usize_dec_lt(v_i_680_, v_sz_679_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; 
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v_b_681_);
return v___x_689_;
}
else
{
lean_object* v_a_690_; lean_object* v_toInductionSubgoal_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_732_; 
lean_dec_ref(v_b_681_);
v_a_690_ = lean_array_uget(v_as_678_, v_i_680_);
v_toInductionSubgoal_691_ = lean_ctor_get(v_a_690_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v_a_690_);
if (v_isSharedCheck_732_ == 0)
{
lean_object* v_unused_733_; 
v_unused_733_ = lean_ctor_get(v_a_690_, 1);
lean_dec(v_unused_733_);
v___x_693_ = v_a_690_;
v_isShared_694_ = v_isSharedCheck_732_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_toInductionSubgoal_691_);
lean_dec(v_a_690_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_732_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_mvarId_695_; lean_object* v_fields_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; uint8_t v___x_700_; size_t v_sz_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___f_705_; lean_object* v___x_706_; 
v_mvarId_695_ = lean_ctor_get(v_toInductionSubgoal_691_, 0);
lean_inc_n(v_mvarId_695_, 2);
v_fields_696_ = lean_ctor_get(v_toInductionSubgoal_691_, 1);
lean_inc_ref(v_fields_696_);
v___x_697_ = lean_box(0);
v___x_698_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_699_ = lean_unsigned_to_nat(0u);
v___x_700_ = lean_nat_dec_eq(v_val_677_, v___x_699_);
v_sz_701_ = lean_array_size(v_fields_696_);
v___x_702_ = lean_box_usize(v_sz_701_);
v___x_703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1));
v___x_704_ = lean_box(v___x_700_);
v___f_705_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed), 13, 7);
lean_closure_set(v___f_705_, 0, v_toInductionSubgoal_691_);
lean_closure_set(v___f_705_, 1, v_mvarId_695_);
lean_closure_set(v___f_705_, 2, v_fields_696_);
lean_closure_set(v___f_705_, 3, v___x_702_);
lean_closure_set(v___f_705_, 4, v___x_703_);
lean_closure_set(v___f_705_, 5, v___x_698_);
lean_closure_set(v___f_705_, 6, v___x_704_);
v___x_706_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_695_, v___f_705_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_723_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_723_ == 0)
{
v___x_709_ = v___x_706_;
v_isShared_710_ = v_isSharedCheck_723_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_723_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
uint8_t v___x_711_; 
v___x_711_ = lean_unbox(v_a_707_);
lean_dec(v_a_707_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_712_ = lean_box(v___x_700_);
v___x_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 1, v___x_697_);
lean_ctor_set(v___x_693_, 0, v___x_713_);
v___x_715_ = v___x_693_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v___x_697_);
v___x_715_ = v_reuseFailAlloc_719_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_717_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_715_);
v___x_717_ = v___x_709_;
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
else
{
size_t v___x_720_; size_t v___x_721_; 
lean_del_object(v___x_709_);
lean_del_object(v___x_693_);
v___x_720_ = ((size_t)1ULL);
v___x_721_ = lean_usize_add(v_i_680_, v___x_720_);
v_i_680_ = v___x_721_;
v_b_681_ = v___x_698_;
goto _start;
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_del_object(v___x_693_);
v_a_724_ = lean_ctor_get(v___x_706_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_706_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_706_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_744_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_745_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__6));
v___x_746_ = l_Lean_Name_append(v___x_745_, v___x_744_);
return v___x_746_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0));
v___x_749_ = l_Lean_stringToMessageData(v___x_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object* v_mvarId_750_, lean_object* v_fvarId_751_, lean_object* v___x_752_, uint8_t v___x_753_, lean_object* v___x_754_, lean_object* v_val_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_MVarId_cases(v_mvarId_750_, v_fvarId_751_, v___x_752_, v___x_753_, v___x_754_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v_toCold_797_; lean_object* v_options_798_; uint8_t v_hasTrace_799_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_762_, 1);
v_toCold_797_ = lean_ctor_get(v___y_759_, 0);
v_options_798_ = lean_ctor_get(v_toCold_797_, 2);
v_hasTrace_799_ = lean_ctor_get_uint8(v_options_798_, sizeof(void*)*1);
if (v_hasTrace_799_ == 0)
{
v___y_765_ = v___y_756_;
v___y_766_ = v___y_757_;
v___y_767_ = v___y_758_;
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
goto v___jp_764_;
}
else
{
lean_object* v_inheritedTraceOptions_800_; lean_object* v___x_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v_inheritedTraceOptions_800_ = lean_ctor_get(v_toCold_797_, 11);
v___x_801_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_802_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_803_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_800_, v_options_798_, v___x_802_);
if (v___x_803_ == 0)
{
v___y_765_ = v___y_756_;
v___y_766_ = v___y_757_;
v___y_767_ = v___y_758_;
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
goto v___jp_764_;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_804_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1, &l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1);
v___x_805_ = lean_array_get_size(v_a_763_);
v___x_806_ = l_Nat_reprFast(v___x_805_);
v___x_807_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
v___x_808_ = l_Lean_MessageData_ofFormat(v___x_807_);
v___x_809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_804_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_801_, v___x_809_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_dec_ref_known(v___x_810_, 1);
v___y_765_ = v___y_756_;
v___y_766_ = v___y_757_;
v___y_767_ = v___y_758_;
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
goto v___jp_764_;
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec(v_a_763_);
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
v___jp_764_:
{
lean_object* v___x_770_; size_t v_sz_771_; size_t v___x_772_; lean_object* v___x_773_; 
v___x_770_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_sz_771_ = lean_array_size(v_a_763_);
v___x_772_ = ((size_t)0ULL);
v___x_773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_755_, v_a_763_, v_sz_771_, v___x_772_, v___x_770_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v_a_763_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_788_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_788_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_788_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_788_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v_fst_778_; 
v_fst_778_ = lean_ctor_get(v_a_774_, 0);
lean_inc(v_fst_778_);
lean_dec(v_a_774_);
if (lean_obj_tag(v_fst_778_) == 0)
{
uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_779_ = 1;
v___x_780_ = lean_box(v___x_779_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_780_);
v___x_782_ = v___x_776_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_780_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
else
{
lean_object* v_val_784_; lean_object* v___x_786_; 
v_val_784_ = lean_ctor_get(v_fst_778_, 0);
lean_inc(v_val_784_);
lean_dec_ref_known(v_fst_778_, 1);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v_val_784_);
v___x_786_ = v___x_776_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_val_784_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
v_a_789_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_773_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_773_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_865_; 
v_a_819_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_865_ == 0)
{
v___x_821_ = v___x_762_;
v_isShared_822_ = v_isSharedCheck_865_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_762_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_865_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
uint8_t v___x_823_; 
v___x_823_ = l_Lean_Exception_isInterrupt(v_a_819_);
if (v___x_823_ == 0)
{
uint8_t v___x_824_; 
lean_inc(v_a_819_);
v___x_824_ = l_Lean_Exception_isRuntime(v_a_819_);
if (v___x_824_ == 0)
{
lean_object* v_toCold_825_; lean_object* v_options_826_; uint8_t v_hasTrace_827_; 
v_toCold_825_ = lean_ctor_get(v___y_759_, 0);
v_options_826_ = lean_ctor_get(v_toCold_825_, 2);
v_hasTrace_827_ = lean_ctor_get_uint8(v_options_826_, sizeof(void*)*1);
if (v_hasTrace_827_ == 0)
{
lean_object* v___x_828_; lean_object* v___x_830_; 
lean_dec(v_a_819_);
v___x_828_ = lean_box(v___x_753_);
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 0);
lean_ctor_set(v___x_821_, 0, v___x_828_);
v___x_830_ = v___x_821_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
else
{
lean_object* v_inheritedTraceOptions_832_; lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; 
v_inheritedTraceOptions_832_ = lean_ctor_get(v_toCold_825_, 11);
v___x_833_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_834_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_835_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_832_, v_options_826_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; lean_object* v___x_838_; 
lean_dec(v_a_819_);
v___x_836_ = lean_box(v___x_753_);
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 0);
lean_ctor_set(v___x_821_, 0, v___x_836_);
v___x_838_ = v___x_821_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; 
lean_del_object(v___x_821_);
v___x_840_ = l_Lean_Exception_toMessageData(v_a_819_);
v___x_841_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_833_, v___x_840_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_849_; 
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_849_ == 0)
{
lean_object* v_unused_850_; 
v_unused_850_ = lean_ctor_get(v___x_841_, 0);
lean_dec(v_unused_850_);
v___x_843_ = v___x_841_;
v_isShared_844_ = v_isSharedCheck_849_;
goto v_resetjp_842_;
}
else
{
lean_dec(v___x_841_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_849_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_845_; lean_object* v___x_847_; 
v___x_845_ = lean_box(v___x_753_);
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 0, v___x_845_);
v___x_847_ = v___x_843_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_845_);
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
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
v_a_851_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_841_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_841_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
}
else
{
lean_object* v___x_860_; 
if (v_isShared_822_ == 0)
{
v___x_860_ = v___x_821_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_819_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
else
{
lean_object* v___x_863_; 
if (v_isShared_822_ == 0)
{
v___x_863_ = v___x_821_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_819_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object* v_mvarId_866_, lean_object* v_fvarId_867_, lean_object* v___x_868_, lean_object* v___x_869_, lean_object* v___x_870_, lean_object* v_val_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
uint8_t v___x_17055__boxed_878_; lean_object* v_res_879_; 
v___x_17055__boxed_878_ = lean_unbox(v___x_869_);
v_res_879_ = l_Lean_Meta_ElimEmptyInductive_elim___lam__0(v_mvarId_866_, v_fvarId_867_, v___x_868_, v___x_17055__boxed_878_, v___x_870_, v_val_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec(v_val_871_);
return v_res_879_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9(void){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_881_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__8));
v___x_882_ = l_Lean_stringToMessageData(v___x_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object* v_mvarId_883_, lean_object* v_fvarId_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; uint8_t v___x_897_; 
v___x_895_ = lean_st_ref_get(v_a_885_);
v___x_896_ = lean_unsigned_to_nat(0u);
v___x_897_ = lean_nat_dec_eq(v___x_895_, v___x_896_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___f_905_; lean_object* v___x_906_; 
v___x_898_ = lean_st_ref_take(v_a_885_);
v___x_899_ = lean_unsigned_to_nat(1u);
v___x_900_ = lean_nat_sub(v___x_898_, v___x_899_);
lean_dec(v___x_898_);
v___x_901_ = lean_st_ref_put(v_a_885_, v___x_900_);
v___x_902_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__0));
v___x_903_ = lean_box(0);
v___x_904_ = lean_box(v___x_897_);
v___f_905_ = lean_alloc_closure((void*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed), 12, 6);
lean_closure_set(v___f_905_, 0, v_mvarId_883_);
lean_closure_set(v___f_905_, 1, v_fvarId_884_);
lean_closure_set(v___f_905_, 2, v___x_902_);
lean_closure_set(v___f_905_, 3, v___x_904_);
lean_closure_set(v___f_905_, 4, v___x_903_);
lean_closure_set(v___f_905_, 5, v___x_895_);
v___x_906_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v___f_905_, v_a_885_, v_a_886_, v_a_887_, v_a_888_, v_a_889_);
return v___x_906_;
}
else
{
lean_object* v_toCold_907_; lean_object* v_options_908_; uint8_t v_hasTrace_909_; 
lean_dec(v___x_895_);
lean_dec(v_fvarId_884_);
lean_dec(v_mvarId_883_);
v_toCold_907_ = lean_ctor_get(v_a_888_, 0);
v_options_908_ = lean_ctor_get(v_toCold_907_, 2);
v_hasTrace_909_ = lean_ctor_get_uint8(v_options_908_, sizeof(void*)*1);
if (v_hasTrace_909_ == 0)
{
goto v___jp_891_;
}
else
{
lean_object* v_inheritedTraceOptions_910_; lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v_inheritedTraceOptions_910_ = lean_ctor_get(v_toCold_907_, 11);
v___x_911_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_912_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_913_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_910_, v_options_908_, v___x_912_);
if (v___x_913_ == 0)
{
goto v___jp_891_;
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__9, &l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9);
v___x_915_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_911_, v___x_914_, v_a_886_, v_a_887_, v_a_888_, v_a_889_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_dec_ref_known(v___x_915_, 1);
goto v___jp_891_;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_915_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_915_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
}
v___jp_891_:
{
uint8_t v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = 0;
v___x_893_ = lean_box(v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
return v___x_894_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object* v___x_924_, lean_object* v___x_925_, lean_object* v_as_926_, size_t v_sz_927_, size_t v_i_928_, lean_object* v_b_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_a_937_; uint8_t v___x_941_; 
v___x_941_ = lean_usize_dec_lt(v_i_928_, v_sz_927_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; 
lean_dec(v___x_925_);
lean_dec_ref(v___x_924_);
v___x_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_942_, 0, v_b_929_);
return v___x_942_;
}
else
{
lean_object* v_subst_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v_a_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
lean_dec_ref(v_b_929_);
v_subst_943_ = lean_ctor_get(v___x_924_, 2);
v___x_944_ = lean_box(0);
v___x_945_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_a_946_ = lean_array_uget_borrowed(v_as_926_, v_i_928_);
lean_inc(v_subst_943_);
v___x_947_ = l_Lean_Meta_FVarSubst_apply(v_subst_943_, v_a_946_);
v___x_948_ = l_Lean_Expr_isFVar(v___x_947_);
if (v___x_948_ == 0)
{
lean_dec_ref(v___x_947_);
v_a_937_ = v___x_945_;
goto v___jp_936_;
}
else
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = l_Lean_Expr_fvarId_x21(v___x_947_);
lean_dec_ref(v___x_947_);
lean_inc(v___x_949_);
v___x_950_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v___x_949_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; uint8_t v___x_952_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_951_);
lean_dec_ref_known(v___x_950_, 1);
v___x_952_ = lean_unbox(v_a_951_);
lean_dec(v_a_951_);
if (v___x_952_ == 0)
{
lean_dec(v___x_949_);
v_a_937_ = v___x_945_;
goto v___jp_936_;
}
else
{
lean_object* v___x_953_; 
lean_inc(v___x_925_);
v___x_953_ = l_Lean_Meta_ElimEmptyInductive_elim(v___x_925_, v___x_949_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_964_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_964_ == 0)
{
v___x_956_ = v___x_953_;
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_964_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
uint8_t v___x_958_; 
v___x_958_ = lean_unbox(v_a_954_);
if (v___x_958_ == 0)
{
lean_del_object(v___x_956_);
lean_dec(v_a_954_);
v_a_937_ = v___x_945_;
goto v___jp_936_;
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_962_; 
lean_dec(v___x_925_);
lean_dec_ref(v___x_924_);
v___x_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_959_, 0, v_a_954_);
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
lean_ctor_set(v___x_960_, 1, v___x_944_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v___x_960_);
v___x_962_ = v___x_956_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
lean_dec(v___x_925_);
lean_dec_ref(v___x_924_);
v_a_965_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_953_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_953_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_dec(v___x_949_);
lean_dec(v___x_925_);
lean_dec_ref(v___x_924_);
v_a_973_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_950_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_950_);
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
v___jp_936_:
{
size_t v___x_938_; size_t v___x_939_; 
v___x_938_ = ((size_t)1ULL);
v___x_939_ = lean_usize_add(v_i_928_, v___x_938_);
lean_inc_ref(v_a_937_);
v_i_928_ = v___x_939_;
v_b_929_ = v_a_937_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object* v_toInductionSubgoal_981_, lean_object* v_mvarId_982_, lean_object* v_fields_983_, size_t v_sz_984_, size_t v___x_985_, lean_object* v___x_986_, uint8_t v___x_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v_toInductionSubgoal_981_, v_mvarId_982_, v_fields_983_, v_sz_984_, v___x_985_, v___x_986_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1008_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1008_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1008_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v_fst_999_; 
v_fst_999_ = lean_ctor_get(v_a_995_, 0);
lean_inc(v_fst_999_);
lean_dec(v_a_995_);
if (lean_obj_tag(v_fst_999_) == 0)
{
lean_object* v___x_1000_; lean_object* v___x_1002_; 
v___x_1000_ = lean_box(v___x_987_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v___x_1000_);
v___x_1002_ = v___x_997_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_1000_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
else
{
lean_object* v_val_1004_; lean_object* v___x_1006_; 
v_val_1004_ = lean_ctor_get(v_fst_999_, 0);
lean_inc(v_val_1004_);
lean_dec_ref_known(v_fst_999_, 1);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v_val_1004_);
v___x_1006_ = v___x_997_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_val_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
v_a_1009_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_994_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_994_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object* v_val_1017_, lean_object* v_as_1018_, lean_object* v_sz_1019_, lean_object* v_i_1020_, lean_object* v_b_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
size_t v_sz_boxed_1028_; size_t v_i_boxed_1029_; lean_object* v_res_1030_; 
v_sz_boxed_1028_ = lean_unbox_usize(v_sz_1019_);
lean_dec(v_sz_1019_);
v_i_boxed_1029_ = lean_unbox_usize(v_i_1020_);
lean_dec(v_i_1020_);
v_res_1030_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_1017_, v_as_1018_, v_sz_boxed_1028_, v_i_boxed_1029_, v_b_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v_as_1018_);
lean_dec(v_val_1017_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object* v___x_1031_, lean_object* v___x_1032_, lean_object* v_as_1033_, lean_object* v_sz_1034_, lean_object* v_i_1035_, lean_object* v_b_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
size_t v_sz_boxed_1043_; size_t v_i_boxed_1044_; lean_object* v_res_1045_; 
v_sz_boxed_1043_ = lean_unbox_usize(v_sz_1034_);
lean_dec(v_sz_1034_);
v_i_boxed_1044_ = lean_unbox_usize(v_i_1035_);
lean_dec(v_i_1035_);
v_res_1045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v___x_1031_, v___x_1032_, v_as_1033_, v_sz_boxed_1043_, v_i_boxed_1044_, v_b_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v_as_1033_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object* v_mvarId_1046_, lean_object* v_fvarId_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Meta_ElimEmptyInductive_elim(v_mvarId_1046_, v_fvarId_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec(v_a_1048_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object* v_cls_1055_, lean_object* v_msg_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_1055_, v_msg_1056_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object* v_cls_1064_, lean_object* v_msg_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(v_cls_1064_, v_msg_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object* v_x_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Lean_Meta_saveState___redArg(v___y_1075_, v___y_1077_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___y_1082_; lean_object* v_a_1083_; lean_object* v___x_1103_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1079_, 1);
lean_inc(v___y_1077_);
lean_inc_ref(v___y_1076_);
lean_inc(v___y_1075_);
lean_inc_ref(v___y_1074_);
v___x_1103_ = lean_apply_5(v_x_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, lean_box(0));
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; uint8_t v___x_1105_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
v___x_1105_ = lean_unbox(v_a_1104_);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; 
lean_dec_ref_known(v___x_1103_, 1);
lean_inc(v_a_1080_);
v___x_1106_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1080_, v___y_1075_, v___y_1077_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec(v_a_1080_);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1113_ == 0)
{
lean_object* v_unused_1114_; 
v_unused_1114_ = lean_ctor_get(v___x_1106_, 0);
lean_dec(v_unused_1114_);
v___x_1108_ = v___x_1106_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_dec(v___x_1106_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v_a_1104_);
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1104_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec(v_a_1104_);
v_a_1115_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1106_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1106_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
lean_inc(v_a_1115_);
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
v___y_1082_ = v___x_1120_;
v_a_1083_ = v_a_1115_;
goto v___jp_1081_;
}
}
}
}
else
{
lean_dec(v_a_1104_);
lean_dec(v_a_1080_);
return v___x_1103_;
}
}
else
{
lean_object* v_a_1123_; 
v_a_1123_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1123_);
v___y_1082_ = v___x_1103_;
v_a_1083_ = v_a_1123_;
goto v___jp_1081_;
}
v___jp_1081_:
{
uint8_t v___x_1084_; 
v___x_1084_ = l_Lean_Exception_isInterrupt(v_a_1083_);
if (v___x_1084_ == 0)
{
uint8_t v___x_1085_; 
lean_inc_ref(v_a_1083_);
v___x_1085_ = l_Lean_Exception_isRuntime(v_a_1083_);
if (v___x_1085_ == 0)
{
lean_object* v___x_1086_; 
lean_dec_ref(v___y_1082_);
v___x_1086_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1080_, v___y_1075_, v___y_1077_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1093_ == 0)
{
lean_object* v_unused_1094_; 
v_unused_1094_ = lean_ctor_get(v___x_1086_, 0);
lean_dec(v_unused_1094_);
v___x_1088_ = v___x_1086_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_dec(v___x_1086_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
lean_ctor_set_tag(v___x_1088_, 1);
lean_ctor_set(v___x_1088_, 0, v_a_1083_);
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1083_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_dec_ref(v_a_1083_);
v_a_1095_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1086_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1086_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
else
{
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1080_);
return v___y_1082_;
}
}
else
{
lean_dec_ref(v_a_1083_);
lean_dec(v_a_1080_);
return v___y_1082_;
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec_ref(v_x_1073_);
v_a_1124_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1079_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1079_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object* v_x_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v_x_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object* v_mvarId_1139_, lean_object* v_x_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1139_, v_x_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1147_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
else
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1162_; 
v_a_1155_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1157_ = v___x_1146_;
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v___x_1146_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1160_; 
if (v_isShared_1158_ == 0)
{
v___x_1160_ = v___x_1157_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_a_1155_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object* v_mvarId_1163_, lean_object* v_x_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1163_, v_x_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object* v_00_u03b1_1171_, lean_object* v_mvarId_1172_, lean_object* v_x_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1172_, v_x_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object* v_00_u03b1_1180_, lean_object* v_mvarId_1181_, lean_object* v_x_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(v_00_u03b1_1180_, v_mvarId_1181_, v_x_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object* v_mvarId_1189_, lean_object* v_fuel_1190_, lean_object* v_fvarId_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_Lean_MVarId_exfalso(v_mvarId_1189_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1199_ = lean_st_mk_ref(v_fuel_1190_);
v___x_1200_ = l_Lean_Meta_ElimEmptyInductive_elim(v_a_1198_, v_fvarId_1191_, v___x_1199_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1209_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1203_ = v___x_1200_;
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1209_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = lean_st_ref_get(v___x_1199_);
lean_dec(v___x_1199_);
lean_dec(v___x_1205_);
if (v_isShared_1204_ == 0)
{
v___x_1207_ = v___x_1203_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1201_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
else
{
lean_dec(v___x_1199_);
return v___x_1200_;
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec(v_fvarId_1191_);
lean_dec(v_fuel_1190_);
v_a_1210_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1197_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1197_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object* v_mvarId_1218_, lean_object* v_fuel_1219_, lean_object* v_fvarId_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(v_mvarId_1218_, v_fuel_1219_, v_fvarId_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object* v_fvarId_1227_, lean_object* v___f_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_1227_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
if (lean_obj_tag(v___x_1234_) == 0)
{
lean_object* v_a_1235_; uint8_t v___x_1236_; 
v_a_1235_ = lean_ctor_get(v___x_1234_, 0);
v___x_1236_ = lean_unbox(v_a_1235_);
if (v___x_1236_ == 0)
{
lean_dec_ref(v___f_1228_);
return v___x_1234_;
}
else
{
lean_object* v___x_1237_; 
lean_dec_ref_known(v___x_1234_, 1);
v___x_1237_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v___f_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
return v___x_1237_;
}
}
else
{
lean_dec_ref(v___f_1228_);
return v___x_1234_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object* v_fvarId_1238_, lean_object* v___f_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(v_fvarId_1238_, v___f_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object* v_mvarId_1246_, lean_object* v_fvarId_1247_, lean_object* v_fuel_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___x_1256_; 
lean_inc(v_fvarId_1247_);
lean_inc(v_mvarId_1246_);
v___f_1254_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1254_, 0, v_mvarId_1246_);
lean_closure_set(v___f_1254_, 1, v_fuel_1248_);
lean_closure_set(v___f_1254_, 2, v_fvarId_1247_);
v___f_1255_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1255_, 0, v_fvarId_1247_);
lean_closure_set(v___f_1255_, 1, v___f_1254_);
v___x_1256_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1246_, v___f_1255_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object* v_mvarId_1257_, lean_object* v_fvarId_1258_, lean_object* v_fuel_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1257_, v_fvarId_1258_, v_fuel_1259_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_);
lean_dec(v_a_1263_);
lean_dec_ref(v_a_1262_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
return v_res_1265_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object* v_e_1266_){
_start:
{
uint8_t v___x_1267_; 
v___x_1267_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_e_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object* v_e_1268_){
_start:
{
uint8_t v_res_1269_; lean_object* v_r_1270_; 
v_res_1269_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(v_e_1268_);
lean_dec_ref(v_e_1268_);
v_r_1270_ = lean_box(v_res_1269_);
return v_r_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object* v_e_1271_, lean_object* v_acc_1272_){
_start:
{
if (lean_obj_tag(v_e_1271_) == 7)
{
lean_object* v_binderType_1273_; lean_object* v_body_1274_; uint8_t v___y_1276_; lean_object* v___x_1280_; uint8_t v___x_1281_; 
v_binderType_1273_ = lean_ctor_get(v_e_1271_, 1);
v_body_1274_ = lean_ctor_get(v_e_1271_, 2);
v___x_1280_ = lean_unsigned_to_nat(0u);
v___x_1281_ = lean_expr_has_loose_bvar(v_body_1274_, v___x_1280_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; 
v___x_1282_ = l_Lean_Expr_isEq(v_binderType_1273_);
if (v___x_1282_ == 0)
{
uint8_t v___x_1283_; 
v___x_1283_ = l_Lean_Expr_isHEq(v_binderType_1273_);
v___y_1276_ = v___x_1283_;
goto v___jp_1275_;
}
else
{
v___y_1276_ = v___x_1282_;
goto v___jp_1275_;
}
}
else
{
uint8_t v___x_1284_; 
v___x_1284_ = 0;
v___y_1276_ = v___x_1284_;
goto v___jp_1275_;
}
v___jp_1275_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = lean_box(v___y_1276_);
v___x_1278_ = lean_array_push(v_acc_1272_, v___x_1277_);
v_e_1271_ = v_body_1274_;
v_acc_1272_ = v___x_1278_;
goto _start;
}
}
else
{
return v_acc_1272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object* v_e_1285_, lean_object* v_acc_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1285_, v_acc_1286_);
lean_dec_ref(v_e_1285_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object* v_e_1290_){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = ((lean_object*)(l_Lean_Meta_mkGenDiseqMask___closed__0));
v___x_1292_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1290_, v___x_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object* v_e_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_Meta_mkGenDiseqMask(v_e_1293_);
lean_dec_ref(v_e_1293_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object* v_msg_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v___f_1302_; lean_object* v___x_4710__overap_1303_; lean_object* v___x_1304_; 
v___f_1302_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0));
v___x_4710__overap_1303_ = lean_panic_fn_borrowed(v___f_1302_, v_msg_1296_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1299_);
lean_inc(v___y_1298_);
lean_inc_ref(v___y_1297_);
v___x_1304_ = lean_apply_5(v___x_4710__overap_1303_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, lean_box(0));
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object* v_msg_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v_msg_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object* v_e_1312_, lean_object* v___y_1313_){
_start:
{
uint8_t v___x_1315_; 
v___x_1315_ = l_Lean_Expr_hasMVar(v_e_1312_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; 
v___x_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1316_, 0, v_e_1312_);
return v___x_1316_;
}
else
{
lean_object* v___x_1317_; lean_object* v_mctx_1318_; lean_object* v___x_1319_; lean_object* v_fst_1320_; lean_object* v_snd_1321_; lean_object* v___x_1322_; lean_object* v_cache_1323_; lean_object* v_zetaDeltaFVarIds_1324_; lean_object* v_postponed_1325_; lean_object* v_diag_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1335_; 
v___x_1317_ = lean_st_ref_get(v___y_1313_);
v_mctx_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc_ref(v_mctx_1318_);
lean_dec(v___x_1317_);
v___x_1319_ = l_Lean_instantiateMVarsCore(v_mctx_1318_, v_e_1312_);
v_fst_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_fst_1320_);
v_snd_1321_ = lean_ctor_get(v___x_1319_, 1);
lean_inc(v_snd_1321_);
lean_dec_ref(v___x_1319_);
v___x_1322_ = lean_st_ref_take(v___y_1313_);
v_cache_1323_ = lean_ctor_get(v___x_1322_, 1);
v_zetaDeltaFVarIds_1324_ = lean_ctor_get(v___x_1322_, 2);
v_postponed_1325_ = lean_ctor_get(v___x_1322_, 3);
v_diag_1326_ = lean_ctor_get(v___x_1322_, 4);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1335_ == 0)
{
lean_object* v_unused_1336_; 
v_unused_1336_ = lean_ctor_get(v___x_1322_, 0);
lean_dec(v_unused_1336_);
v___x_1328_ = v___x_1322_;
v_isShared_1329_ = v_isSharedCheck_1335_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_diag_1326_);
lean_inc(v_postponed_1325_);
lean_inc(v_zetaDeltaFVarIds_1324_);
lean_inc(v_cache_1323_);
lean_dec(v___x_1322_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1335_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
lean_ctor_set(v___x_1328_, 0, v_snd_1321_);
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_snd_1321_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v_cache_1323_);
lean_ctor_set(v_reuseFailAlloc_1334_, 2, v_zetaDeltaFVarIds_1324_);
lean_ctor_set(v_reuseFailAlloc_1334_, 3, v_postponed_1325_);
lean_ctor_set(v_reuseFailAlloc_1334_, 4, v_diag_1326_);
v___x_1331_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = lean_st_ref_put(v___y_1313_, v___x_1331_);
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v_fst_1320_);
return v___x_1333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object* v_e_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1337_, v___y_1338_);
lean_dec(v___y_1338_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object* v_e_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1341_, v___y_1343_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object* v_e_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(v_e_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object* v_k_1355_, uint8_t v_allowLevelAssignments_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v___x_1362_; 
v___x_1362_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1356_, v_k_1355_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object* v_k_1379_, lean_object* v_allowLevelAssignments_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1386_; lean_object* v_res_1387_; 
v_allowLevelAssignments_boxed_1386_ = lean_unbox(v_allowLevelAssignments_1380_);
v_res_1387_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1379_, v_allowLevelAssignments_boxed_1386_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object* v_00_u03b1_1388_, lean_object* v_k_1389_, uint8_t v_allowLevelAssignments_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1389_, v_allowLevelAssignments_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object* v_00_u03b1_1397_, lean_object* v_k_1398_, lean_object* v_allowLevelAssignments_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1405_; lean_object* v_res_1406_; 
v_allowLevelAssignments_boxed_1405_ = lean_unbox(v_allowLevelAssignments_1399_);
v_res_1406_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(v_00_u03b1_1397_, v_k_1398_, v_allowLevelAssignments_boxed_1405_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object* v_as_1409_, size_t v_sz_1410_, size_t v_i_1411_, lean_object* v_b_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v_a_1419_; uint8_t v___x_1423_; 
v___x_1423_ = lean_usize_dec_lt(v_i_1411_, v_sz_1410_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; 
v___x_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1424_, 0, v_b_1412_);
return v___x_1424_;
}
else
{
lean_object* v_snd_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1587_; 
v_snd_1425_ = lean_ctor_get(v_b_1412_, 1);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_b_1412_);
if (v_isSharedCheck_1587_ == 0)
{
lean_object* v_unused_1588_; 
v_unused_1588_ = lean_ctor_get(v_b_1412_, 0);
lean_dec(v_unused_1588_);
v___x_1427_ = v_b_1412_;
v_isShared_1428_ = v_isSharedCheck_1587_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_snd_1425_);
lean_dec(v_b_1412_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1587_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v_array_1429_; lean_object* v_start_1430_; lean_object* v_stop_1431_; lean_object* v___x_1432_; uint8_t v___x_1433_; 
v_array_1429_ = lean_ctor_get(v_snd_1425_, 0);
v_start_1430_ = lean_ctor_get(v_snd_1425_, 1);
v_stop_1431_ = lean_ctor_get(v_snd_1425_, 2);
v___x_1432_ = lean_box(0);
v___x_1433_ = lean_nat_dec_lt(v_start_1430_, v_stop_1431_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1435_; 
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1432_);
v___x_1435_ = v___x_1427_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1437_, 1, v_snd_1425_);
v___x_1435_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
return v___x_1436_;
}
}
else
{
lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1583_; 
lean_inc(v_stop_1431_);
lean_inc(v_start_1430_);
lean_inc_ref(v_array_1429_);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_snd_1425_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; lean_object* v_unused_1585_; lean_object* v_unused_1586_; 
v_unused_1584_ = lean_ctor_get(v_snd_1425_, 2);
lean_dec(v_unused_1584_);
v_unused_1585_ = lean_ctor_get(v_snd_1425_, 1);
lean_dec(v_unused_1585_);
v_unused_1586_ = lean_ctor_get(v_snd_1425_, 0);
lean_dec(v_unused_1586_);
v___x_1439_ = v_snd_1425_;
v_isShared_1440_ = v_isSharedCheck_1583_;
goto v_resetjp_1438_;
}
else
{
lean_dec(v_snd_1425_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1583_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1441_ = lean_array_fget(v_array_1429_, v_start_1430_);
v___x_1442_ = lean_unsigned_to_nat(1u);
v___x_1443_ = lean_nat_add(v_start_1430_, v___x_1442_);
lean_dec(v_start_1430_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 1, v___x_1443_);
v___x_1445_ = v___x_1439_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_array_1429_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1582_, 2, v_stop_1431_);
v___x_1445_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
uint8_t v___x_1446_; 
v___x_1446_ = lean_unbox(v___x_1441_);
lean_dec(v___x_1441_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1448_; 
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 1, v___x_1445_);
lean_ctor_set(v___x_1427_, 0, v___x_1432_);
v___x_1448_ = v___x_1427_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v___x_1445_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
v_a_1419_ = v___x_1448_;
goto v___jp_1418_;
}
}
else
{
lean_object* v_a_1450_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___x_1522_; 
v_a_1450_ = lean_array_uget_borrowed(v_as_1409_, v_i_1411_);
lean_inc(v___y_1416_);
lean_inc_ref(v___y_1415_);
lean_inc(v___y_1414_);
lean_inc_ref(v___y_1413_);
lean_inc(v_a_1450_);
v___x_1522_ = lean_infer_type(v_a_1450_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1524_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1523_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1524_ = l_Lean_Meta_matchEq_x3f(v_a_1523_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1524_, 1);
if (lean_obj_tag(v_a_1525_) == 1)
{
lean_object* v_val_1526_; lean_object* v_snd_1527_; lean_object* v_fst_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1564_; 
v_val_1526_ = lean_ctor_get(v_a_1525_, 0);
lean_inc(v_val_1526_);
lean_dec_ref_known(v_a_1525_, 1);
v_snd_1527_ = lean_ctor_get(v_val_1526_, 1);
lean_inc(v_snd_1527_);
lean_dec(v_val_1526_);
v_fst_1528_ = lean_ctor_get(v_snd_1527_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_snd_1527_);
if (v_isSharedCheck_1564_ == 0)
{
lean_object* v_unused_1565_; 
v_unused_1565_ = lean_ctor_get(v_snd_1527_, 1);
lean_dec(v_unused_1565_);
v___x_1530_ = v_snd_1527_;
v_isShared_1531_ = v_isSharedCheck_1564_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_fst_1528_);
lean_dec(v_snd_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1564_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Lean_Meta_mkEqRefl(v_fst_1528_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1534_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v___x_1532_, 1);
lean_inc(v_a_1450_);
v___x_1534_ = l_Lean_Meta_isExprDefEq(v_a_1450_, v_a_1533_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1547_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1537_ = v___x_1534_;
v_isShared_1538_ = v_isSharedCheck_1547_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1534_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1547_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
uint8_t v___x_1539_; 
v___x_1539_ = lean_unbox(v_a_1535_);
lean_dec(v_a_1535_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
lean_del_object(v___x_1427_);
v___x_1540_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 1, v___x_1445_);
lean_ctor_set(v___x_1530_, 0, v___x_1540_);
v___x_1542_ = v___x_1530_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v___x_1445_);
v___x_1542_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1544_; 
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 0, v___x_1542_);
v___x_1544_ = v___x_1537_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
else
{
lean_del_object(v___x_1537_);
lean_del_object(v___x_1530_);
v___y_1452_ = v___y_1413_;
v___y_1453_ = v___y_1414_;
v___y_1454_ = v___y_1415_;
v___y_1455_ = v___y_1416_;
goto v___jp_1451_;
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_del_object(v___x_1530_);
lean_dec_ref(v___x_1445_);
lean_del_object(v___x_1427_);
v_a_1548_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1534_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1534_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_del_object(v___x_1530_);
lean_dec_ref(v___x_1445_);
lean_del_object(v___x_1427_);
v_a_1556_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1532_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1532_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
else
{
lean_dec(v_a_1525_);
v___y_1452_ = v___y_1413_;
v___y_1453_ = v___y_1414_;
v___y_1454_ = v___y_1415_;
v___y_1455_ = v___y_1416_;
goto v___jp_1451_;
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_dec_ref(v___x_1445_);
lean_del_object(v___x_1427_);
v_a_1566_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1524_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1524_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec_ref(v___x_1445_);
lean_del_object(v___x_1427_);
v_a_1574_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1522_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1522_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
v___jp_1451_:
{
lean_object* v___x_1456_; 
lean_inc(v___y_1455_);
lean_inc_ref(v___y_1454_);
lean_inc(v___y_1453_);
lean_inc_ref(v___y_1452_);
lean_inc(v_a_1450_);
v___x_1456_ = lean_infer_type(v_a_1450_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1458_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1456_, 1);
v___x_1458_ = l_Lean_Meta_matchHEq_x3f(v_a_1457_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
if (lean_obj_tag(v___x_1458_) == 0)
{
lean_object* v_a_1459_; 
v_a_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_a_1459_);
lean_dec_ref_known(v___x_1458_, 1);
if (lean_obj_tag(v_a_1459_) == 1)
{
lean_object* v_val_1460_; lean_object* v_snd_1461_; lean_object* v_fst_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1501_; 
lean_del_object(v___x_1427_);
v_val_1460_ = lean_ctor_get(v_a_1459_, 0);
lean_inc(v_val_1460_);
lean_dec_ref_known(v_a_1459_, 1);
v_snd_1461_ = lean_ctor_get(v_val_1460_, 1);
lean_inc(v_snd_1461_);
lean_dec(v_val_1460_);
v_fst_1462_ = lean_ctor_get(v_snd_1461_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_snd_1461_);
if (v_isSharedCheck_1501_ == 0)
{
lean_object* v_unused_1502_; 
v_unused_1502_ = lean_ctor_get(v_snd_1461_, 1);
lean_dec(v_unused_1502_);
v___x_1464_ = v_snd_1461_;
v_isShared_1465_ = v_isSharedCheck_1501_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_fst_1462_);
lean_dec(v_snd_1461_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1501_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lean_Meta_mkHEqRefl(v_fst_1462_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1468_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
lean_inc(v_a_1450_);
v___x_1468_ = l_Lean_Meta_isExprDefEq(v_a_1450_, v_a_1467_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1484_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1471_ = v___x_1468_;
v_isShared_1472_ = v_isSharedCheck_1484_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1484_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
uint8_t v___x_1473_; 
v___x_1473_ = lean_unbox(v_a_1469_);
lean_dec(v_a_1469_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
v___x_1474_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 1, v___x_1445_);
lean_ctor_set(v___x_1464_, 0, v___x_1474_);
v___x_1476_ = v___x_1464_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1474_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v___x_1445_);
v___x_1476_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
lean_object* v___x_1478_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1476_);
v___x_1478_ = v___x_1471_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v___x_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
else
{
lean_object* v___x_1482_; 
lean_del_object(v___x_1471_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 1, v___x_1445_);
lean_ctor_set(v___x_1464_, 0, v___x_1432_);
v___x_1482_ = v___x_1464_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v___x_1445_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
v_a_1419_ = v___x_1482_;
goto v___jp_1418_;
}
}
}
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_del_object(v___x_1464_);
lean_dec_ref(v___x_1445_);
v_a_1485_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1468_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1468_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
lean_del_object(v___x_1464_);
lean_dec_ref(v___x_1445_);
v_a_1493_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1495_ = v___x_1466_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1466_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1493_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
else
{
lean_object* v___x_1504_; 
lean_dec(v_a_1459_);
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 1, v___x_1445_);
lean_ctor_set(v___x_1427_, 0, v___x_1432_);
v___x_1504_ = v___x_1427_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v___x_1445_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
v_a_1419_ = v___x_1504_;
goto v___jp_1418_;
}
}
}
else
{
lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1513_; 
lean_dec_ref(v___x_1445_);
lean_del_object(v___x_1427_);
v_a_1506_ = lean_ctor_get(v___x_1458_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1508_ = v___x_1458_;
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_dec(v___x_1458_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1511_; 
if (v_isShared_1509_ == 0)
{
v___x_1511_ = v___x_1508_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1506_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
lean_dec_ref(v___x_1445_);
lean_del_object(v___x_1427_);
v_a_1514_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1456_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1456_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
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
v___jp_1418_:
{
size_t v___x_1420_; size_t v___x_1421_; 
v___x_1420_ = ((size_t)1ULL);
v___x_1421_ = lean_usize_add(v_i_1411_, v___x_1420_);
v_i_1411_ = v___x_1421_;
v_b_1412_ = v_a_1419_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object* v_as_1589_, lean_object* v_sz_1590_, lean_object* v_i_1591_, lean_object* v_b_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
size_t v_sz_boxed_1598_; size_t v_i_boxed_1599_; lean_object* v_res_1600_; 
v_sz_boxed_1598_ = lean_unbox_usize(v_sz_1590_);
lean_dec(v_sz_1590_);
v_i_boxed_1599_ = lean_unbox_usize(v_i_1591_);
lean_dec(v_i_1591_);
v_res_1600_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_as_1589_, v_sz_boxed_1598_, v_i_boxed_1599_, v_b_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec_ref(v_as_1589_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object* v___x_1601_, uint8_t v___x_1602_, lean_object* v_localDecl_1603_, lean_object* v_mvarId_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v___x_1610_; 
lean_inc_ref(v___x_1601_);
v___x_1610_ = l_Lean_Meta_forallMetaTelescope(v___x_1601_, v___x_1602_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; lean_object* v_fst_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1701_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1611_);
lean_dec_ref_known(v___x_1610_, 1);
v_fst_1612_ = lean_ctor_get(v_a_1611_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_a_1611_);
if (v_isSharedCheck_1701_ == 0)
{
lean_object* v_unused_1702_; 
v_unused_1702_ = lean_ctor_get(v_a_1611_, 1);
lean_dec(v_unused_1702_);
v___x_1614_ = v_a_1611_;
v_isShared_1615_ = v_isSharedCheck_1701_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_fst_1612_);
lean_dec(v_a_1611_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1701_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
v___x_1616_ = l_Lean_Meta_mkGenDiseqMask(v___x_1601_);
lean_dec_ref(v___x_1601_);
v___x_1617_ = lean_unsigned_to_nat(0u);
v___x_1618_ = lean_array_get_size(v___x_1616_);
v___x_1619_ = l_Array_toSubarray___redArg(v___x_1616_, v___x_1617_, v___x_1618_);
v___x_1620_ = lean_box(0);
if (v_isShared_1615_ == 0)
{
lean_ctor_set(v___x_1614_, 1, v___x_1619_);
lean_ctor_set(v___x_1614_, 0, v___x_1620_);
v___x_1622_ = v___x_1614_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v___x_1619_);
v___x_1622_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
size_t v_sz_1623_; size_t v___x_1624_; lean_object* v___x_1625_; 
v_sz_1623_ = lean_array_size(v_fst_1612_);
v___x_1624_ = ((size_t)0ULL);
v___x_1625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_fst_1612_, v_sz_1623_, v___x_1624_, v___x_1622_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1691_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1691_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1691_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v_fst_1630_; 
v_fst_1630_ = lean_ctor_get(v_a_1626_, 0);
lean_inc(v_fst_1630_);
lean_dec(v_a_1626_);
if (lean_obj_tag(v_fst_1630_) == 0)
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1686_; 
lean_del_object(v___x_1628_);
v___x_1631_ = l_Lean_LocalDecl_toExpr(v_localDecl_1603_);
v___x_1632_ = l_Lean_mkAppN(v___x_1631_, v_fst_1612_);
lean_dec(v_fst_1612_);
v___x_1633_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1632_, v___y_1606_);
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1636_ = v___x_1633_;
v_isShared_1637_ = v_isSharedCheck_1686_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1686_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1638_; 
lean_inc(v_a_1634_);
v___x_1638_ = l_Lean_Meta_hasAssignableMVar(v_a_1634_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1677_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1677_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1677_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
uint8_t v___x_1643_; 
v___x_1643_ = lean_unbox(v_a_1639_);
lean_dec(v_a_1639_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; 
lean_del_object(v___x_1641_);
v___x_1644_ = l_Lean_MVarId_getType(v_mvarId_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v_a_1645_; lean_object* v___x_1646_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
lean_inc(v_a_1645_);
lean_dec_ref_known(v___x_1644_, 1);
v___x_1646_ = l_Lean_Meta_mkFalseElim(v_a_1645_, v_a_1634_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1657_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1649_ = v___x_1646_;
v_isShared_1650_ = v_isSharedCheck_1657_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1646_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1657_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1637_ == 0)
{
lean_ctor_set_tag(v___x_1636_, 1);
lean_ctor_set(v___x_1636_, 0, v_a_1647_);
v___x_1652_ = v___x_1636_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
lean_object* v___x_1654_; 
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 0, v___x_1652_);
v___x_1654_ = v___x_1649_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1652_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
lean_del_object(v___x_1636_);
v_a_1658_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1646_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1646_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
v_a_1666_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1644_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1644_);
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
else
{
lean_object* v___x_1675_; 
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
lean_dec(v_mvarId_1604_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 0, v___x_1620_);
v___x_1675_ = v___x_1641_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v___x_1620_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_del_object(v___x_1636_);
lean_dec(v_a_1634_);
lean_dec(v_mvarId_1604_);
v_a_1678_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1638_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1638_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
}
else
{
lean_object* v_val_1687_; lean_object* v___x_1689_; 
lean_dec(v_fst_1612_);
lean_dec(v_mvarId_1604_);
lean_dec_ref(v_localDecl_1603_);
v_val_1687_ = lean_ctor_get(v_fst_1630_, 0);
lean_inc(v_val_1687_);
lean_dec_ref_known(v_fst_1630_, 1);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_val_1687_);
v___x_1689_ = v___x_1628_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_val_1687_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
else
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
lean_dec(v_fst_1612_);
lean_dec(v_mvarId_1604_);
lean_dec_ref(v_localDecl_1603_);
v_a_1692_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v___x_1625_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1625_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec(v_mvarId_1604_);
lean_dec_ref(v_localDecl_1603_);
lean_dec_ref(v___x_1601_);
v_a_1703_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1610_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1610_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object* v___x_1711_, lean_object* v___x_1712_, lean_object* v_localDecl_1713_, lean_object* v_mvarId_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
uint8_t v___x_6385__boxed_1720_; lean_object* v_res_1721_; 
v___x_6385__boxed_1720_ = lean_unbox(v___x_1712_);
v_res_1721_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(v___x_1711_, v___x_6385__boxed_1720_, v_localDecl_1713_, v_mvarId_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
return v_res_1721_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3(void){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1725_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2));
v___x_1726_ = lean_unsigned_to_nat(2u);
v___x_1727_ = lean_unsigned_to_nat(121u);
v___x_1728_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1));
v___x_1729_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0));
v___x_1730_ = l_mkPanicMessageWithDecl(v___x_1729_, v___x_1728_, v___x_1727_, v___x_1726_, v___x_1725_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object* v_mvarId_1731_, lean_object* v_localDecl_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_){
_start:
{
lean_object* v___x_1738_; uint8_t v___x_1739_; 
v___x_1738_ = l_Lean_LocalDecl_type(v_localDecl_1732_);
v___x_1739_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1738_);
if (v___x_1739_ == 0)
{
lean_object* v___x_1740_; lean_object* v___x_1741_; 
lean_dec_ref(v___x_1738_);
lean_dec_ref(v_localDecl_1732_);
lean_dec(v_mvarId_1731_);
v___x_1740_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3);
v___x_1741_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v___x_1740_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_);
return v___x_1741_;
}
else
{
uint8_t v___x_1742_; lean_object* v___x_1743_; lean_object* v___f_1744_; uint8_t v___x_1745_; lean_object* v___x_1746_; 
v___x_1742_ = 0;
v___x_1743_ = lean_box(v___x_1742_);
lean_inc(v_mvarId_1731_);
v___f_1744_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1744_, 0, v___x_1738_);
lean_closure_set(v___f_1744_, 1, v___x_1743_);
lean_closure_set(v___f_1744_, 2, v_localDecl_1732_);
lean_closure_set(v___f_1744_, 3, v_mvarId_1731_);
v___x_1745_ = 0;
v___x_1746_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v___f_1744_, v___x_1745_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1766_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1749_ = v___x_1746_;
v_isShared_1750_ = v_isSharedCheck_1766_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1746_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1766_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
if (lean_obj_tag(v_a_1747_) == 1)
{
lean_object* v_val_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1760_; 
lean_del_object(v___x_1749_);
v_val_1751_ = lean_ctor_get(v_a_1747_, 0);
lean_inc(v_val_1751_);
lean_dec_ref_known(v_a_1747_, 1);
v___x_1752_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1731_, v_val_1751_, v_a_1734_);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1760_ == 0)
{
lean_object* v_unused_1761_; 
v_unused_1761_ = lean_ctor_get(v___x_1752_, 0);
lean_dec(v_unused_1761_);
v___x_1754_ = v___x_1752_;
v_isShared_1755_ = v_isSharedCheck_1760_;
goto v_resetjp_1753_;
}
else
{
lean_dec(v___x_1752_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1760_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1756_ = lean_box(v___x_1739_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 0, v___x_1756_);
v___x_1758_ = v___x_1754_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
lean_dec(v_a_1747_);
lean_dec(v_mvarId_1731_);
v___x_1762_ = lean_box(v___x_1745_);
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 0, v___x_1762_);
v___x_1764_ = v___x_1749_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
else
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec(v_mvarId_1731_);
v_a_1767_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1746_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1746_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object* v_mvarId_1775_, lean_object* v_localDecl_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1775_, v_localDecl_1776_, v_a_1777_, v_a_1778_, v_a_1779_, v_a_1780_);
lean_dec(v_a_1780_);
lean_dec_ref(v_a_1779_);
lean_dec(v_a_1778_);
lean_dec_ref(v_a_1777_);
return v_res_1782_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(lean_object* v_x_1783_, lean_object* v_x_1784_){
_start:
{
if (lean_obj_tag(v_x_1783_) == 0)
{
if (lean_obj_tag(v_x_1784_) == 0)
{
uint8_t v___x_1785_; 
v___x_1785_ = 1;
return v___x_1785_;
}
else
{
uint8_t v___x_1786_; 
v___x_1786_ = 0;
return v___x_1786_;
}
}
else
{
if (lean_obj_tag(v_x_1784_) == 0)
{
uint8_t v___x_1787_; 
v___x_1787_ = 0;
return v___x_1787_;
}
else
{
lean_object* v_val_1788_; uint8_t v___x_1789_; 
v_val_1788_ = lean_ctor_get(v_x_1784_, 0);
v___x_1789_ = lean_unbox(v_val_1788_);
if (v___x_1789_ == 0)
{
lean_object* v_val_1790_; uint8_t v___x_1791_; 
v_val_1790_ = lean_ctor_get(v_x_1783_, 0);
v___x_1791_ = lean_unbox(v_val_1790_);
if (v___x_1791_ == 0)
{
uint8_t v___x_1792_; 
v___x_1792_ = 1;
return v___x_1792_;
}
else
{
uint8_t v___x_1793_; 
v___x_1793_ = lean_unbox(v_val_1788_);
return v___x_1793_;
}
}
else
{
lean_object* v_val_1794_; uint8_t v___x_1795_; 
v_val_1794_ = lean_ctor_get(v_x_1783_, 0);
v___x_1795_ = lean_unbox(v_val_1794_);
return v___x_1795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0___boxed(lean_object* v_x_1796_, lean_object* v_x_1797_){
_start:
{
uint8_t v_res_1798_; lean_object* v_r_1799_; 
v_res_1798_ = l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(v_x_1796_, v_x_1797_);
lean_dec(v_x_1797_);
lean_dec(v_x_1796_);
v_r_1799_ = lean_box(v_res_1798_);
return v_r_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0(lean_object* v_lhs_1803_, lean_object* v_rhs_1804_, lean_object* v_mvarId_1805_, lean_object* v_h_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
lean_object* v___x_1812_; 
lean_inc_ref(v_rhs_1804_);
lean_inc_ref(v_lhs_1803_);
v___x_1812_ = l_Lean_Meta_floatLitValuesEq_x3f(v_lhs_1803_, v_rhs_1804_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1874_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1815_ = v___x_1812_;
v_isShared_1816_ = v_isSharedCheck_1874_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1812_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1874_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; uint8_t v___x_1818_; 
v___x_1817_ = ((lean_object*)(l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___closed__0));
v___x_1818_ = l_instBEqOption_beq___at___00Lean_MVarId_closeIfDistinctFloatLits_spec__0(v_a_1813_, v___x_1817_);
lean_dec(v_a_1813_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
lean_dec_ref(v_h_1806_);
lean_dec(v_mvarId_1805_);
lean_dec_ref(v_rhs_1804_);
lean_dec_ref(v_lhs_1803_);
v___x_1819_ = lean_box(v___x_1818_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v___x_1819_);
v___x_1821_ = v___x_1815_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
else
{
lean_object* v___x_1823_; 
lean_del_object(v___x_1815_);
v___x_1823_ = l_Lean_Meta_mkEq(v_lhs_1803_, v_rhs_1804_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = l_Lean_mkNot(v_a_1824_);
v___x_1826_ = l_Lean_Meta_mkDecideProof(v___x_1825_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1828_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v___x_1826_, 1);
lean_inc(v_mvarId_1805_);
v___x_1828_ = l_Lean_MVarId_getType(v_mvarId_1805_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1830_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v___x_1830_ = l_Lean_Meta_mkAbsurd(v_a_1829_, v_h_1806_, v_a_1827_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; lean_object* v___x_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1840_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1832_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1805_, v_a_1831_, v___y_1808_);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1840_ == 0)
{
lean_object* v_unused_1841_; 
v_unused_1841_ = lean_ctor_get(v___x_1832_, 0);
lean_dec(v_unused_1841_);
v___x_1834_ = v___x_1832_;
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
else
{
lean_dec(v___x_1832_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1836_ = lean_box(v___x_1818_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1836_);
v___x_1838_ = v___x_1834_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
lean_dec(v_mvarId_1805_);
v_a_1842_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1830_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1830_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_dec(v_a_1827_);
lean_dec_ref(v_h_1806_);
lean_dec(v_mvarId_1805_);
v_a_1850_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1828_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1828_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
lean_dec_ref(v_h_1806_);
lean_dec(v_mvarId_1805_);
v_a_1858_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1826_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1826_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_dec_ref(v_h_1806_);
lean_dec(v_mvarId_1805_);
v_a_1866_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1823_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1823_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec_ref(v_h_1806_);
lean_dec(v_mvarId_1805_);
lean_dec_ref(v_rhs_1804_);
lean_dec_ref(v_lhs_1803_);
v_a_1875_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1812_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1812_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___boxed(lean_object* v_lhs_1883_, lean_object* v_rhs_1884_, lean_object* v_mvarId_1885_, lean_object* v_h_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lean_MVarId_closeIfDistinctFloatLits___lam__0(v_lhs_1883_, v_rhs_1884_, v_mvarId_1885_, v_h_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits(lean_object* v_mvarId_1893_, lean_object* v_h_1894_, lean_object* v_lhs_1895_, lean_object* v_rhs_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_){
_start:
{
lean_object* v___f_1902_; lean_object* v___x_1903_; 
lean_inc(v_mvarId_1893_);
v___f_1902_ = lean_alloc_closure((void*)(l_Lean_MVarId_closeIfDistinctFloatLits___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1902_, 0, v_lhs_1895_);
lean_closure_set(v___f_1902_, 1, v_rhs_1896_);
lean_closure_set(v___f_1902_, 2, v_mvarId_1893_);
lean_closure_set(v___f_1902_, 3, v_h_1894_);
v___x_1903_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1893_, v___f_1902_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_closeIfDistinctFloatLits___boxed(lean_object* v_mvarId_1904_, lean_object* v_h_1905_, lean_object* v_lhs_1906_, lean_object* v_rhs_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l_Lean_MVarId_closeIfDistinctFloatLits(v_mvarId_1904_, v_h_1905_, v_lhs_1906_, v_rhs_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_);
lean_dec(v_a_1911_);
lean_dec_ref(v_a_1910_);
lean_dec(v_a_1909_);
lean_dec_ref(v_a_1908_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(lean_object* v___x_1914_, lean_object* v_00___1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1914_);
v___x_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0___boxed(lean_object* v___x_1923_, lean_object* v_00___1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_1923_, v_00___1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
return v_res_1930_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1942_ = lean_box(0);
v___x_1943_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5));
v___x_1944_ = l_Lean_mkConst(v___x_1943_, v___x_1942_);
return v___x_1944_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7(void){
_start:
{
lean_object* v___x_1945_; lean_object* v_dummy_1946_; 
v___x_1945_ = lean_box(0);
v_dummy_1946_ = l_Lean_Expr_sort___override(v___x_1945_);
return v_dummy_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object* v_config_1947_, lean_object* v_mvarId_1948_, lean_object* v_as_1949_, size_t v_sz_1950_, size_t v_i_1951_, lean_object* v_b_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
uint8_t v___x_1958_; 
v___x_1958_ = lean_usize_dec_lt(v_i_1951_, v_sz_1950_);
if (v___x_1958_ == 0)
{
lean_object* v___x_1959_; 
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v___x_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1959_, 0, v_b_1952_);
return v___x_1959_;
}
else
{
lean_object* v_snd_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_2556_; 
v_snd_1960_ = lean_ctor_get(v_b_1952_, 1);
v_isSharedCheck_2556_ = !lean_is_exclusive(v_b_1952_);
if (v_isSharedCheck_2556_ == 0)
{
lean_object* v_unused_2557_; 
v_unused_2557_ = lean_ctor_get(v_b_1952_, 0);
lean_dec(v_unused_2557_);
v___x_1962_ = v_b_1952_;
v_isShared_1963_ = v_isSharedCheck_2556_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_snd_1960_);
lean_dec(v_b_1952_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_2556_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v_a_1965_; lean_object* v___x_1971_; lean_object* v_a_1973_; lean_object* v___y_1979_; lean_object* v_a_1991_; 
v___x_1971_ = lean_box(0);
v_a_1991_ = lean_array_uget(v_as_1949_, v_i_1951_);
if (lean_obj_tag(v_a_1991_) == 0)
{
lean_del_object(v___x_1962_);
v_a_1973_ = v_snd_1960_;
goto v___jp_1972_;
}
else
{
lean_object* v_val_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2555_; 
v_val_1992_ = lean_ctor_get(v_a_1991_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v_a_1991_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_1994_ = v_a_1991_;
v_isShared_1995_ = v_isSharedCheck_2555_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_val_1992_);
lean_dec(v_a_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2555_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; uint8_t v___y_1999_; uint8_t v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2003_; lean_object* v___y_2004_; uint8_t v___x_2027_; 
v___x_1996_ = lean_box(0);
v___x_1997_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_2027_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1992_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; uint8_t v___y_2030_; uint8_t v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2052_; lean_object* v___y_2053_; uint8_t v___y_2054_; lean_object* v___y_2055_; lean_object* v___y_2056_; uint8_t v___y_2057_; lean_object* v_a_2058_; lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v___y_2066_; uint8_t v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; uint8_t v___y_2070_; lean_object* v___y_2071_; uint8_t v___y_2108_; uint8_t v_isHEq_2109_; lean_object* v___y_2110_; lean_object* v___y_2111_; lean_object* v___y_2112_; lean_object* v___y_2113_; uint8_t v_isEq_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2270_; lean_object* v___y_2358_; lean_object* v___y_2359_; lean_object* v___y_2360_; lean_object* v___y_2361_; lean_object* v___x_2491_; 
v___x_2028_ = l_Lean_LocalDecl_type(v_val_1992_);
lean_inc_ref(v___x_2028_);
v___x_2491_ = l_Lean_Meta_matchNot_x3f(v___x_2028_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2491_, 1);
if (lean_obj_tag(v_a_2492_) == 1)
{
lean_object* v_val_2493_; lean_object* v___x_2494_; 
v_val_2493_ = lean_ctor_get(v_a_2492_, 0);
lean_inc(v_val_2493_);
lean_dec_ref_known(v_a_2492_, 1);
v___x_2494_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_2493_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___x_2494_, 1);
if (lean_obj_tag(v_a_2495_) == 1)
{
lean_object* v_val_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2537_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec_ref(v_config_1947_);
v_val_2496_ = lean_ctor_get(v_a_2495_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_a_2495_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2498_ = v_a_2495_;
v_isShared_2499_ = v_isSharedCheck_2537_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_val_2496_);
lean_dec(v_a_2495_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2537_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2500_; 
lean_inc(v_mvarId_1948_);
v___x_2500_ = l_Lean_MVarId_getType(v_mvarId_1948_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
lean_inc(v_a_2501_);
lean_dec_ref_known(v___x_2500_, 1);
v___x_2502_ = l_Lean_LocalDecl_toExpr(v_val_1992_);
v___x_2503_ = l_Lean_mkFVar(v_val_2496_);
v___x_2504_ = l_Lean_Expr_app___override(v___x_2502_, v___x_2503_);
v___x_2505_ = l_Lean_Meta_mkFalseElim(v_a_2501_, v___x_2504_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v___x_2507_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
lean_inc(v_a_2506_);
lean_dec_ref_known(v___x_2505_, 1);
v___x_2507_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1948_, v_a_2506_, v___y_1954_);
if (lean_obj_tag(v___x_2507_) == 0)
{
lean_object* v___x_2508_; lean_object* v___x_2510_; 
lean_dec_ref_known(v___x_2507_, 1);
v___x_2508_ = lean_box(v___x_1958_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2508_);
v___x_2510_ = v___x_2498_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
lean_ctor_set(v___x_2511_, 1, v___x_1996_);
v_a_1965_ = v___x_2511_;
goto v___jp_1964_;
}
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
lean_del_object(v___x_2498_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
v_a_2513_ = lean_ctor_get(v___x_2507_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2507_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2507_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2507_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
else
{
lean_object* v_a_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2528_; 
lean_del_object(v___x_2498_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2521_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2523_ = v___x_2505_;
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_a_2521_);
lean_dec(v___x_2505_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2526_; 
if (v_isShared_2524_ == 0)
{
v___x_2526_ = v___x_2523_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_a_2521_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
return v___x_2526_;
}
}
}
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2536_; 
lean_del_object(v___x_2498_);
lean_dec(v_val_2496_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2529_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2536_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2531_ = v___x_2500_;
v_isShared_2532_ = v_isSharedCheck_2536_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_a_2529_);
lean_dec(v___x_2500_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2536_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2534_; 
if (v_isShared_2532_ == 0)
{
v___x_2534_ = v___x_2531_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v_a_2529_);
v___x_2534_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
return v___x_2534_;
}
}
}
}
}
else
{
lean_dec(v_a_2495_);
v___y_2358_ = v___y_1953_;
v___y_2359_ = v___y_1954_;
v___y_2360_ = v___y_1955_;
v___y_2361_ = v___y_1956_;
goto v___jp_2357_;
}
}
else
{
lean_object* v_a_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2545_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2538_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2540_ = v___x_2494_;
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_a_2538_);
lean_dec(v___x_2494_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___x_2543_; 
if (v_isShared_2541_ == 0)
{
v___x_2543_ = v___x_2540_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_a_2538_);
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
else
{
lean_dec(v_a_2492_);
v___y_2358_ = v___y_1953_;
v___y_2359_ = v___y_1954_;
v___y_2360_ = v___y_1955_;
v___y_2361_ = v___y_1956_;
goto v___jp_2357_;
}
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2553_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2546_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2548_ = v___x_2491_;
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v___x_2491_);
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
v___jp_2029_:
{
uint8_t v_genDiseq_2036_; 
v_genDiseq_2036_ = lean_ctor_get_uint8(v_config_1947_, sizeof(void*)*1 + 2);
if (v_genDiseq_2036_ == 0)
{
lean_dec_ref(v___x_2028_);
v___y_1999_ = v___y_2030_;
v___y_2000_ = v___y_2031_;
v___y_2001_ = v___y_2032_;
v___y_2002_ = v___y_2033_;
v___y_2003_ = v___y_2034_;
v___y_2004_ = v___y_2035_;
goto v___jp_1998_;
}
else
{
uint8_t v___x_2037_; 
v___x_2037_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_2028_);
lean_dec_ref(v___x_2028_);
if (v___x_2037_ == 0)
{
v___y_1999_ = v___y_2030_;
v___y_2000_ = v___y_2031_;
v___y_2001_ = v___y_2032_;
v___y_2002_ = v___y_2033_;
v___y_2003_ = v___y_2034_;
v___y_2004_ = v___y_2035_;
goto v___jp_1998_;
}
else
{
lean_object* v___x_2038_; 
lean_inc(v_val_1992_);
lean_inc(v_mvarId_1948_);
v___x_2038_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1948_, v_val_1992_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; uint8_t v___x_2040_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
v___x_2040_ = lean_unbox(v_a_2039_);
if (v___x_2040_ == 0)
{
lean_dec(v_a_2039_);
v___y_1999_ = v___y_2030_;
v___y_2000_ = v___y_2031_;
v___y_2001_ = v___y_2032_;
v___y_2002_ = v___y_2033_;
v___y_2003_ = v___y_2034_;
v___y_2004_ = v___y_2035_;
goto v___jp_1998_;
}
else
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v___x_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2041_, 0, v_a_2039_);
v___x_2042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
lean_ctor_set(v___x_2042_, 1, v___x_1996_);
v_a_1965_ = v___x_2042_;
goto v___jp_1964_;
}
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2043_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2038_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2038_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
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
}
}
v___jp_2051_:
{
uint8_t v___x_2059_; 
v___x_2059_ = l_Lean_Exception_isInterrupt(v_a_2058_);
if (v___x_2059_ == 0)
{
uint8_t v___x_2060_; 
lean_inc_ref(v_a_2058_);
v___x_2060_ = l_Lean_Exception_isRuntime(v_a_2058_);
if (v___x_2060_ == 0)
{
lean_dec_ref(v_a_2058_);
v___y_2030_ = v___y_2054_;
v___y_2031_ = v___y_2057_;
v___y_2032_ = v___y_2056_;
v___y_2033_ = v___y_2055_;
v___y_2034_ = v___y_2053_;
v___y_2035_ = v___y_2052_;
goto v___jp_2029_;
}
else
{
lean_object* v___x_2061_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v___x_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_a_2058_);
return v___x_2061_;
}
}
else
{
lean_object* v___x_2062_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v___x_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2062_, 0, v_a_2058_);
return v___x_2062_;
}
}
v___jp_2063_:
{
if (lean_obj_tag(v___y_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; 
v_a_2072_ = lean_ctor_get(v___y_2071_, 0);
lean_inc(v_a_2072_);
lean_dec_ref_known(v___y_2071_, 1);
v___x_2073_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_2074_ = l_Lean_Expr_isConstOf(v_a_2072_, v___x_2073_);
lean_dec(v_a_2072_);
if (v___x_2074_ == 0)
{
lean_dec_ref(v___y_2065_);
v___y_2030_ = v___y_2067_;
v___y_2031_ = v___y_2070_;
v___y_2032_ = v___y_2069_;
v___y_2033_ = v___y_2068_;
v___y_2034_ = v___y_2066_;
v___y_2035_ = v___y_2064_;
goto v___jp_2029_;
}
else
{
lean_object* v___x_2075_; 
lean_inc_ref(v___y_2065_);
v___x_2075_ = l_Lean_Meta_mkEqRefl(v___y_2065_, v___y_2069_, v___y_2068_, v___y_2066_, v___y_2064_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v___x_2077_; lean_object* v_dummy_2078_; lean_object* v_nargs_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v___x_2077_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_2078_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_2079_ = l_Lean_Expr_getAppNumArgs(v___y_2065_);
lean_inc(v_nargs_2079_);
v___x_2080_ = lean_mk_array(v_nargs_2079_, v_dummy_2078_);
v___x_2081_ = lean_unsigned_to_nat(1u);
v___x_2082_ = lean_nat_sub(v_nargs_2079_, v___x_2081_);
lean_dec(v_nargs_2079_);
v___x_2083_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_2065_, v___x_2080_, v___x_2082_);
v___x_2084_ = lean_array_push(v___x_2083_, v_a_2076_);
v___x_2085_ = l_Lean_mkAppN(v___x_2077_, v___x_2084_);
lean_dec_ref(v___x_2084_);
lean_inc(v_mvarId_1948_);
v___x_2086_ = l_Lean_MVarId_getType(v_mvarId_1948_, v___y_2069_, v___y_2068_, v___y_2066_, v___y_2064_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2087_);
lean_dec_ref_known(v___x_2086_, 1);
lean_inc(v_val_1992_);
v___x_2088_ = l_Lean_LocalDecl_toExpr(v_val_1992_);
v___x_2089_ = l_Lean_Meta_mkAbsurd(v_a_2087_, v___x_2088_, v___x_2085_, v___y_2069_, v___y_2068_, v___y_2066_, v___y_2064_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2091_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2089_, 1);
lean_inc(v_mvarId_1948_);
v___x_2091_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1948_, v_a_2090_, v___y_2068_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2100_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2100_ == 0)
{
lean_object* v_unused_2101_; 
v_unused_2101_ = lean_ctor_get(v___x_2091_, 0);
lean_dec(v_unused_2101_);
v___x_2093_ = v___x_2091_;
v_isShared_2094_ = v_isSharedCheck_2100_;
goto v_resetjp_2092_;
}
else
{
lean_dec(v___x_2091_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2100_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2095_ = lean_box(v___x_2074_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 1);
lean_ctor_set(v___x_2093_, 0, v___x_2095_);
v___x_2097_ = v___x_2093_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
lean_ctor_set(v___x_2098_, 1, v___x_1996_);
v_a_1965_ = v___x_2098_;
goto v___jp_1964_;
}
}
}
else
{
lean_object* v_a_2102_; 
v_a_2102_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2102_);
lean_dec_ref_known(v___x_2091_, 1);
v___y_2052_ = v___y_2064_;
v___y_2053_ = v___y_2066_;
v___y_2054_ = v___y_2067_;
v___y_2055_ = v___y_2068_;
v___y_2056_ = v___y_2069_;
v___y_2057_ = v___y_2070_;
v_a_2058_ = v_a_2102_;
goto v___jp_2051_;
}
}
else
{
lean_object* v_a_2103_; 
v_a_2103_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2103_);
lean_dec_ref_known(v___x_2089_, 1);
v___y_2052_ = v___y_2064_;
v___y_2053_ = v___y_2066_;
v___y_2054_ = v___y_2067_;
v___y_2055_ = v___y_2068_;
v___y_2056_ = v___y_2069_;
v___y_2057_ = v___y_2070_;
v_a_2058_ = v_a_2103_;
goto v___jp_2051_;
}
}
else
{
lean_object* v_a_2104_; 
lean_dec_ref(v___x_2085_);
v_a_2104_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2086_, 1);
v___y_2052_ = v___y_2064_;
v___y_2053_ = v___y_2066_;
v___y_2054_ = v___y_2067_;
v___y_2055_ = v___y_2068_;
v___y_2056_ = v___y_2069_;
v___y_2057_ = v___y_2070_;
v_a_2058_ = v_a_2104_;
goto v___jp_2051_;
}
}
else
{
lean_object* v_a_2105_; 
lean_dec_ref(v___y_2065_);
v_a_2105_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2105_);
lean_dec_ref_known(v___x_2075_, 1);
v___y_2052_ = v___y_2064_;
v___y_2053_ = v___y_2066_;
v___y_2054_ = v___y_2067_;
v___y_2055_ = v___y_2068_;
v___y_2056_ = v___y_2069_;
v___y_2057_ = v___y_2070_;
v_a_2058_ = v_a_2105_;
goto v___jp_2051_;
}
}
}
else
{
lean_object* v_a_2106_; 
lean_dec_ref(v___y_2065_);
v_a_2106_ = lean_ctor_get(v___y_2071_, 0);
lean_inc(v_a_2106_);
lean_dec_ref_known(v___y_2071_, 1);
v___y_2052_ = v___y_2064_;
v___y_2053_ = v___y_2066_;
v___y_2054_ = v___y_2067_;
v___y_2055_ = v___y_2068_;
v___y_2056_ = v___y_2069_;
v___y_2057_ = v___y_2070_;
v_a_2058_ = v_a_2106_;
goto v___jp_2051_;
}
}
v___jp_2107_:
{
uint8_t v_useDecide_2114_; 
v_useDecide_2114_ = lean_ctor_get_uint8(v_config_1947_, sizeof(void*)*1);
if (v_useDecide_2114_ == 0)
{
v___y_2030_ = v___y_2108_;
v___y_2031_ = v_isHEq_2109_;
v___y_2032_ = v___y_2110_;
v___y_2033_ = v___y_2111_;
v___y_2034_ = v___y_2112_;
v___y_2035_ = v___y_2113_;
goto v___jp_2029_;
}
else
{
uint8_t v___x_2115_; 
v___x_2115_ = l_Lean_Expr_hasFVar(v___x_2028_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; 
lean_inc_ref(v___x_2028_);
v___x_2116_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_2028_, v___y_2111_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; uint8_t v___x_2118_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = l_Lean_Expr_hasMVar(v_a_2117_);
if (v___x_2118_ == 0)
{
uint8_t v___x_2119_; 
v___x_2119_ = l_Lean_Expr_hasFVar(v_a_2117_);
lean_dec(v_a_2117_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; 
lean_inc_ref(v___x_2028_);
v___x_2120_ = l_Lean_Meta_mkDecide(v___x_2028_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_object* v_a_2121_; lean_object* v___x_2122_; uint8_t v_transparency_2123_; uint8_t v___x_2124_; uint8_t v___x_2125_; 
v_a_2121_ = lean_ctor_get(v___x_2120_, 0);
lean_inc(v_a_2121_);
lean_dec_ref_known(v___x_2120_, 1);
v___x_2122_ = l_Lean_Meta_Context_config(v___y_2110_);
v_transparency_2123_ = lean_ctor_get_uint8(v___x_2122_, 9);
lean_dec_ref(v___x_2122_);
v___x_2124_ = 1;
v___x_2125_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2123_, v___x_2124_);
if (v___x_2125_ == 0)
{
lean_object* v_keyedConfig_2126_; uint8_t v_trackZetaDelta_2127_; lean_object* v_zetaDeltaSet_2128_; lean_object* v_lctx_2129_; lean_object* v_localInstances_2130_; lean_object* v_defEqCtx_x3f_2131_; lean_object* v_synthPendingDepth_2132_; lean_object* v_customCanUnfoldPredicate_x3f_2133_; uint8_t v_univApprox_2134_; uint8_t v_inTypeClassResolution_2135_; uint8_t v_cacheInferType_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v_keyedConfig_2126_ = lean_ctor_get(v___y_2110_, 0);
v_trackZetaDelta_2127_ = lean_ctor_get_uint8(v___y_2110_, sizeof(void*)*7);
v_zetaDeltaSet_2128_ = lean_ctor_get(v___y_2110_, 1);
v_lctx_2129_ = lean_ctor_get(v___y_2110_, 2);
v_localInstances_2130_ = lean_ctor_get(v___y_2110_, 3);
v_defEqCtx_x3f_2131_ = lean_ctor_get(v___y_2110_, 4);
v_synthPendingDepth_2132_ = lean_ctor_get(v___y_2110_, 5);
v_customCanUnfoldPredicate_x3f_2133_ = lean_ctor_get(v___y_2110_, 6);
v_univApprox_2134_ = lean_ctor_get_uint8(v___y_2110_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2135_ = lean_ctor_get_uint8(v___y_2110_, sizeof(void*)*7 + 2);
v_cacheInferType_2136_ = lean_ctor_get_uint8(v___y_2110_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2126_);
v___x_2137_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2124_, v_keyedConfig_2126_);
lean_inc(v_customCanUnfoldPredicate_x3f_2133_);
lean_inc(v_synthPendingDepth_2132_);
lean_inc(v_defEqCtx_x3f_2131_);
lean_inc_ref(v_localInstances_2130_);
lean_inc_ref(v_lctx_2129_);
lean_inc(v_zetaDeltaSet_2128_);
v___x_2138_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
lean_ctor_set(v___x_2138_, 1, v_zetaDeltaSet_2128_);
lean_ctor_set(v___x_2138_, 2, v_lctx_2129_);
lean_ctor_set(v___x_2138_, 3, v_localInstances_2130_);
lean_ctor_set(v___x_2138_, 4, v_defEqCtx_x3f_2131_);
lean_ctor_set(v___x_2138_, 5, v_synthPendingDepth_2132_);
lean_ctor_set(v___x_2138_, 6, v_customCanUnfoldPredicate_x3f_2133_);
lean_ctor_set_uint8(v___x_2138_, sizeof(void*)*7, v_trackZetaDelta_2127_);
lean_ctor_set_uint8(v___x_2138_, sizeof(void*)*7 + 1, v_univApprox_2134_);
lean_ctor_set_uint8(v___x_2138_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2135_);
lean_ctor_set_uint8(v___x_2138_, sizeof(void*)*7 + 3, v_cacheInferType_2136_);
lean_inc(v___y_2113_);
lean_inc_ref(v___y_2112_);
lean_inc(v___y_2111_);
lean_inc(v_a_2121_);
v___x_2139_ = lean_whnf(v_a_2121_, v___x_2138_, v___y_2111_, v___y_2112_, v___y_2113_);
v___y_2064_ = v___y_2113_;
v___y_2065_ = v_a_2121_;
v___y_2066_ = v___y_2112_;
v___y_2067_ = v___y_2108_;
v___y_2068_ = v___y_2111_;
v___y_2069_ = v___y_2110_;
v___y_2070_ = v_isHEq_2109_;
v___y_2071_ = v___x_2139_;
goto v___jp_2063_;
}
else
{
lean_object* v___x_2140_; 
lean_inc(v___y_2113_);
lean_inc_ref(v___y_2112_);
lean_inc(v___y_2111_);
lean_inc_ref(v___y_2110_);
lean_inc(v_a_2121_);
v___x_2140_ = lean_whnf(v_a_2121_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
v___y_2064_ = v___y_2113_;
v___y_2065_ = v_a_2121_;
v___y_2066_ = v___y_2112_;
v___y_2067_ = v___y_2108_;
v___y_2068_ = v___y_2111_;
v___y_2069_ = v___y_2110_;
v___y_2070_ = v_isHEq_2109_;
v___y_2071_ = v___x_2140_;
goto v___jp_2063_;
}
}
else
{
lean_object* v_a_2141_; 
v_a_2141_ = lean_ctor_get(v___x_2120_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2120_, 1);
v___y_2052_ = v___y_2113_;
v___y_2053_ = v___y_2112_;
v___y_2054_ = v___y_2108_;
v___y_2055_ = v___y_2111_;
v___y_2056_ = v___y_2110_;
v___y_2057_ = v_isHEq_2109_;
v_a_2058_ = v_a_2141_;
goto v___jp_2051_;
}
}
else
{
v___y_2030_ = v___y_2108_;
v___y_2031_ = v_isHEq_2109_;
v___y_2032_ = v___y_2110_;
v___y_2033_ = v___y_2111_;
v___y_2034_ = v___y_2112_;
v___y_2035_ = v___y_2113_;
goto v___jp_2029_;
}
}
else
{
lean_dec(v_a_2117_);
v___y_2030_ = v___y_2108_;
v___y_2031_ = v_isHEq_2109_;
v___y_2032_ = v___y_2110_;
v___y_2033_ = v___y_2111_;
v___y_2034_ = v___y_2112_;
v___y_2035_ = v___y_2113_;
goto v___jp_2029_;
}
}
else
{
lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2149_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2142_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2144_ = v___x_2116_;
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2116_);
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
else
{
v___y_2030_ = v___y_2108_;
v___y_2031_ = v_isHEq_2109_;
v___y_2032_ = v___y_2110_;
v___y_2033_ = v___y_2111_;
v___y_2034_ = v___y_2112_;
v___y_2035_ = v___y_2113_;
goto v___jp_2029_;
}
}
}
v___jp_2150_:
{
lean_object* v___x_2156_; 
lean_inc_ref(v___x_2028_);
v___x_2156_ = l_Lean_Meta_matchHEq_x3f(v___x_2028_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v___x_2156_, 1);
if (lean_obj_tag(v_a_2157_) == 1)
{
lean_object* v_val_2158_; lean_object* v_snd_2159_; lean_object* v_snd_2160_; lean_object* v_fst_2161_; lean_object* v_fst_2162_; lean_object* v_fst_2163_; lean_object* v_snd_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2257_; 
v_val_2158_ = lean_ctor_get(v_a_2157_, 0);
lean_inc(v_val_2158_);
lean_dec_ref_known(v_a_2157_, 1);
v_snd_2159_ = lean_ctor_get(v_val_2158_, 1);
lean_inc(v_snd_2159_);
v_snd_2160_ = lean_ctor_get(v_snd_2159_, 1);
lean_inc(v_snd_2160_);
v_fst_2161_ = lean_ctor_get(v_val_2158_, 0);
lean_inc(v_fst_2161_);
lean_dec(v_val_2158_);
v_fst_2162_ = lean_ctor_get(v_snd_2159_, 0);
lean_inc(v_fst_2162_);
lean_dec(v_snd_2159_);
v_fst_2163_ = lean_ctor_get(v_snd_2160_, 0);
v_snd_2164_ = lean_ctor_get(v_snd_2160_, 1);
v_isSharedCheck_2257_ = !lean_is_exclusive(v_snd_2160_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2166_ = v_snd_2160_;
v_isShared_2167_ = v_isSharedCheck_2257_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_snd_2164_);
lean_inc(v_fst_2163_);
lean_dec(v_snd_2160_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2257_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2168_; 
v___x_2168_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2162_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
lean_inc(v_a_2169_);
lean_dec_ref_known(v___x_2168_, 1);
if (lean_obj_tag(v_a_2169_) == 1)
{
lean_object* v_val_2170_; lean_object* v___x_2171_; 
v_val_2170_ = lean_ctor_get(v_a_2169_, 0);
lean_inc(v_val_2170_);
lean_dec_ref_known(v_a_2169_, 1);
v___x_2171_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2164_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref_known(v___x_2171_, 1);
if (lean_obj_tag(v_a_2172_) == 1)
{
lean_object* v_toConstantVal_2173_; lean_object* v_val_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2240_; 
v_toConstantVal_2173_ = lean_ctor_get(v_val_2170_, 0);
lean_inc_ref(v_toConstantVal_2173_);
lean_dec(v_val_2170_);
v_val_2174_ = lean_ctor_get(v_a_2172_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_a_2172_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2176_ = v_a_2172_;
v_isShared_2177_ = v_isSharedCheck_2240_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_val_2174_);
lean_dec(v_a_2172_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2240_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v_toConstantVal_2178_; lean_object* v_name_2179_; lean_object* v_name_2180_; uint8_t v___x_2181_; 
v_toConstantVal_2178_ = lean_ctor_get(v_val_2174_, 0);
lean_inc_ref(v_toConstantVal_2178_);
lean_dec(v_val_2174_);
v_name_2179_ = lean_ctor_get(v_toConstantVal_2173_, 0);
lean_inc(v_name_2179_);
lean_dec_ref(v_toConstantVal_2173_);
v_name_2180_ = lean_ctor_get(v_toConstantVal_2178_, 0);
lean_inc(v_name_2180_);
lean_dec_ref(v_toConstantVal_2178_);
v___x_2181_ = lean_name_eq(v_name_2179_, v_name_2180_);
lean_dec(v_name_2180_);
lean_dec(v_name_2179_);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; 
v___x_2182_ = l_Lean_Meta_isExprDefEq(v_fst_2161_, v_fst_2163_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2182_) == 0)
{
lean_object* v_a_2183_; uint8_t v___x_2184_; 
v_a_2183_ = lean_ctor_get(v___x_2182_, 0);
lean_inc(v_a_2183_);
lean_dec_ref_known(v___x_2182_, 1);
v___x_2184_ = lean_unbox(v_a_2183_);
lean_dec(v_a_2183_);
if (v___x_2184_ == 0)
{
lean_del_object(v___x_2176_);
lean_del_object(v___x_2166_);
v___y_2108_ = v_isEq_2151_;
v_isHEq_2109_ = v___x_1958_;
v___y_2110_ = v___y_2152_;
v___y_2111_ = v___y_2153_;
v___y_2112_ = v___y_2154_;
v___y_2113_ = v___y_2155_;
goto v___jp_2107_;
}
else
{
lean_object* v___x_2185_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec_ref(v_config_1947_);
lean_inc(v_mvarId_1948_);
v___x_2185_ = l_Lean_MVarId_getType(v_mvarId_1948_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2185_) == 0)
{
lean_object* v_a_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v_a_2186_ = lean_ctor_get(v___x_2185_, 0);
lean_inc(v_a_2186_);
lean_dec_ref_known(v___x_2185_, 1);
v___x_2187_ = l_Lean_LocalDecl_toExpr(v_val_1992_);
v___x_2188_ = l_Lean_Meta_mkEqOfHEq(v___x_2187_, v___x_1958_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2188_) == 0)
{
lean_object* v_a_2189_; lean_object* v___x_2190_; 
v_a_2189_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_a_2189_);
lean_dec_ref_known(v___x_2188_, 1);
v___x_2190_ = l_Lean_Meta_mkNoConfusion(v_a_2186_, v_a_2189_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_a_2191_; lean_object* v___x_2192_; 
v_a_2191_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_a_2191_);
lean_dec_ref_known(v___x_2190_, 1);
v___x_2192_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1948_, v_a_2191_, v___y_2153_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v___x_2193_; lean_object* v___x_2195_; 
lean_dec_ref_known(v___x_2192_, 1);
v___x_2193_ = lean_box(v___x_1958_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2193_);
v___x_2195_ = v___x_2176_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v___x_2193_);
v___x_2195_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
lean_object* v___x_2197_; 
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 1, v___x_1996_);
lean_ctor_set(v___x_2166_, 0, v___x_2195_);
v___x_2197_ = v___x_2166_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v___x_2195_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v___x_1996_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
v_a_1965_ = v___x_2197_;
goto v___jp_1964_;
}
}
}
else
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
lean_del_object(v___x_2176_);
lean_del_object(v___x_2166_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
v_a_2200_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2202_ = v___x_2192_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2192_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2200_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
}
else
{
lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2215_; 
lean_del_object(v___x_2176_);
lean_del_object(v___x_2166_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2208_ = lean_ctor_get(v___x_2190_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2210_ = v___x_2190_;
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_dec(v___x_2190_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2213_; 
if (v_isShared_2211_ == 0)
{
v___x_2213_ = v___x_2210_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_a_2208_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
else
{
lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
lean_dec(v_a_2186_);
lean_del_object(v___x_2176_);
lean_del_object(v___x_2166_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2216_ = lean_ctor_get(v___x_2188_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2188_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___x_2188_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_dec(v___x_2188_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2216_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_del_object(v___x_2176_);
lean_del_object(v___x_2166_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2224_ = lean_ctor_get(v___x_2185_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2185_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2185_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2239_; 
lean_del_object(v___x_2176_);
lean_del_object(v___x_2166_);
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2232_ = lean_ctor_get(v___x_2182_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2182_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2234_ = v___x_2182_;
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2182_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2239_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2237_; 
if (v_isShared_2235_ == 0)
{
v___x_2237_ = v___x_2234_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_a_2232_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
}
else
{
lean_del_object(v___x_2176_);
lean_del_object(v___x_2166_);
lean_dec(v_fst_2163_);
lean_dec(v_fst_2161_);
v___y_2108_ = v_isEq_2151_;
v_isHEq_2109_ = v___x_1958_;
v___y_2110_ = v___y_2152_;
v___y_2111_ = v___y_2153_;
v___y_2112_ = v___y_2154_;
v___y_2113_ = v___y_2155_;
goto v___jp_2107_;
}
}
}
else
{
lean_dec(v_a_2172_);
lean_dec(v_val_2170_);
lean_del_object(v___x_2166_);
lean_dec(v_fst_2163_);
lean_dec(v_fst_2161_);
v___y_2108_ = v_isEq_2151_;
v_isHEq_2109_ = v___x_1958_;
v___y_2110_ = v___y_2152_;
v___y_2111_ = v___y_2153_;
v___y_2112_ = v___y_2154_;
v___y_2113_ = v___y_2155_;
goto v___jp_2107_;
}
}
else
{
lean_object* v_a_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2248_; 
lean_dec(v_val_2170_);
lean_del_object(v___x_2166_);
lean_dec(v_fst_2163_);
lean_dec(v_fst_2161_);
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2241_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2243_ = v___x_2171_;
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_a_2241_);
lean_dec(v___x_2171_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2246_; 
if (v_isShared_2244_ == 0)
{
v___x_2246_ = v___x_2243_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v_a_2241_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
}
}
else
{
lean_dec(v_a_2169_);
lean_del_object(v___x_2166_);
lean_dec(v_snd_2164_);
lean_dec(v_fst_2163_);
lean_dec(v_fst_2161_);
v___y_2108_ = v_isEq_2151_;
v_isHEq_2109_ = v___x_1958_;
v___y_2110_ = v___y_2152_;
v___y_2111_ = v___y_2153_;
v___y_2112_ = v___y_2154_;
v___y_2113_ = v___y_2155_;
goto v___jp_2107_;
}
}
else
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2256_; 
lean_del_object(v___x_2166_);
lean_dec(v_snd_2164_);
lean_dec(v_fst_2163_);
lean_dec(v_fst_2161_);
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2249_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2251_ = v___x_2168_;
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2168_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
else
{
lean_dec(v_a_2157_);
v___y_2108_ = v_isEq_2151_;
v_isHEq_2109_ = v___x_2027_;
v___y_2110_ = v___y_2152_;
v___y_2111_ = v___y_2153_;
v___y_2112_ = v___y_2154_;
v___y_2113_ = v___y_2155_;
goto v___jp_2107_;
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2258_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2156_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2156_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
v___jp_2266_:
{
lean_object* v___x_2271_; 
lean_inc_ref(v___x_2028_);
v___x_2271_ = l_Lean_Meta_matchEq_x3f(v___x_2028_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
if (lean_obj_tag(v_a_2272_) == 1)
{
lean_object* v_val_2273_; lean_object* v_snd_2274_; lean_object* v_fst_2275_; lean_object* v_snd_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2348_; 
v_val_2273_ = lean_ctor_get(v_a_2272_, 0);
lean_inc(v_val_2273_);
lean_dec_ref_known(v_a_2272_, 1);
v_snd_2274_ = lean_ctor_get(v_val_2273_, 1);
lean_inc(v_snd_2274_);
lean_dec(v_val_2273_);
v_fst_2275_ = lean_ctor_get(v_snd_2274_, 0);
v_snd_2276_ = lean_ctor_get(v_snd_2274_, 1);
v_isSharedCheck_2348_ = !lean_is_exclusive(v_snd_2274_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2278_ = v_snd_2274_;
v_isShared_2279_ = v_isSharedCheck_2348_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_snd_2276_);
lean_inc(v_fst_2275_);
lean_dec(v_snd_2274_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2348_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2280_; 
v___x_2280_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2275_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2281_);
lean_dec_ref_known(v___x_2280_, 1);
if (lean_obj_tag(v_a_2281_) == 1)
{
lean_object* v_val_2282_; lean_object* v___x_2283_; 
v_val_2282_ = lean_ctor_get(v_a_2281_, 0);
lean_inc(v_val_2282_);
lean_dec_ref_known(v_a_2281_, 1);
v___x_2283_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2276_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2283_, 1);
if (lean_obj_tag(v_a_2284_) == 1)
{
lean_object* v_toConstantVal_2285_; lean_object* v_val_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2331_; 
v_toConstantVal_2285_ = lean_ctor_get(v_val_2282_, 0);
lean_inc_ref(v_toConstantVal_2285_);
lean_dec(v_val_2282_);
v_val_2286_ = lean_ctor_get(v_a_2284_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v_a_2284_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2288_ = v_a_2284_;
v_isShared_2289_ = v_isSharedCheck_2331_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_val_2286_);
lean_dec(v_a_2284_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2331_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v_toConstantVal_2290_; lean_object* v_name_2291_; lean_object* v_name_2292_; uint8_t v___x_2293_; 
v_toConstantVal_2290_ = lean_ctor_get(v_val_2286_, 0);
lean_inc_ref(v_toConstantVal_2290_);
lean_dec(v_val_2286_);
v_name_2291_ = lean_ctor_get(v_toConstantVal_2285_, 0);
lean_inc(v_name_2291_);
lean_dec_ref(v_toConstantVal_2285_);
v_name_2292_ = lean_ctor_get(v_toConstantVal_2290_, 0);
lean_inc(v_name_2292_);
lean_dec_ref(v_toConstantVal_2290_);
v___x_2293_ = lean_name_eq(v_name_2291_, v_name_2292_);
lean_dec(v_name_2292_);
lean_dec(v_name_2291_);
if (v___x_2293_ == 0)
{
lean_object* v___x_2294_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec_ref(v_config_1947_);
lean_inc(v_mvarId_1948_);
v___x_2294_ = l_Lean_MVarId_getType(v_mvarId_1948_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
lean_inc(v_a_2295_);
lean_dec_ref_known(v___x_2294_, 1);
v___x_2296_ = l_Lean_LocalDecl_toExpr(v_val_1992_);
v___x_2297_ = l_Lean_Meta_mkNoConfusion(v_a_2295_, v___x_2296_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; lean_object* v___x_2299_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
lean_inc(v_a_2298_);
lean_dec_ref_known(v___x_2297_, 1);
v___x_2299_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1948_, v_a_2298_, v___y_2268_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v___x_2300_; lean_object* v___x_2302_; 
lean_dec_ref_known(v___x_2299_, 1);
v___x_2300_ = lean_box(v___x_1958_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 0, v___x_2300_);
v___x_2302_ = v___x_2288_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
lean_object* v___x_2304_; 
if (v_isShared_2279_ == 0)
{
lean_ctor_set(v___x_2278_, 1, v___x_1996_);
lean_ctor_set(v___x_2278_, 0, v___x_2302_);
v___x_2304_ = v___x_2278_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v___x_2302_);
lean_ctor_set(v_reuseFailAlloc_2305_, 1, v___x_1996_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
v_a_1965_ = v___x_2304_;
goto v___jp_1964_;
}
}
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_del_object(v___x_2288_);
lean_del_object(v___x_2278_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
v_a_2307_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2299_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2299_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_del_object(v___x_2288_);
lean_del_object(v___x_2278_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2315_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2297_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2297_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
else
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
lean_del_object(v___x_2288_);
lean_del_object(v___x_2278_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2323_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2294_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2294_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
else
{
lean_del_object(v___x_2288_);
lean_del_object(v___x_2278_);
v_isEq_2151_ = v___x_1958_;
v___y_2152_ = v___y_2267_;
v___y_2153_ = v___y_2268_;
v___y_2154_ = v___y_2269_;
v___y_2155_ = v___y_2270_;
goto v___jp_2150_;
}
}
}
else
{
lean_dec(v_a_2284_);
lean_dec(v_val_2282_);
lean_del_object(v___x_2278_);
v_isEq_2151_ = v___x_1958_;
v___y_2152_ = v___y_2267_;
v___y_2153_ = v___y_2268_;
v___y_2154_ = v___y_2269_;
v___y_2155_ = v___y_2270_;
goto v___jp_2150_;
}
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
lean_dec(v_val_2282_);
lean_del_object(v___x_2278_);
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2332_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2334_ = v___x_2283_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2283_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
else
{
lean_dec(v_a_2281_);
lean_del_object(v___x_2278_);
lean_dec(v_snd_2276_);
v_isEq_2151_ = v___x_1958_;
v___y_2152_ = v___y_2267_;
v___y_2153_ = v___y_2268_;
v___y_2154_ = v___y_2269_;
v___y_2155_ = v___y_2270_;
goto v___jp_2150_;
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_del_object(v___x_2278_);
lean_dec(v_snd_2276_);
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2340_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2280_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2280_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
}
}
else
{
lean_dec(v_a_2272_);
v_isEq_2151_ = v___x_2027_;
v___y_2152_ = v___y_2267_;
v___y_2153_ = v___y_2268_;
v___y_2154_ = v___y_2269_;
v___y_2155_ = v___y_2270_;
goto v___jp_2150_;
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2349_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2271_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2271_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
v___jp_2357_:
{
lean_object* v___x_2362_; 
lean_inc_ref(v___x_2028_);
v___x_2362_ = l_Lean_refutableHasNotBit_x3f(v___x_2028_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_a_2363_);
lean_dec_ref_known(v___x_2362_, 1);
if (lean_obj_tag(v_a_2363_) == 1)
{
lean_object* v_val_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2403_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec_ref(v_config_1947_);
v_val_2364_ = lean_ctor_get(v_a_2363_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_a_2363_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2366_ = v_a_2363_;
v_isShared_2367_ = v_isSharedCheck_2403_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_val_2364_);
lean_dec(v_a_2363_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2403_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; 
lean_inc(v_mvarId_1948_);
v___x_2368_ = l_Lean_MVarId_getType(v_mvarId_1948_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2368_, 1);
v___x_2370_ = l_Lean_LocalDecl_toExpr(v_val_1992_);
v___x_2371_ = l_Lean_Meta_mkAbsurd(v_a_2369_, v_val_2364_, v___x_2370_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2373_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
lean_inc(v_a_2372_);
lean_dec_ref_known(v___x_2371_, 1);
v___x_2373_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1948_, v_a_2372_, v___y_2359_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v___x_2374_; lean_object* v___x_2376_; 
lean_dec_ref_known(v___x_2373_, 1);
v___x_2374_ = lean_box(v___x_1958_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2374_);
v___x_2376_ = v___x_2366_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v___x_2374_);
v___x_2376_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
lean_ctor_set(v___x_2377_, 1, v___x_1996_);
v_a_1965_ = v___x_2377_;
goto v___jp_1964_;
}
}
else
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2386_; 
lean_del_object(v___x_2366_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
v_a_2379_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2381_ = v___x_2373_;
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v___x_2373_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2379_);
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
lean_del_object(v___x_2366_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2387_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2371_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2371_);
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
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_del_object(v___x_2366_);
lean_dec(v_val_2364_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2395_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2368_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2368_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
}
else
{
lean_object* v___x_2404_; 
lean_dec(v_a_2363_);
lean_inc_ref(v___x_2028_);
v___x_2404_ = l_Lean_Meta_matchNe_x3f(v___x_2028_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
if (lean_obj_tag(v_a_2405_) == 1)
{
lean_object* v_val_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2474_; 
v_val_2406_ = lean_ctor_get(v_a_2405_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v_a_2405_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2408_ = v_a_2405_;
v_isShared_2409_ = v_isSharedCheck_2474_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_val_2406_);
lean_dec(v_a_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2474_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v_snd_2410_; lean_object* v_fst_2411_; lean_object* v_snd_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2473_; 
v_snd_2410_ = lean_ctor_get(v_val_2406_, 1);
lean_inc(v_snd_2410_);
lean_dec(v_val_2406_);
v_fst_2411_ = lean_ctor_get(v_snd_2410_, 0);
v_snd_2412_ = lean_ctor_get(v_snd_2410_, 1);
v_isSharedCheck_2473_ = !lean_is_exclusive(v_snd_2410_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2414_ = v_snd_2410_;
v_isShared_2415_ = v_isSharedCheck_2473_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_snd_2412_);
lean_inc(v_fst_2411_);
lean_dec(v_snd_2410_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2473_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2416_; 
lean_inc(v_fst_2411_);
v___x_2416_ = l_Lean_Meta_isExprDefEq(v_fst_2411_, v_snd_2412_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_a_2417_; uint8_t v___x_2418_; 
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2417_);
lean_dec_ref_known(v___x_2416_, 1);
v___x_2418_ = lean_unbox(v_a_2417_);
if (v___x_2418_ == 0)
{
lean_dec(v_a_2417_);
lean_del_object(v___x_2414_);
lean_dec(v_fst_2411_);
lean_del_object(v___x_2408_);
v___y_2267_ = v___y_2358_;
v___y_2268_ = v___y_2359_;
v___y_2269_ = v___y_2360_;
v___y_2270_ = v___y_2361_;
goto v___jp_2266_;
}
else
{
lean_object* v___x_2419_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec_ref(v_config_1947_);
lean_inc(v_mvarId_1948_);
v___x_2419_ = l_Lean_MVarId_getType(v_mvarId_1948_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; lean_object* v___x_2421_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
lean_dec_ref_known(v___x_2419_, 1);
v___x_2421_ = l_Lean_Meta_mkEqRefl(v_fst_2411_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v_a_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_a_2422_);
lean_dec_ref_known(v___x_2421_, 1);
v___x_2423_ = l_Lean_LocalDecl_toExpr(v_val_1992_);
v___x_2424_ = l_Lean_Meta_mkAbsurd(v_a_2420_, v_a_2422_, v___x_2423_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2424_) == 0)
{
lean_object* v_a_2425_; lean_object* v___x_2426_; 
v_a_2425_ = lean_ctor_get(v___x_2424_, 0);
lean_inc(v_a_2425_);
lean_dec_ref_known(v___x_2424_, 1);
v___x_2426_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1948_, v_a_2425_, v___y_2359_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v___x_2428_; 
lean_dec_ref_known(v___x_2426_, 1);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v_a_2417_);
v___x_2428_ = v___x_2408_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2417_);
v___x_2428_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
lean_object* v___x_2430_; 
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 1, v___x_1996_);
lean_ctor_set(v___x_2414_, 0, v___x_2428_);
v___x_2430_ = v___x_2414_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v___x_2428_);
lean_ctor_set(v_reuseFailAlloc_2431_, 1, v___x_1996_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
v_a_1965_ = v___x_2430_;
goto v___jp_1964_;
}
}
}
else
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2440_; 
lean_dec(v_a_2417_);
lean_del_object(v___x_2414_);
lean_del_object(v___x_2408_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
v_a_2433_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2435_ = v___x_2426_;
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2426_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2440_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v_a_2433_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
lean_dec(v_a_2417_);
lean_del_object(v___x_2414_);
lean_del_object(v___x_2408_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2441_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2424_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2424_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec(v_a_2420_);
lean_dec(v_a_2417_);
lean_del_object(v___x_2414_);
lean_del_object(v___x_2408_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2449_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2421_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2421_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2464_; 
lean_dec(v_a_2417_);
lean_del_object(v___x_2414_);
lean_dec(v_fst_2411_);
lean_del_object(v___x_2408_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
v_a_2457_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2459_ = v___x_2419_;
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2419_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2462_; 
if (v_isShared_2460_ == 0)
{
v___x_2462_ = v___x_2459_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_a_2457_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
lean_del_object(v___x_2414_);
lean_dec(v_fst_2411_);
lean_del_object(v___x_2408_);
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2465_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2416_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2416_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2405_);
v___y_2267_ = v___y_2358_;
v___y_2268_ = v___y_2359_;
v___y_2269_ = v___y_2360_;
v___y_2270_ = v___y_2361_;
goto v___jp_2266_;
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2475_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2404_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2404_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec_ref(v___x_2028_);
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2483_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2362_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2362_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
else
{
lean_object* v___x_2554_; 
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
v___x_2554_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_1997_, v___x_1996_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
v___y_1979_ = v___x_2554_;
goto v___jp_1978_;
}
v___jp_1998_:
{
uint8_t v_emptyType_2005_; 
v_emptyType_2005_ = lean_ctor_get_uint8(v_config_1947_, sizeof(void*)*1 + 1);
if (v_emptyType_2005_ == 0)
{
lean_object* v___x_2006_; 
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
v___x_2006_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_1997_, v___x_1996_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
v___y_1979_ = v___x_2006_;
goto v___jp_1978_;
}
else
{
if (v___y_1999_ == 0)
{
if (v___y_2000_ == 0)
{
lean_object* v_searchFuel_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v_searchFuel_2007_ = lean_ctor_get(v_config_1947_, 0);
v___x_2008_ = l_Lean_LocalDecl_fvarId(v_val_1992_);
lean_dec(v_val_1992_);
lean_inc(v_searchFuel_2007_);
lean_inc(v_mvarId_1948_);
v___x_2009_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1948_, v___x_2008_, v_searchFuel_2007_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; uint8_t v___x_2011_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref_known(v___x_2009_, 1);
v___x_2011_ = lean_unbox(v_a_2010_);
if (v___x_2011_ == 0)
{
lean_object* v___x_2012_; 
lean_dec(v_a_2010_);
lean_del_object(v___x_1994_);
v___x_2012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_1997_, v___x_1996_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
v___y_1979_ = v___x_2012_;
goto v___jp_1978_;
}
else
{
lean_object* v___x_2014_; 
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v_a_2010_);
v___x_2014_ = v___x_1994_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2010_);
v___x_2014_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
lean_object* v___x_2015_; 
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
lean_ctor_set(v___x_2015_, 1, v___x_1996_);
v_a_1965_ = v___x_2015_;
goto v___jp_1964_;
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_del_object(v___x_1994_);
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_2017_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2009_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2009_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
else
{
lean_object* v___x_2025_; 
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
v___x_2025_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_1997_, v___x_1996_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
v___y_1979_ = v___x_2025_;
goto v___jp_1978_;
}
}
else
{
lean_object* v___x_2026_; 
lean_del_object(v___x_1994_);
lean_dec(v_val_1992_);
v___x_2026_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_1997_, v___x_1996_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
v___y_1979_ = v___x_2026_;
goto v___jp_1978_;
}
}
}
}
}
v___jp_1964_:
{
lean_object* v___x_1966_; lean_object* v___x_1968_; 
v___x_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1966_, 0, v_a_1965_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v___x_1966_);
v___x_1968_ = v___x_1962_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1966_);
lean_ctor_set(v_reuseFailAlloc_1970_, 1, v_snd_1960_);
v___x_1968_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
lean_object* v___x_1969_; 
v___x_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1968_);
return v___x_1969_;
}
}
v___jp_1972_:
{
lean_object* v___x_1974_; size_t v___x_1975_; size_t v___x_1976_; 
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1971_);
lean_ctor_set(v___x_1974_, 1, v_a_1973_);
v___x_1975_ = ((size_t)1ULL);
v___x_1976_ = lean_usize_add(v_i_1951_, v___x_1975_);
v_i_1951_ = v___x_1976_;
v_b_1952_ = v___x_1974_;
goto _start;
}
v___jp_1978_:
{
if (lean_obj_tag(v___y_1979_) == 0)
{
lean_object* v_a_1980_; 
v_a_1980_ = lean_ctor_get(v___y_1979_, 0);
lean_inc(v_a_1980_);
lean_dec_ref_known(v___y_1979_, 1);
if (lean_obj_tag(v_a_1980_) == 0)
{
lean_object* v_a_1981_; 
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_1981_ = lean_ctor_get(v_a_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v_a_1980_, 1);
v_a_1965_ = v_a_1981_;
goto v___jp_1964_;
}
else
{
lean_object* v_a_1982_; 
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
v_a_1982_ = lean_ctor_get(v_a_1980_, 0);
lean_inc(v_a_1982_);
lean_dec_ref_known(v_a_1980_, 1);
v_a_1973_ = v_a_1982_;
goto v___jp_1972_;
}
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
lean_del_object(v___x_1962_);
lean_dec(v_snd_1960_);
lean_dec(v_mvarId_1948_);
lean_dec_ref(v_config_1947_);
v_a_1983_ = lean_ctor_get(v___y_1979_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___y_1979_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1985_ = v___y_1979_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v___y_1979_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object* v_config_2558_, lean_object* v_mvarId_2559_, lean_object* v_as_2560_, lean_object* v_sz_2561_, lean_object* v_i_2562_, lean_object* v_b_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
size_t v_sz_boxed_2569_; size_t v_i_boxed_2570_; lean_object* v_res_2571_; 
v_sz_boxed_2569_ = lean_unbox_usize(v_sz_2561_);
lean_dec(v_sz_2561_);
v_i_boxed_2570_ = lean_unbox_usize(v_i_2562_);
lean_dec(v_i_2562_);
v_res_2571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2558_, v_mvarId_2559_, v_as_2560_, v_sz_boxed_2569_, v_i_boxed_2570_, v_b_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec_ref(v_as_2560_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object* v_config_2572_, lean_object* v_mvarId_2573_, lean_object* v_as_2574_, size_t v_sz_2575_, size_t v_i_2576_, lean_object* v_b_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_){
_start:
{
uint8_t v___x_2583_; 
v___x_2583_ = lean_usize_dec_lt(v_i_2576_, v_sz_2575_);
if (v___x_2583_ == 0)
{
lean_object* v___x_2584_; 
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_b_2577_);
return v___x_2584_;
}
else
{
lean_object* v_snd_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_3181_; 
v_snd_2585_ = lean_ctor_get(v_b_2577_, 1);
v_isSharedCheck_3181_ = !lean_is_exclusive(v_b_2577_);
if (v_isSharedCheck_3181_ == 0)
{
lean_object* v_unused_3182_; 
v_unused_3182_ = lean_ctor_get(v_b_2577_, 0);
lean_dec(v_unused_3182_);
v___x_2587_ = v_b_2577_;
v_isShared_2588_ = v_isSharedCheck_3181_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_snd_2585_);
lean_dec(v_b_2577_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_3181_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v_a_2590_; lean_object* v___x_2596_; lean_object* v_a_2598_; lean_object* v___y_2604_; lean_object* v_a_2616_; 
v___x_2596_ = lean_box(0);
v_a_2616_ = lean_array_uget(v_as_2574_, v_i_2576_);
if (lean_obj_tag(v_a_2616_) == 0)
{
lean_del_object(v___x_2587_);
v_a_2598_ = v_snd_2585_;
goto v___jp_2597_;
}
else
{
lean_object* v_val_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_3180_; 
v_val_2617_ = lean_ctor_get(v_a_2616_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_a_2616_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_2619_ = v_a_2616_;
v_isShared_2620_ = v_isSharedCheck_3180_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_val_2617_);
lean_dec(v_a_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_3180_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___y_2624_; uint8_t v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; uint8_t v___x_2652_; 
v___x_2621_ = lean_box(0);
v___x_2622_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_2652_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2617_);
if (v___x_2652_ == 0)
{
lean_object* v___x_2653_; uint8_t v___y_2655_; uint8_t v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2677_; lean_object* v___y_2678_; uint8_t v___y_2679_; uint8_t v___y_2680_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v_a_2683_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; uint8_t v___y_2692_; uint8_t v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; uint8_t v___y_2733_; uint8_t v_isHEq_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; uint8_t v_isEq_2776_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___x_3116_; 
v___x_2653_ = l_Lean_LocalDecl_type(v_val_2617_);
lean_inc_ref(v___x_2653_);
v___x_3116_ = l_Lean_Meta_matchNot_x3f(v___x_2653_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc(v_a_3117_);
lean_dec_ref_known(v___x_3116_, 1);
if (lean_obj_tag(v_a_3117_) == 1)
{
lean_object* v_val_3118_; lean_object* v___x_3119_; 
v_val_3118_ = lean_ctor_get(v_a_3117_, 0);
lean_inc(v_val_3118_);
lean_dec_ref_known(v_a_3117_, 1);
v___x_3119_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3118_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3119_, 1);
if (lean_obj_tag(v_a_3120_) == 1)
{
lean_object* v_val_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3162_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec_ref(v_config_2572_);
v_val_3121_ = lean_ctor_get(v_a_3120_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v_a_3120_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3123_ = v_a_3120_;
v_isShared_3124_ = v_isSharedCheck_3162_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_val_3121_);
lean_dec(v_a_3120_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3162_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3125_; 
lean_inc(v_mvarId_2573_);
v___x_3125_ = l_Lean_MVarId_getType(v_mvarId_2573_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref_known(v___x_3125_, 1);
v___x_3127_ = l_Lean_LocalDecl_toExpr(v_val_2617_);
v___x_3128_ = l_Lean_mkFVar(v_val_3121_);
v___x_3129_ = l_Lean_Expr_app___override(v___x_3127_, v___x_3128_);
v___x_3130_ = l_Lean_Meta_mkFalseElim(v_a_3126_, v___x_3129_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3132_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___x_3130_, 1);
v___x_3132_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2573_, v_a_3131_, v___y_2579_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v___x_3133_; lean_object* v___x_3135_; 
lean_dec_ref_known(v___x_3132_, 1);
v___x_3133_ = lean_box(v___x_2583_);
if (v_isShared_3124_ == 0)
{
lean_ctor_set(v___x_3123_, 0, v___x_3133_);
v___x_3135_ = v___x_3123_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v___x_3133_);
v___x_3135_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
lean_object* v___x_3136_; 
v___x_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3135_);
lean_ctor_set(v___x_3136_, 1, v___x_2621_);
v_a_2590_ = v___x_3136_;
goto v___jp_2589_;
}
}
else
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
lean_del_object(v___x_3123_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
v_a_3138_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3140_ = v___x_3132_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_3132_);
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
lean_del_object(v___x_3123_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_3146_ = lean_ctor_get(v___x_3130_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3130_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3130_);
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
lean_del_object(v___x_3123_);
lean_dec(v_val_3121_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_3154_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3125_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3125_);
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
}
else
{
lean_dec(v_a_3120_);
v___y_2983_ = v___y_2578_;
v___y_2984_ = v___y_2579_;
v___y_2985_ = v___y_2580_;
v___y_2986_ = v___y_2581_;
goto v___jp_2982_;
}
}
else
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_3163_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3119_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3119_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
else
{
lean_dec(v_a_3117_);
v___y_2983_ = v___y_2578_;
v___y_2984_ = v___y_2579_;
v___y_2985_ = v___y_2580_;
v___y_2986_ = v___y_2581_;
goto v___jp_2982_;
}
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_3171_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3116_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_3116_);
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
v___jp_2654_:
{
uint8_t v_genDiseq_2661_; 
v_genDiseq_2661_ = lean_ctor_get_uint8(v_config_2572_, sizeof(void*)*1 + 2);
if (v_genDiseq_2661_ == 0)
{
lean_dec_ref(v___x_2653_);
v___y_2624_ = v___y_2655_;
v___y_2625_ = v___y_2656_;
v___y_2626_ = v___y_2657_;
v___y_2627_ = v___y_2658_;
v___y_2628_ = v___y_2659_;
v___y_2629_ = v___y_2660_;
goto v___jp_2623_;
}
else
{
uint8_t v___x_2662_; 
v___x_2662_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_2653_);
lean_dec_ref(v___x_2653_);
if (v___x_2662_ == 0)
{
v___y_2624_ = v___y_2655_;
v___y_2625_ = v___y_2656_;
v___y_2626_ = v___y_2657_;
v___y_2627_ = v___y_2658_;
v___y_2628_ = v___y_2659_;
v___y_2629_ = v___y_2660_;
goto v___jp_2623_;
}
else
{
lean_object* v___x_2663_; 
lean_inc(v_val_2617_);
lean_inc(v_mvarId_2573_);
v___x_2663_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_2573_, v_val_2617_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; uint8_t v___x_2665_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v___x_2665_ = lean_unbox(v_a_2664_);
if (v___x_2665_ == 0)
{
lean_dec(v_a_2664_);
v___y_2624_ = v___y_2655_;
v___y_2625_ = v___y_2656_;
v___y_2626_ = v___y_2657_;
v___y_2627_ = v___y_2658_;
v___y_2628_ = v___y_2659_;
v___y_2629_ = v___y_2660_;
goto v___jp_2623_;
}
else
{
lean_object* v___x_2666_; lean_object* v___x_2667_; 
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v___x_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2666_, 0, v_a_2664_);
v___x_2667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2666_);
lean_ctor_set(v___x_2667_, 1, v___x_2621_);
v_a_2590_ = v___x_2667_;
goto v___jp_2589_;
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2668_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2663_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2663_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
}
}
v___jp_2676_:
{
uint8_t v___x_2684_; 
v___x_2684_ = l_Lean_Exception_isInterrupt(v_a_2683_);
if (v___x_2684_ == 0)
{
uint8_t v___x_2685_; 
lean_inc_ref(v_a_2683_);
v___x_2685_ = l_Lean_Exception_isRuntime(v_a_2683_);
if (v___x_2685_ == 0)
{
lean_dec_ref(v_a_2683_);
v___y_2655_ = v___y_2679_;
v___y_2656_ = v___y_2680_;
v___y_2657_ = v___y_2681_;
v___y_2658_ = v___y_2677_;
v___y_2659_ = v___y_2678_;
v___y_2660_ = v___y_2682_;
goto v___jp_2654_;
}
else
{
lean_object* v___x_2686_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v___x_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2686_, 0, v_a_2683_);
return v___x_2686_;
}
}
else
{
lean_object* v___x_2687_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v___x_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2687_, 0, v_a_2683_);
return v___x_2687_;
}
}
v___jp_2688_:
{
if (lean_obj_tag(v___y_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v___x_2698_; uint8_t v___x_2699_; 
v_a_2697_ = lean_ctor_get(v___y_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___y_2696_, 1);
v___x_2698_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_2699_ = l_Lean_Expr_isConstOf(v_a_2697_, v___x_2698_);
lean_dec(v_a_2697_);
if (v___x_2699_ == 0)
{
lean_dec_ref(v___y_2690_);
v___y_2655_ = v___y_2692_;
v___y_2656_ = v___y_2693_;
v___y_2657_ = v___y_2694_;
v___y_2658_ = v___y_2689_;
v___y_2659_ = v___y_2691_;
v___y_2660_ = v___y_2695_;
goto v___jp_2654_;
}
else
{
lean_object* v___x_2700_; 
lean_inc_ref(v___y_2690_);
v___x_2700_ = l_Lean_Meta_mkEqRefl(v___y_2690_, v___y_2694_, v___y_2689_, v___y_2691_, v___y_2695_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2702_; lean_object* v_dummy_2703_; lean_object* v_nargs_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
lean_dec_ref_known(v___x_2700_, 1);
v___x_2702_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_2703_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_2704_ = l_Lean_Expr_getAppNumArgs(v___y_2690_);
lean_inc(v_nargs_2704_);
v___x_2705_ = lean_mk_array(v_nargs_2704_, v_dummy_2703_);
v___x_2706_ = lean_unsigned_to_nat(1u);
v___x_2707_ = lean_nat_sub(v_nargs_2704_, v___x_2706_);
lean_dec(v_nargs_2704_);
v___x_2708_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_2690_, v___x_2705_, v___x_2707_);
v___x_2709_ = lean_array_push(v___x_2708_, v_a_2701_);
v___x_2710_ = l_Lean_mkAppN(v___x_2702_, v___x_2709_);
lean_dec_ref(v___x_2709_);
lean_inc(v_mvarId_2573_);
v___x_2711_ = l_Lean_MVarId_getType(v_mvarId_2573_, v___y_2694_, v___y_2689_, v___y_2691_, v___y_2695_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2712_);
lean_dec_ref_known(v___x_2711_, 1);
lean_inc(v_val_2617_);
v___x_2713_ = l_Lean_LocalDecl_toExpr(v_val_2617_);
v___x_2714_ = l_Lean_Meta_mkAbsurd(v_a_2712_, v___x_2713_, v___x_2710_, v___y_2694_, v___y_2689_, v___y_2691_, v___y_2695_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v___x_2716_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
lean_inc(v_a_2715_);
lean_dec_ref_known(v___x_2714_, 1);
lean_inc(v_mvarId_2573_);
v___x_2716_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2573_, v_a_2715_, v___y_2689_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2725_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2725_ == 0)
{
lean_object* v_unused_2726_; 
v_unused_2726_ = lean_ctor_get(v___x_2716_, 0);
lean_dec(v_unused_2726_);
v___x_2718_ = v___x_2716_;
v_isShared_2719_ = v_isSharedCheck_2725_;
goto v_resetjp_2717_;
}
else
{
lean_dec(v___x_2716_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2725_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2720_; lean_object* v___x_2722_; 
v___x_2720_ = lean_box(v___x_2699_);
if (v_isShared_2719_ == 0)
{
lean_ctor_set_tag(v___x_2718_, 1);
lean_ctor_set(v___x_2718_, 0, v___x_2720_);
v___x_2722_ = v___x_2718_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v___x_2720_);
v___x_2722_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
lean_object* v___x_2723_; 
v___x_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
lean_ctor_set(v___x_2723_, 1, v___x_2621_);
v_a_2590_ = v___x_2723_;
goto v___jp_2589_;
}
}
}
else
{
lean_object* v_a_2727_; 
v_a_2727_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2727_);
lean_dec_ref_known(v___x_2716_, 1);
v___y_2677_ = v___y_2689_;
v___y_2678_ = v___y_2691_;
v___y_2679_ = v___y_2692_;
v___y_2680_ = v___y_2693_;
v___y_2681_ = v___y_2694_;
v___y_2682_ = v___y_2695_;
v_a_2683_ = v_a_2727_;
goto v___jp_2676_;
}
}
else
{
lean_object* v_a_2728_; 
v_a_2728_ = lean_ctor_get(v___x_2714_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2714_, 1);
v___y_2677_ = v___y_2689_;
v___y_2678_ = v___y_2691_;
v___y_2679_ = v___y_2692_;
v___y_2680_ = v___y_2693_;
v___y_2681_ = v___y_2694_;
v___y_2682_ = v___y_2695_;
v_a_2683_ = v_a_2728_;
goto v___jp_2676_;
}
}
else
{
lean_object* v_a_2729_; 
lean_dec_ref(v___x_2710_);
v_a_2729_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2729_);
lean_dec_ref_known(v___x_2711_, 1);
v___y_2677_ = v___y_2689_;
v___y_2678_ = v___y_2691_;
v___y_2679_ = v___y_2692_;
v___y_2680_ = v___y_2693_;
v___y_2681_ = v___y_2694_;
v___y_2682_ = v___y_2695_;
v_a_2683_ = v_a_2729_;
goto v___jp_2676_;
}
}
else
{
lean_object* v_a_2730_; 
lean_dec_ref(v___y_2690_);
v_a_2730_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2730_);
lean_dec_ref_known(v___x_2700_, 1);
v___y_2677_ = v___y_2689_;
v___y_2678_ = v___y_2691_;
v___y_2679_ = v___y_2692_;
v___y_2680_ = v___y_2693_;
v___y_2681_ = v___y_2694_;
v___y_2682_ = v___y_2695_;
v_a_2683_ = v_a_2730_;
goto v___jp_2676_;
}
}
}
else
{
lean_object* v_a_2731_; 
lean_dec_ref(v___y_2690_);
v_a_2731_ = lean_ctor_get(v___y_2696_, 0);
lean_inc(v_a_2731_);
lean_dec_ref_known(v___y_2696_, 1);
v___y_2677_ = v___y_2689_;
v___y_2678_ = v___y_2691_;
v___y_2679_ = v___y_2692_;
v___y_2680_ = v___y_2693_;
v___y_2681_ = v___y_2694_;
v___y_2682_ = v___y_2695_;
v_a_2683_ = v_a_2731_;
goto v___jp_2676_;
}
}
v___jp_2732_:
{
uint8_t v_useDecide_2739_; 
v_useDecide_2739_ = lean_ctor_get_uint8(v_config_2572_, sizeof(void*)*1);
if (v_useDecide_2739_ == 0)
{
v___y_2655_ = v___y_2733_;
v___y_2656_ = v_isHEq_2734_;
v___y_2657_ = v___y_2735_;
v___y_2658_ = v___y_2736_;
v___y_2659_ = v___y_2737_;
v___y_2660_ = v___y_2738_;
goto v___jp_2654_;
}
else
{
uint8_t v___x_2740_; 
v___x_2740_ = l_Lean_Expr_hasFVar(v___x_2653_);
if (v___x_2740_ == 0)
{
lean_object* v___x_2741_; 
lean_inc_ref(v___x_2653_);
v___x_2741_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_2653_, v___y_2736_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_object* v_a_2742_; uint8_t v___x_2743_; 
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
lean_inc(v_a_2742_);
lean_dec_ref_known(v___x_2741_, 1);
v___x_2743_ = l_Lean_Expr_hasMVar(v_a_2742_);
if (v___x_2743_ == 0)
{
uint8_t v___x_2744_; 
v___x_2744_ = l_Lean_Expr_hasFVar(v_a_2742_);
lean_dec(v_a_2742_);
if (v___x_2744_ == 0)
{
lean_object* v___x_2745_; 
lean_inc_ref(v___x_2653_);
v___x_2745_ = l_Lean_Meta_mkDecide(v___x_2653_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2747_; uint8_t v_transparency_2748_; uint8_t v___x_2749_; uint8_t v___x_2750_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref_known(v___x_2745_, 1);
v___x_2747_ = l_Lean_Meta_Context_config(v___y_2735_);
v_transparency_2748_ = lean_ctor_get_uint8(v___x_2747_, 9);
lean_dec_ref(v___x_2747_);
v___x_2749_ = 1;
v___x_2750_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2748_, v___x_2749_);
if (v___x_2750_ == 0)
{
lean_object* v_keyedConfig_2751_; uint8_t v_trackZetaDelta_2752_; lean_object* v_zetaDeltaSet_2753_; lean_object* v_lctx_2754_; lean_object* v_localInstances_2755_; lean_object* v_defEqCtx_x3f_2756_; lean_object* v_synthPendingDepth_2757_; lean_object* v_customCanUnfoldPredicate_x3f_2758_; uint8_t v_univApprox_2759_; uint8_t v_inTypeClassResolution_2760_; uint8_t v_cacheInferType_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v_keyedConfig_2751_ = lean_ctor_get(v___y_2735_, 0);
v_trackZetaDelta_2752_ = lean_ctor_get_uint8(v___y_2735_, sizeof(void*)*7);
v_zetaDeltaSet_2753_ = lean_ctor_get(v___y_2735_, 1);
v_lctx_2754_ = lean_ctor_get(v___y_2735_, 2);
v_localInstances_2755_ = lean_ctor_get(v___y_2735_, 3);
v_defEqCtx_x3f_2756_ = lean_ctor_get(v___y_2735_, 4);
v_synthPendingDepth_2757_ = lean_ctor_get(v___y_2735_, 5);
v_customCanUnfoldPredicate_x3f_2758_ = lean_ctor_get(v___y_2735_, 6);
v_univApprox_2759_ = lean_ctor_get_uint8(v___y_2735_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2760_ = lean_ctor_get_uint8(v___y_2735_, sizeof(void*)*7 + 2);
v_cacheInferType_2761_ = lean_ctor_get_uint8(v___y_2735_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2751_);
v___x_2762_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2749_, v_keyedConfig_2751_);
lean_inc(v_customCanUnfoldPredicate_x3f_2758_);
lean_inc(v_synthPendingDepth_2757_);
lean_inc(v_defEqCtx_x3f_2756_);
lean_inc_ref(v_localInstances_2755_);
lean_inc_ref(v_lctx_2754_);
lean_inc(v_zetaDeltaSet_2753_);
v___x_2763_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2763_, 0, v___x_2762_);
lean_ctor_set(v___x_2763_, 1, v_zetaDeltaSet_2753_);
lean_ctor_set(v___x_2763_, 2, v_lctx_2754_);
lean_ctor_set(v___x_2763_, 3, v_localInstances_2755_);
lean_ctor_set(v___x_2763_, 4, v_defEqCtx_x3f_2756_);
lean_ctor_set(v___x_2763_, 5, v_synthPendingDepth_2757_);
lean_ctor_set(v___x_2763_, 6, v_customCanUnfoldPredicate_x3f_2758_);
lean_ctor_set_uint8(v___x_2763_, sizeof(void*)*7, v_trackZetaDelta_2752_);
lean_ctor_set_uint8(v___x_2763_, sizeof(void*)*7 + 1, v_univApprox_2759_);
lean_ctor_set_uint8(v___x_2763_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2760_);
lean_ctor_set_uint8(v___x_2763_, sizeof(void*)*7 + 3, v_cacheInferType_2761_);
lean_inc(v___y_2738_);
lean_inc_ref(v___y_2737_);
lean_inc(v___y_2736_);
lean_inc(v_a_2746_);
v___x_2764_ = lean_whnf(v_a_2746_, v___x_2763_, v___y_2736_, v___y_2737_, v___y_2738_);
v___y_2689_ = v___y_2736_;
v___y_2690_ = v_a_2746_;
v___y_2691_ = v___y_2737_;
v___y_2692_ = v___y_2733_;
v___y_2693_ = v_isHEq_2734_;
v___y_2694_ = v___y_2735_;
v___y_2695_ = v___y_2738_;
v___y_2696_ = v___x_2764_;
goto v___jp_2688_;
}
else
{
lean_object* v___x_2765_; 
lean_inc(v___y_2738_);
lean_inc_ref(v___y_2737_);
lean_inc(v___y_2736_);
lean_inc_ref(v___y_2735_);
lean_inc(v_a_2746_);
v___x_2765_ = lean_whnf(v_a_2746_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
v___y_2689_ = v___y_2736_;
v___y_2690_ = v_a_2746_;
v___y_2691_ = v___y_2737_;
v___y_2692_ = v___y_2733_;
v___y_2693_ = v_isHEq_2734_;
v___y_2694_ = v___y_2735_;
v___y_2695_ = v___y_2738_;
v___y_2696_ = v___x_2765_;
goto v___jp_2688_;
}
}
else
{
lean_object* v_a_2766_; 
v_a_2766_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2766_);
lean_dec_ref_known(v___x_2745_, 1);
v___y_2677_ = v___y_2736_;
v___y_2678_ = v___y_2737_;
v___y_2679_ = v___y_2733_;
v___y_2680_ = v_isHEq_2734_;
v___y_2681_ = v___y_2735_;
v___y_2682_ = v___y_2738_;
v_a_2683_ = v_a_2766_;
goto v___jp_2676_;
}
}
else
{
v___y_2655_ = v___y_2733_;
v___y_2656_ = v_isHEq_2734_;
v___y_2657_ = v___y_2735_;
v___y_2658_ = v___y_2736_;
v___y_2659_ = v___y_2737_;
v___y_2660_ = v___y_2738_;
goto v___jp_2654_;
}
}
else
{
lean_dec(v_a_2742_);
v___y_2655_ = v___y_2733_;
v___y_2656_ = v_isHEq_2734_;
v___y_2657_ = v___y_2735_;
v___y_2658_ = v___y_2736_;
v___y_2659_ = v___y_2737_;
v___y_2660_ = v___y_2738_;
goto v___jp_2654_;
}
}
else
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2774_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2767_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2769_ = v___x_2741_;
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2741_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2772_; 
if (v_isShared_2770_ == 0)
{
v___x_2772_ = v___x_2769_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2767_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
}
else
{
v___y_2655_ = v___y_2733_;
v___y_2656_ = v_isHEq_2734_;
v___y_2657_ = v___y_2735_;
v___y_2658_ = v___y_2736_;
v___y_2659_ = v___y_2737_;
v___y_2660_ = v___y_2738_;
goto v___jp_2654_;
}
}
}
v___jp_2775_:
{
lean_object* v___x_2781_; 
lean_inc_ref(v___x_2653_);
v___x_2781_ = l_Lean_Meta_matchHEq_x3f(v___x_2653_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v___x_2781_, 1);
if (lean_obj_tag(v_a_2782_) == 1)
{
lean_object* v_val_2783_; lean_object* v_snd_2784_; lean_object* v_snd_2785_; lean_object* v_fst_2786_; lean_object* v_fst_2787_; lean_object* v_fst_2788_; lean_object* v_snd_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2882_; 
v_val_2783_ = lean_ctor_get(v_a_2782_, 0);
lean_inc(v_val_2783_);
lean_dec_ref_known(v_a_2782_, 1);
v_snd_2784_ = lean_ctor_get(v_val_2783_, 1);
lean_inc(v_snd_2784_);
v_snd_2785_ = lean_ctor_get(v_snd_2784_, 1);
lean_inc(v_snd_2785_);
v_fst_2786_ = lean_ctor_get(v_val_2783_, 0);
lean_inc(v_fst_2786_);
lean_dec(v_val_2783_);
v_fst_2787_ = lean_ctor_get(v_snd_2784_, 0);
lean_inc(v_fst_2787_);
lean_dec(v_snd_2784_);
v_fst_2788_ = lean_ctor_get(v_snd_2785_, 0);
v_snd_2789_ = lean_ctor_get(v_snd_2785_, 1);
v_isSharedCheck_2882_ = !lean_is_exclusive(v_snd_2785_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2791_ = v_snd_2785_;
v_isShared_2792_ = v_isSharedCheck_2882_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_snd_2789_);
lean_inc(v_fst_2788_);
lean_dec(v_snd_2785_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2882_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2787_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_a_2794_);
lean_dec_ref_known(v___x_2793_, 1);
if (lean_obj_tag(v_a_2794_) == 1)
{
lean_object* v_val_2795_; lean_object* v___x_2796_; 
v_val_2795_ = lean_ctor_get(v_a_2794_, 0);
lean_inc(v_val_2795_);
lean_dec_ref_known(v_a_2794_, 1);
v___x_2796_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2789_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2797_; 
v_a_2797_ = lean_ctor_get(v___x_2796_, 0);
lean_inc(v_a_2797_);
lean_dec_ref_known(v___x_2796_, 1);
if (lean_obj_tag(v_a_2797_) == 1)
{
lean_object* v_toConstantVal_2798_; lean_object* v_val_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2865_; 
v_toConstantVal_2798_ = lean_ctor_get(v_val_2795_, 0);
lean_inc_ref(v_toConstantVal_2798_);
lean_dec(v_val_2795_);
v_val_2799_ = lean_ctor_get(v_a_2797_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v_a_2797_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2801_ = v_a_2797_;
v_isShared_2802_ = v_isSharedCheck_2865_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_val_2799_);
lean_dec(v_a_2797_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2865_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v_toConstantVal_2803_; lean_object* v_name_2804_; lean_object* v_name_2805_; uint8_t v___x_2806_; 
v_toConstantVal_2803_ = lean_ctor_get(v_val_2799_, 0);
lean_inc_ref(v_toConstantVal_2803_);
lean_dec(v_val_2799_);
v_name_2804_ = lean_ctor_get(v_toConstantVal_2798_, 0);
lean_inc(v_name_2804_);
lean_dec_ref(v_toConstantVal_2798_);
v_name_2805_ = lean_ctor_get(v_toConstantVal_2803_, 0);
lean_inc(v_name_2805_);
lean_dec_ref(v_toConstantVal_2803_);
v___x_2806_ = lean_name_eq(v_name_2804_, v_name_2805_);
lean_dec(v_name_2805_);
lean_dec(v_name_2804_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; 
v___x_2807_ = l_Lean_Meta_isExprDefEq(v_fst_2786_, v_fst_2788_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; uint8_t v___x_2809_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2809_ = lean_unbox(v_a_2808_);
lean_dec(v_a_2808_);
if (v___x_2809_ == 0)
{
lean_del_object(v___x_2801_);
lean_del_object(v___x_2791_);
v___y_2733_ = v_isEq_2776_;
v_isHEq_2734_ = v___x_2583_;
v___y_2735_ = v___y_2777_;
v___y_2736_ = v___y_2778_;
v___y_2737_ = v___y_2779_;
v___y_2738_ = v___y_2780_;
goto v___jp_2732_;
}
else
{
lean_object* v___x_2810_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec_ref(v_config_2572_);
lean_inc(v_mvarId_2573_);
v___x_2810_ = l_Lean_MVarId_getType(v_mvarId_2573_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v___x_2812_ = l_Lean_LocalDecl_toExpr(v_val_2617_);
v___x_2813_ = l_Lean_Meta_mkEqOfHEq(v___x_2812_, v___x_2583_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v___x_2815_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v___x_2815_ = l_Lean_Meta_mkNoConfusion(v_a_2811_, v_a_2814_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___x_2817_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2815_, 1);
v___x_2817_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2573_, v_a_2816_, v___y_2778_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v___x_2818_; lean_object* v___x_2820_; 
lean_dec_ref_known(v___x_2817_, 1);
v___x_2818_ = lean_box(v___x_2583_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 0, v___x_2818_);
v___x_2820_ = v___x_2801_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2818_);
v___x_2820_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
lean_object* v___x_2822_; 
if (v_isShared_2792_ == 0)
{
lean_ctor_set(v___x_2791_, 1, v___x_2621_);
lean_ctor_set(v___x_2791_, 0, v___x_2820_);
v___x_2822_ = v___x_2791_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2823_, 1, v___x_2621_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
v_a_2590_ = v___x_2822_;
goto v___jp_2589_;
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_del_object(v___x_2801_);
lean_del_object(v___x_2791_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
v_a_2825_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2817_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2817_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_del_object(v___x_2801_);
lean_del_object(v___x_2791_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_2833_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2815_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2815_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec(v_a_2811_);
lean_del_object(v___x_2801_);
lean_del_object(v___x_2791_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_2841_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2813_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2813_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
lean_del_object(v___x_2801_);
lean_del_object(v___x_2791_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_2849_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2810_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2810_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
lean_del_object(v___x_2801_);
lean_del_object(v___x_2791_);
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2857_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2807_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2807_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
else
{
lean_del_object(v___x_2801_);
lean_del_object(v___x_2791_);
lean_dec(v_fst_2788_);
lean_dec(v_fst_2786_);
v___y_2733_ = v_isEq_2776_;
v_isHEq_2734_ = v___x_2583_;
v___y_2735_ = v___y_2777_;
v___y_2736_ = v___y_2778_;
v___y_2737_ = v___y_2779_;
v___y_2738_ = v___y_2780_;
goto v___jp_2732_;
}
}
}
else
{
lean_dec(v_a_2797_);
lean_dec(v_val_2795_);
lean_del_object(v___x_2791_);
lean_dec(v_fst_2788_);
lean_dec(v_fst_2786_);
v___y_2733_ = v_isEq_2776_;
v_isHEq_2734_ = v___x_2583_;
v___y_2735_ = v___y_2777_;
v___y_2736_ = v___y_2778_;
v___y_2737_ = v___y_2779_;
v___y_2738_ = v___y_2780_;
goto v___jp_2732_;
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
lean_dec(v_val_2795_);
lean_del_object(v___x_2791_);
lean_dec(v_fst_2788_);
lean_dec(v_fst_2786_);
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2866_ = lean_ctor_get(v___x_2796_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___x_2796_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2796_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
else
{
lean_dec(v_a_2794_);
lean_del_object(v___x_2791_);
lean_dec(v_snd_2789_);
lean_dec(v_fst_2788_);
lean_dec(v_fst_2786_);
v___y_2733_ = v_isEq_2776_;
v_isHEq_2734_ = v___x_2583_;
v___y_2735_ = v___y_2777_;
v___y_2736_ = v___y_2778_;
v___y_2737_ = v___y_2779_;
v___y_2738_ = v___y_2780_;
goto v___jp_2732_;
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
lean_del_object(v___x_2791_);
lean_dec(v_snd_2789_);
lean_dec(v_fst_2788_);
lean_dec(v_fst_2786_);
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2874_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2793_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2793_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
}
else
{
lean_dec(v_a_2782_);
v___y_2733_ = v_isEq_2776_;
v_isHEq_2734_ = v___x_2652_;
v___y_2735_ = v___y_2777_;
v___y_2736_ = v___y_2778_;
v___y_2737_ = v___y_2779_;
v___y_2738_ = v___y_2780_;
goto v___jp_2732_;
}
}
else
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2883_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v___x_2781_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2781_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
}
}
v___jp_2891_:
{
lean_object* v___x_2896_; 
lean_inc_ref(v___x_2653_);
v___x_2896_ = l_Lean_Meta_matchEq_x3f(v___x_2653_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___x_2896_, 1);
if (lean_obj_tag(v_a_2897_) == 1)
{
lean_object* v_val_2898_; lean_object* v_snd_2899_; lean_object* v_fst_2900_; lean_object* v_snd_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2973_; 
v_val_2898_ = lean_ctor_get(v_a_2897_, 0);
lean_inc(v_val_2898_);
lean_dec_ref_known(v_a_2897_, 1);
v_snd_2899_ = lean_ctor_get(v_val_2898_, 1);
lean_inc(v_snd_2899_);
lean_dec(v_val_2898_);
v_fst_2900_ = lean_ctor_get(v_snd_2899_, 0);
v_snd_2901_ = lean_ctor_get(v_snd_2899_, 1);
v_isSharedCheck_2973_ = !lean_is_exclusive(v_snd_2899_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2903_ = v_snd_2899_;
v_isShared_2904_ = v_isSharedCheck_2973_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_snd_2901_);
lean_inc(v_fst_2900_);
lean_dec(v_snd_2899_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2973_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2900_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref_known(v___x_2905_, 1);
if (lean_obj_tag(v_a_2906_) == 1)
{
lean_object* v_val_2907_; lean_object* v___x_2908_; 
v_val_2907_ = lean_ctor_get(v_a_2906_, 0);
lean_inc(v_val_2907_);
lean_dec_ref_known(v_a_2906_, 1);
v___x_2908_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2901_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; 
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_a_2909_);
lean_dec_ref_known(v___x_2908_, 1);
if (lean_obj_tag(v_a_2909_) == 1)
{
lean_object* v_toConstantVal_2910_; lean_object* v_val_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2956_; 
v_toConstantVal_2910_ = lean_ctor_get(v_val_2907_, 0);
lean_inc_ref(v_toConstantVal_2910_);
lean_dec(v_val_2907_);
v_val_2911_ = lean_ctor_get(v_a_2909_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v_a_2909_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2913_ = v_a_2909_;
v_isShared_2914_ = v_isSharedCheck_2956_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_val_2911_);
lean_dec(v_a_2909_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2956_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v_toConstantVal_2915_; lean_object* v_name_2916_; lean_object* v_name_2917_; uint8_t v___x_2918_; 
v_toConstantVal_2915_ = lean_ctor_get(v_val_2911_, 0);
lean_inc_ref(v_toConstantVal_2915_);
lean_dec(v_val_2911_);
v_name_2916_ = lean_ctor_get(v_toConstantVal_2910_, 0);
lean_inc(v_name_2916_);
lean_dec_ref(v_toConstantVal_2910_);
v_name_2917_ = lean_ctor_get(v_toConstantVal_2915_, 0);
lean_inc(v_name_2917_);
lean_dec_ref(v_toConstantVal_2915_);
v___x_2918_ = lean_name_eq(v_name_2916_, v_name_2917_);
lean_dec(v_name_2917_);
lean_dec(v_name_2916_);
if (v___x_2918_ == 0)
{
lean_object* v___x_2919_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec_ref(v_config_2572_);
lean_inc(v_mvarId_2573_);
v___x_2919_ = l_Lean_MVarId_getType(v_mvarId_2573_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v_a_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_a_2920_);
lean_dec_ref_known(v___x_2919_, 1);
v___x_2921_ = l_Lean_LocalDecl_toExpr(v_val_2617_);
v___x_2922_ = l_Lean_Meta_mkNoConfusion(v_a_2920_, v___x_2921_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v_a_2923_; lean_object* v___x_2924_; 
v_a_2923_ = lean_ctor_get(v___x_2922_, 0);
lean_inc(v_a_2923_);
lean_dec_ref_known(v___x_2922_, 1);
v___x_2924_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2573_, v_a_2923_, v___y_2893_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_object* v___x_2925_; lean_object* v___x_2927_; 
lean_dec_ref_known(v___x_2924_, 1);
v___x_2925_ = lean_box(v___x_2583_);
if (v_isShared_2914_ == 0)
{
lean_ctor_set(v___x_2913_, 0, v___x_2925_);
v___x_2927_ = v___x_2913_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___x_2925_);
v___x_2927_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
lean_object* v___x_2929_; 
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 1, v___x_2621_);
lean_ctor_set(v___x_2903_, 0, v___x_2927_);
v___x_2929_ = v___x_2903_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v___x_2621_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
v_a_2590_ = v___x_2929_;
goto v___jp_2589_;
}
}
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_del_object(v___x_2913_);
lean_del_object(v___x_2903_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
v_a_2932_ = lean_ctor_get(v___x_2924_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2924_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2924_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2924_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
lean_del_object(v___x_2913_);
lean_del_object(v___x_2903_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_2940_ = lean_ctor_get(v___x_2922_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___x_2922_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2922_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
lean_del_object(v___x_2913_);
lean_del_object(v___x_2903_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_2948_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2919_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2919_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
else
{
lean_del_object(v___x_2913_);
lean_del_object(v___x_2903_);
v_isEq_2776_ = v___x_2583_;
v___y_2777_ = v___y_2892_;
v___y_2778_ = v___y_2893_;
v___y_2779_ = v___y_2894_;
v___y_2780_ = v___y_2895_;
goto v___jp_2775_;
}
}
}
else
{
lean_dec(v_a_2909_);
lean_dec(v_val_2907_);
lean_del_object(v___x_2903_);
v_isEq_2776_ = v___x_2583_;
v___y_2777_ = v___y_2892_;
v___y_2778_ = v___y_2893_;
v___y_2779_ = v___y_2894_;
v___y_2780_ = v___y_2895_;
goto v___jp_2775_;
}
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2964_; 
lean_dec(v_val_2907_);
lean_del_object(v___x_2903_);
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2957_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2959_ = v___x_2908_;
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2908_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
}
else
{
lean_dec(v_a_2906_);
lean_del_object(v___x_2903_);
lean_dec(v_snd_2901_);
v_isEq_2776_ = v___x_2583_;
v___y_2777_ = v___y_2892_;
v___y_2778_ = v___y_2893_;
v___y_2779_ = v___y_2894_;
v___y_2780_ = v___y_2895_;
goto v___jp_2775_;
}
}
else
{
lean_object* v_a_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2972_; 
lean_del_object(v___x_2903_);
lean_dec(v_snd_2901_);
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2965_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2967_ = v___x_2905_;
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_a_2965_);
lean_dec(v___x_2905_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2970_; 
if (v_isShared_2968_ == 0)
{
v___x_2970_ = v___x_2967_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_a_2965_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
}
else
{
lean_dec(v_a_2897_);
v_isEq_2776_ = v___x_2652_;
v___y_2777_ = v___y_2892_;
v___y_2778_ = v___y_2893_;
v___y_2779_ = v___y_2894_;
v___y_2780_ = v___y_2895_;
goto v___jp_2775_;
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2974_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2896_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2896_);
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
}
v___jp_2982_:
{
lean_object* v___x_2987_; 
lean_inc_ref(v___x_2653_);
v___x_2987_ = l_Lean_refutableHasNotBit_x3f(v___x_2653_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2988_);
lean_dec_ref_known(v___x_2987_, 1);
if (lean_obj_tag(v_a_2988_) == 1)
{
lean_object* v_val_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3028_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec_ref(v_config_2572_);
v_val_2989_ = lean_ctor_get(v_a_2988_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_a_2988_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_2991_ = v_a_2988_;
v_isShared_2992_ = v_isSharedCheck_3028_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_val_2989_);
lean_dec(v_a_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3028_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2993_; 
lean_inc(v_mvarId_2573_);
v___x_2993_ = l_Lean_MVarId_getType(v_mvarId_2573_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_a_2994_);
lean_dec_ref_known(v___x_2993_, 1);
v___x_2995_ = l_Lean_LocalDecl_toExpr(v_val_2617_);
v___x_2996_ = l_Lean_Meta_mkAbsurd(v_a_2994_, v_val_2989_, v___x_2995_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2998_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_a_2997_);
lean_dec_ref_known(v___x_2996_, 1);
v___x_2998_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2573_, v_a_2997_, v___y_2984_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v___x_2999_; lean_object* v___x_3001_; 
lean_dec_ref_known(v___x_2998_, 1);
v___x_2999_ = lean_box(v___x_2583_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v___x_2999_);
v___x_3001_ = v___x_2991_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v___x_2999_);
v___x_3001_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
lean_object* v___x_3002_; 
v___x_3002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3002_, 0, v___x_3001_);
lean_ctor_set(v___x_3002_, 1, v___x_2621_);
v_a_2590_ = v___x_3002_;
goto v___jp_2589_;
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_del_object(v___x_2991_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
v_a_3004_ = lean_ctor_get(v___x_2998_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2998_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2998_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_del_object(v___x_2991_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_3012_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_2996_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_2996_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
lean_del_object(v___x_2991_);
lean_dec(v_val_2989_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_3020_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3022_ = v___x_2993_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_2993_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
}
else
{
lean_object* v___x_3029_; 
lean_dec(v_a_2988_);
lean_inc_ref(v___x_2653_);
v___x_3029_ = l_Lean_Meta_matchNe_x3f(v___x_2653_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref_known(v___x_3029_, 1);
if (lean_obj_tag(v_a_3030_) == 1)
{
lean_object* v_val_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3099_; 
v_val_3031_ = lean_ctor_get(v_a_3030_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v_a_3030_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3033_ = v_a_3030_;
v_isShared_3034_ = v_isSharedCheck_3099_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_val_3031_);
lean_dec(v_a_3030_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3099_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v_snd_3035_; lean_object* v_fst_3036_; lean_object* v_snd_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3098_; 
v_snd_3035_ = lean_ctor_get(v_val_3031_, 1);
lean_inc(v_snd_3035_);
lean_dec(v_val_3031_);
v_fst_3036_ = lean_ctor_get(v_snd_3035_, 0);
v_snd_3037_ = lean_ctor_get(v_snd_3035_, 1);
v_isSharedCheck_3098_ = !lean_is_exclusive(v_snd_3035_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3039_ = v_snd_3035_;
v_isShared_3040_ = v_isSharedCheck_3098_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_snd_3037_);
lean_inc(v_fst_3036_);
lean_dec(v_snd_3035_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3098_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3041_; 
lean_inc(v_fst_3036_);
v___x_3041_ = l_Lean_Meta_isExprDefEq(v_fst_3036_, v_snd_3037_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v_a_3042_; uint8_t v___x_3043_; 
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3042_);
lean_dec_ref_known(v___x_3041_, 1);
v___x_3043_ = lean_unbox(v_a_3042_);
if (v___x_3043_ == 0)
{
lean_dec(v_a_3042_);
lean_del_object(v___x_3039_);
lean_dec(v_fst_3036_);
lean_del_object(v___x_3033_);
v___y_2892_ = v___y_2983_;
v___y_2893_ = v___y_2984_;
v___y_2894_ = v___y_2985_;
v___y_2895_ = v___y_2986_;
goto v___jp_2891_;
}
else
{
lean_object* v___x_3044_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec_ref(v_config_2572_);
lean_inc(v_mvarId_2573_);
v___x_3044_ = l_Lean_MVarId_getType(v_mvarId_2573_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3046_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3045_);
lean_dec_ref_known(v___x_3044_, 1);
v___x_3046_ = l_Lean_Meta_mkEqRefl(v_fst_3036_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_3046_) == 0)
{
lean_object* v_a_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v_a_3047_ = lean_ctor_get(v___x_3046_, 0);
lean_inc(v_a_3047_);
lean_dec_ref_known(v___x_3046_, 1);
v___x_3048_ = l_Lean_LocalDecl_toExpr(v_val_2617_);
v___x_3049_ = l_Lean_Meta_mkAbsurd(v_a_3045_, v_a_3047_, v___x_3048_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v___x_3051_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2573_, v_a_3050_, v___y_2984_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v___x_3053_; 
lean_dec_ref_known(v___x_3051_, 1);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 0, v_a_3042_);
v___x_3053_ = v___x_3033_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3042_);
v___x_3053_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3055_; 
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 1, v___x_2621_);
lean_ctor_set(v___x_3039_, 0, v___x_3053_);
v___x_3055_ = v___x_3039_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
lean_ctor_set(v_reuseFailAlloc_3056_, 1, v___x_2621_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
v_a_2590_ = v___x_3055_;
goto v___jp_2589_;
}
}
}
else
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
lean_dec(v_a_3042_);
lean_del_object(v___x_3039_);
lean_del_object(v___x_3033_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
v_a_3058_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_3051_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_3051_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
lean_dec(v_a_3042_);
lean_del_object(v___x_3039_);
lean_del_object(v___x_3033_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_3066_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3049_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3049_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
else
{
lean_object* v_a_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3081_; 
lean_dec(v_a_3045_);
lean_dec(v_a_3042_);
lean_del_object(v___x_3039_);
lean_del_object(v___x_3033_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_3074_ = lean_ctor_get(v___x_3046_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3046_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3076_ = v___x_3046_;
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_a_3074_);
lean_dec(v___x_3046_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3079_; 
if (v_isShared_3077_ == 0)
{
v___x_3079_ = v___x_3076_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3074_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
else
{
lean_object* v_a_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3089_; 
lean_dec(v_a_3042_);
lean_del_object(v___x_3039_);
lean_dec(v_fst_3036_);
lean_del_object(v___x_3033_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
v_a_3082_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3084_ = v___x_3044_;
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_a_3082_);
lean_dec(v___x_3044_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3087_; 
if (v_isShared_3085_ == 0)
{
v___x_3087_ = v___x_3084_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_a_3082_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_del_object(v___x_3039_);
lean_dec(v_fst_3036_);
lean_del_object(v___x_3033_);
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_3090_ = lean_ctor_get(v___x_3041_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3041_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3041_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3090_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3030_);
v___y_2892_ = v___y_2983_;
v___y_2893_ = v___y_2984_;
v___y_2894_ = v___y_2985_;
v___y_2895_ = v___y_2986_;
goto v___jp_2891_;
}
}
else
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_3100_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3029_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3029_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec_ref(v___x_2653_);
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_3108_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_2987_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_2987_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
}
else
{
lean_object* v___x_3179_; 
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
v___x_3179_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_2622_, v___x_2621_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
v___y_2604_ = v___x_3179_;
goto v___jp_2603_;
}
v___jp_2623_:
{
uint8_t v_emptyType_2630_; 
v_emptyType_2630_ = lean_ctor_get_uint8(v_config_2572_, sizeof(void*)*1 + 1);
if (v_emptyType_2630_ == 0)
{
lean_object* v___x_2631_; 
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
v___x_2631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_2622_, v___x_2621_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
v___y_2604_ = v___x_2631_;
goto v___jp_2603_;
}
else
{
if (v___y_2624_ == 0)
{
if (v___y_2625_ == 0)
{
lean_object* v_searchFuel_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v_searchFuel_2632_ = lean_ctor_get(v_config_2572_, 0);
v___x_2633_ = l_Lean_LocalDecl_fvarId(v_val_2617_);
lean_dec(v_val_2617_);
lean_inc(v_searchFuel_2632_);
lean_inc(v_mvarId_2573_);
v___x_2634_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_2573_, v___x_2633_, v_searchFuel_2632_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; uint8_t v___x_2636_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2634_, 1);
v___x_2636_ = lean_unbox(v_a_2635_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; 
lean_dec(v_a_2635_);
lean_del_object(v___x_2619_);
v___x_2637_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_2622_, v___x_2621_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
v___y_2604_ = v___x_2637_;
goto v___jp_2603_;
}
else
{
lean_object* v___x_2639_; 
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 0, v_a_2635_);
v___x_2639_ = v___x_2619_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v_a_2635_);
v___x_2639_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
lean_object* v___x_2640_; 
v___x_2640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
lean_ctor_set(v___x_2640_, 1, v___x_2621_);
v_a_2590_ = v___x_2640_;
goto v___jp_2589_;
}
}
}
else
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2649_; 
lean_del_object(v___x_2619_);
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2642_ = lean_ctor_get(v___x_2634_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2644_ = v___x_2634_;
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2634_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2647_; 
if (v_isShared_2645_ == 0)
{
v___x_2647_ = v___x_2644_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2642_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
else
{
lean_object* v___x_2650_; 
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
v___x_2650_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_2622_, v___x_2621_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
v___y_2604_ = v___x_2650_;
goto v___jp_2603_;
}
}
else
{
lean_object* v___x_2651_; 
lean_del_object(v___x_2619_);
lean_dec(v_val_2617_);
v___x_2651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_2622_, v___x_2621_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
v___y_2604_ = v___x_2651_;
goto v___jp_2603_;
}
}
}
}
}
v___jp_2589_:
{
lean_object* v___x_2591_; lean_object* v___x_2593_; 
v___x_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2591_, 0, v_a_2590_);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 0, v___x_2591_);
v___x_2593_ = v___x_2587_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v___x_2591_);
lean_ctor_set(v_reuseFailAlloc_2595_, 1, v_snd_2585_);
v___x_2593_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
lean_object* v___x_2594_; 
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
}
v___jp_2597_:
{
lean_object* v___x_2599_; size_t v___x_2600_; size_t v___x_2601_; lean_object* v___x_2602_; 
v___x_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2596_);
lean_ctor_set(v___x_2599_, 1, v_a_2598_);
v___x_2600_ = ((size_t)1ULL);
v___x_2601_ = lean_usize_add(v_i_2576_, v___x_2600_);
v___x_2602_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2572_, v_mvarId_2573_, v_as_2574_, v_sz_2575_, v___x_2601_, v___x_2599_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
return v___x_2602_;
}
v___jp_2603_:
{
if (lean_obj_tag(v___y_2604_) == 0)
{
lean_object* v_a_2605_; 
v_a_2605_ = lean_ctor_get(v___y_2604_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___y_2604_, 1);
if (lean_obj_tag(v_a_2605_) == 0)
{
lean_object* v_a_2606_; 
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2606_ = lean_ctor_get(v_a_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref_known(v_a_2605_, 1);
v_a_2590_ = v_a_2606_;
goto v___jp_2589_;
}
else
{
lean_object* v_a_2607_; 
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
v_a_2607_ = lean_ctor_get(v_a_2605_, 0);
lean_inc(v_a_2607_);
lean_dec_ref_known(v_a_2605_, 1);
v_a_2598_ = v_a_2607_;
goto v___jp_2597_;
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
lean_del_object(v___x_2587_);
lean_dec(v_snd_2585_);
lean_dec(v_mvarId_2573_);
lean_dec_ref(v_config_2572_);
v_a_2608_ = lean_ctor_get(v___y_2604_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___y_2604_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___y_2604_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___y_2604_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object* v_config_3183_, lean_object* v_mvarId_3184_, lean_object* v_as_3185_, lean_object* v_sz_3186_, lean_object* v_i_3187_, lean_object* v_b_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_){
_start:
{
size_t v_sz_boxed_3194_; size_t v_i_boxed_3195_; lean_object* v_res_3196_; 
v_sz_boxed_3194_ = lean_unbox_usize(v_sz_3186_);
lean_dec(v_sz_3186_);
v_i_boxed_3195_ = lean_unbox_usize(v_i_3187_);
lean_dec(v_i_3187_);
v_res_3196_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_3183_, v_mvarId_3184_, v_as_3185_, v_sz_boxed_3194_, v_i_boxed_3195_, v_b_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec(v___y_3190_);
lean_dec_ref(v___y_3189_);
lean_dec_ref(v_as_3185_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object* v_config_3200_, lean_object* v_mvarId_3201_, lean_object* v_as_3202_, size_t v_sz_3203_, size_t v_i_3204_, lean_object* v_b_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
uint8_t v___x_3211_; 
v___x_3211_ = lean_usize_dec_lt(v_i_3204_, v_sz_3203_);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; 
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v___x_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3212_, 0, v_b_3205_);
return v___x_3212_;
}
else
{
lean_object* v_snd_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3840_; 
v_snd_3213_ = lean_ctor_get(v_b_3205_, 1);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_b_3205_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; 
v_unused_3841_ = lean_ctor_get(v_b_3205_, 0);
lean_dec(v_unused_3841_);
v___x_3215_ = v_b_3205_;
v_isShared_3216_ = v_isSharedCheck_3840_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_snd_3213_);
lean_dec(v_b_3205_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3840_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v_a_3218_; lean_object* v___x_3224_; lean_object* v_a_3226_; lean_object* v___y_3232_; lean_object* v_a_3243_; 
v___x_3224_ = lean_box(0);
v_a_3243_ = lean_array_uget(v_as_3202_, v_i_3204_);
if (lean_obj_tag(v_a_3243_) == 0)
{
lean_del_object(v___x_3215_);
v_a_3226_ = v_snd_3213_;
goto v___jp_3225_;
}
else
{
lean_object* v_val_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3839_; 
v_val_3244_ = lean_ctor_get(v_a_3243_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v_a_3243_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3246_ = v_a_3243_;
v_isShared_3247_ = v_isSharedCheck_3839_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_val_3244_);
lean_dec(v_a_3243_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3839_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; uint8_t v___y_3251_; uint8_t v___y_3252_; lean_object* v___y_3253_; lean_object* v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; uint8_t v___x_3280_; 
v___x_3248_ = lean_box(0);
v___x_3249_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3280_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3244_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; uint8_t v___y_3283_; uint8_t v___y_3284_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3287_; lean_object* v___y_3288_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; uint8_t v___y_3309_; uint8_t v___y_3310_; lean_object* v___y_3311_; lean_object* v_a_3312_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; uint8_t v___y_3322_; uint8_t v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3325_; uint8_t v___y_3369_; uint8_t v_isHEq_3370_; lean_object* v___y_3371_; lean_object* v___y_3372_; lean_object* v___y_3373_; lean_object* v___y_3374_; uint8_t v_isEq_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___y_3416_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3633_; lean_object* v___y_3634_; lean_object* v___y_3635_; lean_object* v___y_3636_; lean_object* v___x_3768_; 
v___x_3281_ = l_Lean_LocalDecl_type(v_val_3244_);
lean_inc_ref(v___x_3281_);
v___x_3768_ = l_Lean_Meta_matchNot_x3f(v___x_3281_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_a_3769_);
lean_dec_ref_known(v___x_3768_, 1);
if (lean_obj_tag(v_a_3769_) == 1)
{
lean_object* v_val_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3829_; 
v_val_3770_ = lean_ctor_get(v_a_3769_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v_a_3769_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3772_ = v_a_3769_;
v_isShared_3773_ = v_isSharedCheck_3829_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_val_3770_);
lean_dec(v_a_3769_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3829_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3770_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_a_3775_; 
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
lean_inc(v_a_3775_);
lean_dec_ref_known(v___x_3774_, 1);
if (lean_obj_tag(v_a_3775_) == 1)
{
lean_object* v_val_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3820_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec_ref(v_config_3200_);
v_val_3776_ = lean_ctor_get(v_a_3775_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v_a_3775_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3778_ = v_a_3775_;
v_isShared_3779_ = v_isSharedCheck_3820_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_val_3776_);
lean_dec(v_a_3775_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3820_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3780_; 
lean_inc(v_mvarId_3201_);
v___x_3780_ = l_Lean_MVarId_getType(v_mvarId_3201_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
if (lean_obj_tag(v___x_3780_) == 0)
{
lean_object* v_a_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; 
v_a_3781_ = lean_ctor_get(v___x_3780_, 0);
lean_inc(v_a_3781_);
lean_dec_ref_known(v___x_3780_, 1);
v___x_3782_ = l_Lean_LocalDecl_toExpr(v_val_3244_);
v___x_3783_ = l_Lean_mkFVar(v_val_3776_);
v___x_3784_ = l_Lean_Expr_app___override(v___x_3782_, v___x_3783_);
v___x_3785_ = l_Lean_Meta_mkFalseElim(v_a_3781_, v___x_3784_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
if (lean_obj_tag(v___x_3785_) == 0)
{
lean_object* v_a_3786_; lean_object* v___x_3787_; 
v_a_3786_ = lean_ctor_get(v___x_3785_, 0);
lean_inc(v_a_3786_);
lean_dec_ref_known(v___x_3785_, 1);
v___x_3787_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3201_, v_a_3786_, v___y_3207_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v___x_3788_; lean_object* v___x_3790_; 
lean_dec_ref_known(v___x_3787_, 1);
v___x_3788_ = lean_box(v___x_3211_);
if (v_isShared_3779_ == 0)
{
lean_ctor_set(v___x_3778_, 0, v___x_3788_);
v___x_3790_ = v___x_3778_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v___x_3788_);
v___x_3790_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
lean_object* v___x_3791_; lean_object* v___x_3793_; 
v___x_3791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3790_);
lean_ctor_set(v___x_3791_, 1, v___x_3248_);
if (v_isShared_3773_ == 0)
{
lean_ctor_set_tag(v___x_3772_, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3791_);
v___x_3793_ = v___x_3772_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v___x_3791_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
v_a_3218_ = v___x_3793_;
goto v___jp_3217_;
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_del_object(v___x_3778_);
lean_del_object(v___x_3772_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
v_a_3796_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3787_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3787_);
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
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
lean_del_object(v___x_3778_);
lean_del_object(v___x_3772_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3804_ = lean_ctor_get(v___x_3785_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3785_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3806_ = v___x_3785_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3785_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3804_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
else
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3819_; 
lean_del_object(v___x_3778_);
lean_dec(v_val_3776_);
lean_del_object(v___x_3772_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3812_ = lean_ctor_get(v___x_3780_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3780_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3814_ = v___x_3780_;
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3780_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
}
else
{
lean_dec(v_a_3775_);
lean_del_object(v___x_3772_);
v___y_3633_ = v___y_3206_;
v___y_3634_ = v___y_3207_;
v___y_3635_ = v___y_3208_;
v___y_3636_ = v___y_3209_;
goto v___jp_3632_;
}
}
else
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_del_object(v___x_3772_);
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3821_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3774_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3774_);
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
else
{
lean_dec(v_a_3769_);
v___y_3633_ = v___y_3206_;
v___y_3634_ = v___y_3207_;
v___y_3635_ = v___y_3208_;
v___y_3636_ = v___y_3209_;
goto v___jp_3632_;
}
}
else
{
lean_object* v_a_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3837_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3830_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3832_ = v___x_3768_;
v_isShared_3833_ = v_isSharedCheck_3837_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_a_3830_);
lean_dec(v___x_3768_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3837_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
lean_object* v___x_3835_; 
if (v_isShared_3833_ == 0)
{
v___x_3835_ = v___x_3832_;
goto v_reusejp_3834_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v_a_3830_);
v___x_3835_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3834_;
}
v_reusejp_3834_:
{
return v___x_3835_;
}
}
}
v___jp_3282_:
{
uint8_t v_genDiseq_3289_; 
v_genDiseq_3289_ = lean_ctor_get_uint8(v_config_3200_, sizeof(void*)*1 + 2);
if (v_genDiseq_3289_ == 0)
{
lean_dec_ref(v___x_3281_);
v___y_3251_ = v___y_3283_;
v___y_3252_ = v___y_3284_;
v___y_3253_ = v___y_3285_;
v___y_3254_ = v___y_3286_;
v___y_3255_ = v___y_3287_;
v___y_3256_ = v___y_3288_;
goto v___jp_3250_;
}
else
{
uint8_t v___x_3290_; 
v___x_3290_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3281_);
lean_dec_ref(v___x_3281_);
if (v___x_3290_ == 0)
{
v___y_3251_ = v___y_3283_;
v___y_3252_ = v___y_3284_;
v___y_3253_ = v___y_3285_;
v___y_3254_ = v___y_3286_;
v___y_3255_ = v___y_3287_;
v___y_3256_ = v___y_3288_;
goto v___jp_3250_;
}
else
{
lean_object* v___x_3291_; 
lean_inc(v_val_3244_);
lean_inc(v_mvarId_3201_);
v___x_3291_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3201_, v_val_3244_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; uint8_t v___x_3293_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v___x_3291_, 1);
v___x_3293_ = lean_unbox(v_a_3292_);
if (v___x_3293_ == 0)
{
lean_dec(v_a_3292_);
v___y_3251_ = v___y_3283_;
v___y_3252_ = v___y_3284_;
v___y_3253_ = v___y_3285_;
v___y_3254_ = v___y_3286_;
v___y_3255_ = v___y_3287_;
v___y_3256_ = v___y_3288_;
goto v___jp_3250_;
}
else
{
lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v___x_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3294_, 0, v_a_3292_);
v___x_3295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3294_);
lean_ctor_set(v___x_3295_, 1, v___x_3248_);
v___x_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
v_a_3218_ = v___x_3296_;
goto v___jp_3217_;
}
}
else
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3304_; 
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3297_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3299_ = v___x_3291_;
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___x_3291_);
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
}
}
v___jp_3305_:
{
uint8_t v___x_3313_; 
v___x_3313_ = l_Lean_Exception_isInterrupt(v_a_3312_);
if (v___x_3313_ == 0)
{
uint8_t v___x_3314_; 
lean_inc_ref(v_a_3312_);
v___x_3314_ = l_Lean_Exception_isRuntime(v_a_3312_);
if (v___x_3314_ == 0)
{
lean_dec_ref(v_a_3312_);
v___y_3283_ = v___y_3309_;
v___y_3284_ = v___y_3310_;
v___y_3285_ = v___y_3311_;
v___y_3286_ = v___y_3308_;
v___y_3287_ = v___y_3306_;
v___y_3288_ = v___y_3307_;
goto v___jp_3282_;
}
else
{
lean_object* v___x_3315_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v___x_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3315_, 0, v_a_3312_);
return v___x_3315_;
}
}
else
{
lean_object* v___x_3316_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v___x_3316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3316_, 0, v_a_3312_);
return v___x_3316_;
}
}
v___jp_3317_:
{
if (lean_obj_tag(v___y_3325_) == 0)
{
lean_object* v_a_3326_; lean_object* v___x_3327_; uint8_t v___x_3328_; 
v_a_3326_ = lean_ctor_get(v___y_3325_, 0);
lean_inc(v_a_3326_);
lean_dec_ref_known(v___y_3325_, 1);
v___x_3327_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_3328_ = l_Lean_Expr_isConstOf(v_a_3326_, v___x_3327_);
lean_dec(v_a_3326_);
if (v___x_3328_ == 0)
{
lean_dec_ref(v___y_3319_);
v___y_3283_ = v___y_3322_;
v___y_3284_ = v___y_3323_;
v___y_3285_ = v___y_3324_;
v___y_3286_ = v___y_3321_;
v___y_3287_ = v___y_3318_;
v___y_3288_ = v___y_3320_;
goto v___jp_3282_;
}
else
{
lean_object* v___x_3329_; 
lean_inc_ref(v___y_3319_);
v___x_3329_ = l_Lean_Meta_mkEqRefl(v___y_3319_, v___y_3324_, v___y_3321_, v___y_3318_, v___y_3320_);
if (lean_obj_tag(v___x_3329_) == 0)
{
lean_object* v_a_3330_; lean_object* v___x_3331_; lean_object* v_dummy_3332_; lean_object* v_nargs_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v_a_3330_ = lean_ctor_get(v___x_3329_, 0);
lean_inc(v_a_3330_);
lean_dec_ref_known(v___x_3329_, 1);
v___x_3331_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_3332_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_3333_ = l_Lean_Expr_getAppNumArgs(v___y_3319_);
lean_inc(v_nargs_3333_);
v___x_3334_ = lean_mk_array(v_nargs_3333_, v_dummy_3332_);
v___x_3335_ = lean_unsigned_to_nat(1u);
v___x_3336_ = lean_nat_sub(v_nargs_3333_, v___x_3335_);
lean_dec(v_nargs_3333_);
v___x_3337_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3319_, v___x_3334_, v___x_3336_);
v___x_3338_ = lean_array_push(v___x_3337_, v_a_3330_);
v___x_3339_ = l_Lean_mkAppN(v___x_3331_, v___x_3338_);
lean_dec_ref(v___x_3338_);
lean_inc(v_mvarId_3201_);
v___x_3340_ = l_Lean_MVarId_getType(v_mvarId_3201_, v___y_3324_, v___y_3321_, v___y_3318_, v___y_3320_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3340_, 1);
lean_inc(v_val_3244_);
v___x_3342_ = l_Lean_LocalDecl_toExpr(v_val_3244_);
v___x_3343_ = l_Lean_Meta_mkAbsurd(v_a_3341_, v___x_3342_, v___x_3339_, v___y_3324_, v___y_3321_, v___y_3318_, v___y_3320_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3363_; 
v_a_3344_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3346_ = v___x_3343_;
v_isShared_3347_ = v_isSharedCheck_3363_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_dec(v___x_3343_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3363_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3348_; 
lean_inc(v_mvarId_3201_);
v___x_3348_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3201_, v_a_3344_, v___y_3321_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3360_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3360_ == 0)
{
lean_object* v_unused_3361_; 
v_unused_3361_ = lean_ctor_get(v___x_3348_, 0);
lean_dec(v_unused_3361_);
v___x_3350_ = v___x_3348_;
v_isShared_3351_ = v_isSharedCheck_3360_;
goto v_resetjp_3349_;
}
else
{
lean_dec(v___x_3348_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3360_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3352_; lean_object* v___x_3354_; 
v___x_3352_ = lean_box(v___x_3328_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set_tag(v___x_3350_, 1);
lean_ctor_set(v___x_3350_, 0, v___x_3352_);
v___x_3354_ = v___x_3350_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v___x_3352_);
v___x_3354_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
lean_object* v___x_3355_; lean_object* v___x_3357_; 
v___x_3355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
lean_ctor_set(v___x_3355_, 1, v___x_3248_);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 0, v___x_3355_);
v___x_3357_ = v___x_3346_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v___x_3355_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
v_a_3218_ = v___x_3357_;
goto v___jp_3217_;
}
}
}
}
else
{
lean_object* v_a_3362_; 
lean_del_object(v___x_3346_);
v_a_3362_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___x_3348_, 1);
v___y_3306_ = v___y_3318_;
v___y_3307_ = v___y_3320_;
v___y_3308_ = v___y_3321_;
v___y_3309_ = v___y_3322_;
v___y_3310_ = v___y_3323_;
v___y_3311_ = v___y_3324_;
v_a_3312_ = v_a_3362_;
goto v___jp_3305_;
}
}
}
else
{
lean_object* v_a_3364_; 
v_a_3364_ = lean_ctor_get(v___x_3343_, 0);
lean_inc(v_a_3364_);
lean_dec_ref_known(v___x_3343_, 1);
v___y_3306_ = v___y_3318_;
v___y_3307_ = v___y_3320_;
v___y_3308_ = v___y_3321_;
v___y_3309_ = v___y_3322_;
v___y_3310_ = v___y_3323_;
v___y_3311_ = v___y_3324_;
v_a_3312_ = v_a_3364_;
goto v___jp_3305_;
}
}
else
{
lean_object* v_a_3365_; 
lean_dec_ref(v___x_3339_);
v_a_3365_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3340_, 1);
v___y_3306_ = v___y_3318_;
v___y_3307_ = v___y_3320_;
v___y_3308_ = v___y_3321_;
v___y_3309_ = v___y_3322_;
v___y_3310_ = v___y_3323_;
v___y_3311_ = v___y_3324_;
v_a_3312_ = v_a_3365_;
goto v___jp_3305_;
}
}
else
{
lean_object* v_a_3366_; 
lean_dec_ref(v___y_3319_);
v_a_3366_ = lean_ctor_get(v___x_3329_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3329_, 1);
v___y_3306_ = v___y_3318_;
v___y_3307_ = v___y_3320_;
v___y_3308_ = v___y_3321_;
v___y_3309_ = v___y_3322_;
v___y_3310_ = v___y_3323_;
v___y_3311_ = v___y_3324_;
v_a_3312_ = v_a_3366_;
goto v___jp_3305_;
}
}
}
else
{
lean_object* v_a_3367_; 
lean_dec_ref(v___y_3319_);
v_a_3367_ = lean_ctor_get(v___y_3325_, 0);
lean_inc(v_a_3367_);
lean_dec_ref_known(v___y_3325_, 1);
v___y_3306_ = v___y_3318_;
v___y_3307_ = v___y_3320_;
v___y_3308_ = v___y_3321_;
v___y_3309_ = v___y_3322_;
v___y_3310_ = v___y_3323_;
v___y_3311_ = v___y_3324_;
v_a_3312_ = v_a_3367_;
goto v___jp_3305_;
}
}
v___jp_3368_:
{
uint8_t v_useDecide_3375_; 
v_useDecide_3375_ = lean_ctor_get_uint8(v_config_3200_, sizeof(void*)*1);
if (v_useDecide_3375_ == 0)
{
v___y_3283_ = v___y_3369_;
v___y_3284_ = v_isHEq_3370_;
v___y_3285_ = v___y_3371_;
v___y_3286_ = v___y_3372_;
v___y_3287_ = v___y_3373_;
v___y_3288_ = v___y_3374_;
goto v___jp_3282_;
}
else
{
uint8_t v___x_3376_; 
v___x_3376_ = l_Lean_Expr_hasFVar(v___x_3281_);
if (v___x_3376_ == 0)
{
lean_object* v___x_3377_; 
lean_inc_ref(v___x_3281_);
v___x_3377_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3281_, v___y_3372_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v_a_3378_; uint8_t v___x_3379_; 
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_a_3378_);
lean_dec_ref_known(v___x_3377_, 1);
v___x_3379_ = l_Lean_Expr_hasMVar(v_a_3378_);
if (v___x_3379_ == 0)
{
uint8_t v___x_3380_; 
v___x_3380_ = l_Lean_Expr_hasFVar(v_a_3378_);
lean_dec(v_a_3378_);
if (v___x_3380_ == 0)
{
lean_object* v___x_3381_; 
lean_inc_ref(v___x_3281_);
v___x_3381_ = l_Lean_Meta_mkDecide(v___x_3281_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3383_; uint8_t v_transparency_3384_; uint8_t v___x_3385_; uint8_t v___x_3386_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v___x_3381_, 1);
v___x_3383_ = l_Lean_Meta_Context_config(v___y_3371_);
v_transparency_3384_ = lean_ctor_get_uint8(v___x_3383_, 9);
lean_dec_ref(v___x_3383_);
v___x_3385_ = 1;
v___x_3386_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3384_, v___x_3385_);
if (v___x_3386_ == 0)
{
lean_object* v_keyedConfig_3387_; uint8_t v_trackZetaDelta_3388_; lean_object* v_zetaDeltaSet_3389_; lean_object* v_lctx_3390_; lean_object* v_localInstances_3391_; lean_object* v_defEqCtx_x3f_3392_; lean_object* v_synthPendingDepth_3393_; lean_object* v_customCanUnfoldPredicate_x3f_3394_; uint8_t v_univApprox_3395_; uint8_t v_inTypeClassResolution_3396_; uint8_t v_cacheInferType_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v_keyedConfig_3387_ = lean_ctor_get(v___y_3371_, 0);
v_trackZetaDelta_3388_ = lean_ctor_get_uint8(v___y_3371_, sizeof(void*)*7);
v_zetaDeltaSet_3389_ = lean_ctor_get(v___y_3371_, 1);
v_lctx_3390_ = lean_ctor_get(v___y_3371_, 2);
v_localInstances_3391_ = lean_ctor_get(v___y_3371_, 3);
v_defEqCtx_x3f_3392_ = lean_ctor_get(v___y_3371_, 4);
v_synthPendingDepth_3393_ = lean_ctor_get(v___y_3371_, 5);
v_customCanUnfoldPredicate_x3f_3394_ = lean_ctor_get(v___y_3371_, 6);
v_univApprox_3395_ = lean_ctor_get_uint8(v___y_3371_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3396_ = lean_ctor_get_uint8(v___y_3371_, sizeof(void*)*7 + 2);
v_cacheInferType_3397_ = lean_ctor_get_uint8(v___y_3371_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3387_);
v___x_3398_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3385_, v_keyedConfig_3387_);
lean_inc(v_customCanUnfoldPredicate_x3f_3394_);
lean_inc(v_synthPendingDepth_3393_);
lean_inc(v_defEqCtx_x3f_3392_);
lean_inc_ref(v_localInstances_3391_);
lean_inc_ref(v_lctx_3390_);
lean_inc(v_zetaDeltaSet_3389_);
v___x_3399_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
lean_ctor_set(v___x_3399_, 1, v_zetaDeltaSet_3389_);
lean_ctor_set(v___x_3399_, 2, v_lctx_3390_);
lean_ctor_set(v___x_3399_, 3, v_localInstances_3391_);
lean_ctor_set(v___x_3399_, 4, v_defEqCtx_x3f_3392_);
lean_ctor_set(v___x_3399_, 5, v_synthPendingDepth_3393_);
lean_ctor_set(v___x_3399_, 6, v_customCanUnfoldPredicate_x3f_3394_);
lean_ctor_set_uint8(v___x_3399_, sizeof(void*)*7, v_trackZetaDelta_3388_);
lean_ctor_set_uint8(v___x_3399_, sizeof(void*)*7 + 1, v_univApprox_3395_);
lean_ctor_set_uint8(v___x_3399_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3396_);
lean_ctor_set_uint8(v___x_3399_, sizeof(void*)*7 + 3, v_cacheInferType_3397_);
lean_inc(v___y_3374_);
lean_inc_ref(v___y_3373_);
lean_inc(v___y_3372_);
lean_inc(v_a_3382_);
v___x_3400_ = lean_whnf(v_a_3382_, v___x_3399_, v___y_3372_, v___y_3373_, v___y_3374_);
v___y_3318_ = v___y_3373_;
v___y_3319_ = v_a_3382_;
v___y_3320_ = v___y_3374_;
v___y_3321_ = v___y_3372_;
v___y_3322_ = v___y_3369_;
v___y_3323_ = v_isHEq_3370_;
v___y_3324_ = v___y_3371_;
v___y_3325_ = v___x_3400_;
goto v___jp_3317_;
}
else
{
lean_object* v___x_3401_; 
lean_inc(v___y_3374_);
lean_inc_ref(v___y_3373_);
lean_inc(v___y_3372_);
lean_inc_ref(v___y_3371_);
lean_inc(v_a_3382_);
v___x_3401_ = lean_whnf(v_a_3382_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_);
v___y_3318_ = v___y_3373_;
v___y_3319_ = v_a_3382_;
v___y_3320_ = v___y_3374_;
v___y_3321_ = v___y_3372_;
v___y_3322_ = v___y_3369_;
v___y_3323_ = v_isHEq_3370_;
v___y_3324_ = v___y_3371_;
v___y_3325_ = v___x_3401_;
goto v___jp_3317_;
}
}
else
{
lean_object* v_a_3402_; 
v_a_3402_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3402_);
lean_dec_ref_known(v___x_3381_, 1);
v___y_3306_ = v___y_3373_;
v___y_3307_ = v___y_3374_;
v___y_3308_ = v___y_3372_;
v___y_3309_ = v___y_3369_;
v___y_3310_ = v_isHEq_3370_;
v___y_3311_ = v___y_3371_;
v_a_3312_ = v_a_3402_;
goto v___jp_3305_;
}
}
else
{
v___y_3283_ = v___y_3369_;
v___y_3284_ = v_isHEq_3370_;
v___y_3285_ = v___y_3371_;
v___y_3286_ = v___y_3372_;
v___y_3287_ = v___y_3373_;
v___y_3288_ = v___y_3374_;
goto v___jp_3282_;
}
}
else
{
lean_dec(v_a_3378_);
v___y_3283_ = v___y_3369_;
v___y_3284_ = v_isHEq_3370_;
v___y_3285_ = v___y_3371_;
v___y_3286_ = v___y_3372_;
v___y_3287_ = v___y_3373_;
v___y_3288_ = v___y_3374_;
goto v___jp_3282_;
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3403_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3377_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3377_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
v___y_3283_ = v___y_3369_;
v___y_3284_ = v_isHEq_3370_;
v___y_3285_ = v___y_3371_;
v___y_3286_ = v___y_3372_;
v___y_3287_ = v___y_3373_;
v___y_3288_ = v___y_3374_;
goto v___jp_3282_;
}
}
}
v___jp_3411_:
{
lean_object* v___x_3417_; 
lean_inc_ref(v___x_3281_);
v___x_3417_ = l_Lean_Meta_matchHEq_x3f(v___x_3281_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3417_) == 0)
{
lean_object* v_a_3418_; 
v_a_3418_ = lean_ctor_get(v___x_3417_, 0);
lean_inc(v_a_3418_);
lean_dec_ref_known(v___x_3417_, 1);
if (lean_obj_tag(v_a_3418_) == 1)
{
lean_object* v_val_3419_; lean_object* v_snd_3420_; lean_object* v_snd_3421_; lean_object* v_fst_3422_; lean_object* v_fst_3423_; lean_object* v_fst_3424_; lean_object* v_snd_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3525_; 
v_val_3419_ = lean_ctor_get(v_a_3418_, 0);
lean_inc(v_val_3419_);
lean_dec_ref_known(v_a_3418_, 1);
v_snd_3420_ = lean_ctor_get(v_val_3419_, 1);
lean_inc(v_snd_3420_);
v_snd_3421_ = lean_ctor_get(v_snd_3420_, 1);
lean_inc(v_snd_3421_);
v_fst_3422_ = lean_ctor_get(v_val_3419_, 0);
lean_inc(v_fst_3422_);
lean_dec(v_val_3419_);
v_fst_3423_ = lean_ctor_get(v_snd_3420_, 0);
lean_inc(v_fst_3423_);
lean_dec(v_snd_3420_);
v_fst_3424_ = lean_ctor_get(v_snd_3421_, 0);
v_snd_3425_ = lean_ctor_get(v_snd_3421_, 1);
v_isSharedCheck_3525_ = !lean_is_exclusive(v_snd_3421_);
if (v_isSharedCheck_3525_ == 0)
{
v___x_3427_ = v_snd_3421_;
v_isShared_3428_ = v_isSharedCheck_3525_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_snd_3425_);
lean_inc(v_fst_3424_);
lean_dec(v_snd_3421_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3525_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3429_; 
v___x_3429_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3423_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3429_) == 0)
{
lean_object* v_a_3430_; 
v_a_3430_ = lean_ctor_get(v___x_3429_, 0);
lean_inc(v_a_3430_);
lean_dec_ref_known(v___x_3429_, 1);
if (lean_obj_tag(v_a_3430_) == 1)
{
lean_object* v_val_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3516_; 
v_val_3431_ = lean_ctor_get(v_a_3430_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v_a_3430_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3433_ = v_a_3430_;
v_isShared_3434_ = v_isSharedCheck_3516_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_val_3431_);
lean_dec(v_a_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3516_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3435_; 
v___x_3435_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3425_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3435_) == 0)
{
lean_object* v_a_3436_; 
v_a_3436_ = lean_ctor_get(v___x_3435_, 0);
lean_inc(v_a_3436_);
lean_dec_ref_known(v___x_3435_, 1);
if (lean_obj_tag(v_a_3436_) == 1)
{
lean_object* v_toConstantVal_3437_; lean_object* v_val_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3507_; 
v_toConstantVal_3437_ = lean_ctor_get(v_val_3431_, 0);
lean_inc_ref(v_toConstantVal_3437_);
lean_dec(v_val_3431_);
v_val_3438_ = lean_ctor_get(v_a_3436_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v_a_3436_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3440_ = v_a_3436_;
v_isShared_3441_ = v_isSharedCheck_3507_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_val_3438_);
lean_dec(v_a_3436_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3507_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v_toConstantVal_3442_; lean_object* v_name_3443_; lean_object* v_name_3444_; uint8_t v___x_3445_; 
v_toConstantVal_3442_ = lean_ctor_get(v_val_3438_, 0);
lean_inc_ref(v_toConstantVal_3442_);
lean_dec(v_val_3438_);
v_name_3443_ = lean_ctor_get(v_toConstantVal_3437_, 0);
lean_inc(v_name_3443_);
lean_dec_ref(v_toConstantVal_3437_);
v_name_3444_ = lean_ctor_get(v_toConstantVal_3442_, 0);
lean_inc(v_name_3444_);
lean_dec_ref(v_toConstantVal_3442_);
v___x_3445_ = lean_name_eq(v_name_3443_, v_name_3444_);
lean_dec(v_name_3444_);
lean_dec(v_name_3443_);
if (v___x_3445_ == 0)
{
lean_object* v___x_3446_; 
v___x_3446_ = l_Lean_Meta_isExprDefEq(v_fst_3422_, v_fst_3424_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; uint8_t v___x_3448_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3447_);
lean_dec_ref_known(v___x_3446_, 1);
v___x_3448_ = lean_unbox(v_a_3447_);
lean_dec(v_a_3447_);
if (v___x_3448_ == 0)
{
lean_del_object(v___x_3440_);
lean_del_object(v___x_3433_);
lean_del_object(v___x_3427_);
v___y_3369_ = v_isEq_3412_;
v_isHEq_3370_ = v___x_3211_;
v___y_3371_ = v___y_3413_;
v___y_3372_ = v___y_3414_;
v___y_3373_ = v___y_3415_;
v___y_3374_ = v___y_3416_;
goto v___jp_3368_;
}
else
{
lean_object* v___x_3449_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec_ref(v_config_3200_);
lean_inc(v_mvarId_3201_);
v___x_3449_ = l_Lean_MVarId_getType(v_mvarId_3201_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3449_, 1);
v___x_3451_ = l_Lean_LocalDecl_toExpr(v_val_3244_);
v___x_3452_ = l_Lean_Meta_mkEqOfHEq(v___x_3451_, v___x_3211_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3452_) == 0)
{
lean_object* v_a_3453_; lean_object* v___x_3454_; 
v_a_3453_ = lean_ctor_get(v___x_3452_, 0);
lean_inc(v_a_3453_);
lean_dec_ref_known(v___x_3452_, 1);
v___x_3454_ = l_Lean_Meta_mkNoConfusion(v_a_3450_, v_a_3453_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; lean_object* v___x_3456_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
lean_inc(v_a_3455_);
lean_dec_ref_known(v___x_3454_, 1);
v___x_3456_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3201_, v_a_3455_, v___y_3414_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3459_; 
lean_dec_ref_known(v___x_3456_, 1);
v___x_3457_ = lean_box(v___x_3211_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 0, v___x_3457_);
v___x_3459_ = v___x_3440_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3457_);
v___x_3459_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
lean_object* v___x_3461_; 
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 1, v___x_3248_);
lean_ctor_set(v___x_3427_, 0, v___x_3459_);
v___x_3461_ = v___x_3427_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3459_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v___x_3248_);
v___x_3461_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
lean_object* v___x_3463_; 
if (v_isShared_3434_ == 0)
{
lean_ctor_set_tag(v___x_3433_, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3461_);
v___x_3463_ = v___x_3433_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3461_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
v_a_3218_ = v___x_3463_;
goto v___jp_3217_;
}
}
}
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
lean_del_object(v___x_3440_);
lean_del_object(v___x_3433_);
lean_del_object(v___x_3427_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
v_a_3467_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3456_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3456_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
else
{
lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
lean_del_object(v___x_3440_);
lean_del_object(v___x_3433_);
lean_del_object(v___x_3427_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3475_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3477_ = v___x_3454_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_dec(v___x_3454_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3475_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
else
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
lean_dec(v_a_3450_);
lean_del_object(v___x_3440_);
lean_del_object(v___x_3433_);
lean_del_object(v___x_3427_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3483_ = lean_ctor_get(v___x_3452_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3452_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v___x_3452_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3452_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_a_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
}
else
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
lean_del_object(v___x_3440_);
lean_del_object(v___x_3433_);
lean_del_object(v___x_3427_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3491_ = lean_ctor_get(v___x_3449_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v___x_3449_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3449_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
lean_del_object(v___x_3440_);
lean_del_object(v___x_3433_);
lean_del_object(v___x_3427_);
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3499_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v___x_3446_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___x_3446_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3504_; 
if (v_isShared_3502_ == 0)
{
v___x_3504_ = v___x_3501_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_a_3499_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
}
}
else
{
lean_del_object(v___x_3440_);
lean_del_object(v___x_3433_);
lean_del_object(v___x_3427_);
lean_dec(v_fst_3424_);
lean_dec(v_fst_3422_);
v___y_3369_ = v_isEq_3412_;
v_isHEq_3370_ = v___x_3211_;
v___y_3371_ = v___y_3413_;
v___y_3372_ = v___y_3414_;
v___y_3373_ = v___y_3415_;
v___y_3374_ = v___y_3416_;
goto v___jp_3368_;
}
}
}
else
{
lean_dec(v_a_3436_);
lean_del_object(v___x_3433_);
lean_dec(v_val_3431_);
lean_del_object(v___x_3427_);
lean_dec(v_fst_3424_);
lean_dec(v_fst_3422_);
v___y_3369_ = v_isEq_3412_;
v_isHEq_3370_ = v___x_3211_;
v___y_3371_ = v___y_3413_;
v___y_3372_ = v___y_3414_;
v___y_3373_ = v___y_3415_;
v___y_3374_ = v___y_3416_;
goto v___jp_3368_;
}
}
else
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
lean_del_object(v___x_3433_);
lean_dec(v_val_3431_);
lean_del_object(v___x_3427_);
lean_dec(v_fst_3424_);
lean_dec(v_fst_3422_);
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3508_ = lean_ctor_get(v___x_3435_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3435_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3435_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
}
else
{
lean_dec(v_a_3430_);
lean_del_object(v___x_3427_);
lean_dec(v_snd_3425_);
lean_dec(v_fst_3424_);
lean_dec(v_fst_3422_);
v___y_3369_ = v_isEq_3412_;
v_isHEq_3370_ = v___x_3211_;
v___y_3371_ = v___y_3413_;
v___y_3372_ = v___y_3414_;
v___y_3373_ = v___y_3415_;
v___y_3374_ = v___y_3416_;
goto v___jp_3368_;
}
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
lean_del_object(v___x_3427_);
lean_dec(v_snd_3425_);
lean_dec(v_fst_3424_);
lean_dec(v_fst_3422_);
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3517_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3429_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3429_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
else
{
lean_dec(v_a_3418_);
v___y_3369_ = v_isEq_3412_;
v_isHEq_3370_ = v___x_3280_;
v___y_3371_ = v___y_3413_;
v___y_3372_ = v___y_3414_;
v___y_3373_ = v___y_3415_;
v___y_3374_ = v___y_3416_;
goto v___jp_3368_;
}
}
else
{
lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3533_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3526_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3528_ = v___x_3417_;
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_dec(v___x_3417_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3531_; 
if (v_isShared_3529_ == 0)
{
v___x_3531_ = v___x_3528_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_a_3526_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
v___jp_3534_:
{
lean_object* v___x_3539_; 
lean_inc_ref(v___x_3281_);
v___x_3539_ = l_Lean_Meta_matchEq_x3f(v___x_3281_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v_a_3540_; 
v_a_3540_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_a_3540_);
lean_dec_ref_known(v___x_3539_, 1);
if (lean_obj_tag(v_a_3540_) == 1)
{
lean_object* v_val_3541_; lean_object* v_snd_3542_; lean_object* v_fst_3543_; lean_object* v_snd_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3623_; 
v_val_3541_ = lean_ctor_get(v_a_3540_, 0);
lean_inc(v_val_3541_);
lean_dec_ref_known(v_a_3540_, 1);
v_snd_3542_ = lean_ctor_get(v_val_3541_, 1);
lean_inc(v_snd_3542_);
lean_dec(v_val_3541_);
v_fst_3543_ = lean_ctor_get(v_snd_3542_, 0);
v_snd_3544_ = lean_ctor_get(v_snd_3542_, 1);
v_isSharedCheck_3623_ = !lean_is_exclusive(v_snd_3542_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3546_ = v_snd_3542_;
v_isShared_3547_ = v_isSharedCheck_3623_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_snd_3544_);
lean_inc(v_fst_3543_);
lean_dec(v_snd_3542_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3623_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3548_; 
v___x_3548_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3543_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; 
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_a_3549_);
lean_dec_ref_known(v___x_3548_, 1);
if (lean_obj_tag(v_a_3549_) == 1)
{
lean_object* v_val_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3614_; 
v_val_3550_ = lean_ctor_get(v_a_3549_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v_a_3549_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3552_ = v_a_3549_;
v_isShared_3553_ = v_isSharedCheck_3614_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_val_3550_);
lean_dec(v_a_3549_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3614_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3554_; 
v___x_3554_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3544_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3554_, 1);
if (lean_obj_tag(v_a_3555_) == 1)
{
lean_object* v_toConstantVal_3556_; lean_object* v_val_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3605_; 
v_toConstantVal_3556_ = lean_ctor_get(v_val_3550_, 0);
lean_inc_ref(v_toConstantVal_3556_);
lean_dec(v_val_3550_);
v_val_3557_ = lean_ctor_get(v_a_3555_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v_a_3555_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3559_ = v_a_3555_;
v_isShared_3560_ = v_isSharedCheck_3605_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_val_3557_);
lean_dec(v_a_3555_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3605_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v_toConstantVal_3561_; lean_object* v_name_3562_; lean_object* v_name_3563_; uint8_t v___x_3564_; 
v_toConstantVal_3561_ = lean_ctor_get(v_val_3557_, 0);
lean_inc_ref(v_toConstantVal_3561_);
lean_dec(v_val_3557_);
v_name_3562_ = lean_ctor_get(v_toConstantVal_3556_, 0);
lean_inc(v_name_3562_);
lean_dec_ref(v_toConstantVal_3556_);
v_name_3563_ = lean_ctor_get(v_toConstantVal_3561_, 0);
lean_inc(v_name_3563_);
lean_dec_ref(v_toConstantVal_3561_);
v___x_3564_ = lean_name_eq(v_name_3562_, v_name_3563_);
lean_dec(v_name_3563_);
lean_dec(v_name_3562_);
if (v___x_3564_ == 0)
{
lean_object* v___x_3565_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec_ref(v_config_3200_);
lean_inc(v_mvarId_3201_);
v___x_3565_ = l_Lean_MVarId_getType(v_mvarId_3201_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v_a_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v_a_3566_ = lean_ctor_get(v___x_3565_, 0);
lean_inc(v_a_3566_);
lean_dec_ref_known(v___x_3565_, 1);
v___x_3567_ = l_Lean_LocalDecl_toExpr(v_val_3244_);
v___x_3568_ = l_Lean_Meta_mkNoConfusion(v_a_3566_, v___x_3567_, v___y_3535_, v___y_3536_, v___y_3537_, v___y_3538_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3570_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3568_, 1);
v___x_3570_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3201_, v_a_3569_, v___y_3536_);
if (lean_obj_tag(v___x_3570_) == 0)
{
lean_object* v___x_3571_; lean_object* v___x_3573_; 
lean_dec_ref_known(v___x_3570_, 1);
v___x_3571_ = lean_box(v___x_3211_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v___x_3571_);
v___x_3573_ = v___x_3559_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3571_);
v___x_3573_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
lean_object* v___x_3575_; 
if (v_isShared_3547_ == 0)
{
lean_ctor_set(v___x_3546_, 1, v___x_3248_);
lean_ctor_set(v___x_3546_, 0, v___x_3573_);
v___x_3575_ = v___x_3546_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v___x_3573_);
lean_ctor_set(v_reuseFailAlloc_3579_, 1, v___x_3248_);
v___x_3575_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
lean_object* v___x_3577_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set_tag(v___x_3552_, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3575_);
v___x_3577_ = v___x_3552_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3575_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
v_a_3218_ = v___x_3577_;
goto v___jp_3217_;
}
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_del_object(v___x_3559_);
lean_del_object(v___x_3552_);
lean_del_object(v___x_3546_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
v_a_3581_ = lean_ctor_get(v___x_3570_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3570_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3570_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3570_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_del_object(v___x_3559_);
lean_del_object(v___x_3552_);
lean_del_object(v___x_3546_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3589_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3568_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3568_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3604_; 
lean_del_object(v___x_3559_);
lean_del_object(v___x_3552_);
lean_del_object(v___x_3546_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3597_ = lean_ctor_get(v___x_3565_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3599_ = v___x_3565_;
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3565_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3602_; 
if (v_isShared_3600_ == 0)
{
v___x_3602_ = v___x_3599_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
else
{
lean_del_object(v___x_3559_);
lean_del_object(v___x_3552_);
lean_del_object(v___x_3546_);
v_isEq_3412_ = v___x_3211_;
v___y_3413_ = v___y_3535_;
v___y_3414_ = v___y_3536_;
v___y_3415_ = v___y_3537_;
v___y_3416_ = v___y_3538_;
goto v___jp_3411_;
}
}
}
else
{
lean_dec(v_a_3555_);
lean_del_object(v___x_3552_);
lean_dec(v_val_3550_);
lean_del_object(v___x_3546_);
v_isEq_3412_ = v___x_3211_;
v___y_3413_ = v___y_3535_;
v___y_3414_ = v___y_3536_;
v___y_3415_ = v___y_3537_;
v___y_3416_ = v___y_3538_;
goto v___jp_3411_;
}
}
else
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3613_; 
lean_del_object(v___x_3552_);
lean_dec(v_val_3550_);
lean_del_object(v___x_3546_);
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3606_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3608_ = v___x_3554_;
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3554_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3611_; 
if (v_isShared_3609_ == 0)
{
v___x_3611_ = v___x_3608_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3606_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
}
}
}
}
}
else
{
lean_dec(v_a_3549_);
lean_del_object(v___x_3546_);
lean_dec(v_snd_3544_);
v_isEq_3412_ = v___x_3211_;
v___y_3413_ = v___y_3535_;
v___y_3414_ = v___y_3536_;
v___y_3415_ = v___y_3537_;
v___y_3416_ = v___y_3538_;
goto v___jp_3411_;
}
}
else
{
lean_object* v_a_3615_; lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3622_; 
lean_del_object(v___x_3546_);
lean_dec(v_snd_3544_);
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3615_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3617_ = v___x_3548_;
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
else
{
lean_inc(v_a_3615_);
lean_dec(v___x_3548_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3620_; 
if (v_isShared_3618_ == 0)
{
v___x_3620_ = v___x_3617_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_a_3615_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
}
}
else
{
lean_dec(v_a_3540_);
v_isEq_3412_ = v___x_3280_;
v___y_3413_ = v___y_3535_;
v___y_3414_ = v___y_3536_;
v___y_3415_ = v___y_3537_;
v___y_3416_ = v___y_3538_;
goto v___jp_3411_;
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3631_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3624_ = lean_ctor_get(v___x_3539_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v___x_3539_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3626_ = v___x_3539_;
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3539_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3629_; 
if (v_isShared_3627_ == 0)
{
v___x_3629_ = v___x_3626_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_a_3624_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
return v___x_3629_;
}
}
}
}
v___jp_3632_:
{
lean_object* v___x_3637_; 
lean_inc_ref(v___x_3281_);
v___x_3637_ = l_Lean_refutableHasNotBit_x3f(v___x_3281_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v_a_3638_; 
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
lean_inc(v_a_3638_);
lean_dec_ref_known(v___x_3637_, 1);
if (lean_obj_tag(v_a_3638_) == 1)
{
lean_object* v_val_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3679_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec_ref(v_config_3200_);
v_val_3639_ = lean_ctor_get(v_a_3638_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v_a_3638_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3641_ = v_a_3638_;
v_isShared_3642_ = v_isSharedCheck_3679_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_val_3639_);
lean_dec(v_a_3638_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3679_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3643_; 
lean_inc(v_mvarId_3201_);
v___x_3643_ = l_Lean_MVarId_getType(v_mvarId_3201_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3643_, 1);
v___x_3645_ = l_Lean_LocalDecl_toExpr(v_val_3244_);
v___x_3646_ = l_Lean_Meta_mkAbsurd(v_a_3644_, v_val_3639_, v___x_3645_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v_a_3647_; lean_object* v___x_3648_; 
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
lean_inc(v_a_3647_);
lean_dec_ref_known(v___x_3646_, 1);
v___x_3648_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3201_, v_a_3647_, v___y_3634_);
if (lean_obj_tag(v___x_3648_) == 0)
{
lean_object* v___x_3649_; lean_object* v___x_3651_; 
lean_dec_ref_known(v___x_3648_, 1);
v___x_3649_ = lean_box(v___x_3211_);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 0, v___x_3649_);
v___x_3651_ = v___x_3641_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v___x_3649_);
v___x_3651_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; 
v___x_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3651_);
lean_ctor_set(v___x_3652_, 1, v___x_3248_);
v___x_3653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3653_, 0, v___x_3652_);
v_a_3218_ = v___x_3653_;
goto v___jp_3217_;
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_del_object(v___x_3641_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
v_a_3655_ = lean_ctor_get(v___x_3648_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3648_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3648_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3648_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
lean_del_object(v___x_3641_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3663_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3646_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3646_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
else
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3678_; 
lean_del_object(v___x_3641_);
lean_dec(v_val_3639_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3671_ = lean_ctor_get(v___x_3643_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3673_ = v___x_3643_;
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3643_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
if (v_isShared_3674_ == 0)
{
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
}
else
{
lean_object* v___x_3680_; 
lean_dec(v_a_3638_);
lean_inc_ref(v___x_3281_);
v___x_3680_ = l_Lean_Meta_matchNe_x3f(v___x_3281_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v_a_3681_; 
v_a_3681_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_a_3681_);
lean_dec_ref_known(v___x_3680_, 1);
if (lean_obj_tag(v_a_3681_) == 1)
{
lean_object* v_val_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3751_; 
v_val_3682_ = lean_ctor_get(v_a_3681_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v_a_3681_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3684_ = v_a_3681_;
v_isShared_3685_ = v_isSharedCheck_3751_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_val_3682_);
lean_dec(v_a_3681_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3751_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v_snd_3686_; lean_object* v_fst_3687_; lean_object* v_snd_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3750_; 
v_snd_3686_ = lean_ctor_get(v_val_3682_, 1);
lean_inc(v_snd_3686_);
lean_dec(v_val_3682_);
v_fst_3687_ = lean_ctor_get(v_snd_3686_, 0);
v_snd_3688_ = lean_ctor_get(v_snd_3686_, 1);
v_isSharedCheck_3750_ = !lean_is_exclusive(v_snd_3686_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3690_ = v_snd_3686_;
v_isShared_3691_ = v_isSharedCheck_3750_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_snd_3688_);
lean_inc(v_fst_3687_);
lean_dec(v_snd_3686_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3750_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3692_; 
lean_inc(v_fst_3687_);
v___x_3692_ = l_Lean_Meta_isExprDefEq(v_fst_3687_, v_snd_3688_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; uint8_t v___x_3694_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3693_);
lean_dec_ref_known(v___x_3692_, 1);
v___x_3694_ = lean_unbox(v_a_3693_);
if (v___x_3694_ == 0)
{
lean_dec(v_a_3693_);
lean_del_object(v___x_3690_);
lean_dec(v_fst_3687_);
lean_del_object(v___x_3684_);
v___y_3535_ = v___y_3633_;
v___y_3536_ = v___y_3634_;
v___y_3537_ = v___y_3635_;
v___y_3538_ = v___y_3636_;
goto v___jp_3534_;
}
else
{
lean_object* v___x_3695_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec_ref(v_config_3200_);
lean_inc(v_mvarId_3201_);
v___x_3695_ = l_Lean_MVarId_getType(v_mvarId_3201_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3695_) == 0)
{
lean_object* v_a_3696_; lean_object* v___x_3697_; 
v_a_3696_ = lean_ctor_get(v___x_3695_, 0);
lean_inc(v_a_3696_);
lean_dec_ref_known(v___x_3695_, 1);
v___x_3697_ = l_Lean_Meta_mkEqRefl(v_fst_3687_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v_a_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; 
v_a_3698_ = lean_ctor_get(v___x_3697_, 0);
lean_inc(v_a_3698_);
lean_dec_ref_known(v___x_3697_, 1);
v___x_3699_ = l_Lean_LocalDecl_toExpr(v_val_3244_);
v___x_3700_ = l_Lean_Meta_mkAbsurd(v_a_3696_, v_a_3698_, v___x_3699_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3700_) == 0)
{
lean_object* v_a_3701_; lean_object* v___x_3702_; 
v_a_3701_ = lean_ctor_get(v___x_3700_, 0);
lean_inc(v_a_3701_);
lean_dec_ref_known(v___x_3700_, 1);
v___x_3702_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3201_, v_a_3701_, v___y_3634_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_object* v___x_3704_; 
lean_dec_ref_known(v___x_3702_, 1);
if (v_isShared_3685_ == 0)
{
lean_ctor_set(v___x_3684_, 0, v_a_3693_);
v___x_3704_ = v___x_3684_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_a_3693_);
v___x_3704_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
lean_object* v___x_3706_; 
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 1, v___x_3248_);
lean_ctor_set(v___x_3690_, 0, v___x_3704_);
v___x_3706_ = v___x_3690_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3704_);
lean_ctor_set(v_reuseFailAlloc_3708_, 1, v___x_3248_);
v___x_3706_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___x_3707_; 
v___x_3707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3706_);
v_a_3218_ = v___x_3707_;
goto v___jp_3217_;
}
}
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_a_3693_);
lean_del_object(v___x_3690_);
lean_del_object(v___x_3684_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
v_a_3710_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3702_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3702_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_dec(v_a_3693_);
lean_del_object(v___x_3690_);
lean_del_object(v___x_3684_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3718_ = lean_ctor_get(v___x_3700_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3700_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3700_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3700_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_dec(v_a_3696_);
lean_dec(v_a_3693_);
lean_del_object(v___x_3690_);
lean_del_object(v___x_3684_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3726_ = lean_ctor_get(v___x_3697_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3697_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3697_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec(v_a_3693_);
lean_del_object(v___x_3690_);
lean_dec(v_fst_3687_);
lean_del_object(v___x_3684_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
v_a_3734_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3695_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3695_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_a_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_del_object(v___x_3690_);
lean_dec(v_fst_3687_);
lean_del_object(v___x_3684_);
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3742_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3692_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3692_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3681_);
v___y_3535_ = v___y_3633_;
v___y_3536_ = v___y_3634_;
v___y_3537_ = v___y_3635_;
v___y_3538_ = v___y_3636_;
goto v___jp_3534_;
}
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3752_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3680_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3680_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
}
else
{
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
lean_dec_ref(v___x_3281_);
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3760_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3637_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v___x_3637_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
}
else
{
lean_object* v___x_3838_; 
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
v___x_3838_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3249_, v___x_3248_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
v___y_3232_ = v___x_3838_;
goto v___jp_3231_;
}
v___jp_3250_:
{
uint8_t v_emptyType_3257_; 
v_emptyType_3257_ = lean_ctor_get_uint8(v_config_3200_, sizeof(void*)*1 + 1);
if (v_emptyType_3257_ == 0)
{
lean_object* v___x_3258_; 
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
v___x_3258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3249_, v___x_3248_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
v___y_3232_ = v___x_3258_;
goto v___jp_3231_;
}
else
{
if (v___y_3251_ == 0)
{
if (v___y_3252_ == 0)
{
lean_object* v_searchFuel_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v_searchFuel_3259_ = lean_ctor_get(v_config_3200_, 0);
v___x_3260_ = l_Lean_LocalDecl_fvarId(v_val_3244_);
lean_dec(v_val_3244_);
lean_inc(v_searchFuel_3259_);
lean_inc(v_mvarId_3201_);
v___x_3261_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3201_, v___x_3260_, v_searchFuel_3259_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; uint8_t v___x_3263_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3261_, 1);
v___x_3263_ = lean_unbox(v_a_3262_);
if (v___x_3263_ == 0)
{
lean_object* v___x_3264_; 
lean_dec(v_a_3262_);
lean_del_object(v___x_3246_);
v___x_3264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3249_, v___x_3248_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
v___y_3232_ = v___x_3264_;
goto v___jp_3231_;
}
else
{
lean_object* v___x_3266_; 
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
if (v_isShared_3247_ == 0)
{
lean_ctor_set(v___x_3246_, 0, v_a_3262_);
v___x_3266_ = v___x_3246_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3262_);
v___x_3266_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3266_);
lean_ctor_set(v___x_3267_, 1, v___x_3248_);
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
v_a_3218_ = v___x_3268_;
goto v___jp_3217_;
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3277_; 
lean_del_object(v___x_3246_);
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3270_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3272_ = v___x_3261_;
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3261_);
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
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
v___x_3278_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3249_, v___x_3248_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
v___y_3232_ = v___x_3278_;
goto v___jp_3231_;
}
}
else
{
lean_object* v___x_3279_; 
lean_del_object(v___x_3246_);
lean_dec(v_val_3244_);
v___x_3279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3249_, v___x_3248_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
v___y_3232_ = v___x_3279_;
goto v___jp_3231_;
}
}
}
}
}
v___jp_3217_:
{
lean_object* v___x_3219_; lean_object* v___x_3221_; 
v___x_3219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3219_, 0, v_a_3218_);
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 0, v___x_3219_);
v___x_3221_ = v___x_3215_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3219_);
lean_ctor_set(v_reuseFailAlloc_3223_, 1, v_snd_3213_);
v___x_3221_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
lean_object* v___x_3222_; 
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
return v___x_3222_;
}
}
v___jp_3225_:
{
lean_object* v___x_3227_; size_t v___x_3228_; size_t v___x_3229_; 
v___x_3227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3224_);
lean_ctor_set(v___x_3227_, 1, v_a_3226_);
v___x_3228_ = ((size_t)1ULL);
v___x_3229_ = lean_usize_add(v_i_3204_, v___x_3228_);
v_i_3204_ = v___x_3229_;
v_b_3205_ = v___x_3227_;
goto _start;
}
v___jp_3231_:
{
if (lean_obj_tag(v___y_3232_) == 0)
{
lean_object* v_a_3233_; 
v_a_3233_ = lean_ctor_get(v___y_3232_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___y_3232_, 1);
if (lean_obj_tag(v_a_3233_) == 0)
{
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3218_ = v_a_3233_;
goto v___jp_3217_;
}
else
{
lean_object* v_a_3234_; 
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
v_a_3234_ = lean_ctor_get(v_a_3233_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v_a_3233_, 1);
v_a_3226_ = v_a_3234_;
goto v___jp_3225_;
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_del_object(v___x_3215_);
lean_dec(v_snd_3213_);
lean_dec(v_mvarId_3201_);
lean_dec_ref(v_config_3200_);
v_a_3235_ = lean_ctor_get(v___y_3232_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___y_3232_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___y_3232_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___y_3232_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_config_3842_, lean_object* v_mvarId_3843_, lean_object* v_as_3844_, lean_object* v_sz_3845_, lean_object* v_i_3846_, lean_object* v_b_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
size_t v_sz_boxed_3853_; size_t v_i_boxed_3854_; lean_object* v_res_3855_; 
v_sz_boxed_3853_ = lean_unbox_usize(v_sz_3845_);
lean_dec(v_sz_3845_);
v_i_boxed_3854_ = lean_unbox_usize(v_i_3846_);
lean_dec(v_i_3846_);
v_res_3855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3842_, v_mvarId_3843_, v_as_3844_, v_sz_boxed_3853_, v_i_boxed_3854_, v_b_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_dec_ref(v_as_3844_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object* v_config_3856_, lean_object* v_mvarId_3857_, lean_object* v_as_3858_, size_t v_sz_3859_, size_t v_i_3860_, lean_object* v_b_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_){
_start:
{
uint8_t v___x_3867_; 
v___x_3867_ = lean_usize_dec_lt(v_i_3860_, v_sz_3859_);
if (v___x_3867_ == 0)
{
lean_object* v___x_3868_; 
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v___x_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3868_, 0, v_b_3861_);
return v___x_3868_;
}
else
{
lean_object* v_snd_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_4496_; 
v_snd_3869_ = lean_ctor_get(v_b_3861_, 1);
v_isSharedCheck_4496_ = !lean_is_exclusive(v_b_3861_);
if (v_isSharedCheck_4496_ == 0)
{
lean_object* v_unused_4497_; 
v_unused_4497_ = lean_ctor_get(v_b_3861_, 0);
lean_dec(v_unused_4497_);
v___x_3871_ = v_b_3861_;
v_isShared_3872_ = v_isSharedCheck_4496_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_snd_3869_);
lean_dec(v_b_3861_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_4496_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
lean_object* v_a_3874_; lean_object* v___x_3880_; lean_object* v_a_3882_; lean_object* v___y_3888_; lean_object* v_a_3899_; 
v___x_3880_ = lean_box(0);
v_a_3899_ = lean_array_uget(v_as_3858_, v_i_3860_);
if (lean_obj_tag(v_a_3899_) == 0)
{
lean_del_object(v___x_3871_);
v_a_3882_ = v_snd_3869_;
goto v___jp_3881_;
}
else
{
lean_object* v_val_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_4495_; 
v_val_3900_ = lean_ctor_get(v_a_3899_, 0);
v_isSharedCheck_4495_ = !lean_is_exclusive(v_a_3899_);
if (v_isSharedCheck_4495_ == 0)
{
v___x_3902_ = v_a_3899_;
v_isShared_3903_ = v_isSharedCheck_4495_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_val_3900_);
lean_dec(v_a_3899_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_4495_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; uint8_t v___y_3907_; uint8_t v___y_3908_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3911_; lean_object* v___y_3912_; uint8_t v___x_3936_; 
v___x_3904_ = lean_box(0);
v___x_3905_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3936_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3900_);
if (v___x_3936_ == 0)
{
lean_object* v___x_3937_; uint8_t v___y_3939_; uint8_t v___y_3940_; lean_object* v___y_3941_; lean_object* v___y_3942_; lean_object* v___y_3943_; lean_object* v___y_3944_; lean_object* v___y_3962_; uint8_t v___y_3963_; lean_object* v___y_3964_; lean_object* v___y_3965_; lean_object* v___y_3966_; uint8_t v___y_3967_; lean_object* v_a_3968_; lean_object* v___y_3974_; lean_object* v___y_3975_; uint8_t v___y_3976_; lean_object* v___y_3977_; lean_object* v___y_3978_; lean_object* v___y_3979_; uint8_t v___y_3980_; lean_object* v___y_3981_; uint8_t v___y_4025_; uint8_t v_isHEq_4026_; lean_object* v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; uint8_t v_isEq_4068_; lean_object* v___y_4069_; lean_object* v___y_4070_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v___y_4191_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___x_4424_; 
v___x_3937_ = l_Lean_LocalDecl_type(v_val_3900_);
lean_inc_ref(v___x_3937_);
v___x_4424_ = l_Lean_Meta_matchNot_x3f(v___x_3937_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_4424_) == 0)
{
lean_object* v_a_4425_; 
v_a_4425_ = lean_ctor_get(v___x_4424_, 0);
lean_inc(v_a_4425_);
lean_dec_ref_known(v___x_4424_, 1);
if (lean_obj_tag(v_a_4425_) == 1)
{
lean_object* v_val_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4485_; 
v_val_4426_ = lean_ctor_get(v_a_4425_, 0);
v_isSharedCheck_4485_ = !lean_is_exclusive(v_a_4425_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4428_ = v_a_4425_;
v_isShared_4429_ = v_isSharedCheck_4485_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_val_4426_);
lean_dec(v_a_4425_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4485_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4430_; 
v___x_4430_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_4426_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_4430_) == 0)
{
lean_object* v_a_4431_; 
v_a_4431_ = lean_ctor_get(v___x_4430_, 0);
lean_inc(v_a_4431_);
lean_dec_ref_known(v___x_4430_, 1);
if (lean_obj_tag(v_a_4431_) == 1)
{
lean_object* v_val_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4476_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec_ref(v_config_3856_);
v_val_4432_ = lean_ctor_get(v_a_4431_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v_a_4431_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4434_ = v_a_4431_;
v_isShared_4435_ = v_isSharedCheck_4476_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_val_4432_);
lean_dec(v_a_4431_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4476_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4436_; 
lean_inc(v_mvarId_3857_);
v___x_4436_ = l_Lean_MVarId_getType(v_mvarId_3857_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_4436_) == 0)
{
lean_object* v_a_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; 
v_a_4437_ = lean_ctor_get(v___x_4436_, 0);
lean_inc(v_a_4437_);
lean_dec_ref_known(v___x_4436_, 1);
v___x_4438_ = l_Lean_LocalDecl_toExpr(v_val_3900_);
v___x_4439_ = l_Lean_mkFVar(v_val_4432_);
v___x_4440_ = l_Lean_Expr_app___override(v___x_4438_, v___x_4439_);
v___x_4441_ = l_Lean_Meta_mkFalseElim(v_a_4437_, v___x_4440_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_4441_) == 0)
{
lean_object* v_a_4442_; lean_object* v___x_4443_; 
v_a_4442_ = lean_ctor_get(v___x_4441_, 0);
lean_inc(v_a_4442_);
lean_dec_ref_known(v___x_4441_, 1);
v___x_4443_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3857_, v_a_4442_, v___y_3863_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v___x_4444_; lean_object* v___x_4446_; 
lean_dec_ref_known(v___x_4443_, 1);
v___x_4444_ = lean_box(v___x_3867_);
if (v_isShared_4435_ == 0)
{
lean_ctor_set(v___x_4434_, 0, v___x_4444_);
v___x_4446_ = v___x_4434_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v___x_4444_);
v___x_4446_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
lean_object* v___x_4447_; lean_object* v___x_4449_; 
v___x_4447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4447_, 0, v___x_4446_);
lean_ctor_set(v___x_4447_, 1, v___x_3904_);
if (v_isShared_4429_ == 0)
{
lean_ctor_set_tag(v___x_4428_, 0);
lean_ctor_set(v___x_4428_, 0, v___x_4447_);
v___x_4449_ = v___x_4428_;
goto v_reusejp_4448_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v___x_4447_);
v___x_4449_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4448_;
}
v_reusejp_4448_:
{
v_a_3874_ = v___x_4449_;
goto v___jp_3873_;
}
}
}
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4459_; 
lean_del_object(v___x_4434_);
lean_del_object(v___x_4428_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
v_a_4452_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4454_ = v___x_4443_;
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v___x_4443_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4457_; 
if (v_isShared_4455_ == 0)
{
v___x_4457_ = v___x_4454_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v_a_4452_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
return v___x_4457_;
}
}
}
}
else
{
lean_object* v_a_4460_; lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4467_; 
lean_del_object(v___x_4434_);
lean_del_object(v___x_4428_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4460_ = lean_ctor_get(v___x_4441_, 0);
v_isSharedCheck_4467_ = !lean_is_exclusive(v___x_4441_);
if (v_isSharedCheck_4467_ == 0)
{
v___x_4462_ = v___x_4441_;
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
else
{
lean_inc(v_a_4460_);
lean_dec(v___x_4441_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4465_; 
if (v_isShared_4463_ == 0)
{
v___x_4465_ = v___x_4462_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v_a_4460_);
v___x_4465_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
return v___x_4465_;
}
}
}
}
else
{
lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4475_; 
lean_del_object(v___x_4434_);
lean_dec(v_val_4432_);
lean_del_object(v___x_4428_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4468_ = lean_ctor_get(v___x_4436_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4436_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4470_ = v___x_4436_;
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4436_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v___x_4473_; 
if (v_isShared_4471_ == 0)
{
v___x_4473_ = v___x_4470_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v_a_4468_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
}
}
else
{
lean_dec(v_a_4431_);
lean_del_object(v___x_4428_);
v___y_4289_ = v___y_3862_;
v___y_4290_ = v___y_3863_;
v___y_4291_ = v___y_3864_;
v___y_4292_ = v___y_3865_;
goto v___jp_4288_;
}
}
else
{
lean_object* v_a_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4484_; 
lean_del_object(v___x_4428_);
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4477_ = lean_ctor_get(v___x_4430_, 0);
v_isSharedCheck_4484_ = !lean_is_exclusive(v___x_4430_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4479_ = v___x_4430_;
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_a_4477_);
lean_dec(v___x_4430_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4484_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___x_4482_; 
if (v_isShared_4480_ == 0)
{
v___x_4482_ = v___x_4479_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_a_4477_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
return v___x_4482_;
}
}
}
}
}
else
{
lean_dec(v_a_4425_);
v___y_4289_ = v___y_3862_;
v___y_4290_ = v___y_3863_;
v___y_4291_ = v___y_3864_;
v___y_4292_ = v___y_3865_;
goto v___jp_4288_;
}
}
else
{
lean_object* v_a_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4493_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4486_ = lean_ctor_get(v___x_4424_, 0);
v_isSharedCheck_4493_ = !lean_is_exclusive(v___x_4424_);
if (v_isSharedCheck_4493_ == 0)
{
v___x_4488_ = v___x_4424_;
v_isShared_4489_ = v_isSharedCheck_4493_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_a_4486_);
lean_dec(v___x_4424_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4493_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4491_; 
if (v_isShared_4489_ == 0)
{
v___x_4491_ = v___x_4488_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4492_; 
v_reuseFailAlloc_4492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4492_, 0, v_a_4486_);
v___x_4491_ = v_reuseFailAlloc_4492_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
return v___x_4491_;
}
}
}
v___jp_3938_:
{
uint8_t v_genDiseq_3945_; 
v_genDiseq_3945_ = lean_ctor_get_uint8(v_config_3856_, sizeof(void*)*1 + 2);
if (v_genDiseq_3945_ == 0)
{
lean_dec_ref(v___x_3937_);
v___y_3907_ = v___y_3939_;
v___y_3908_ = v___y_3940_;
v___y_3909_ = v___y_3941_;
v___y_3910_ = v___y_3942_;
v___y_3911_ = v___y_3943_;
v___y_3912_ = v___y_3944_;
goto v___jp_3906_;
}
else
{
uint8_t v___x_3946_; 
v___x_3946_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3937_);
lean_dec_ref(v___x_3937_);
if (v___x_3946_ == 0)
{
v___y_3907_ = v___y_3939_;
v___y_3908_ = v___y_3940_;
v___y_3909_ = v___y_3941_;
v___y_3910_ = v___y_3942_;
v___y_3911_ = v___y_3943_;
v___y_3912_ = v___y_3944_;
goto v___jp_3906_;
}
else
{
lean_object* v___x_3947_; 
lean_inc(v_val_3900_);
lean_inc(v_mvarId_3857_);
v___x_3947_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3857_, v_val_3900_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v_a_3948_; uint8_t v___x_3949_; 
v_a_3948_ = lean_ctor_get(v___x_3947_, 0);
lean_inc(v_a_3948_);
lean_dec_ref_known(v___x_3947_, 1);
v___x_3949_ = lean_unbox(v_a_3948_);
if (v___x_3949_ == 0)
{
lean_dec(v_a_3948_);
v___y_3907_ = v___y_3939_;
v___y_3908_ = v___y_3940_;
v___y_3909_ = v___y_3941_;
v___y_3910_ = v___y_3942_;
v___y_3911_ = v___y_3943_;
v___y_3912_ = v___y_3944_;
goto v___jp_3906_;
}
else
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v___x_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3950_, 0, v_a_3948_);
v___x_3951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3950_);
lean_ctor_set(v___x_3951_, 1, v___x_3904_);
v___x_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
v_a_3874_ = v___x_3952_;
goto v___jp_3873_;
}
}
else
{
lean_object* v_a_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3960_; 
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_3953_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3960_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3960_ == 0)
{
v___x_3955_ = v___x_3947_;
v_isShared_3956_ = v_isSharedCheck_3960_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_a_3953_);
lean_dec(v___x_3947_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3960_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3958_; 
if (v_isShared_3956_ == 0)
{
v___x_3958_ = v___x_3955_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v_a_3953_);
v___x_3958_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
return v___x_3958_;
}
}
}
}
}
}
v___jp_3961_:
{
uint8_t v___x_3969_; 
v___x_3969_ = l_Lean_Exception_isInterrupt(v_a_3968_);
if (v___x_3969_ == 0)
{
uint8_t v___x_3970_; 
lean_inc_ref(v_a_3968_);
v___x_3970_ = l_Lean_Exception_isRuntime(v_a_3968_);
if (v___x_3970_ == 0)
{
lean_dec_ref(v_a_3968_);
v___y_3939_ = v___y_3963_;
v___y_3940_ = v___y_3967_;
v___y_3941_ = v___y_3966_;
v___y_3942_ = v___y_3965_;
v___y_3943_ = v___y_3964_;
v___y_3944_ = v___y_3962_;
goto v___jp_3938_;
}
else
{
lean_object* v___x_3971_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v___x_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3971_, 0, v_a_3968_);
return v___x_3971_;
}
}
else
{
lean_object* v___x_3972_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v___x_3972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3972_, 0, v_a_3968_);
return v___x_3972_;
}
}
v___jp_3973_:
{
if (lean_obj_tag(v___y_3981_) == 0)
{
lean_object* v_a_3982_; lean_object* v___x_3983_; uint8_t v___x_3984_; 
v_a_3982_ = lean_ctor_get(v___y_3981_, 0);
lean_inc(v_a_3982_);
lean_dec_ref_known(v___y_3981_, 1);
v___x_3983_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_3984_ = l_Lean_Expr_isConstOf(v_a_3982_, v___x_3983_);
lean_dec(v_a_3982_);
if (v___x_3984_ == 0)
{
lean_dec_ref(v___y_3974_);
v___y_3939_ = v___y_3976_;
v___y_3940_ = v___y_3980_;
v___y_3941_ = v___y_3979_;
v___y_3942_ = v___y_3978_;
v___y_3943_ = v___y_3977_;
v___y_3944_ = v___y_3975_;
goto v___jp_3938_;
}
else
{
lean_object* v___x_3985_; 
lean_inc_ref(v___y_3974_);
v___x_3985_ = l_Lean_Meta_mkEqRefl(v___y_3974_, v___y_3979_, v___y_3978_, v___y_3977_, v___y_3975_);
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_object* v_a_3986_; lean_object* v___x_3987_; lean_object* v_dummy_3988_; lean_object* v_nargs_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
v_a_3986_ = lean_ctor_get(v___x_3985_, 0);
lean_inc(v_a_3986_);
lean_dec_ref_known(v___x_3985_, 1);
v___x_3987_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_3988_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_3989_ = l_Lean_Expr_getAppNumArgs(v___y_3974_);
lean_inc(v_nargs_3989_);
v___x_3990_ = lean_mk_array(v_nargs_3989_, v_dummy_3988_);
v___x_3991_ = lean_unsigned_to_nat(1u);
v___x_3992_ = lean_nat_sub(v_nargs_3989_, v___x_3991_);
lean_dec(v_nargs_3989_);
v___x_3993_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3974_, v___x_3990_, v___x_3992_);
v___x_3994_ = lean_array_push(v___x_3993_, v_a_3986_);
v___x_3995_ = l_Lean_mkAppN(v___x_3987_, v___x_3994_);
lean_dec_ref(v___x_3994_);
lean_inc(v_mvarId_3857_);
v___x_3996_ = l_Lean_MVarId_getType(v_mvarId_3857_, v___y_3979_, v___y_3978_, v___y_3977_, v___y_3975_);
if (lean_obj_tag(v___x_3996_) == 0)
{
lean_object* v_a_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v_a_3997_ = lean_ctor_get(v___x_3996_, 0);
lean_inc(v_a_3997_);
lean_dec_ref_known(v___x_3996_, 1);
lean_inc(v_val_3900_);
v___x_3998_ = l_Lean_LocalDecl_toExpr(v_val_3900_);
v___x_3999_ = l_Lean_Meta_mkAbsurd(v_a_3997_, v___x_3998_, v___x_3995_, v___y_3979_, v___y_3978_, v___y_3977_, v___y_3975_);
if (lean_obj_tag(v___x_3999_) == 0)
{
lean_object* v_a_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4019_; 
v_a_4000_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4002_ = v___x_3999_;
v_isShared_4003_ = v_isSharedCheck_4019_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_a_4000_);
lean_dec(v___x_3999_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4019_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
lean_object* v___x_4004_; 
lean_inc(v_mvarId_3857_);
v___x_4004_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3857_, v_a_4000_, v___y_3978_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4016_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4016_ == 0)
{
lean_object* v_unused_4017_; 
v_unused_4017_ = lean_ctor_get(v___x_4004_, 0);
lean_dec(v_unused_4017_);
v___x_4006_ = v___x_4004_;
v_isShared_4007_ = v_isSharedCheck_4016_;
goto v_resetjp_4005_;
}
else
{
lean_dec(v___x_4004_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4016_;
goto v_resetjp_4005_;
}
v_resetjp_4005_:
{
lean_object* v___x_4008_; lean_object* v___x_4010_; 
v___x_4008_ = lean_box(v___x_3984_);
if (v_isShared_4007_ == 0)
{
lean_ctor_set_tag(v___x_4006_, 1);
lean_ctor_set(v___x_4006_, 0, v___x_4008_);
v___x_4010_ = v___x_4006_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v___x_4008_);
v___x_4010_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
lean_object* v___x_4011_; lean_object* v___x_4013_; 
v___x_4011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4010_);
lean_ctor_set(v___x_4011_, 1, v___x_3904_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4011_);
v___x_4013_ = v___x_4002_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v___x_4011_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
v_a_3874_ = v___x_4013_;
goto v___jp_3873_;
}
}
}
}
else
{
lean_object* v_a_4018_; 
lean_del_object(v___x_4002_);
v_a_4018_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4018_);
lean_dec_ref_known(v___x_4004_, 1);
v___y_3962_ = v___y_3975_;
v___y_3963_ = v___y_3976_;
v___y_3964_ = v___y_3977_;
v___y_3965_ = v___y_3978_;
v___y_3966_ = v___y_3979_;
v___y_3967_ = v___y_3980_;
v_a_3968_ = v_a_4018_;
goto v___jp_3961_;
}
}
}
else
{
lean_object* v_a_4020_; 
v_a_4020_ = lean_ctor_get(v___x_3999_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v___x_3999_, 1);
v___y_3962_ = v___y_3975_;
v___y_3963_ = v___y_3976_;
v___y_3964_ = v___y_3977_;
v___y_3965_ = v___y_3978_;
v___y_3966_ = v___y_3979_;
v___y_3967_ = v___y_3980_;
v_a_3968_ = v_a_4020_;
goto v___jp_3961_;
}
}
else
{
lean_object* v_a_4021_; 
lean_dec_ref(v___x_3995_);
v_a_4021_ = lean_ctor_get(v___x_3996_, 0);
lean_inc(v_a_4021_);
lean_dec_ref_known(v___x_3996_, 1);
v___y_3962_ = v___y_3975_;
v___y_3963_ = v___y_3976_;
v___y_3964_ = v___y_3977_;
v___y_3965_ = v___y_3978_;
v___y_3966_ = v___y_3979_;
v___y_3967_ = v___y_3980_;
v_a_3968_ = v_a_4021_;
goto v___jp_3961_;
}
}
else
{
lean_object* v_a_4022_; 
lean_dec_ref(v___y_3974_);
v_a_4022_ = lean_ctor_get(v___x_3985_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v___x_3985_, 1);
v___y_3962_ = v___y_3975_;
v___y_3963_ = v___y_3976_;
v___y_3964_ = v___y_3977_;
v___y_3965_ = v___y_3978_;
v___y_3966_ = v___y_3979_;
v___y_3967_ = v___y_3980_;
v_a_3968_ = v_a_4022_;
goto v___jp_3961_;
}
}
}
else
{
lean_object* v_a_4023_; 
lean_dec_ref(v___y_3974_);
v_a_4023_ = lean_ctor_get(v___y_3981_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___y_3981_, 1);
v___y_3962_ = v___y_3975_;
v___y_3963_ = v___y_3976_;
v___y_3964_ = v___y_3977_;
v___y_3965_ = v___y_3978_;
v___y_3966_ = v___y_3979_;
v___y_3967_ = v___y_3980_;
v_a_3968_ = v_a_4023_;
goto v___jp_3961_;
}
}
v___jp_4024_:
{
uint8_t v_useDecide_4031_; 
v_useDecide_4031_ = lean_ctor_get_uint8(v_config_3856_, sizeof(void*)*1);
if (v_useDecide_4031_ == 0)
{
v___y_3939_ = v___y_4025_;
v___y_3940_ = v_isHEq_4026_;
v___y_3941_ = v___y_4027_;
v___y_3942_ = v___y_4028_;
v___y_3943_ = v___y_4029_;
v___y_3944_ = v___y_4030_;
goto v___jp_3938_;
}
else
{
uint8_t v___x_4032_; 
v___x_4032_ = l_Lean_Expr_hasFVar(v___x_3937_);
if (v___x_4032_ == 0)
{
lean_object* v___x_4033_; 
lean_inc_ref(v___x_3937_);
v___x_4033_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3937_, v___y_4028_);
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_object* v_a_4034_; uint8_t v___x_4035_; 
v_a_4034_ = lean_ctor_get(v___x_4033_, 0);
lean_inc(v_a_4034_);
lean_dec_ref_known(v___x_4033_, 1);
v___x_4035_ = l_Lean_Expr_hasMVar(v_a_4034_);
if (v___x_4035_ == 0)
{
uint8_t v___x_4036_; 
v___x_4036_ = l_Lean_Expr_hasFVar(v_a_4034_);
lean_dec(v_a_4034_);
if (v___x_4036_ == 0)
{
lean_object* v___x_4037_; 
lean_inc_ref(v___x_3937_);
v___x_4037_ = l_Lean_Meta_mkDecide(v___x_3937_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_object* v_a_4038_; lean_object* v___x_4039_; uint8_t v_transparency_4040_; uint8_t v___x_4041_; uint8_t v___x_4042_; 
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_a_4038_);
lean_dec_ref_known(v___x_4037_, 1);
v___x_4039_ = l_Lean_Meta_Context_config(v___y_4027_);
v_transparency_4040_ = lean_ctor_get_uint8(v___x_4039_, 9);
lean_dec_ref(v___x_4039_);
v___x_4041_ = 1;
v___x_4042_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4040_, v___x_4041_);
if (v___x_4042_ == 0)
{
lean_object* v_keyedConfig_4043_; uint8_t v_trackZetaDelta_4044_; lean_object* v_zetaDeltaSet_4045_; lean_object* v_lctx_4046_; lean_object* v_localInstances_4047_; lean_object* v_defEqCtx_x3f_4048_; lean_object* v_synthPendingDepth_4049_; lean_object* v_customCanUnfoldPredicate_x3f_4050_; uint8_t v_univApprox_4051_; uint8_t v_inTypeClassResolution_4052_; uint8_t v_cacheInferType_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
v_keyedConfig_4043_ = lean_ctor_get(v___y_4027_, 0);
v_trackZetaDelta_4044_ = lean_ctor_get_uint8(v___y_4027_, sizeof(void*)*7);
v_zetaDeltaSet_4045_ = lean_ctor_get(v___y_4027_, 1);
v_lctx_4046_ = lean_ctor_get(v___y_4027_, 2);
v_localInstances_4047_ = lean_ctor_get(v___y_4027_, 3);
v_defEqCtx_x3f_4048_ = lean_ctor_get(v___y_4027_, 4);
v_synthPendingDepth_4049_ = lean_ctor_get(v___y_4027_, 5);
v_customCanUnfoldPredicate_x3f_4050_ = lean_ctor_get(v___y_4027_, 6);
v_univApprox_4051_ = lean_ctor_get_uint8(v___y_4027_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4052_ = lean_ctor_get_uint8(v___y_4027_, sizeof(void*)*7 + 2);
v_cacheInferType_4053_ = lean_ctor_get_uint8(v___y_4027_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_4043_);
v___x_4054_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4041_, v_keyedConfig_4043_);
lean_inc(v_customCanUnfoldPredicate_x3f_4050_);
lean_inc(v_synthPendingDepth_4049_);
lean_inc(v_defEqCtx_x3f_4048_);
lean_inc_ref(v_localInstances_4047_);
lean_inc_ref(v_lctx_4046_);
lean_inc(v_zetaDeltaSet_4045_);
v___x_4055_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4055_, 0, v___x_4054_);
lean_ctor_set(v___x_4055_, 1, v_zetaDeltaSet_4045_);
lean_ctor_set(v___x_4055_, 2, v_lctx_4046_);
lean_ctor_set(v___x_4055_, 3, v_localInstances_4047_);
lean_ctor_set(v___x_4055_, 4, v_defEqCtx_x3f_4048_);
lean_ctor_set(v___x_4055_, 5, v_synthPendingDepth_4049_);
lean_ctor_set(v___x_4055_, 6, v_customCanUnfoldPredicate_x3f_4050_);
lean_ctor_set_uint8(v___x_4055_, sizeof(void*)*7, v_trackZetaDelta_4044_);
lean_ctor_set_uint8(v___x_4055_, sizeof(void*)*7 + 1, v_univApprox_4051_);
lean_ctor_set_uint8(v___x_4055_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4052_);
lean_ctor_set_uint8(v___x_4055_, sizeof(void*)*7 + 3, v_cacheInferType_4053_);
lean_inc(v___y_4030_);
lean_inc_ref(v___y_4029_);
lean_inc(v___y_4028_);
lean_inc(v_a_4038_);
v___x_4056_ = lean_whnf(v_a_4038_, v___x_4055_, v___y_4028_, v___y_4029_, v___y_4030_);
v___y_3974_ = v_a_4038_;
v___y_3975_ = v___y_4030_;
v___y_3976_ = v___y_4025_;
v___y_3977_ = v___y_4029_;
v___y_3978_ = v___y_4028_;
v___y_3979_ = v___y_4027_;
v___y_3980_ = v_isHEq_4026_;
v___y_3981_ = v___x_4056_;
goto v___jp_3973_;
}
else
{
lean_object* v___x_4057_; 
lean_inc(v___y_4030_);
lean_inc_ref(v___y_4029_);
lean_inc(v___y_4028_);
lean_inc_ref(v___y_4027_);
lean_inc(v_a_4038_);
v___x_4057_ = lean_whnf(v_a_4038_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
v___y_3974_ = v_a_4038_;
v___y_3975_ = v___y_4030_;
v___y_3976_ = v___y_4025_;
v___y_3977_ = v___y_4029_;
v___y_3978_ = v___y_4028_;
v___y_3979_ = v___y_4027_;
v___y_3980_ = v_isHEq_4026_;
v___y_3981_ = v___x_4057_;
goto v___jp_3973_;
}
}
else
{
lean_object* v_a_4058_; 
v_a_4058_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v___x_4037_, 1);
v___y_3962_ = v___y_4030_;
v___y_3963_ = v___y_4025_;
v___y_3964_ = v___y_4029_;
v___y_3965_ = v___y_4028_;
v___y_3966_ = v___y_4027_;
v___y_3967_ = v_isHEq_4026_;
v_a_3968_ = v_a_4058_;
goto v___jp_3961_;
}
}
else
{
v___y_3939_ = v___y_4025_;
v___y_3940_ = v_isHEq_4026_;
v___y_3941_ = v___y_4027_;
v___y_3942_ = v___y_4028_;
v___y_3943_ = v___y_4029_;
v___y_3944_ = v___y_4030_;
goto v___jp_3938_;
}
}
else
{
lean_dec(v_a_4034_);
v___y_3939_ = v___y_4025_;
v___y_3940_ = v_isHEq_4026_;
v___y_3941_ = v___y_4027_;
v___y_3942_ = v___y_4028_;
v___y_3943_ = v___y_4029_;
v___y_3944_ = v___y_4030_;
goto v___jp_3938_;
}
}
else
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4059_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4033_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4033_);
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
else
{
v___y_3939_ = v___y_4025_;
v___y_3940_ = v_isHEq_4026_;
v___y_3941_ = v___y_4027_;
v___y_3942_ = v___y_4028_;
v___y_3943_ = v___y_4029_;
v___y_3944_ = v___y_4030_;
goto v___jp_3938_;
}
}
}
v___jp_4067_:
{
lean_object* v___x_4073_; 
lean_inc_ref(v___x_3937_);
v___x_4073_ = l_Lean_Meta_matchHEq_x3f(v___x_3937_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4073_) == 0)
{
lean_object* v_a_4074_; 
v_a_4074_ = lean_ctor_get(v___x_4073_, 0);
lean_inc(v_a_4074_);
lean_dec_ref_known(v___x_4073_, 1);
if (lean_obj_tag(v_a_4074_) == 1)
{
lean_object* v_val_4075_; lean_object* v_snd_4076_; lean_object* v_snd_4077_; lean_object* v_fst_4078_; lean_object* v_fst_4079_; lean_object* v_fst_4080_; lean_object* v_snd_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4181_; 
v_val_4075_ = lean_ctor_get(v_a_4074_, 0);
lean_inc(v_val_4075_);
lean_dec_ref_known(v_a_4074_, 1);
v_snd_4076_ = lean_ctor_get(v_val_4075_, 1);
lean_inc(v_snd_4076_);
v_snd_4077_ = lean_ctor_get(v_snd_4076_, 1);
lean_inc(v_snd_4077_);
v_fst_4078_ = lean_ctor_get(v_val_4075_, 0);
lean_inc(v_fst_4078_);
lean_dec(v_val_4075_);
v_fst_4079_ = lean_ctor_get(v_snd_4076_, 0);
lean_inc(v_fst_4079_);
lean_dec(v_snd_4076_);
v_fst_4080_ = lean_ctor_get(v_snd_4077_, 0);
v_snd_4081_ = lean_ctor_get(v_snd_4077_, 1);
v_isSharedCheck_4181_ = !lean_is_exclusive(v_snd_4077_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4083_ = v_snd_4077_;
v_isShared_4084_ = v_isSharedCheck_4181_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_snd_4081_);
lean_inc(v_fst_4080_);
lean_dec(v_snd_4077_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4181_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4085_; 
v___x_4085_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4079_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_object* v_a_4086_; 
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc(v_a_4086_);
lean_dec_ref_known(v___x_4085_, 1);
if (lean_obj_tag(v_a_4086_) == 1)
{
lean_object* v_val_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4172_; 
v_val_4087_ = lean_ctor_get(v_a_4086_, 0);
v_isSharedCheck_4172_ = !lean_is_exclusive(v_a_4086_);
if (v_isSharedCheck_4172_ == 0)
{
v___x_4089_ = v_a_4086_;
v_isShared_4090_ = v_isSharedCheck_4172_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_val_4087_);
lean_dec(v_a_4086_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4172_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4091_; 
v___x_4091_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4081_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
lean_inc(v_a_4092_);
lean_dec_ref_known(v___x_4091_, 1);
if (lean_obj_tag(v_a_4092_) == 1)
{
lean_object* v_toConstantVal_4093_; lean_object* v_val_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4163_; 
v_toConstantVal_4093_ = lean_ctor_get(v_val_4087_, 0);
lean_inc_ref(v_toConstantVal_4093_);
lean_dec(v_val_4087_);
v_val_4094_ = lean_ctor_get(v_a_4092_, 0);
v_isSharedCheck_4163_ = !lean_is_exclusive(v_a_4092_);
if (v_isSharedCheck_4163_ == 0)
{
v___x_4096_ = v_a_4092_;
v_isShared_4097_ = v_isSharedCheck_4163_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_val_4094_);
lean_dec(v_a_4092_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4163_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v_toConstantVal_4098_; lean_object* v_name_4099_; lean_object* v_name_4100_; uint8_t v___x_4101_; 
v_toConstantVal_4098_ = lean_ctor_get(v_val_4094_, 0);
lean_inc_ref(v_toConstantVal_4098_);
lean_dec(v_val_4094_);
v_name_4099_ = lean_ctor_get(v_toConstantVal_4093_, 0);
lean_inc(v_name_4099_);
lean_dec_ref(v_toConstantVal_4093_);
v_name_4100_ = lean_ctor_get(v_toConstantVal_4098_, 0);
lean_inc(v_name_4100_);
lean_dec_ref(v_toConstantVal_4098_);
v___x_4101_ = lean_name_eq(v_name_4099_, v_name_4100_);
lean_dec(v_name_4100_);
lean_dec(v_name_4099_);
if (v___x_4101_ == 0)
{
lean_object* v___x_4102_; 
v___x_4102_ = l_Lean_Meta_isExprDefEq(v_fst_4078_, v_fst_4080_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v_a_4103_; uint8_t v___x_4104_; 
v_a_4103_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4102_, 1);
v___x_4104_ = lean_unbox(v_a_4103_);
lean_dec(v_a_4103_);
if (v___x_4104_ == 0)
{
lean_del_object(v___x_4096_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4083_);
v___y_4025_ = v_isEq_4068_;
v_isHEq_4026_ = v___x_3867_;
v___y_4027_ = v___y_4069_;
v___y_4028_ = v___y_4070_;
v___y_4029_ = v___y_4071_;
v___y_4030_ = v___y_4072_;
goto v___jp_4024_;
}
else
{
lean_object* v___x_4105_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec_ref(v_config_3856_);
lean_inc(v_mvarId_3857_);
v___x_4105_ = l_Lean_MVarId_getType(v_mvarId_3857_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4105_) == 0)
{
lean_object* v_a_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; 
v_a_4106_ = lean_ctor_get(v___x_4105_, 0);
lean_inc(v_a_4106_);
lean_dec_ref_known(v___x_4105_, 1);
v___x_4107_ = l_Lean_LocalDecl_toExpr(v_val_3900_);
v___x_4108_ = l_Lean_Meta_mkEqOfHEq(v___x_4107_, v___x_3867_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4110_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4109_);
lean_dec_ref_known(v___x_4108_, 1);
v___x_4110_ = l_Lean_Meta_mkNoConfusion(v_a_4106_, v_a_4109_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_object* v_a_4111_; lean_object* v___x_4112_; 
v_a_4111_ = lean_ctor_get(v___x_4110_, 0);
lean_inc(v_a_4111_);
lean_dec_ref_known(v___x_4110_, 1);
v___x_4112_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3857_, v_a_4111_, v___y_4070_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v___x_4113_; lean_object* v___x_4115_; 
lean_dec_ref_known(v___x_4112_, 1);
v___x_4113_ = lean_box(v___x_3867_);
if (v_isShared_4097_ == 0)
{
lean_ctor_set(v___x_4096_, 0, v___x_4113_);
v___x_4115_ = v___x_4096_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v___x_4113_);
v___x_4115_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
lean_object* v___x_4117_; 
if (v_isShared_4084_ == 0)
{
lean_ctor_set(v___x_4083_, 1, v___x_3904_);
lean_ctor_set(v___x_4083_, 0, v___x_4115_);
v___x_4117_ = v___x_4083_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4115_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_3904_);
v___x_4117_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
lean_object* v___x_4119_; 
if (v_isShared_4090_ == 0)
{
lean_ctor_set_tag(v___x_4089_, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4117_);
v___x_4119_ = v___x_4089_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v___x_4117_);
v___x_4119_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
v_a_3874_ = v___x_4119_;
goto v___jp_3873_;
}
}
}
}
else
{
lean_object* v_a_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4130_; 
lean_del_object(v___x_4096_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4083_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
v_a_4123_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4130_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4125_ = v___x_4112_;
v_isShared_4126_ = v_isSharedCheck_4130_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_a_4123_);
lean_dec(v___x_4112_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4130_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4128_; 
if (v_isShared_4126_ == 0)
{
v___x_4128_ = v___x_4125_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v_a_4123_);
v___x_4128_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
return v___x_4128_;
}
}
}
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_del_object(v___x_4096_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4083_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4131_ = lean_ctor_get(v___x_4110_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4110_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4110_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4110_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
else
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4146_; 
lean_dec(v_a_4106_);
lean_del_object(v___x_4096_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4083_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4139_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4146_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4146_ == 0)
{
v___x_4141_ = v___x_4108_;
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4108_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4146_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v___x_4144_; 
if (v_isShared_4142_ == 0)
{
v___x_4144_ = v___x_4141_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v_a_4139_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
else
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4154_; 
lean_del_object(v___x_4096_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4083_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4147_ = lean_ctor_get(v___x_4105_, 0);
v_isSharedCheck_4154_ = !lean_is_exclusive(v___x_4105_);
if (v_isSharedCheck_4154_ == 0)
{
v___x_4149_ = v___x_4105_;
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4105_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v_a_4147_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
}
else
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4162_; 
lean_del_object(v___x_4096_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4083_);
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4155_ = lean_ctor_get(v___x_4102_, 0);
v_isSharedCheck_4162_ = !lean_is_exclusive(v___x_4102_);
if (v_isSharedCheck_4162_ == 0)
{
v___x_4157_ = v___x_4102_;
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v___x_4102_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4160_; 
if (v_isShared_4158_ == 0)
{
v___x_4160_ = v___x_4157_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v_a_4155_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
}
}
else
{
lean_del_object(v___x_4096_);
lean_del_object(v___x_4089_);
lean_del_object(v___x_4083_);
lean_dec(v_fst_4080_);
lean_dec(v_fst_4078_);
v___y_4025_ = v_isEq_4068_;
v_isHEq_4026_ = v___x_3867_;
v___y_4027_ = v___y_4069_;
v___y_4028_ = v___y_4070_;
v___y_4029_ = v___y_4071_;
v___y_4030_ = v___y_4072_;
goto v___jp_4024_;
}
}
}
else
{
lean_dec(v_a_4092_);
lean_del_object(v___x_4089_);
lean_dec(v_val_4087_);
lean_del_object(v___x_4083_);
lean_dec(v_fst_4080_);
lean_dec(v_fst_4078_);
v___y_4025_ = v_isEq_4068_;
v_isHEq_4026_ = v___x_3867_;
v___y_4027_ = v___y_4069_;
v___y_4028_ = v___y_4070_;
v___y_4029_ = v___y_4071_;
v___y_4030_ = v___y_4072_;
goto v___jp_4024_;
}
}
else
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4171_; 
lean_del_object(v___x_4089_);
lean_dec(v_val_4087_);
lean_del_object(v___x_4083_);
lean_dec(v_fst_4080_);
lean_dec(v_fst_4078_);
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4164_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4166_ = v___x_4091_;
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v___x_4091_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4169_; 
if (v_isShared_4167_ == 0)
{
v___x_4169_ = v___x_4166_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v_a_4164_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
}
}
}
}
}
else
{
lean_dec(v_a_4086_);
lean_del_object(v___x_4083_);
lean_dec(v_snd_4081_);
lean_dec(v_fst_4080_);
lean_dec(v_fst_4078_);
v___y_4025_ = v_isEq_4068_;
v_isHEq_4026_ = v___x_3867_;
v___y_4027_ = v___y_4069_;
v___y_4028_ = v___y_4070_;
v___y_4029_ = v___y_4071_;
v___y_4030_ = v___y_4072_;
goto v___jp_4024_;
}
}
else
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4180_; 
lean_del_object(v___x_4083_);
lean_dec(v_snd_4081_);
lean_dec(v_fst_4080_);
lean_dec(v_fst_4078_);
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4173_ = lean_ctor_get(v___x_4085_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v___x_4085_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4175_ = v___x_4085_;
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v___x_4085_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v___x_4178_; 
if (v_isShared_4176_ == 0)
{
v___x_4178_ = v___x_4175_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4173_);
v___x_4178_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
return v___x_4178_;
}
}
}
}
}
else
{
lean_dec(v_a_4074_);
v___y_4025_ = v_isEq_4068_;
v_isHEq_4026_ = v___x_3936_;
v___y_4027_ = v___y_4069_;
v___y_4028_ = v___y_4070_;
v___y_4029_ = v___y_4071_;
v___y_4030_ = v___y_4072_;
goto v___jp_4024_;
}
}
else
{
lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4189_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4182_ = lean_ctor_get(v___x_4073_, 0);
v_isSharedCheck_4189_ = !lean_is_exclusive(v___x_4073_);
if (v_isSharedCheck_4189_ == 0)
{
v___x_4184_ = v___x_4073_;
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v___x_4073_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4189_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4187_; 
if (v_isShared_4185_ == 0)
{
v___x_4187_ = v___x_4184_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4188_, 0, v_a_4182_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
return v___x_4187_;
}
}
}
}
v___jp_4190_:
{
lean_object* v___x_4195_; 
lean_inc_ref(v___x_3937_);
v___x_4195_ = l_Lean_Meta_matchEq_x3f(v___x_3937_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
lean_inc(v_a_4196_);
lean_dec_ref_known(v___x_4195_, 1);
if (lean_obj_tag(v_a_4196_) == 1)
{
lean_object* v_val_4197_; lean_object* v_snd_4198_; lean_object* v_fst_4199_; lean_object* v_snd_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4279_; 
v_val_4197_ = lean_ctor_get(v_a_4196_, 0);
lean_inc(v_val_4197_);
lean_dec_ref_known(v_a_4196_, 1);
v_snd_4198_ = lean_ctor_get(v_val_4197_, 1);
lean_inc(v_snd_4198_);
lean_dec(v_val_4197_);
v_fst_4199_ = lean_ctor_get(v_snd_4198_, 0);
v_snd_4200_ = lean_ctor_get(v_snd_4198_, 1);
v_isSharedCheck_4279_ = !lean_is_exclusive(v_snd_4198_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4202_ = v_snd_4198_;
v_isShared_4203_ = v_isSharedCheck_4279_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_snd_4200_);
lean_inc(v_fst_4199_);
lean_dec(v_snd_4198_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4279_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v___x_4204_; 
v___x_4204_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4199_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v_a_4205_; 
v_a_4205_ = lean_ctor_get(v___x_4204_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v___x_4204_, 1);
if (lean_obj_tag(v_a_4205_) == 1)
{
lean_object* v_val_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4270_; 
v_val_4206_ = lean_ctor_get(v_a_4205_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v_a_4205_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4208_ = v_a_4205_;
v_isShared_4209_ = v_isSharedCheck_4270_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_val_4206_);
lean_dec(v_a_4205_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4270_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4210_; 
v___x_4210_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4200_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_);
if (lean_obj_tag(v___x_4210_) == 0)
{
lean_object* v_a_4211_; 
v_a_4211_ = lean_ctor_get(v___x_4210_, 0);
lean_inc(v_a_4211_);
lean_dec_ref_known(v___x_4210_, 1);
if (lean_obj_tag(v_a_4211_) == 1)
{
lean_object* v_toConstantVal_4212_; lean_object* v_val_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4261_; 
v_toConstantVal_4212_ = lean_ctor_get(v_val_4206_, 0);
lean_inc_ref(v_toConstantVal_4212_);
lean_dec(v_val_4206_);
v_val_4213_ = lean_ctor_get(v_a_4211_, 0);
v_isSharedCheck_4261_ = !lean_is_exclusive(v_a_4211_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4215_ = v_a_4211_;
v_isShared_4216_ = v_isSharedCheck_4261_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_val_4213_);
lean_dec(v_a_4211_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4261_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v_toConstantVal_4217_; lean_object* v_name_4218_; lean_object* v_name_4219_; uint8_t v___x_4220_; 
v_toConstantVal_4217_ = lean_ctor_get(v_val_4213_, 0);
lean_inc_ref(v_toConstantVal_4217_);
lean_dec(v_val_4213_);
v_name_4218_ = lean_ctor_get(v_toConstantVal_4212_, 0);
lean_inc(v_name_4218_);
lean_dec_ref(v_toConstantVal_4212_);
v_name_4219_ = lean_ctor_get(v_toConstantVal_4217_, 0);
lean_inc(v_name_4219_);
lean_dec_ref(v_toConstantVal_4217_);
v___x_4220_ = lean_name_eq(v_name_4218_, v_name_4219_);
lean_dec(v_name_4219_);
lean_dec(v_name_4218_);
if (v___x_4220_ == 0)
{
lean_object* v___x_4221_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec_ref(v_config_3856_);
lean_inc(v_mvarId_3857_);
v___x_4221_ = l_Lean_MVarId_getType(v_mvarId_3857_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_);
if (lean_obj_tag(v___x_4221_) == 0)
{
lean_object* v_a_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
v_a_4222_ = lean_ctor_get(v___x_4221_, 0);
lean_inc(v_a_4222_);
lean_dec_ref_known(v___x_4221_, 1);
v___x_4223_ = l_Lean_LocalDecl_toExpr(v_val_3900_);
v___x_4224_ = l_Lean_Meta_mkNoConfusion(v_a_4222_, v___x_4223_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_);
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4226_; 
v_a_4225_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4225_);
lean_dec_ref_known(v___x_4224_, 1);
v___x_4226_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3857_, v_a_4225_, v___y_4192_);
if (lean_obj_tag(v___x_4226_) == 0)
{
lean_object* v___x_4227_; lean_object* v___x_4229_; 
lean_dec_ref_known(v___x_4226_, 1);
v___x_4227_ = lean_box(v___x_3867_);
if (v_isShared_4216_ == 0)
{
lean_ctor_set(v___x_4215_, 0, v___x_4227_);
v___x_4229_ = v___x_4215_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v___x_4227_);
v___x_4229_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4231_; 
if (v_isShared_4203_ == 0)
{
lean_ctor_set(v___x_4202_, 1, v___x_3904_);
lean_ctor_set(v___x_4202_, 0, v___x_4229_);
v___x_4231_ = v___x_4202_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v___x_4229_);
lean_ctor_set(v_reuseFailAlloc_4235_, 1, v___x_3904_);
v___x_4231_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
lean_object* v___x_4233_; 
if (v_isShared_4209_ == 0)
{
lean_ctor_set_tag(v___x_4208_, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4231_);
v___x_4233_ = v___x_4208_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v___x_4231_);
v___x_4233_ = v_reuseFailAlloc_4234_;
goto v_reusejp_4232_;
}
v_reusejp_4232_:
{
v_a_3874_ = v___x_4233_;
goto v___jp_3873_;
}
}
}
}
else
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4244_; 
lean_del_object(v___x_4215_);
lean_del_object(v___x_4208_);
lean_del_object(v___x_4202_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
v_a_4237_ = lean_ctor_get(v___x_4226_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4239_ = v___x_4226_;
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4226_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_a_4237_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
}
}
}
}
else
{
lean_object* v_a_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4252_; 
lean_del_object(v___x_4215_);
lean_del_object(v___x_4208_);
lean_del_object(v___x_4202_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4245_ = lean_ctor_get(v___x_4224_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v___x_4224_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4247_ = v___x_4224_;
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_a_4245_);
lean_dec(v___x_4224_);
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
lean_del_object(v___x_4215_);
lean_del_object(v___x_4208_);
lean_del_object(v___x_4202_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4253_ = lean_ctor_get(v___x_4221_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v___x_4221_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4255_ = v___x_4221_;
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v___x_4221_);
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
lean_del_object(v___x_4215_);
lean_del_object(v___x_4208_);
lean_del_object(v___x_4202_);
v_isEq_4068_ = v___x_3867_;
v___y_4069_ = v___y_4191_;
v___y_4070_ = v___y_4192_;
v___y_4071_ = v___y_4193_;
v___y_4072_ = v___y_4194_;
goto v___jp_4067_;
}
}
}
else
{
lean_dec(v_a_4211_);
lean_del_object(v___x_4208_);
lean_dec(v_val_4206_);
lean_del_object(v___x_4202_);
v_isEq_4068_ = v___x_3867_;
v___y_4069_ = v___y_4191_;
v___y_4070_ = v___y_4192_;
v___y_4071_ = v___y_4193_;
v___y_4072_ = v___y_4194_;
goto v___jp_4067_;
}
}
else
{
lean_object* v_a_4262_; lean_object* v___x_4264_; uint8_t v_isShared_4265_; uint8_t v_isSharedCheck_4269_; 
lean_del_object(v___x_4208_);
lean_dec(v_val_4206_);
lean_del_object(v___x_4202_);
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4262_ = lean_ctor_get(v___x_4210_, 0);
v_isSharedCheck_4269_ = !lean_is_exclusive(v___x_4210_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4264_ = v___x_4210_;
v_isShared_4265_ = v_isSharedCheck_4269_;
goto v_resetjp_4263_;
}
else
{
lean_inc(v_a_4262_);
lean_dec(v___x_4210_);
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
}
else
{
lean_dec(v_a_4205_);
lean_del_object(v___x_4202_);
lean_dec(v_snd_4200_);
v_isEq_4068_ = v___x_3867_;
v___y_4069_ = v___y_4191_;
v___y_4070_ = v___y_4192_;
v___y_4071_ = v___y_4193_;
v___y_4072_ = v___y_4194_;
goto v___jp_4067_;
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
lean_del_object(v___x_4202_);
lean_dec(v_snd_4200_);
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4271_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4204_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4204_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4276_; 
if (v_isShared_4274_ == 0)
{
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
}
}
}
else
{
lean_dec(v_a_4196_);
v_isEq_4068_ = v___x_3936_;
v___y_4069_ = v___y_4191_;
v___y_4070_ = v___y_4192_;
v___y_4071_ = v___y_4193_;
v___y_4072_ = v___y_4194_;
goto v___jp_4067_;
}
}
else
{
lean_object* v_a_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4287_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4280_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4287_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4287_ == 0)
{
v___x_4282_ = v___x_4195_;
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_a_4280_);
lean_dec(v___x_4195_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4285_; 
if (v_isShared_4283_ == 0)
{
v___x_4285_ = v___x_4282_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4286_; 
v_reuseFailAlloc_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4286_, 0, v_a_4280_);
v___x_4285_ = v_reuseFailAlloc_4286_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
return v___x_4285_;
}
}
}
}
v___jp_4288_:
{
lean_object* v___x_4293_; 
lean_inc_ref(v___x_3937_);
v___x_4293_ = l_Lean_refutableHasNotBit_x3f(v___x_3937_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4293_) == 0)
{
lean_object* v_a_4294_; 
v_a_4294_ = lean_ctor_get(v___x_4293_, 0);
lean_inc(v_a_4294_);
lean_dec_ref_known(v___x_4293_, 1);
if (lean_obj_tag(v_a_4294_) == 1)
{
lean_object* v_val_4295_; lean_object* v___x_4297_; uint8_t v_isShared_4298_; uint8_t v_isSharedCheck_4335_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec_ref(v_config_3856_);
v_val_4295_ = lean_ctor_get(v_a_4294_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v_a_4294_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4297_ = v_a_4294_;
v_isShared_4298_ = v_isSharedCheck_4335_;
goto v_resetjp_4296_;
}
else
{
lean_inc(v_val_4295_);
lean_dec(v_a_4294_);
v___x_4297_ = lean_box(0);
v_isShared_4298_ = v_isSharedCheck_4335_;
goto v_resetjp_4296_;
}
v_resetjp_4296_:
{
lean_object* v___x_4299_; 
lean_inc(v_mvarId_3857_);
v___x_4299_ = l_Lean_MVarId_getType(v_mvarId_3857_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_a_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; 
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v___x_4299_, 1);
v___x_4301_ = l_Lean_LocalDecl_toExpr(v_val_3900_);
v___x_4302_ = l_Lean_Meta_mkAbsurd(v_a_4300_, v_val_4295_, v___x_4301_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4302_) == 0)
{
lean_object* v_a_4303_; lean_object* v___x_4304_; 
v_a_4303_ = lean_ctor_get(v___x_4302_, 0);
lean_inc(v_a_4303_);
lean_dec_ref_known(v___x_4302_, 1);
v___x_4304_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3857_, v_a_4303_, v___y_4290_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v___x_4305_; lean_object* v___x_4307_; 
lean_dec_ref_known(v___x_4304_, 1);
v___x_4305_ = lean_box(v___x_3867_);
if (v_isShared_4298_ == 0)
{
lean_ctor_set(v___x_4297_, 0, v___x_4305_);
v___x_4307_ = v___x_4297_;
goto v_reusejp_4306_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v___x_4305_);
v___x_4307_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4306_;
}
v_reusejp_4306_:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; 
v___x_4308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4308_, 0, v___x_4307_);
lean_ctor_set(v___x_4308_, 1, v___x_3904_);
v___x_4309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4309_, 0, v___x_4308_);
v_a_3874_ = v___x_4309_;
goto v___jp_3873_;
}
}
else
{
lean_object* v_a_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4318_; 
lean_del_object(v___x_4297_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
v_a_4311_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4318_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4318_ == 0)
{
v___x_4313_ = v___x_4304_;
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_a_4311_);
lean_dec(v___x_4304_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v_a_4311_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
}
else
{
lean_object* v_a_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4326_; 
lean_del_object(v___x_4297_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4319_ = lean_ctor_get(v___x_4302_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4321_ = v___x_4302_;
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_a_4319_);
lean_dec(v___x_4302_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4324_; 
if (v_isShared_4322_ == 0)
{
v___x_4324_ = v___x_4321_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_a_4319_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
}
else
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4334_; 
lean_del_object(v___x_4297_);
lean_dec(v_val_4295_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4327_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4334_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4334_ == 0)
{
v___x_4329_ = v___x_4299_;
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___x_4299_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
v___x_4332_ = v___x_4329_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v_a_4327_);
v___x_4332_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
return v___x_4332_;
}
}
}
}
}
else
{
lean_object* v___x_4336_; 
lean_dec(v_a_4294_);
lean_inc_ref(v___x_3937_);
v___x_4336_ = l_Lean_Meta_matchNe_x3f(v___x_3937_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v_a_4337_; 
v_a_4337_ = lean_ctor_get(v___x_4336_, 0);
lean_inc(v_a_4337_);
lean_dec_ref_known(v___x_4336_, 1);
if (lean_obj_tag(v_a_4337_) == 1)
{
lean_object* v_val_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4407_; 
v_val_4338_ = lean_ctor_get(v_a_4337_, 0);
v_isSharedCheck_4407_ = !lean_is_exclusive(v_a_4337_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4340_ = v_a_4337_;
v_isShared_4341_ = v_isSharedCheck_4407_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_val_4338_);
lean_dec(v_a_4337_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4407_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v_snd_4342_; lean_object* v_fst_4343_; lean_object* v_snd_4344_; lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4406_; 
v_snd_4342_ = lean_ctor_get(v_val_4338_, 1);
lean_inc(v_snd_4342_);
lean_dec(v_val_4338_);
v_fst_4343_ = lean_ctor_get(v_snd_4342_, 0);
v_snd_4344_ = lean_ctor_get(v_snd_4342_, 1);
v_isSharedCheck_4406_ = !lean_is_exclusive(v_snd_4342_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4346_ = v_snd_4342_;
v_isShared_4347_ = v_isSharedCheck_4406_;
goto v_resetjp_4345_;
}
else
{
lean_inc(v_snd_4344_);
lean_inc(v_fst_4343_);
lean_dec(v_snd_4342_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4406_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
lean_object* v___x_4348_; 
lean_inc(v_fst_4343_);
v___x_4348_ = l_Lean_Meta_isExprDefEq(v_fst_4343_, v_snd_4344_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4348_) == 0)
{
lean_object* v_a_4349_; uint8_t v___x_4350_; 
v_a_4349_ = lean_ctor_get(v___x_4348_, 0);
lean_inc(v_a_4349_);
lean_dec_ref_known(v___x_4348_, 1);
v___x_4350_ = lean_unbox(v_a_4349_);
if (v___x_4350_ == 0)
{
lean_dec(v_a_4349_);
lean_del_object(v___x_4346_);
lean_dec(v_fst_4343_);
lean_del_object(v___x_4340_);
v___y_4191_ = v___y_4289_;
v___y_4192_ = v___y_4290_;
v___y_4193_ = v___y_4291_;
v___y_4194_ = v___y_4292_;
goto v___jp_4190_;
}
else
{
lean_object* v___x_4351_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec_ref(v_config_3856_);
lean_inc(v_mvarId_3857_);
v___x_4351_ = l_Lean_MVarId_getType(v_mvarId_3857_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4351_) == 0)
{
lean_object* v_a_4352_; lean_object* v___x_4353_; 
v_a_4352_ = lean_ctor_get(v___x_4351_, 0);
lean_inc(v_a_4352_);
lean_dec_ref_known(v___x_4351_, 1);
v___x_4353_ = l_Lean_Meta_mkEqRefl(v_fst_4343_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4353_) == 0)
{
lean_object* v_a_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v_a_4354_ = lean_ctor_get(v___x_4353_, 0);
lean_inc(v_a_4354_);
lean_dec_ref_known(v___x_4353_, 1);
v___x_4355_ = l_Lean_LocalDecl_toExpr(v_val_3900_);
v___x_4356_ = l_Lean_Meta_mkAbsurd(v_a_4352_, v_a_4354_, v___x_4355_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_object* v_a_4357_; lean_object* v___x_4358_; 
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_a_4357_);
lean_dec_ref_known(v___x_4356_, 1);
v___x_4358_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3857_, v_a_4357_, v___y_4290_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_object* v___x_4360_; 
lean_dec_ref_known(v___x_4358_, 1);
if (v_isShared_4341_ == 0)
{
lean_ctor_set(v___x_4340_, 0, v_a_4349_);
v___x_4360_ = v___x_4340_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4349_);
v___x_4360_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
lean_object* v___x_4362_; 
if (v_isShared_4347_ == 0)
{
lean_ctor_set(v___x_4346_, 1, v___x_3904_);
lean_ctor_set(v___x_4346_, 0, v___x_4360_);
v___x_4362_ = v___x_4346_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v___x_4360_);
lean_ctor_set(v_reuseFailAlloc_4364_, 1, v___x_3904_);
v___x_4362_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4362_);
v_a_3874_ = v___x_4363_;
goto v___jp_3873_;
}
}
}
else
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4373_; 
lean_dec(v_a_4349_);
lean_del_object(v___x_4346_);
lean_del_object(v___x_4340_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
v_a_4366_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4373_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4373_ == 0)
{
v___x_4368_ = v___x_4358_;
v_isShared_4369_ = v_isSharedCheck_4373_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v___x_4358_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4373_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v___x_4371_; 
if (v_isShared_4369_ == 0)
{
v___x_4371_ = v___x_4368_;
goto v_reusejp_4370_;
}
else
{
lean_object* v_reuseFailAlloc_4372_; 
v_reuseFailAlloc_4372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4372_, 0, v_a_4366_);
v___x_4371_ = v_reuseFailAlloc_4372_;
goto v_reusejp_4370_;
}
v_reusejp_4370_:
{
return v___x_4371_;
}
}
}
}
else
{
lean_object* v_a_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4381_; 
lean_dec(v_a_4349_);
lean_del_object(v___x_4346_);
lean_del_object(v___x_4340_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4374_ = lean_ctor_get(v___x_4356_, 0);
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4376_ = v___x_4356_;
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_a_4374_);
lean_dec(v___x_4356_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4381_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4379_; 
if (v_isShared_4377_ == 0)
{
v___x_4379_ = v___x_4376_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v_a_4374_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
return v___x_4379_;
}
}
}
}
else
{
lean_object* v_a_4382_; lean_object* v___x_4384_; uint8_t v_isShared_4385_; uint8_t v_isSharedCheck_4389_; 
lean_dec(v_a_4352_);
lean_dec(v_a_4349_);
lean_del_object(v___x_4346_);
lean_del_object(v___x_4340_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4382_ = lean_ctor_get(v___x_4353_, 0);
v_isSharedCheck_4389_ = !lean_is_exclusive(v___x_4353_);
if (v_isSharedCheck_4389_ == 0)
{
v___x_4384_ = v___x_4353_;
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
else
{
lean_inc(v_a_4382_);
lean_dec(v___x_4353_);
v___x_4384_ = lean_box(0);
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
v_resetjp_4383_:
{
lean_object* v___x_4387_; 
if (v_isShared_4385_ == 0)
{
v___x_4387_ = v___x_4384_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_a_4382_);
v___x_4387_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
return v___x_4387_;
}
}
}
}
else
{
lean_object* v_a_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4397_; 
lean_dec(v_a_4349_);
lean_del_object(v___x_4346_);
lean_dec(v_fst_4343_);
lean_del_object(v___x_4340_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
v_a_4390_ = lean_ctor_get(v___x_4351_, 0);
v_isSharedCheck_4397_ = !lean_is_exclusive(v___x_4351_);
if (v_isSharedCheck_4397_ == 0)
{
v___x_4392_ = v___x_4351_;
v_isShared_4393_ = v_isSharedCheck_4397_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_a_4390_);
lean_dec(v___x_4351_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4397_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
lean_object* v___x_4395_; 
if (v_isShared_4393_ == 0)
{
v___x_4395_ = v___x_4392_;
goto v_reusejp_4394_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v_a_4390_);
v___x_4395_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4394_;
}
v_reusejp_4394_:
{
return v___x_4395_;
}
}
}
}
}
else
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4405_; 
lean_del_object(v___x_4346_);
lean_dec(v_fst_4343_);
lean_del_object(v___x_4340_);
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4398_ = lean_ctor_get(v___x_4348_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4348_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4400_ = v___x_4348_;
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4348_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
}
}
else
{
lean_dec(v_a_4337_);
v___y_4191_ = v___y_4289_;
v___y_4192_ = v___y_4290_;
v___y_4193_ = v___y_4291_;
v___y_4194_ = v___y_4292_;
goto v___jp_4190_;
}
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4415_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4408_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4410_ = v___x_4336_;
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4336_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_a_4408_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
}
}
else
{
lean_object* v_a_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4423_; 
lean_dec_ref(v___x_3937_);
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_4416_ = lean_ctor_get(v___x_4293_, 0);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4418_ = v___x_4293_;
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_a_4416_);
lean_dec(v___x_4293_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4421_; 
if (v_isShared_4419_ == 0)
{
v___x_4421_ = v___x_4418_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_a_4416_);
v___x_4421_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
return v___x_4421_;
}
}
}
}
}
else
{
lean_object* v___x_4494_; 
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
v___x_4494_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3905_, v___x_3904_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
v___y_3888_ = v___x_4494_;
goto v___jp_3887_;
}
v___jp_3906_:
{
uint8_t v_emptyType_3913_; 
v_emptyType_3913_ = lean_ctor_get_uint8(v_config_3856_, sizeof(void*)*1 + 1);
if (v_emptyType_3913_ == 0)
{
lean_object* v___x_3914_; 
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
v___x_3914_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3905_, v___x_3904_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
v___y_3888_ = v___x_3914_;
goto v___jp_3887_;
}
else
{
if (v___y_3907_ == 0)
{
if (v___y_3908_ == 0)
{
lean_object* v_searchFuel_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v_searchFuel_3915_ = lean_ctor_get(v_config_3856_, 0);
v___x_3916_ = l_Lean_LocalDecl_fvarId(v_val_3900_);
lean_dec(v_val_3900_);
lean_inc(v_searchFuel_3915_);
lean_inc(v_mvarId_3857_);
v___x_3917_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3857_, v___x_3916_, v_searchFuel_3915_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
if (lean_obj_tag(v___x_3917_) == 0)
{
lean_object* v_a_3918_; uint8_t v___x_3919_; 
v_a_3918_ = lean_ctor_get(v___x_3917_, 0);
lean_inc(v_a_3918_);
lean_dec_ref_known(v___x_3917_, 1);
v___x_3919_ = lean_unbox(v_a_3918_);
if (v___x_3919_ == 0)
{
lean_object* v___x_3920_; 
lean_dec(v_a_3918_);
lean_del_object(v___x_3902_);
v___x_3920_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3905_, v___x_3904_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
v___y_3888_ = v___x_3920_;
goto v___jp_3887_;
}
else
{
lean_object* v___x_3922_; 
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
if (v_isShared_3903_ == 0)
{
lean_ctor_set(v___x_3902_, 0, v_a_3918_);
v___x_3922_ = v___x_3902_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3918_);
v___x_3922_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3922_);
lean_ctor_set(v___x_3923_, 1, v___x_3904_);
v___x_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3923_);
v_a_3874_ = v___x_3924_;
goto v___jp_3873_;
}
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3933_; 
lean_del_object(v___x_3902_);
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_3926_ = lean_ctor_get(v___x_3917_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3917_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3928_ = v___x_3917_;
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3917_);
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
else
{
lean_object* v___x_3934_; 
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
v___x_3934_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3905_, v___x_3904_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
v___y_3888_ = v___x_3934_;
goto v___jp_3887_;
}
}
else
{
lean_object* v___x_3935_; 
lean_del_object(v___x_3902_);
lean_dec(v_val_3900_);
v___x_3935_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___lam__0(v___x_3905_, v___x_3904_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
v___y_3888_ = v___x_3935_;
goto v___jp_3887_;
}
}
}
}
}
v___jp_3873_:
{
lean_object* v___x_3875_; lean_object* v___x_3877_; 
v___x_3875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3875_, 0, v_a_3874_);
if (v_isShared_3872_ == 0)
{
lean_ctor_set(v___x_3871_, 0, v___x_3875_);
v___x_3877_ = v___x_3871_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v___x_3875_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_snd_3869_);
v___x_3877_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
lean_object* v___x_3878_; 
v___x_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
return v___x_3878_;
}
}
v___jp_3881_:
{
lean_object* v___x_3883_; size_t v___x_3884_; size_t v___x_3885_; lean_object* v___x_3886_; 
v___x_3883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3880_);
lean_ctor_set(v___x_3883_, 1, v_a_3882_);
v___x_3884_ = ((size_t)1ULL);
v___x_3885_ = lean_usize_add(v_i_3860_, v___x_3884_);
v___x_3886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3856_, v_mvarId_3857_, v_as_3858_, v_sz_3859_, v___x_3885_, v___x_3883_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
return v___x_3886_;
}
v___jp_3887_:
{
if (lean_obj_tag(v___y_3888_) == 0)
{
lean_object* v_a_3889_; 
v_a_3889_ = lean_ctor_get(v___y_3888_, 0);
lean_inc(v_a_3889_);
lean_dec_ref_known(v___y_3888_, 1);
if (lean_obj_tag(v_a_3889_) == 0)
{
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_3874_ = v_a_3889_;
goto v___jp_3873_;
}
else
{
lean_object* v_a_3890_; 
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
v_a_3890_ = lean_ctor_get(v_a_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v_a_3889_, 1);
v_a_3882_ = v_a_3890_;
goto v___jp_3881_;
}
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3898_; 
lean_del_object(v___x_3871_);
lean_dec(v_snd_3869_);
lean_dec(v_mvarId_3857_);
lean_dec_ref(v_config_3856_);
v_a_3891_ = lean_ctor_get(v___y_3888_, 0);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___y_3888_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3893_ = v___y_3888_;
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___y_3888_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3896_; 
if (v_isShared_3894_ == 0)
{
v___x_3896_ = v___x_3893_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v_a_3891_);
v___x_3896_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
return v___x_3896_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_config_4498_, lean_object* v_mvarId_4499_, lean_object* v_as_4500_, lean_object* v_sz_4501_, lean_object* v_i_4502_, lean_object* v_b_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_){
_start:
{
size_t v_sz_boxed_4509_; size_t v_i_boxed_4510_; lean_object* v_res_4511_; 
v_sz_boxed_4509_ = lean_unbox_usize(v_sz_4501_);
lean_dec(v_sz_4501_);
v_i_boxed_4510_ = lean_unbox_usize(v_i_4502_);
lean_dec(v_i_4502_);
v_res_4511_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4498_, v_mvarId_4499_, v_as_4500_, v_sz_boxed_4509_, v_i_boxed_4510_, v_b_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec_ref(v_as_4500_);
return v_res_4511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object* v_init_4512_, lean_object* v_config_4513_, lean_object* v_mvarId_4514_, lean_object* v_n_4515_, lean_object* v_b_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_){
_start:
{
if (lean_obj_tag(v_n_4515_) == 0)
{
lean_object* v_cs_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; size_t v_sz_4525_; size_t v___x_4526_; lean_object* v___x_4527_; 
v_cs_4522_ = lean_ctor_get(v_n_4515_, 0);
v___x_4523_ = lean_box(0);
v___x_4524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
lean_ctor_set(v___x_4524_, 1, v_b_4516_);
v_sz_4525_ = lean_array_size(v_cs_4522_);
v___x_4526_ = ((size_t)0ULL);
v___x_4527_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4512_, v_config_4513_, v_mvarId_4514_, v_cs_4522_, v_sz_4525_, v___x_4526_, v___x_4524_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v_a_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4542_; 
v_a_4528_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4542_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4542_ == 0)
{
v___x_4530_ = v___x_4527_;
v_isShared_4531_ = v_isSharedCheck_4542_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_a_4528_);
lean_dec(v___x_4527_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4542_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
lean_object* v_fst_4532_; 
v_fst_4532_ = lean_ctor_get(v_a_4528_, 0);
if (lean_obj_tag(v_fst_4532_) == 0)
{
lean_object* v_snd_4533_; lean_object* v___x_4534_; lean_object* v___x_4536_; 
v_snd_4533_ = lean_ctor_get(v_a_4528_, 1);
lean_inc(v_snd_4533_);
lean_dec(v_a_4528_);
v___x_4534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4534_, 0, v_snd_4533_);
if (v_isShared_4531_ == 0)
{
lean_ctor_set(v___x_4530_, 0, v___x_4534_);
v___x_4536_ = v___x_4530_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v___x_4534_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
return v___x_4536_;
}
}
else
{
lean_object* v_val_4538_; lean_object* v___x_4540_; 
lean_inc_ref(v_fst_4532_);
lean_dec(v_a_4528_);
v_val_4538_ = lean_ctor_get(v_fst_4532_, 0);
lean_inc(v_val_4538_);
lean_dec_ref_known(v_fst_4532_, 1);
if (v_isShared_4531_ == 0)
{
lean_ctor_set(v___x_4530_, 0, v_val_4538_);
v___x_4540_ = v___x_4530_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v_val_4538_);
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
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
v_a_4543_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v___x_4527_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4527_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_a_4543_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
return v___x_4548_;
}
}
}
}
else
{
lean_object* v_vs_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; size_t v_sz_4554_; size_t v___x_4555_; lean_object* v___x_4556_; 
v_vs_4551_ = lean_ctor_get(v_n_4515_, 0);
v___x_4552_ = lean_box(0);
v___x_4553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4552_);
lean_ctor_set(v___x_4553_, 1, v_b_4516_);
v_sz_4554_ = lean_array_size(v_vs_4551_);
v___x_4555_ = ((size_t)0ULL);
v___x_4556_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4513_, v_mvarId_4514_, v_vs_4551_, v_sz_4554_, v___x_4555_, v___x_4553_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
if (lean_obj_tag(v___x_4556_) == 0)
{
lean_object* v_a_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4571_; 
v_a_4557_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4559_ = v___x_4556_;
v_isShared_4560_ = v_isSharedCheck_4571_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_a_4557_);
lean_dec(v___x_4556_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4571_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v_fst_4561_; 
v_fst_4561_ = lean_ctor_get(v_a_4557_, 0);
if (lean_obj_tag(v_fst_4561_) == 0)
{
lean_object* v_snd_4562_; lean_object* v___x_4563_; lean_object* v___x_4565_; 
v_snd_4562_ = lean_ctor_get(v_a_4557_, 1);
lean_inc(v_snd_4562_);
lean_dec(v_a_4557_);
v___x_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4563_, 0, v_snd_4562_);
if (v_isShared_4560_ == 0)
{
lean_ctor_set(v___x_4559_, 0, v___x_4563_);
v___x_4565_ = v___x_4559_;
goto v_reusejp_4564_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v___x_4563_);
v___x_4565_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4564_;
}
v_reusejp_4564_:
{
return v___x_4565_;
}
}
else
{
lean_object* v_val_4567_; lean_object* v___x_4569_; 
lean_inc_ref(v_fst_4561_);
lean_dec(v_a_4557_);
v_val_4567_ = lean_ctor_get(v_fst_4561_, 0);
lean_inc(v_val_4567_);
lean_dec_ref_known(v_fst_4561_, 1);
if (v_isShared_4560_ == 0)
{
lean_ctor_set(v___x_4559_, 0, v_val_4567_);
v___x_4569_ = v___x_4559_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v_val_4567_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
return v___x_4569_;
}
}
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
v_a_4572_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___x_4556_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4556_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v___x_4577_; 
if (v_isShared_4575_ == 0)
{
v___x_4577_ = v___x_4574_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4572_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object* v_init_4580_, lean_object* v_config_4581_, lean_object* v_mvarId_4582_, lean_object* v_as_4583_, size_t v_sz_4584_, size_t v_i_4585_, lean_object* v_b_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_){
_start:
{
uint8_t v___x_4592_; 
v___x_4592_ = lean_usize_dec_lt(v_i_4585_, v_sz_4584_);
if (v___x_4592_ == 0)
{
lean_object* v___x_4593_; 
lean_dec(v_mvarId_4582_);
lean_dec_ref(v_config_4581_);
v___x_4593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4593_, 0, v_b_4586_);
return v___x_4593_;
}
else
{
lean_object* v_snd_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4628_; 
v_snd_4594_ = lean_ctor_get(v_b_4586_, 1);
v_isSharedCheck_4628_ = !lean_is_exclusive(v_b_4586_);
if (v_isSharedCheck_4628_ == 0)
{
lean_object* v_unused_4629_; 
v_unused_4629_ = lean_ctor_get(v_b_4586_, 0);
lean_dec(v_unused_4629_);
v___x_4596_ = v_b_4586_;
v_isShared_4597_ = v_isSharedCheck_4628_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_snd_4594_);
lean_dec(v_b_4586_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4628_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4598_; lean_object* v_a_4599_; lean_object* v___x_4600_; 
v___x_4598_ = lean_box(0);
v_a_4599_ = lean_array_uget_borrowed(v_as_4583_, v_i_4585_);
lean_inc(v_snd_4594_);
lean_inc(v_mvarId_4582_);
lean_inc_ref(v_config_4581_);
v___x_4600_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4580_, v_config_4581_, v_mvarId_4582_, v_a_4599_, v_snd_4594_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_);
if (lean_obj_tag(v___x_4600_) == 0)
{
lean_object* v_a_4601_; lean_object* v___x_4603_; uint8_t v_isShared_4604_; uint8_t v_isSharedCheck_4619_; 
v_a_4601_ = lean_ctor_get(v___x_4600_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v___x_4600_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4603_ = v___x_4600_;
v_isShared_4604_ = v_isSharedCheck_4619_;
goto v_resetjp_4602_;
}
else
{
lean_inc(v_a_4601_);
lean_dec(v___x_4600_);
v___x_4603_ = lean_box(0);
v_isShared_4604_ = v_isSharedCheck_4619_;
goto v_resetjp_4602_;
}
v_resetjp_4602_:
{
if (lean_obj_tag(v_a_4601_) == 0)
{
lean_object* v___x_4605_; lean_object* v___x_4607_; 
lean_dec(v_mvarId_4582_);
lean_dec_ref(v_config_4581_);
v___x_4605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4605_, 0, v_a_4601_);
if (v_isShared_4597_ == 0)
{
lean_ctor_set(v___x_4596_, 0, v___x_4605_);
v___x_4607_ = v___x_4596_;
goto v_reusejp_4606_;
}
else
{
lean_object* v_reuseFailAlloc_4611_; 
v_reuseFailAlloc_4611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4611_, 0, v___x_4605_);
lean_ctor_set(v_reuseFailAlloc_4611_, 1, v_snd_4594_);
v___x_4607_ = v_reuseFailAlloc_4611_;
goto v_reusejp_4606_;
}
v_reusejp_4606_:
{
lean_object* v___x_4609_; 
if (v_isShared_4604_ == 0)
{
lean_ctor_set(v___x_4603_, 0, v___x_4607_);
v___x_4609_ = v___x_4603_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v___x_4607_);
v___x_4609_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
return v___x_4609_;
}
}
}
else
{
lean_object* v_a_4612_; lean_object* v___x_4614_; 
lean_del_object(v___x_4603_);
lean_dec(v_snd_4594_);
v_a_4612_ = lean_ctor_get(v_a_4601_, 0);
lean_inc(v_a_4612_);
lean_dec_ref_known(v_a_4601_, 1);
if (v_isShared_4597_ == 0)
{
lean_ctor_set(v___x_4596_, 1, v_a_4612_);
lean_ctor_set(v___x_4596_, 0, v___x_4598_);
v___x_4614_ = v___x_4596_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v___x_4598_);
lean_ctor_set(v_reuseFailAlloc_4618_, 1, v_a_4612_);
v___x_4614_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
size_t v___x_4615_; size_t v___x_4616_; 
v___x_4615_ = ((size_t)1ULL);
v___x_4616_ = lean_usize_add(v_i_4585_, v___x_4615_);
v_i_4585_ = v___x_4616_;
v_b_4586_ = v___x_4614_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4627_; 
lean_del_object(v___x_4596_);
lean_dec(v_snd_4594_);
lean_dec(v_mvarId_4582_);
lean_dec_ref(v_config_4581_);
v_a_4620_ = lean_ctor_get(v___x_4600_, 0);
v_isSharedCheck_4627_ = !lean_is_exclusive(v___x_4600_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4622_ = v___x_4600_;
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_dec(v___x_4600_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4625_; 
if (v_isShared_4623_ == 0)
{
v___x_4625_ = v___x_4622_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_a_4620_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object* v_init_4630_, lean_object* v_config_4631_, lean_object* v_mvarId_4632_, lean_object* v_as_4633_, lean_object* v_sz_4634_, lean_object* v_i_4635_, lean_object* v_b_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_){
_start:
{
size_t v_sz_boxed_4642_; size_t v_i_boxed_4643_; lean_object* v_res_4644_; 
v_sz_boxed_4642_ = lean_unbox_usize(v_sz_4634_);
lean_dec(v_sz_4634_);
v_i_boxed_4643_ = lean_unbox_usize(v_i_4635_);
lean_dec(v_i_4635_);
v_res_4644_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4630_, v_config_4631_, v_mvarId_4632_, v_as_4633_, v_sz_boxed_4642_, v_i_boxed_4643_, v_b_4636_, v___y_4637_, v___y_4638_, v___y_4639_, v___y_4640_);
lean_dec(v___y_4640_);
lean_dec_ref(v___y_4639_);
lean_dec(v___y_4638_);
lean_dec_ref(v___y_4637_);
lean_dec_ref(v_as_4633_);
lean_dec_ref(v_init_4630_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object* v_init_4645_, lean_object* v_config_4646_, lean_object* v_mvarId_4647_, lean_object* v_n_4648_, lean_object* v_b_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_){
_start:
{
lean_object* v_res_4655_; 
v_res_4655_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4645_, v_config_4646_, v_mvarId_4647_, v_n_4648_, v_b_4649_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_);
lean_dec(v___y_4653_);
lean_dec_ref(v___y_4652_);
lean_dec(v___y_4651_);
lean_dec_ref(v___y_4650_);
lean_dec_ref(v_n_4648_);
lean_dec_ref(v_init_4645_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object* v_config_4656_, lean_object* v_mvarId_4657_, lean_object* v_t_4658_, lean_object* v_init_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
lean_object* v_root_4665_; lean_object* v_tail_4666_; lean_object* v___x_4667_; 
v_root_4665_ = lean_ctor_get(v_t_4658_, 0);
v_tail_4666_ = lean_ctor_get(v_t_4658_, 1);
lean_inc(v_mvarId_4657_);
lean_inc_ref(v_config_4656_);
lean_inc_ref(v_init_4659_);
v___x_4667_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4659_, v_config_4656_, v_mvarId_4657_, v_root_4665_, v_init_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_);
lean_dec_ref(v_init_4659_);
if (lean_obj_tag(v___x_4667_) == 0)
{
lean_object* v_a_4668_; lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4704_; 
v_a_4668_ = lean_ctor_get(v___x_4667_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4667_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4670_ = v___x_4667_;
v_isShared_4671_ = v_isSharedCheck_4704_;
goto v_resetjp_4669_;
}
else
{
lean_inc(v_a_4668_);
lean_dec(v___x_4667_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4704_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
if (lean_obj_tag(v_a_4668_) == 0)
{
lean_object* v_a_4672_; lean_object* v___x_4674_; 
lean_dec(v_mvarId_4657_);
lean_dec_ref(v_config_4656_);
v_a_4672_ = lean_ctor_get(v_a_4668_, 0);
lean_inc(v_a_4672_);
lean_dec_ref_known(v_a_4668_, 1);
if (v_isShared_4671_ == 0)
{
lean_ctor_set(v___x_4670_, 0, v_a_4672_);
v___x_4674_ = v___x_4670_;
goto v_reusejp_4673_;
}
else
{
lean_object* v_reuseFailAlloc_4675_; 
v_reuseFailAlloc_4675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4675_, 0, v_a_4672_);
v___x_4674_ = v_reuseFailAlloc_4675_;
goto v_reusejp_4673_;
}
v_reusejp_4673_:
{
return v___x_4674_;
}
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; size_t v_sz_4679_; size_t v___x_4680_; lean_object* v___x_4681_; 
lean_del_object(v___x_4670_);
v_a_4676_ = lean_ctor_get(v_a_4668_, 0);
lean_inc(v_a_4676_);
lean_dec_ref_known(v_a_4668_, 1);
v___x_4677_ = lean_box(0);
v___x_4678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4678_, 0, v___x_4677_);
lean_ctor_set(v___x_4678_, 1, v_a_4676_);
v_sz_4679_ = lean_array_size(v_tail_4666_);
v___x_4680_ = ((size_t)0ULL);
v___x_4681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_4656_, v_mvarId_4657_, v_tail_4666_, v_sz_4679_, v___x_4680_, v___x_4678_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_);
if (lean_obj_tag(v___x_4681_) == 0)
{
lean_object* v_a_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4695_; 
v_a_4682_ = lean_ctor_get(v___x_4681_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4681_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4684_ = v___x_4681_;
v_isShared_4685_ = v_isSharedCheck_4695_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_a_4682_);
lean_dec(v___x_4681_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4695_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v_fst_4686_; 
v_fst_4686_ = lean_ctor_get(v_a_4682_, 0);
if (lean_obj_tag(v_fst_4686_) == 0)
{
lean_object* v_snd_4687_; lean_object* v___x_4689_; 
v_snd_4687_ = lean_ctor_get(v_a_4682_, 1);
lean_inc(v_snd_4687_);
lean_dec(v_a_4682_);
if (v_isShared_4685_ == 0)
{
lean_ctor_set(v___x_4684_, 0, v_snd_4687_);
v___x_4689_ = v___x_4684_;
goto v_reusejp_4688_;
}
else
{
lean_object* v_reuseFailAlloc_4690_; 
v_reuseFailAlloc_4690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4690_, 0, v_snd_4687_);
v___x_4689_ = v_reuseFailAlloc_4690_;
goto v_reusejp_4688_;
}
v_reusejp_4688_:
{
return v___x_4689_;
}
}
else
{
lean_object* v_val_4691_; lean_object* v___x_4693_; 
lean_inc_ref(v_fst_4686_);
lean_dec(v_a_4682_);
v_val_4691_ = lean_ctor_get(v_fst_4686_, 0);
lean_inc(v_val_4691_);
lean_dec_ref_known(v_fst_4686_, 1);
if (v_isShared_4685_ == 0)
{
lean_ctor_set(v___x_4684_, 0, v_val_4691_);
v___x_4693_ = v___x_4684_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_val_4691_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
v_a_4696_ = lean_ctor_get(v___x_4681_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4681_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4681_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4681_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
}
}
else
{
lean_object* v_a_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4712_; 
lean_dec(v_mvarId_4657_);
lean_dec_ref(v_config_4656_);
v_a_4705_ = lean_ctor_get(v___x_4667_, 0);
v_isSharedCheck_4712_ = !lean_is_exclusive(v___x_4667_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4707_ = v___x_4667_;
v_isShared_4708_ = v_isSharedCheck_4712_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_a_4705_);
lean_dec(v___x_4667_);
v___x_4707_ = lean_box(0);
v_isShared_4708_ = v_isSharedCheck_4712_;
goto v_resetjp_4706_;
}
v_resetjp_4706_:
{
lean_object* v___x_4710_; 
if (v_isShared_4708_ == 0)
{
v___x_4710_ = v___x_4707_;
goto v_reusejp_4709_;
}
else
{
lean_object* v_reuseFailAlloc_4711_; 
v_reuseFailAlloc_4711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v_a_4705_);
v___x_4710_ = v_reuseFailAlloc_4711_;
goto v_reusejp_4709_;
}
v_reusejp_4709_:
{
return v___x_4710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object* v_config_4713_, lean_object* v_mvarId_4714_, lean_object* v_t_4715_, lean_object* v_init_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4713_, v_mvarId_4714_, v_t_4715_, v_init_4716_, v___y_4717_, v___y_4718_, v___y_4719_, v___y_4720_);
lean_dec(v___y_4720_);
lean_dec_ref(v___y_4719_);
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
lean_dec_ref(v_t_4715_);
return v_res_4722_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object* v_mvarId_4723_, lean_object* v___x_4724_, lean_object* v_config_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_){
_start:
{
lean_object* v___x_4731_; 
lean_inc(v_mvarId_4723_);
v___x_4731_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4723_, v___x_4724_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_);
if (lean_obj_tag(v___x_4731_) == 0)
{
lean_object* v___x_4732_; 
lean_dec_ref_known(v___x_4731_, 1);
lean_inc(v_mvarId_4723_);
v___x_4732_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_4723_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v_a_4733_; uint8_t v___x_4734_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
v___x_4734_ = lean_unbox(v_a_4733_);
if (v___x_4734_ == 0)
{
lean_object* v_lctx_4735_; lean_object* v_decls_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; 
lean_inc(v_a_4733_);
lean_dec_ref_known(v___x_4732_, 1);
v_lctx_4735_ = lean_ctor_get(v___y_4726_, 2);
v_decls_4736_ = lean_ctor_get(v_lctx_4735_, 1);
v___x_4737_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_4738_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4725_, v_mvarId_4723_, v_decls_4736_, v___x_4737_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_);
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4751_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v___x_4738_);
if (v_isSharedCheck_4751_ == 0)
{
v___x_4741_ = v___x_4738_;
v_isShared_4742_ = v_isSharedCheck_4751_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_a_4739_);
lean_dec(v___x_4738_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4751_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v_fst_4743_; 
v_fst_4743_ = lean_ctor_get(v_a_4739_, 0);
lean_inc(v_fst_4743_);
lean_dec(v_a_4739_);
if (lean_obj_tag(v_fst_4743_) == 0)
{
lean_object* v___x_4745_; 
if (v_isShared_4742_ == 0)
{
lean_ctor_set(v___x_4741_, 0, v_a_4733_);
v___x_4745_ = v___x_4741_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v_a_4733_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
return v___x_4745_;
}
}
else
{
lean_object* v_val_4747_; lean_object* v___x_4749_; 
lean_dec(v_a_4733_);
v_val_4747_ = lean_ctor_get(v_fst_4743_, 0);
lean_inc(v_val_4747_);
lean_dec_ref_known(v_fst_4743_, 1);
if (v_isShared_4742_ == 0)
{
lean_ctor_set(v___x_4741_, 0, v_val_4747_);
v___x_4749_ = v___x_4741_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_val_4747_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
return v___x_4749_;
}
}
}
}
else
{
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4759_; 
lean_dec(v_a_4733_);
v_a_4752_ = lean_ctor_get(v___x_4738_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4738_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4754_ = v___x_4738_;
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4738_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4755_ == 0)
{
v___x_4757_ = v___x_4754_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
return v___x_4757_;
}
}
}
}
else
{
lean_dec_ref(v_config_4725_);
lean_dec(v_mvarId_4723_);
return v___x_4732_;
}
}
else
{
lean_dec_ref(v_config_4725_);
lean_dec(v_mvarId_4723_);
return v___x_4732_;
}
}
else
{
lean_object* v_a_4760_; lean_object* v___x_4762_; uint8_t v_isShared_4763_; uint8_t v_isSharedCheck_4767_; 
lean_dec_ref(v_config_4725_);
lean_dec(v_mvarId_4723_);
v_a_4760_ = lean_ctor_get(v___x_4731_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v___x_4731_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4762_ = v___x_4731_;
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
else
{
lean_inc(v_a_4760_);
lean_dec(v___x_4731_);
v___x_4762_ = lean_box(0);
v_isShared_4763_ = v_isSharedCheck_4767_;
goto v_resetjp_4761_;
}
v_resetjp_4761_:
{
lean_object* v___x_4765_; 
if (v_isShared_4763_ == 0)
{
v___x_4765_ = v___x_4762_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_a_4760_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object* v_mvarId_4768_, lean_object* v___x_4769_, lean_object* v_config_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_){
_start:
{
lean_object* v_res_4776_; 
v_res_4776_ = l_Lean_MVarId_contradictionCore___lam__0(v_mvarId_4768_, v___x_4769_, v_config_4770_, v___y_4771_, v___y_4772_, v___y_4773_, v___y_4774_);
lean_dec(v___y_4774_);
lean_dec_ref(v___y_4773_);
lean_dec(v___y_4772_);
lean_dec_ref(v___y_4771_);
return v_res_4776_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object* v_mvarId_4779_, lean_object* v_config_4780_, lean_object* v_a_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_){
_start:
{
lean_object* v___x_4786_; lean_object* v___f_4787_; lean_object* v___x_4788_; 
v___x_4786_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
lean_inc(v_mvarId_4779_);
v___f_4787_ = lean_alloc_closure((void*)(l_Lean_MVarId_contradictionCore___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4787_, 0, v_mvarId_4779_);
lean_closure_set(v___f_4787_, 1, v___x_4786_);
lean_closure_set(v___f_4787_, 2, v_config_4780_);
v___x_4788_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_4779_, v___f_4787_, v_a_4781_, v_a_4782_, v_a_4783_, v_a_4784_);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object* v_mvarId_4789_, lean_object* v_config_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_, lean_object* v_a_4793_, lean_object* v_a_4794_, lean_object* v_a_4795_){
_start:
{
lean_object* v_res_4796_; 
v_res_4796_ = l_Lean_MVarId_contradictionCore(v_mvarId_4789_, v_config_4790_, v_a_4791_, v_a_4792_, v_a_4793_, v_a_4794_);
lean_dec(v_a_4794_);
lean_dec_ref(v_a_4793_);
lean_dec(v_a_4792_);
lean_dec_ref(v_a_4791_);
return v_res_4796_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object* v_mvarId_4797_, lean_object* v_config_4798_, lean_object* v_a_4799_, lean_object* v_a_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_){
_start:
{
lean_object* v___x_4804_; 
lean_inc(v_mvarId_4797_);
v___x_4804_ = l_Lean_MVarId_contradictionCore(v_mvarId_4797_, v_config_4798_, v_a_4799_, v_a_4800_, v_a_4801_, v_a_4802_);
if (lean_obj_tag(v___x_4804_) == 0)
{
lean_object* v_a_4805_; lean_object* v___x_4807_; uint8_t v_isShared_4808_; uint8_t v_isSharedCheck_4817_; 
v_a_4805_ = lean_ctor_get(v___x_4804_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4804_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4807_ = v___x_4804_;
v_isShared_4808_ = v_isSharedCheck_4817_;
goto v_resetjp_4806_;
}
else
{
lean_inc(v_a_4805_);
lean_dec(v___x_4804_);
v___x_4807_ = lean_box(0);
v_isShared_4808_ = v_isSharedCheck_4817_;
goto v_resetjp_4806_;
}
v_resetjp_4806_:
{
uint8_t v___x_4809_; 
v___x_4809_ = lean_unbox(v_a_4805_);
lean_dec(v_a_4805_);
if (v___x_4809_ == 0)
{
lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; 
lean_del_object(v___x_4807_);
v___x_4810_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
v___x_4811_ = lean_box(0);
v___x_4812_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4810_, v_mvarId_4797_, v___x_4811_, v_a_4799_, v_a_4800_, v_a_4801_, v_a_4802_);
return v___x_4812_;
}
else
{
lean_object* v___x_4813_; lean_object* v___x_4815_; 
lean_dec(v_mvarId_4797_);
v___x_4813_ = lean_box(0);
if (v_isShared_4808_ == 0)
{
lean_ctor_set(v___x_4807_, 0, v___x_4813_);
v___x_4815_ = v___x_4807_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v___x_4813_);
v___x_4815_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
return v___x_4815_;
}
}
}
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
lean_dec(v_mvarId_4797_);
v_a_4818_ = lean_ctor_get(v___x_4804_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4804_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___x_4804_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___x_4804_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object* v_mvarId_4826_, lean_object* v_config_4827_, lean_object* v_a_4828_, lean_object* v_a_4829_, lean_object* v_a_4830_, lean_object* v_a_4831_, lean_object* v_a_4832_){
_start:
{
lean_object* v_res_4833_; 
v_res_4833_ = l_Lean_MVarId_contradiction(v_mvarId_4826_, v_config_4827_, v_a_4828_, v_a_4829_, v_a_4830_, v_a_4831_);
lean_dec(v_a_4831_);
lean_dec_ref(v_a_4830_);
lean_dec(v_a_4829_);
lean_dec_ref(v_a_4828_);
return v_res_4833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4896_; uint8_t v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___x_4896_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_4897_ = 0;
v___x_4898_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4899_ = l_Lean_registerTraceClass(v___x_4896_, v___x_4897_, v___x_4898_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object* v_a_4900_){
_start:
{
lean_object* v_res_4901_; 
v_res_4901_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
return v_res_4901_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LitValues(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_LitValues(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LitValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Contradiction(builtin);
}
#ifdef __cplusplus
}
#endif
