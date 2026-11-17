// Lean compiler output
// Module: Lean.Meta.Tactic.Subst
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.MatchUtil public import Lean.Meta.Tactic.Assert
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_FVarSubst_empty;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_substCore_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_substCore_spec__6___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_substCore_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "after intro rest "};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__5;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_h"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(32, 79, 207, 54, 208, 114, 216, 130)}};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__7 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__7_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.Tactic.Subst"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__8_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.substCore"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__9_value;
static const lean_string_object l_Lean_Meta_substCore___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_substCore___lam__1___closed__10 = (const lean_object*)&l_Lean_Meta_substCore___lam__1___closed__10_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 29, 29, 32, 53, 17, 69, 167)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__1_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid equality proof, it is not of the form "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__3;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nafter WHNF, variable expected, but obtained"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__5;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "argument must be an equality proof"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__7_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__8;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__9;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "reverted variables "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__10 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__10_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__11;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after intro2 "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__12 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__12_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__13;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after revert "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__14 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__14_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__15;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__16 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__17;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' occurs at"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__18 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__18_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__19;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__20 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__21 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value_aux_1),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 247, 229, 3, 213, 123, 220, 1)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__22 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value;
static const lean_closure_object l_Lean_Meta_substCore___lam__3___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_substCore___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value)} };
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__23 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__23_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "substituting "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__24 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__24_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__25;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " (id: "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__26 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__26_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__27;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ") with "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__28 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__28_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__29;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(x = t)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__30 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__30_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(t = x)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__31 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__31_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_heqToEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_Meta_heqToEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_heqToEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_Meta_heqToEq___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "did not find equation for eliminating '"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable '"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_substVar___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "' is a let-declaration"};
static const lean_object* l_Lean_Meta_substVar___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_substVar___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_substEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "invalid equality proof, it is not of the form (x = t) or (t = x)"};
static const lean_object* l_Lean_Meta_substEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not an arrow type"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "variable "};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " has forward dependencies"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "equality rhs not a free variable"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "not an equality"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__9;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__10 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__11_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "homo_ndrec"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__12_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 43, 236, 51, 159, 219, 21, 78)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__13 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__13_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "homo_ndrec_symm"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__14 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__14_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_heqToEq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(50, 157, 119, 52, 76, 119, 237, 183)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__15 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__15_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "hetereogenenous equality isn't homogeneous"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__16 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__17;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__18 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__18_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(115, 164, 251, 202, 217, 58, 77, 179)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__19 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__19_value;
static const lean_string_object l_Lean_Meta_introSubstEq___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ndrec_symm"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__20 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__20_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_introSubstEq___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(71, 160, 179, 99, 219, 64, 47, 167)}};
static const lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__21 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__0___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "introSubstEq: now assigned\?"};
static const lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_introSubstEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "introSubstEq"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__0 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_introSubstEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_introSubstEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 191, 181, 66, 111, 91, 242, 60)}};
static const lean_object* l_Lean_Meta_introSubstEq___closed__1 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__1_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__2;
static const lean_string_object l_Lean_Meta_introSubstEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "introSubstEq falling back to intro\n"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__3 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__3_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__4;
static const lean_string_object l_Lean_Meta_introSubstEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Meta_introSubstEq___closed__5 = (const lean_object*)&l_Lean_Meta_introSubstEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Subst"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 155, 87, 188, 107, 213, 207, 175)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(46, 207, 184, 108, 123, 194, 122, 15)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 208, 80, 10, 197, 128, 95, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(7, 62, 56, 132, 111, 90, 85, 225)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 144, 37, 101, 63, 174, 15, 237)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(135, 83, 107, 230, 66, 113, 62, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 5, 105, 244, 179, 13, 109, 21)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value),LEAN_SCALAR_PTR_LITERAL(254, 30, 149, 183, 84, 179, 28, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__21_value),LEAN_SCALAR_PTR_LITERAL(99, 160, 169, 64, 171, 126, 88, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(131, 140, 20, 111, 56, 127, 145, 46)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1630641459) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(162, 248, 22, 106, 83, 230, 167, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 29, 223, 229, 152, 3, 25, 165)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(77, 203, 155, 156, 13, 176, 49, 33)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(224, 94, 43, 255, 16, 68, 129, 142)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_30_, v___y_32_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object* v_e_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(v_e_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
return v_res_43_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0(lean_object* v_x_44_){
_start:
{
uint8_t v___x_45_; 
v___x_45_ = 0;
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0___boxed(lean_object* v_x_46_){
_start:
{
uint8_t v_res_47_; lean_object* v_r_48_; 
v_res_47_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__0(v_x_46_);
lean_dec(v_x_46_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1(lean_object* v_fvarId_49_, lean_object* v_x_50_){
_start:
{
uint8_t v___x_51_; 
v___x_51_ = l_Lean_instBEqFVarId_beq(v_fvarId_49_, v_x_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1___boxed(lean_object* v_fvarId_52_, lean_object* v_x_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1(v_fvarId_52_, v_x_53_);
lean_dec(v_x_53_);
lean_dec(v_fvarId_52_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_box(0);
v___x_58_ = lean_unsigned_to_nat(16u);
v___x_59_ = lean_mk_array(v___x_58_, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__1);
v___x_61_ = lean_unsigned_to_nat(0u);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(lean_object* v_e_63_, lean_object* v_fvarId_64_, lean_object* v___y_65_){
_start:
{
lean_object* v___f_67_; lean_object* v___f_68_; lean_object* v___x_69_; uint8_t v_fst_71_; lean_object* v_mctx_72_; lean_object* v___y_90_; lean_object* v_mctx_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___f_67_ = ((lean_object*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__0));
v___f_68_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_68_, 0, v_fvarId_64_);
v___x_69_ = lean_st_ref_get(v___y_65_);
v_mctx_95_ = lean_ctor_get(v___x_69_, 0);
lean_inc_ref_n(v_mctx_95_, 2);
lean_dec(v___x_69_);
v___x_96_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___closed__2);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_mctx_95_);
v___x_98_ = l_Lean_Expr_hasFVar(v_e_63_);
if (v___x_98_ == 0)
{
uint8_t v___x_99_; 
v___x_99_ = l_Lean_Expr_hasMVar(v_e_63_);
if (v___x_99_ == 0)
{
lean_dec_ref_known(v___x_97_, 2);
lean_dec_ref(v___f_68_);
lean_dec_ref(v_e_63_);
v_fst_71_ = v___x_99_;
v_mctx_72_ = v_mctx_95_;
goto v___jp_70_;
}
else
{
lean_object* v___x_100_; 
lean_dec_ref(v_mctx_95_);
v___x_100_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_68_, v___f_67_, v_e_63_, v___x_97_);
v___y_90_ = v___x_100_;
goto v___jp_89_;
}
}
else
{
lean_object* v___x_101_; 
lean_dec_ref(v_mctx_95_);
v___x_101_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_68_, v___f_67_, v_e_63_, v___x_97_);
v___y_90_ = v___x_101_;
goto v___jp_89_;
}
v___jp_70_:
{
lean_object* v___x_73_; lean_object* v_cache_74_; lean_object* v_zetaDeltaFVarIds_75_; lean_object* v_postponed_76_; lean_object* v_diag_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_87_; 
v___x_73_ = lean_st_ref_take(v___y_65_);
v_cache_74_ = lean_ctor_get(v___x_73_, 1);
v_zetaDeltaFVarIds_75_ = lean_ctor_get(v___x_73_, 2);
v_postponed_76_ = lean_ctor_get(v___x_73_, 3);
v_diag_77_ = lean_ctor_get(v___x_73_, 4);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v___x_73_, 0);
lean_dec(v_unused_88_);
v___x_79_ = v___x_73_;
v_isShared_80_ = v_isSharedCheck_87_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_diag_77_);
lean_inc(v_postponed_76_);
lean_inc(v_zetaDeltaFVarIds_75_);
lean_inc(v_cache_74_);
lean_dec(v___x_73_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_87_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v_mctx_72_);
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_mctx_72_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v_cache_74_);
lean_ctor_set(v_reuseFailAlloc_86_, 2, v_zetaDeltaFVarIds_75_);
lean_ctor_set(v_reuseFailAlloc_86_, 3, v_postponed_76_);
lean_ctor_set(v_reuseFailAlloc_86_, 4, v_diag_77_);
v___x_82_ = v_reuseFailAlloc_86_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lean_st_ref_put(v___y_65_, v___x_82_);
v___x_84_ = lean_box(v_fst_71_);
v___x_85_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
}
}
v___jp_89_:
{
lean_object* v_snd_91_; lean_object* v_fst_92_; lean_object* v_mctx_93_; uint8_t v___x_94_; 
v_snd_91_ = lean_ctor_get(v___y_90_, 1);
lean_inc(v_snd_91_);
v_fst_92_ = lean_ctor_get(v___y_90_, 0);
lean_inc(v_fst_92_);
lean_dec_ref(v___y_90_);
v_mctx_93_ = lean_ctor_get(v_snd_91_, 1);
lean_inc_ref(v_mctx_93_);
lean_dec(v_snd_91_);
v___x_94_ = lean_unbox(v_fst_92_);
lean_dec(v_fst_92_);
v_fst_71_ = v___x_94_;
v_mctx_72_ = v_mctx_93_;
goto v___jp_70_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg___boxed(lean_object* v_e_102_, lean_object* v_fvarId_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_e_102_, v_fvarId_103_, v___y_104_);
lean_dec(v___y_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3(lean_object* v_e_107_, lean_object* v_fvarId_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_e_107_, v_fvarId_108_, v___y_110_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___boxed(lean_object* v_e_115_, lean_object* v_fvarId_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3(v_e_115_, v_fvarId_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6(lean_object* v_msg_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v___f_130_; lean_object* v___x_25853__overap_131_; lean_object* v___x_132_; 
v___f_130_ = ((lean_object*)(l_panic___at___00Lean_Meta_substCore_spec__6___closed__0));
v___x_25853__overap_131_ = lean_panic_fn_borrowed(v___f_130_, v_msg_124_);
lean_inc(v___y_128_);
lean_inc_ref(v___y_127_);
lean_inc(v___y_126_);
lean_inc_ref(v___y_125_);
v___x_132_ = lean_apply_5(v___x_25853__overap_131_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, lean_box(0));
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__6___boxed(lean_object* v_msg_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_panic___at___00Lean_Meta_substCore_spec__6(v_msg_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object* v_mvarId_140_, lean_object* v_x_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_140_, v_x_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_147_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_147_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v_a_156_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_147_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_147_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object* v_mvarId_164_, lean_object* v_x_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_164_, v_x_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object* v_00_u03b1_172_, lean_object* v_mvarId_173_, lean_object* v_x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_173_, v_x_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object* v_00_u03b1_181_, lean_object* v_mvarId_182_, lean_object* v_x_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(v_00_u03b1_181_, v_mvarId_182_, v_x_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object* v_type_190_, lean_object* v___x_191_, lean_object* v___x_192_, lean_object* v___x_193_, uint8_t v___x_194_, uint8_t v___x_195_, lean_object* v_hAux_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v___x_202_; 
lean_inc_ref(v_hAux_196_);
v___x_202_ = l_Lean_Meta_mkEqSymm(v_hAux_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
v___x_204_ = l_Lean_Expr_replaceFVar(v_type_190_, v___x_191_, v_a_203_);
lean_dec(v_a_203_);
v___x_205_ = lean_mk_empty_array_with_capacity(v___x_192_);
v___x_206_ = lean_array_push(v___x_205_, v___x_193_);
v___x_207_ = lean_array_push(v___x_206_, v_hAux_196_);
v___x_208_ = 1;
v___x_209_ = l_Lean_Meta_mkLambdaFVars(v___x_207_, v___x_204_, v___x_194_, v___x_195_, v___x_194_, v___x_195_, v___x_208_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
lean_dec_ref(v___x_207_);
return v___x_209_;
}
else
{
lean_dec_ref(v_hAux_196_);
lean_dec_ref(v___x_193_);
lean_dec_ref(v___x_191_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object* v_type_210_, lean_object* v___x_211_, lean_object* v___x_212_, lean_object* v___x_213_, lean_object* v___x_214_, lean_object* v___x_215_, lean_object* v_hAux_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
uint8_t v___x_28319__boxed_222_; uint8_t v___x_28320__boxed_223_; lean_object* v_res_224_; 
v___x_28319__boxed_222_ = lean_unbox(v___x_214_);
v___x_28320__boxed_223_ = lean_unbox(v___x_215_);
v_res_224_ = l_Lean_Meta_substCore___lam__0(v_type_210_, v___x_211_, v___x_212_, v___x_213_, v___x_28319__boxed_222_, v___x_28320__boxed_223_, v_hAux_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___x_212_);
lean_dec_ref(v_type_210_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(lean_object* v_x_225_, lean_object* v_x_226_, lean_object* v_x_227_, lean_object* v_x_228_){
_start:
{
lean_object* v_ks_229_; lean_object* v_vs_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_254_; 
v_ks_229_ = lean_ctor_get(v_x_225_, 0);
v_vs_230_ = lean_ctor_get(v_x_225_, 1);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_225_);
if (v_isSharedCheck_254_ == 0)
{
v___x_232_ = v_x_225_;
v_isShared_233_ = v_isSharedCheck_254_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_vs_230_);
lean_inc(v_ks_229_);
lean_dec(v_x_225_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_254_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = lean_array_get_size(v_ks_229_);
v___x_235_ = lean_nat_dec_lt(v_x_226_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
lean_dec(v_x_226_);
v___x_236_ = lean_array_push(v_ks_229_, v_x_227_);
v___x_237_ = lean_array_push(v_vs_230_, v_x_228_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 1, v___x_237_);
lean_ctor_set(v___x_232_, 0, v___x_236_);
v___x_239_ = v___x_232_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
else
{
lean_object* v_k_x27_241_; uint8_t v___x_242_; 
v_k_x27_241_ = lean_array_fget_borrowed(v_ks_229_, v_x_226_);
v___x_242_ = l_Lean_instBEqMVarId_beq(v_x_227_, v_k_x27_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_244_; 
if (v_isShared_233_ == 0)
{
v___x_244_ = v___x_232_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_ks_229_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_vs_230_);
v___x_244_ = v_reuseFailAlloc_248_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = lean_unsigned_to_nat(1u);
v___x_246_ = lean_nat_add(v_x_226_, v___x_245_);
lean_dec(v_x_226_);
v_x_225_ = v___x_244_;
v_x_226_ = v___x_246_;
goto _start;
}
}
else
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_249_ = lean_array_fset(v_ks_229_, v_x_226_, v_x_227_);
v___x_250_ = lean_array_fset(v_vs_230_, v_x_226_, v_x_228_);
lean_dec(v_x_226_);
if (v_isShared_233_ == 0)
{
lean_ctor_set(v___x_232_, 1, v___x_250_);
lean_ctor_set(v___x_232_, 0, v___x_249_);
v___x_252_ = v___x_232_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(lean_object* v_n_255_, lean_object* v_k_256_, lean_object* v_v_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(v_n_255_, v___x_258_, v_k_256_, v_v_257_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(lean_object* v_x_261_, size_t v_x_262_, size_t v_x_263_, lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
if (lean_obj_tag(v_x_261_) == 0)
{
lean_object* v_es_266_; size_t v___x_267_; size_t v___x_268_; lean_object* v_j_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_es_266_ = lean_ctor_get(v_x_261_, 0);
v___x_267_ = ((size_t)31ULL);
v___x_268_ = lean_usize_land(v_x_262_, v___x_267_);
v_j_269_ = lean_usize_to_nat(v___x_268_);
v___x_270_ = lean_array_get_size(v_es_266_);
v___x_271_ = lean_nat_dec_lt(v_j_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec(v_j_269_);
lean_dec(v_x_265_);
lean_dec(v_x_264_);
return v_x_261_;
}
else
{
lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_310_; 
lean_inc_ref(v_es_266_);
v_isSharedCheck_310_ = !lean_is_exclusive(v_x_261_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; 
v_unused_311_ = lean_ctor_get(v_x_261_, 0);
lean_dec(v_unused_311_);
v___x_273_ = v_x_261_;
v_isShared_274_ = v_isSharedCheck_310_;
goto v_resetjp_272_;
}
else
{
lean_dec(v_x_261_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_310_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_v_275_; lean_object* v___x_276_; lean_object* v_xs_x27_277_; lean_object* v___y_279_; 
v_v_275_ = lean_array_fget(v_es_266_, v_j_269_);
v___x_276_ = lean_box(0);
v_xs_x27_277_ = lean_array_fset(v_es_266_, v_j_269_, v___x_276_);
switch(lean_obj_tag(v_v_275_))
{
case 0:
{
lean_object* v_key_284_; lean_object* v_val_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_295_; 
v_key_284_ = lean_ctor_get(v_v_275_, 0);
v_val_285_ = lean_ctor_get(v_v_275_, 1);
v_isSharedCheck_295_ = !lean_is_exclusive(v_v_275_);
if (v_isSharedCheck_295_ == 0)
{
v___x_287_ = v_v_275_;
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_val_285_);
lean_inc(v_key_284_);
lean_dec(v_v_275_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_295_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
uint8_t v___x_289_; 
v___x_289_ = l_Lean_instBEqMVarId_beq(v_x_264_, v_key_284_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; 
lean_del_object(v___x_287_);
v___x_290_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_284_, v_val_285_, v_x_264_, v_x_265_);
v___x_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
v___y_279_ = v___x_291_;
goto v___jp_278_;
}
else
{
lean_object* v___x_293_; 
lean_dec(v_val_285_);
lean_dec(v_key_284_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v_x_265_);
lean_ctor_set(v___x_287_, 0, v_x_264_);
v___x_293_ = v___x_287_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_x_264_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_x_265_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
v___y_279_ = v___x_293_;
goto v___jp_278_;
}
}
}
}
case 1:
{
lean_object* v_node_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_308_; 
v_node_296_ = lean_ctor_get(v_v_275_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v_v_275_);
if (v_isSharedCheck_308_ == 0)
{
v___x_298_ = v_v_275_;
v_isShared_299_ = v_isSharedCheck_308_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_node_296_);
lean_dec(v_v_275_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_308_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_300_ = ((size_t)5ULL);
v___x_301_ = lean_usize_shift_right(v_x_262_, v___x_300_);
v___x_302_ = ((size_t)1ULL);
v___x_303_ = lean_usize_add(v_x_263_, v___x_302_);
v___x_304_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_node_296_, v___x_301_, v___x_303_, v_x_264_, v_x_265_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 0, v___x_304_);
v___x_306_ = v___x_298_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_304_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
v___y_279_ = v___x_306_;
goto v___jp_278_;
}
}
}
default: 
{
lean_object* v___x_309_; 
v___x_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_309_, 0, v_x_264_);
lean_ctor_set(v___x_309_, 1, v_x_265_);
v___y_279_ = v___x_309_;
goto v___jp_278_;
}
}
v___jp_278_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = lean_array_fset(v_xs_x27_277_, v_j_269_, v___y_279_);
lean_dec(v_j_269_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_280_);
v___x_282_ = v___x_273_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
else
{
lean_object* v_ks_312_; lean_object* v_vs_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_331_; 
v_ks_312_ = lean_ctor_get(v_x_261_, 0);
v_vs_313_ = lean_ctor_get(v_x_261_, 1);
v_isSharedCheck_331_ = !lean_is_exclusive(v_x_261_);
if (v_isSharedCheck_331_ == 0)
{
v___x_315_ = v_x_261_;
v_isShared_316_ = v_isSharedCheck_331_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_vs_313_);
lean_inc(v_ks_312_);
lean_dec(v_x_261_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_331_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_ks_312_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v_vs_313_);
v___x_318_ = v_reuseFailAlloc_330_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v_newNode_319_; size_t v___x_320_; uint8_t v___x_321_; 
v_newNode_319_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(v___x_318_, v_x_264_, v_x_265_);
v___x_320_ = ((size_t)7ULL);
v___x_321_ = lean_usize_dec_le(v___x_320_, v_x_263_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_322_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_319_);
v___x_323_ = lean_unsigned_to_nat(4u);
v___x_324_ = lean_nat_dec_lt(v___x_322_, v___x_323_);
lean_dec(v___x_322_);
if (v___x_324_ == 0)
{
lean_object* v_ks_325_; lean_object* v_vs_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v_ks_325_ = lean_ctor_get(v_newNode_319_, 0);
lean_inc_ref(v_ks_325_);
v_vs_326_ = lean_ctor_get(v_newNode_319_, 1);
lean_inc_ref(v_vs_326_);
lean_dec_ref(v_newNode_319_);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___closed__0);
v___x_329_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(v_x_263_, v_ks_325_, v_vs_326_, v___x_327_, v___x_328_);
lean_dec_ref(v_vs_326_);
lean_dec_ref(v_ks_325_);
return v___x_329_;
}
else
{
return v_newNode_319_;
}
}
else
{
return v_newNode_319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(size_t v_depth_332_, lean_object* v_keys_333_, lean_object* v_vals_334_, lean_object* v_i_335_, lean_object* v_entries_336_){
_start:
{
lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_337_ = lean_array_get_size(v_keys_333_);
v___x_338_ = lean_nat_dec_lt(v_i_335_, v___x_337_);
if (v___x_338_ == 0)
{
lean_dec(v_i_335_);
return v_entries_336_;
}
else
{
lean_object* v_k_339_; lean_object* v_v_340_; uint64_t v___x_341_; size_t v_h_342_; size_t v___x_343_; lean_object* v___x_344_; size_t v___x_345_; size_t v___x_346_; size_t v___x_347_; size_t v_h_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_k_339_ = lean_array_fget_borrowed(v_keys_333_, v_i_335_);
v_v_340_ = lean_array_fget_borrowed(v_vals_334_, v_i_335_);
v___x_341_ = l_Lean_instHashableMVarId_hash(v_k_339_);
v_h_342_ = lean_uint64_to_usize(v___x_341_);
v___x_343_ = ((size_t)5ULL);
v___x_344_ = lean_unsigned_to_nat(1u);
v___x_345_ = ((size_t)1ULL);
v___x_346_ = lean_usize_sub(v_depth_332_, v___x_345_);
v___x_347_ = lean_usize_mul(v___x_343_, v___x_346_);
v_h_348_ = lean_usize_shift_right(v_h_342_, v___x_347_);
v___x_349_ = lean_nat_add(v_i_335_, v___x_344_);
lean_dec(v_i_335_);
lean_inc(v_v_340_);
lean_inc(v_k_339_);
v___x_350_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_entries_336_, v_h_348_, v_depth_332_, v_k_339_, v_v_340_);
v_i_335_ = v___x_349_;
v_entries_336_ = v___x_350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg___boxed(lean_object* v_depth_352_, lean_object* v_keys_353_, lean_object* v_vals_354_, lean_object* v_i_355_, lean_object* v_entries_356_){
_start:
{
size_t v_depth_boxed_357_; lean_object* v_res_358_; 
v_depth_boxed_357_ = lean_unbox_usize(v_depth_352_);
lean_dec(v_depth_352_);
v_res_358_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(v_depth_boxed_357_, v_keys_353_, v_vals_354_, v_i_355_, v_entries_356_);
lean_dec_ref(v_vals_354_);
lean_dec_ref(v_keys_353_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg___boxed(lean_object* v_x_359_, lean_object* v_x_360_, lean_object* v_x_361_, lean_object* v_x_362_, lean_object* v_x_363_){
_start:
{
size_t v_x_28440__boxed_364_; size_t v_x_28441__boxed_365_; lean_object* v_res_366_; 
v_x_28440__boxed_364_ = lean_unbox_usize(v_x_360_);
lean_dec(v_x_360_);
v_x_28441__boxed_365_ = lean_unbox_usize(v_x_361_);
lean_dec(v_x_361_);
v_res_366_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_359_, v_x_28440__boxed_364_, v_x_28441__boxed_365_, v_x_362_, v_x_363_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(lean_object* v_x_367_, lean_object* v_x_368_, lean_object* v_x_369_){
_start:
{
uint64_t v___x_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v___x_373_; 
v___x_370_ = l_Lean_instHashableMVarId_hash(v_x_368_);
v___x_371_ = lean_uint64_to_usize(v___x_370_);
v___x_372_ = ((size_t)1ULL);
v___x_373_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_367_, v___x_371_, v___x_372_, v_x_368_, v_x_369_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(lean_object* v_mvarId_374_, lean_object* v_val_375_, lean_object* v___y_376_){
_start:
{
lean_object* v___x_378_; lean_object* v_mctx_379_; lean_object* v_cache_380_; lean_object* v_zetaDeltaFVarIds_381_; lean_object* v_postponed_382_; lean_object* v_diag_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_412_; 
v___x_378_ = lean_st_ref_take(v___y_376_);
v_mctx_379_ = lean_ctor_get(v___x_378_, 0);
v_cache_380_ = lean_ctor_get(v___x_378_, 1);
v_zetaDeltaFVarIds_381_ = lean_ctor_get(v___x_378_, 2);
v_postponed_382_ = lean_ctor_get(v___x_378_, 3);
v_diag_383_ = lean_ctor_get(v___x_378_, 4);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_412_ == 0)
{
v___x_385_ = v___x_378_;
v_isShared_386_ = v_isSharedCheck_412_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_diag_383_);
lean_inc(v_postponed_382_);
lean_inc(v_zetaDeltaFVarIds_381_);
lean_inc(v_cache_380_);
lean_inc(v_mctx_379_);
lean_dec(v___x_378_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_412_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v_depth_387_; lean_object* v_levelAssignDepth_388_; lean_object* v_lmvarCounter_389_; lean_object* v_mvarCounter_390_; lean_object* v_lDecls_391_; lean_object* v_decls_392_; lean_object* v_userNames_393_; lean_object* v_lAssignment_394_; lean_object* v_eAssignment_395_; lean_object* v_dAssignment_396_; lean_object* v_instanceTypedMVars_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_411_; 
v_depth_387_ = lean_ctor_get(v_mctx_379_, 0);
v_levelAssignDepth_388_ = lean_ctor_get(v_mctx_379_, 1);
v_lmvarCounter_389_ = lean_ctor_get(v_mctx_379_, 2);
v_mvarCounter_390_ = lean_ctor_get(v_mctx_379_, 3);
v_lDecls_391_ = lean_ctor_get(v_mctx_379_, 4);
v_decls_392_ = lean_ctor_get(v_mctx_379_, 5);
v_userNames_393_ = lean_ctor_get(v_mctx_379_, 6);
v_lAssignment_394_ = lean_ctor_get(v_mctx_379_, 7);
v_eAssignment_395_ = lean_ctor_get(v_mctx_379_, 8);
v_dAssignment_396_ = lean_ctor_get(v_mctx_379_, 9);
v_instanceTypedMVars_397_ = lean_ctor_get(v_mctx_379_, 10);
v_isSharedCheck_411_ = !lean_is_exclusive(v_mctx_379_);
if (v_isSharedCheck_411_ == 0)
{
v___x_399_ = v_mctx_379_;
v_isShared_400_ = v_isSharedCheck_411_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_instanceTypedMVars_397_);
lean_inc(v_dAssignment_396_);
lean_inc(v_eAssignment_395_);
lean_inc(v_lAssignment_394_);
lean_inc(v_userNames_393_);
lean_inc(v_decls_392_);
lean_inc(v_lDecls_391_);
lean_inc(v_mvarCounter_390_);
lean_inc(v_lmvarCounter_389_);
lean_inc(v_levelAssignDepth_388_);
lean_inc(v_depth_387_);
lean_dec(v_mctx_379_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_411_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_401_ = lean_box(0);
v___x_402_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(v_eAssignment_395_, v_mvarId_374_, v_val_375_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 8, v___x_402_);
v___x_404_ = v___x_399_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_depth_387_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_levelAssignDepth_388_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v_lmvarCounter_389_);
lean_ctor_set(v_reuseFailAlloc_410_, 3, v_mvarCounter_390_);
lean_ctor_set(v_reuseFailAlloc_410_, 4, v_lDecls_391_);
lean_ctor_set(v_reuseFailAlloc_410_, 5, v_decls_392_);
lean_ctor_set(v_reuseFailAlloc_410_, 6, v_userNames_393_);
lean_ctor_set(v_reuseFailAlloc_410_, 7, v_lAssignment_394_);
lean_ctor_set(v_reuseFailAlloc_410_, 8, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_410_, 9, v_dAssignment_396_);
lean_ctor_set(v_reuseFailAlloc_410_, 10, v_instanceTypedMVars_397_);
v___x_404_ = v_reuseFailAlloc_410_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_406_; 
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_404_);
v___x_406_ = v___x_385_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_cache_380_);
lean_ctor_set(v_reuseFailAlloc_409_, 2, v_zetaDeltaFVarIds_381_);
lean_ctor_set(v_reuseFailAlloc_409_, 3, v_postponed_382_);
lean_ctor_set(v_reuseFailAlloc_409_, 4, v_diag_383_);
v___x_406_ = v_reuseFailAlloc_409_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_st_ref_put(v___y_376_, v___x_406_);
v___x_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_401_);
return v___x_408_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object* v_mvarId_413_, lean_object* v_val_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_mvarId_413_, v_val_414_, v___y_415_);
lean_dec(v___y_415_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(lean_object* v_fst_418_, lean_object* v_fst_419_, lean_object* v_n_420_, lean_object* v_i_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_zero_424_; uint8_t v_isZero_425_; 
v_zero_424_ = lean_unsigned_to_nat(0u);
v_isZero_425_ = lean_nat_dec_eq(v_i_421_, v_zero_424_);
if (v_isZero_425_ == 1)
{
lean_object* v___x_426_; 
lean_dec(v_i_421_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v_a_422_);
return v___x_426_;
}
else
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v_one_429_; lean_object* v_n_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_427_ = lean_unsigned_to_nat(2u);
v___x_428_ = lean_box(0);
v_one_429_ = lean_unsigned_to_nat(1u);
v_n_430_ = lean_nat_sub(v_i_421_, v_one_429_);
lean_dec(v_i_421_);
v___x_431_ = lean_nat_sub(v_n_420_, v_n_430_);
v___x_432_ = lean_nat_sub(v___x_431_, v_one_429_);
lean_dec(v___x_431_);
v___x_433_ = lean_nat_add(v___x_432_, v___x_427_);
v___x_434_ = lean_array_get_borrowed(v___x_428_, v_fst_418_, v___x_433_);
lean_dec(v___x_433_);
v___x_435_ = lean_array_fget_borrowed(v_fst_419_, v___x_432_);
lean_dec(v___x_432_);
lean_inc(v___x_435_);
v___x_436_ = l_Lean_mkFVar(v___x_435_);
lean_inc(v___x_434_);
v___x_437_ = l_Lean_Meta_FVarSubst_insert(v_a_422_, v___x_434_, v___x_436_);
v_i_421_ = v_n_430_;
v_a_422_ = v___x_437_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg___boxed(lean_object* v_fst_439_, lean_object* v_fst_440_, lean_object* v_n_441_, lean_object* v_i_442_, lean_object* v_a_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_439_, v_fst_440_, v_n_441_, v_i_442_, v_a_443_);
lean_dec(v_n_441_);
lean_dec_ref(v_fst_440_);
lean_dec_ref(v_fst_439_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0(lean_object* v_k_446_, lean_object* v_b_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v___x_453_; 
lean_inc(v___y_451_);
lean_inc_ref(v___y_450_);
lean_inc(v___y_449_);
lean_inc_ref(v___y_448_);
v___x_453_ = lean_apply_6(v_k_446_, v_b_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, lean_box(0));
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0___boxed(lean_object* v_k_454_, lean_object* v_b_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0(v_k_454_, v_b_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(lean_object* v_name_462_, uint8_t v_bi_463_, lean_object* v_type_464_, lean_object* v_k_465_, uint8_t v_kind_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___f_472_; lean_object* v___x_473_; 
v___f_472_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_472_, 0, v_k_465_);
v___x_473_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_462_, v_bi_463_, v_type_464_, v___f_472_, v_kind_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_a_482_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_473_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_473_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg___boxed(lean_object* v_name_490_, lean_object* v_bi_491_, lean_object* v_type_492_, lean_object* v_k_493_, lean_object* v_kind_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
uint8_t v_bi_boxed_500_; uint8_t v_kind_boxed_501_; lean_object* v_res_502_; 
v_bi_boxed_500_ = lean_unbox(v_bi_491_);
v_kind_boxed_501_ = lean_unbox(v_kind_494_);
v_res_502_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(v_name_490_, v_bi_boxed_500_, v_type_492_, v_k_493_, v_kind_boxed_501_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(lean_object* v_name_503_, lean_object* v_type_504_, lean_object* v_k_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
uint8_t v___x_511_; uint8_t v___x_512_; lean_object* v___x_513_; 
v___x_511_ = 0;
v___x_512_ = 0;
v___x_513_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(v_name_503_, v___x_511_, v_type_504_, v_k_505_, v___x_512_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object* v_name_514_, lean_object* v_type_515_, lean_object* v_k_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v_name_514_, v_type_515_, v_k_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(lean_object* v_msgData_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v___x_529_; lean_object* v_env_530_; uint8_t v___x_531_; lean_object* v_env_532_; lean_object* v___x_533_; lean_object* v_toCold_534_; lean_object* v_mctx_535_; lean_object* v_lctx_536_; lean_object* v_options_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_529_ = lean_st_ref_get(v___y_527_);
v_env_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc_ref(v_env_530_);
lean_dec(v___x_529_);
v___x_531_ = 0;
v_env_532_ = l_Lean_Environment_setRecordingDeps(v_env_530_, v___x_531_);
v___x_533_ = lean_st_ref_get(v___y_525_);
v_toCold_534_ = lean_ctor_get(v___y_526_, 0);
v_mctx_535_ = lean_ctor_get(v___x_533_, 0);
lean_inc_ref(v_mctx_535_);
lean_dec(v___x_533_);
v_lctx_536_ = lean_ctor_get(v___y_524_, 2);
v_options_537_ = lean_ctor_get(v_toCold_534_, 2);
lean_inc_ref(v_options_537_);
lean_inc_ref(v_lctx_536_);
v___x_538_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_538_, 0, v_env_532_);
lean_ctor_set(v___x_538_, 1, v_mctx_535_);
lean_ctor_set(v___x_538_, 2, v_lctx_536_);
lean_ctor_set(v___x_538_, 3, v_options_537_);
v___x_539_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
lean_ctor_set(v___x_539_, 1, v_msgData_523_);
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2___boxed(lean_object* v_msgData_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(v_msgData_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
return v_res_547_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0(void){
_start:
{
lean_object* v___x_548_; double v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = lean_float_of_nat(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(lean_object* v_cls_553_, lean_object* v_msg_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_ref_560_; lean_object* v___x_561_; lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_607_; 
v_ref_560_ = lean_ctor_get(v___y_557_, 2);
v___x_561_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(v_msg_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
v_a_562_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_607_ == 0)
{
v___x_564_ = v___x_561_;
v_isShared_565_ = v_isSharedCheck_607_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_561_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_607_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; lean_object* v_traceState_567_; lean_object* v_env_568_; lean_object* v_nextMacroScope_569_; lean_object* v_ngen_570_; lean_object* v_auxDeclNGen_571_; lean_object* v_cache_572_; lean_object* v_recordedDeps_573_; lean_object* v_messages_574_; lean_object* v_infoState_575_; lean_object* v_snapshotTasks_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_606_; 
v___x_566_ = lean_st_ref_take(v___y_558_);
v_traceState_567_ = lean_ctor_get(v___x_566_, 4);
v_env_568_ = lean_ctor_get(v___x_566_, 0);
v_nextMacroScope_569_ = lean_ctor_get(v___x_566_, 1);
v_ngen_570_ = lean_ctor_get(v___x_566_, 2);
v_auxDeclNGen_571_ = lean_ctor_get(v___x_566_, 3);
v_cache_572_ = lean_ctor_get(v___x_566_, 5);
v_recordedDeps_573_ = lean_ctor_get(v___x_566_, 6);
v_messages_574_ = lean_ctor_get(v___x_566_, 7);
v_infoState_575_ = lean_ctor_get(v___x_566_, 8);
v_snapshotTasks_576_ = lean_ctor_get(v___x_566_, 9);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_606_ == 0)
{
v___x_578_ = v___x_566_;
v_isShared_579_ = v_isSharedCheck_606_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_snapshotTasks_576_);
lean_inc(v_infoState_575_);
lean_inc(v_messages_574_);
lean_inc(v_recordedDeps_573_);
lean_inc(v_cache_572_);
lean_inc(v_traceState_567_);
lean_inc(v_auxDeclNGen_571_);
lean_inc(v_ngen_570_);
lean_inc(v_nextMacroScope_569_);
lean_inc(v_env_568_);
lean_dec(v___x_566_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_606_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
uint64_t v_tid_580_; lean_object* v_traces_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_605_; 
v_tid_580_ = lean_ctor_get_uint64(v_traceState_567_, sizeof(void*)*1);
v_traces_581_ = lean_ctor_get(v_traceState_567_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v_traceState_567_);
if (v_isSharedCheck_605_ == 0)
{
v___x_583_ = v_traceState_567_;
v_isShared_584_ = v_isSharedCheck_605_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_traces_581_);
lean_dec(v_traceState_567_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_605_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_586_; double v___x_587_; uint8_t v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_596_; 
v___x_585_ = lean_box(0);
v___x_586_ = lean_box(0);
v___x_587_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__0);
v___x_588_ = 0;
v___x_589_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__1));
v___x_590_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_590_, 0, v_cls_553_);
lean_ctor_set(v___x_590_, 1, v___x_586_);
lean_ctor_set(v___x_590_, 2, v___x_589_);
lean_ctor_set_float(v___x_590_, sizeof(void*)*3, v___x_587_);
lean_ctor_set_float(v___x_590_, sizeof(void*)*3 + 8, v___x_587_);
lean_ctor_set_uint8(v___x_590_, sizeof(void*)*3 + 16, v___x_588_);
v___x_591_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___closed__2));
v___x_592_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set(v___x_592_, 1, v_a_562_);
lean_ctor_set(v___x_592_, 2, v___x_591_);
lean_inc(v_ref_560_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v_ref_560_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = l_Lean_PersistentArray_push___redArg(v_traces_581_, v___x_593_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_594_);
v___x_596_ = v___x_583_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_594_);
lean_ctor_set_uint64(v_reuseFailAlloc_604_, sizeof(void*)*1, v_tid_580_);
v___x_596_ = v_reuseFailAlloc_604_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_598_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 4, v___x_596_);
v___x_598_ = v___x_578_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_env_568_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_nextMacroScope_569_);
lean_ctor_set(v_reuseFailAlloc_603_, 2, v_ngen_570_);
lean_ctor_set(v_reuseFailAlloc_603_, 3, v_auxDeclNGen_571_);
lean_ctor_set(v_reuseFailAlloc_603_, 4, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_603_, 5, v_cache_572_);
lean_ctor_set(v_reuseFailAlloc_603_, 6, v_recordedDeps_573_);
lean_ctor_set(v_reuseFailAlloc_603_, 7, v_messages_574_);
lean_ctor_set(v_reuseFailAlloc_603_, 8, v_infoState_575_);
lean_ctor_set(v_reuseFailAlloc_603_, 9, v_snapshotTasks_576_);
v___x_598_ = v_reuseFailAlloc_603_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_599_; lean_object* v___x_601_; 
v___x_599_ = lean_st_ref_put(v___y_558_, v___x_598_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 0, v___x_585_);
v___x_601_ = v___x_564_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_585_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2___boxed(lean_object* v_cls_608_, lean_object* v_msg_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v_cls_608_, v_msg_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_615_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__2));
v___x_621_ = l_Lean_stringToMessageData(v___x_620_);
return v___x_621_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__5(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__4));
v___x_624_ = l_Lean_stringToMessageData(v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__11(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_631_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__10));
v___x_632_ = lean_unsigned_to_nat(22u);
v___x_633_ = lean_unsigned_to_nat(64u);
v___x_634_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__9));
v___x_635_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__8));
v___x_636_ = l_mkPanicMessageWithDecl(v___x_635_, v___x_634_, v___x_633_, v___x_632_, v___x_631_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object* v_fvarId_637_, lean_object* v_hFVarId_638_, lean_object* v___x_639_, lean_object* v_fst_640_, lean_object* v_fvarSubst_641_, uint8_t v_clearH_642_, lean_object* v___x_643_, lean_object* v___x_644_, lean_object* v___x_645_, uint8_t v_skip_646_, uint8_t v___x_647_, lean_object* v___x_648_, lean_object* v_snd_649_, lean_object* v___x_650_, lean_object* v___x_651_, lean_object* v_a_652_, uint8_t v_symm_653_, uint8_t v___x_654_, lean_object* v___x_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_678_; lean_object* v_mvarId_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_683_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v_newVal_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_762_; lean_object* v___y_763_; uint8_t v___y_764_; lean_object* v___y_765_; lean_object* v_major_766_; lean_object* v___y_767_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_803_; uint8_t v___y_804_; lean_object* v_motive_805_; lean_object* v_newType_806_; lean_object* v___x_817_; 
lean_inc(v_snd_649_);
v___x_817_ = l_Lean_MVarId_getDecl(v_snd_649_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v_type_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___f_822_; lean_object* v___x_823_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_817_, 1);
v_type_819_ = lean_ctor_get(v_a_818_, 2);
lean_inc_ref_n(v_type_819_, 2);
lean_dec(v_a_818_);
v___x_820_ = lean_box(v___x_654_);
v___x_821_ = lean_box(v___x_647_);
lean_inc_ref(v___x_643_);
lean_inc(v___x_644_);
lean_inc_ref(v___x_639_);
v___f_822_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__0___boxed), 12, 6);
lean_closure_set(v___f_822_, 0, v_type_819_);
lean_closure_set(v___f_822_, 1, v___x_639_);
lean_closure_set(v___f_822_, 2, v___x_644_);
lean_closure_set(v___f_822_, 3, v___x_643_);
lean_closure_set(v___f_822_, 4, v___x_820_);
lean_closure_set(v___f_822_, 5, v___x_821_);
lean_inc(v___x_650_);
v___x_823_ = l_Lean_FVarId_getDecl___redArg(v___x_650_, v___y_656_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_823_, 1);
v___x_825_ = l_Lean_LocalDecl_type(v_a_824_);
lean_dec(v_a_824_);
v___x_826_ = l_Lean_Meta_matchEq_x3f(v___x_825_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___y_829_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_a_827_);
lean_dec_ref_known(v___x_826_, 1);
if (lean_obj_tag(v_a_827_) == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; 
lean_dec_ref(v___f_822_);
lean_dec_ref(v_type_819_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v___x_899_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__11, &l_Lean_Meta_substCore___lam__1___closed__11_once, _init_l_Lean_Meta_substCore___lam__1___closed__11);
v___x_900_ = l_panic___at___00Lean_Meta_substCore_spec__6(v___x_899_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
return v___x_900_;
}
else
{
lean_object* v_val_901_; lean_object* v_snd_902_; 
v_val_901_ = lean_ctor_get(v_a_827_, 0);
lean_inc(v_val_901_);
lean_dec_ref_known(v_a_827_, 1);
v_snd_902_ = lean_ctor_get(v_val_901_, 1);
lean_inc(v_snd_902_);
lean_dec(v_val_901_);
if (v_symm_653_ == 0)
{
lean_object* v_snd_903_; 
v_snd_903_ = lean_ctor_get(v_snd_902_, 1);
lean_inc(v_snd_903_);
lean_dec(v_snd_902_);
v___y_829_ = v_snd_903_;
goto v___jp_828_;
}
else
{
lean_object* v_fst_904_; 
v_fst_904_ = lean_ctor_get(v_snd_902_, 0);
lean_inc(v_fst_904_);
lean_dec(v_snd_902_);
v___y_829_ = v_fst_904_;
goto v___jp_828_;
}
}
v___jp_828_:
{
lean_object* v___x_830_; lean_object* v_a_831_; lean_object* v___x_832_; lean_object* v_a_833_; uint8_t v___x_834_; 
v___x_830_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_829_, v___y_657_);
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref(v___x_830_);
lean_inc(v___x_650_);
lean_inc_ref(v_type_819_);
v___x_832_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_type_819_, v___x_650_, v___y_657_);
v_a_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc(v_a_833_);
lean_dec_ref(v___x_832_);
v___x_834_ = lean_unbox(v_a_833_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; lean_object* v___x_838_; 
lean_dec_ref(v___f_822_);
v___x_835_ = lean_mk_empty_array_with_capacity(v___x_655_);
lean_inc_ref(v___x_643_);
v___x_836_ = lean_array_push(v___x_835_, v___x_643_);
v___x_837_ = 1;
lean_inc_ref(v_type_819_);
v___x_838_ = l_Lean_Meta_mkLambdaFVars(v___x_836_, v_type_819_, v___x_654_, v___x_647_, v___x_654_, v___x_647_, v___x_837_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec_ref(v___x_836_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_a_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v_a_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_a_839_);
lean_dec_ref_known(v___x_838_, 1);
lean_inc_ref(v___x_643_);
v___x_840_ = l_Lean_Expr_replaceFVar(v_type_819_, v___x_643_, v_a_831_);
lean_dec_ref(v_type_819_);
v___x_841_ = lean_unbox(v_a_833_);
lean_dec(v_a_833_);
v___y_803_ = v_a_831_;
v___y_804_ = v___x_841_;
v_motive_805_ = v_a_839_;
v_newType_806_ = v___x_840_;
goto v___jp_802_;
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
lean_dec(v_a_833_);
lean_dec(v_a_831_);
lean_dec_ref(v_type_819_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_842_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_838_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_838_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; 
lean_inc_ref(v___x_643_);
v___x_850_ = l_Lean_Expr_replaceFVar(v_type_819_, v___x_643_, v_a_831_);
lean_inc(v_a_831_);
v___x_851_ = l_Lean_Meta_mkEqRefl(v_a_831_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_853_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
lean_inc_ref(v___x_639_);
v___x_853_ = l_Lean_Expr_replaceFVar(v___x_850_, v___x_639_, v_a_852_);
lean_dec(v_a_852_);
lean_dec_ref(v___x_850_);
if (v_symm_653_ == 0)
{
lean_object* v___x_854_; 
lean_dec_ref(v_type_819_);
lean_inc_ref(v___x_643_);
lean_inc(v_a_831_);
v___x_854_ = l_Lean_Meta_mkEq(v_a_831_, v___x_643_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_855_);
lean_dec_ref_known(v___x_854_, 1);
v___x_856_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__7));
v___x_857_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v___x_856_, v_a_855_, v___f_822_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; uint8_t v___x_859_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref_known(v___x_857_, 1);
v___x_859_ = lean_unbox(v_a_833_);
lean_dec(v_a_833_);
v___y_803_ = v_a_831_;
v___y_804_ = v___x_859_;
v_motive_805_ = v_a_858_;
v_newType_806_ = v___x_853_;
goto v___jp_802_;
}
else
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
lean_dec_ref(v___x_853_);
lean_dec(v_a_833_);
lean_dec(v_a_831_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_860_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_857_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_857_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_860_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
else
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref(v___x_853_);
lean_dec(v_a_833_);
lean_dec(v_a_831_);
lean_dec_ref(v___f_822_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_868_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_854_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_854_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; 
lean_dec_ref(v___f_822_);
v___x_876_ = lean_mk_empty_array_with_capacity(v___x_644_);
lean_inc_ref(v___x_643_);
v___x_877_ = lean_array_push(v___x_876_, v___x_643_);
lean_inc_ref(v___x_639_);
v___x_878_ = lean_array_push(v___x_877_, v___x_639_);
v___x_879_ = 1;
v___x_880_ = l_Lean_Meta_mkLambdaFVars(v___x_878_, v_type_819_, v___x_654_, v___x_647_, v___x_654_, v___x_647_, v___x_879_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec_ref(v___x_878_);
if (lean_obj_tag(v___x_880_) == 0)
{
lean_object* v_a_881_; uint8_t v___x_882_; 
v_a_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v___x_880_, 1);
v___x_882_ = lean_unbox(v_a_833_);
lean_dec(v_a_833_);
v___y_803_ = v_a_831_;
v___y_804_ = v___x_882_;
v_motive_805_ = v_a_881_;
v_newType_806_ = v___x_853_;
goto v___jp_802_;
}
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_dec_ref(v___x_853_);
lean_dec(v_a_833_);
lean_dec(v_a_831_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_883_ = lean_ctor_get(v___x_880_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_880_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_880_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_880_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec_ref(v___x_850_);
lean_dec(v_a_833_);
lean_dec(v_a_831_);
lean_dec_ref(v___f_822_);
lean_dec_ref(v_type_819_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_891_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_851_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_851_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
lean_dec_ref(v___f_822_);
lean_dec_ref(v_type_819_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_905_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_826_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_826_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref(v___f_822_);
lean_dec_ref(v_type_819_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_913_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_823_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_823_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_921_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_817_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_817_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
v___jp_661_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_665_ = l_Lean_Meta_FVarSubst_insert(v___y_663_, v_fvarId_637_, v___y_664_);
v___x_666_ = l_Lean_Meta_FVarSubst_insert(v___x_665_, v_hFVarId_638_, v___x_639_);
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
lean_ctor_set(v___x_667_, 1, v___y_662_);
v___x_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
return v___x_668_;
}
v___jp_669_:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_array_get_size(v___y_671_);
v___x_674_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_640_, v___y_671_, v___x_673_, v___x_673_, v_fvarSubst_641_);
lean_dec_ref(v___y_671_);
if (v_clearH_642_ == 0)
{
lean_object* v_a_675_; 
lean_dec_ref(v___y_672_);
v_a_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_675_);
lean_dec_ref(v___x_674_);
v___y_662_ = v___y_670_;
v___y_663_ = v_a_675_;
v___y_664_ = v___x_643_;
goto v___jp_661_;
}
else
{
lean_object* v_a_676_; 
lean_dec_ref(v___x_643_);
v_a_676_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_676_);
lean_dec_ref(v___x_674_);
v___y_662_ = v___y_670_;
v___y_663_ = v_a_676_;
v___y_664_ = v___y_672_;
goto v___jp_661_;
}
}
v___jp_677_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_array_get_size(v_fst_640_);
v___x_685_ = lean_nat_sub(v___x_684_, v___x_644_);
lean_dec(v___x_644_);
lean_inc(v___x_685_);
v___x_686_ = l_Lean_Meta_introNCore(v_mvarId_679_, v___x_685_, v___x_645_, v_skip_646_, v___x_647_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v_toCold_688_; lean_object* v_options_689_; uint8_t v_hasTrace_690_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v_toCold_688_ = lean_ctor_get(v___y_682_, 0);
v_options_689_ = lean_ctor_get(v_toCold_688_, 2);
v_hasTrace_690_ = lean_ctor_get_uint8(v_options_689_, sizeof(void*)*1);
if (v_hasTrace_690_ == 0)
{
lean_object* v_fst_691_; lean_object* v_snd_692_; 
lean_dec(v___x_685_);
lean_dec(v___x_648_);
v_fst_691_ = lean_ctor_get(v_a_687_, 0);
lean_inc(v_fst_691_);
v_snd_692_ = lean_ctor_get(v_a_687_, 1);
lean_inc(v_snd_692_);
lean_dec(v_a_687_);
v___y_670_ = v_snd_692_;
v___y_671_ = v_fst_691_;
v___y_672_ = v___y_678_;
goto v___jp_669_;
}
else
{
lean_object* v_fst_693_; lean_object* v_snd_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_722_; 
v_fst_693_ = lean_ctor_get(v_a_687_, 0);
v_snd_694_ = lean_ctor_get(v_a_687_, 1);
v_isSharedCheck_722_ = !lean_is_exclusive(v_a_687_);
if (v_isSharedCheck_722_ == 0)
{
v___x_696_ = v_a_687_;
v_isShared_697_ = v_isSharedCheck_722_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_snd_694_);
lean_inc(v_fst_693_);
lean_dec(v_a_687_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_722_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_inheritedTraceOptions_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v_inheritedTraceOptions_698_ = lean_ctor_get(v_toCold_688_, 11);
v___x_699_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
lean_inc(v___x_648_);
v___x_700_ = l_Lean_Name_append(v___x_699_, v___x_648_);
v___x_701_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_698_, v_options_689_, v___x_700_);
lean_dec(v___x_700_);
if (v___x_701_ == 0)
{
lean_del_object(v___x_696_);
lean_dec(v___x_685_);
lean_dec(v___x_648_);
v___y_670_ = v_snd_694_;
v___y_671_ = v_fst_693_;
v___y_672_ = v___y_678_;
goto v___jp_669_;
}
else
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_702_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__3, &l_Lean_Meta_substCore___lam__1___closed__3_once, _init_l_Lean_Meta_substCore___lam__1___closed__3);
v___x_703_ = l_Nat_reprFast(v___x_685_);
v___x_704_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
v___x_705_ = l_Lean_MessageData_ofFormat(v___x_704_);
if (v_isShared_697_ == 0)
{
lean_ctor_set_tag(v___x_696_, 7);
lean_ctor_set(v___x_696_, 1, v___x_705_);
lean_ctor_set(v___x_696_, 0, v___x_702_);
v___x_707_ = v___x_696_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_702_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v___x_705_);
v___x_707_ = v_reuseFailAlloc_721_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_708_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__5, &l_Lean_Meta_substCore___lam__1___closed__5_once, _init_l_Lean_Meta_substCore___lam__1___closed__5);
v___x_709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_707_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
lean_inc(v_snd_694_);
v___x_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_710_, 0, v_snd_694_);
v___x_711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_709_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_648_, v___x_711_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_dec_ref_known(v___x_712_, 1);
v___y_670_ = v_snd_694_;
v___y_671_ = v_fst_693_;
v___y_672_ = v___y_678_;
goto v___jp_669_;
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec(v_snd_694_);
lean_dec(v_fst_693_);
lean_dec_ref(v___y_678_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_713_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_712_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_712_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
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
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec(v___x_685_);
lean_dec_ref(v___y_678_);
lean_dec(v___x_648_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_723_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_686_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_686_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
v___jp_731_:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_snd_649_, v_newVal_734_, v___y_736_);
lean_dec_ref(v___x_739_);
v___x_740_ = l_Lean_Expr_mvarId_x21(v___y_732_);
lean_dec_ref(v___y_732_);
if (v_clearH_642_ == 0)
{
lean_dec(v___x_651_);
lean_dec(v___x_650_);
v___y_678_ = v___y_733_;
v_mvarId_679_ = v___x_740_;
v___y_680_ = v___y_735_;
v___y_681_ = v___y_736_;
v___y_682_ = v___y_737_;
v___y_683_ = v___y_738_;
goto v___jp_677_;
}
else
{
lean_object* v___x_741_; 
v___x_741_ = l_Lean_MVarId_clear(v___x_740_, v___x_650_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = l_Lean_MVarId_clear(v_a_742_, v___x_651_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v___y_678_ = v___y_733_;
v_mvarId_679_ = v_a_744_;
v___y_680_ = v___y_735_;
v___y_681_ = v___y_736_;
v___y_682_ = v___y_737_;
v___y_683_ = v___y_738_;
goto v___jp_677_;
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec_ref(v___y_733_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_745_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_743_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_743_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec_ref(v___y_733_);
lean_dec(v___x_651_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_753_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_741_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_741_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
v___jp_761_:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_763_, v_a_652_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
if (lean_obj_tag(v___x_771_) == 0)
{
if (v___y_764_ == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc_n(v_a_772_, 2);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = l_Lean_Meta_mkEqNDRec(v___y_762_, v_a_772_, v_major_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
lean_dec_ref_known(v___x_773_, 1);
v___y_732_ = v_a_772_;
v___y_733_ = v___y_765_;
v_newVal_734_ = v_a_774_;
v___y_735_ = v___y_767_;
v___y_736_ = v___y_768_;
v___y_737_ = v___y_769_;
v___y_738_ = v___y_770_;
goto v___jp_731_;
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v_a_772_);
lean_dec_ref(v___y_765_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_775_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_773_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_773_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_784_; 
v_a_783_ = lean_ctor_get(v___x_771_, 0);
lean_inc_n(v_a_783_, 2);
lean_dec_ref_known(v___x_771_, 1);
v___x_784_ = l_Lean_Meta_mkEqRec(v___y_762_, v_a_783_, v_major_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_784_, 1);
v___y_732_ = v_a_783_;
v___y_733_ = v___y_765_;
v_newVal_734_ = v_a_785_;
v___y_735_ = v___y_767_;
v___y_736_ = v___y_768_;
v___y_737_ = v___y_769_;
v___y_738_ = v___y_770_;
goto v___jp_731_;
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec(v_a_783_);
lean_dec_ref(v___y_765_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_786_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_784_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_784_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec_ref(v_major_766_);
lean_dec_ref(v___y_765_);
lean_dec_ref(v___y_762_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_794_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_771_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_771_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
v___jp_802_:
{
if (v_symm_653_ == 0)
{
lean_object* v___x_807_; 
lean_inc_ref(v___x_639_);
v___x_807_ = l_Lean_Meta_mkEqSymm(v___x_639_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_807_, 1);
v___y_762_ = v_motive_805_;
v___y_763_ = v_newType_806_;
v___y_764_ = v___y_804_;
v___y_765_ = v___y_803_;
v_major_766_ = v_a_808_;
v___y_767_ = v___y_656_;
v___y_768_ = v___y_657_;
v___y_769_ = v___y_658_;
v___y_770_ = v___y_659_;
goto v___jp_761_;
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
lean_dec_ref(v_newType_806_);
lean_dec_ref(v_motive_805_);
lean_dec_ref(v___y_803_);
lean_dec(v_a_652_);
lean_dec(v___x_651_);
lean_dec(v___x_650_);
lean_dec(v_snd_649_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_809_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_807_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_807_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
else
{
lean_inc_ref(v___x_639_);
v___y_762_ = v_motive_805_;
v___y_763_ = v_newType_806_;
v___y_764_ = v___y_804_;
v___y_765_ = v___y_803_;
v_major_766_ = v___x_639_;
v___y_767_ = v___y_656_;
v___y_768_ = v___y_657_;
v___y_769_ = v___y_658_;
v___y_770_ = v___y_659_;
goto v___jp_761_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object** _args){
lean_object* v_fvarId_929_ = _args[0];
lean_object* v_hFVarId_930_ = _args[1];
lean_object* v___x_931_ = _args[2];
lean_object* v_fst_932_ = _args[3];
lean_object* v_fvarSubst_933_ = _args[4];
lean_object* v_clearH_934_ = _args[5];
lean_object* v___x_935_ = _args[6];
lean_object* v___x_936_ = _args[7];
lean_object* v___x_937_ = _args[8];
lean_object* v_skip_938_ = _args[9];
lean_object* v___x_939_ = _args[10];
lean_object* v___x_940_ = _args[11];
lean_object* v_snd_941_ = _args[12];
lean_object* v___x_942_ = _args[13];
lean_object* v___x_943_ = _args[14];
lean_object* v_a_944_ = _args[15];
lean_object* v_symm_945_ = _args[16];
lean_object* v___x_946_ = _args[17];
lean_object* v___x_947_ = _args[18];
lean_object* v___y_948_ = _args[19];
lean_object* v___y_949_ = _args[20];
lean_object* v___y_950_ = _args[21];
lean_object* v___y_951_ = _args[22];
lean_object* v___y_952_ = _args[23];
_start:
{
uint8_t v_clearH_boxed_953_; uint8_t v_skip_boxed_954_; uint8_t v___x_28950__boxed_955_; uint8_t v_symm_boxed_956_; uint8_t v___x_28956__boxed_957_; lean_object* v_res_958_; 
v_clearH_boxed_953_ = lean_unbox(v_clearH_934_);
v_skip_boxed_954_ = lean_unbox(v_skip_938_);
v___x_28950__boxed_955_ = lean_unbox(v___x_939_);
v_symm_boxed_956_ = lean_unbox(v_symm_945_);
v___x_28956__boxed_957_ = lean_unbox(v___x_946_);
v_res_958_ = l_Lean_Meta_substCore___lam__1(v_fvarId_929_, v_hFVarId_930_, v___x_931_, v_fst_932_, v_fvarSubst_933_, v_clearH_boxed_953_, v___x_935_, v___x_936_, v___x_937_, v_skip_boxed_954_, v___x_28950__boxed_955_, v___x_940_, v_snd_941_, v___x_942_, v___x_943_, v_a_944_, v_symm_boxed_956_, v___x_28956__boxed_957_, v___x_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec(v___x_947_);
lean_dec_ref(v_fst_932_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object* v___x_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_toCold_965_; lean_object* v_options_966_; uint8_t v_hasTrace_967_; 
v_toCold_965_ = lean_ctor_get(v___y_962_, 0);
v_options_966_ = lean_ctor_get(v_toCold_965_, 2);
v_hasTrace_967_ = lean_ctor_get_uint8(v_options_966_, sizeof(void*)*1);
if (v_hasTrace_967_ == 0)
{
lean_object* v___x_968_; lean_object* v___x_969_; 
lean_dec(v___x_959_);
v___x_968_ = lean_box(v_hasTrace_967_);
v___x_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
return v___x_969_;
}
else
{
lean_object* v_inheritedTraceOptions_970_; lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v_inheritedTraceOptions_970_ = lean_ctor_get(v_toCold_965_, 11);
v___x_971_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
v___x_972_ = l_Lean_Name_append(v___x_971_, v___x_959_);
v___x_973_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_970_, v_options_966_, v___x_972_);
lean_dec(v___x_972_);
v___x_974_ = lean_box(v___x_973_);
v___x_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
return v___x_975_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object* v___x_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_Meta_substCore___lam__2(v___x_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
if (lean_obj_tag(v_a_983_) == 0)
{
lean_object* v___x_985_; 
v___x_985_ = l_List_reverse___redArg(v_a_984_);
return v___x_985_;
}
else
{
lean_object* v_head_986_; lean_object* v_tail_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_996_; 
v_head_986_ = lean_ctor_get(v_a_983_, 0);
v_tail_987_ = lean_ctor_get(v_a_983_, 1);
v_isSharedCheck_996_ = !lean_is_exclusive(v_a_983_);
if (v_isSharedCheck_996_ == 0)
{
v___x_989_ = v_a_983_;
v_isShared_990_ = v_isSharedCheck_996_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_tail_987_);
lean_inc(v_head_986_);
lean_dec(v_a_983_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_996_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; lean_object* v___x_993_; 
v___x_991_ = l_Lean_MessageData_ofName(v_head_986_);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 1, v_a_984_);
lean_ctor_set(v___x_989_, 0, v___x_991_);
v___x_993_ = v___x_989_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v_a_984_);
v___x_993_ = v_reuseFailAlloc_995_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
v_a_983_ = v_tail_987_;
v_a_984_ = v___x_993_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t v_sz_997_, size_t v_i_998_, lean_object* v_bs_999_){
_start:
{
uint8_t v___x_1000_; 
v___x_1000_ = lean_usize_dec_lt(v_i_998_, v_sz_997_);
if (v___x_1000_ == 0)
{
return v_bs_999_;
}
else
{
lean_object* v_v_1001_; lean_object* v___x_1002_; lean_object* v_bs_x27_1003_; size_t v___x_1004_; size_t v___x_1005_; lean_object* v___x_1006_; 
v_v_1001_ = lean_array_uget(v_bs_999_, v_i_998_);
v___x_1002_ = lean_unsigned_to_nat(0u);
v_bs_x27_1003_ = lean_array_uset(v_bs_999_, v_i_998_, v___x_1002_);
v___x_1004_ = ((size_t)1ULL);
v___x_1005_ = lean_usize_add(v_i_998_, v___x_1004_);
v___x_1006_ = lean_array_uset(v_bs_x27_1003_, v_i_998_, v_v_1001_);
v_i_998_ = v___x_1005_;
v_bs_999_ = v___x_1006_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object* v_sz_1008_, lean_object* v_i_1009_, lean_object* v_bs_1010_){
_start:
{
size_t v_sz_boxed_1011_; size_t v_i_boxed_1012_; lean_object* v_res_1013_; 
v_sz_boxed_1011_ = lean_unbox_usize(v_sz_1008_);
lean_dec(v_sz_1008_);
v_i_boxed_1012_ = lean_unbox_usize(v_i_1009_);
lean_dec(v_i_1009_);
v_res_1013_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_boxed_1011_, v_i_boxed_1012_, v_bs_1010_);
return v_res_1013_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__2));
v___x_1019_ = l_Lean_stringToMessageData(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__4));
v___x_1022_ = l_Lean_stringToMessageData(v___x_1021_);
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__8(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__7));
v___x_1027_ = l_Lean_MessageData_ofFormat(v___x_1026_);
return v___x_1027_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__9(void){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__8, &l_Lean_Meta_substCore___lam__3___closed__8_once, _init_l_Lean_Meta_substCore___lam__3___closed__8);
v___x_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
return v___x_1029_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__11(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__10));
v___x_1032_ = l_Lean_stringToMessageData(v___x_1031_);
return v___x_1032_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__13(void){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__12));
v___x_1035_ = l_Lean_stringToMessageData(v___x_1034_);
return v___x_1035_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__15(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__14));
v___x_1038_ = l_Lean_stringToMessageData(v___x_1037_);
return v___x_1038_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__17(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__16));
v___x_1041_ = l_Lean_stringToMessageData(v___x_1040_);
return v___x_1041_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__19(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__18));
v___x_1044_ = l_Lean_stringToMessageData(v___x_1043_);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__25(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__24));
v___x_1055_ = l_Lean_stringToMessageData(v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__27(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__26));
v___x_1058_ = l_Lean_stringToMessageData(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__29(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__28));
v___x_1061_ = l_Lean_stringToMessageData(v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object* v_mvarId_1064_, lean_object* v_hFVarId_1065_, lean_object* v___x_1066_, uint8_t v_clearH_1067_, lean_object* v_fvarSubst_1068_, uint8_t v_symm_1069_, uint8_t v_tryToSkip_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___x_1114_; 
lean_inc(v_mvarId_1064_);
v___x_1114_ = l_Lean_MVarId_getTag(v_mvarId_1064_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 1);
v___x_1116_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
lean_inc(v_mvarId_1064_);
v___x_1117_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1064_, v___x_1116_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v___x_1118_; 
lean_dec_ref_known(v___x_1117_, 1);
lean_inc(v_hFVarId_1065_);
v___x_1118_ = l_Lean_FVarId_getDecl___redArg(v_hFVarId_1065_, v___y_1071_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v_a_1119_; lean_object* v___x_1120_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___x_1135_; 
v_a_1119_ = lean_ctor_get(v___x_1118_, 0);
lean_inc(v_a_1119_);
lean_dec_ref_known(v___x_1118_, 1);
v___x_1120_ = l_Lean_LocalDecl_type(v_a_1119_);
lean_dec(v_a_1119_);
lean_inc_ref(v___x_1120_);
v___x_1135_ = l_Lean_Meta_matchEq_x3f(v___x_1120_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_a_1136_);
lean_dec_ref_known(v___x_1135_, 1);
if (lean_obj_tag(v_a_1136_) == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec_ref(v___x_1120_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v___x_1137_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__9, &l_Lean_Meta_substCore___lam__3___closed__9_once, _init_l_Lean_Meta_substCore___lam__3___closed__9);
v___x_1138_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1116_, v_mvarId_1064_, v___x_1137_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
return v___x_1138_;
}
else
{
lean_object* v_val_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1457_; 
v_val_1139_ = lean_ctor_get(v_a_1136_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_a_1136_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1141_ = v_a_1136_;
v_isShared_1142_ = v_isSharedCheck_1457_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_val_1139_);
lean_dec(v_a_1136_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1457_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v_snd_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1455_; 
v_snd_1143_ = lean_ctor_get(v_val_1139_, 1);
v_isSharedCheck_1455_ = !lean_is_exclusive(v_val_1139_);
if (v_isSharedCheck_1455_ == 0)
{
lean_object* v_unused_1456_; 
v_unused_1456_ = lean_ctor_get(v_val_1139_, 0);
lean_dec(v_unused_1456_);
v___x_1145_ = v_val_1139_;
v_isShared_1146_ = v_isSharedCheck_1455_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_snd_1143_);
lean_dec(v_val_1139_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1455_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v_fst_1147_; lean_object* v_snd_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1454_; 
v_fst_1147_ = lean_ctor_get(v_snd_1143_, 0);
v_snd_1148_ = lean_ctor_get(v_snd_1143_, 1);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_snd_1143_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1150_ = v_snd_1143_;
v_isShared_1151_ = v_isSharedCheck_1454_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_snd_1148_);
lean_inc(v_fst_1147_);
lean_dec(v_snd_1143_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1454_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
uint8_t v___x_1152_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; uint8_t v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1170_; uint8_t v_skip_1171_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; uint8_t v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; uint8_t v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v___y_1193_; lean_object* v___y_1194_; lean_object* v___y_1195_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; uint8_t v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; uint8_t v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; uint8_t v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1276_; uint8_t v___y_1277_; lean_object* v___y_1278_; lean_object* v___y_1279_; lean_object* v___y_1280_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1334_; lean_object* v___y_1335_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1450_; 
v___x_1152_ = 1;
if (v_symm_1069_ == 0)
{
lean_inc(v_fst_1147_);
v___y_1450_ = v_fst_1147_;
goto v___jp_1449_;
}
else
{
lean_inc(v_snd_1148_);
v___y_1450_ = v_snd_1148_;
goto v___jp_1449_;
}
v___jp_1153_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___f_1177_; lean_object* v___x_1178_; 
v___x_1172_ = lean_box(v_clearH_1067_);
v___x_1173_ = lean_box(v_skip_1171_);
v___x_1174_ = lean_box(v___x_1152_);
v___x_1175_ = lean_box(v_symm_1069_);
v___x_1176_ = lean_box(v___y_1168_);
v___f_1177_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__1___boxed), 24, 19);
lean_closure_set(v___f_1177_, 0, v___y_1159_);
lean_closure_set(v___f_1177_, 1, v_hFVarId_1065_);
lean_closure_set(v___f_1177_, 2, v___y_1155_);
lean_closure_set(v___f_1177_, 3, v___y_1169_);
lean_closure_set(v___f_1177_, 4, v_fvarSubst_1068_);
lean_closure_set(v___f_1177_, 5, v___x_1172_);
lean_closure_set(v___f_1177_, 6, v___y_1163_);
lean_closure_set(v___f_1177_, 7, v___y_1166_);
lean_closure_set(v___f_1177_, 8, v___y_1156_);
lean_closure_set(v___f_1177_, 9, v___x_1173_);
lean_closure_set(v___f_1177_, 10, v___x_1174_);
lean_closure_set(v___f_1177_, 11, v___y_1165_);
lean_closure_set(v___f_1177_, 12, v___y_1161_);
lean_closure_set(v___f_1177_, 13, v___y_1162_);
lean_closure_set(v___f_1177_, 14, v___y_1167_);
lean_closure_set(v___f_1177_, 15, v_a_1115_);
lean_closure_set(v___f_1177_, 16, v___x_1175_);
lean_closure_set(v___f_1177_, 17, v___x_1176_);
lean_closure_set(v___f_1177_, 18, v___y_1160_);
v___x_1178_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v___y_1170_, v___f_1177_, v___y_1164_, v___y_1158_, v___y_1157_, v___y_1154_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1157_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1164_);
return v___x_1178_;
}
v___jp_1179_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1196_ = lean_unsigned_to_nat(0u);
v___x_1197_ = lean_array_get(v___x_1066_, v___y_1190_, v___x_1196_);
lean_inc(v___x_1197_);
v___x_1198_ = l_Lean_mkFVar(v___x_1197_);
v___x_1199_ = lean_unsigned_to_nat(1u);
v___x_1200_ = lean_array_get(v___x_1066_, v___y_1190_, v___x_1199_);
lean_dec_ref(v___y_1190_);
lean_inc(v___x_1200_);
v___x_1201_ = l_Lean_mkFVar(v___x_1200_);
if (v_tryToSkip_1070_ == 0)
{
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1188_);
v___y_1154_ = v___y_1195_;
v___y_1155_ = v___x_1201_;
v___y_1156_ = v___y_1180_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1193_;
v___y_1159_ = v___y_1182_;
v___y_1160_ = v___x_1199_;
v___y_1161_ = v___y_1186_;
v___y_1162_ = v___x_1200_;
v___y_1163_ = v___x_1198_;
v___y_1164_ = v___y_1192_;
v___y_1165_ = v___y_1181_;
v___y_1166_ = v___y_1183_;
v___y_1167_ = v___x_1197_;
v___y_1168_ = v___y_1184_;
v___y_1169_ = v___y_1185_;
v___y_1170_ = v___y_1187_;
v_skip_1171_ = v___y_1189_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1202_; uint8_t v___x_1203_; 
v___x_1202_ = lean_array_get_size(v___y_1191_);
lean_dec_ref(v___y_1191_);
v___x_1203_ = lean_nat_dec_eq(v___x_1202_, v___y_1188_);
lean_dec(v___y_1188_);
if (v___x_1203_ == 0)
{
v___y_1154_ = v___y_1195_;
v___y_1155_ = v___x_1201_;
v___y_1156_ = v___y_1180_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1193_;
v___y_1159_ = v___y_1182_;
v___y_1160_ = v___x_1199_;
v___y_1161_ = v___y_1186_;
v___y_1162_ = v___x_1200_;
v___y_1163_ = v___x_1198_;
v___y_1164_ = v___y_1192_;
v___y_1165_ = v___y_1181_;
v___y_1166_ = v___y_1183_;
v___y_1167_ = v___x_1197_;
v___y_1168_ = v___y_1184_;
v___y_1169_ = v___y_1185_;
v___y_1170_ = v___y_1187_;
v_skip_1171_ = v___y_1189_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1204_; 
lean_inc(v___y_1187_);
v___x_1204_ = l_Lean_MVarId_getType(v___y_1187_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1206_; lean_object* v_a_1207_; uint8_t v___x_1208_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc_n(v_a_1205_, 2);
lean_dec_ref_known(v___x_1204_, 1);
lean_inc(v___x_1197_);
v___x_1206_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1205_, v___x_1197_, v___y_1193_);
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1207_);
lean_dec_ref(v___x_1206_);
v___x_1208_ = lean_unbox(v_a_1207_);
lean_dec(v_a_1207_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; lean_object* v_a_1210_; uint8_t v___x_1211_; 
lean_inc(v___x_1200_);
v___x_1209_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1205_, v___x_1200_, v___y_1193_);
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref(v___x_1209_);
v___x_1211_ = lean_unbox(v_a_1210_);
lean_dec(v_a_1210_);
if (v___x_1211_ == 0)
{
lean_dec_ref(v___x_1201_);
lean_dec_ref(v___x_1198_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec(v_a_1115_);
lean_dec(v_hFVarId_1065_);
v___y_1077_ = v___y_1195_;
v___y_1078_ = v___y_1194_;
v___y_1079_ = v___y_1192_;
v___y_1080_ = v___y_1193_;
v___y_1081_ = v___x_1197_;
v___y_1082_ = v___x_1200_;
v___y_1083_ = v___y_1187_;
goto v___jp_1076_;
}
else
{
v___y_1154_ = v___y_1195_;
v___y_1155_ = v___x_1201_;
v___y_1156_ = v___y_1180_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1193_;
v___y_1159_ = v___y_1182_;
v___y_1160_ = v___x_1199_;
v___y_1161_ = v___y_1186_;
v___y_1162_ = v___x_1200_;
v___y_1163_ = v___x_1198_;
v___y_1164_ = v___y_1192_;
v___y_1165_ = v___y_1181_;
v___y_1166_ = v___y_1183_;
v___y_1167_ = v___x_1197_;
v___y_1168_ = v___y_1184_;
v___y_1169_ = v___y_1185_;
v___y_1170_ = v___y_1187_;
v_skip_1171_ = v___y_1189_;
goto v___jp_1153_;
}
}
else
{
lean_dec(v_a_1205_);
v___y_1154_ = v___y_1195_;
v___y_1155_ = v___x_1201_;
v___y_1156_ = v___y_1180_;
v___y_1157_ = v___y_1194_;
v___y_1158_ = v___y_1193_;
v___y_1159_ = v___y_1182_;
v___y_1160_ = v___x_1199_;
v___y_1161_ = v___y_1186_;
v___y_1162_ = v___x_1200_;
v___y_1163_ = v___x_1198_;
v___y_1164_ = v___y_1192_;
v___y_1165_ = v___y_1181_;
v___y_1166_ = v___y_1183_;
v___y_1167_ = v___x_1197_;
v___y_1168_ = v___y_1184_;
v___y_1169_ = v___y_1185_;
v___y_1170_ = v___y_1187_;
v_skip_1171_ = v___y_1189_;
goto v___jp_1153_;
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec_ref(v___x_1201_);
lean_dec(v___x_1200_);
lean_dec_ref(v___x_1198_);
lean_dec(v___x_1197_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec(v___y_1180_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1212_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1204_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1204_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
}
v___jp_1220_:
{
lean_object* v___x_1238_; 
lean_inc_ref(v___y_1231_);
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
v___x_1238_ = lean_apply_5(v___y_1231_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, lean_box(0));
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; uint8_t v___x_1240_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1240_ = lean_unbox(v_a_1239_);
lean_dec(v_a_1239_);
if (v___x_1240_ == 0)
{
lean_dec(v___y_1232_);
lean_del_object(v___x_1150_);
lean_inc(v___y_1228_);
v___y_1180_ = v___y_1221_;
v___y_1181_ = v___y_1223_;
v___y_1182_ = v___y_1222_;
v___y_1183_ = v___y_1224_;
v___y_1184_ = v___y_1225_;
v___y_1185_ = v___y_1227_;
v___y_1186_ = v___y_1228_;
v___y_1187_ = v___y_1228_;
v___y_1188_ = v___y_1229_;
v___y_1189_ = v___y_1230_;
v___y_1190_ = v___y_1226_;
v___y_1191_ = v___y_1233_;
v___y_1192_ = v___y_1234_;
v___y_1193_ = v___y_1235_;
v___y_1194_ = v___y_1236_;
v___y_1195_ = v___y_1237_;
goto v___jp_1179_;
}
else
{
lean_object* v___x_1241_; size_t v_sz_1242_; size_t v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1250_; 
v___x_1241_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__11, &l_Lean_Meta_substCore___lam__3___closed__11_once, _init_l_Lean_Meta_substCore___lam__3___closed__11);
v_sz_1242_ = lean_array_size(v___y_1233_);
v___x_1243_ = ((size_t)0ULL);
lean_inc_ref(v___y_1233_);
v___x_1244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_1242_, v___x_1243_, v___y_1233_);
v___x_1245_ = lean_array_to_list(v___x_1244_);
v___x_1246_ = lean_box(0);
v___x_1247_ = l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(v___x_1245_, v___x_1246_);
v___x_1248_ = l_Lean_MessageData_ofList(v___x_1247_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set_tag(v___x_1150_, 7);
lean_ctor_set(v___x_1150_, 1, v___x_1248_);
lean_ctor_set(v___x_1150_, 0, v___x_1241_);
v___x_1250_ = v___x_1150_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v___x_1248_);
v___x_1250_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1232_, v___x_1250_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_dec_ref_known(v___x_1251_, 1);
lean_inc(v___y_1228_);
v___y_1180_ = v___y_1221_;
v___y_1181_ = v___y_1223_;
v___y_1182_ = v___y_1222_;
v___y_1183_ = v___y_1224_;
v___y_1184_ = v___y_1225_;
v___y_1185_ = v___y_1227_;
v___y_1186_ = v___y_1228_;
v___y_1187_ = v___y_1228_;
v___y_1188_ = v___y_1229_;
v___y_1189_ = v___y_1230_;
v___y_1190_ = v___y_1226_;
v___y_1191_ = v___y_1233_;
v___y_1192_ = v___y_1234_;
v___y_1193_ = v___y_1235_;
v___y_1194_ = v___y_1236_;
v___y_1195_ = v___y_1237_;
goto v___jp_1179_;
}
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1251_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1251_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec(v___y_1221_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1261_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1238_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1238_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
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
v___jp_1269_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = lean_box(0);
lean_inc(v___y_1276_);
v___x_1285_ = l_Lean_Meta_introNCore(v___y_1270_, v___y_1276_, v___x_1284_, v___y_1277_, v___x_1152_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v_fst_1287_; lean_object* v_snd_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1317_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
lean_inc(v_a_1286_);
lean_dec_ref_known(v___x_1285_, 1);
v_fst_1287_ = lean_ctor_get(v_a_1286_, 0);
v_snd_1288_ = lean_ctor_get(v_a_1286_, 1);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_a_1286_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1290_ = v_a_1286_;
v_isShared_1291_ = v_isSharedCheck_1317_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_snd_1288_);
lean_inc(v_fst_1287_);
lean_dec(v_a_1286_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1317_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1292_; 
lean_inc_ref(v___y_1278_);
lean_inc(v___y_1283_);
lean_inc_ref(v___y_1282_);
lean_inc(v___y_1281_);
lean_inc_ref(v___y_1280_);
v___x_1292_ = lean_apply_5(v___y_1278_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, lean_box(0));
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; uint8_t v___x_1294_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v___x_1294_ = lean_unbox(v_a_1293_);
lean_dec(v_a_1293_);
if (v___x_1294_ == 0)
{
lean_del_object(v___x_1290_);
lean_inc_ref(v___y_1275_);
v___y_1221_ = v___x_1284_;
v___y_1222_ = v___y_1271_;
v___y_1223_ = v___y_1272_;
v___y_1224_ = v___y_1273_;
v___y_1225_ = v___y_1274_;
v___y_1226_ = v_fst_1287_;
v___y_1227_ = v___y_1275_;
v___y_1228_ = v_snd_1288_;
v___y_1229_ = v___y_1276_;
v___y_1230_ = v___y_1277_;
v___y_1231_ = v___y_1278_;
v___y_1232_ = v___y_1279_;
v___y_1233_ = v___y_1275_;
v___y_1234_ = v___y_1280_;
v___y_1235_ = v___y_1281_;
v___y_1236_ = v___y_1282_;
v___y_1237_ = v___y_1283_;
goto v___jp_1220_;
}
else
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1298_; 
v___x_1295_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__13, &l_Lean_Meta_substCore___lam__3___closed__13_once, _init_l_Lean_Meta_substCore___lam__3___closed__13);
lean_inc(v_snd_1288_);
v___x_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1296_, 0, v_snd_1288_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set_tag(v___x_1290_, 7);
lean_ctor_set(v___x_1290_, 1, v___x_1296_);
lean_ctor_set(v___x_1290_, 0, v___x_1295_);
v___x_1298_ = v___x_1290_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v___x_1296_);
v___x_1298_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1299_; 
lean_inc(v___y_1279_);
v___x_1299_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1279_, v___x_1298_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_dec_ref_known(v___x_1299_, 1);
lean_inc_ref(v___y_1275_);
v___y_1221_ = v___x_1284_;
v___y_1222_ = v___y_1271_;
v___y_1223_ = v___y_1272_;
v___y_1224_ = v___y_1273_;
v___y_1225_ = v___y_1274_;
v___y_1226_ = v_fst_1287_;
v___y_1227_ = v___y_1275_;
v___y_1228_ = v_snd_1288_;
v___y_1229_ = v___y_1276_;
v___y_1230_ = v___y_1277_;
v___y_1231_ = v___y_1278_;
v___y_1232_ = v___y_1279_;
v___y_1233_ = v___y_1275_;
v___y_1234_ = v___y_1280_;
v___y_1235_ = v___y_1281_;
v___y_1236_ = v___y_1282_;
v___y_1237_ = v___y_1283_;
goto v___jp_1220_;
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
lean_dec(v_snd_1288_);
lean_dec(v_fst_1287_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec(v___y_1271_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1302_ = v___x_1299_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1299_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1300_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_del_object(v___x_1290_);
lean_dec(v_snd_1288_);
lean_dec(v_fst_1287_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec(v___y_1271_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1309_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1292_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1292_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec(v___y_1271_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1318_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1285_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1285_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
v___jp_1326_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; uint8_t v___x_1340_; lean_object* v___x_1341_; 
v___x_1336_ = lean_unsigned_to_nat(2u);
v___x_1337_ = lean_mk_empty_array_with_capacity(v___x_1336_);
v___x_1338_ = lean_array_push(v___x_1337_, v___y_1329_);
lean_inc(v_hFVarId_1065_);
v___x_1339_ = lean_array_push(v___x_1338_, v_hFVarId_1065_);
v___x_1340_ = 0;
v___x_1341_ = l_Lean_MVarId_revert(v_mvarId_1064_, v___x_1339_, v___x_1152_, v___x_1340_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v_fst_1343_; lean_object* v_snd_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1373_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
v_fst_1343_ = lean_ctor_get(v_a_1342_, 0);
v_snd_1344_ = lean_ctor_get(v_a_1342_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v_a_1342_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1346_ = v_a_1342_;
v_isShared_1347_ = v_isSharedCheck_1373_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_snd_1344_);
lean_inc(v_fst_1343_);
lean_dec(v_a_1342_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1373_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1348_; 
lean_inc_ref(v___y_1330_);
lean_inc(v___y_1335_);
lean_inc_ref(v___y_1334_);
lean_inc(v___y_1333_);
lean_inc_ref(v___y_1332_);
v___x_1348_ = lean_apply_5(v___y_1330_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, lean_box(0));
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; uint8_t v___x_1350_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v___x_1350_ = lean_unbox(v_a_1349_);
lean_dec(v_a_1349_);
if (v___x_1350_ == 0)
{
lean_del_object(v___x_1346_);
v___y_1270_ = v_snd_1344_;
v___y_1271_ = v___y_1328_;
v___y_1272_ = v___y_1327_;
v___y_1273_ = v___x_1336_;
v___y_1274_ = v___x_1340_;
v___y_1275_ = v_fst_1343_;
v___y_1276_ = v___x_1336_;
v___y_1277_ = v___x_1340_;
v___y_1278_ = v___y_1330_;
v___y_1279_ = v___y_1331_;
v___y_1280_ = v___y_1332_;
v___y_1281_ = v___y_1333_;
v___y_1282_ = v___y_1334_;
v___y_1283_ = v___y_1335_;
goto v___jp_1269_;
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1354_; 
v___x_1351_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__15, &l_Lean_Meta_substCore___lam__3___closed__15_once, _init_l_Lean_Meta_substCore___lam__3___closed__15);
lean_inc(v_snd_1344_);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_snd_1344_);
if (v_isShared_1347_ == 0)
{
lean_ctor_set_tag(v___x_1346_, 7);
lean_ctor_set(v___x_1346_, 1, v___x_1352_);
lean_ctor_set(v___x_1346_, 0, v___x_1351_);
v___x_1354_ = v___x_1346_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1351_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1355_; 
lean_inc(v___y_1331_);
v___x_1355_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1331_, v___x_1354_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_dec_ref_known(v___x_1355_, 1);
v___y_1270_ = v_snd_1344_;
v___y_1271_ = v___y_1328_;
v___y_1272_ = v___y_1327_;
v___y_1273_ = v___x_1336_;
v___y_1274_ = v___x_1340_;
v___y_1275_ = v_fst_1343_;
v___y_1276_ = v___x_1336_;
v___y_1277_ = v___x_1340_;
v___y_1278_ = v___y_1330_;
v___y_1279_ = v___y_1331_;
v___y_1280_ = v___y_1332_;
v___y_1281_ = v___y_1333_;
v___y_1282_ = v___y_1334_;
v___y_1283_ = v___y_1335_;
goto v___jp_1269_;
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v_snd_1344_);
lean_dec(v_fst_1343_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec(v___y_1328_);
lean_dec(v___y_1327_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1355_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1355_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_del_object(v___x_1346_);
lean_dec(v_snd_1344_);
lean_dec(v_fst_1343_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec(v___y_1328_);
lean_dec(v___y_1327_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1365_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1348_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1348_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
}
else
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec(v___y_1328_);
lean_dec(v___y_1327_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
v_a_1374_ = lean_ctor_get(v___x_1341_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1341_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1341_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
v___jp_1382_:
{
lean_object* v___x_1392_; lean_object* v_a_1393_; uint8_t v___x_1394_; 
lean_inc(v___y_1384_);
lean_inc_ref(v___y_1385_);
v___x_1392_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v___y_1385_, v___y_1384_, v___y_1389_);
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref(v___x_1392_);
v___x_1394_ = lean_unbox(v_a_1393_);
lean_dec(v_a_1393_);
if (v___x_1394_ == 0)
{
lean_dec_ref(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_del_object(v___x_1145_);
lean_del_object(v___x_1141_);
lean_inc(v___y_1384_);
lean_inc(v___y_1383_);
v___y_1327_ = v___y_1383_;
v___y_1328_ = v___y_1384_;
v___y_1329_ = v___y_1384_;
v___y_1330_ = v___y_1387_;
v___y_1331_ = v___y_1383_;
v___y_1332_ = v___y_1388_;
v___y_1333_ = v___y_1389_;
v___y_1334_ = v___y_1390_;
v___y_1335_ = v___y_1391_;
goto v___jp_1326_;
}
else
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1398_; 
v___x_1395_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_1396_ = l_Lean_MessageData_ofExpr(v___y_1386_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 7);
lean_ctor_set(v___x_1145_, 1, v___x_1396_);
lean_ctor_set(v___x_1145_, 0, v___x_1395_);
v___x_1398_ = v___x_1145_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1395_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v___x_1396_);
v___x_1398_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1404_; 
v___x_1399_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__19, &l_Lean_Meta_substCore___lam__3___closed__19_once, _init_l_Lean_Meta_substCore___lam__3___closed__19);
v___x_1400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = l_Lean_indentExpr(v___y_1385_);
v___x_1402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v___x_1402_);
v___x_1404_ = v___x_1141_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1402_);
v___x_1404_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
lean_object* v___x_1405_; 
lean_inc(v_mvarId_1064_);
v___x_1405_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1116_, v_mvarId_1064_, v___x_1404_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_dec_ref_known(v___x_1405_, 1);
lean_inc(v___y_1384_);
lean_inc(v___y_1383_);
v___y_1327_ = v___y_1383_;
v___y_1328_ = v___y_1384_;
v___y_1329_ = v___y_1384_;
v___y_1330_ = v___y_1387_;
v___y_1331_ = v___y_1383_;
v___y_1332_ = v___y_1388_;
v___y_1333_ = v___y_1389_;
v___y_1334_ = v___y_1390_;
v___y_1335_ = v___y_1391_;
goto v___jp_1326_;
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1384_);
lean_dec(v___y_1383_);
lean_del_object(v___x_1150_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
lean_dec(v_mvarId_1064_);
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
}
}
v___jp_1416_:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1418_, v___y_1072_);
if (lean_obj_tag(v___y_1417_) == 1)
{
lean_object* v_a_1420_; lean_object* v_fvarId_1421_; lean_object* v___x_1422_; lean_object* v___f_1423_; lean_object* v___x_1424_; lean_object* v_a_1425_; uint8_t v___x_1426_; 
lean_dec_ref(v___x_1120_);
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref(v___x_1419_);
v_fvarId_1421_ = lean_ctor_get(v___y_1417_, 0);
lean_inc(v_fvarId_1421_);
v___x_1422_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___f_1423_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__23));
v___x_1424_ = l_Lean_Meta_substCore___lam__2(v___x_1422_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref(v___x_1424_);
v___x_1426_ = lean_unbox(v_a_1425_);
lean_dec(v_a_1425_);
if (v___x_1426_ == 0)
{
v___y_1383_ = v___x_1422_;
v___y_1384_ = v_fvarId_1421_;
v___y_1385_ = v_a_1420_;
v___y_1386_ = v___y_1417_;
v___y_1387_ = v___f_1423_;
v___y_1388_ = v___y_1071_;
v___y_1389_ = v___y_1072_;
v___y_1390_ = v___y_1073_;
v___y_1391_ = v___y_1074_;
goto v___jp_1382_;
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1427_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__25, &l_Lean_Meta_substCore___lam__3___closed__25_once, _init_l_Lean_Meta_substCore___lam__3___closed__25);
lean_inc_ref(v___y_1417_);
v___x_1428_ = l_Lean_MessageData_ofExpr(v___y_1417_);
v___x_1429_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1427_);
lean_ctor_set(v___x_1429_, 1, v___x_1428_);
v___x_1430_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__27, &l_Lean_Meta_substCore___lam__3___closed__27_once, _init_l_Lean_Meta_substCore___lam__3___closed__27);
v___x_1431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1429_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
lean_inc(v_fvarId_1421_);
v___x_1432_ = l_Lean_MessageData_ofName(v_fvarId_1421_);
v___x_1433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__29, &l_Lean_Meta_substCore___lam__3___closed__29_once, _init_l_Lean_Meta_substCore___lam__3___closed__29);
v___x_1435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
lean_inc(v_a_1420_);
v___x_1436_ = l_Lean_MessageData_ofExpr(v_a_1420_);
v___x_1437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_1422_, v___x_1437_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_dec_ref_known(v___x_1438_, 1);
v___y_1383_ = v___x_1422_;
v___y_1384_ = v_fvarId_1421_;
v___y_1385_ = v_a_1420_;
v___y_1386_ = v___y_1417_;
v___y_1387_ = v___f_1423_;
v___y_1388_ = v___y_1071_;
v___y_1389_ = v___y_1072_;
v___y_1390_ = v___y_1073_;
v___y_1391_ = v___y_1074_;
goto v___jp_1382_;
}
else
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
lean_dec(v_fvarId_1421_);
lean_dec(v_a_1420_);
lean_dec_ref_known(v___y_1417_, 1);
lean_del_object(v___x_1150_);
lean_del_object(v___x_1145_);
lean_del_object(v___x_1141_);
lean_dec(v_a_1115_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
lean_dec(v_mvarId_1064_);
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1419_);
lean_del_object(v___x_1150_);
lean_del_object(v___x_1145_);
lean_del_object(v___x_1141_);
lean_dec(v_a_1115_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
if (v_symm_1069_ == 0)
{
lean_object* v___x_1447_; 
v___x_1447_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__30));
v___y_1122_ = v___y_1417_;
v___y_1123_ = v___x_1447_;
goto v___jp_1121_;
}
else
{
lean_object* v___x_1448_; 
v___x_1448_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__31));
v___y_1122_ = v___y_1417_;
v___y_1123_ = v___x_1448_;
goto v___jp_1121_;
}
}
}
v___jp_1449_:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1450_, v___y_1072_);
if (v_symm_1069_ == 0)
{
lean_object* v_a_1452_; 
lean_dec(v_fst_1147_);
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref(v___x_1451_);
v___y_1417_ = v_a_1452_;
v___y_1418_ = v_snd_1148_;
goto v___jp_1416_;
}
else
{
lean_object* v_a_1453_; 
lean_dec(v_snd_1148_);
v_a_1453_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1453_);
lean_dec_ref(v___x_1451_);
v___y_1417_ = v_a_1453_;
v___y_1418_ = v_fst_1147_;
goto v___jp_1416_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref(v___x_1120_);
lean_dec(v_a_1115_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
lean_dec(v_mvarId_1064_);
v_a_1458_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1135_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1135_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
v___jp_1121_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1124_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__3, &l_Lean_Meta_substCore___lam__3___closed__3_once, _init_l_Lean_Meta_substCore___lam__3___closed__3);
lean_inc_ref(v___y_1123_);
v___x_1125_ = l_Lean_stringToMessageData(v___y_1123_);
v___x_1126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1124_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = l_Lean_indentExpr(v___x_1120_);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__5, &l_Lean_Meta_substCore___lam__3___closed__5_once, _init_l_Lean_Meta_substCore___lam__3___closed__5);
v___x_1130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1128_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = l_Lean_indentExpr(v___y_1122_);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
v___x_1134_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1116_, v_mvarId_1064_, v___x_1133_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
return v___x_1134_;
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec(v_a_1115_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
lean_dec(v_mvarId_1064_);
v_a_1466_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1118_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1118_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec(v_a_1115_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
lean_dec(v_mvarId_1064_);
v_a_1474_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1117_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1117_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v_fvarSubst_1068_);
lean_dec(v_hFVarId_1065_);
lean_dec(v_mvarId_1064_);
v_a_1482_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1114_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1114_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
v___jp_1076_:
{
if (v_clearH_1067_ == 0)
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_dec(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v_fvarSubst_1068_);
lean_ctor_set(v___x_1084_, 1, v___y_1083_);
v___x_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1084_);
return v___x_1085_;
}
else
{
lean_object* v___x_1086_; 
v___x_1086_ = l_Lean_MVarId_clear(v___y_1083_, v___y_1082_, v___y_1079_, v___y_1080_, v___y_1078_, v___y_1077_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1088_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1086_, 1);
v___x_1088_ = l_Lean_MVarId_clear(v_a_1087_, v___y_1081_, v___y_1079_, v___y_1080_, v___y_1078_, v___y_1077_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1097_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1091_ = v___x_1088_;
v_isShared_1092_ = v_isSharedCheck_1097_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1088_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1097_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1093_; lean_object* v___x_1095_; 
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v_fvarSubst_1068_);
lean_ctor_set(v___x_1093_, 1, v_a_1089_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v___x_1093_);
v___x_1095_ = v___x_1091_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1093_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
lean_dec(v_fvarSubst_1068_);
v_a_1098_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1088_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1088_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec(v_fvarSubst_1068_);
v_a_1106_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1086_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1086_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object* v_mvarId_1490_, lean_object* v_hFVarId_1491_, lean_object* v___x_1492_, lean_object* v_clearH_1493_, lean_object* v_fvarSubst_1494_, lean_object* v_symm_1495_, lean_object* v_tryToSkip_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
uint8_t v_clearH_boxed_1502_; uint8_t v_symm_boxed_1503_; uint8_t v_tryToSkip_boxed_1504_; lean_object* v_res_1505_; 
v_clearH_boxed_1502_ = lean_unbox(v_clearH_1493_);
v_symm_boxed_1503_ = lean_unbox(v_symm_1495_);
v_tryToSkip_boxed_1504_ = lean_unbox(v_tryToSkip_1496_);
v_res_1505_ = l_Lean_Meta_substCore___lam__3(v_mvarId_1490_, v_hFVarId_1491_, v___x_1492_, v_clearH_boxed_1502_, v_fvarSubst_1494_, v_symm_boxed_1503_, v_tryToSkip_boxed_1504_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___x_1492_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object* v_mvarId_1506_, lean_object* v_hFVarId_1507_, uint8_t v_symm_1508_, lean_object* v_fvarSubst_1509_, uint8_t v_clearH_1510_, uint8_t v_tryToSkip_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___f_1521_; lean_object* v___x_1522_; 
v___x_1517_ = lean_box(0);
v___x_1518_ = lean_box(v_clearH_1510_);
v___x_1519_ = lean_box(v_symm_1508_);
v___x_1520_ = lean_box(v_tryToSkip_1511_);
lean_inc(v_mvarId_1506_);
v___f_1521_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__3___boxed), 12, 7);
lean_closure_set(v___f_1521_, 0, v_mvarId_1506_);
lean_closure_set(v___f_1521_, 1, v_hFVarId_1507_);
lean_closure_set(v___f_1521_, 2, v___x_1517_);
lean_closure_set(v___f_1521_, 3, v___x_1518_);
lean_closure_set(v___f_1521_, 4, v_fvarSubst_1509_);
lean_closure_set(v___f_1521_, 5, v___x_1519_);
lean_closure_set(v___f_1521_, 6, v___x_1520_);
v___x_1522_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1506_, v___f_1521_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object* v_mvarId_1523_, lean_object* v_hFVarId_1524_, lean_object* v_symm_1525_, lean_object* v_fvarSubst_1526_, lean_object* v_clearH_1527_, lean_object* v_tryToSkip_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_){
_start:
{
uint8_t v_symm_boxed_1534_; uint8_t v_clearH_boxed_1535_; uint8_t v_tryToSkip_boxed_1536_; lean_object* v_res_1537_; 
v_symm_boxed_1534_ = lean_unbox(v_symm_1525_);
v_clearH_boxed_1535_ = lean_unbox(v_clearH_1527_);
v_tryToSkip_boxed_1536_ = lean_unbox(v_tryToSkip_1528_);
v_res_1537_ = l_Lean_Meta_substCore(v_mvarId_1523_, v_hFVarId_1524_, v_symm_boxed_1534_, v_fvarSubst_1526_, v_clearH_boxed_1535_, v_tryToSkip_boxed_1536_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_);
lean_dec(v_a_1532_);
lean_dec_ref(v_a_1531_);
lean_dec(v_a_1530_);
lean_dec_ref(v_a_1529_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(lean_object* v_fst_1538_, lean_object* v_fst_1539_, lean_object* v_n_1540_, lean_object* v_i_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v___x_1549_; 
v___x_1549_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_1538_, v_fst_1539_, v_n_1540_, v_i_1541_, v_a_1543_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___boxed(lean_object* v_fst_1550_, lean_object* v_fst_1551_, lean_object* v_n_1552_, lean_object* v_i_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(v_fst_1550_, v_fst_1551_, v_n_1552_, v_i_1553_, v_a_1554_, v_a_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v_n_1552_);
lean_dec_ref(v_fst_1551_);
lean_dec_ref(v_fst_1550_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(lean_object* v_mvarId_1562_, lean_object* v_val_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_mvarId_1562_, v_val_1563_, v___y_1565_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___boxed(lean_object* v_mvarId_1570_, lean_object* v_val_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(v_mvarId_1570_, v_val_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(lean_object* v_00_u03b1_1578_, lean_object* v_name_1579_, uint8_t v_bi_1580_, lean_object* v_type_1581_, lean_object* v_k_1582_, uint8_t v_kind_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(v_name_1579_, v_bi_1580_, v_type_1581_, v_k_1582_, v_kind_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1590_, lean_object* v_name_1591_, lean_object* v_bi_1592_, lean_object* v_type_1593_, lean_object* v_k_1594_, lean_object* v_kind_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
uint8_t v_bi_boxed_1601_; uint8_t v_kind_boxed_1602_; lean_object* v_res_1603_; 
v_bi_boxed_1601_ = lean_unbox(v_bi_1592_);
v_kind_boxed_1602_ = lean_unbox(v_kind_1595_);
v_res_1603_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(v_00_u03b1_1590_, v_name_1591_, v_bi_boxed_1601_, v_type_1593_, v_k_1594_, v_kind_boxed_1602_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(lean_object* v_00_u03b1_1604_, lean_object* v_name_1605_, lean_object* v_type_1606_, lean_object* v_k_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v_name_1605_, v_type_1606_, v_k_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___boxed(lean_object* v_00_u03b1_1614_, lean_object* v_name_1615_, lean_object* v_type_1616_, lean_object* v_k_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(v_00_u03b1_1614_, v_name_1615_, v_type_1616_, v_k_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5(lean_object* v_00_u03b2_1624_, lean_object* v_x_1625_, lean_object* v_x_1626_, lean_object* v_x_1627_){
_start:
{
lean_object* v___x_1628_; 
v___x_1628_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(v_x_1625_, v_x_1626_, v_x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(lean_object* v_00_u03b2_1629_, lean_object* v_x_1630_, size_t v_x_1631_, size_t v_x_1632_, lean_object* v_x_1633_, lean_object* v_x_1634_){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_1630_, v_x_1631_, v_x_1632_, v_x_1633_, v_x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1636_, lean_object* v_x_1637_, lean_object* v_x_1638_, lean_object* v_x_1639_, lean_object* v_x_1640_, lean_object* v_x_1641_){
_start:
{
size_t v_x_30777__boxed_1642_; size_t v_x_30778__boxed_1643_; lean_object* v_res_1644_; 
v_x_30777__boxed_1642_ = lean_unbox_usize(v_x_1638_);
lean_dec(v_x_1638_);
v_x_30778__boxed_1643_ = lean_unbox_usize(v_x_1639_);
lean_dec(v_x_1639_);
v_res_1644_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(v_00_u03b2_1636_, v_x_1637_, v_x_30777__boxed_1642_, v_x_30778__boxed_1643_, v_x_1640_, v_x_1641_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13(lean_object* v_00_u03b2_1645_, lean_object* v_n_1646_, lean_object* v_k_1647_, lean_object* v_v_1648_){
_start:
{
lean_object* v___x_1649_; 
v___x_1649_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(v_n_1646_, v_k_1647_, v_v_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(lean_object* v_00_u03b2_1650_, size_t v_depth_1651_, lean_object* v_keys_1652_, lean_object* v_vals_1653_, lean_object* v_heq_1654_, lean_object* v_i_1655_, lean_object* v_entries_1656_){
_start:
{
lean_object* v___x_1657_; 
v___x_1657_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(v_depth_1651_, v_keys_1652_, v_vals_1653_, v_i_1655_, v_entries_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1658_, lean_object* v_depth_1659_, lean_object* v_keys_1660_, lean_object* v_vals_1661_, lean_object* v_heq_1662_, lean_object* v_i_1663_, lean_object* v_entries_1664_){
_start:
{
size_t v_depth_boxed_1665_; lean_object* v_res_1666_; 
v_depth_boxed_1665_ = lean_unbox_usize(v_depth_1659_);
lean_dec(v_depth_1659_);
v_res_1666_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(v_00_u03b2_1658_, v_depth_boxed_1665_, v_keys_1660_, v_vals_1661_, v_heq_1662_, v_i_1663_, v_entries_1664_);
lean_dec_ref(v_vals_1661_);
lean_dec_ref(v_keys_1660_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14(lean_object* v_00_u03b2_1667_, lean_object* v_x_1668_, lean_object* v_x_1669_, lean_object* v_x_1670_, lean_object* v_x_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(v_x_1668_, v_x_1669_, v_x_1670_, v_x_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object* v_fvarId_1676_, lean_object* v_mvarId_1677_, uint8_t v_tryToClear_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___x_1687_; 
lean_inc(v_fvarId_1676_);
v___x_1687_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1676_, v___y_1679_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1687_, 1);
v___x_1689_ = l_Lean_LocalDecl_type(v_a_1688_);
lean_inc(v___y_1682_);
lean_inc_ref(v___y_1681_);
lean_inc(v___y_1680_);
lean_inc_ref(v___y_1679_);
v___x_1690_ = lean_whnf(v___x_1689_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___x_1694_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_1693_ = lean_unsigned_to_nat(4u);
v___x_1694_ = l_Lean_Expr_isAppOfArity(v_a_1691_, v___x_1692_, v___x_1693_);
if (v___x_1694_ == 0)
{
lean_dec(v_a_1691_);
lean_dec(v_a_1688_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
goto v___jp_1684_;
}
else
{
lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1695_ = l_Lean_Expr_appFn_x21(v_a_1691_);
v___x_1696_ = l_Lean_Expr_appFn_x21(v___x_1695_);
v___x_1697_ = l_Lean_Expr_appFn_x21(v___x_1696_);
v___x_1698_ = l_Lean_Expr_appArg_x21(v___x_1697_);
lean_dec_ref(v___x_1697_);
v___x_1699_ = l_Lean_Expr_appArg_x21(v___x_1696_);
lean_dec_ref(v___x_1696_);
v___x_1700_ = l_Lean_Expr_appArg_x21(v___x_1695_);
lean_dec_ref(v___x_1695_);
v___x_1701_ = l_Lean_Expr_appArg_x21(v_a_1691_);
lean_dec(v_a_1691_);
v___x_1702_ = l_Lean_Meta_isExprDefEq(v___x_1698_, v___x_1700_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v_a_1703_; uint8_t v___x_1704_; 
v_a_1703_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_a_1703_);
lean_dec_ref_known(v___x_1702_, 1);
v___x_1704_ = lean_unbox(v_a_1703_);
if (v___x_1704_ == 0)
{
lean_dec(v_a_1703_);
lean_dec_ref(v___x_1701_);
lean_dec_ref(v___x_1699_);
lean_dec(v_a_1688_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
goto v___jp_1684_;
}
else
{
lean_object* v___x_1705_; uint8_t v___x_1706_; lean_object* v___x_1707_; 
lean_inc(v_fvarId_1676_);
v___x_1705_ = l_Lean_mkFVar(v_fvarId_1676_);
v___x_1706_ = lean_unbox(v_a_1703_);
v___x_1707_ = l_Lean_Meta_mkEqOfHEq(v___x_1705_, v___x_1706_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_object* v_a_1708_; lean_object* v___x_1709_; 
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
lean_inc(v_a_1708_);
lean_dec_ref_known(v___x_1707_, 1);
v___x_1709_ = l_Lean_Meta_mkEq(v___x_1699_, v___x_1701_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v___x_1709_, 1);
v___x_1711_ = l_Lean_LocalDecl_userName(v_a_1688_);
lean_dec(v_a_1688_);
v___x_1712_ = l_Lean_MVarId_assert(v_mvarId_1677_, v___x_1711_, v_a_1710_, v_a_1708_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1712_) == 0)
{
if (v_tryToClear_1678_ == 0)
{
lean_object* v_a_1713_; uint8_t v___x_1714_; lean_object* v___x_1715_; 
lean_dec(v_fvarId_1676_);
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___x_1712_, 1);
v___x_1714_ = lean_unbox(v_a_1703_);
lean_dec(v_a_1703_);
v___x_1715_ = l_Lean_Meta_intro1Core(v_a_1713_, v___x_1714_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
return v___x_1715_;
}
else
{
lean_object* v_a_1716_; lean_object* v___x_1717_; 
v_a_1716_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_a_1716_);
lean_dec_ref_known(v___x_1712_, 1);
v___x_1717_ = l_Lean_MVarId_tryClear(v_a_1716_, v_fvarId_1676_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1717_) == 0)
{
lean_object* v_a_1718_; uint8_t v___x_1719_; lean_object* v___x_1720_; 
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
lean_inc(v_a_1718_);
lean_dec_ref_known(v___x_1717_, 1);
v___x_1719_ = lean_unbox(v_a_1703_);
lean_dec(v_a_1703_);
v___x_1720_ = l_Lean_Meta_intro1Core(v_a_1718_, v___x_1719_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
return v___x_1720_;
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec(v_a_1703_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
v_a_1721_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1717_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1717_);
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
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec(v_a_1703_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v_fvarId_1676_);
v_a_1729_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1712_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1712_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
lean_dec(v_a_1708_);
lean_dec(v_a_1703_);
lean_dec(v_a_1688_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v_mvarId_1677_);
lean_dec(v_fvarId_1676_);
v_a_1737_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1709_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1709_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1752_; 
lean_dec(v_a_1703_);
lean_dec_ref(v___x_1701_);
lean_dec_ref(v___x_1699_);
lean_dec(v_a_1688_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v_mvarId_1677_);
lean_dec(v_fvarId_1676_);
v_a_1745_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1747_ = v___x_1707_;
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_a_1745_);
lean_dec(v___x_1707_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1752_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1750_; 
if (v_isShared_1748_ == 0)
{
v___x_1750_ = v___x_1747_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1745_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_dec_ref(v___x_1701_);
lean_dec_ref(v___x_1699_);
lean_dec(v_a_1688_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v_mvarId_1677_);
lean_dec(v_fvarId_1676_);
v_a_1753_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1702_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1702_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1768_; 
lean_dec(v_a_1688_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v_mvarId_1677_);
lean_dec(v_fvarId_1676_);
v_a_1761_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1763_ = v___x_1690_;
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1690_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v_mvarId_1677_);
lean_dec(v_fvarId_1676_);
v_a_1769_ = lean_ctor_get(v___x_1687_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1687_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1687_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1687_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
v___jp_1684_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1685_, 0, v_fvarId_1676_);
lean_ctor_set(v___x_1685_, 1, v_mvarId_1677_);
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
return v___x_1686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object* v_fvarId_1777_, lean_object* v_mvarId_1778_, lean_object* v_tryToClear_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
uint8_t v_tryToClear_boxed_1785_; lean_object* v_res_1786_; 
v_tryToClear_boxed_1785_ = lean_unbox(v_tryToClear_1779_);
v_res_1786_ = l_Lean_Meta_heqToEq___lam__0(v_fvarId_1777_, v_mvarId_1778_, v_tryToClear_boxed_1785_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object* v_mvarId_1787_, lean_object* v_fvarId_1788_, uint8_t v_tryToClear_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
lean_object* v___x_1795_; lean_object* v___f_1796_; lean_object* v___x_1797_; 
v___x_1795_ = lean_box(v_tryToClear_1789_);
lean_inc(v_mvarId_1787_);
v___f_1796_ = lean_alloc_closure((void*)(l_Lean_Meta_heqToEq___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1796_, 0, v_fvarId_1788_);
lean_closure_set(v___f_1796_, 1, v_mvarId_1787_);
lean_closure_set(v___f_1796_, 2, v___x_1795_);
v___x_1797_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1787_, v___f_1796_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object* v_mvarId_1798_, lean_object* v_fvarId_1799_, lean_object* v_tryToClear_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_){
_start:
{
uint8_t v_tryToClear_boxed_1806_; lean_object* v_res_1807_; 
v_tryToClear_boxed_1806_ = lean_unbox(v_tryToClear_1800_);
v_res_1807_ = l_Lean_Meta_heqToEq(v_mvarId_1798_, v_fvarId_1799_, v_tryToClear_boxed_1806_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_);
lean_dec(v_a_1804_);
lean_dec_ref(v_a_1803_);
lean_dec(v_a_1802_);
lean_dec_ref(v_a_1801_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_1811_, lean_object* v_as_1812_, size_t v_sz_1813_, size_t v_i_1814_, lean_object* v_b_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_a_1822_; uint8_t v___x_1826_; 
v___x_1826_ = lean_usize_dec_lt(v_i_1814_, v_sz_1813_);
if (v___x_1826_ == 0)
{
lean_object* v___x_1827_; 
lean_dec(v_x_1811_);
v___x_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1827_, 0, v_b_1815_);
return v___x_1827_;
}
else
{
lean_object* v___x_1828_; lean_object* v_a_1830_; lean_object* v___x_1834_; lean_object* v_a_1835_; 
lean_dec_ref(v_b_1815_);
v___x_1828_ = lean_box(0);
v___x_1834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1835_ = lean_array_uget(v_as_1812_, v_i_1814_);
if (lean_obj_tag(v_a_1835_) == 0)
{
v_a_1822_ = v___x_1834_;
goto v___jp_1821_;
}
else
{
lean_object* v_val_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1935_; 
v_val_1836_ = lean_ctor_get(v_a_1835_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_a_1835_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1838_ = v_a_1835_;
v_isShared_1839_ = v_isSharedCheck_1935_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_val_1836_);
lean_dec(v_a_1835_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1935_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
uint8_t v___x_1840_; 
v___x_1840_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1836_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = l_Lean_LocalDecl_type(v_val_1836_);
v___x_1842_ = l_Lean_Meta_matchEq_x3f(v___x_1841_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
lean_inc(v_a_1843_);
lean_dec_ref_known(v___x_1842_, 1);
if (lean_obj_tag(v_a_1843_) == 1)
{
lean_object* v_val_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1926_; 
v_val_1844_ = lean_ctor_get(v_a_1843_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_a_1843_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1846_ = v_a_1843_;
v_isShared_1847_ = v_isSharedCheck_1926_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_val_1844_);
lean_dec(v_a_1843_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1926_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v_snd_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1924_; 
v_snd_1848_ = lean_ctor_get(v_val_1844_, 1);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_val_1844_);
if (v_isSharedCheck_1924_ == 0)
{
lean_object* v_unused_1925_; 
v_unused_1925_ = lean_ctor_get(v_val_1844_, 0);
lean_dec(v_unused_1925_);
v___x_1850_ = v_val_1844_;
v_isShared_1851_ = v_isSharedCheck_1924_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_snd_1848_);
lean_dec(v_val_1844_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1924_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v_fst_1852_; lean_object* v_snd_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1923_; 
v_fst_1852_ = lean_ctor_get(v_snd_1848_, 0);
v_snd_1853_ = lean_ctor_get(v_snd_1848_, 1);
v_isSharedCheck_1923_ = !lean_is_exclusive(v_snd_1848_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1855_ = v_snd_1848_;
v_isShared_1856_ = v_isSharedCheck_1923_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_snd_1853_);
lean_inc(v_fst_1852_);
lean_dec(v_snd_1848_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1923_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; 
v___x_1857_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_1852_, v___y_1817_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; lean_object* v___x_1859_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref_known(v___x_1857_, 1);
v___x_1859_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_1853_, v___y_1817_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___y_1862_; uint8_t v___x_1885_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_a_1860_);
lean_dec_ref_known(v___x_1859_, 1);
v___x_1885_ = l_Lean_Expr_isFVar(v_a_1860_);
if (v___x_1885_ == 0)
{
lean_del_object(v___x_1850_);
lean_del_object(v___x_1838_);
v___y_1862_ = v___y_1817_;
goto v___jp_1861_;
}
else
{
lean_object* v___x_1886_; uint8_t v___x_1887_; 
v___x_1886_ = l_Lean_Expr_fvarId_x21(v_a_1860_);
v___x_1887_ = l_Lean_instBEqFVarId_beq(v___x_1886_, v_x_1811_);
lean_dec(v___x_1886_);
if (v___x_1887_ == 0)
{
lean_del_object(v___x_1850_);
lean_del_object(v___x_1838_);
v___y_1862_ = v___y_1817_;
goto v___jp_1861_;
}
else
{
lean_object* v___x_1888_; 
lean_inc(v_x_1811_);
lean_inc(v_a_1858_);
v___x_1888_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1858_, v_x_1811_, v___y_1817_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; uint8_t v___x_1890_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
lean_inc(v_a_1889_);
lean_dec_ref_known(v___x_1888_, 1);
v___x_1890_ = lean_unbox(v_a_1889_);
lean_dec(v_a_1889_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1894_; 
lean_dec(v_a_1860_);
lean_dec(v_a_1858_);
lean_del_object(v___x_1855_);
lean_del_object(v___x_1846_);
lean_dec(v_x_1811_);
v___x_1891_ = l_Lean_LocalDecl_fvarId(v_val_1836_);
lean_dec(v_val_1836_);
v___x_1892_ = lean_box(v___x_1887_);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 1, v___x_1892_);
lean_ctor_set(v___x_1850_, 0, v___x_1891_);
v___x_1894_ = v___x_1850_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1898_; 
v_reuseFailAlloc_1898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1898_, 0, v___x_1891_);
lean_ctor_set(v_reuseFailAlloc_1898_, 1, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1898_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
lean_object* v___x_1896_; 
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1894_);
v___x_1896_ = v___x_1838_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1894_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
v_a_1830_ = v___x_1896_;
goto v___jp_1829_;
}
}
}
else
{
lean_del_object(v___x_1850_);
lean_del_object(v___x_1838_);
v___y_1862_ = v___y_1817_;
goto v___jp_1861_;
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
lean_dec(v_a_1860_);
lean_dec(v_a_1858_);
lean_del_object(v___x_1855_);
lean_del_object(v___x_1850_);
lean_del_object(v___x_1846_);
lean_del_object(v___x_1838_);
lean_dec(v_val_1836_);
lean_dec(v_x_1811_);
v_a_1899_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v___x_1888_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1888_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
}
v___jp_1861_:
{
uint8_t v___x_1863_; 
v___x_1863_ = l_Lean_Expr_isFVar(v_a_1858_);
if (v___x_1863_ == 0)
{
lean_dec(v_a_1860_);
lean_dec(v_a_1858_);
lean_del_object(v___x_1855_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1836_);
v_a_1822_ = v___x_1834_;
goto v___jp_1821_;
}
else
{
lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = l_Lean_Expr_fvarId_x21(v_a_1858_);
lean_dec(v_a_1858_);
v___x_1865_ = l_Lean_instBEqFVarId_beq(v___x_1864_, v_x_1811_);
lean_dec(v___x_1864_);
if (v___x_1865_ == 0)
{
lean_dec(v_a_1860_);
lean_del_object(v___x_1855_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1836_);
v_a_1822_ = v___x_1834_;
goto v___jp_1821_;
}
else
{
lean_object* v___x_1866_; 
lean_inc(v_x_1811_);
v___x_1866_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1860_, v_x_1811_, v___y_1862_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; uint8_t v___x_1868_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
lean_dec_ref_known(v___x_1866_, 1);
v___x_1868_ = lean_unbox(v_a_1867_);
lean_dec(v_a_1867_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1872_; 
lean_dec(v_x_1811_);
v___x_1869_ = l_Lean_LocalDecl_fvarId(v_val_1836_);
lean_dec(v_val_1836_);
v___x_1870_ = lean_box(v___x_1840_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 1, v___x_1870_);
lean_ctor_set(v___x_1855_, 0, v___x_1869_);
v___x_1872_ = v___x_1855_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v___x_1869_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v___x_1870_);
v___x_1872_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
lean_object* v___x_1874_; 
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v___x_1872_);
v___x_1874_ = v___x_1846_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
v_a_1830_ = v___x_1874_;
goto v___jp_1829_;
}
}
}
else
{
lean_del_object(v___x_1855_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1836_);
v_a_1822_ = v___x_1834_;
goto v___jp_1821_;
}
}
else
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
lean_del_object(v___x_1855_);
lean_del_object(v___x_1846_);
lean_dec(v_val_1836_);
lean_dec(v_x_1811_);
v_a_1877_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v___x_1866_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1866_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec(v_a_1858_);
lean_del_object(v___x_1855_);
lean_del_object(v___x_1850_);
lean_del_object(v___x_1846_);
lean_del_object(v___x_1838_);
lean_dec(v_val_1836_);
lean_dec(v_x_1811_);
v_a_1907_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1859_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1859_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
lean_del_object(v___x_1855_);
lean_dec(v_snd_1853_);
lean_del_object(v___x_1850_);
lean_del_object(v___x_1846_);
lean_del_object(v___x_1838_);
lean_dec(v_val_1836_);
lean_dec(v_x_1811_);
v_a_1915_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1857_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1857_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1843_);
lean_del_object(v___x_1838_);
lean_dec(v_val_1836_);
v_a_1822_ = v___x_1834_;
goto v___jp_1821_;
}
}
else
{
lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1934_; 
lean_del_object(v___x_1838_);
lean_dec(v_val_1836_);
lean_dec(v_x_1811_);
v_a_1927_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1929_ = v___x_1842_;
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1842_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1932_; 
if (v_isShared_1930_ == 0)
{
v___x_1932_ = v___x_1929_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1927_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
else
{
lean_del_object(v___x_1838_);
lean_dec(v_val_1836_);
v_a_1822_ = v___x_1834_;
goto v___jp_1821_;
}
}
}
v___jp_1829_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1831_, 0, v_a_1830_);
v___x_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
lean_ctor_set(v___x_1832_, 1, v___x_1828_);
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1832_);
return v___x_1833_;
}
}
v___jp_1821_:
{
size_t v___x_1823_; size_t v___x_1824_; 
v___x_1823_ = ((size_t)1ULL);
v___x_1824_ = lean_usize_add(v_i_1814_, v___x_1823_);
lean_inc_ref(v_a_1822_);
v_i_1814_ = v___x_1824_;
v_b_1815_ = v_a_1822_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_1936_, lean_object* v_as_1937_, lean_object* v_sz_1938_, lean_object* v_i_1939_, lean_object* v_b_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
size_t v_sz_boxed_1946_; size_t v_i_boxed_1947_; lean_object* v_res_1948_; 
v_sz_boxed_1946_ = lean_unbox_usize(v_sz_1938_);
lean_dec(v_sz_1938_);
v_i_boxed_1947_ = lean_unbox_usize(v_i_1939_);
lean_dec(v_i_1939_);
v_res_1948_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1936_, v_as_1937_, v_sz_boxed_1946_, v_i_boxed_1947_, v_b_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
lean_dec_ref(v_as_1937_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object* v_x_1949_, lean_object* v_as_1950_, size_t v_sz_1951_, size_t v_i_1952_, lean_object* v_b_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_){
_start:
{
lean_object* v_a_1960_; uint8_t v___x_1964_; 
v___x_1964_ = lean_usize_dec_lt(v_i_1952_, v_sz_1951_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
lean_dec(v_x_1949_);
v___x_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_b_1953_);
return v___x_1965_;
}
else
{
lean_object* v___x_1966_; lean_object* v_a_1968_; lean_object* v___x_1972_; lean_object* v_a_1973_; 
lean_dec_ref(v_b_1953_);
v___x_1966_ = lean_box(0);
v___x_1972_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1973_ = lean_array_uget(v_as_1950_, v_i_1952_);
if (lean_obj_tag(v_a_1973_) == 0)
{
v_a_1960_ = v___x_1972_;
goto v___jp_1959_;
}
else
{
lean_object* v_val_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_2073_; 
v_val_1974_ = lean_ctor_get(v_a_1973_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v_a_1973_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_1976_ = v_a_1973_;
v_isShared_1977_ = v_isSharedCheck_2073_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_val_1974_);
lean_dec(v_a_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_2073_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
uint8_t v___x_1978_; 
v___x_1978_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1974_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1979_ = l_Lean_LocalDecl_type(v_val_1974_);
v___x_1980_ = l_Lean_Meta_matchEq_x3f(v___x_1979_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1981_);
lean_dec_ref_known(v___x_1980_, 1);
if (lean_obj_tag(v_a_1981_) == 1)
{
lean_object* v_val_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2064_; 
v_val_1982_ = lean_ctor_get(v_a_1981_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_a_1981_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_1984_ = v_a_1981_;
v_isShared_1985_ = v_isSharedCheck_2064_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_val_1982_);
lean_dec(v_a_1981_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2064_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v_snd_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2062_; 
v_snd_1986_ = lean_ctor_get(v_val_1982_, 1);
v_isSharedCheck_2062_ = !lean_is_exclusive(v_val_1982_);
if (v_isSharedCheck_2062_ == 0)
{
lean_object* v_unused_2063_; 
v_unused_2063_ = lean_ctor_get(v_val_1982_, 0);
lean_dec(v_unused_2063_);
v___x_1988_ = v_val_1982_;
v_isShared_1989_ = v_isSharedCheck_2062_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_snd_1986_);
lean_dec(v_val_1982_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2062_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v_fst_1990_; lean_object* v_snd_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2061_; 
v_fst_1990_ = lean_ctor_get(v_snd_1986_, 0);
v_snd_1991_ = lean_ctor_get(v_snd_1986_, 1);
v_isSharedCheck_2061_ = !lean_is_exclusive(v_snd_1986_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_1993_ = v_snd_1986_;
v_isShared_1994_ = v_isSharedCheck_2061_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_snd_1991_);
lean_inc(v_fst_1990_);
lean_dec(v_snd_1986_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2061_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_1990_, v___y_1955_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; lean_object* v___x_1997_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_1996_);
lean_dec_ref_known(v___x_1995_, 1);
v___x_1997_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_1991_, v___y_1955_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___y_2000_; uint8_t v___x_2023_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
lean_dec_ref_known(v___x_1997_, 1);
v___x_2023_ = l_Lean_Expr_isFVar(v_a_1998_);
if (v___x_2023_ == 0)
{
lean_del_object(v___x_1988_);
lean_del_object(v___x_1976_);
v___y_2000_ = v___y_1955_;
goto v___jp_1999_;
}
else
{
lean_object* v___x_2024_; uint8_t v___x_2025_; 
v___x_2024_ = l_Lean_Expr_fvarId_x21(v_a_1998_);
v___x_2025_ = l_Lean_instBEqFVarId_beq(v___x_2024_, v_x_1949_);
lean_dec(v___x_2024_);
if (v___x_2025_ == 0)
{
lean_del_object(v___x_1988_);
lean_del_object(v___x_1976_);
v___y_2000_ = v___y_1955_;
goto v___jp_1999_;
}
else
{
lean_object* v___x_2026_; 
lean_inc(v_x_1949_);
lean_inc(v_a_1996_);
v___x_2026_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1996_, v_x_1949_, v___y_1955_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v_a_2027_; uint8_t v___x_2028_; 
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
lean_inc(v_a_2027_);
lean_dec_ref_known(v___x_2026_, 1);
v___x_2028_ = lean_unbox(v_a_2027_);
lean_dec(v_a_2027_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2032_; 
lean_dec(v_a_1998_);
lean_dec(v_a_1996_);
lean_del_object(v___x_1993_);
lean_del_object(v___x_1984_);
lean_dec(v_x_1949_);
v___x_2029_ = l_Lean_LocalDecl_fvarId(v_val_1974_);
lean_dec(v_val_1974_);
v___x_2030_ = lean_box(v___x_2025_);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 1, v___x_2030_);
lean_ctor_set(v___x_1988_, 0, v___x_2029_);
v___x_2032_ = v___x_1988_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2029_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___x_2030_);
v___x_2032_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2034_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v___x_2032_);
v___x_2034_ = v___x_1976_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
v_a_1968_ = v___x_2034_;
goto v___jp_1967_;
}
}
}
else
{
lean_del_object(v___x_1988_);
lean_del_object(v___x_1976_);
v___y_2000_ = v___y_1955_;
goto v___jp_1999_;
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
lean_dec(v_a_1998_);
lean_dec(v_a_1996_);
lean_del_object(v___x_1993_);
lean_del_object(v___x_1988_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1976_);
lean_dec(v_val_1974_);
lean_dec(v_x_1949_);
v_a_2037_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2039_ = v___x_2026_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_2026_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_a_2037_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
}
}
v___jp_1999_:
{
uint8_t v___x_2001_; 
v___x_2001_ = l_Lean_Expr_isFVar(v_a_1996_);
if (v___x_2001_ == 0)
{
lean_dec(v_a_1998_);
lean_dec(v_a_1996_);
lean_del_object(v___x_1993_);
lean_del_object(v___x_1984_);
lean_dec(v_val_1974_);
v_a_1960_ = v___x_1972_;
goto v___jp_1959_;
}
else
{
lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_2002_ = l_Lean_Expr_fvarId_x21(v_a_1996_);
lean_dec(v_a_1996_);
v___x_2003_ = l_Lean_instBEqFVarId_beq(v___x_2002_, v_x_1949_);
lean_dec(v___x_2002_);
if (v___x_2003_ == 0)
{
lean_dec(v_a_1998_);
lean_del_object(v___x_1993_);
lean_del_object(v___x_1984_);
lean_dec(v_val_1974_);
v_a_1960_ = v___x_1972_;
goto v___jp_1959_;
}
else
{
lean_object* v___x_2004_; 
lean_inc(v_x_1949_);
v___x_2004_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1998_, v_x_1949_, v___y_2000_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; uint8_t v___x_2006_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
lean_inc(v_a_2005_);
lean_dec_ref_known(v___x_2004_, 1);
v___x_2006_ = lean_unbox(v_a_2005_);
lean_dec(v_a_2005_);
if (v___x_2006_ == 0)
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2010_; 
lean_dec(v_x_1949_);
v___x_2007_ = l_Lean_LocalDecl_fvarId(v_val_1974_);
lean_dec(v_val_1974_);
v___x_2008_ = lean_box(v___x_1978_);
if (v_isShared_1994_ == 0)
{
lean_ctor_set(v___x_1993_, 1, v___x_2008_);
lean_ctor_set(v___x_1993_, 0, v___x_2007_);
v___x_2010_ = v___x_1993_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v___x_2007_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2012_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 0, v___x_2010_);
v___x_2012_ = v___x_1984_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_2010_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
v_a_1968_ = v___x_2012_;
goto v___jp_1967_;
}
}
}
else
{
lean_del_object(v___x_1993_);
lean_del_object(v___x_1984_);
lean_dec(v_val_1974_);
v_a_1960_ = v___x_1972_;
goto v___jp_1959_;
}
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
lean_del_object(v___x_1993_);
lean_del_object(v___x_1984_);
lean_dec(v_val_1974_);
lean_dec(v_x_1949_);
v_a_2015_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_2004_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2004_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_dec(v_a_1996_);
lean_del_object(v___x_1993_);
lean_del_object(v___x_1988_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1976_);
lean_dec(v_val_1974_);
lean_dec(v_x_1949_);
v_a_2045_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_1997_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_1997_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
else
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
lean_del_object(v___x_1993_);
lean_dec(v_snd_1991_);
lean_del_object(v___x_1988_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1976_);
lean_dec(v_val_1974_);
lean_dec(v_x_1949_);
v_a_2053_ = lean_ctor_get(v___x_1995_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v___x_1995_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_1995_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2053_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1981_);
lean_del_object(v___x_1976_);
lean_dec(v_val_1974_);
v_a_1960_ = v___x_1972_;
goto v___jp_1959_;
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
lean_del_object(v___x_1976_);
lean_dec(v_val_1974_);
lean_dec(v_x_1949_);
v_a_2065_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_1980_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_1980_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
}
else
{
lean_del_object(v___x_1976_);
lean_dec(v_val_1974_);
v_a_1960_ = v___x_1972_;
goto v___jp_1959_;
}
}
}
v___jp_1967_:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1969_, 0, v_a_1968_);
v___x_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1969_);
lean_ctor_set(v___x_1970_, 1, v___x_1966_);
v___x_1971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
return v___x_1971_;
}
}
v___jp_1959_:
{
size_t v___x_1961_; size_t v___x_1962_; lean_object* v___x_1963_; 
v___x_1961_ = ((size_t)1ULL);
v___x_1962_ = lean_usize_add(v_i_1952_, v___x_1961_);
lean_inc_ref(v_a_1960_);
v___x_1963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1949_, v_as_1950_, v_sz_1951_, v___x_1962_, v_a_1960_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
return v___x_1963_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2074_, lean_object* v_as_2075_, lean_object* v_sz_2076_, lean_object* v_i_2077_, lean_object* v_b_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
size_t v_sz_boxed_2084_; size_t v_i_boxed_2085_; lean_object* v_res_2086_; 
v_sz_boxed_2084_ = lean_unbox_usize(v_sz_2076_);
lean_dec(v_sz_2076_);
v_i_boxed_2085_ = lean_unbox_usize(v_i_2077_);
lean_dec(v_i_2077_);
v_res_2086_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2074_, v_as_2075_, v_sz_boxed_2084_, v_i_boxed_2085_, v_b_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec_ref(v_as_2075_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object* v_x_2087_, lean_object* v_x_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
if (lean_obj_tag(v_x_2088_) == 0)
{
lean_object* v_cs_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; size_t v_sz_2097_; size_t v___x_2098_; lean_object* v___x_2099_; 
v_cs_2094_ = lean_ctor_get(v_x_2088_, 0);
v___x_2095_ = lean_box(0);
v___x_2096_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2097_ = lean_array_size(v_cs_2094_);
v___x_2098_ = ((size_t)0ULL);
v___x_2099_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2087_, v_cs_2094_, v_sz_2097_, v___x_2098_, v___x_2096_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2112_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2102_ = v___x_2099_;
v_isShared_2103_ = v_isSharedCheck_2112_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2112_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v_fst_2104_; 
v_fst_2104_ = lean_ctor_get(v_a_2100_, 0);
lean_inc(v_fst_2104_);
lean_dec(v_a_2100_);
if (lean_obj_tag(v_fst_2104_) == 0)
{
lean_object* v___x_2106_; 
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2095_);
v___x_2106_ = v___x_2102_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v___x_2095_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
else
{
lean_object* v_val_2108_; lean_object* v___x_2110_; 
v_val_2108_ = lean_ctor_get(v_fst_2104_, 0);
lean_inc(v_val_2108_);
lean_dec_ref_known(v_fst_2104_, 1);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v_val_2108_);
v___x_2110_ = v___x_2102_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_val_2108_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
v_a_2113_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2099_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2099_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_object* v_vs_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; size_t v_sz_2124_; size_t v___x_2125_; lean_object* v___x_2126_; 
v_vs_2121_ = lean_ctor_get(v_x_2088_, 0);
v___x_2122_ = lean_box(0);
v___x_2123_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2124_ = lean_array_size(v_vs_2121_);
v___x_2125_ = ((size_t)0ULL);
v___x_2126_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2087_, v_vs_2121_, v_sz_2124_, v___x_2125_, v___x_2123_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2139_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2129_ = v___x_2126_;
v_isShared_2130_ = v_isSharedCheck_2139_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2126_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2139_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v_fst_2131_; 
v_fst_2131_ = lean_ctor_get(v_a_2127_, 0);
lean_inc(v_fst_2131_);
lean_dec(v_a_2127_);
if (lean_obj_tag(v_fst_2131_) == 0)
{
lean_object* v___x_2133_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v___x_2122_);
v___x_2133_ = v___x_2129_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2122_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
else
{
lean_object* v_val_2135_; lean_object* v___x_2137_; 
v_val_2135_ = lean_ctor_get(v_fst_2131_, 0);
lean_inc(v_val_2135_);
lean_dec_ref_known(v_fst_2131_, 1);
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v_val_2135_);
v___x_2137_ = v___x_2129_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_val_2135_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
v_a_2140_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2126_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2126_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2148_, lean_object* v_as_2149_, size_t v_sz_2150_, size_t v_i_2151_, lean_object* v_b_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
uint8_t v___x_2158_; 
v___x_2158_ = lean_usize_dec_lt(v_i_2151_, v_sz_2150_);
if (v___x_2158_ == 0)
{
lean_object* v___x_2159_; 
lean_dec(v_x_2148_);
v___x_2159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2159_, 0, v_b_2152_);
return v___x_2159_;
}
else
{
lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v_a_2162_; lean_object* v___x_2163_; 
lean_dec_ref(v_b_2152_);
v___x_2160_ = lean_box(0);
v___x_2161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_2162_ = lean_array_uget_borrowed(v_as_2149_, v_i_2151_);
lean_inc(v_x_2148_);
v___x_2163_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2148_, v_a_2162_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2176_; 
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2166_ = v___x_2163_;
v_isShared_2167_ = v_isSharedCheck_2176_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2163_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2176_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
if (lean_obj_tag(v_a_2164_) == 1)
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2171_; 
lean_dec(v_x_2148_);
v___x_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2168_, 0, v_a_2164_);
v___x_2169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2168_);
lean_ctor_set(v___x_2169_, 1, v___x_2160_);
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 0, v___x_2169_);
v___x_2171_ = v___x_2166_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2169_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
else
{
size_t v___x_2173_; size_t v___x_2174_; 
lean_del_object(v___x_2166_);
lean_dec(v_a_2164_);
v___x_2173_ = ((size_t)1ULL);
v___x_2174_ = lean_usize_add(v_i_2151_, v___x_2173_);
v_i_2151_ = v___x_2174_;
v_b_2152_ = v___x_2161_;
goto _start;
}
}
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_dec(v_x_2148_);
v_a_2177_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2163_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2163_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_x_2185_, lean_object* v_as_2186_, lean_object* v_sz_2187_, lean_object* v_i_2188_, lean_object* v_b_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
size_t v_sz_boxed_2195_; size_t v_i_boxed_2196_; lean_object* v_res_2197_; 
v_sz_boxed_2195_ = lean_unbox_usize(v_sz_2187_);
lean_dec(v_sz_2187_);
v_i_boxed_2196_ = lean_unbox_usize(v_i_2188_);
lean_dec(v_i_2188_);
v_res_2197_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2185_, v_as_2186_, v_sz_boxed_2195_, v_i_boxed_2196_, v_b_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec_ref(v_as_2186_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object* v_x_2198_, lean_object* v_x_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2198_, v_x_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
lean_dec(v___y_2203_);
lean_dec_ref(v___y_2202_);
lean_dec(v___y_2201_);
lean_dec_ref(v___y_2200_);
lean_dec_ref(v_x_2199_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object* v_x_2206_, lean_object* v_t_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v_root_2213_; lean_object* v_tail_2214_; lean_object* v___x_2215_; 
v_root_2213_ = lean_ctor_get(v_t_2207_, 0);
v_tail_2214_ = lean_ctor_get(v_t_2207_, 1);
lean_inc(v_x_2206_);
v___x_2215_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2206_, v_root_2213_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
if (lean_obj_tag(v___x_2215_) == 0)
{
lean_object* v_a_2216_; 
v_a_2216_ = lean_ctor_get(v___x_2215_, 0);
if (lean_obj_tag(v_a_2216_) == 0)
{
lean_object* v___x_2217_; size_t v_sz_2218_; size_t v___x_2219_; lean_object* v___x_2220_; 
lean_inc(v_a_2216_);
lean_dec_ref_known(v___x_2215_, 1);
v___x_2217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2218_ = lean_array_size(v_tail_2214_);
v___x_2219_ = ((size_t)0ULL);
v___x_2220_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2206_, v_tail_2214_, v_sz_2218_, v___x_2219_, v___x_2217_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2233_; 
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2223_ = v___x_2220_;
v_isShared_2224_ = v_isSharedCheck_2233_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2220_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2233_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v_fst_2225_; 
v_fst_2225_ = lean_ctor_get(v_a_2221_, 0);
lean_inc(v_fst_2225_);
lean_dec(v_a_2221_);
if (lean_obj_tag(v_fst_2225_) == 0)
{
lean_object* v___x_2227_; 
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 0, v_a_2216_);
v___x_2227_ = v___x_2223_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2216_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
else
{
lean_object* v_val_2229_; lean_object* v___x_2231_; 
v_val_2229_ = lean_ctor_get(v_fst_2225_, 0);
lean_inc(v_val_2229_);
lean_dec_ref_known(v_fst_2225_, 1);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 0, v_val_2229_);
v___x_2231_ = v___x_2223_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_val_2229_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
v_a_2234_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2220_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2220_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
else
{
lean_dec(v_x_2206_);
return v___x_2215_;
}
}
else
{
lean_dec(v_x_2206_);
return v___x_2215_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object* v_x_2242_, lean_object* v_t_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2242_, v_t_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec_ref(v_t_2243_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object* v_x_2250_, lean_object* v_lctx_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_decls_2257_; lean_object* v___x_2258_; 
v_decls_2257_ = lean_ctor_get(v_lctx_2251_, 1);
v___x_2258_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2250_, v_decls_2257_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object* v_x_2259_, lean_object* v_lctx_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2259_, v_lctx_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec_ref(v_lctx_2260_);
return v_res_2266_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2268_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__0));
v___x_2269_ = l_Lean_stringToMessageData(v___x_2268_);
return v___x_2269_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2271_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__2));
v___x_2272_ = l_Lean_stringToMessageData(v___x_2271_);
return v___x_2272_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2274_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__4));
v___x_2275_ = l_Lean_stringToMessageData(v___x_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object* v_x_2276_, lean_object* v_mvarId_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v___x_2328_; 
lean_inc(v_x_2276_);
v___x_2328_ = l_Lean_FVarId_getDecl___redArg(v_x_2276_, v___y_2278_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; uint8_t v___x_2330_; uint8_t v___x_2331_; 
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2328_, 1);
v___x_2330_ = 0;
v___x_2331_ = l_Lean_LocalDecl_isLet(v_a_2329_, v___x_2330_);
lean_dec(v_a_2329_);
if (v___x_2331_ == 0)
{
goto v___jp_2283_;
}
else
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2332_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2333_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__3, &l_Lean_Meta_substVar___lam__0___closed__3_once, _init_l_Lean_Meta_substVar___lam__0___closed__3);
lean_inc(v_x_2276_);
v___x_2334_ = l_Lean_mkFVar(v_x_2276_);
v___x_2335_ = l_Lean_MessageData_ofExpr(v___x_2334_);
v___x_2336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2333_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
v___x_2337_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__5, &l_Lean_Meta_substVar___lam__0___closed__5_once, _init_l_Lean_Meta_substVar___lam__0___closed__5);
v___x_2338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2336_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2338_);
lean_inc(v_mvarId_2277_);
v___x_2340_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2332_, v_mvarId_2277_, v___x_2339_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_dec_ref_known(v___x_2340_, 1);
goto v___jp_2283_;
}
else
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2348_; 
lean_dec(v_mvarId_2277_);
lean_dec(v_x_2276_);
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2343_ = v___x_2340_;
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2340_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2348_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec(v_mvarId_2277_);
lean_dec(v_x_2276_);
v_a_2349_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2328_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2328_);
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
v___jp_2283_:
{
lean_object* v_lctx_2284_; lean_object* v___x_2285_; 
v_lctx_2284_ = lean_ctor_get(v___y_2278_, 2);
lean_inc(v_x_2276_);
v___x_2285_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2276_, v_lctx_2284_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
if (lean_obj_tag(v_a_2286_) == 1)
{
lean_object* v_val_2287_; lean_object* v_fst_2288_; lean_object* v_snd_2289_; lean_object* v___x_2290_; uint8_t v___x_2291_; uint8_t v___x_2292_; lean_object* v___x_2293_; 
lean_dec(v_x_2276_);
v_val_2287_ = lean_ctor_get(v_a_2286_, 0);
lean_inc(v_val_2287_);
lean_dec_ref_known(v_a_2286_, 1);
v_fst_2288_ = lean_ctor_get(v_val_2287_, 0);
lean_inc(v_fst_2288_);
v_snd_2289_ = lean_ctor_get(v_val_2287_, 1);
lean_inc(v_snd_2289_);
lean_dec(v_val_2287_);
v___x_2290_ = lean_box(0);
v___x_2291_ = 1;
v___x_2292_ = lean_unbox(v_snd_2289_);
lean_dec(v_snd_2289_);
v___x_2293_ = l_Lean_Meta_substCore(v_mvarId_2277_, v_fst_2288_, v___x_2292_, v___x_2290_, v___x_2291_, v___x_2291_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2302_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2296_ = v___x_2293_;
v_isShared_2297_ = v_isSharedCheck_2302_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2293_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2302_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v_snd_2298_; lean_object* v___x_2300_; 
v_snd_2298_ = lean_ctor_get(v_a_2294_, 1);
lean_inc(v_snd_2298_);
lean_dec(v_a_2294_);
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 0, v_snd_2298_);
v___x_2300_ = v___x_2296_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_snd_2298_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
else
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
v_a_2303_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2293_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2293_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
else
{
lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
lean_dec(v_a_2286_);
v___x_2311_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2312_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__1, &l_Lean_Meta_substVar___lam__0___closed__1_once, _init_l_Lean_Meta_substVar___lam__0___closed__1);
v___x_2313_ = l_Lean_mkFVar(v_x_2276_);
v___x_2314_ = l_Lean_MessageData_ofExpr(v___x_2313_);
v___x_2315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2312_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_2317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2315_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
v___x_2319_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2311_, v_mvarId_2277_, v___x_2318_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
return v___x_2319_;
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec(v_mvarId_2277_);
lean_dec(v_x_2276_);
v_a_2320_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2285_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2285_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object* v_x_2357_, lean_object* v_mvarId_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lean_Meta_substVar___lam__0(v_x_2357_, v_mvarId_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
lean_dec(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec(v___y_2360_);
lean_dec_ref(v___y_2359_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object* v_mvarId_2365_, lean_object* v_x_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_){
_start:
{
lean_object* v___f_2372_; lean_object* v___x_2373_; 
lean_inc(v_mvarId_2365_);
v___f_2372_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2372_, 0, v_x_2366_);
lean_closure_set(v___f_2372_, 1, v_mvarId_2365_);
v___x_2373_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2365_, v___f_2372_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_);
return v___x_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object* v_mvarId_2374_, lean_object* v_x_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lean_Meta_substVar(v_mvarId_2374_, v_x_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
lean_dec(v_a_2379_);
lean_dec_ref(v_a_2378_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
return v_res_2381_;
}
}
static lean_object* _init_l_Lean_Meta_substEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2383_ = ((lean_object*)(l_Lean_Meta_substEq___lam__0___closed__0));
v___x_2384_ = l_Lean_stringToMessageData(v___x_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object* v_fst_2385_, lean_object* v_snd_2386_, uint8_t v___x_2387_, lean_object* v_fvarSubst_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; 
lean_inc(v_fst_2385_);
v___x_2394_ = l_Lean_FVarId_getDecl___redArg(v_fst_2385_, v___y_2389_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v_newType_2397_; uint8_t v_symm_2398_; lean_object* v___y_2399_; lean_object* v___y_2400_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2450_ = l_Lean_LocalDecl_type(v_a_2395_);
v___x_2451_ = l_Lean_Meta_matchEq_x3f(v___x_2450_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2451_, 1);
if (lean_obj_tag(v_a_2452_) == 1)
{
lean_object* v_val_2453_; lean_object* v_snd_2454_; lean_object* v_fst_2455_; lean_object* v_snd_2456_; lean_object* v___x_2457_; 
v_val_2453_ = lean_ctor_get(v_a_2452_, 0);
lean_inc(v_val_2453_);
lean_dec_ref_known(v_a_2452_, 1);
v_snd_2454_ = lean_ctor_get(v_val_2453_, 1);
lean_inc(v_snd_2454_);
lean_dec(v_val_2453_);
v_fst_2455_ = lean_ctor_get(v_snd_2454_, 0);
lean_inc(v_fst_2455_);
v_snd_2456_ = lean_ctor_get(v_snd_2454_, 1);
lean_inc_n(v_snd_2456_, 2);
lean_dec(v_snd_2454_);
lean_inc(v___y_2392_);
lean_inc_ref(v___y_2391_);
lean_inc(v___y_2390_);
lean_inc_ref(v___y_2389_);
v___x_2457_ = lean_whnf(v_snd_2456_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; uint8_t v___x_2459_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v___x_2459_ = l_Lean_Expr_isFVar(v_a_2458_);
if (v___x_2459_ == 0)
{
lean_object* v___x_2460_; 
lean_dec(v_a_2458_);
lean_inc(v___y_2392_);
lean_inc_ref(v___y_2391_);
lean_inc(v___y_2390_);
lean_inc_ref(v___y_2389_);
lean_inc(v_fst_2455_);
v___x_2460_ = lean_whnf(v_fst_2455_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; uint8_t v___x_2462_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2462_ = l_Lean_Expr_isFVar(v_a_2461_);
if (v___x_2462_ == 0)
{
lean_dec(v_a_2461_);
lean_dec(v_snd_2456_);
lean_dec(v_fst_2455_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_fst_2385_);
v___y_2439_ = v___y_2389_;
v___y_2440_ = v___y_2390_;
v___y_2441_ = v___y_2391_;
v___y_2442_ = v___y_2392_;
goto v___jp_2438_;
}
else
{
uint8_t v___x_2463_; 
v___x_2463_ = lean_expr_eqv(v_fst_2455_, v_a_2461_);
lean_dec(v_fst_2455_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; 
v___x_2464_ = l_Lean_Meta_mkEq(v_a_2461_, v_snd_2456_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_a_2465_; 
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_a_2465_);
lean_dec_ref_known(v___x_2464_, 1);
v_newType_2397_ = v_a_2465_;
v_symm_2398_ = v___x_2459_;
v___y_2399_ = v___y_2389_;
v___y_2400_ = v___y_2390_;
v___y_2401_ = v___y_2391_;
v___y_2402_ = v___y_2392_;
goto v___jp_2396_;
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
lean_dec(v_a_2395_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2386_);
lean_dec(v_fst_2385_);
v_a_2466_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2464_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2464_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
else
{
lean_object* v___x_2474_; 
lean_dec(v_a_2461_);
lean_dec(v_snd_2456_);
lean_dec(v_a_2395_);
v___x_2474_ = l_Lean_Meta_substCore(v_snd_2386_, v_fst_2385_, v___x_2459_, v_fvarSubst_2388_, v___x_2387_, v___x_2387_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
return v___x_2474_;
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec(v_snd_2456_);
lean_dec(v_fst_2455_);
lean_dec(v_a_2395_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2386_);
lean_dec(v_fst_2385_);
v_a_2475_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2460_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2460_);
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
else
{
uint8_t v___x_2483_; 
v___x_2483_ = lean_expr_eqv(v_snd_2456_, v_a_2458_);
lean_dec(v_snd_2456_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; 
v___x_2484_ = l_Lean_Meta_mkEq(v_fst_2455_, v_a_2458_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_object* v_a_2485_; 
v_a_2485_ = lean_ctor_get(v___x_2484_, 0);
lean_inc(v_a_2485_);
lean_dec_ref_known(v___x_2484_, 1);
v_newType_2397_ = v_a_2485_;
v_symm_2398_ = v___x_2387_;
v___y_2399_ = v___y_2389_;
v___y_2400_ = v___y_2390_;
v___y_2401_ = v___y_2391_;
v___y_2402_ = v___y_2392_;
goto v___jp_2396_;
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec(v_a_2395_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2386_);
lean_dec(v_fst_2385_);
v_a_2486_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2484_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2484_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
else
{
lean_object* v___x_2494_; 
lean_dec(v_a_2458_);
lean_dec(v_fst_2455_);
lean_dec(v_a_2395_);
v___x_2494_ = l_Lean_Meta_substCore(v_snd_2386_, v_fst_2385_, v___x_2387_, v_fvarSubst_2388_, v___x_2387_, v___x_2387_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
return v___x_2494_;
}
}
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
lean_dec(v_snd_2456_);
lean_dec(v_fst_2455_);
lean_dec(v_a_2395_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2386_);
lean_dec(v_fst_2385_);
v_a_2495_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2457_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2457_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
else
{
lean_dec(v_a_2452_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_fst_2385_);
v___y_2439_ = v___y_2389_;
v___y_2440_ = v___y_2390_;
v___y_2441_ = v___y_2391_;
v___y_2442_ = v___y_2392_;
goto v___jp_2438_;
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_dec(v_a_2395_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2386_);
lean_dec(v_fst_2385_);
v_a_2503_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2451_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2451_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
v___jp_2396_:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = l_Lean_LocalDecl_userName(v_a_2395_);
lean_dec(v_a_2395_);
lean_inc(v_fst_2385_);
v___x_2404_ = l_Lean_mkFVar(v_fst_2385_);
v___x_2405_ = l_Lean_MVarId_assert(v_snd_2386_, v___x_2403_, v_newType_2397_, v___x_2404_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2407_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2406_);
lean_dec_ref_known(v___x_2405_, 1);
v___x_2407_ = l_Lean_Meta_intro1Core(v_a_2406_, v___x_2387_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v_fst_2409_; lean_object* v_snd_2410_; lean_object* v___x_2411_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v_fst_2409_ = lean_ctor_get(v_a_2408_, 0);
lean_inc(v_fst_2409_);
v_snd_2410_ = lean_ctor_get(v_a_2408_, 1);
lean_inc(v_snd_2410_);
lean_dec(v_a_2408_);
v___x_2411_ = l_Lean_MVarId_clear(v_snd_2410_, v_fst_2385_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2413_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
v___x_2413_ = l_Lean_Meta_substCore(v_a_2412_, v_fst_2409_, v_symm_2398_, v_fvarSubst_2388_, v___x_2387_, v___x_2387_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
return v___x_2413_;
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec(v_fst_2409_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v_fvarSubst_2388_);
v_a_2414_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2411_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2411_);
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
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_fst_2385_);
v_a_2422_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2407_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2407_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
else
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2437_; 
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_fst_2385_);
v_a_2430_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2432_ = v___x_2405_;
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v___x_2405_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2437_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2435_; 
if (v_isShared_2433_ == 0)
{
v___x_2435_ = v___x_2432_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_a_2430_);
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
v___jp_2438_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2443_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__1));
v___x_2444_ = lean_obj_once(&l_Lean_Meta_substEq___lam__0___closed__1, &l_Lean_Meta_substEq___lam__0___closed__1_once, _init_l_Lean_Meta_substEq___lam__0___closed__1);
v___x_2445_ = l_Lean_LocalDecl_type(v_a_2395_);
lean_dec(v_a_2395_);
v___x_2446_ = l_Lean_indentExpr(v___x_2445_);
v___x_2447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2447_, 0, v___x_2444_);
lean_ctor_set(v___x_2447_, 1, v___x_2446_);
v___x_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
v___x_2449_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2443_, v_snd_2386_, v___x_2448_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
return v___x_2449_;
}
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v_fvarSubst_2388_);
lean_dec(v_snd_2386_);
lean_dec(v_fst_2385_);
v_a_2511_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2394_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2394_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
return v___x_2516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object* v_fst_2519_, lean_object* v_snd_2520_, lean_object* v___x_2521_, lean_object* v_fvarSubst_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
uint8_t v___x_1757__boxed_2528_; lean_object* v_res_2529_; 
v___x_1757__boxed_2528_ = lean_unbox(v___x_2521_);
v_res_2529_ = l_Lean_Meta_substEq___lam__0(v_fst_2519_, v_snd_2520_, v___x_1757__boxed_2528_, v_fvarSubst_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object* v_mvarId_2530_, lean_object* v_hFVarId_2531_, lean_object* v_fvarSubst_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_){
_start:
{
uint8_t v___x_2538_; lean_object* v___x_2539_; 
v___x_2538_ = 1;
v___x_2539_ = l_Lean_Meta_heqToEq(v_mvarId_2530_, v_hFVarId_2531_, v___x_2538_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v_fst_2541_; lean_object* v_snd_2542_; lean_object* v___x_2543_; lean_object* v___f_2544_; lean_object* v___x_2545_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref_known(v___x_2539_, 1);
v_fst_2541_ = lean_ctor_get(v_a_2540_, 0);
lean_inc(v_fst_2541_);
v_snd_2542_ = lean_ctor_get(v_a_2540_, 1);
lean_inc_n(v_snd_2542_, 2);
lean_dec(v_a_2540_);
v___x_2543_ = lean_box(v___x_2538_);
v___f_2544_ = lean_alloc_closure((void*)(l_Lean_Meta_substEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2544_, 0, v_fst_2541_);
lean_closure_set(v___f_2544_, 1, v_snd_2542_);
lean_closure_set(v___f_2544_, 2, v___x_2543_);
lean_closure_set(v___f_2544_, 3, v_fvarSubst_2532_);
v___x_2545_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_snd_2542_, v___f_2544_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
return v___x_2545_;
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2553_; 
lean_dec(v_fvarSubst_2532_);
v_a_2546_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2548_ = v___x_2539_;
v_isShared_2549_ = v_isSharedCheck_2553_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v___x_2539_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object* v_mvarId_2554_, lean_object* v_hFVarId_2555_, lean_object* v_fvarSubst_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l_Lean_Meta_substEq(v_mvarId_2554_, v_hFVarId_2555_, v_fvarSubst_2556_, v_a_2557_, v_a_2558_, v_a_2559_, v_a_2560_);
lean_dec(v_a_2560_);
lean_dec_ref(v_a_2559_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object* v_h_2563_, lean_object* v_mvarId_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
lean_object* v___x_2570_; 
lean_inc(v_h_2563_);
v___x_2570_ = l_Lean_FVarId_getType___redArg(v_h_2563_, v___y_2565_, v___y_2567_, v___y_2568_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v___x_2572_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc_n(v_a_2571_, 2);
lean_dec_ref_known(v___x_2570_, 1);
v___x_2572_ = l_Lean_Meta_matchEq_x3f(v_a_2571_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
if (lean_obj_tag(v_a_2573_) == 0)
{
lean_object* v___x_2574_; 
v___x_2574_ = l_Lean_Meta_matchHEq_x3f(v_a_2571_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
if (lean_obj_tag(v_a_2575_) == 0)
{
lean_object* v___x_2576_; 
v___x_2576_ = l_Lean_Meta_substVar(v_mvarId_2564_, v_h_2563_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
return v___x_2576_;
}
else
{
uint8_t v___x_2577_; lean_object* v___x_2578_; 
lean_dec_ref_known(v_a_2575_, 1);
v___x_2577_ = 1;
lean_inc(v_h_2563_);
lean_inc(v_mvarId_2564_);
v___x_2578_ = l_Lean_Meta_heqToEq(v_mvarId_2564_, v_h_2563_, v___x_2577_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v_fst_2580_; lean_object* v_snd_2581_; uint8_t v___x_2582_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v_fst_2580_ = lean_ctor_get(v_a_2579_, 0);
lean_inc(v_fst_2580_);
v_snd_2581_ = lean_ctor_get(v_a_2579_, 1);
lean_inc(v_snd_2581_);
lean_dec(v_a_2579_);
v___x_2582_ = l_Lean_instBEqMVarId_beq(v_mvarId_2564_, v_snd_2581_);
if (v___x_2582_ == 0)
{
lean_object* v___x_2583_; 
lean_dec(v_mvarId_2564_);
lean_dec(v_h_2563_);
v___x_2583_ = l_Lean_Meta_subst(v_snd_2581_, v_fst_2580_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
return v___x_2583_;
}
else
{
lean_object* v___x_2584_; 
lean_dec(v_snd_2581_);
lean_dec(v_fst_2580_);
v___x_2584_ = l_Lean_Meta_substVar(v_mvarId_2564_, v_h_2563_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
return v___x_2584_;
}
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
lean_dec(v_mvarId_2564_);
lean_dec(v_h_2563_);
v_a_2585_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2587_ = v___x_2578_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v___x_2578_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2585_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec(v_mvarId_2564_);
lean_dec(v_h_2563_);
v_a_2593_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2574_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2574_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_object* v___x_2601_; lean_object* v___x_2602_; 
lean_dec_ref_known(v_a_2573_, 1);
lean_dec(v_a_2571_);
v___x_2601_ = lean_box(0);
v___x_2602_ = l_Lean_Meta_substEq(v_mvarId_2564_, v_h_2563_, v___x_2601_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2611_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2611_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v_snd_2607_; lean_object* v___x_2609_; 
v_snd_2607_ = lean_ctor_get(v_a_2603_, 1);
lean_inc(v_snd_2607_);
lean_dec(v_a_2603_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v_snd_2607_);
v___x_2609_ = v___x_2605_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_snd_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
v_a_2612_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2614_ = v___x_2602_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2602_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2612_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
lean_dec(v_a_2571_);
lean_dec(v_mvarId_2564_);
lean_dec(v_h_2563_);
v_a_2620_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2572_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2572_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v_mvarId_2564_);
lean_dec(v_h_2563_);
v_a_2628_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2570_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2570_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object* v_h_2636_, lean_object* v_mvarId_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lean_Meta_subst___lam__0(v_h_2636_, v_mvarId_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object* v_mvarId_2644_, lean_object* v_h_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_){
_start:
{
lean_object* v___f_2651_; lean_object* v___x_2652_; 
lean_inc(v_mvarId_2644_);
v___f_2651_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2651_, 0, v_h_2645_);
lean_closure_set(v___f_2651_, 1, v_mvarId_2644_);
v___x_2652_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2644_, v___f_2651_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object* v_mvarId_2653_, lean_object* v_h_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l_Lean_Meta_subst(v_mvarId_2653_, v_h_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_);
lean_dec(v_a_2658_);
lean_dec_ref(v_a_2657_);
lean_dec(v_a_2656_);
lean_dec_ref(v_a_2655_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object* v_x_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v___x_2667_; 
v___x_2667_ = l_Lean_Meta_saveState___redArg(v___y_2663_, v___y_2665_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v___x_2669_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
lean_inc(v___y_2665_);
lean_inc_ref(v___y_2664_);
lean_inc(v___y_2663_);
lean_inc_ref(v___y_2662_);
v___x_2669_ = lean_apply_5(v_x_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, lean_box(0));
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_dec(v_a_2668_);
return v___x_2669_;
}
else
{
lean_object* v_a_2670_; uint8_t v___x_2671_; 
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2670_);
v___x_2671_ = l_Lean_Exception_isInterrupt(v_a_2670_);
if (v___x_2671_ == 0)
{
uint8_t v___x_2672_; 
lean_inc(v_a_2670_);
v___x_2672_ = l_Lean_Exception_isRuntime(v_a_2670_);
if (v___x_2672_ == 0)
{
lean_object* v___x_2673_; 
lean_dec_ref_known(v___x_2669_, 1);
v___x_2673_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2668_, v___y_2663_, v___y_2665_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2680_; 
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2680_ == 0)
{
lean_object* v_unused_2681_; 
v_unused_2681_ = lean_ctor_get(v___x_2673_, 0);
lean_dec(v_unused_2681_);
v___x_2675_ = v___x_2673_;
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
else
{
lean_dec(v___x_2673_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2680_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2678_; 
if (v_isShared_2676_ == 0)
{
lean_ctor_set_tag(v___x_2675_, 1);
lean_ctor_set(v___x_2675_, 0, v_a_2670_);
v___x_2678_ = v___x_2675_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_a_2670_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
lean_dec(v_a_2670_);
v_a_2682_ = lean_ctor_get(v___x_2673_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2673_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2673_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
else
{
lean_dec(v_a_2670_);
lean_dec(v_a_2668_);
return v___x_2669_;
}
}
else
{
lean_dec(v_a_2670_);
lean_dec(v_a_2668_);
return v___x_2669_;
}
}
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_dec_ref(v_x_2661_);
v_a_2690_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2667_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2667_);
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
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object* v_x_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object* v_00_u03b1_2705_, lean_object* v_x_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
lean_object* v___x_2712_; 
v___x_2712_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object* v_00_u03b1_2713_, lean_object* v_x_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(v_00_u03b1_2713_, v_x_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
lean_dec(v___y_2718_);
lean_dec_ref(v___y_2717_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object* v_msg_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_ref_2727_; lean_object* v___x_2728_; lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2737_; 
v_ref_2727_ = lean_ctor_get(v___y_2724_, 2);
v___x_2728_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(v_msg_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2731_ = v___x_2728_;
v_isShared_2732_ = v_isSharedCheck_2737_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2728_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2737_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2733_; lean_object* v___x_2735_; 
lean_inc(v_ref_2727_);
v___x_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2733_, 0, v_ref_2727_);
lean_ctor_set(v___x_2733_, 1, v_a_2729_);
if (v_isShared_2732_ == 0)
{
lean_ctor_set_tag(v___x_2731_, 1);
lean_ctor_set(v___x_2731_, 0, v___x_2733_);
v___x_2735_ = v___x_2731_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object* v_msg_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_);
lean_dec(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
return v_res_2744_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__0));
v___x_2747_ = l_Lean_stringToMessageData(v___x_2746_);
return v___x_2747_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__2));
v___x_2750_ = l_Lean_stringToMessageData(v___x_2749_);
return v___x_2750_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2752_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__4));
v___x_2753_ = l_Lean_stringToMessageData(v___x_2752_);
return v___x_2753_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2755_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__6));
v___x_2756_ = l_Lean_stringToMessageData(v___x_2755_);
return v___x_2756_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2758_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__8));
v___x_2759_ = l_Lean_stringToMessageData(v___x_2758_);
return v___x_2759_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__17(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__16));
v___x_2773_ = l_Lean_stringToMessageData(v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object* v_mvarId_2782_, uint8_t v_substLHS_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
lean_object* v___x_2789_; 
lean_inc(v_mvarId_2782_);
v___x_2789_ = l_Lean_MVarId_getType_x27(v_mvarId_2782_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_object* v_a_2790_; 
v_a_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_a_2790_);
lean_dec_ref_known(v___x_2789_, 1);
if (lean_obj_tag(v_a_2790_) == 7)
{
lean_object* v_binderType_2794_; lean_object* v_body_2795_; uint8_t v___x_2796_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v___y_2807_; lean_object* v___y_2808_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2887_; lean_object* v___y_2888_; lean_object* v___y_2889_; lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v_fst_2931_; lean_object* v_fst_2932_; lean_object* v_fst_2933_; lean_object* v_snd_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; 
v_binderType_2794_ = lean_ctor_get(v_a_2790_, 1);
lean_inc_ref(v_binderType_2794_);
v_body_2795_ = lean_ctor_get(v_a_2790_, 2);
lean_inc_ref(v_body_2795_);
lean_dec_ref_known(v_a_2790_, 3);
v___x_2796_ = l_Lean_Expr_hasLooseBVars(v_body_2795_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2965_; 
v___x_2965_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_2794_, v___y_2785_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2967_; uint8_t v___x_2968_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___x_2965_, 1);
v___x_2967_ = l_Lean_Expr_cleanupAnnotations(v_a_2966_);
lean_dec(v_a_2966_);
v___x_2968_ = l_Lean_Expr_isApp(v___x_2967_);
if (v___x_2968_ == 0)
{
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v___y_2951_ = v___y_2784_;
v___y_2952_ = v___y_2785_;
v___y_2953_ = v___y_2786_;
v___y_2954_ = v___y_2787_;
goto v___jp_2950_;
}
else
{
lean_object* v___x_2969_; uint8_t v___x_2970_; 
v___x_2969_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2967_);
v___x_2970_ = l_Lean_Expr_isApp(v___x_2969_);
if (v___x_2970_ == 0)
{
lean_dec_ref(v___x_2969_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v___y_2951_ = v___y_2784_;
v___y_2952_ = v___y_2785_;
v___y_2953_ = v___y_2786_;
v___y_2954_ = v___y_2787_;
goto v___jp_2950_;
}
else
{
lean_object* v___x_2971_; uint8_t v___x_2972_; 
v___x_2971_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2969_);
v___x_2972_ = l_Lean_Expr_isApp(v___x_2971_);
if (v___x_2972_ == 0)
{
lean_dec_ref(v___x_2971_);
lean_dec_ref(v___x_2969_);
lean_dec_ref(v___x_2967_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v___y_2951_ = v___y_2784_;
v___y_2952_ = v___y_2785_;
v___y_2953_ = v___y_2786_;
v___y_2954_ = v___y_2787_;
goto v___jp_2950_;
}
else
{
lean_object* v_arg_2973_; lean_object* v_arg_2974_; lean_object* v_arg_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v_arg_2973_ = lean_ctor_get(v___x_2967_, 1);
lean_inc_ref(v_arg_2973_);
lean_dec_ref(v___x_2967_);
v_arg_2974_ = lean_ctor_get(v___x_2969_, 1);
lean_inc_ref(v_arg_2974_);
lean_dec_ref(v___x_2969_);
v_arg_2975_ = lean_ctor_get(v___x_2971_, 1);
lean_inc_ref(v_arg_2975_);
v___x_2976_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2971_);
lean_dec_ref(v___x_2971_);
v___x_2977_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__11));
v___x_2978_ = l_Lean_Expr_isConstOf(v___x_2976_, v___x_2977_);
if (v___x_2978_ == 0)
{
uint8_t v___x_2979_; 
v___x_2979_ = l_Lean_Expr_isApp(v___x_2976_);
if (v___x_2979_ == 0)
{
lean_dec_ref(v___x_2976_);
lean_dec_ref(v_arg_2975_);
lean_dec_ref(v_arg_2974_);
lean_dec_ref(v_arg_2973_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v___y_2951_ = v___y_2784_;
v___y_2952_ = v___y_2785_;
v___y_2953_ = v___y_2786_;
v___y_2954_ = v___y_2787_;
goto v___jp_2950_;
}
else
{
lean_object* v___x_2980_; lean_object* v___x_2981_; uint8_t v___x_2982_; 
v___x_2980_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2976_);
v___x_2981_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_2982_ = l_Lean_Expr_isConstOf(v___x_2980_, v___x_2981_);
lean_dec_ref(v___x_2980_);
if (v___x_2982_ == 0)
{
lean_dec_ref(v___x_2976_);
lean_dec_ref(v_arg_2975_);
lean_dec_ref(v_arg_2974_);
lean_dec_ref(v_arg_2973_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v___y_2951_ = v___y_2784_;
v___y_2952_ = v___y_2785_;
v___y_2953_ = v___y_2786_;
v___y_2954_ = v___y_2787_;
goto v___jp_2950_;
}
else
{
lean_object* v_arg_2983_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___x_2991_; 
v_arg_2983_ = lean_ctor_get(v___x_2976_, 1);
lean_inc_ref_n(v_arg_2983_, 2);
lean_dec_ref(v___x_2976_);
v___x_2991_ = l_Lean_Meta_isExprDefEq(v_arg_2983_, v_arg_2974_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; uint8_t v___x_2993_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
v___x_2993_ = lean_unbox(v_a_2992_);
lean_dec(v_a_2992_);
if (v___x_2993_ == 0)
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v_arg_2983_);
lean_dec_ref(v_arg_2975_);
lean_dec_ref(v_arg_2973_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v___x_2994_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__17, &l_Lean_Meta_introSubstEq___lam__0___closed__17_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__17);
v___x_2995_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2994_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2995_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2995_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
else
{
v___y_2985_ = v___y_2784_;
v___y_2986_ = v___y_2785_;
v___y_2987_ = v___y_2786_;
v___y_2988_ = v___y_2787_;
goto v___jp_2984_;
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec_ref(v_arg_2983_);
lean_dec_ref(v_arg_2975_);
lean_dec_ref(v_arg_2973_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v_a_3004_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2991_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2991_);
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
v___jp_2984_:
{
if (v_substLHS_2783_ == 0)
{
lean_object* v___x_2989_; 
v___x_2989_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__13));
v_fst_2931_ = v_arg_2983_;
v_fst_2932_ = v_arg_2975_;
v_fst_2933_ = v_arg_2973_;
v_snd_2934_ = v___x_2989_;
v___y_2935_ = v___y_2985_;
v___y_2936_ = v___y_2986_;
v___y_2937_ = v___y_2987_;
v___y_2938_ = v___y_2988_;
goto v___jp_2930_;
}
else
{
lean_object* v___x_2990_; 
v___x_2990_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__15));
v_fst_2931_ = v_arg_2983_;
v_fst_2932_ = v_arg_2973_;
v_fst_2933_ = v_arg_2975_;
v_snd_2934_ = v___x_2990_;
v___y_2935_ = v___y_2985_;
v___y_2936_ = v___y_2986_;
v___y_2937_ = v___y_2987_;
v___y_2938_ = v___y_2988_;
goto v___jp_2930_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2976_);
if (v_substLHS_2783_ == 0)
{
lean_object* v___x_3012_; 
v___x_3012_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__19));
v_fst_2931_ = v_arg_2975_;
v_fst_2932_ = v_arg_2974_;
v_fst_2933_ = v_arg_2973_;
v_snd_2934_ = v___x_3012_;
v___y_2935_ = v___y_2784_;
v___y_2936_ = v___y_2785_;
v___y_2937_ = v___y_2786_;
v___y_2938_ = v___y_2787_;
goto v___jp_2930_;
}
else
{
lean_object* v___x_3013_; 
v___x_3013_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__21));
v_fst_2931_ = v_arg_2975_;
v_fst_2932_ = v_arg_2973_;
v_fst_2933_ = v_arg_2974_;
v_snd_2934_ = v___x_3013_;
v___y_2935_ = v___y_2784_;
v___y_2936_ = v___y_2785_;
v___y_2937_ = v___y_2786_;
v___y_2938_ = v___y_2787_;
goto v___jp_2930_;
}
}
}
}
}
}
else
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v_a_3014_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3016_ = v___x_2965_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_2965_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3014_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
else
{
lean_dec_ref(v_body_2795_);
lean_dec_ref(v_binderType_2794_);
lean_dec(v_mvarId_2782_);
goto v___jp_2791_;
}
v___jp_2797_:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; uint8_t v___x_2811_; uint8_t v___x_2812_; lean_object* v___x_2813_; 
v___x_2809_ = lean_mk_empty_array_with_capacity(v___y_2799_);
lean_inc_ref(v___x_2809_);
v___x_2810_ = lean_array_push(v___x_2809_, v___y_2804_);
v___x_2811_ = 1;
v___x_2812_ = 1;
v___x_2813_ = l_Lean_Meta_mkLambdaFVars(v___x_2810_, v_body_2795_, v___x_2796_, v___x_2811_, v___x_2796_, v___x_2811_, v___x_2812_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
lean_dec_ref(v___x_2810_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc_n(v_a_2814_, 2);
lean_dec_ref_known(v___x_2813_, 1);
lean_inc_ref(v___y_2802_);
v___x_2815_ = lean_array_push(v___x_2809_, v___y_2802_);
v___x_2816_ = l_Lean_Expr_beta(v_a_2814_, v___x_2815_);
lean_inc(v___y_2803_);
v___x_2817_ = l_Lean_MVarId_getTag(v___y_2803_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; lean_object* v___x_2819_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
lean_dec_ref_known(v___x_2817_, 1);
lean_inc_ref(v___x_2816_);
v___x_2819_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2816_, v_a_2818_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2821_; 
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2820_);
lean_dec_ref_known(v___x_2819_, 1);
v___x_2821_ = l_Lean_Meta_getLevel(v___x_2816_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2823_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2821_, 1);
lean_inc_ref(v___y_2800_);
v___x_2823_ = l_Lean_Meta_getLevel(v___y_2800_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2841_; 
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc(v_a_2824_);
lean_dec_ref_known(v___x_2823_, 1);
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2826_, 0, v_a_2824_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2827_, 0, v_a_2822_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
lean_inc(v___y_2801_);
v___x_2828_ = l_Lean_mkConst(v___y_2801_, v___x_2827_);
lean_inc(v_a_2820_);
lean_inc_ref(v___y_2802_);
v___x_2829_ = l_Lean_mkApp4(v___x_2828_, v___y_2800_, v___y_2802_, v_a_2814_, v_a_2820_);
v___x_2830_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v___y_2803_, v___x_2829_, v___y_2806_);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; 
v_unused_2842_ = lean_ctor_get(v___x_2830_, 0);
lean_dec(v_unused_2842_);
v___x_2832_ = v___x_2830_;
v_isShared_2833_ = v_isSharedCheck_2841_;
goto v_resetjp_2831_;
}
else
{
lean_dec(v___x_2830_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2841_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2839_; 
v___x_2834_ = l_Lean_Meta_FVarSubst_empty;
v___x_2835_ = l_Lean_Meta_FVarSubst_insert(v___x_2834_, v___y_2798_, v___y_2802_);
v___x_2836_ = l_Lean_Expr_mvarId_x21(v_a_2820_);
lean_dec(v_a_2820_);
v___x_2837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 0, v___x_2837_);
v___x_2839_ = v___x_2832_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v___x_2837_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_dec(v_a_2822_);
lean_dec(v_a_2820_);
lean_dec(v_a_2814_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
v_a_2843_ = lean_ctor_get(v___x_2823_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2823_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2823_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2823_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2843_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec(v_a_2820_);
lean_dec(v_a_2814_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
v_a_2851_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2821_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2821_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec_ref(v___x_2816_);
lean_dec(v_a_2814_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
v_a_2859_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2819_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2819_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
lean_dec_ref(v___x_2816_);
lean_dec(v_a_2814_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
v_a_2867_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2817_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2817_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec_ref(v___x_2809_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
v_a_2875_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2813_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2813_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
v___jp_2883_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2892_ = l_Lean_Expr_fvarId_x21(v___y_2887_);
v___x_2893_ = lean_unsigned_to_nat(1u);
v___x_2894_ = lean_mk_empty_array_with_capacity(v___x_2893_);
lean_inc(v___x_2892_);
v___x_2895_ = lean_array_push(v___x_2894_, v___x_2892_);
v___x_2896_ = l_Lean_MVarId_revert(v_mvarId_2782_, v___x_2895_, v___x_2796_, v___x_2796_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v_fst_2898_; lean_object* v_snd_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2921_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___x_2896_, 1);
v_fst_2898_ = lean_ctor_get(v_a_2897_, 0);
v_snd_2899_ = lean_ctor_get(v_a_2897_, 1);
v_isSharedCheck_2921_ = !lean_is_exclusive(v_a_2897_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2901_ = v_a_2897_;
v_isShared_2902_ = v_isSharedCheck_2921_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_snd_2899_);
lean_inc(v_fst_2898_);
lean_dec(v_a_2897_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2921_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v___x_2903_; uint8_t v___x_2904_; 
v___x_2903_ = lean_array_get_size(v_fst_2898_);
lean_dec(v_fst_2898_);
v___x_2904_ = lean_nat_dec_eq(v___x_2903_, v___x_2893_);
if (v___x_2904_ == 0)
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2908_; 
lean_dec(v_snd_2899_);
lean_dec(v___x_2892_);
lean_dec_ref(v___y_2886_);
lean_dec_ref(v___y_2884_);
lean_dec_ref(v_body_2795_);
v___x_2905_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__3, &l_Lean_Meta_introSubstEq___lam__0___closed__3_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__3);
v___x_2906_ = l_Lean_MessageData_ofExpr(v___y_2887_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set_tag(v___x_2901_, 7);
lean_ctor_set(v___x_2901_, 1, v___x_2906_);
lean_ctor_set(v___x_2901_, 0, v___x_2905_);
v___x_2908_ = v___x_2901_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v___x_2905_);
lean_ctor_set(v_reuseFailAlloc_2920_, 1, v___x_2906_);
v___x_2908_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
v___x_2909_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__5, &l_Lean_Meta_introSubstEq___lam__0___closed__5_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__5);
v___x_2910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2908_);
lean_ctor_set(v___x_2910_, 1, v___x_2909_);
v___x_2911_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2910_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2911_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2911_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_del_object(v___x_2901_);
v___y_2798_ = v___x_2892_;
v___y_2799_ = v___x_2893_;
v___y_2800_ = v___y_2884_;
v___y_2801_ = v___y_2885_;
v___y_2802_ = v___y_2886_;
v___y_2803_ = v_snd_2899_;
v___y_2804_ = v___y_2887_;
v___y_2805_ = v___y_2888_;
v___y_2806_ = v___y_2889_;
v___y_2807_ = v___y_2890_;
v___y_2808_ = v___y_2891_;
goto v___jp_2797_;
}
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
lean_dec(v___x_2892_);
lean_dec_ref(v___y_2887_);
lean_dec_ref(v___y_2886_);
lean_dec_ref(v___y_2884_);
lean_dec_ref(v_body_2795_);
v_a_2922_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2924_ = v___x_2896_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2896_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2927_; 
if (v_isShared_2925_ == 0)
{
v___x_2927_ = v___x_2924_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2922_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
}
v___jp_2930_:
{
uint8_t v___x_2939_; 
v___x_2939_ = l_Lean_Expr_isFVar(v_fst_2933_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v_a_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2949_; 
lean_dec_ref(v_fst_2933_);
lean_dec_ref(v_fst_2932_);
lean_dec_ref(v_fst_2931_);
lean_dec_ref(v_body_2795_);
lean_dec(v_mvarId_2782_);
v___x_2940_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__7, &l_Lean_Meta_introSubstEq___lam__0___closed__7_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__7);
v___x_2941_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2940_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
v_a_2942_ = lean_ctor_get(v___x_2941_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2944_ = v___x_2941_;
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_a_2942_);
lean_dec(v___x_2941_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2947_; 
if (v_isShared_2945_ == 0)
{
v___x_2947_ = v___x_2944_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2942_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
else
{
v___y_2884_ = v_fst_2931_;
v___y_2885_ = v_snd_2934_;
v___y_2886_ = v_fst_2932_;
v___y_2887_ = v_fst_2933_;
v___y_2888_ = v___y_2935_;
v___y_2889_ = v___y_2936_;
v___y_2890_ = v___y_2937_;
v___y_2891_ = v___y_2938_;
goto v___jp_2883_;
}
}
v___jp_2950_:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2964_; 
v___x_2955_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__9, &l_Lean_Meta_introSubstEq___lam__0___closed__9_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__9);
v___x_2956_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2955_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_);
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2959_ = v___x_2956_;
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2956_);
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
lean_dec(v_a_2790_);
lean_dec(v_mvarId_2782_);
goto v___jp_2791_;
}
v___jp_2791_:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2792_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__1, &l_Lean_Meta_introSubstEq___lam__0___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__1);
v___x_2793_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2792_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
return v___x_2793_;
}
}
else
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3029_; 
lean_dec(v_mvarId_2782_);
v_a_3022_ = lean_ctor_get(v___x_2789_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_2789_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3024_ = v___x_2789_;
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_2789_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3027_; 
if (v_isShared_3025_ == 0)
{
v___x_3027_ = v___x_3024_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3022_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object* v_mvarId_3030_, lean_object* v_substLHS_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
uint8_t v_substLHS_boxed_3037_; lean_object* v_res_3038_; 
v_substLHS_boxed_3037_ = lean_unbox(v_substLHS_3031_);
v_res_3038_ = l_Lean_Meta_introSubstEq___lam__0(v_mvarId_3030_, v_substLHS_boxed_3037_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
return v_res_3038_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object* v_keys_3039_, lean_object* v_i_3040_, lean_object* v_k_3041_){
_start:
{
lean_object* v___x_3042_; uint8_t v___x_3043_; 
v___x_3042_ = lean_array_get_size(v_keys_3039_);
v___x_3043_ = lean_nat_dec_lt(v_i_3040_, v___x_3042_);
if (v___x_3043_ == 0)
{
lean_dec(v_i_3040_);
return v___x_3043_;
}
else
{
lean_object* v_k_x27_3044_; uint8_t v___x_3045_; 
v_k_x27_3044_ = lean_array_fget_borrowed(v_keys_3039_, v_i_3040_);
v___x_3045_ = l_Lean_instBEqMVarId_beq(v_k_3041_, v_k_x27_3044_);
if (v___x_3045_ == 0)
{
lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = lean_unsigned_to_nat(1u);
v___x_3047_ = lean_nat_add(v_i_3040_, v___x_3046_);
lean_dec(v_i_3040_);
v_i_3040_ = v___x_3047_;
goto _start;
}
else
{
lean_dec(v_i_3040_);
return v___x_3043_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_keys_3049_, lean_object* v_i_3050_, lean_object* v_k_3051_){
_start:
{
uint8_t v_res_3052_; lean_object* v_r_3053_; 
v_res_3052_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3049_, v_i_3050_, v_k_3051_);
lean_dec(v_k_3051_);
lean_dec_ref(v_keys_3049_);
v_r_3053_ = lean_box(v_res_3052_);
return v_r_3053_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object* v_x_3054_, size_t v_x_3055_, lean_object* v_x_3056_){
_start:
{
if (lean_obj_tag(v_x_3054_) == 0)
{
lean_object* v_es_3057_; lean_object* v___x_3058_; size_t v___x_3059_; size_t v___x_3060_; lean_object* v_j_3061_; lean_object* v___x_3062_; 
v_es_3057_ = lean_ctor_get(v_x_3054_, 0);
v___x_3058_ = lean_box(2);
v___x_3059_ = ((size_t)31ULL);
v___x_3060_ = lean_usize_land(v_x_3055_, v___x_3059_);
v_j_3061_ = lean_usize_to_nat(v___x_3060_);
v___x_3062_ = lean_array_get_borrowed(v___x_3058_, v_es_3057_, v_j_3061_);
lean_dec(v_j_3061_);
switch(lean_obj_tag(v___x_3062_))
{
case 0:
{
lean_object* v_key_3063_; uint8_t v___x_3064_; 
v_key_3063_ = lean_ctor_get(v___x_3062_, 0);
v___x_3064_ = l_Lean_instBEqMVarId_beq(v_x_3056_, v_key_3063_);
return v___x_3064_;
}
case 1:
{
lean_object* v_node_3065_; size_t v___x_3066_; size_t v___x_3067_; 
v_node_3065_ = lean_ctor_get(v___x_3062_, 0);
v___x_3066_ = ((size_t)5ULL);
v___x_3067_ = lean_usize_shift_right(v_x_3055_, v___x_3066_);
v_x_3054_ = v_node_3065_;
v_x_3055_ = v___x_3067_;
goto _start;
}
default: 
{
uint8_t v___x_3069_; 
v___x_3069_ = 0;
return v___x_3069_;
}
}
}
else
{
lean_object* v_ks_3070_; lean_object* v___x_3071_; uint8_t v___x_3072_; 
v_ks_3070_ = lean_ctor_get(v_x_3054_, 0);
v___x_3071_ = lean_unsigned_to_nat(0u);
v___x_3072_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_ks_3070_, v___x_3071_, v_x_3056_);
return v___x_3072_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_x_3073_, lean_object* v_x_3074_, lean_object* v_x_3075_){
_start:
{
size_t v_x_11205__boxed_3076_; uint8_t v_res_3077_; lean_object* v_r_3078_; 
v_x_11205__boxed_3076_ = lean_unbox_usize(v_x_3074_);
lean_dec(v_x_3074_);
v_res_3077_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3073_, v_x_11205__boxed_3076_, v_x_3075_);
lean_dec(v_x_3075_);
lean_dec_ref(v_x_3073_);
v_r_3078_ = lean_box(v_res_3077_);
return v_r_3078_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object* v_x_3079_, lean_object* v_x_3080_){
_start:
{
uint64_t v___x_3081_; size_t v___x_3082_; uint8_t v___x_3083_; 
v___x_3081_ = l_Lean_instHashableMVarId_hash(v_x_3080_);
v___x_3082_ = lean_uint64_to_usize(v___x_3081_);
v___x_3083_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3079_, v___x_3082_, v_x_3080_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object* v_x_3084_, lean_object* v_x_3085_){
_start:
{
uint8_t v_res_3086_; lean_object* v_r_3087_; 
v_res_3086_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3084_, v_x_3085_);
lean_dec(v_x_3085_);
lean_dec_ref(v_x_3084_);
v_r_3087_ = lean_box(v_res_3086_);
return v_r_3087_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object* v_mvarId_3088_, lean_object* v___y_3089_){
_start:
{
lean_object* v___x_3091_; lean_object* v_mctx_3092_; lean_object* v_eAssignment_3093_; uint8_t v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3091_ = lean_st_ref_get(v___y_3089_);
v_mctx_3092_ = lean_ctor_get(v___x_3091_, 0);
lean_inc_ref(v_mctx_3092_);
lean_dec(v___x_3091_);
v_eAssignment_3093_ = lean_ctor_get(v_mctx_3092_, 8);
lean_inc_ref(v_eAssignment_3093_);
lean_dec_ref(v_mctx_3092_);
v___x_3094_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_eAssignment_3093_, v_mvarId_3088_);
lean_dec_ref(v_eAssignment_3093_);
v___x_3095_ = lean_box(v___x_3094_);
v___x_3096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object* v_mvarId_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_){
_start:
{
lean_object* v_res_3100_; 
v_res_3100_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3097_, v___y_3098_);
lean_dec(v___y_3098_);
lean_dec(v_mvarId_3097_);
return v_res_3100_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3102_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__1___closed__0));
v___x_3103_ = l_Lean_stringToMessageData(v___x_3102_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object* v_mvarId_3104_, uint8_t v___x_3105_, lean_object* v_____r_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v___x_3144_; lean_object* v_a_3145_; uint8_t v___x_3146_; 
v___x_3144_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3104_, v___y_3108_);
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
lean_inc(v_a_3145_);
lean_dec_ref(v___x_3144_);
v___x_3146_ = lean_unbox(v_a_3145_);
lean_dec(v_a_3145_);
if (v___x_3146_ == 0)
{
goto v___jp_3112_;
}
else
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v_mvarId_3104_);
v___x_3147_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__1___closed__1, &l_Lean_Meta_introSubstEq___lam__1___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__1___closed__1);
v___x_3148_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_3147_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_);
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3148_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3148_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
v___jp_3112_:
{
lean_object* v___x_3113_; 
v___x_3113_ = l_Lean_Meta_intro1Core(v_mvarId_3104_, v___x_3105_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v_fst_3115_; lean_object* v_snd_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3114_);
lean_dec_ref_known(v___x_3113_, 1);
v_fst_3115_ = lean_ctor_get(v_a_3114_, 0);
lean_inc(v_fst_3115_);
v_snd_3116_ = lean_ctor_get(v_a_3114_, 1);
lean_inc(v_snd_3116_);
lean_dec(v_a_3114_);
v___x_3117_ = lean_box(0);
v___x_3118_ = l_Lean_Meta_substEq(v_snd_3116_, v_fst_3115_, v___x_3117_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3127_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3121_ = v___x_3118_;
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_dec(v___x_3118_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; lean_object* v___x_3125_; 
v___x_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3123_, 0, v_a_3119_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v___x_3123_);
v___x_3125_ = v___x_3121_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3123_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
v_a_3128_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3118_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3118_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
v_a_3136_ = lean_ctor_get(v___x_3113_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3113_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3113_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3113_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object* v_mvarId_3157_, lean_object* v___x_3158_, lean_object* v_____r_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
uint8_t v___x_11277__boxed_3165_; lean_object* v_res_3166_; 
v___x_11277__boxed_3165_ = lean_unbox(v___x_3158_);
v_res_3166_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3157_, v___x_11277__boxed_3165_, v_____r_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
return v_res_3166_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__2(void){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_3171_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
v___x_3172_ = l_Lean_Name_append(v___x_3171_, v___x_3170_);
return v___x_3172_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__4(void){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__3));
v___x_3175_ = l_Lean_stringToMessageData(v___x_3174_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__6(void){
_start:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3177_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__5));
v___x_3178_ = l_Lean_stringToMessageData(v___x_3177_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object* v_mvarId_3179_, uint8_t v_substLHS_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_){
_start:
{
lean_object* v___y_3187_; lean_object* v___x_3205_; lean_object* v___f_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3205_ = lean_box(v_substLHS_3180_);
lean_inc_n(v_mvarId_3179_, 2);
v___f_3206_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3206_, 0, v_mvarId_3179_);
lean_closure_set(v___f_3206_, 1, v___x_3205_);
v___x_3207_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__1));
v___x_3208_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3179_, v___x_3207_, v_a_3181_, v_a_3182_, v_a_3183_, v_a_3184_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v___x_3209_; lean_object* v___x_3210_; 
lean_dec_ref_known(v___x_3208_, 1);
lean_inc(v_mvarId_3179_);
v___x_3209_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed), 8, 3);
lean_closure_set(v___x_3209_, 0, lean_box(0));
lean_closure_set(v___x_3209_, 1, v_mvarId_3179_);
lean_closure_set(v___x_3209_, 2, v___f_3206_);
v___x_3210_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v___x_3209_, v_a_3181_, v_a_3182_, v_a_3183_, v_a_3184_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_dec(v_mvarId_3179_);
return v___x_3210_;
}
else
{
lean_object* v_a_3211_; uint8_t v___x_3212_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
v___x_3212_ = l_Lean_Exception_isInterrupt(v_a_3211_);
if (v___x_3212_ == 0)
{
uint8_t v___x_3213_; 
lean_inc(v_a_3211_);
v___x_3213_ = l_Lean_Exception_isRuntime(v_a_3211_);
if (v___x_3213_ == 0)
{
lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3247_; 
lean_inc(v_a_3211_);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3247_ == 0)
{
lean_object* v_unused_3248_; 
v_unused_3248_ = lean_ctor_get(v___x_3210_, 0);
lean_dec(v_unused_3248_);
v___x_3215_ = v___x_3210_;
v_isShared_3216_ = v_isSharedCheck_3247_;
goto v_resetjp_3214_;
}
else
{
lean_dec(v___x_3210_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3247_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v_toCold_3217_; lean_object* v_options_3218_; lean_object* v_inheritedTraceOptions_3219_; uint8_t v_hasTrace_3220_; 
v_toCold_3217_ = lean_ctor_get(v_a_3183_, 0);
v_options_3218_ = lean_ctor_get(v_toCold_3217_, 2);
v_inheritedTraceOptions_3219_ = lean_ctor_get(v_toCold_3217_, 11);
v_hasTrace_3220_ = lean_ctor_get_uint8(v_options_3218_, sizeof(void*)*1);
if (v_hasTrace_3220_ == 0)
{
lean_del_object(v___x_3215_);
lean_dec(v_a_3211_);
goto v___jp_3221_;
}
else
{
lean_object* v___x_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; 
v___x_3224_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_3225_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__2, &l_Lean_Meta_introSubstEq___closed__2_once, _init_l_Lean_Meta_introSubstEq___closed__2);
v___x_3226_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3219_, v_options_3218_, v___x_3225_);
if (v___x_3226_ == 0)
{
lean_del_object(v___x_3215_);
lean_dec(v_a_3211_);
goto v___jp_3221_;
}
else
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3233_; 
v___x_3227_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__4, &l_Lean_Meta_introSubstEq___closed__4_once, _init_l_Lean_Meta_introSubstEq___closed__4);
v___x_3228_ = l_Lean_Exception_toMessageData(v_a_3211_);
v___x_3229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3227_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__6, &l_Lean_Meta_introSubstEq___closed__6_once, _init_l_Lean_Meta_introSubstEq___closed__6);
v___x_3231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3229_);
lean_ctor_set(v___x_3231_, 1, v___x_3230_);
lean_inc(v_mvarId_3179_);
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 0, v_mvarId_3179_);
v___x_3233_ = v___x_3215_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_mvarId_3179_);
v___x_3233_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3231_);
lean_ctor_set(v___x_3234_, 1, v___x_3233_);
v___x_3235_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_3224_, v___x_3234_, v_a_3181_, v_a_3182_, v_a_3183_, v_a_3184_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3237_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3235_, 1);
v___x_3237_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3179_, v___x_3213_, v_a_3236_, v_a_3181_, v_a_3182_, v_a_3183_, v_a_3184_);
v___y_3187_ = v___x_3237_;
goto v___jp_3186_;
}
else
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec(v_mvarId_3179_);
v_a_3238_ = lean_ctor_get(v___x_3235_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3235_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3235_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3243_; 
if (v_isShared_3241_ == 0)
{
v___x_3243_ = v___x_3240_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_a_3238_);
v___x_3243_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
return v___x_3243_;
}
}
}
}
}
}
v___jp_3221_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_box(0);
v___x_3223_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3179_, v___x_3213_, v___x_3222_, v_a_3181_, v_a_3182_, v_a_3183_, v_a_3184_);
v___y_3187_ = v___x_3223_;
goto v___jp_3186_;
}
}
}
else
{
lean_dec(v_mvarId_3179_);
return v___x_3210_;
}
}
else
{
lean_dec(v_mvarId_3179_);
return v___x_3210_;
}
}
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_dec_ref(v___f_3206_);
lean_dec(v_mvarId_3179_);
v_a_3249_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3208_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3208_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
v___jp_3186_:
{
if (lean_obj_tag(v___y_3187_) == 0)
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3196_; 
v_a_3188_ = lean_ctor_get(v___y_3187_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v___y_3187_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3190_ = v___y_3187_;
v_isShared_3191_ = v_isSharedCheck_3196_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___y_3187_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3196_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v_a_3192_; lean_object* v___x_3194_; 
v_a_3192_ = lean_ctor_get(v_a_3188_, 0);
lean_inc(v_a_3192_);
lean_dec(v_a_3188_);
if (v_isShared_3191_ == 0)
{
lean_ctor_set(v___x_3190_, 0, v_a_3192_);
v___x_3194_ = v___x_3190_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3192_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
else
{
lean_object* v_a_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3204_; 
v_a_3197_ = lean_ctor_get(v___y_3187_, 0);
v_isSharedCheck_3204_ = !lean_is_exclusive(v___y_3187_);
if (v_isSharedCheck_3204_ == 0)
{
v___x_3199_ = v___y_3187_;
v_isShared_3200_ = v_isSharedCheck_3204_;
goto v_resetjp_3198_;
}
else
{
lean_inc(v_a_3197_);
lean_dec(v___y_3187_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3204_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v___x_3202_; 
if (v_isShared_3200_ == 0)
{
v___x_3202_ = v___x_3199_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v_a_3197_);
v___x_3202_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
return v___x_3202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object* v_mvarId_3257_, lean_object* v_substLHS_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_){
_start:
{
uint8_t v_substLHS_boxed_3264_; lean_object* v_res_3265_; 
v_substLHS_boxed_3264_ = lean_unbox(v_substLHS_3258_);
v_res_3265_ = l_Lean_Meta_introSubstEq(v_mvarId_3257_, v_substLHS_boxed_3264_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_);
lean_dec(v_a_3262_);
lean_dec_ref(v_a_3261_);
lean_dec(v_a_3260_);
lean_dec_ref(v_a_3259_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object* v_00_u03b1_3266_, lean_object* v_msg_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v___x_3273_; 
v___x_3273_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object* v_00_u03b1_3274_, lean_object* v_msg_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(v_00_u03b1_3274_, v_msg_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object* v_mvarId_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3282_, v___y_3284_);
return v___x_3288_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object* v_mvarId_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(v_mvarId_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v_mvarId_3289_);
return v_res_3295_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object* v_00_u03b2_3296_, lean_object* v_x_3297_, lean_object* v_x_3298_){
_start:
{
uint8_t v___x_3299_; 
v___x_3299_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3297_, v_x_3298_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3300_, lean_object* v_x_3301_, lean_object* v_x_3302_){
_start:
{
uint8_t v_res_3303_; lean_object* v_r_3304_; 
v_res_3303_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(v_00_u03b2_3300_, v_x_3301_, v_x_3302_);
lean_dec(v_x_3302_);
lean_dec_ref(v_x_3301_);
v_r_3304_ = lean_box(v_res_3303_);
return v_r_3304_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object* v_00_u03b2_3305_, lean_object* v_x_3306_, size_t v_x_3307_, lean_object* v_x_3308_){
_start:
{
uint8_t v___x_3309_; 
v___x_3309_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3306_, v_x_3307_, v_x_3308_);
return v___x_3309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3310_, lean_object* v_x_3311_, lean_object* v_x_3312_, lean_object* v_x_3313_){
_start:
{
size_t v_x_11623__boxed_3314_; uint8_t v_res_3315_; lean_object* v_r_3316_; 
v_x_11623__boxed_3314_ = lean_unbox_usize(v_x_3312_);
lean_dec(v_x_3312_);
v_res_3315_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(v_00_u03b2_3310_, v_x_3311_, v_x_11623__boxed_3314_, v_x_3313_);
lean_dec(v_x_3313_);
lean_dec_ref(v_x_3311_);
v_r_3316_ = lean_box(v_res_3315_);
return v_r_3316_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3317_, lean_object* v_keys_3318_, lean_object* v_vals_3319_, lean_object* v_heq_3320_, lean_object* v_i_3321_, lean_object* v_k_3322_){
_start:
{
uint8_t v___x_3323_; 
v___x_3323_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3318_, v_i_3321_, v_k_3322_);
return v___x_3323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3324_, lean_object* v_keys_3325_, lean_object* v_vals_3326_, lean_object* v_heq_3327_, lean_object* v_i_3328_, lean_object* v_k_3329_){
_start:
{
uint8_t v_res_3330_; lean_object* v_r_3331_; 
v_res_3330_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(v_00_u03b2_3324_, v_keys_3325_, v_vals_3326_, v_heq_3327_, v_i_3328_, v_k_3329_);
lean_dec(v_k_3329_);
lean_dec_ref(v_vals_3326_);
lean_dec_ref(v_keys_3325_);
v_r_3331_ = lean_box(v_res_3330_);
return v_r_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object* v_x_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = l_Lean_Meta_saveState___redArg(v___y_3334_, v___y_3336_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; lean_object* v___x_3340_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_a_3339_);
lean_dec_ref_known(v___x_3338_, 1);
lean_inc(v___y_3336_);
lean_inc_ref(v___y_3335_);
lean_inc(v___y_3334_);
lean_inc_ref(v___y_3333_);
v___x_3340_ = lean_apply_5(v_x_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_, lean_box(0));
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3349_; 
lean_dec(v_a_3339_);
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3343_ = v___x_3340_;
v_isShared_3344_ = v_isSharedCheck_3349_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3340_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3349_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3345_; lean_object* v___x_3347_; 
v___x_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3345_, 0, v_a_3341_);
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 0, v___x_3345_);
v___x_3347_ = v___x_3343_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v___x_3345_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3380_; 
v_a_3350_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3352_ = v___x_3340_;
v_isShared_3353_ = v_isSharedCheck_3380_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3340_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3380_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
uint8_t v___x_3354_; 
v___x_3354_ = l_Lean_Exception_isInterrupt(v_a_3350_);
if (v___x_3354_ == 0)
{
uint8_t v___x_3355_; 
lean_inc(v_a_3350_);
v___x_3355_ = l_Lean_Exception_isRuntime(v_a_3350_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; 
lean_del_object(v___x_3352_);
lean_dec(v_a_3350_);
v___x_3356_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3339_, v___y_3334_, v___y_3336_);
if (lean_obj_tag(v___x_3356_) == 0)
{
lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3364_; 
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3364_ == 0)
{
lean_object* v_unused_3365_; 
v_unused_3365_ = lean_ctor_get(v___x_3356_, 0);
lean_dec(v_unused_3365_);
v___x_3358_ = v___x_3356_;
v_isShared_3359_ = v_isSharedCheck_3364_;
goto v_resetjp_3357_;
}
else
{
lean_dec(v___x_3356_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3364_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3360_; lean_object* v___x_3362_; 
v___x_3360_ = lean_box(0);
if (v_isShared_3359_ == 0)
{
lean_ctor_set(v___x_3358_, 0, v___x_3360_);
v___x_3362_ = v___x_3358_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v___x_3360_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
else
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3373_; 
v_a_3366_ = lean_ctor_get(v___x_3356_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3368_ = v___x_3356_;
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v___x_3356_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
if (v_isShared_3369_ == 0)
{
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_a_3366_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
}
}
}
}
else
{
lean_object* v___x_3375_; 
lean_dec(v_a_3339_);
if (v_isShared_3353_ == 0)
{
v___x_3375_ = v___x_3352_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3350_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
else
{
lean_object* v___x_3378_; 
lean_dec(v_a_3339_);
if (v_isShared_3353_ == 0)
{
v___x_3378_ = v___x_3352_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3350_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec_ref(v_x_3332_);
v_a_3381_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3338_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3338_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object* v_x_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object* v_00_u03b1_3396_, lean_object* v_x_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_){
_start:
{
lean_object* v___x_3403_; 
v___x_3403_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object* v_00_u03b1_3404_, lean_object* v_x_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(v_00_u03b1_3404_, v_x_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_);
lean_dec(v___y_3409_);
lean_dec_ref(v___y_3408_);
lean_dec(v___y_3407_);
lean_dec_ref(v___y_3406_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object* v_mvarId_3412_, lean_object* v_hFVarId_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3419_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___boxed), 7, 2);
lean_closure_set(v___x_3419_, 0, v_mvarId_3412_);
lean_closure_set(v___x_3419_, 1, v_hFVarId_3413_);
v___x_3420_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3419_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_);
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object* v_mvarId_3421_, lean_object* v_hFVarId_3422_, lean_object* v_a_3423_, lean_object* v_a_3424_, lean_object* v_a_3425_, lean_object* v_a_3426_, lean_object* v_a_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = l_Lean_Meta_substVar_x3f(v_mvarId_3421_, v_hFVarId_3422_, v_a_3423_, v_a_3424_, v_a_3425_, v_a_3426_);
lean_dec(v_a_3426_);
lean_dec_ref(v_a_3425_);
lean_dec(v_a_3424_);
lean_dec_ref(v_a_3423_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object* v_mvarId_3429_, lean_object* v_hFVarId_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_, lean_object* v_a_3434_){
_start:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; 
v___x_3436_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___boxed), 7, 2);
lean_closure_set(v___x_3436_, 0, v_mvarId_3429_);
lean_closure_set(v___x_3436_, 1, v_hFVarId_3430_);
v___x_3437_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3436_, v_a_3431_, v_a_3432_, v_a_3433_, v_a_3434_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object* v_mvarId_3438_, lean_object* v_hFVarId_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lean_Meta_subst_x3f(v_mvarId_3438_, v_hFVarId_3439_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_);
lean_dec(v_a_3443_);
lean_dec_ref(v_a_3442_);
lean_dec(v_a_3441_);
lean_dec_ref(v_a_3440_);
return v_res_3445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object* v_mvarId_3446_, lean_object* v_hFVarId_3447_, uint8_t v_symm_3448_, lean_object* v_fvarSubst_3449_, uint8_t v_clearH_3450_, uint8_t v_tryToSkip_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_, lean_object* v_a_3455_){
_start:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3457_ = lean_box(v_symm_3448_);
v___x_3458_ = lean_box(v_clearH_3450_);
v___x_3459_ = lean_box(v_tryToSkip_3451_);
v___x_3460_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_3460_, 0, v_mvarId_3446_);
lean_closure_set(v___x_3460_, 1, v_hFVarId_3447_);
lean_closure_set(v___x_3460_, 2, v___x_3457_);
lean_closure_set(v___x_3460_, 3, v_fvarSubst_3449_);
lean_closure_set(v___x_3460_, 4, v___x_3458_);
lean_closure_set(v___x_3460_, 5, v___x_3459_);
v___x_3461_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3460_, v_a_3452_, v_a_3453_, v_a_3454_, v_a_3455_);
return v___x_3461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object* v_mvarId_3462_, lean_object* v_hFVarId_3463_, lean_object* v_symm_3464_, lean_object* v_fvarSubst_3465_, lean_object* v_clearH_3466_, lean_object* v_tryToSkip_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_){
_start:
{
uint8_t v_symm_boxed_3473_; uint8_t v_clearH_boxed_3474_; uint8_t v_tryToSkip_boxed_3475_; lean_object* v_res_3476_; 
v_symm_boxed_3473_ = lean_unbox(v_symm_3464_);
v_clearH_boxed_3474_ = lean_unbox(v_clearH_3466_);
v_tryToSkip_boxed_3475_ = lean_unbox(v_tryToSkip_3467_);
v_res_3476_ = l_Lean_Meta_substCore_x3f(v_mvarId_3462_, v_hFVarId_3463_, v_symm_boxed_3473_, v_fvarSubst_3465_, v_clearH_boxed_3474_, v_tryToSkip_boxed_3475_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
lean_dec(v_a_3471_);
lean_dec_ref(v_a_3470_);
lean_dec(v_a_3469_);
lean_dec_ref(v_a_3468_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object* v_mvarId_3477_, lean_object* v_hFVarId_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_){
_start:
{
lean_object* v___x_3484_; 
lean_inc(v_mvarId_3477_);
v___x_3484_ = l_Lean_Meta_substVar_x3f(v_mvarId_3477_, v_hFVarId_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3484_) == 0)
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3496_; 
v_a_3485_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3487_ = v___x_3484_;
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3484_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3496_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
if (lean_obj_tag(v_a_3485_) == 0)
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v_mvarId_3477_);
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_mvarId_3477_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
else
{
lean_object* v_val_3492_; lean_object* v___x_3494_; 
lean_dec(v_mvarId_3477_);
v_val_3492_ = lean_ctor_get(v_a_3485_, 0);
lean_inc(v_val_3492_);
lean_dec_ref_known(v_a_3485_, 1);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v_val_3492_);
v___x_3494_ = v___x_3487_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_val_3492_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_dec(v_mvarId_3477_);
v_a_3497_ = lean_ctor_get(v___x_3484_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3484_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3484_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3484_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object* v_mvarId_3505_, lean_object* v_hFVarId_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_){
_start:
{
lean_object* v_res_3512_; 
v_res_3512_ = l_Lean_Meta_trySubstVar(v_mvarId_3505_, v_hFVarId_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_);
lean_dec(v_a_3510_);
lean_dec_ref(v_a_3509_);
lean_dec(v_a_3508_);
lean_dec_ref(v_a_3507_);
return v_res_3512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object* v_mvarId_3513_, lean_object* v_hFVarId_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_){
_start:
{
lean_object* v___x_3520_; 
lean_inc(v_mvarId_3513_);
v___x_3520_ = l_Lean_Meta_subst_x3f(v_mvarId_3513_, v_hFVarId_3514_, v_a_3515_, v_a_3516_, v_a_3517_, v_a_3518_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3532_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3523_ = v___x_3520_;
v_isShared_3524_ = v_isSharedCheck_3532_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3520_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3532_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
if (lean_obj_tag(v_a_3521_) == 0)
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 0, v_mvarId_3513_);
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_mvarId_3513_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
else
{
lean_object* v_val_3528_; lean_object* v___x_3530_; 
lean_dec(v_mvarId_3513_);
v_val_3528_ = lean_ctor_get(v_a_3521_, 0);
lean_inc(v_val_3528_);
lean_dec_ref_known(v_a_3521_, 1);
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 0, v_val_3528_);
v___x_3530_ = v___x_3523_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_val_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
else
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3540_; 
lean_dec(v_mvarId_3513_);
v_a_3533_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3535_ = v___x_3520_;
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3520_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3538_; 
if (v_isShared_3536_ == 0)
{
v___x_3538_ = v___x_3535_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_a_3533_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object* v_mvarId_3541_, lean_object* v_hFVarId_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_){
_start:
{
lean_object* v_res_3548_; 
v_res_3548_ = l_Lean_Meta_trySubst(v_mvarId_3541_, v_hFVarId_3542_, v_a_3543_, v_a_3544_, v_a_3545_, v_a_3546_);
lean_dec(v_a_3546_);
lean_dec_ref(v_a_3545_);
lean_dec(v_a_3544_);
lean_dec_ref(v_a_3543_);
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_mvarId_3552_, lean_object* v_as_3553_, size_t v_sz_3554_, size_t v_i_3555_, lean_object* v_b_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_){
_start:
{
uint8_t v___x_3562_; 
v___x_3562_ = lean_usize_dec_lt(v_i_3555_, v_sz_3554_);
if (v___x_3562_ == 0)
{
lean_object* v___x_3563_; 
lean_dec(v_mvarId_3552_);
v___x_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3563_, 0, v_b_3556_);
return v___x_3563_;
}
else
{
lean_object* v_snd_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3617_; 
v_snd_3564_ = lean_ctor_get(v_b_3556_, 1);
v_isSharedCheck_3617_ = !lean_is_exclusive(v_b_3556_);
if (v_isSharedCheck_3617_ == 0)
{
lean_object* v_unused_3618_; 
v_unused_3618_ = lean_ctor_get(v_b_3556_, 0);
lean_dec(v_unused_3618_);
v___x_3566_ = v_b_3556_;
v_isShared_3567_ = v_isSharedCheck_3617_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_snd_3564_);
lean_dec(v_b_3556_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3617_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3568_; lean_object* v_a_3570_; lean_object* v_a_3577_; 
v___x_3568_ = lean_box(0);
v_a_3577_ = lean_array_uget(v_as_3553_, v_i_3555_);
if (lean_obj_tag(v_a_3577_) == 0)
{
v_a_3570_ = v_snd_3564_;
goto v___jp_3569_;
}
else
{
lean_object* v_val_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3616_; 
v_val_3578_ = lean_ctor_get(v_a_3577_, 0);
v_isSharedCheck_3616_ = !lean_is_exclusive(v_a_3577_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3580_ = v_a_3577_;
v_isShared_3581_ = v_isSharedCheck_3616_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_val_3578_);
lean_dec(v_a_3577_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3616_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3582_ = lean_box(0);
v___x_3583_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3584_ = l_Lean_LocalDecl_fvarId(v_val_3578_);
lean_dec(v_val_3578_);
lean_inc(v_mvarId_3552_);
v___x_3585_ = l_Lean_Meta_subst_x3f(v_mvarId_3552_, v___x_3584_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3607_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3588_ = v___x_3585_;
v_isShared_3589_ = v_isSharedCheck_3607_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3585_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3607_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
if (lean_obj_tag(v_a_3586_) == 1)
{
lean_object* v___x_3591_; 
lean_del_object(v___x_3566_);
lean_dec(v_mvarId_3552_);
lean_inc_ref(v_a_3586_);
if (v_isShared_3581_ == 0)
{
lean_ctor_set(v___x_3580_, 0, v_a_3586_);
v___x_3591_ = v___x_3580_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3586_);
v___x_3591_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3604_; 
v_isSharedCheck_3604_ = !lean_is_exclusive(v_a_3586_);
if (v_isSharedCheck_3604_ == 0)
{
lean_object* v_unused_3605_; 
v_unused_3605_ = lean_ctor_get(v_a_3586_, 0);
lean_dec(v_unused_3605_);
v___x_3593_ = v_a_3586_;
v_isShared_3594_ = v_isSharedCheck_3604_;
goto v_resetjp_3592_;
}
else
{
lean_dec(v_a_3586_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3604_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3595_; lean_object* v___x_3597_; 
v___x_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3591_);
lean_ctor_set(v___x_3595_, 1, v___x_3582_);
if (v_isShared_3594_ == 0)
{
lean_ctor_set_tag(v___x_3593_, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3595_);
v___x_3597_ = v___x_3593_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3595_);
v___x_3597_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3601_; 
v___x_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
v___x_3599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3598_);
lean_ctor_set(v___x_3599_, 1, v_snd_3564_);
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 0, v___x_3599_);
v___x_3601_ = v___x_3588_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
}
}
else
{
lean_del_object(v___x_3588_);
lean_dec(v_a_3586_);
lean_del_object(v___x_3580_);
lean_dec(v_snd_3564_);
v_a_3570_ = v___x_3583_;
goto v___jp_3569_;
}
}
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3615_; 
lean_del_object(v___x_3580_);
lean_del_object(v___x_3566_);
lean_dec(v_snd_3564_);
lean_dec(v_mvarId_3552_);
v_a_3608_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3610_ = v___x_3585_;
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3585_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3613_; 
if (v_isShared_3611_ == 0)
{
v___x_3613_ = v___x_3610_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_a_3608_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
}
v___jp_3569_:
{
lean_object* v___x_3572_; 
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 1, v_a_3570_);
lean_ctor_set(v___x_3566_, 0, v___x_3568_);
v___x_3572_ = v___x_3566_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3568_);
lean_ctor_set(v_reuseFailAlloc_3576_, 1, v_a_3570_);
v___x_3572_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
size_t v___x_3573_; size_t v___x_3574_; 
v___x_3573_ = ((size_t)1ULL);
v___x_3574_ = lean_usize_add(v_i_3555_, v___x_3573_);
v_i_3555_ = v___x_3574_;
v_b_3556_ = v___x_3572_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_mvarId_3619_, lean_object* v_as_3620_, lean_object* v_sz_3621_, lean_object* v_i_3622_, lean_object* v_b_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
size_t v_sz_boxed_3629_; size_t v_i_boxed_3630_; lean_object* v_res_3631_; 
v_sz_boxed_3629_ = lean_unbox_usize(v_sz_3621_);
lean_dec(v_sz_3621_);
v_i_boxed_3630_ = lean_unbox_usize(v_i_3622_);
lean_dec(v_i_3622_);
v_res_3631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3619_, v_as_3620_, v_sz_boxed_3629_, v_i_boxed_3630_, v_b_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_);
lean_dec(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec(v___y_3625_);
lean_dec_ref(v___y_3624_);
lean_dec_ref(v_as_3620_);
return v_res_3631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object* v_mvarId_3632_, lean_object* v_as_3633_, size_t v_sz_3634_, size_t v_i_3635_, lean_object* v_b_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_){
_start:
{
uint8_t v___x_3642_; 
v___x_3642_ = lean_usize_dec_lt(v_i_3635_, v_sz_3634_);
if (v___x_3642_ == 0)
{
lean_object* v___x_3643_; 
lean_dec(v_mvarId_3632_);
v___x_3643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3643_, 0, v_b_3636_);
return v___x_3643_;
}
else
{
lean_object* v_snd_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3697_; 
v_snd_3644_ = lean_ctor_get(v_b_3636_, 1);
v_isSharedCheck_3697_ = !lean_is_exclusive(v_b_3636_);
if (v_isSharedCheck_3697_ == 0)
{
lean_object* v_unused_3698_; 
v_unused_3698_ = lean_ctor_get(v_b_3636_, 0);
lean_dec(v_unused_3698_);
v___x_3646_ = v_b_3636_;
v_isShared_3647_ = v_isSharedCheck_3697_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_snd_3644_);
lean_dec(v_b_3636_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3697_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3648_; lean_object* v_a_3650_; lean_object* v_a_3657_; 
v___x_3648_ = lean_box(0);
v_a_3657_ = lean_array_uget(v_as_3633_, v_i_3635_);
if (lean_obj_tag(v_a_3657_) == 0)
{
v_a_3650_ = v_snd_3644_;
goto v___jp_3649_;
}
else
{
lean_object* v_val_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3696_; 
v_val_3658_ = lean_ctor_get(v_a_3657_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v_a_3657_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3660_ = v_a_3657_;
v_isShared_3661_ = v_isSharedCheck_3696_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_val_3658_);
lean_dec(v_a_3657_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3696_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; 
v___x_3662_ = lean_box(0);
v___x_3663_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3664_ = l_Lean_LocalDecl_fvarId(v_val_3658_);
lean_dec(v_val_3658_);
lean_inc(v_mvarId_3632_);
v___x_3665_ = l_Lean_Meta_subst_x3f(v_mvarId_3632_, v___x_3664_, v___y_3637_, v___y_3638_, v___y_3639_, v___y_3640_);
if (lean_obj_tag(v___x_3665_) == 0)
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3687_; 
v_a_3666_ = lean_ctor_get(v___x_3665_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3665_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3668_ = v___x_3665_;
v_isShared_3669_ = v_isSharedCheck_3687_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3665_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3687_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
if (lean_obj_tag(v_a_3666_) == 1)
{
lean_object* v___x_3671_; 
lean_del_object(v___x_3646_);
lean_dec(v_mvarId_3632_);
lean_inc_ref(v_a_3666_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set(v___x_3660_, 0, v_a_3666_);
v___x_3671_ = v___x_3660_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3684_; 
v_isSharedCheck_3684_ = !lean_is_exclusive(v_a_3666_);
if (v_isSharedCheck_3684_ == 0)
{
lean_object* v_unused_3685_; 
v_unused_3685_ = lean_ctor_get(v_a_3666_, 0);
lean_dec(v_unused_3685_);
v___x_3673_ = v_a_3666_;
v_isShared_3674_ = v_isSharedCheck_3684_;
goto v_resetjp_3672_;
}
else
{
lean_dec(v_a_3666_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3684_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3675_; lean_object* v___x_3677_; 
v___x_3675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3671_);
lean_ctor_set(v___x_3675_, 1, v___x_3662_);
if (v_isShared_3674_ == 0)
{
lean_ctor_set_tag(v___x_3673_, 0);
lean_ctor_set(v___x_3673_, 0, v___x_3675_);
v___x_3677_ = v___x_3673_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3681_; 
v___x_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3678_, 0, v___x_3677_);
v___x_3679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3678_);
lean_ctor_set(v___x_3679_, 1, v_snd_3644_);
if (v_isShared_3669_ == 0)
{
lean_ctor_set(v___x_3668_, 0, v___x_3679_);
v___x_3681_ = v___x_3668_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v___x_3679_);
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
else
{
lean_del_object(v___x_3668_);
lean_dec(v_a_3666_);
lean_del_object(v___x_3660_);
lean_dec(v_snd_3644_);
v_a_3650_ = v___x_3663_;
goto v___jp_3649_;
}
}
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3695_; 
lean_del_object(v___x_3660_);
lean_del_object(v___x_3646_);
lean_dec(v_snd_3644_);
lean_dec(v_mvarId_3632_);
v_a_3688_ = lean_ctor_get(v___x_3665_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3665_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3690_ = v___x_3665_;
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3665_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3693_; 
if (v_isShared_3691_ == 0)
{
v___x_3693_ = v___x_3690_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3688_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
}
v___jp_3649_:
{
lean_object* v___x_3652_; 
if (v_isShared_3647_ == 0)
{
lean_ctor_set(v___x_3646_, 1, v_a_3650_);
lean_ctor_set(v___x_3646_, 0, v___x_3648_);
v___x_3652_ = v___x_3646_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v___x_3648_);
lean_ctor_set(v_reuseFailAlloc_3656_, 1, v_a_3650_);
v___x_3652_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
size_t v___x_3653_; size_t v___x_3654_; lean_object* v___x_3655_; 
v___x_3653_ = ((size_t)1ULL);
v___x_3654_ = lean_usize_add(v_i_3635_, v___x_3653_);
v___x_3655_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3632_, v_as_3633_, v_sz_3634_, v___x_3654_, v___x_3652_, v___y_3637_, v___y_3638_, v___y_3639_, v___y_3640_);
return v___x_3655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_mvarId_3699_, lean_object* v_as_3700_, lean_object* v_sz_3701_, lean_object* v_i_3702_, lean_object* v_b_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
size_t v_sz_boxed_3709_; size_t v_i_boxed_3710_; lean_object* v_res_3711_; 
v_sz_boxed_3709_ = lean_unbox_usize(v_sz_3701_);
lean_dec(v_sz_3701_);
v_i_boxed_3710_ = lean_unbox_usize(v_i_3702_);
lean_dec(v_i_3702_);
v_res_3711_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3699_, v_as_3700_, v_sz_boxed_3709_, v_i_boxed_3710_, v_b_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_);
lean_dec(v___y_3707_);
lean_dec_ref(v___y_3706_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec_ref(v_as_3700_);
return v_res_3711_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object* v_init_3712_, lean_object* v_mvarId_3713_, lean_object* v_n_3714_, lean_object* v_b_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_){
_start:
{
if (lean_obj_tag(v_n_3714_) == 0)
{
lean_object* v_cs_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; size_t v_sz_3724_; size_t v___x_3725_; lean_object* v___x_3726_; 
v_cs_3721_ = lean_ctor_get(v_n_3714_, 0);
v___x_3722_ = lean_box(0);
v___x_3723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3722_);
lean_ctor_set(v___x_3723_, 1, v_b_3715_);
v_sz_3724_ = lean_array_size(v_cs_3721_);
v___x_3725_ = ((size_t)0ULL);
v___x_3726_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3712_, v_mvarId_3713_, v_cs_3721_, v_sz_3724_, v___x_3725_, v___x_3723_, v___y_3716_, v___y_3717_, v___y_3718_, v___y_3719_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3741_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3729_ = v___x_3726_;
v_isShared_3730_ = v_isSharedCheck_3741_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3726_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3741_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v_fst_3731_; 
v_fst_3731_ = lean_ctor_get(v_a_3727_, 0);
if (lean_obj_tag(v_fst_3731_) == 0)
{
lean_object* v_snd_3732_; lean_object* v___x_3733_; lean_object* v___x_3735_; 
v_snd_3732_ = lean_ctor_get(v_a_3727_, 1);
lean_inc(v_snd_3732_);
lean_dec(v_a_3727_);
v___x_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3733_, 0, v_snd_3732_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v___x_3733_);
v___x_3735_ = v___x_3729_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v___x_3733_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
else
{
lean_object* v_val_3737_; lean_object* v___x_3739_; 
lean_inc_ref(v_fst_3731_);
lean_dec(v_a_3727_);
v_val_3737_ = lean_ctor_get(v_fst_3731_, 0);
lean_inc(v_val_3737_);
lean_dec_ref_known(v_fst_3731_, 1);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v_val_3737_);
v___x_3739_ = v___x_3729_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_val_3737_);
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
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
v_a_3742_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3726_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3726_);
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
else
{
lean_object* v_vs_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; size_t v_sz_3753_; size_t v___x_3754_; lean_object* v___x_3755_; 
v_vs_3750_ = lean_ctor_get(v_n_3714_, 0);
v___x_3751_ = lean_box(0);
v___x_3752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3751_);
lean_ctor_set(v___x_3752_, 1, v_b_3715_);
v_sz_3753_ = lean_array_size(v_vs_3750_);
v___x_3754_ = ((size_t)0ULL);
v___x_3755_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3713_, v_vs_3750_, v_sz_3753_, v___x_3754_, v___x_3752_, v___y_3716_, v___y_3717_, v___y_3718_, v___y_3719_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v_a_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3770_; 
v_a_3756_ = lean_ctor_get(v___x_3755_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3758_ = v___x_3755_;
v_isShared_3759_ = v_isSharedCheck_3770_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_a_3756_);
lean_dec(v___x_3755_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3770_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v_fst_3760_; 
v_fst_3760_ = lean_ctor_get(v_a_3756_, 0);
if (lean_obj_tag(v_fst_3760_) == 0)
{
lean_object* v_snd_3761_; lean_object* v___x_3762_; lean_object* v___x_3764_; 
v_snd_3761_ = lean_ctor_get(v_a_3756_, 1);
lean_inc(v_snd_3761_);
lean_dec(v_a_3756_);
v___x_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3762_, 0, v_snd_3761_);
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 0, v___x_3762_);
v___x_3764_ = v___x_3758_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v___x_3762_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
else
{
lean_object* v_val_3766_; lean_object* v___x_3768_; 
lean_inc_ref(v_fst_3760_);
lean_dec(v_a_3756_);
v_val_3766_ = lean_ctor_get(v_fst_3760_, 0);
lean_inc(v_val_3766_);
lean_dec_ref_known(v_fst_3760_, 1);
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 0, v_val_3766_);
v___x_3768_ = v___x_3758_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_val_3766_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
}
else
{
lean_object* v_a_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3778_; 
v_a_3771_ = lean_ctor_get(v___x_3755_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3773_ = v___x_3755_;
v_isShared_3774_ = v_isSharedCheck_3778_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_a_3771_);
lean_dec(v___x_3755_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3778_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3776_; 
if (v_isShared_3774_ == 0)
{
v___x_3776_ = v___x_3773_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v_a_3771_);
v___x_3776_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
return v___x_3776_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object* v_init_3779_, lean_object* v_mvarId_3780_, lean_object* v_as_3781_, size_t v_sz_3782_, size_t v_i_3783_, lean_object* v_b_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
uint8_t v___x_3790_; 
v___x_3790_ = lean_usize_dec_lt(v_i_3783_, v_sz_3782_);
if (v___x_3790_ == 0)
{
lean_object* v___x_3791_; 
lean_dec(v_mvarId_3780_);
v___x_3791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3791_, 0, v_b_3784_);
return v___x_3791_;
}
else
{
lean_object* v_snd_3792_; lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3826_; 
v_snd_3792_ = lean_ctor_get(v_b_3784_, 1);
v_isSharedCheck_3826_ = !lean_is_exclusive(v_b_3784_);
if (v_isSharedCheck_3826_ == 0)
{
lean_object* v_unused_3827_; 
v_unused_3827_ = lean_ctor_get(v_b_3784_, 0);
lean_dec(v_unused_3827_);
v___x_3794_ = v_b_3784_;
v_isShared_3795_ = v_isSharedCheck_3826_;
goto v_resetjp_3793_;
}
else
{
lean_inc(v_snd_3792_);
lean_dec(v_b_3784_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3826_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3796_; lean_object* v_a_3797_; lean_object* v___x_3798_; 
v___x_3796_ = lean_box(0);
v_a_3797_ = lean_array_uget_borrowed(v_as_3781_, v_i_3783_);
lean_inc(v_snd_3792_);
lean_inc(v_mvarId_3780_);
v___x_3798_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3779_, v_mvarId_3780_, v_a_3797_, v_snd_3792_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3817_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3801_ = v___x_3798_;
v_isShared_3802_ = v_isSharedCheck_3817_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3798_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3817_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
if (lean_obj_tag(v_a_3799_) == 0)
{
lean_object* v___x_3803_; lean_object* v___x_3805_; 
lean_dec(v_mvarId_3780_);
v___x_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3803_, 0, v_a_3799_);
if (v_isShared_3795_ == 0)
{
lean_ctor_set(v___x_3794_, 0, v___x_3803_);
v___x_3805_ = v___x_3794_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3803_);
lean_ctor_set(v_reuseFailAlloc_3809_, 1, v_snd_3792_);
v___x_3805_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
lean_object* v___x_3807_; 
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3805_);
v___x_3807_ = v___x_3801_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
else
{
lean_object* v_a_3810_; lean_object* v___x_3812_; 
lean_del_object(v___x_3801_);
lean_dec(v_snd_3792_);
v_a_3810_ = lean_ctor_get(v_a_3799_, 0);
lean_inc(v_a_3810_);
lean_dec_ref_known(v_a_3799_, 1);
if (v_isShared_3795_ == 0)
{
lean_ctor_set(v___x_3794_, 1, v_a_3810_);
lean_ctor_set(v___x_3794_, 0, v___x_3796_);
v___x_3812_ = v___x_3794_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3796_);
lean_ctor_set(v_reuseFailAlloc_3816_, 1, v_a_3810_);
v___x_3812_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
size_t v___x_3813_; size_t v___x_3814_; 
v___x_3813_ = ((size_t)1ULL);
v___x_3814_ = lean_usize_add(v_i_3783_, v___x_3813_);
v_i_3783_ = v___x_3814_;
v_b_3784_ = v___x_3812_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3825_; 
lean_del_object(v___x_3794_);
lean_dec(v_snd_3792_);
lean_dec(v_mvarId_3780_);
v_a_3818_ = lean_ctor_get(v___x_3798_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3820_ = v___x_3798_;
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3798_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3823_; 
if (v_isShared_3821_ == 0)
{
v___x_3823_ = v___x_3820_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3818_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3828_, lean_object* v_mvarId_3829_, lean_object* v_as_3830_, lean_object* v_sz_3831_, lean_object* v_i_3832_, lean_object* v_b_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_){
_start:
{
size_t v_sz_boxed_3839_; size_t v_i_boxed_3840_; lean_object* v_res_3841_; 
v_sz_boxed_3839_ = lean_unbox_usize(v_sz_3831_);
lean_dec(v_sz_3831_);
v_i_boxed_3840_ = lean_unbox_usize(v_i_3832_);
lean_dec(v_i_3832_);
v_res_3841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3828_, v_mvarId_3829_, v_as_3830_, v_sz_boxed_3839_, v_i_boxed_3840_, v_b_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
lean_dec(v___y_3835_);
lean_dec_ref(v___y_3834_);
lean_dec_ref(v_as_3830_);
lean_dec_ref(v_init_3828_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object* v_init_3842_, lean_object* v_mvarId_3843_, lean_object* v_n_3844_, lean_object* v_b_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_){
_start:
{
lean_object* v_res_3851_; 
v_res_3851_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3842_, v_mvarId_3843_, v_n_3844_, v_b_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_dec(v___y_3847_);
lean_dec_ref(v___y_3846_);
lean_dec_ref(v_n_3844_);
lean_dec_ref(v_init_3842_);
return v_res_3851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object* v_mvarId_3855_, lean_object* v_as_3856_, size_t v_sz_3857_, size_t v_i_3858_, lean_object* v_b_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
uint8_t v___x_3865_; 
v___x_3865_ = lean_usize_dec_lt(v_i_3858_, v_sz_3857_);
if (v___x_3865_ == 0)
{
lean_object* v___x_3866_; 
lean_dec(v_mvarId_3855_);
v___x_3866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3866_, 0, v_b_3859_);
return v___x_3866_;
}
else
{
lean_object* v_snd_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3919_; 
v_snd_3867_ = lean_ctor_get(v_b_3859_, 1);
v_isSharedCheck_3919_ = !lean_is_exclusive(v_b_3859_);
if (v_isSharedCheck_3919_ == 0)
{
lean_object* v_unused_3920_; 
v_unused_3920_ = lean_ctor_get(v_b_3859_, 0);
lean_dec(v_unused_3920_);
v___x_3869_ = v_b_3859_;
v_isShared_3870_ = v_isSharedCheck_3919_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_snd_3867_);
lean_dec(v_b_3859_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3919_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3871_; lean_object* v_a_3873_; lean_object* v_a_3880_; 
v___x_3871_ = lean_box(0);
v_a_3880_ = lean_array_uget(v_as_3856_, v_i_3858_);
if (lean_obj_tag(v_a_3880_) == 0)
{
v_a_3873_ = v_snd_3867_;
goto v___jp_3872_;
}
else
{
lean_object* v_val_3881_; lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3918_; 
v_val_3881_ = lean_ctor_get(v_a_3880_, 0);
v_isSharedCheck_3918_ = !lean_is_exclusive(v_a_3880_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3883_ = v_a_3880_;
v_isShared_3884_ = v_isSharedCheck_3918_;
goto v_resetjp_3882_;
}
else
{
lean_inc(v_val_3881_);
lean_dec(v_a_3880_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3918_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3885_ = lean_box(0);
v___x_3886_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v___x_3887_ = l_Lean_LocalDecl_fvarId(v_val_3881_);
lean_dec(v_val_3881_);
lean_inc(v_mvarId_3855_);
v___x_3888_ = l_Lean_Meta_subst_x3f(v_mvarId_3855_, v___x_3887_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3909_; 
v_a_3889_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3891_ = v___x_3888_;
v_isShared_3892_ = v_isSharedCheck_3909_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3888_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3909_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
if (lean_obj_tag(v_a_3889_) == 1)
{
lean_object* v___x_3894_; 
lean_del_object(v___x_3869_);
lean_dec(v_mvarId_3855_);
lean_inc_ref(v_a_3889_);
if (v_isShared_3884_ == 0)
{
lean_ctor_set(v___x_3883_, 0, v_a_3889_);
v___x_3894_ = v___x_3883_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3906_; 
v_isSharedCheck_3906_ = !lean_is_exclusive(v_a_3889_);
if (v_isSharedCheck_3906_ == 0)
{
lean_object* v_unused_3907_; 
v_unused_3907_ = lean_ctor_get(v_a_3889_, 0);
lean_dec(v_unused_3907_);
v___x_3896_ = v_a_3889_;
v_isShared_3897_ = v_isSharedCheck_3906_;
goto v_resetjp_3895_;
}
else
{
lean_dec(v_a_3889_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3906_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3898_; lean_object* v___x_3900_; 
v___x_3898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3894_);
lean_ctor_set(v___x_3898_, 1, v___x_3885_);
if (v_isShared_3897_ == 0)
{
lean_ctor_set(v___x_3896_, 0, v___x_3898_);
v___x_3900_ = v___x_3896_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
lean_object* v___x_3901_; lean_object* v___x_3903_; 
v___x_3901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3900_);
lean_ctor_set(v___x_3901_, 1, v_snd_3867_);
if (v_isShared_3892_ == 0)
{
lean_ctor_set(v___x_3891_, 0, v___x_3901_);
v___x_3903_ = v___x_3891_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v___x_3901_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
}
else
{
lean_del_object(v___x_3891_);
lean_dec(v_a_3889_);
lean_del_object(v___x_3883_);
lean_dec(v_snd_3867_);
v_a_3873_ = v___x_3886_;
goto v___jp_3872_;
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3917_; 
lean_del_object(v___x_3883_);
lean_del_object(v___x_3869_);
lean_dec(v_snd_3867_);
lean_dec(v_mvarId_3855_);
v_a_3910_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3912_ = v___x_3888_;
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3888_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3915_; 
if (v_isShared_3913_ == 0)
{
v___x_3915_ = v___x_3912_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_a_3910_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
}
}
}
v___jp_3872_:
{
lean_object* v___x_3875_; 
if (v_isShared_3870_ == 0)
{
lean_ctor_set(v___x_3869_, 1, v_a_3873_);
lean_ctor_set(v___x_3869_, 0, v___x_3871_);
v___x_3875_ = v___x_3869_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v___x_3871_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_a_3873_);
v___x_3875_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
size_t v___x_3876_; size_t v___x_3877_; 
v___x_3876_ = ((size_t)1ULL);
v___x_3877_ = lean_usize_add(v_i_3858_, v___x_3876_);
v_i_3858_ = v___x_3877_;
v_b_3859_ = v___x_3875_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object* v_mvarId_3921_, lean_object* v_as_3922_, lean_object* v_sz_3923_, lean_object* v_i_3924_, lean_object* v_b_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
size_t v_sz_boxed_3931_; size_t v_i_boxed_3932_; lean_object* v_res_3933_; 
v_sz_boxed_3931_ = lean_unbox_usize(v_sz_3923_);
lean_dec(v_sz_3923_);
v_i_boxed_3932_ = lean_unbox_usize(v_i_3924_);
lean_dec(v_i_3924_);
v_res_3933_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3921_, v_as_3922_, v_sz_boxed_3931_, v_i_boxed_3932_, v_b_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_);
lean_dec(v___y_3929_);
lean_dec_ref(v___y_3928_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
lean_dec_ref(v_as_3922_);
return v_res_3933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object* v_mvarId_3934_, lean_object* v_as_3935_, size_t v_sz_3936_, size_t v_i_3937_, lean_object* v_b_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
uint8_t v___x_3944_; 
v___x_3944_ = lean_usize_dec_lt(v_i_3937_, v_sz_3936_);
if (v___x_3944_ == 0)
{
lean_object* v___x_3945_; 
lean_dec(v_mvarId_3934_);
v___x_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3945_, 0, v_b_3938_);
return v___x_3945_;
}
else
{
lean_object* v_snd_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3998_; 
v_snd_3946_ = lean_ctor_get(v_b_3938_, 1);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_b_3938_);
if (v_isSharedCheck_3998_ == 0)
{
lean_object* v_unused_3999_; 
v_unused_3999_ = lean_ctor_get(v_b_3938_, 0);
lean_dec(v_unused_3999_);
v___x_3948_ = v_b_3938_;
v_isShared_3949_ = v_isSharedCheck_3998_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_snd_3946_);
lean_dec(v_b_3938_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3998_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3950_; lean_object* v_a_3952_; lean_object* v_a_3959_; 
v___x_3950_ = lean_box(0);
v_a_3959_ = lean_array_uget(v_as_3935_, v_i_3937_);
if (lean_obj_tag(v_a_3959_) == 0)
{
v_a_3952_ = v_snd_3946_;
goto v___jp_3951_;
}
else
{
lean_object* v_val_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3997_; 
v_val_3960_ = lean_ctor_get(v_a_3959_, 0);
v_isSharedCheck_3997_ = !lean_is_exclusive(v_a_3959_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3962_ = v_a_3959_;
v_isShared_3963_ = v_isSharedCheck_3997_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_val_3960_);
lean_dec(v_a_3959_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3997_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3964_ = lean_box(0);
v___x_3965_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v___x_3966_ = l_Lean_LocalDecl_fvarId(v_val_3960_);
lean_dec(v_val_3960_);
lean_inc(v_mvarId_3934_);
v___x_3967_ = l_Lean_Meta_subst_x3f(v_mvarId_3934_, v___x_3966_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
if (lean_obj_tag(v___x_3967_) == 0)
{
lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3988_; 
v_a_3968_ = lean_ctor_get(v___x_3967_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3970_ = v___x_3967_;
v_isShared_3971_ = v_isSharedCheck_3988_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v___x_3967_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3988_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
if (lean_obj_tag(v_a_3968_) == 1)
{
lean_object* v___x_3973_; 
lean_del_object(v___x_3948_);
lean_dec(v_mvarId_3934_);
lean_inc_ref(v_a_3968_);
if (v_isShared_3963_ == 0)
{
lean_ctor_set(v___x_3962_, 0, v_a_3968_);
v___x_3973_ = v___x_3962_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3968_);
v___x_3973_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3985_; 
v_isSharedCheck_3985_ = !lean_is_exclusive(v_a_3968_);
if (v_isSharedCheck_3985_ == 0)
{
lean_object* v_unused_3986_; 
v_unused_3986_ = lean_ctor_get(v_a_3968_, 0);
lean_dec(v_unused_3986_);
v___x_3975_ = v_a_3968_;
v_isShared_3976_ = v_isSharedCheck_3985_;
goto v_resetjp_3974_;
}
else
{
lean_dec(v_a_3968_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3985_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3977_; lean_object* v___x_3979_; 
v___x_3977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3973_);
lean_ctor_set(v___x_3977_, 1, v___x_3964_);
if (v_isShared_3976_ == 0)
{
lean_ctor_set(v___x_3975_, 0, v___x_3977_);
v___x_3979_ = v___x_3975_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v___x_3977_);
v___x_3979_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
lean_object* v___x_3980_; lean_object* v___x_3982_; 
v___x_3980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
lean_ctor_set(v___x_3980_, 1, v_snd_3946_);
if (v_isShared_3971_ == 0)
{
lean_ctor_set(v___x_3970_, 0, v___x_3980_);
v___x_3982_ = v___x_3970_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v___x_3980_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
else
{
lean_del_object(v___x_3970_);
lean_dec(v_a_3968_);
lean_del_object(v___x_3962_);
lean_dec(v_snd_3946_);
v_a_3952_ = v___x_3965_;
goto v___jp_3951_;
}
}
}
else
{
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3996_; 
lean_del_object(v___x_3962_);
lean_del_object(v___x_3948_);
lean_dec(v_snd_3946_);
lean_dec(v_mvarId_3934_);
v_a_3989_ = lean_ctor_get(v___x_3967_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3991_ = v___x_3967_;
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v___x_3967_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v_a_3989_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
}
v___jp_3951_:
{
lean_object* v___x_3954_; 
if (v_isShared_3949_ == 0)
{
lean_ctor_set(v___x_3948_, 1, v_a_3952_);
lean_ctor_set(v___x_3948_, 0, v___x_3950_);
v___x_3954_ = v___x_3948_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v___x_3950_);
lean_ctor_set(v_reuseFailAlloc_3958_, 1, v_a_3952_);
v___x_3954_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
size_t v___x_3955_; size_t v___x_3956_; lean_object* v___x_3957_; 
v___x_3955_ = ((size_t)1ULL);
v___x_3956_ = lean_usize_add(v_i_3937_, v___x_3955_);
v___x_3957_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3934_, v_as_3935_, v_sz_3936_, v___x_3956_, v___x_3954_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
return v___x_3957_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object* v_mvarId_4000_, lean_object* v_as_4001_, lean_object* v_sz_4002_, lean_object* v_i_4003_, lean_object* v_b_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_){
_start:
{
size_t v_sz_boxed_4010_; size_t v_i_boxed_4011_; lean_object* v_res_4012_; 
v_sz_boxed_4010_ = lean_unbox_usize(v_sz_4002_);
lean_dec(v_sz_4002_);
v_i_boxed_4011_ = lean_unbox_usize(v_i_4003_);
lean_dec(v_i_4003_);
v_res_4012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_4000_, v_as_4001_, v_sz_boxed_4010_, v_i_boxed_4011_, v_b_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_);
lean_dec(v___y_4008_);
lean_dec_ref(v___y_4007_);
lean_dec(v___y_4006_);
lean_dec_ref(v___y_4005_);
lean_dec_ref(v_as_4001_);
return v_res_4012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object* v_mvarId_4013_, lean_object* v_t_4014_, lean_object* v_init_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v_root_4021_; lean_object* v_tail_4022_; lean_object* v___x_4023_; 
v_root_4021_ = lean_ctor_get(v_t_4014_, 0);
v_tail_4022_ = lean_ctor_get(v_t_4014_, 1);
lean_inc(v_mvarId_4013_);
lean_inc_ref(v_init_4015_);
v___x_4023_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_4015_, v_mvarId_4013_, v_root_4021_, v_init_4015_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_);
lean_dec_ref(v_init_4015_);
if (lean_obj_tag(v___x_4023_) == 0)
{
lean_object* v_a_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4060_; 
v_a_4024_ = lean_ctor_get(v___x_4023_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4023_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4026_ = v___x_4023_;
v_isShared_4027_ = v_isSharedCheck_4060_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_a_4024_);
lean_dec(v___x_4023_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4060_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
if (lean_obj_tag(v_a_4024_) == 0)
{
lean_object* v_a_4028_; lean_object* v___x_4030_; 
lean_dec(v_mvarId_4013_);
v_a_4028_ = lean_ctor_get(v_a_4024_, 0);
lean_inc(v_a_4028_);
lean_dec_ref_known(v_a_4024_, 1);
if (v_isShared_4027_ == 0)
{
lean_ctor_set(v___x_4026_, 0, v_a_4028_);
v___x_4030_ = v___x_4026_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_a_4028_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
else
{
lean_object* v_a_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; size_t v_sz_4035_; size_t v___x_4036_; lean_object* v___x_4037_; 
lean_del_object(v___x_4026_);
v_a_4032_ = lean_ctor_get(v_a_4024_, 0);
lean_inc(v_a_4032_);
lean_dec_ref_known(v_a_4024_, 1);
v___x_4033_ = lean_box(0);
v___x_4034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
lean_ctor_set(v___x_4034_, 1, v_a_4032_);
v_sz_4035_ = lean_array_size(v_tail_4022_);
v___x_4036_ = ((size_t)0ULL);
v___x_4037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_4013_, v_tail_4022_, v_sz_4035_, v___x_4036_, v___x_4034_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_object* v_a_4038_; lean_object* v___x_4040_; uint8_t v_isShared_4041_; uint8_t v_isSharedCheck_4051_; 
v_a_4038_ = lean_ctor_get(v___x_4037_, 0);
v_isSharedCheck_4051_ = !lean_is_exclusive(v___x_4037_);
if (v_isSharedCheck_4051_ == 0)
{
v___x_4040_ = v___x_4037_;
v_isShared_4041_ = v_isSharedCheck_4051_;
goto v_resetjp_4039_;
}
else
{
lean_inc(v_a_4038_);
lean_dec(v___x_4037_);
v___x_4040_ = lean_box(0);
v_isShared_4041_ = v_isSharedCheck_4051_;
goto v_resetjp_4039_;
}
v_resetjp_4039_:
{
lean_object* v_fst_4042_; 
v_fst_4042_ = lean_ctor_get(v_a_4038_, 0);
if (lean_obj_tag(v_fst_4042_) == 0)
{
lean_object* v_snd_4043_; lean_object* v___x_4045_; 
v_snd_4043_ = lean_ctor_get(v_a_4038_, 1);
lean_inc(v_snd_4043_);
lean_dec(v_a_4038_);
if (v_isShared_4041_ == 0)
{
lean_ctor_set(v___x_4040_, 0, v_snd_4043_);
v___x_4045_ = v___x_4040_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_snd_4043_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
else
{
lean_object* v_val_4047_; lean_object* v___x_4049_; 
lean_inc_ref(v_fst_4042_);
lean_dec(v_a_4038_);
v_val_4047_ = lean_ctor_get(v_fst_4042_, 0);
lean_inc(v_val_4047_);
lean_dec_ref_known(v_fst_4042_, 1);
if (v_isShared_4041_ == 0)
{
lean_ctor_set(v___x_4040_, 0, v_val_4047_);
v___x_4049_ = v___x_4040_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_val_4047_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
return v___x_4049_;
}
}
}
}
else
{
lean_object* v_a_4052_; lean_object* v___x_4054_; uint8_t v_isShared_4055_; uint8_t v_isSharedCheck_4059_; 
v_a_4052_ = lean_ctor_get(v___x_4037_, 0);
v_isSharedCheck_4059_ = !lean_is_exclusive(v___x_4037_);
if (v_isSharedCheck_4059_ == 0)
{
v___x_4054_ = v___x_4037_;
v_isShared_4055_ = v_isSharedCheck_4059_;
goto v_resetjp_4053_;
}
else
{
lean_inc(v_a_4052_);
lean_dec(v___x_4037_);
v___x_4054_ = lean_box(0);
v_isShared_4055_ = v_isSharedCheck_4059_;
goto v_resetjp_4053_;
}
v_resetjp_4053_:
{
lean_object* v___x_4057_; 
if (v_isShared_4055_ == 0)
{
v___x_4057_ = v___x_4054_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4058_; 
v_reuseFailAlloc_4058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4058_, 0, v_a_4052_);
v___x_4057_ = v_reuseFailAlloc_4058_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
return v___x_4057_;
}
}
}
}
}
}
else
{
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4068_; 
lean_dec(v_mvarId_4013_);
v_a_4061_ = lean_ctor_get(v___x_4023_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_4023_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4063_ = v___x_4023_;
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v___x_4023_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4066_; 
if (v_isShared_4064_ == 0)
{
v___x_4066_ = v___x_4063_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_a_4061_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object* v_mvarId_4069_, lean_object* v_t_4070_, lean_object* v_init_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4069_, v_t_4070_, v_init_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_);
lean_dec(v___y_4075_);
lean_dec_ref(v___y_4074_);
lean_dec(v___y_4073_);
lean_dec_ref(v___y_4072_);
lean_dec_ref(v_t_4070_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object* v_mvarId_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_){
_start:
{
lean_object* v_lctx_4087_; lean_object* v_decls_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v_lctx_4087_ = lean_ctor_get(v___y_4082_, 2);
v_decls_4088_ = lean_ctor_get(v_lctx_4087_, 1);
v___x_4089_ = lean_box(0);
v___x_4090_ = ((lean_object*)(l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0));
v___x_4091_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4081_, v_decls_4088_, v___x_4090_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4104_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4104_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4104_ == 0)
{
v___x_4094_ = v___x_4091_;
v_isShared_4095_ = v_isSharedCheck_4104_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4091_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4104_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v_fst_4096_; 
v_fst_4096_ = lean_ctor_get(v_a_4092_, 0);
lean_inc(v_fst_4096_);
lean_dec(v_a_4092_);
if (lean_obj_tag(v_fst_4096_) == 0)
{
lean_object* v___x_4098_; 
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v___x_4089_);
v___x_4098_ = v___x_4094_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v___x_4089_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
else
{
lean_object* v_val_4100_; lean_object* v___x_4102_; 
v_val_4100_ = lean_ctor_get(v_fst_4096_, 0);
lean_inc(v_val_4100_);
lean_dec_ref_known(v_fst_4096_, 1);
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v_val_4100_);
v___x_4102_ = v___x_4094_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v_val_4100_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
}
}
}
}
else
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4112_; 
v_a_4105_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4112_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4112_ == 0)
{
v___x_4107_ = v___x_4091_;
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___x_4091_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4112_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4110_; 
if (v_isShared_4108_ == 0)
{
v___x_4110_ = v___x_4107_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4111_; 
v_reuseFailAlloc_4111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4111_, 0, v_a_4105_);
v___x_4110_ = v_reuseFailAlloc_4111_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
return v___x_4110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object* v_mvarId_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_){
_start:
{
lean_object* v_res_4119_; 
v_res_4119_ = l_Lean_Meta_substSomeVar_x3f___lam__0(v_mvarId_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_);
lean_dec(v___y_4117_);
lean_dec_ref(v___y_4116_);
lean_dec(v___y_4115_);
lean_dec_ref(v___y_4114_);
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object* v_mvarId_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v___f_4126_; lean_object* v___x_4127_; 
lean_inc(v_mvarId_4120_);
v___f_4126_ = lean_alloc_closure((void*)(l_Lean_Meta_substSomeVar_x3f___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4126_, 0, v_mvarId_4120_);
v___x_4127_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_4120_, v___f_4126_, v_a_4121_, v_a_4122_, v_a_4123_, v_a_4124_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object* v_mvarId_4128_, lean_object* v_a_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4128_, v_a_4129_, v_a_4130_, v_a_4131_, v_a_4132_);
lean_dec(v_a_4132_);
lean_dec_ref(v_a_4131_);
lean_dec(v_a_4130_);
lean_dec_ref(v_a_4129_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object* v_mvarId_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v___x_4141_; 
lean_inc(v_mvarId_4135_);
v___x_4141_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4135_, v_a_4136_, v_a_4137_, v_a_4138_, v_a_4139_);
if (lean_obj_tag(v___x_4141_) == 0)
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4151_; 
v_a_4142_ = lean_ctor_get(v___x_4141_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v___x_4141_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4144_ = v___x_4141_;
v_isShared_4145_ = v_isSharedCheck_4151_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v___x_4141_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4151_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
if (lean_obj_tag(v_a_4142_) == 1)
{
lean_object* v_val_4146_; 
lean_del_object(v___x_4144_);
lean_dec(v_mvarId_4135_);
v_val_4146_ = lean_ctor_get(v_a_4142_, 0);
lean_inc(v_val_4146_);
lean_dec_ref_known(v_a_4142_, 1);
v_mvarId_4135_ = v_val_4146_;
goto _start;
}
else
{
lean_object* v___x_4149_; 
lean_dec(v_a_4142_);
if (v_isShared_4145_ == 0)
{
lean_ctor_set(v___x_4144_, 0, v_mvarId_4135_);
v___x_4149_ = v___x_4144_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_mvarId_4135_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
return v___x_4149_;
}
}
}
}
else
{
lean_object* v_a_4152_; lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4159_; 
lean_dec(v_mvarId_4135_);
v_a_4152_ = lean_ctor_get(v___x_4141_, 0);
v_isSharedCheck_4159_ = !lean_is_exclusive(v___x_4141_);
if (v_isSharedCheck_4159_ == 0)
{
v___x_4154_ = v___x_4141_;
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
else
{
lean_inc(v_a_4152_);
lean_dec(v___x_4141_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v___x_4157_; 
if (v_isShared_4155_ == 0)
{
v___x_4157_ = v___x_4154_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v_a_4152_);
v___x_4157_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
return v___x_4157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object* v_mvarId_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_){
_start:
{
lean_object* v_res_4166_; 
v_res_4166_ = l_Lean_Meta_substVars(v_mvarId_4160_, v_a_4161_, v_a_4162_, v_a_4163_, v_a_4164_);
lean_dec(v_a_4164_);
lean_dec_ref(v_a_4163_);
lean_dec(v_a_4162_);
lean_dec_ref(v_a_4161_);
return v_res_4166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4229_; uint8_t v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4229_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_4230_ = 0;
v___x_4231_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4232_ = l_Lean_registerTraceClass(v___x_4229_, v___x_4230_, v___x_4231_);
return v___x_4232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2____boxed(lean_object* v_a_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
return v_res_4234_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Subst(builtin);
}
#ifdef __cplusplus
}
#endif
